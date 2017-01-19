# You probably need to adapt the following:
GECKO_SDK?=/usr/lib/firefox/sdk
GECKO_SDK_BINDIR?=$(GECKO_SDK)/bin
GECKO_SDK_LIBDIR?=$(GECKO_SDK)/lib
GECKO_SDK_INCLUDEDIR?=/usr/include/firefox

CFLAGS?=-O2 -Wall
LDFLAGS?=-Wl,-z,defs -Wl,-O1 -Wl,--as-needed
ZIPFLAGS?=-9

GLOBALMENU_CFLAGS:=-std=gnu++0x -I$(GECKO_SDK_INCLUDEDIR) \
	$(shell pkg-config --cflags nspr gtk+-2.0) -I../public -fPIC
GLOBALMENU_LIBS:= -L$(GECKO_SDK_LIBDIR) -lxpcomglue_s -lmozalloc -lxpcom \
	$(shell pkg-config --libs nspr gtk+-2.0)

GLOBALMENU_IDLFLAGS:=-I$(GECKO_SDK_INCLUDEDIR)/idl -I../public

# Location of some tools
PYTHON?=python
XPIDL?=$(PYTHON) $(GECKO_SDK_BINDIR)/xpidl.py
XPIDL_HEADER?=$(PYTHON) $(GECKO_SDK_BINDIR)/header.py
XPIDL_TYPELIB?=$(PYTHON) $(GECKO_SDK_BINDIR)/typelib.py
XPIDL_CACHEDIR?=/tmp
ZIP?=zip

# What goes inside the .xpi package
CONTENT:=../install.rdf ../chrome.manifest \
	../components/IGlobalMenu.xpt ../components/IGlobalMenuListener.xpt \
	../components/globalmenu.so ../chrome/content/globalmenubar.js \
	../chrome/content/browser-overlay.xul ../chrome/content/browser-overlay.js \
	../chrome/content/messenger-overlay.xul ../chrome/content/messenger-overlay.js

# "dist" target builds .xpi extension package.

# Main target: just build binary components
all: ../components/IGlobalMenu.xpt ../components/IGlobalMenuListener.xpt ../components/globalmenu.so

../components/globalmenu.so: GlobalMenu.o GlobalMenuModule.o
	$(CXX) $(LDFLAGS) -shared -o $@ $^ $(GLOBALMENU_LIBS)

%.o: %.cpp
	$(CXX) $(GLOBALMENU_CFLAGS) $(CFLAGS) -o $@ -c $<

# Dependencies
GlobalMenu.o: GlobalMenu.cpp GlobalMenu.h ../public/IGlobalMenu.h ../public/IGlobalMenuListener.h
GlobalMenuModule.o: GlobalMenuModule.cpp GlobalMenu.h ../public/IGlobalMenu.h ../public/IGlobalMenuListener.h

../public/%.h: ../public/%.idl
	$(XPIDL_HEADER) --cachedir=$(XPIDL_CACHEDIR) -o $@ $(GLOBALMENU_IDLFLAGS) $<

../components/%.xpt: ../public/%.idl
	$(XPIDL_TYPELIB) --cachedir=$(XPIDL_CACHEDIR) -o $@ $(GLOBALMENU_IDLFLAGS) $<

dist: ../globalmenu.xpi
	
../globalmenu.xpi: $(CONTENT)
	(cd .. && $(ZIP) $(ZIPFLAGS) $(@:../%=%) $(^:../%=%))

clean:
	rm -f ../globalmenu.xpi
	rm -f ../components/globalmenu.so ../components/*.xpt *.o

maintainer-clean: clean
	rm -f ../public/IGlobalMenu.h ../public/IGlobalMenuListener.h

.PHONY: all dist clean maintainer-clean

