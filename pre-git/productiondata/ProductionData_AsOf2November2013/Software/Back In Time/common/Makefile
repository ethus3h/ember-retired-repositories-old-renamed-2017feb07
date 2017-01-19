LANGS=zh_TW zh_CN uk tr th sv sr sl sk ru ro pt pt_BR pl nn nl nb lt ko jv ja it is id hu hr he gl fr fo fi eu et es eo en_GB en_CA el de da cs ca bs bg ar 
SHELL=/bin/bash

PREFIX=/usr
DEST=$(DESTDIR)$(PREFIX)

all: build

build: translate

clean:
	rm po/*.mo

install: build install_translations
	#install python
	install -d $(DEST)/share/backintime/common
	install --mode=644 *.py $(DEST)/share/backintime/common
	
	#install plugin(s)
	install -d $(DEST)/share/backintime/plugins
	install --mode=644 plugins/*.py $(DEST)/share/backintime/plugins
	
	#install copyright file
	install -d $(DEST)/share/doc/backintime-common
	install --mode=644 debian_specific/copyright $(DEST)/share/doc/backintime-common
	
	#install doc file(s)
	install -d $(DEST)/share/doc/backintime
	install --mode=644 ../AUTHORS $(DEST)/share/doc/backintime
	install --mode=644 ../LICENSE $(DEST)/share/doc/backintime
	install --mode=644 ../README $(DEST)/share/doc/backintime
	install --mode=644 ../TRANSLATIONS $(DEST)/share/doc/backintime
	install --mode=644 ../VERSION $(DEST)/share/doc/backintime
	install --mode=644 ../CHANGES $(DEST)/share/doc/backintime
	
	#install man file(s)
	for i in $$(ls -1 man/C/); do case $$i in *.gz|*~) continue;; *) gzip --best -c man/C/$$i > man/C/$${i}.gz;; esac; done
	install -d $(DEST)/share/man/man1
	install --mode=644 man/C/*.gz $(DEST)/share/man/man1
	
	#install application
	install -d $(DEST)/bin
	install backintime $(DEST)/bin
	install backintime-askpass $(DEST)/bin

	#install autostart
	install -d $(DEST)/../etc/xdg/autostart
	install --mode=644 backintime.desktop $(DEST)/../etc/xdg/autostart

translate: po/zh_TW.mo po/zh_CN.mo po/uk.mo po/tr.mo po/th.mo po/sv.mo po/sr.mo po/sl.mo po/sk.mo po/ru.mo po/ro.mo po/pt.mo po/pt_BR.mo po/pl.mo po/nn.mo po/nl.mo po/nb.mo po/lt.mo po/ko.mo po/jv.mo po/ja.mo po/it.mo po/is.mo po/id.mo po/hu.mo po/hr.mo po/he.mo po/gl.mo po/fr.mo po/fo.mo po/fi.mo po/eu.mo po/et.mo po/es.mo po/eo.mo po/en_GB.mo po/en_CA.mo po/el.mo po/de.mo po/da.mo po/cs.mo po/ca.mo po/bs.mo po/bg.mo po/ar.mo 

po/zh_TW.mo: po/zh_TW.po
	msgfmt -o po/zh_TW.mo po/zh_TW.po

po/zh_CN.mo: po/zh_CN.po
	msgfmt -o po/zh_CN.mo po/zh_CN.po

po/uk.mo: po/uk.po
	msgfmt -o po/uk.mo po/uk.po

po/tr.mo: po/tr.po
	msgfmt -o po/tr.mo po/tr.po

po/th.mo: po/th.po
	msgfmt -o po/th.mo po/th.po

po/sv.mo: po/sv.po
	msgfmt -o po/sv.mo po/sv.po

po/sr.mo: po/sr.po
	msgfmt -o po/sr.mo po/sr.po

po/sl.mo: po/sl.po
	msgfmt -o po/sl.mo po/sl.po

po/sk.mo: po/sk.po
	msgfmt -o po/sk.mo po/sk.po

po/ru.mo: po/ru.po
	msgfmt -o po/ru.mo po/ru.po

po/ro.mo: po/ro.po
	msgfmt -o po/ro.mo po/ro.po

po/pt.mo: po/pt.po
	msgfmt -o po/pt.mo po/pt.po

po/pt_BR.mo: po/pt_BR.po
	msgfmt -o po/pt_BR.mo po/pt_BR.po

po/pl.mo: po/pl.po
	msgfmt -o po/pl.mo po/pl.po

po/nn.mo: po/nn.po
	msgfmt -o po/nn.mo po/nn.po

po/nl.mo: po/nl.po
	msgfmt -o po/nl.mo po/nl.po

po/nb.mo: po/nb.po
	msgfmt -o po/nb.mo po/nb.po

po/lt.mo: po/lt.po
	msgfmt -o po/lt.mo po/lt.po

po/ko.mo: po/ko.po
	msgfmt -o po/ko.mo po/ko.po

po/jv.mo: po/jv.po
	msgfmt -o po/jv.mo po/jv.po

po/ja.mo: po/ja.po
	msgfmt -o po/ja.mo po/ja.po

po/it.mo: po/it.po
	msgfmt -o po/it.mo po/it.po

po/is.mo: po/is.po
	msgfmt -o po/is.mo po/is.po

po/id.mo: po/id.po
	msgfmt -o po/id.mo po/id.po

po/hu.mo: po/hu.po
	msgfmt -o po/hu.mo po/hu.po

po/hr.mo: po/hr.po
	msgfmt -o po/hr.mo po/hr.po

po/he.mo: po/he.po
	msgfmt -o po/he.mo po/he.po

po/gl.mo: po/gl.po
	msgfmt -o po/gl.mo po/gl.po

po/fr.mo: po/fr.po
	msgfmt -o po/fr.mo po/fr.po

po/fo.mo: po/fo.po
	msgfmt -o po/fo.mo po/fo.po

po/fi.mo: po/fi.po
	msgfmt -o po/fi.mo po/fi.po

po/eu.mo: po/eu.po
	msgfmt -o po/eu.mo po/eu.po

po/et.mo: po/et.po
	msgfmt -o po/et.mo po/et.po

po/es.mo: po/es.po
	msgfmt -o po/es.mo po/es.po

po/eo.mo: po/eo.po
	msgfmt -o po/eo.mo po/eo.po

po/en_GB.mo: po/en_GB.po
	msgfmt -o po/en_GB.mo po/en_GB.po

po/en_CA.mo: po/en_CA.po
	msgfmt -o po/en_CA.mo po/en_CA.po

po/el.mo: po/el.po
	msgfmt -o po/el.mo po/el.po

po/de.mo: po/de.po
	msgfmt -o po/de.mo po/de.po

po/da.mo: po/da.po
	msgfmt -o po/da.mo po/da.po

po/cs.mo: po/cs.po
	msgfmt -o po/cs.mo po/cs.po

po/ca.mo: po/ca.po
	msgfmt -o po/ca.mo po/ca.po

po/bs.mo: po/bs.po
	msgfmt -o po/bs.mo po/bs.po

po/bg.mo: po/bg.po
	msgfmt -o po/bg.mo po/bg.po

po/ar.mo: po/ar.po
	msgfmt -o po/ar.mo po/ar.po

install_translations:
	install -d $(DEST)/share/locale/zh_TW/LC_MESSAGES
	install --mode=644 po/zh_TW.mo $(DEST)/share/locale/zh_TW/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/zh_CN/LC_MESSAGES
	install --mode=644 po/zh_CN.mo $(DEST)/share/locale/zh_CN/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/uk/LC_MESSAGES
	install --mode=644 po/uk.mo $(DEST)/share/locale/uk/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/tr/LC_MESSAGES
	install --mode=644 po/tr.mo $(DEST)/share/locale/tr/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/th/LC_MESSAGES
	install --mode=644 po/th.mo $(DEST)/share/locale/th/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/sv/LC_MESSAGES
	install --mode=644 po/sv.mo $(DEST)/share/locale/sv/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/sr/LC_MESSAGES
	install --mode=644 po/sr.mo $(DEST)/share/locale/sr/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/sl/LC_MESSAGES
	install --mode=644 po/sl.mo $(DEST)/share/locale/sl/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/sk/LC_MESSAGES
	install --mode=644 po/sk.mo $(DEST)/share/locale/sk/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/ru/LC_MESSAGES
	install --mode=644 po/ru.mo $(DEST)/share/locale/ru/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/ro/LC_MESSAGES
	install --mode=644 po/ro.mo $(DEST)/share/locale/ro/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/pt/LC_MESSAGES
	install --mode=644 po/pt.mo $(DEST)/share/locale/pt/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/pt_BR/LC_MESSAGES
	install --mode=644 po/pt_BR.mo $(DEST)/share/locale/pt_BR/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/pl/LC_MESSAGES
	install --mode=644 po/pl.mo $(DEST)/share/locale/pl/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/nn/LC_MESSAGES
	install --mode=644 po/nn.mo $(DEST)/share/locale/nn/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/nl/LC_MESSAGES
	install --mode=644 po/nl.mo $(DEST)/share/locale/nl/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/nb/LC_MESSAGES
	install --mode=644 po/nb.mo $(DEST)/share/locale/nb/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/lt/LC_MESSAGES
	install --mode=644 po/lt.mo $(DEST)/share/locale/lt/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/ko/LC_MESSAGES
	install --mode=644 po/ko.mo $(DEST)/share/locale/ko/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/jv/LC_MESSAGES
	install --mode=644 po/jv.mo $(DEST)/share/locale/jv/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/ja/LC_MESSAGES
	install --mode=644 po/ja.mo $(DEST)/share/locale/ja/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/it/LC_MESSAGES
	install --mode=644 po/it.mo $(DEST)/share/locale/it/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/is/LC_MESSAGES
	install --mode=644 po/is.mo $(DEST)/share/locale/is/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/id/LC_MESSAGES
	install --mode=644 po/id.mo $(DEST)/share/locale/id/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/hu/LC_MESSAGES
	install --mode=644 po/hu.mo $(DEST)/share/locale/hu/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/hr/LC_MESSAGES
	install --mode=644 po/hr.mo $(DEST)/share/locale/hr/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/he/LC_MESSAGES
	install --mode=644 po/he.mo $(DEST)/share/locale/he/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/gl/LC_MESSAGES
	install --mode=644 po/gl.mo $(DEST)/share/locale/gl/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/fr/LC_MESSAGES
	install --mode=644 po/fr.mo $(DEST)/share/locale/fr/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/fo/LC_MESSAGES
	install --mode=644 po/fo.mo $(DEST)/share/locale/fo/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/fi/LC_MESSAGES
	install --mode=644 po/fi.mo $(DEST)/share/locale/fi/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/eu/LC_MESSAGES
	install --mode=644 po/eu.mo $(DEST)/share/locale/eu/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/et/LC_MESSAGES
	install --mode=644 po/et.mo $(DEST)/share/locale/et/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/es/LC_MESSAGES
	install --mode=644 po/es.mo $(DEST)/share/locale/es/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/eo/LC_MESSAGES
	install --mode=644 po/eo.mo $(DEST)/share/locale/eo/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/en_GB/LC_MESSAGES
	install --mode=644 po/en_GB.mo $(DEST)/share/locale/en_GB/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/en_CA/LC_MESSAGES
	install --mode=644 po/en_CA.mo $(DEST)/share/locale/en_CA/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/el/LC_MESSAGES
	install --mode=644 po/el.mo $(DEST)/share/locale/el/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/de/LC_MESSAGES
	install --mode=644 po/de.mo $(DEST)/share/locale/de/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/da/LC_MESSAGES
	install --mode=644 po/da.mo $(DEST)/share/locale/da/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/cs/LC_MESSAGES
	install --mode=644 po/cs.mo $(DEST)/share/locale/cs/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/ca/LC_MESSAGES
	install --mode=644 po/ca.mo $(DEST)/share/locale/ca/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/bs/LC_MESSAGES
	install --mode=644 po/bs.mo $(DEST)/share/locale/bs/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/bg/LC_MESSAGES
	install --mode=644 po/bg.mo $(DEST)/share/locale/bg/LC_MESSAGES/backintime.mo
	install -d $(DEST)/share/locale/ar/LC_MESSAGES
	install --mode=644 po/ar.mo $(DEST)/share/locale/ar/LC_MESSAGES/backintime.mo

