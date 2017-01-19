
window.addEventListener("load",
	function(event) {
		var mail_menubar = document.getElementById("mail-menubar");
		var toolbar = document.getElementById("mail-toolbar-menubar2");
		if (toolbar) {
			/* This is the main window. */
			Globalmenubar.init(mail_menubar, toolbar);

			/* Subscribe to edit menu changes */
			var edit_commandset = document.getElementById("mailEditMenuItems");
			if (edit_commandset) {
				edit_commandset.addEventListener("commandupdate",
					function(event) {
						Globalmenubar.queueUpdateWindowMenu();
					}, false);
			}

			return;
		}
	});
