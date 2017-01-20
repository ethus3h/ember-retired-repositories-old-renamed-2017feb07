#!/usr/bin/env python

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
try:
  import math
except:
  print('math lib missing')
  sys.exit(1)

class Buglump:

  def __init__(self):
    self.gladefile = "tutorial-4.glade"
    self.builder = gtk.Builder()
    self.builder.add_from_file(self.gladefile)
    self.builder.connect_signals(self)
    self.window = self.builder.get_object("window1")
    self.aboutdialog = self.builder.get_object("aboutdialog1")
    self.statusbar = self.builder.get_object("statusbar1")
    self.window.show()

  def on_window1_destroy(self, object, data=None):
    print "quit with cancel"
    gtk.main_quit()

  def on_gtk_quit_activate(self, menuitem, data=None):
    print "quit from menu"
    gtk.main_quit()

  def on_display_status_activate(self, menuitem, data=None):
    print "updated status bar"
    self.message_id = self.statusbar.push(0, "Updated Status Bar")

  def on_clear_status_activate(self, menuitem, data=None):
    print "cleared status bar"
    self.statusbar.remove_message(0, self.message_id)

  def on_gtk_about_activate(self, menuitem, data=None):
    print "help about selected"
    self.response = self.aboutdialog.run()
    self.aboutdialog.hide()

  def on_sfm_button_clicked(self, button, data=None):
    self.entry1 = self.builder.get_object("entry1")
    self.entry2 = self.builder.get_object("entry2")
    self.result1 = self.builder.get_object("result1")
    self.sfm = float(self.entry1.get_text())
    self.diameter = float(self.entry2.get_text())
    self.rpm = str(int(self.sfm * ((12/math.pi)/self.diameter)))
    print "calculate rpm clicked"
    self.result1.set_text(self.rpm)

if __name__ == "__main__":
  main = Buglump()
  gtk.main()
