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


class DescriptorTag(object):
    _struct = struct.Struct('<HHBxHHHI')

    def __init__(self, buf):
        data = self._struct.unpack(buf[:16])
        (self.identifier, self.version, self.checksum, serial_number,
                crc, self.crc_length, self.location) = data

    def __repr__(self):
        return '<DescriptorTag with identifier: %d; version: %d; location: %d>' % (
                self.identifier,
                self.version,
                self.location,
                )


class OSTACompressedUnicode(str):
    def __new__(self, buf):
        stype = buf[0]

        if stype == 8:
            return buf[1:].decode()
        elif stype == 16:
            raise NotImplementedError
        raise RuntimeError


class ExtentAD(object):
    _struct = struct.Struct('<II8xH2x')
    size = _struct.size

    def __init__(self, buf):
        data = self._struct.unpack(buf)
        length, self.location, self.partition = data
        self.length = length & 0x3fffffff
        self.flags = length >> 30

    def __repr__(self):
        return '<ExtentAD with location: %d; length: %d; flags: %d; partition: %d>' % (
                self.location,
                self.length,
                self.flags,
                self.partition,
                )


class LongAD(object):
    _struct = struct.Struct('<IIH6x')
    size = _struct.size

    def __init__(self, buf):
        data = self._struct.unpack(buf)
        length, self.location, self.partition = data
        self.length = length & 0x3fffffff
        self.flags = length >> 30

    def __repr__(self):
        return '<LongAD with location: %d; length: %d; flags: %d; partition: %d>' % (
                self.location,
                self.length,
                self.flags,
                self.partition,
                )


class ShortAD(object):
    _struct = struct.Struct('<II')
    size = _struct.size

    def __init__(self, buf):
        data = self._struct.unpack(buf)
        length, self.location = data
        self.length = length & 0x3fffffff
        self.flags = length >> 30

    def __repr__(self):
        return '<ShortAD with location: %d; length: %d; flags: %x' % (
                self.location,
                self.length,
                self.flags,
                )
