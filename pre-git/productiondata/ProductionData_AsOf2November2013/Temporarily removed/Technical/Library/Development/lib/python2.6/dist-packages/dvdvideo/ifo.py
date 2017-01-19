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

import struct


class MalformedIfoHeaderError(Exception):
    pass


class VmgIfoHeader(object):
    _struct = struct.Struct('>12s I 12x IHI 24x H 32x Q 24x II 56x IIIIIIII 32x 1792x')

    def __init__(self, buf):
        data = self._struct.unpack(buf)

        (id,
                self.part_bup_end,
                self.part_ifo_end,
                version,
                category,
                self.number_titlesets,
                pos,
                vmgi_mat_end,
                fp_pgc_start,
                self.part_menu_vob_start,
                vmgm1_start,
                vmgm2_start,
                vmgm3_start,
                vmgm4_start,
                vmgm5_start,
                vmgm6_start,
                vmgm7_start) = data

        if id != b'DVDVIDEO-VMG':
            raise MalformedIfoHeaderError


class VtsIfoHeader(object):
    _struct = struct.Struct('>12s I 12x IH 94x I 60x IIIIIIIIII 24x 1792x')

    def __init__(self, buf):
        data = self._struct.unpack(buf)

        (id,
                self.part_bup_end,
                self.part_ifo_end,
                version,
                vts_mat_end,
                self.part_menu_vob_start,
                self.part_title_vob_start,
                vtsm1_start,
                vtsm2_start,
                vtsm3_start,
                vtsm4_start,
                vtsm5_start,
                vtsm6_start,
                vtsm7_start,
                vtsm8_start,
                ) = data

        if id != b'DVDVIDEO-VTS':
            raise MalformedIfoHeaderError


class _Ifo(object):
    def dump(self):
        return self._file.dump(self.header.part_ifo_end + 1),

    
class VmgIfo(_Ifo):
    def __init__(self, file):
        self._file = file

        self.header = VmgIfoHeader(self._file.read_sector(0))


class VtsIfo(_Ifo):
    def __init__(self, file):
        self._file = file

        self.header = VtsIfoHeader(self._file.read_sector(0))
