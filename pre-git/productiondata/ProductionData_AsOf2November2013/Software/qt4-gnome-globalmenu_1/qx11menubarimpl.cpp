#include <QtCore/QDebug>
#include <QtCore/QEvent>
#include <QtCore/QFileInfo>
#include <QtGui/QAction>
#include <QtGui/QActionEvent>
#include <QtGui/QApplication>
#include <QtGui/QMenuBar>
#include <QtGui/QX11Info>

#include "qx11menubarimpl.h"

QT_BEGIN_NAMESPACE

static const char * atomNames[] = {
	"_NET_GLOBALMENU_MENU_CONTEXT",
	"_NET_GLOBALMENU_MENU_EVENT",
	"_NET_GLOBALMENU_MENU_SELECT",
	"_NET_GLOBALMENU_MENU_DESELECT",
	"WM_CLIENT_LEADER",
	"WM_NAME",
	"UTF8_STRING",
	"_NET_WM_NAME"
};

QCoreApplication::EventFilter QX11MenuBarImpl::oldEventFilter = 0;
QHash<Window, QX11MenuBarImpl*> QX11MenuBarImpl::windows;
bool QX11MenuBarImpl::staticInitialized = false;
Atom QX11MenuBarImpl::atoms[];

QX11MenuBarImpl::QX11MenuBarImpl(QObject *parent) :
	QObject(parent),
	m_updateTimer(new QTimer(this)),
	m_menuBar(0), m_menu(0),
	m_doc(),
	m_window(0),
	m_nextId(1),
	m_forceEnable(false), m_forceDisable(false), m_visible(true)
{
	m_updateTimer->setSingleShot(true);
	m_updateTimer->setInterval(250);
	connect(m_updateTimer, SIGNAL(timeout()), SLOT(update()));

	if (!staticInitialized) {
		XInternAtoms(QX11Info::display(), const_cast<char**>(atomNames), 8, False, atoms);
		oldEventFilter = qApp->setEventFilter(x11EventFilter);
		staticInitialized = true;
	}
}

QX11MenuBarImpl::~QX11MenuBarImpl()
{
	delete m_menu;
	if (m_window) {
		windows.remove(m_window);
	}
}

void QX11MenuBarImpl::init(QMenuBar *menuBar)
{
	Q_ASSERT(menuBar);
	m_menuBar = menuBar;
	delete m_menu;
	m_menu = new QMenu;
	m_doc.clear();
	m_menus.clear();
	m_actions.clear();
	m_ids.clear();

	addMenu(m_menu);
}

void QX11MenuBarImpl::setVisible(bool visible)
{
	m_visible = visible;
	m_updateTimer->start();
}

void QX11MenuBarImpl::actionEvent(QActionEvent *e)
{
	if (m_menu) {
		switch (e->type()) {
		case QEvent::ActionAdded:
			m_menu->insertAction(e->before(), e->action());
			break;
		case QEvent::ActionRemoved:
			m_menu->removeAction(e->action());
			break;
		case QEvent::ActionChanged:
			break;
		default:
			break;
		}
	}
}

void QX11MenuBarImpl::handleReparent(QWidget *oldParent, QWidget *newParent, QWidget *oldWindow, QWidget *newWindow)
{
	Q_UNUSED(oldParent);
	Q_UNUSED(newParent);
	Q_UNUSED(oldWindow);
	if (isNativeMenuBar()) {
		if (m_window != 0) {
			XDeleteProperty(QX11Info::display(), m_window, atoms[1]);
			windows.remove(m_window);
			m_window = 0;
		}
		if (newWindow) {
			m_window = newWindow->winId();
			windows[m_window] = this;
			setLeaderName();
			m_updateTimer->start();
		} else {
			m_updateTimer->stop();
		}
	}
}

bool QX11MenuBarImpl::allowCornerWidgets() const
{
	return !isNativeMenuBar();
}

void QX11MenuBarImpl::popupAction(QAction *act)
{
	Q_UNUSED(act);
	// TODO
}

void QX11MenuBarImpl::setNativeMenuBar(bool value)
{
	m_forceEnable = value;
	m_forceDisable = !value;
	// TODO Update menu bar status
}

bool QX11MenuBarImpl::isNativeMenuBar() const
{
	if (m_forceEnable)
		return true;
	if (m_forceDisable)
		return false;
	// Fallback to default
	return !QApplication::instance()->testAttribute(Qt::AA_DontUseNativeMenuBar);
}

bool QX11MenuBarImpl::shortcutsHandledByNativeMenuBar() const
{
	return true;
}

bool QX11MenuBarImpl::menuBarEventFilter(QObject *src, QEvent *event)
{
	Q_UNUSED(src);
	Q_UNUSED(event);
	return false;
}

bool QX11MenuBarImpl::eventFilter(QObject* src, QEvent* event)
{
	QActionEvent *actionEvent;
	switch (event->type()) {
	case QEvent::ActionAdded:
		actionEvent = static_cast<QActionEvent *>(event);
		addAction(actionEvent->action(), actionEvent->before(), static_cast<QMenu*>(src));
		break;
	case QEvent::ActionRemoved:
		actionEvent = static_cast<QActionEvent *>(event);
		removeAction(actionEvent->action());
		break;
	case QEvent::ActionChanged:
		actionEvent = static_cast<QActionEvent *>(event);
		updateAction(actionEvent->action());
		break;
	default:
		break;
	}
	return false;
}

bool QX11MenuBarImpl::x11EventFilter(void *message, long *result)
{
	bool res = false;
	if (oldEventFilter) {
		res = oldEventFilter(message, result);
	}
	if (windows.isEmpty()) {
		return res;
	}
	XEvent* xev = reinterpret_cast<XEvent*>(message);
	if (xev->type != PropertyNotify) {
		return res;
	}
	XPropertyEvent *xpe = &xev->xproperty;
	Atom atom = xpe->atom;
	if (atom != atoms[1] && atom != atoms[2] && atom != atoms[3]) {
		return res;
	}
	QX11MenuBarImpl* mbi = windows[xpe->window];
	if (!mbi) {
		return res;
	}

	Atom actual_type;
	int actual_format;
	unsigned long nitems, bytes_after;
	unsigned char *prop_return = 0;

	XGetWindowProperty(QX11Info::display(), mbi->m_window, atom,
					   0, 1024, False, XA_STRING,
					   &actual_type, &actual_format, &nitems, &bytes_after,
					   &prop_return);
	if (!prop_return) {
		return res;
	}
	QString data = QString::fromUtf8(reinterpret_cast<char*>(prop_return));
	XFree(prop_return);

	int start = data.lastIndexOf('/');
	if (start < 0) {
		return res;
	}

	int id = data.mid(start + 1).toInt();
	QAction * action = mbi->m_ids[id];
	if (!action) {
		return res;
	}
	QMenu * actionMenu = action->menu();

	if (atom == atoms[1]) {
		action->activate(QAction::Trigger);
	} else if (atom == atoms[2]) {
		action->activate(QAction::Hover);
		if (actionMenu) {
			QMetaObject::invokeMethod(actionMenu, "aboutToShow");
		}
	} else if (atom == atoms[3]) {
		if (actionMenu) {
			QMetaObject::invokeMethod(actionMenu, "aboutToHide");
		}
	}

	return true;
}

void QX11MenuBarImpl::addMenu(QMenu *menu, QAction* parent)
{
	QDomElement elem = m_doc.createElement("menu");

	menu->installEventFilter(this);

	m_menus[menu] = elem;
	if (parent) {
		QDomElement parentElem = m_actions[parent];
		parentElem.appendChild(elem);
	} else {
		m_doc.appendChild(elem);
	}

	// Items might have been added already
	foreach (QAction *action, menu->actions()) {
		addAction(action, 0, menu);
	}
}

void QX11MenuBarImpl::addAction(QAction* action, QAction* before, QMenu* parent)
{
	QDomElement parentElem = m_menus[parent];
	QDomElement elem = m_doc.createElement("item");
	const int id = m_nextId++;

	elem.setAttribute("id", id);

	m_actions[action] = elem;
	m_ids[id] = action;

	if (before) {
		QDomNode beforeNode = m_actions[before];
		parentElem.insertBefore(elem, beforeNode);
	} else {
		parentElem.appendChild(elem);
	}

	QMenu* menu = action->menu();
	if (menu) {
		addMenu(menu, action);
	}

	updateAction(action);

	m_updateTimer->start();
}

void QX11MenuBarImpl::removeAction(QAction *action)
{
	QDomElement elem = m_actions[action];
	QDomNode parent = elem.parentNode();
	QMenu* menu = action->menu();

	if (menu) {
		removeMenu(menu);
	}

	m_actions.remove(action);
	parent.removeChild(elem);

	m_updateTimer->start();
}

void QX11MenuBarImpl::removeMenu(QMenu *menu)
{
	QDomElement elem = m_menus[menu];
	QDomNode parent = elem.parentNode();

	menu->removeEventFilter(this);
	m_menus.remove(menu);
	parent.removeChild(elem);
}

void QX11MenuBarImpl::updateAction(QAction *action)
{
	QDomElement elem = m_actions[action];

	QString type("d");
	if (action->isSeparator()) {
		type = "s";
	} else if (action->isCheckable()) {
		if (action->actionGroup() && action->actionGroup()->isExclusive()) {
			type = "r";
		} else {
			type = "c";
		}
		elem.setAttribute("state", action->isChecked() ? 1 : 0);
	} else {
		QIcon icon = action->icon();
		if (!icon.isNull()) {
			QString iconName = icon.name();

			type = "i";

			if (QIcon::hasThemeIcon(iconName)) {
				elem.setAttribute("icon", "theme:" + iconName);
			} else {
				QImage image = icon.pixmap(16, 16).toImage().convertToFormat(QImage::Format_ARGB32).rgbSwapped();
				QByteArray data;
				QDataStream s(&data, QIODevice::WriteOnly);

				// Read gdk_pixbuf_serialize docs
				s << static_cast<quint32>(0x47646b50);
				s << static_cast<qint32>(6*4 + image.byteCount());
				s << static_cast<quint32>(0x01010002); // ABGR32 format
				s << static_cast<quint32>(image.bytesPerLine());
				s << static_cast<quint32>(image.width());
				s << static_cast<quint32>(image.height());
				s.writeRawData(reinterpret_cast<char*>(image.bits()), image.byteCount());

				elem.setAttribute("icon", "pixbuf:" + QString::fromAscii(data.toBase64()));
			}
		} else {
			elem.removeAttribute("icon");
		}
	}
	elem.setAttribute("type", type);
	if (type != "s") {
		QKeySequence keys = action->shortcut();

		elem.setAttribute("label", action->text().replace(QChar('&'), QChar('_')));
		if (!keys.isEmpty()) {
			elem.setAttribute("accel", keys.toString());
		} else {
			elem.removeAttribute("accel");
		}
	}
	if (!action->isEnabled()) {
		elem.setAttribute("sensitive", 0);
	} else {
		elem.removeAttribute("sensitive");
	}
	if (!action->isVisible()) {
		elem.setAttribute("visible", 0);
	} else {
		elem.removeAttribute("visible");
	}

	m_updateTimer->start();
}

void QX11MenuBarImpl::setLeaderName()
{
	QString name = QFileInfo(QCoreApplication::applicationFilePath()).baseName();

	Window client_leader;

	Atom actual_type;
	int actual_format;
	unsigned long nitems, bytes_after;
	unsigned char *prop_return = 0;

	Status status = XGetWindowProperty(QX11Info::display(), m_window, atoms[4],
					   0, 4, False, XA_WINDOW,
					   &actual_type, &actual_format, &nitems, &bytes_after,
					   &prop_return);
	if (status != Success) {
		return;
	}
	if (actual_type != XA_WINDOW || nitems < 1) {
		XFree(prop_return);
		return;
	}

	client_leader = *(reinterpret_cast<Window*>(prop_return));
	XFree(prop_return);

	QByteArray array = name.toLocal8Bit();
	unsigned char * data = reinterpret_cast<unsigned char *>(array.data());

	XChangeProperty(QX11Info::display(), client_leader, atoms[5],
					XA_STRING, 8, PropModeReplace,
					data, array.size());
}

void QX11MenuBarImpl::update()
{
	if (!m_window) return;
	if (m_actions.count() <= 1) return;
	if (!m_visible) {
		XDeleteProperty(QX11Info::display(), m_window, atoms[0]);
		return;
	}
	QString xml = m_doc.toString(-1);
	QByteArray data = xml.toUtf8();
	XChangeProperty(QX11Info::display(), m_window, atoms[0],
					XA_STRING, 8, PropModeReplace,
					reinterpret_cast<const unsigned char*>(data.constData()),
					data.length());
}

QAbstractPlatformMenuBar* QX11MenuBarImplFactory::create()
{
	return new QX11MenuBarImpl;
}

QStringList QX11MenuBarImplFactory::keys() const
{
	return QStringList() << QLatin1String("default");
}

Q_EXPORT_PLUGIN2(qt4-gnome-globalmenu, QX11MenuBarImplFactory)

QT_END_NAMESPACE
