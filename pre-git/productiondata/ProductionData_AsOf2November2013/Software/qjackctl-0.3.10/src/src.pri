# qjackctl.pri
#
PREFIX  = /usr
CONFIG += release qdbus
INCLUDEPATH += /usr/share/qt4/include /usr/local/include /usr/include /usr/include/qt4 
LIBS += -L/usr/local/lib -L/usr/lib -L/usr/lib64  -ljack -lasound -lX11
