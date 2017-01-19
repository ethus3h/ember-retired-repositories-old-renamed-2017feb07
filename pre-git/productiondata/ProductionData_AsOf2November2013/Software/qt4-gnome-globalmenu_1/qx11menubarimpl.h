#ifndef QX11MENUBARIMPL_H
#define QX11MENUBARIMPL_H

#include <QtCore/QCoreApplication>
#include <QtCore/QHash>
#include <QtCore/QTimer>
#include <QtGui/QAction>
#include <QtGui/QX11Info>
#include <QtGui/private/qabstractplatformmenubar_p.h>
#include <QtGui/private/qt_x11_p.h>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>

QT_BEGIN_NAMESPACE

class QX11MenuBarImpl : public QObject, public QAbstractPlatformMenuBar {
    Q_OBJECT
public:
	explicit QX11MenuBarImpl(QObject *parent = 0);
	~QX11MenuBarImpl();

	void init(QMenuBar *);

	void setVisible(bool visible);

	void actionEvent(QActionEvent*);

	void handleReparent(QWidget *oldParent, QWidget *newParent, QWidget *oldWindow, QWidget *newWindow);

	bool allowCornerWidgets() const;

	void popupAction(QAction*);

	void setNativeMenuBar(bool);
	bool isNativeMenuBar() const;

	bool shortcutsHandledByNativeMenuBar() const;
	bool menuBarEventFilter(QObject *, QEvent *event);

	bool eventFilter(QObject*, QEvent*);

private:
	static QCoreApplication::EventFilter oldEventFilter;
	static Atom atoms[8];
	static bool staticInitialized;
	static QHash<Window, QX11MenuBarImpl*> windows;

	static bool x11EventFilter(void *message, long *result);

	QTimer* m_updateTimer;
	QMenuBar* m_menuBar;
	QMenu* m_menu;
	QDomDocument m_doc;
	QHash<QMenu*, QDomElement> m_menus;
	QHash<QAction*, QDomElement> m_actions;
	QHash<int, QAction*> m_ids;
	Window m_window;
	int m_nextId;

	bool m_forceEnable : 1;
	bool m_forceDisable : 1;
	bool m_visible : 1;

	void addAction(QAction* action, QAction* before, QMenu* parent);
	void addMenu(QMenu* menu, QAction* parent = 0);
	void removeAction(QAction* action);
	void removeMenu(QMenu* menu);
	void updateAction(QAction* action);

	void setLeaderName();

private slots:
	void update();
};

class Q_GUI_EXPORT QX11MenuBarImplFactory : public QObject, public QPlatformMenuBarFactoryInterface
{
	Q_OBJECT
	Q_INTERFACES(QPlatformMenuBarFactoryInterface:QFactoryInterface)
public:
	QAbstractPlatformMenuBar* create();
	QStringList keys() const;
};

QT_END_NAMESPACE

#endif // QX11MENUBARIMPL_H
