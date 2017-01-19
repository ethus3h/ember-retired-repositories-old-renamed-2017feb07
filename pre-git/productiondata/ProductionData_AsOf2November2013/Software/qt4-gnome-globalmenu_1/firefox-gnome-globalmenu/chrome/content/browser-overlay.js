
window.addEventListener("load",
	function(event) {
		Globalmenubar.init(document.getElementById("main-menubar"),
			document.getElementById("toolbar-menubar"));

		/* Subscribe to edit menu changes */
		var edit_commandset = document.getElementById("editMenuCommandSetAll");
		if (edit_commandset) {
			edit_commandset.addEventListener("commandupdate",
				function(event) {
					Globalmenubar.queueUpdateWindowMenu();
				}, false);
		}

		/* Subscribe to Tab close event */
		gBrowser.tabContainer.addEventListener("TabClose",
			function(event) {
				Globalmenubar.queueUpdateWindowMenu();
			}, false);

		/* Subscribe to history event notifications */
		var history = Cc["@mozilla.org/browser/nav-history-service;1"].
						getService(Ci.nsINavHistoryService);
		var history_listener = {
			onBeginUpdateBatch: function() {
			},
			onEndUpdateBatch: function() {
			},
			onVisit: function(aURI, aVisitID, aTime, aSessionID, aReferringID, aTransitionType) {
				Globalmenubar.queueUpdateWindowMenu();
			},
			onTitleChanged: function(aURI, aPageTitle) {
			},
			onDeleteURI: function(aURI) {
			},
			onClearHistory: function() {
				Globalmenubar.queueUpdateWindowMenu();
			},
			onPageChanged: function(aURI, aWhat, aValue) {
			},
			onPageExpired: function(aURI, aVisitTime, aWholeEntry) {
			},
			QueryInterface: function(iid) {
				const Ci = Components.interfaces;
				if (iid.equals(Ci.nsINavHistoryObserver) ||
					iid.equals(Ci.nsISupports)) {
					return this;
				}
				throw Cr.NS_ERROR_NO_INTERFACE;
			}
		}
		history.addObserver(history_listener, false);
	});
