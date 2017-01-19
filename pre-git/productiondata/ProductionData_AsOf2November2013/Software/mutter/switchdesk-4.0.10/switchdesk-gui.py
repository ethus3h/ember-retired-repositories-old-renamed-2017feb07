#! /usr/bin/env python

## Copyright (C) 2004 Red Hat, Inc.
## Copyright (C) 2004 Than Ngo <than@redhat.com>

## This program is free software; you can redistribute it and/or modify
## it under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 2 of the License, or
## (at your option) any later version.

## This program is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU General Public License for more details.

## You should have received a copy of the GNU General Public License
## along with this program; if not, write to the Free Software
## Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.

import sys

SWITCHDESKTOPDIR = '/usr/share/switchdesk/'
ICONDIR = SWITCHDESKTOPDIR + '/pixmaps/'

if not "/usr/lib/rhs/python" in sys.path:
    sys.path.append("/usr/lib/rhs/python")

if not SWITCHDESKTOPDIR in sys.path:
    sys.path.append(SWITCHDESKTOPDIR)

import signal
import os
import os.path
import string
import gettext
from backend import *


##
## I18N
##
gettext.bindtextdomain(PROGNAME, '/usr/share/locale')
gettext.textdomain(PROGNAME)
try:
    gettext.install(PROGNAME, '/usr/share/locale', 1)
except IOError:
    import __builtin__
    __builtin__.__dict__['_'] = unicode    

import gtk
import gtk.glade

class mainDialog:
    def __init__(self):
        self.cw = CW
        self.wmlist = WMLIST
        self.defaultw = getDefaultWm()
        self.wm = WINDOWMANAGERS[self.defaultw][OPTION_NAME]

    def main(self):
        glade_file = 'switchdesk.glade'

        if not os.path.isfile(glade_file):
            glade_file = GLADEPATH + glade_file
        if not os.path.isfile(glade_file):
            glade_file = SWITCHMAILDIR + glade_file

        self.xml = gtk.glade.XML(glade_file, None, domain=PROGNAME)

        self.xml.signal_autoconnect(
            {
            'on_cancelB_clicked' : self.on_cancelB_clicked,
            'on_okB_clicked' : self.on_okB_clicked,
            'on_gnomeRB_clicked' : (self.on_RB_clicked, GNOME),
            'on_kdeRB_clicked' : (self.on_RB_clicked, KDE),
            'on_xfceRB_clicked' : (self.on_RB_clicked, XFCE),
            'on_twmRB_clicked' : (self.on_RB_clicked, TWM),
            'on_windowmakerRB_clicked' : (self.on_RB_clicked, WINDOWMAKER),
            'on_enlightenmentRB_clicked' : (self.on_RB_clicked, ENLIGHTENMENT),
            'on_fvwmRB_clicked' : (self.on_RB_clicked, FVWM),
            'on_icewmRB_clicked' : (self.on_RB_clicked, ICEWM),
            'on_fluxboxRB_clicked' : (self.on_RB_clicked, FLUXBOX),
            'on_defaultRB_clicked' : (self.on_RB_clicked, SYSTEM),
            })

        self.window = self.xml.get_widget('window')
        self.image = self.xml.get_widget('Image')
        self.window.connect('delete-event', self.on_Dialog_delete_event)
        self.window.connect('hide', gtk.main_quit)
        self.xml.get_widget('desktopImage').set_from_file(ICONDIR+'switchdesk.png')
        self.hydrate()
        gtk.main()
        
    def on_Dialog_delete_event(self, *args):
        gtk.main_quit()

    def on_cancelB_clicked(self, button):
        gtk.main_quit()

    def on_okB_clicked(self, button):
        self.window.hide()

        if self.xml.get_widget('localCB').get_active():
            self.wm = self.wm + ' local'

        if os.system(HELPER + ' ' + self.wm):
            self.warningDialog()
        else:
            self.infoDialog()

        gtk.main_quit()

    def on_RB_clicked(self, button, w):
        self.image.set_from_file(ICONDIR+WINDOWMANAGERS[w][ICON_NAME])
        self.wm = WINDOWMANAGERS[w][OPTION_NAME]

    def hydrate(self):
        self.window.set_title(_('Desktop Switcher'))
        self.xml.get_widget('titleLabel').set_text(TEXT)
        self.xml.get_widget('frameLabel').set_label(_('Available Desktops'))
        self.xml.get_widget('localCB').set_label(_('Change only applies to current display'))
        self.hydrate_wm()

    def hydrate_wm(self):
        for w in self.wmlist:
           self.xml.get_widget(WINDOWMANAGERS[w][WIDGET_NAME]).show()

        if self.cw in WINDOWMANAGERS.keys():
           self.xml.get_widget(WINDOWMANAGERS[self.cw][WIDGET_NAME]).set_active(TRUE)
           self.wm = WINDOWMANAGERS[self.cw][OPTION_NAME]
           self.xml.get_widget('Image').set_from_file(ICONDIR+WINDOWMANAGERS[self.cw][ICON_NAME])
        else:
           self.xml.get_widget(WINDOWMANAGERS[self.defaultw][WIDGET_NAME]).set_active(TRUE)
           self.wm = WINDOWMANAGERS[self.defaultw][OPTION_NAME]
           self.xml.get_widget('Image').set_from_file(ICONDIR+WINDOWMANAGERS[self.defaultw][ICON_NAME])

    def infoDialog(self):
        dlg = gtk.MessageDialog(self.window,
                                gtk.DIALOG_MODAL|gtk.DIALOG_DESTROY_WITH_PARENT,
                                gtk.MESSAGE_INFO,
                                gtk.BUTTONS_OK,
                                INFO_TEXT)
        
        dlg.set_position (gtk.WIN_POS_MOUSE)
        dlg.run()
        dlg.destroy()

    def warningDialog(self):
        dlg = gtk.MessageDialog(self.window,
                                gtk.DIALOG_MODAL|gtk.DIALOG_DESTROY_WITH_PARENT,
                                gtk.MESSAGE_INFO,
                                gtk.BUTTONS_OK,
                                WARNING_TEXT)
        dlg.set_position (gtk.WIN_POS_MOUSE)
        dlg.run()
        dlg.destroy()


# make ctrl-C work
if __name__ == '__main__':
    signal.signal (signal.SIGINT, signal.SIG_DFL)
    dlg = mainDialog().main()
    
    sys.exit(0)
