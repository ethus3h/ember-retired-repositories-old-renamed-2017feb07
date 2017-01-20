#! /usr/bin/env python
# -*- coding: utf-8 -*-
#Installer. Version 0.1, 30 July 2013
print "I'm Alive!";
class adder:
    result = 0
    def __init__( self, number1, number2 ):
        self.result = int( number1 ) + int( number2 )

    def giveResult( self ):
        return str(self.result)

    endIt = False
    while ( endIt == False ):
        print "Please input two intergers you wish to add: "
        number1 = raw_input( "Enter the first number: " )
        number2 = raw_input( "Enter the second number: " )
    try:
        thistime = adder( number1, number2 )
        except ValueError:
        print "Sorry, one of your values was not a valid integer."
        continue
    print "Your result is: " + thistime.giveResult()
    goagain = raw_input( "Do you want to eXit or go again? ('X' to eXit, anything else to continue): " )
    if ( goagain == "x" or goagain == "X" ):
    endIt = True
#
##!/usr/bin/env python
#
#import sys
#try:
#    import pygtk
#    pygtk.require("2.0")
#except:
#    pass
#try:
#    import gtk
#    import gtk.glade
#except:
#    sys.exit(1)
#
#
#
#print 'Alive!';
#class Installer:
#    """This is an Hello World GTK application"""
#
#def __init__(self):
#        
#    #Set the Glade file
#    self.gladefile = "install0.1-30July2013.glade"  
#    self.wTree = gtk.glade.XML(self.gladefile) 
#        
#    #Get the Main Window, and connect the "destroy" event
#    self.window = self.wTree.get_widget("MainWindow")
#    if (self.window):
#        self.window.connect("destroy", gtk.main_quit)
#
#
#
#if __name__ == "__main__":
#    hwg = Installer()
#    gtk.main()
#

#
#import pygtk
#pygtk.require('2.0')
#import gtk
#import cairo
#
#class Base:
#    def hello(self, widget, data=None):
#        print "Hello World"
#    def delete_event(self, widget, event, data=None):
#        print "delete event occurred"
#        return False
#    def destroy(self, widget, data=None):
#        print "destroy signal occurred"
#        gtk.main_quit()
#    def __init__(self):
#        self.window = gtk.Window(gtk.WINDOW_TOPLEVEL)
#        self.window.fullscreen()
#        white = gtk.Image()
#        white.set_from_file('white.png')
#        white.show()
#        #self.window.add(white)
#        whitec = gtk.gdk.Color(red=65535, green=65535, blue=65535, pixel=0)
#        self.window.modify_bg(gtk.STATE_NORMAL, whitec)
#        self.window.connect("delete_event", self.delete_event)
#        self.window.connect("destroy", self.destroy)
#        self.window.set_border_width(10)
#        self.box1 = gtk.HBox(False, 0)
#        self.window.add(self.box1)
#        self.button = gtk.Button("Quit")
#        self.button.connect("clicked", self.hello, None)
#        self.button.connect_object("clicked", gtk.Widget.destroy, self.window)
#        self.box1.pack_start(self.button, True, True, 0)
#        self.box1.pack_start(white, True, True, 0)
#        self.button.show()
#        self.box1.show()
#        self.window.show()
#
#
#    def main(self):
#        gtk.main()
#
#
#print __name__
#if __name__ == "__main__":
#    base = Base()
#    base.main()
#
