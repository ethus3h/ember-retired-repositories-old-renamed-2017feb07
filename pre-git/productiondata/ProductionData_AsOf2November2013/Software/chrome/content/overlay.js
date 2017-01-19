
var Globalmenubar = {
	/* Configuration options */
	/* Min time between menu updates */
	batch_interval: 500,
	/* Send all images (gtk stock icons are always send, as they're cheap) */
	send_images: true,

	/* Internal */
	/* Instance of the native component */
	serv: null,
	/* Instance of preferences service main branch */
	prefs: null,
	/* Key names string bundle */
	keys_sb: null,
	/* Modifier names string bundle */
	mods_sb: null,
	/* Whether window associated to this instance is focused */
	focused: false,
	/* Update menu timeout handle */
	update_timeout: 0,
	/* Last "random" menu id used */
	rand_id: 0,
	/* Dictionary mapping all current known menu ids to their actions */
	id_list: [],
	/* Dictionary mapping all current known menu ids with URI to their URIs */
	id_uris: [],
	/* Cache of base64'd images */
	img_cache: [],

	/* Some stored preferences */
	_accelKey: false,
	_alwaysAppendAccessKeys: false,
	_insertSeparatorBeforeAccessKeys: false,
	_ellipsis: "...",

	/* Get a nsIBaseWindow from the DOM window object */
	getBaseWindow: function(w) {
		const Ci = Components.interfaces;
		var webNav = w.getInterface(Ci.nsIWebNavigation);
		var treeItem = webNav.QueryInterface(Ci.nsIDocShellTreeItem);
		var treeOwner = treeItem.treeOwner;
		var baseWindow = treeOwner.QueryInterface(Ci.nsIBaseWindow);
		return baseWindow;
	},

	/* Called when browser windows is loaded. Window is not realized yet. */
	onLoad: function() {
		const Cc = Components.classes;
		const Ci = Components.interfaces;

		/* Instantiate native component first */
		this.serv = Cc["@javispedro.com/GlobalMenu;1"].createInstance(Ci.IGlobalMenu);

		this.serv.window = this.getBaseWindow(window);
		this.serv.listener = this;

		/* Global preferences service */
		this.prefs = Cc["@mozilla.org/preferences-service;1"].
						getService(Ci.nsIPrefService).getBranch("");

		/* String bundles from where to get translations for Alt, Control, .. */
		var sb_serv = Cc['@mozilla.org/intl/stringbundle;1'].
						getService(Ci.nsIStringBundleService);
		this.keys_sb = sb_serv.createBundle('chrome://global/locale/keys.properties');
		this.mods_sb = sb_serv.createBundle('chrome://global-platform/locale/platformKeys.properties');

		/* Subscribe to edit menu changes */
		document.getElementById("editMenuCommandSetAll").addEventListener("commandupdate",
			function(event) { Globalmenubar.onEditStateChange(event); }, false);

		/* Subscribe to Tab close event */
		gBrowser.tabContainer.addEventListener("TabClose",
			function(event) { Globalmenubar.onTabChange(event); }, false);

		/* Subscribe to history event notifications */
		var history = Cc["@mozilla.org/browser/nav-history-service;1"].
						getService(Ci.nsINavHistoryService);
		this.history_listener.menu = this;
		history.addObserver(this.history_listener, false);
	},

	/* Called when browser windows get focus. */
	onFocus: function(e) {
		this.focused = true;
		this.queueUpdateWindowMenu();
	},

	onBlur: function(e) {
		this.focused = false;
		if (this.update_timeout) {
			clearTimeout(this.update_timeout);
			this.update_timeout = 0;
		}
	},

	onEditStateChange: function(e) {
		this.queueUpdateWindowMenu();
	},

	onTabChange: function(e) {
		this.queueUpdateWindowMenu();
	},

	history_listener: {
		menu: null,
		onBeginUpdateBatch: function() {
		},
		onEndUpdateBatch: function() {
		},
		onVisit: function(aURI, aVisitID, aTime, aSessionID, aReferringID, aTransitionType) {
			this.menu.queueUpdateWindowMenu();
		},
		onTitleChanged: function(aURI, aPageTitle) {
		},
		onDeleteURI: function(aURI) {
		},
		onClearHistory: function() {
			this.menu.queueUpdateWindowMenu();
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
	},

	/* Cache some preferences every time the menu is update */
	updatePrefs: function() {
		const Ci = Components.interfaces;

		this._accelKey = this.prefs.getIntPref("ui.key.accelKey");
		this._alwaysAppendAccessKeys =
			this.prefs.getComplexValue("intl.menuitems.alwaysappendaccesskeys",
			Ci.nsIPrefLocalizedString).data == "true";
		this._insertSeparatorBeforeAccessKeys =
			this.prefs.getComplexValue(
				"intl.menuitems.insertseparatorbeforeaccesskeys",
				Ci.nsIPrefLocalizedString).data == "true";
		this._ellipsis = this.prefs.getComplexValue("intl.ellipsis",
			Ci.nsIPrefLocalizedString).data;
	},

	/* Escape a string so that it is a valid XML attribute value. */
	escapeXml: function(s) {
		if (!s) return "";
		return s.replace(/&/g, '&amp;').replace(/"/g, '&quot;').
			replace(/</g, '&lt;').replace(/>/g, '&gt;');
	},

	/* Escape a string so that it is a valid regular expression literal. */
	escapePreg: function(s) {
		if (!s) return "";
		var regex = new RegExp('[.\\\\+*?\\[\\^\\]$(){}=!<>|:\\-]', 'g');
		return s.replace(regex, "\\$&");
	},

	/* Convert from XUL mnemonic format to Gtk+ */
	/* https://developer.mozilla.org/En/XUL_Tutorial/Accesskey_display_rules */
	createLabelWithAccessKey: function(label, accesskey) {
		label = label.replace(/_/g, "__");
		if (accesskey) {
			var regex = new RegExp(this.escapePreg(accesskey), "i");
			if (!this._alwaysAppendAccessKeys && label.search(regex) >= 0) {
				/* "Inline" access key (ex. "_File") */
				return label.replace(regex, "_$&");
			} else {
				/* Appended access key (ex. "File (_A)") */
				if (label.slice(-this._ellipsis.length) == this._ellipsis) {
					/* Label ends with ellipsis */
					return label.substring(0, label.length-this._ellipsis.length) +
						(this._insertSeparatorBeforeAccessKeys ? " " : "") +
						"(_" + accesskey.toUpperCase() + ")" +
						this._ellipsis;
				} else {
					return label +
						(this._insertSeparatorBeforeAccessKeys ? " " : "") +
						"(_" + accesskey.toUpperCase() + ")";
				}
			}
		} else {
			/* No access key */
			return label;
		}
	},

	/* Convert from XUL image format to Globalmenu */
	getImage: function(item) {
		const Ci = Components.interfaces;

		var image_uri = item.getAttribute("image");
		if (!image_uri) {
			var style_regex = /url\("(.*?)"\)/;
			var image_style = window.getComputedStyle(item, null).getPropertyValue("list-style-image");
			var res = style_regex.exec(image_style);
			if (res) {
				image_uri = res[1];
			}
		}
		if (image_uri) {
			/* Test if it is a Gtk stock image first */
			var regex = /moz-icon:\/\/stock\/(.*?)\?/;
			var res = regex.exec(image_uri);
			if (res) {
				return res[1];
			}
			/* Only convert the rest if configured to */
			if (this.send_images) {
				/* Handle image clipping */
				var rect = [0, 0, 0, 0];
				var region = window.getComputedStyle(item, null).getPropertyValue("-moz-image-region");
				var cache_id = image_uri;
				if (region && region != "auto") {
					var region_regex = /rect\((\d+)px, (\d+)px, (\d+)px, (\d+)px\)/;
					var values = region_regex.exec(region);
					if (values) {
						rect[0] = parseInt(values[4]); /* Left */
						rect[1] = parseInt(values[1]); /* Top */
						rect[2] = parseInt(values[2]) - rect[0]; /* Right - Left*/
						rect[3] = parseInt(values[3]) - rect[1]; /* Bottom - Top */
					}
					cache_id += "#" + region;
				}

				/* Check image cache first */
				if (this.img_cache[cache_id]) {
					return "pixbuf:" + this.img_cache[cache_id];
				}

				/* Use an HTML image element to load the image */
				var img_node = new Image();
				img_node.src = image_uri;
				var request = img_node
					.QueryInterface(Ci.nsIImageLoadingContent)
					.getRequest(Ci.nsIImageLoadingContent.CURRENT_REQUEST);
				var container = request.image;
				if (container) {
					/* Call into native code to encode it as GdkPixbuf */
					var image_data = this.serv.serializeImage(container,
						rect[0], rect[1], rect[2], rect[3]);
					this.img_cache[cache_id] = image_data;
					return "pixbuf:" + image_data;
				} else {
					/* Image is not loaded yet. Let's not worry about it. */
					return false;
				}
			}
		}
		return false;
	},

	isCmdDisabled: function(cmd) {
		var node = document.getElementById(cmd);
		if (node.getAttribute("disabled")) {
			return true;
		} else {
			return false;
		}
	},

	/* Create human-readable name for a menuitem accelerator */
	getAccel: function(item) {
		if (item.getAttribute("acceltext")) {
			return item.getAttribute("acceltext");
		}

		var keyId = item.getAttribute("key");
		if (!keyId) return false;
		var key = document.getElementById(keyId);
		if (!key) return false;

		if (key.getAttribute("keytext")) {
			return key.getAttribute("keytext");
		}

		var accel="";
		var mods = key.getAttribute("modifiers");

		if (mods) {
			mods = mods.split(/[\s,]+/);
			for (i in mods) {
				var mod = mods[i];
				if (mod == "accel") {
					/* Read platform default accelerator key from prefs */
					switch (this._accelKey) {
						case KeyEvent.DOM_VK_SHIFT:
							mod = "shift";
							break;
						case KeyEvent.DOM_VK_CONTROL:
							mod = "control";
							break;
						case KeyEvent.DOM_VK_ALT:
							mod = "alt";
							break;
						case KeyEvent.DOM_VK_META:
							mod = "meta";
							break;
					}
				}
				switch (mod) {
					case "shift":
						accel += this.mods_sb.GetStringFromName("VK_SHIFT");
						break;
					case "alt":
						accel += this.mods_sb.GetStringFromName("VK_ALT");
						break;
					case "meta":
						accel += this.mods_sb.GetStringFromName("VK_META");
						break;
					case "control":
						accel += this.mods_sb.GetStringFromName("VK_CONTROL");
						break;
					default:
						continue;
				}
				accel += this.mods_sb.GetStringFromName("MODIFIER_SEPARATOR");
			}
		}

		if (key.getAttribute("key")) {
			return accel + key.getAttribute("key").toUpperCase();
		} else if (key.getAttribute("keycode")) {
			var keycode = key.getAttribute("keycode");
			return accel + this.keys_sb.GetStringFromName(keycode);
		}
	},

	/* Recursively descend into a XUL menu, return globalmenu xml string. */
	genMenu: function(menu_id, menu, placesParent) {
		var popup = menu.firstChild;
		var xml = "";

		var rNode = null;
		if (popup.getAttribute("type") == "places") {
			/* This menu is managed by places; refresh it now. */
			rNode = popup.getResultNode();
			rNode.containerOpen = true;
			popup._rebuild(popup);
			placesParent = popup;
		} else if (placesParent && popup.getAttribute("placespopup")) {
			/* This menu is a child of a menu managed by places; refresh it now. */
			rNode = popup._resultNode;
			rNode.containerOpen = true;
			placesParent._rebuild(popup);
		}

		xml += "<menu>";
		for (var item=popup.firstChild; item; item=item.nextSibling) {
			var iid = item.id;
			var type = "d";
			var state = false;
			var disabled = item.disabled;
			var label = this.createLabelWithAccessKey(item.getAttribute("label"), item.accessKey);
			var image = this.getImage(item);
			var accel = this.getAccel(item);

			if (!iid) {
				/* Everyone needs an id. */
				iid = "r" + this.rand_id++;
			}

			if (item.tagName == "menuseparator") {
				type="s";
			} else if (item.tagName == "menu") {
				if (image) {
					type="i";
				}
			} else if (item.tagName == "menuitem") {
				if (image) {
					type="i";
				}
				if (item.getAttribute("type") == "checkbox") {
					type="c";
					state = item.getAttribute("checked") ? "t" : "f";
				}
				if (item.getAttribute("command")) {
					disabled = this.isCmdDisabled(item.getAttribute("command"));
				}
				this.id_list[menu_id + "/" + iid] = item;
				if (rNode && item.node && PlacesUtils.nodeIsURI(item.node)) {
					/* This comes from a Places node (aka is a bookmark) */
					this.id_uris[menu_id + "/" + iid] = item.node.uri;
				}
			}
			xml += "<item id=\"" + iid + "\" " +
					"label=\"" + this.escapeXml(label) + "\" " +
					"type=\"" + type + "\" " +
					(disabled ? "sensitive=\"false\" " : "") +
					(state ? "state=\"" + state + "\" " : "") +
					(image ? "icon=\"" + image + "\" " : "") +
					(accel ? "accel=\"" + accel + "\" " : "") +
				">";
			if (item.tagName == "menu" &&
				item.firstChild && item.firstChild.tagName == "menupopup") {
				xml += this.genMenu(menu_id + "/" + iid, item, placesParent);
			}
			xml += "</item>";
		}

		xml += "</menu>";

		if (rNode) {
			rNode.containerOpen = false;
		}

		return xml;
	},

	updateWindowMenu: function() {
		this.id_list = [ ];
		this.id_uris = [ ];

		/* Cache preferences */
		this.updatePrefs();

		/* Update some stuff that Firefox does not update regularly */
		gEditUIVisible = true;
		goUpdateGlobalEditMenuItems();
		gEditUIVisible = false;
		HistoryMenu.populateUndoSubmenu();
		HistoryMenu.populateUndoWindowSubmenu();

		/* Start walking the XUL menu bar tree */
		var menubar = document.getElementById("main-menubar");
		var xml = "<menu>";
		for (var item=menubar.firstChild; item; item=item.nextSibling) {
			if (item.tagName != "menu") continue;
			var label = this.createLabelWithAccessKey(item.label, item.accessKey);
			xml += "<item id=\"" + item.id + "\" label=\"" +
				this.escapeXml(label) + 
				"\" type=\"d\" >" +
				this.genMenu("/" + item.id, item) + "</item>";
		}
		xml += "</menu>";

		/* Send XML to menu server. */
		this.serv.updateMenu(xml);
	},

	/* This will batch updates. */
	queueUpdateWindowMenu: function() {
		if (this.focused && !this.update_timeout) {
			this.update_timeout = setTimeout(function(t) {
					t.updateWindowMenu();
					t.update_timeout = 0;
				}, this.batch_interval, this);
		};
	},

	onMenuEvent : function(path) {
		var item = this.id_list[path];
		if (!item) return; /* Item not found. Maybe popup? */
		item.doCommand();
	},

	onMenuActive : function(path) {
		var uri = this.id_uris[path];
		if (uri) {
			window.XULBrowserWindow.setOverLink(uri, null);
		}
	},

	onMenuInactive : function(path) {
		window.XULBrowserWindow.setOverLink("", null);
	}
};

window.addEventListener("load",
	function(event) { Globalmenubar.onLoad(event); }, false);
window.addEventListener("activate",
	function(event) { Globalmenubar.onFocus(event); }, false);
window.addEventListener("deactivate",
	function(event) { Globalmenubar.onBlur(event); }, false);

