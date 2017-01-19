#ifndef _GLOBAL_MENU_H_
#define _GLOBAL_MENU_H_

#include <nsCOMPtr.h>
#include <gdk/gdk.h>

#include "IGlobalMenu.h"
#include "IGlobalMenuListener.h"

#define GLOBAL_MENU_CONTRACTID "@javispedro.com/GlobalMenu;1"
/* "d48a8be1-34c5-4f3c-b7ea-1840ae7968c4" */
#define GLOBAL_MENU_CID { 0xd48a8be1, 0x34c5, 0x4f3c, \
	{ 0xb7, 0xea, 0x18, 0x40, 0xae, 0x79, 0x68, 0xc4 }}

class GlobalMenu : public IGlobalMenu
{
public:
  NS_DECL_ISUPPORTS
  NS_DECL_IGLOBALMENU

  GlobalMenu();

private:
  ~GlobalMenu();

  nsCOMPtr<IGlobalMenuListener> mListener;

  static GdkFilterReturn GdkEventFilter(GdkXEvent *gxevent, GdkEvent *gevent, gpointer data);
  void UnrefGdkWindow();

protected:
  nsCOMPtr<nsIBaseWindow> mBaseWindow;
  GdkWindow *mGdkWindow;

  static GdkAtom sAtomString;
  static GdkAtom sAtomMenuContext;
  static GdkAtom sAtomMenuEvent;
  static GdkAtom sAtomMenuSelect;
  static GdkAtom sAtomMenuDeselect;

  static void InitAtoms();
  static const gchar * GetXStringProperty(GdkWindow *window, GdkAtom property);

  void OnMenuEvent(const char * item);
  void OnMenuSelect(const char * item);
  void OnMenuDeselect(const char * item);
};

#endif
