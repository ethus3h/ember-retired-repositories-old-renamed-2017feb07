/*
 * Plasma applet to display application window menus
 *
 * Copyright 2010 Canonical Ltd.
 *
 * Authors:
 * - Aurélien Gâteau <aurelien.gateau@canonical.com>
 *
 * License: GPL v3
 */
// Self
#include "menuwidget.moc"

// Qt
#include <QApplication>
#include <QGraphicsDropShadowEffect>
#include <QGraphicsLinearLayout>
#include <QGraphicsView>
#include <QMenu>
#include <QTimer>
#include <QToolButton>

// KDE
#include <KDebug>
#include <Plasma/Containment>
#include <Plasma/Corona>
#include <Plasma/Theme>

MenuWidget::MenuWidget(Plasma::Applet* applet)
: QGraphicsWidget(applet)
, mApplet(applet)
, mLayout(new QGraphicsLinearLayout(this))
, mMouseChecker(new QTimer(this))
, mUpdateButtonsTimer(new QTimer(this))
, mRootMenu(0)
, mCurrentButton(0)
{
    mMouseChecker->setInterval(100);
    connect(mMouseChecker, SIGNAL(timeout()), SLOT(checkMousePosition()));

    mUpdateButtonsTimer->setSingleShot(true);
    connect(mUpdateButtonsTimer, SIGNAL(timeout()), SLOT(updateButtons()));

    mLayout->setContentsMargins(0, 0, 0, 0);
}

void MenuWidget::setMenu(QMenu* menu)
{
    mRootMenu = menu;
    mRootMenu->installEventFilter(this);
    updateButtons();
}

void MenuWidget::updateButtons()
{
    mUpdateButtonsTimer->stop();

    // If we must show less buttons than before, drop the last ones
    int dropCount = mMenuButtonList.count() - mRootMenu->actions().count();
    for (;dropCount > 0; --dropCount) {
        delete mMenuButtonList.takeLast();
    }

    // Create buttons for each actions in mRootMenu, reusing existing buttons if possible
    QList<MenuButton*>::Iterator
        it = mMenuButtonList.begin(),
        end = mMenuButtonList.end();
    Q_FOREACH(QAction* action, mRootMenu->actions()) {
        if (action->isSeparator()) {
            continue;
        }
        QMenu* menu = action->menu();
        if (!menu) {
            kWarning() << "No menu in action" << action->text();
            continue;
        }

        // Create or reuse a button
        MenuButton* button;
        if (it == end) {
            button = createButton();
        } else {
            button = *it;
            ++it;
        }

        // Init button
        button->setText(action->text());
        button->setMenu(menu);
        disconnect(menu, 0, this, 0); // Ensure we are only connected to aboutToHide() once
        connect(menu, SIGNAL(aboutToHide()), SLOT(slotAboutToHideMenu()));
        action->menu()->installEventFilter(this);
    }
}

bool MenuWidget::eventFilter(QObject* object, QEvent* event)
{
    bool filtered;
    if (object == mRootMenu) {
        filtered = rootMenuEventFilter(event);
    } else {
        filtered = subMenuEventFilter(static_cast<QMenu*>(object), event);
    }
    return filtered ? true : QGraphicsWidget::eventFilter(object, event);
}

bool MenuWidget::rootMenuEventFilter(QEvent* event)
{
    switch (event->type()) {
    case QEvent::ActionAdded:
    case QEvent::ActionChanged:
    case QEvent::ActionRemoved:
        mUpdateButtonsTimer->start();
        break;
    default:
        break;
    }
    return false;
}

bool MenuWidget::subMenuEventFilter(QMenu* menu, QEvent* event)
{
    if (event->type() == QEvent::KeyPress) {
        menu->removeEventFilter(this);
        QApplication::sendEvent(menu, event);
        menu->installEventFilter(this);
        if (!event->isAccepted()) {
            QKeyEvent* keyEvent = static_cast<QKeyEvent*>(event);
            switch (keyEvent->key()) {
            case Qt::Key_Left:
                showNextPrevMenu(false);
                break;
            case Qt::Key_Right:
                showNextPrevMenu(true);
                break;
            default:
                break;
            }
        }
        return true;
    }
    return false;
}

MenuButton* MenuWidget::createButton()
{
    MenuButton* button = new MenuButton(this);
    button->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Minimum);
    connect(button, SIGNAL(clicked()), SLOT(slotButtonClicked()));

    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(5);
    shadow->setOffset(QPointF(0, 1));
    shadow->setColor(Plasma::Theme::defaultTheme()->color(Plasma::Theme::BackgroundColor));
    setGraphicsEffect(shadow);

    mLayout->addItem(button);
    mMenuButtonList << button;
    return button;
}

void MenuWidget::slotButtonClicked()
{
    MenuButton* button = qobject_cast<MenuButton*>(sender());
    if (!button) {
        kWarning() << "Not called by a MenuButton!";
        return;
    }
    showMenu(button);
}

void MenuWidget::showNextPrevMenu(bool next)
{
    int index = mMenuButtonList.indexOf(mCurrentButton);
    if (index == -1) {
        kWarning() << "Couldn't find button!";
        return;
    }
    if (next) {
        index = (index + 1) % mMenuButtonList.count();
    } else {
        index = (index == 0 ? mMenuButtonList.count() : index) - 1;
    }
    showMenu(mMenuButtonList.at(index));
}

void MenuWidget::showMenu(MenuButton* button)
{
    if (mCurrentButton) {
        bool justHide = mCurrentButton == button;
        mCurrentButton->menu()->hide();
        if (justHide) {
            return;
        }
    }
    QMenu* menu = button->menu();
    QPoint pos = mApplet->containment()->corona()->popupPosition(button, menu->sizeHint());

    mCurrentButton = button;
    mCurrentButton->nativeWidget()->setDown(true);
    // Process gui events so that the first opened button gets some time to
    // repaint itself. If we don't its highlight border stays there while
    // scrubling.
    qApp->processEvents();
    menu->popup(pos);

    mMouseChecker->start();
}

void MenuWidget::checkMousePosition()
{
    QPoint pos = mApplet->view()->mapFromGlobal(QCursor::pos());
    QGraphicsItem* item = mApplet->view()->itemAt(pos);
    if (!item) {
        return;
    }

    MenuButton* buttonBelow = qobject_cast<MenuButton*>(item->toGraphicsObject());
    if (!buttonBelow) {
        return;
    }

    if (buttonBelow != mCurrentButton) {
        showMenu(buttonBelow);
    }
}

void MenuWidget::slotAboutToHideMenu()
{
    if (!mCurrentButton) {
        // This can happen when menu was opened and user activated another
        // window.
        mMouseChecker->stop();
        return;
    }
    if (mCurrentButton->menu() == sender()) {
        mCurrentButton->nativeWidget()->setDown(false);
        mCurrentButton = 0;
        mMouseChecker->stop();
    } else {
        kWarning() << "Not called from menu associated with mCurrentButton!";
    }
}

void MenuWidget::activate()
{
    QGraphicsLayoutItem* layoutItem = mLayout->itemAt(0);
    if (!layoutItem) {
        kWarning() << "No layoutItem found!";
        return;
    }
    MenuButton* button = qobject_cast<MenuButton*>(layoutItem->graphicsItem()->toGraphicsObject());
    if (!button) {
        kWarning() << "No button found!";
        return;
    }

    button->nativeWidget()->animateClick();
}

void MenuWidget::activateAction(QAction* action)
{
    Q_FOREACH(MenuButton* button, mMenuButtonList) {
        if (button->menu() == action->menu()) {
            button->nativeWidget()->animateClick();
            break;
        }
    }
}

void MenuWidget::activateActionInMenu(QAction* action)
{
    MenuButton* button = mMenuButtonList.first();
    if (!button) {
        kWarning() << "No buttons!";
        return;
    }
    button->nativeWidget()->animateClick();
    button->menu()->setActiveAction(action);
}
