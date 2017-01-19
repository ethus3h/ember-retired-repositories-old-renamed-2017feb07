#
# Makefile for registration client for switchdesk
#

NAME    = $(shell awk '/Name:/ { print $$2 }' switchdesk.spec)
VERSION = $(shell awk '/Version:/ { print $$2 }' switchdesk.spec)

BACKEND = backend
FILES   = $(BACKEND) $(NAME)-gui

GLADES  = $(NAME).glade

PIXMAPS = elogo.png fluxbox.png fvwm.png gnome.png kde.png \
          question.png switchdesk.png twm.png \
          windowmaker.png xfce.png

PYFILES = $(BACKEND).py $(NAME)-gui.py $(BACKEND).pyc $(NAME)-gui.pyc

SCRIPTS = $(NAME) $(NAME)-helper

OBJECTS = $(addsuffix .pyc, $(FILES)) \
          $(addsuffix .py, $(FILES))

SUBDIRS = po

prefix  = /usr
bindir  = $(prefix)/bin
sbindir = $(prefix)/sbin
datadir = $(prefix)/share
mandir  = $(datadir)/man

# default compile rule:
%.pyc: %.py
	python -c "import py_compile; py_compile.compile('$<')"

backend:
	sed -e "s/@VERSION@/$(VERSION)/" < $(BACKEND).py.in > $(BACKEND).py.tmp
	sed -e "s/@NAME@/$(NAME)/" < $(BACKEND).py.tmp > $(BACKEND).py

all:: $(OBJECTS) $(NAME).desktop.in
	$(MAKE) -C po update-po
	intltool-merge po $(NAME).desktop.in $(NAME).desktop -d -u -c po/.intltool-merge-cache

tag-archive:
	LANG=en_US svn copy -m "Tagged $(NAME)-$(VERSION)"   \
		$$(svn info |awk '/^URL:/ {print $$2}')   \
		$$(svn info |awk '/^Repository Root:/ {print $$3}')/tags/$(NAME)-$(VERSION)

create-archive:
	rm -rf $(NAME)-$(VERSION)
	LANG=en_US svn export $$(svn info |awk '/^URL:/ {print $$2}') $(NAME)-$(VERSION)
	tar --bzip2 -cSpf $(NAME)-$(VERSION).tar.bz2 ${NAME}-$(VERSION)
	@rm -rf $(NAME)-$(VERSION)
	@echo " "
	@echo "The final archive is ./$(NAME)-$(VERSION).tar.bz2."

archive: clean backend tag-archive create-archive

install:: backend all
	(cd po ; make install)

	@mkdir -p $(DESTDIR)$(datadir)/applications
	install -p -m 644 $(NAME).desktop $(DESTDIR)$(datadir)/applications/

	@mkdir -p $(DESTDIR)$(datadir)/$(NAME)
	@for f in $(PYFILES) ; do install -m 755 $$f $(DESTDIR)$(datadir)/$(NAME)/ ; done
	install -p -m 755 Xclients* $(DESTDIR)$(datadir)/$(NAME)/
	install -p -m 644 $(GLADES) $(DESTDIR)$(datadir)/$(NAME)/

	@mkdir -p $(DESTDIR)$(bindir)
	install -p -m 755 $(SCRIPTS) $(DESTDIR)$(bindir)

	@mkdir -p $(DESTDIR)$(datadir)/$(NAME)/pixmaps
	@for i in $(PIXMAPS) ; do install -p -m 644 pixmaps/$$i $(DESTDIR)$(datadir)/$(NAME)/pixmaps ; done

	@mkdir -p $(DESTDIR)$(mandir)/man1
	install -p -m 644 $(NAME).1 $(DESTDIR)$(mandir)/man1

	@mkdir -p $(DESTDIR)$(mandir)/fr/man1
	install -p -m 644 $(NAME).fr.1 $(DESTDIR)$(mandir)/fr/man1

clean::
	@rm -fv *.pyc *~ .*~ *.desktop $(BACKEND).py $(NAME)-$(VERSION).tar.bz2
