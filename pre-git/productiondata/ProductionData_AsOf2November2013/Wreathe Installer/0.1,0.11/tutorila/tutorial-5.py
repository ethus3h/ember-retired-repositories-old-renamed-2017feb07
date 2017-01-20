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

class Buglump:

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

  def on_gtk_new_activate(self, menuitem, data=None):
    print "File New selected"
    self.notebook = self.builder.get_object("notebook1")
    self.label4 = gtk.Label("Page 4")
    self.label5 = gtk.Label("Hello World")
    self.label5.show()
    self.notebook.append_page(self.label5, self.label4)

  def __init__(self):
    self.gladefile = "tutorial-5.glade"
    self.builder = gtk.Builder()
    self.builder.add_from_file(self.gladefile)
    self.builder.connect_signals(self)
    self.window = self.builder.get_object("window1")
    self.aboutdialog = self.builder.get_object("aboutdialog1")
    self.statusbar = self.builder.get_object("statusbar1")
    self.window.show()

if __name__ == "__main__":
  main = Buglump()
  gtk.main()
