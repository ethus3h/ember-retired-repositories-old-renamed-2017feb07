#include <stdio.h>
#include <string.h>

#include <nsCOMPtr.h>
#include <nsServiceManagerUtils.h>
#include <nsStringAPI.h>
#include <nsEmbedString.h>
#include <nsIImageToPixbuf.h>
#include <nsIBaseWindow.h>
#include <nsIWidget.h>

#include <gdk/gdk.h>
#include <gdk/gdkx.h>
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <gdk-pixbuf/gdk-pixdata.h>

#include "GlobalMenu.h"

NS_IMPL_ISUPPORTS1(GlobalMenu, IGlobalMenu)

GdkAtom GlobalMenu::sAtomString = GDK_NONE;
GdkAtom GlobalMenu::sAtomMenuContext = GDK_NONE;
GdkAtom GlobalMenu::sAtomMenuEvent = GDK_NONE;
GdkAtom GlobalMenu::sAtomMenuSelect = GDK_NONE;
GdkAtom GlobalMenu::sAtomMenuDeselect = GDK_NONE;

GlobalMenu::GlobalMenu()
: mListener(0), mBaseWindow(0), mGdkWindow(0)
{
	InitAtoms();
}

GlobalMenu::~GlobalMenu()
{
	UnrefGdkWindow();
}

void GlobalMenu::InitAtoms()
{
	if (sAtomString == GDK_NONE) {
		sAtomString = gdk_atom_intern("STRING", FALSE);
	}
	if (sAtomMenuContext == GDK_NONE) {
		sAtomMenuContext = gdk_atom_intern("_NET_GLOBALMENU_MENU_CONTEXT", FALSE);
	}
	if (sAtomMenuEvent == GDK_NONE) {
		sAtomMenuEvent = gdk_atom_intern("_NET_GLOBALMENU_MENU_EVENT", FALSE);
	}
	if (sAtomMenuSelect == GDK_NONE) {
		sAtomMenuSelect = gdk_atom_intern("_NET_GLOBALMENU_MENU_SELECT", FALSE);
	}
	if (sAtomMenuDeselect == GDK_NONE) {
		sAtomMenuDeselect = gdk_atom_intern("_NET_GLOBALMENU_MENU_DESELECT", FALSE);
	}
}

void GlobalMenu::UnrefGdkWindow()
{
	if (mGdkWindow) {
		gdk_window_remove_filter(mGdkWindow, GdkEventFilter, this);
		g_object_unref(mGdkWindow);
		mGdkWindow = NULL;
	}
}

/* attribute nsIBaseWindow window; */
NS_IMETHODIMP GlobalMenu::GetWindow(nsIBaseWindow * *aWindow)
{
	NS_IF_ADDREF(*aWindow = mBaseWindow);
	return NS_OK;
}
NS_IMETHODIMP GlobalMenu::SetWindow(nsIBaseWindow * aWindow)
{
	nsCOMPtr<nsIWidget> widget;
	void * nativeWindow;
	GdkWindow *gdkWindow;

	mBaseWindow = aWindow;
	UnrefGdkWindow();

	if (!mBaseWindow) {
		/* Setting to NULL window => only unref */
		return NS_OK;
	}

	aWindow->GetMainWidget(getter_AddRefs(widget));
	if (!widget) {
		return NS_ERROR_FAILURE;
	}

	nativeWindow = widget->GetNativeData(NS_NATIVE_WINDOW);
	if (!nativeWindow) {
		return NS_ERROR_FAILURE;
	}

	gdkWindow = GDK_WINDOW(nativeWindow);
	if (!gdkWindow) {
		return NS_ERROR_FAILURE;
	}

	/* We are interested in toplevel window only */
	mGdkWindow = GDK_WINDOW(g_object_ref(gdk_window_get_toplevel(gdkWindow)));
	if (!mGdkWindow) {
		return NS_ERROR_FAILURE;
	}

	gdk_window_add_filter(mGdkWindow, GdkEventFilter, this);

    return NS_OK;
}

/* attribute IGlobalMenuListener listener; */
NS_IMETHODIMP GlobalMenu::GetListener(IGlobalMenuListener * *aListener)
{
	NS_IF_ADDREF(*aListener = mListener);
	return NS_OK;
}
NS_IMETHODIMP GlobalMenu::SetListener(IGlobalMenuListener * aListener)
{
	mListener = aListener;
    return NS_OK;
}

void GlobalMenu::OnMenuEvent(const char * item)
{
	if (mListener) {
		mListener->OnMenuEvent(nsEmbedCString(item));
	}
}

void GlobalMenu::OnMenuSelect(const char * item)
{
	if (mListener) {
		mListener->OnMenuActive(nsEmbedCString(item));
	}
}

void GlobalMenu::OnMenuDeselect(const char * item)
{
	if (mListener) {
		mListener->OnMenuInactive(nsEmbedCString(item));
	}
}

const gchar * GlobalMenu::GetXStringProperty(GdkWindow *window, GdkAtom property)
{
	GdkAtom property_type;
	gint format, length;
	guchar *data;
	gboolean res;

	res = gdk_property_get(window, property, sAtomString, 0, 1024, FALSE,
		&property_type, &format, &length, &data);

	if (res) {
		return (const gchar*) data;
	} else {
		return NULL;
	}
}

GdkFilterReturn GlobalMenu::GdkEventFilter(GdkXEvent *gxevent, GdkEvent *gevent, gpointer data)
{
	GlobalMenu *g = (GlobalMenu*)data;
	XEvent *xevent = (XEvent*) gxevent;
	GdkWindow *window = ((GdkEventAny*)gevent)->window;
	GdkAtom atom;

	switch (xevent->type) {
		case PropertyNotify:
			atom = gdk_x11_xatom_to_atom(xevent->xproperty.atom);
			if (atom == sAtomMenuEvent) {
					g->OnMenuEvent(GetXStringProperty(window, sAtomMenuEvent));
					return GDK_FILTER_REMOVE;
			} else if (atom == sAtomMenuSelect) {
					g->OnMenuSelect(GetXStringProperty(window, sAtomMenuSelect));
					return GDK_FILTER_REMOVE;
			} else if (atom == sAtomMenuDeselect) {
					g->OnMenuDeselect(GetXStringProperty(window, sAtomMenuDeselect));
					return GDK_FILTER_REMOVE;
			}
			break;
	}

	return GDK_FILTER_CONTINUE;
}

/* void updateMenu (in AUTF8String xml); */
NS_IMETHODIMP GlobalMenu::UpdateMenu(const nsACString & aXml)
{
	if (!mGdkWindow) {
		return NS_ERROR_INVALID_ARG;
	}

	gdk_property_change(mGdkWindow, sAtomMenuContext, sAtomString,
		8, GDK_PROP_MODE_REPLACE,
		(const guchar*) PromiseFlatCString(aXml).get(), aXml.Length() + 1);

    return NS_OK;
}

/* ACString serializeImage (in imgIContainer image, in PRInt32 x, in PRInt32 y, in PRInt32 width, in PRInt32 height); */
NS_IMETHODIMP GlobalMenu::SerializeImage(imgIContainer *aImage, PRInt32 x, PRInt32 y, PRInt32 width, PRInt32 height, nsACString & _retval NS_OUTPARAM)
{
	nsCOMPtr<nsIImageToPixbuf> imgToPixbuf =
		do_GetService("@mozilla.org/widget/image-to-gdk-pixbuf;1");
	if (!imgToPixbuf)
		return NS_ERROR_NOT_AVAILABLE;

	GdkPixbuf* pixbuf = imgToPixbuf->ConvertImageToPixbuf(aImage);
	if (!pixbuf)
		return NS_ERROR_NOT_AVAILABLE;

	GdkPixbuf* subpixbuf;
	if (width > 0 && height > 0 &&
		x + width <= gdk_pixbuf_get_width(pixbuf) &&
		y + height <= gdk_pixbuf_get_height(pixbuf)) {
		subpixbuf = gdk_pixbuf_new_subpixbuf(pixbuf, x, y, width, height);
	} else {
		subpixbuf = GDK_PIXBUF(g_object_ref(pixbuf));
	}
	if (!subpixbuf) {
		g_object_unref(pixbuf);
		return NS_ERROR_INVALID_ARG;
	}

	GdkPixdata pixdata;
	void * pixel_data = gdk_pixdata_from_pixbuf(&pixdata, subpixbuf, TRUE);
	if (!pixel_data) {
		g_object_unref(subpixbuf);
		g_object_unref(pixbuf);
		return NS_ERROR_OUT_OF_MEMORY;
	}

	guint dataLen;
	guint8 * data = gdk_pixdata_serialize(&pixdata, &dataLen);
	if (!data) {
		g_free(pixel_data);
		g_object_unref(subpixbuf);
		g_object_unref(pixbuf);
		return NS_ERROR_OUT_OF_MEMORY;
	}

	/* No longer needed, "data" is a copy. */
	g_free(pixel_data);
	g_object_unref(subpixbuf);
	g_object_unref(pixbuf);

	gchar * base64 = g_base64_encode(data, dataLen);
	g_free(data); /* No longer needed, "base64" is a copy. */
	if (!base64) {
		return NS_ERROR_OUT_OF_MEMORY;
	}

	/* I wish I could use nsACString.Adopt() here. */
	_retval.Assign(base64);
	g_free(base64);

	return NS_OK;
}

/* void debugPrint (in AUTF8String s); */
NS_IMETHODIMP GlobalMenu::DebugPrint(const nsACString & aStr)
{
	puts(PromiseFlatCString(aStr).get());

	return NS_OK;
}

