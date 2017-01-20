#This Makefile is automatically created by configure

BINDIR=/usr/bin
LOCALE=/usr/share/locale
ICONDIR=/usr/share/icons/hicolor/128x128/apps
DESKTOP=/usr/share/applications
RUBYDIR=/usr/local/lib/site_ruby/1.8

all:
	ruby configure --update-lang #update the locale files

install: all
	install -D -m 644 rr_lib.rb $(prefix)$(DESTDIR)$(RUBYDIR)/rr_lib.rb
	install -D -m 755 rubyripper_gtk2.rb $(prefix)$(DESTDIR)$(BINDIR)/rrip_gui
	install -D -m 644 rubyripper.png $(prefix)$(DESTDIR)$(ICONDIR)/rubyripper.png
	install -D -m 644 rubyripper.desktop $(prefix)$(DESTDIR)$(DESKTOP)/rubyripper.desktop
	install -D -m 755 -D rubyripper_cli.rb $(prefix)$(DESTDIR)$(BINDIR)/rrip_cli
	install -D -m 644 locale/nl/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/nl/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/de/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/de/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/fr/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/fr/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/hu/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/hu/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/ru/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/ru/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/es/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/es/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/se/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/se/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/bg/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/bg/LC_MESSAGES/rubyripper.mo
	install -D -m 644 locale/it/LC_MESSAGES/rubyripper.mo $(prefix)$(DESTDIR)$(LOCALE)/it/LC_MESSAGES/rubyripper.mo

uninstall:
	rm $(prefix)$(DESTDIR)$(RUBYDIR)/rr_lib.rb
	rm $(prefix)$(DESTDIR)$(BINDIR)/rrip_gui
	rm $(prefix)$(DESTDIR)$(ICONDIR)/rubyripper.png
	rm $(prefix)$(DESTDIR)$(DESKTOP)/rubyripper.desktop
	rm $(prefix)$(DESTDIR)$(BINDIR)/rrip_cli
	rm $(prefix)$(DESTDIR)$(LOCALE)/nl/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/de/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/fr/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/hu/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/ru/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/es/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/se/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/bg/LC_MESSAGES/rubyripper.mo
	rm $(prefix)$(DESTDIR)$(LOCALE)/it/LC_MESSAGES/rubyripper.mo

clean:
	ruby configure --update-lib
	rm Makefile
distclean:

