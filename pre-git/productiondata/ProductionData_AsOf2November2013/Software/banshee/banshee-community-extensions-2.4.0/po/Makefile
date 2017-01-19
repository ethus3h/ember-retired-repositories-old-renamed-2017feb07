# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2004-2008 Rodney Dawes <dobey.pwns@gmail.com>
#
# This file may be copied and used freely without restrictions.  It may
# be used in projects which are not available under a GNU Public License,
# but which still want to provide support for the GNU gettext functionality.
#
# - Modified by Owen Taylor <otaylor@redhat.com> to use GETTEXT_PACKAGE
#   instead of PACKAGE and to look for po2tbl in ./ not in intl/
#
# - Modified by jacob berkman <jacob@ximian.com> to install
#   Makefile.in.in and po2tbl.sed.in for use with glib-gettextize
#
# - Modified by Rodney Dawes <dobey.pwns@gmail.com> for use with intltool
#
# We have the following line for use by intltoolize:
# INTLTOOL_MAKEFILE

GETTEXT_PACKAGE = banshee-community-extensions
PACKAGE = banshee-community-extensions
VERSION = 2.4.0

SHELL = /bin/bash

srcdir = .
top_srcdir = ..
top_builddir = ..


prefix = /usr
exec_prefix = /usr
datadir = ${datarootdir}
datarootdir = ${prefix}/share
libdir = ${exec_prefix}/lib
DATADIRNAME = share
itlocaledir = $(prefix)/$(DATADIRNAME)/locale
subdir = po
install_sh = ${SHELL} /media/MyBook/Projects/Media/Software/Wreathe/Software/banshee/banshee-community-extensions-2.4.0/install-sh
# Automake >= 1.8 provides /bin/mkdir -p.
# Until it can be supposed, use the safe fallback:
mkdir_p = $(install_sh) -d

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644

GMSGFMT = /usr/bin/msgfmt
MSGFMT = /usr/bin/msgfmt
XGETTEXT = /usr/bin/xgettext
INTLTOOL_UPDATE = /usr/bin/intltool-update
INTLTOOL_EXTRACT = /usr/bin/intltool-extract
MSGMERGE = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --dist
GENPOT   = INTLTOOL_EXTRACT="$(INTLTOOL_EXTRACT)" XGETTEXT="$(XGETTEXT)" srcdir=$(srcdir) $(INTLTOOL_UPDATE) --gettext-package $(GETTEXT_PACKAGE) --pot

ALL_LINGUAS = de el es fi fr it pt ru_RU sk uk_UA

PO_LINGUAS=$(shell if test -r $(srcdir)/LINGUAS; then grep -v "^\#" $(srcdir)/LINGUAS; else echo "$(ALL_LINGUAS)"; fi)

USER_LINGUAS=$(shell if test -n "$(LINGUAS)"; then LLINGUAS="$(LINGUAS)"; ALINGUAS="$(ALL_LINGUAS)"; for lang in $$LLINGUAS; do if test -n "`grep \^$$lang$$ $(srcdir)/LINGUAS 2>/dev/null`" -o -n "`echo $$ALINGUAS|tr ' ' '\n'|grep \^$$lang$$`"; then printf "$$lang "; fi; done; fi)

USE_LINGUAS=$(shell if test -n "$(USER_LINGUAS)" -o -n "$(LINGUAS)"; then LLINGUAS="$(USER_LINGUAS)"; else if test -n "$(PO_LINGUAS)"; then LLINGUAS="$(PO_LINGUAS)"; else LLINGUAS="$(ALL_LINGUAS)"; fi; fi; for lang in $$LLINGUAS; do printf "$$lang "; done)

POFILES=$(shell LINGUAS="$(PO_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.po "; done)

DISTFILES = Makefile.in.in POTFILES.in $(POFILES)
EXTRA_DISTFILES = ChangeLog POTFILES.skip Makevars LINGUAS

POTFILES = \
	../src/AlarmClock/Banshee.AlarmClock/AlarmClockService.cs \
	../src/AlarmClock/Banshee.AlarmClock/AlarmConfigDialog.cs \
	../src/AlarmClock/Banshee.AlarmClock/ConfigurationDialog.cs \
	../src/AlarmClock/Banshee.AlarmClock/SleepTimerConfigDialog.cs \
	../src/AlbumArtWriter/Banshee.AlbumArtWriter/AlbumArtWriterJob.cs \
	../src/AlbumArtWriter/Banshee.AlbumArtWriter/AlbumArtWriterService.cs \
	../src/AlbumArtWriter/Banshee.AlbumArtWriter/ConfigurationDialog.cs \
	../src/Ampache/Banshee.Ampache/Gui/AmpacheView.cs \
	../src/Ampache/gtk-gui/Banshee.Ampache.PreferenceView.cs \
	../src/AppIndicator/Banshee.AppIndicator/AppIndicatorService.cs \
	../src/ClutterFlow/Banshee.ClutterFlow/ClutterFlowContents.cs \
	../src/ClutterFlow/Banshee.ClutterFlow/ClutterFlowSchemas.cs \
	../src/ClutterFlow/Banshee.ClutterFlow/ClutterFlowService.cs \
	../src/DuplicateSongDetector/Banshee.DuplicateSongDetector/DuplicateSongDetectorAction.cs \
	../src/DuplicateSongDetector/Banshee.DuplicateSongDetector/DuplicateSongDetectorSource.cs \
	../src/DuplicateSongDetector/Banshee.DuplicateSongDetector/SongDuplicateView.cs \
	../src/FolderSync/Banshee.FolderSync/FolderSyncController.cs \
	../src/FolderSync/Banshee.FolderSync/FolderSyncSource.cs \
	../src/FolderSync/Banshee.FolderSync/FolderSyncView.cs \
	../src/Jamendo/Banshee.Jamendo/JamendoDownloadManager.cs \
	../src/Jamendo/Banshee.Jamendo/JamendoWebBrowserShell.cs \
	../src/Karaoke/Banshee.Karaoke/Gui/ContextPage.cs \
	../src/Karaoke/Banshee.Karaoke/Gui/KaraokePane.cs \
	../src/Karaoke/Banshee.Karaoke/KaraokeConfigDialog.cs \
	../src/Karaoke/Banshee.Karaoke/KaraokeService.cs \
	../src/LastfmFingerprint/Banshee.LastfmFingerprint/LastfmFingerprintService.cs \
	../src/LastfmFingerprint/Banshee.LastfmFingerprint/LoginDialog.cs \
	../src/LastfmFingerprint/Banshee.LastfmFingerprint/LoginForm.cs \
	../src/LCD/Banshee.LCD/ConfigurationDialog.cs \
	../src/LCD/Banshee.LCD/LCDService.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioConfigDialog.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioFilterView.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioPlugins/LiveRadioBasePlugin.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioPlugins/LiveRadioPluginConfigurationWidget.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioPluginSourceContents.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioPluginSource.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioSourceContents.cs \
	../src/LiveRadio/Banshee.LiveRadio/LiveRadioSource.cs \
	../src/Lyrics/Banshee.Lyrics/Banshee.Lyrics.Gui/ContextPage.cs \
	../src/Lyrics/Banshee.Lyrics/Banshee.Lyrics.Gui/LyricsBrowser.cs \
	../src/Lyrics/Banshee.Lyrics/Banshee.Lyrics.Gui/LyricsPane.cs \
	../src/Lyrics/Banshee.Lyrics/Banshee.Lyrics.Gui/LyricsWindow.cs \
	../src/Lyrics/Banshee.Lyrics/Banshee.Lyrics/LyricsDownloadJob.cs \
	../src/Lyrics/Banshee.Lyrics/Banshee.Lyrics/LyricsService.cs \
	../src/Lyrics/Banshee.Lyrics/Banshee.Lyrics.Sources/LyricsWebSource.cs \
	../src/Magnatune/Banshee.Magnatune/gtk-gui/Magnatune.Configuration.cs \
	../src/Mirage/Banshee.Mirage/AnalyzeLibraryJob.cs \
	../src/Mirage/Banshee.Mirage/DistanceCalculator.cs \
	../src/Mirage/Banshee.Mirage/MiragePlugin.cs \
	../src/Mirage/Banshee.Mirage/RandomBySimilar.cs \
	../src/OpenVP/Banshee.OpenVP/VisualizationDisplayWidget.cs \
	../src/RadioStationFetcher/Banshee.RadioStationFetcher/FetcherDialog.cs \
	../src/RadioStationFetcher/Banshee.RadioStationFetcher/RadioStationFetcherService.cs \
	../src/RadioStationFetcher/Banshee.RadioStationFetcher/Xiph.cs \
	../src/RandomByLastfm/Banshee.RandomByLastfm/RandomByLastfmSimilarArtists.cs \
	../src/RandomByLastfm/Banshee.RandomByLastfm/RandomByLastfmUserTopArtists.cs \
	../src/StreamRecorder/Banshee.Streamrecorder/StreamrecorderConfigDialog.cs \
	../src/StreamRecorder/Banshee.Streamrecorder/StreamrecorderService.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Data/ContactContainerSource.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Data/ContactSource.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Data/TelepathyDownload.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Data/TelepathyUpload.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Gui/ContactRequestDialog.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Gui/ContactSourceContents.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Gui/DownloadManagerUi.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Gui/TelepathyActions.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Gui/TelepathyNotification.cs \
	../src/Telepathy/Banshee.Telepathy/Banshee.Telepathy.Gui/TransferManagerUi.cs

CATALOGS=$(shell LINGUAS="$(USE_LINGUAS)"; for lang in $$LINGUAS; do printf "$$lang.gmo "; done)

.SUFFIXES:
.SUFFIXES: .po .pox .gmo .mo .msg .cat

AM_DEFAULT_VERBOSITY = 1
INTLTOOL_V_MSGFMT = $(INTLTOOL__v_MSGFMT_$(V))
INTLTOOL__v_MSGFMT_= $(INTLTOOL__v_MSGFMT_$(AM_DEFAULT_VERBOSITY))
INTLTOOL__v_MSGFMT_0 = @echo "  MSGFMT" $@;

.po.pox:
	$(MAKE) $(GETTEXT_PACKAGE).pot
	$(MSGMERGE) $< $(GETTEXT_PACKAGE).pot -o $*.pox

.po.mo:
	$(INTLTOOL_V_MSGFMT)$(MSGFMT) -o $@ $<

.po.gmo:
	$(INTLTOOL_V_MSGFMT)file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && gencat $@ $*.msg


all: all-yes

all-yes: $(CATALOGS)
all-no:

$(GETTEXT_PACKAGE).pot: $(POTFILES)
	$(GENPOT)

install: install-data
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  dir=$(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES; \
	  $(mkdir_p) $$dir; \
	  if test -r $$lang.gmo; then \
	    $(INSTALL_DATA) $$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $$lang.gmo as $$dir/$(GETTEXT_PACKAGE).mo"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$lang.gmo $$dir/$(GETTEXT_PACKAGE).mo; \
	    echo "installing $(srcdir)/$$lang.gmo as" \
		 "$$dir/$(GETTEXT_PACKAGE).mo"; \
	  fi; \
	  if test -r $$lang.gmo.m; then \
	    $(INSTALL_DATA) $$lang.gmo.m $$dir/$(GETTEXT_PACKAGE).mo.m; \
	    echo "installing $$lang.gmo.m as $$dir/$(GETTEXT_PACKAGE).mo.m"; \
	  else \
	    if test -r $(srcdir)/$$lang.gmo.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$lang.gmo.m \
		$$dir/$(GETTEXT_PACKAGE).mo.m; \
	      echo "installing $(srcdir)/$$lang.gmo.m as" \
		   "$$dir/$(GETTEXT_PACKAGE).mo.m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done

# Empty stubs to satisfy archaic automake needs
dvi info ctags tags CTAGS TAGS ID:

# Define this as empty until I found a useful application.
install-exec installcheck:

uninstall:
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  rm -f $(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo; \
	  rm -f $(DESTDIR)$(itlocaledir)/$$lang/LC_MESSAGES/$(GETTEXT_PACKAGE).mo.m; \
	done

check: all $(GETTEXT_PACKAGE).pot
	rm -f missing notexist
	srcdir=$(srcdir) $(INTLTOOL_UPDATE) -m
	if [ -r missing -o -r notexist ]; then \
	  exit 1; \
	fi

mostlyclean:
	rm -f *.pox $(GETTEXT_PACKAGE).pot *.old.po cat-id-tbl.tmp
	rm -f .intltool-merge-cache

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in POTFILES stamp-it
	rm -f *.mo *.msg *.cat *.cat.m *.gmo

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f Makefile.in.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: $(DISTFILES)
	dists="$(DISTFILES)"; \
	extra_dists="$(EXTRA_DISTFILES)"; \
	for file in $$extra_dists; do \
	  test -f $(srcdir)/$$file && dists="$$dists $(srcdir)/$$file"; \
	done; \
	for file in $$dists; do \
	  test -f $$file || file="$(srcdir)/$$file"; \
	  ln $$file $(distdir) 2> /dev/null \
	    || cp -p $$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(GETTEXT_PACKAGE).pot
	tmpdir=`pwd`; \
	linguas="$(USE_LINGUAS)"; \
	for lang in $$linguas; do \
	  echo "$$lang:"; \
	  result="`$(MSGMERGE) -o $$tmpdir/$$lang.new.po $$lang`"; \
	  if $$result; then \
	    if cmp $(srcdir)/$$lang.po $$tmpdir/$$lang.new.po >/dev/null 2>&1; then \
	      rm -f $$tmpdir/$$lang.new.po; \
            else \
	      if mv -f $$tmpdir/$$lang.new.po $$lang.po; then \
	        :; \
	      else \
	        echo "msgmerge for $$lang.po failed: cannot move $$tmpdir/$$lang.new.po to $$lang.po" 1>&2; \
	        rm -f $$tmpdir/$$lang.new.po; \
	        exit 1; \
	      fi; \
	    fi; \
	  else \
	    echo "msgmerge for $$lang.gmo failed!"; \
	    rm -f $$tmpdir/$$lang.new.po; \
	  fi; \
	done

Makefile POTFILES: stamp-it
	@if test ! -f $@; then \
	  rm -f stamp-it; \
	  $(MAKE) stamp-it; \
	fi

stamp-it: Makefile.in.in $(top_builddir)/config.status POTFILES.in
	cd $(top_builddir) \
	  && CONFIG_FILES=$(subdir)/Makefile.in CONFIG_HEADERS= CONFIG_LINKS= \
	       $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
