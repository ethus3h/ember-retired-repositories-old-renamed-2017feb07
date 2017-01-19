TEMPLATE = lib
TARGET = qt4-gnome-globalmenu
CONFIG += plugin release
QT += core gui xml

SOURCES += qx11menubarimpl.cpp
HEADERS += qx11menubarimpl.h

target.path += $$[QT_INSTALL_PLUGINS]/menubar
INSTALLS += target
