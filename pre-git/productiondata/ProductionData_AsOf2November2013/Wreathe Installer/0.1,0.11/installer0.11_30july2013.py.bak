#! /usr/bin/env python
# -*- coding: utf-8 -*-
#Installer. Version 0.11, 30 July 2013

try:
  import pygtk
  pygtk.require('2.0')
except:
  pass
try:
  import gtk
  import gtk.glade
except:
  print('GTK not available')
  sys.exit(1)

class Buglump:

  def on_window1_destroy(self, object, data=None):
    print "quit with cancel"
    gtk.main_quit()

  def on_btn_quit_clicked(self, menuitem, data=None):
    print "quit from menu"
    gtk.main_quit()

  def __init__(self):
    self.gladefile = "tutorial_2.glade"
    self.builder = gtk.Builder()
    self.builder.add_from_file(self.gladefile)
    self.builder.connect_signals(self)
    self.window = self.builder.get_object("window1")
    gtk.Window.fullscreen(self.window)
#    
#    imagename = '1193_2-edit-9August2012.png'
#    win = gtk.Window()
#    pixbuf = gtk.gdk.pixbuf_new_from_file(imagename)
#    pixmap, mask = pixbuf.render_pixmap_and_mask()
#    width, height = pixmap.get_size()
#    del pixbuf
#    win.set_app_paintable(True)
#    win.resize(width, height)
#    win.realize()
#    win.window.set_back_pixmap(pixmap, False)
#    del pixmap

    self.window.show()

if __name__ == "__main__":
  main = Buglump()
  gtk.main()