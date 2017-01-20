"""
@copyright: 2009 Bastian Blank <waldi@debian.org>
@license: GNU GPL-3
"""
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License version 3 as
# published by the Free Software Foundation.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.

import itertools

from .ifo import MalformedIfoHeaderError, VmgIfo, VtsIfo
from .vob import MenuVob, TitleVob


class MalformedVolumePartError(Exception):
    pass


class Vmg(object):
    pass


class Vts(object):
    pass


class VmgUdf(Vmg):
    def __init__(self, media):
        try:
            file_ifo = media['VIDEO_TS.IFO']
            file_bup = media['VIDEO_TS.BUP']
        except KeyError as e:
            raise MalformedVolumePartError('Missing file %s' % e.args[0]) from e

        file_vob = media.get('VIDEO_TS.VOB')

        self.fileset = FileSetUdf(media, file_ifo, file_bup, file_vob)

        self.ifo = VmgIfo(self.fileset.ifo)
        self.bup = VmgIfo(self.fileset.bup)
        self.menu_vob = file_vob and MenuVob(self.fileset.menu_vob)

    def dump(self):
        return iter(self.fileset)


class VtsUdf(Vmg):
    def __init__(self, media, titleset):
        prefix = 'VTS_%02d' % titleset

        try:
            file_ifo = media['%s_0.IFO' % prefix]
            file_bup = media['%s_0.BUP' % prefix]
        except KeyError as e:
            raise MalformedVolumePartError('Missing file %s' % e.args[0])

        file_menu_vob = media.get('%s_0.VOB' % prefix)

        file_title_vob = []
        for i in range(1, 10):
            try:
                vob = media['%s_%d.VOB' % (prefix, i)]
                file_title_vob.append(vob)
            except KeyError:
                break

        self.fileset = FileSetUdf(media, file_ifo, file_bup, file_menu_vob, file_title_vob)

        try:
            self.ifo = VtsIfo(self.fileset.ifo)
        except MalformedIfoHeaderError:
            raise MalformedVolumePartError
        try:
            self.bup = VtsIfo(self.fileset.bup)
        except MalformedIfoHeaderError:
            self.bup = None

        if file_menu_vob:
            self.menu_vob = MenuVob(self.fileset.menu_vob)
        else:
            self.menu_vob = None

        self.title_vob = TitleVob(self.fileset.title_vob)

    def dump(self):
        return iter(self.fileset)


class FileSetUdf(object):
    class File(object):
        def __init__(self, media, name, location, length):
            self._media, self.name, self.location, self.length = media, name, location, length

        def __iter__(self):
            cur = 0
            self.seek(cur)
            while cur < self.length:
                r = self.read(min(512, self.length - cur))
                cur += len(r) // 2048
                yield r

        def __repr__(self):
            return '<%s with name: %r; location: %d; length: %d>' % (
                    self.__class__.__name__,
                    self.name,
                    self.location,
                    self.length,
                    )

        def _read(self, count):
            sector = self._media.tell()
            if sector < self.location:
                raise RuntimeError
            if sector + count > self.location + self.length:
                raise RuntimeError
            return self._media.read(count)

        def _seek(self, offset, **kw):
            if offset > self.length:
                raise RuntimeError
            self._media.seek(self.location + offset, **kw)


    class FileIfo(File):
        def read(self, count=1):
            return self._read(count)

        def read_sector(self, offset, count=1):
            self.seek(offset)
            return self.read(count)

        def seek(self, offset):
            self._seek(offset)


    class FileVob(File):
        def read(self, count=1):
            try:
                return self._read(count)
            except IOError:
                self._media.seek(self._media.tell() + count)
                return bytes(count * 2048)

        def seek(self, offset):
            self._seek(0, start_encrypted=True)
            self._seek(offset)


    def __init__(self, media, ifo, bup, menu_vob, title_vob=[]):
        input = [ifo, bup]

        if menu_vob:
            input.insert(1, menu_vob)

        input[-1:-1] = title_vob

        i = input[0]
        j = input[1]
        ad_i = i.entry.ad[0]
        ad_j = j.entry.ad[0]

        location = ad_i.location_absolute
        length = ad_j.location_absolute - location

        files = [self.FileIfo(media, i.name, location, length)]

        for i, j in itertools.zip_longest(input[1:-1], input[2:]):
            ad_i = i.entry.ad[0]
            ad_j = j.entry.ad[0]

            location = ad_i.location_absolute
            length = ad_j.location_absolute - location

            files.append(self.FileVob(media, i.name, location, length))

        i = input[-1]
        ad_i = i.entry.ad[0]
        location = ad_i.location_absolute
        length = files[0].length

        files.append(self.FileIfo(media, i.name, location, length))

        self.list = files[:]

        self.ifo = files.pop(0)
        self.bup = files.pop(-1)
        if menu_vob:
            self.menu_vob = files.pop(0)
        else:
            self.menu_vob = None
        self.title_vob = files

    def __iter__(self):
        return iter(self.list)
