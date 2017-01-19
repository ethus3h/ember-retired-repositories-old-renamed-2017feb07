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
#ifndef MENUBARAPPLET_H
#define MENUBARAPPLET_H

// Qt
#include <QCheckBox>
#include <QDBusObjectPath>
#include <QGraphicsLinearLayout>
#include <QGraphicsView>

// KDE
#include <Plasma/Applet>

#include <kappmenu/kappmenuimporter.h>

class MenuCloner;
class WindowMenuManager;
class MenuWidget;

class MenuBarApplet : public Plasma::Applet
{
Q_OBJECT
public:
    MenuBarApplet(QObject* parent, const QVariantList& args);
    ~MenuBarApplet();

    virtual void init();

    virtual void createConfigurationInterface(KConfigDialog*);

private Q_SLOTS:
    void createMenuBar();
    void applyConfig();
    void slotActivated();
    void updateActiveWinId();
    void slotWindowUnregistered(WId);
    void slotActionActivationRequested(WId wid, QAction* action);
    void fillDesktopMenu();

private:
    QGraphicsLinearLayout* mLayout;
    QMenu* mDesktopMenu;
    WindowMenuManager* mWindowMenuManager;
    QMenu* mWindowMenu;
    MenuCloner* mMenuCloner;

    WId mActiveWinId;
    KAppMenuImporter* mAppMenuImporter;
    MenuWidget* mMenuWidget;

    QCheckBox* mConfigButtonFormFactor;

    void createButtonsForBarFormFactor(QMenu*);
    void createButtonsForButtonFormFactor(QMenu*);
    void updateSizePolicy();

    bool useButtonFormFactor() const;

    void setupDesktopMenu();
    void setupWindowMenu();
    void setupDBusInterface();
};

#endif /* MENUBARAPPLET_H */
