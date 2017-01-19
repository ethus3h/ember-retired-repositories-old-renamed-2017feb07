/********************************************************************************
** Form generated from reading UI file 'rclmain.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCLMAIN_H
#define UI_RCLMAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QRadioButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "reslist.h"
#include "ssearch_w.h"

QT_BEGIN_NAMESPACE

class Ui_RclMainBase
{
public:
    QAction *fileExitAction;
    QAction *fileToggleIndexingAction;
    QAction *fileRebuildIndexAction;
    QAction *fileEraseDocHistoryAction;
    QAction *fileEraseSearchHistoryAction;
    QAction *showMissingHelpers_Action;
    QAction *showActiveTypes_Action;
    QAction *helpAbout_RecollAction;
    QAction *userManualAction;
    QAction *toolsDoc_HistoryAction;
    QAction *toolsAdvanced_SearchAction;
    QAction *toolsSort_parametersAction;
    QAction *toolsSpellAction;
    QAction *nextPageAction;
    QAction *firstPageAction;
    QAction *prevPageAction;
    QAction *indexConfigAction;
    QAction *indexScheduleAction;
    QAction *queryPrefsAction;
    QAction *extIdxAction;
    QAction *toggleFullScreenAction;
    QAction *actionSortByDateAsc;
    QAction *actionSortByDateDesc;
    QAction *actionShowQueryDetails;
    QAction *actionShowResultsAsTable;
    QAction *actionSaveResultsAsCSV;
    QAction *actionNext_Page;
    QAction *actionPrevious_Page;
    QAction *actionFirst_Page;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    SSearch *sSearch;
    QFrame *catgBGRP;
    QRadioButton *allRDB;
    ResList *reslist;
    QStatusBar *statusbar;
    QToolBar *Toolbar;
    QToolBar *Toolbar1;
    QMenuBar *MenuBar;
    QMenu *fileMenu;
    QMenu *toolsMenu;
    QMenu *preferencesMenu;
    QMenu *helpMenu;
    QMenu *menuResults;

    void setupUi(QMainWindow *RclMainBase)
    {
        if (RclMainBase->objectName().isEmpty())
            RclMainBase->setObjectName(QString::fromUtf8("RclMainBase"));
        RclMainBase->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RclMainBase->sizePolicy().hasHeightForWidth());
        RclMainBase->setSizePolicy(sizePolicy);
        fileExitAction = new QAction(RclMainBase);
        fileExitAction->setObjectName(QString::fromUtf8("fileExitAction"));
        fileExitAction->setProperty("name", QVariant(QByteArray("fileExitAction")));
        fileToggleIndexingAction = new QAction(RclMainBase);
        fileToggleIndexingAction->setObjectName(QString::fromUtf8("fileToggleIndexingAction"));
        fileToggleIndexingAction->setProperty("name", QVariant(QByteArray("fileToggleIndexingAction")));
        fileRebuildIndexAction = new QAction(RclMainBase);
        fileRebuildIndexAction->setObjectName(QString::fromUtf8("fileRebuildIndexAction"));
        fileRebuildIndexAction->setProperty("name", QVariant(QByteArray("fileRebuildIndexAction")));
        fileEraseDocHistoryAction = new QAction(RclMainBase);
        fileEraseDocHistoryAction->setObjectName(QString::fromUtf8("fileEraseDocHistoryAction"));
        fileEraseDocHistoryAction->setProperty("name", QVariant(QByteArray("fileEraseDocHistoryAction")));
        fileEraseSearchHistoryAction = new QAction(RclMainBase);
        fileEraseSearchHistoryAction->setObjectName(QString::fromUtf8("fileEraseSearchHistoryAction"));
        fileEraseSearchHistoryAction->setProperty("name", QVariant(QByteArray("fileEraseSearchHistoryAction")));
        showMissingHelpers_Action = new QAction(RclMainBase);
        showMissingHelpers_Action->setObjectName(QString::fromUtf8("showMissingHelpers_Action"));
        showMissingHelpers_Action->setProperty("name", QVariant(QByteArray("showMissingHelpers_Action")));
        showActiveTypes_Action = new QAction(RclMainBase);
        showActiveTypes_Action->setObjectName(QString::fromUtf8("showActiveTypes_Action"));
        showActiveTypes_Action->setProperty("name", QVariant(QByteArray("showActiveTypes_Action")));
        helpAbout_RecollAction = new QAction(RclMainBase);
        helpAbout_RecollAction->setObjectName(QString::fromUtf8("helpAbout_RecollAction"));
        helpAbout_RecollAction->setProperty("name", QVariant(QByteArray("helpAbout_RecollAction")));
        userManualAction = new QAction(RclMainBase);
        userManualAction->setObjectName(QString::fromUtf8("userManualAction"));
        userManualAction->setProperty("name", QVariant(QByteArray("userManualAction")));
        toolsDoc_HistoryAction = new QAction(RclMainBase);
        toolsDoc_HistoryAction->setObjectName(QString::fromUtf8("toolsDoc_HistoryAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/history.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolsDoc_HistoryAction->setIcon(icon);
        toolsDoc_HistoryAction->setProperty("name", QVariant(QByteArray("toolsDoc_HistoryAction")));
        toolsAdvanced_SearchAction = new QAction(RclMainBase);
        toolsAdvanced_SearchAction->setObjectName(QString::fromUtf8("toolsAdvanced_SearchAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/asearch.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolsAdvanced_SearchAction->setIcon(icon1);
        toolsAdvanced_SearchAction->setProperty("name", QVariant(QByteArray("toolsAdvanced_SearchAction")));
        toolsSort_parametersAction = new QAction(RclMainBase);
        toolsSort_parametersAction->setObjectName(QString::fromUtf8("toolsSort_parametersAction"));
        toolsSort_parametersAction->setProperty("name", QVariant(QByteArray("toolsSort_parametersAction")));
        toolsSpellAction = new QAction(RclMainBase);
        toolsSpellAction->setObjectName(QString::fromUtf8("toolsSpellAction"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/spell.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolsSpellAction->setIcon(icon2);
        toolsSpellAction->setProperty("name", QVariant(QByteArray("toolsSpellAction")));
        nextPageAction = new QAction(RclMainBase);
        nextPageAction->setObjectName(QString::fromUtf8("nextPageAction"));
        nextPageAction->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/nextpage.png"), QSize(), QIcon::Normal, QIcon::Off);
        nextPageAction->setIcon(icon3);
        nextPageAction->setProperty("name", QVariant(QByteArray("nextPageAction")));
        firstPageAction = new QAction(RclMainBase);
        firstPageAction->setObjectName(QString::fromUtf8("firstPageAction"));
        firstPageAction->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/firstpage.png"), QSize(), QIcon::Normal, QIcon::Off);
        firstPageAction->setIcon(icon4);
        firstPageAction->setProperty("name", QVariant(QByteArray("firstPageAction")));
        prevPageAction = new QAction(RclMainBase);
        prevPageAction->setObjectName(QString::fromUtf8("prevPageAction"));
        prevPageAction->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/prevpage.png"), QSize(), QIcon::Normal, QIcon::Off);
        prevPageAction->setIcon(icon5);
        prevPageAction->setProperty("name", QVariant(QByteArray("prevPageAction")));
        indexConfigAction = new QAction(RclMainBase);
        indexConfigAction->setObjectName(QString::fromUtf8("indexConfigAction"));
        indexConfigAction->setProperty("name", QVariant(QByteArray("indexConfigAction")));
        indexScheduleAction = new QAction(RclMainBase);
        indexScheduleAction->setObjectName(QString::fromUtf8("indexScheduleAction"));
        indexScheduleAction->setProperty("name", QVariant(QByteArray("indexScheduleAction")));
        queryPrefsAction = new QAction(RclMainBase);
        queryPrefsAction->setObjectName(QString::fromUtf8("queryPrefsAction"));
        queryPrefsAction->setProperty("name", QVariant(QByteArray("queryPrefsAction")));
        extIdxAction = new QAction(RclMainBase);
        extIdxAction->setObjectName(QString::fromUtf8("extIdxAction"));
        extIdxAction->setProperty("name", QVariant(QByteArray("extIdxAction")));
        toggleFullScreenAction = new QAction(RclMainBase);
        toggleFullScreenAction->setObjectName(QString::fromUtf8("toggleFullScreenAction"));
        toggleFullScreenAction->setProperty("name", QVariant(QByteArray("toggleFullScreenAction")));
        actionSortByDateAsc = new QAction(RclMainBase);
        actionSortByDateAsc->setObjectName(QString::fromUtf8("actionSortByDateAsc"));
        actionSortByDateAsc->setCheckable(true);
        actionSortByDateAsc->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByDateAsc->setIcon(icon6);
        actionSortByDateDesc = new QAction(RclMainBase);
        actionSortByDateDesc->setObjectName(QString::fromUtf8("actionSortByDateDesc"));
        actionSortByDateDesc->setCheckable(true);
        actionSortByDateDesc->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSortByDateDesc->setIcon(icon7);
        actionShowQueryDetails = new QAction(RclMainBase);
        actionShowQueryDetails->setObjectName(QString::fromUtf8("actionShowQueryDetails"));
        actionShowResultsAsTable = new QAction(RclMainBase);
        actionShowResultsAsTable->setObjectName(QString::fromUtf8("actionShowResultsAsTable"));
        actionShowResultsAsTable->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/table.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionShowResultsAsTable->setIcon(icon8);
        actionSaveResultsAsCSV = new QAction(RclMainBase);
        actionSaveResultsAsCSV->setObjectName(QString::fromUtf8("actionSaveResultsAsCSV"));
        actionNext_Page = new QAction(RclMainBase);
        actionNext_Page->setObjectName(QString::fromUtf8("actionNext_Page"));
        actionPrevious_Page = new QAction(RclMainBase);
        actionPrevious_Page->setObjectName(QString::fromUtf8("actionPrevious_Page"));
        actionFirst_Page = new QAction(RclMainBase);
        actionFirst_Page->setObjectName(QString::fromUtf8("actionFirst_Page"));
        centralwidget = new QWidget(RclMainBase);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(4, 2, 4, 2);
        sSearch = new SSearch(centralwidget);
        sSearch->setObjectName(QString::fromUtf8("sSearch"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(sSearch->sizePolicy().hasHeightForWidth());
        sSearch->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(sSearch);

        catgBGRP = new QFrame(centralwidget);
        catgBGRP->setObjectName(QString::fromUtf8("catgBGRP"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(catgBGRP->sizePolicy().hasHeightForWidth());
        catgBGRP->setSizePolicy(sizePolicy2);
        allRDB = new QRadioButton(catgBGRP);
        allRDB->setObjectName(QString::fromUtf8("allRDB"));
        allRDB->setGeometry(QRect(0, 0, 45, 20));

        verticalLayout->addWidget(catgBGRP);

        reslist = new ResList(centralwidget);
        reslist->setObjectName(QString::fromUtf8("reslist"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(2);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(reslist->sizePolicy().hasHeightForWidth());
        reslist->setSizePolicy(sizePolicy3);

        verticalLayout->addWidget(reslist);

        RclMainBase->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(RclMainBase);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        RclMainBase->setStatusBar(statusbar);
        Toolbar = new QToolBar(RclMainBase);
        Toolbar->setObjectName(QString::fromUtf8("Toolbar"));
        RclMainBase->addToolBar(Qt::TopToolBarArea, Toolbar);
        Toolbar1 = new QToolBar(RclMainBase);
        Toolbar1->setObjectName(QString::fromUtf8("Toolbar1"));
        RclMainBase->addToolBar(Qt::TopToolBarArea, Toolbar1);
        MenuBar = new QMenuBar(RclMainBase);
        MenuBar->setObjectName(QString::fromUtf8("MenuBar"));
        MenuBar->setGeometry(QRect(0, 0, 800, 21));
        fileMenu = new QMenu(MenuBar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        toolsMenu = new QMenu(MenuBar);
        toolsMenu->setObjectName(QString::fromUtf8("toolsMenu"));
        preferencesMenu = new QMenu(MenuBar);
        preferencesMenu->setObjectName(QString::fromUtf8("preferencesMenu"));
        helpMenu = new QMenu(MenuBar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        menuResults = new QMenu(MenuBar);
        menuResults->setObjectName(QString::fromUtf8("menuResults"));
        RclMainBase->setMenuBar(MenuBar);

        Toolbar->addAction(toolsAdvanced_SearchAction);
        Toolbar->addAction(toolsDoc_HistoryAction);
        Toolbar->addAction(toolsSpellAction);
        Toolbar1->addAction(firstPageAction);
        Toolbar1->addAction(prevPageAction);
        Toolbar1->addAction(nextPageAction);
        Toolbar1->addSeparator();
        Toolbar1->addAction(actionSortByDateAsc);
        Toolbar1->addAction(actionSortByDateDesc);
        Toolbar1->addSeparator();
        Toolbar1->addAction(actionShowResultsAsTable);
        MenuBar->addAction(fileMenu->menuAction());
        MenuBar->addAction(toolsMenu->menuAction());
        MenuBar->addAction(menuResults->menuAction());
        MenuBar->addAction(preferencesMenu->menuAction());
        MenuBar->addSeparator();
        MenuBar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileToggleIndexingAction);
        fileMenu->addAction(fileRebuildIndexAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileEraseSearchHistoryAction);
        fileMenu->addAction(fileEraseDocHistoryAction);
        fileMenu->addSeparator();
        fileMenu->addAction(showMissingHelpers_Action);
        fileMenu->addAction(showActiveTypes_Action);
        fileMenu->addSeparator();
        fileMenu->addAction(toggleFullScreenAction);
        fileMenu->addSeparator();
        fileMenu->addAction(fileExitAction);
        toolsMenu->addAction(toolsDoc_HistoryAction);
        toolsMenu->addAction(toolsAdvanced_SearchAction);
        toolsMenu->addAction(toolsSpellAction);
        toolsMenu->addAction(actionShowQueryDetails);
        preferencesMenu->addAction(indexConfigAction);
        preferencesMenu->addAction(indexScheduleAction);
        preferencesMenu->addSeparator();
        preferencesMenu->addAction(queryPrefsAction);
        preferencesMenu->addAction(extIdxAction);
        preferencesMenu->addSeparator();
        helpMenu->addAction(userManualAction);
        helpMenu->addAction(showMissingHelpers_Action);
        helpMenu->addAction(showActiveTypes_Action);
        helpMenu->addSeparator();
        helpMenu->addAction(helpAbout_RecollAction);
        menuResults->addAction(nextPageAction);
        menuResults->addAction(prevPageAction);
        menuResults->addAction(firstPageAction);
        menuResults->addSeparator();
        menuResults->addAction(actionSortByDateAsc);
        menuResults->addAction(actionSortByDateDesc);
        menuResults->addSeparator();
        menuResults->addAction(actionShowResultsAsTable);
        menuResults->addSeparator();
        menuResults->addAction(actionSaveResultsAsCSV);

        retranslateUi(RclMainBase);

        QMetaObject::connectSlotsByName(RclMainBase);
    } // setupUi

    void retranslateUi(QMainWindow *RclMainBase)
    {
        RclMainBase->setWindowTitle(QApplication::translate("RclMainBase", "Recoll", 0, QApplication::UnicodeUTF8));
        fileExitAction->setText(QApplication::translate("RclMainBase", "E&xit", 0, QApplication::UnicodeUTF8));
        fileExitAction->setShortcut(QApplication::translate("RclMainBase", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        fileToggleIndexingAction->setText(QApplication::translate("RclMainBase", "Update &index", 0, QApplication::UnicodeUTF8));
        fileRebuildIndexAction->setText(QApplication::translate("RclMainBase", "&Rebuild index", 0, QApplication::UnicodeUTF8));
        fileEraseDocHistoryAction->setText(QApplication::translate("RclMainBase", "&Erase document history", 0, QApplication::UnicodeUTF8));
        fileEraseSearchHistoryAction->setText(QApplication::translate("RclMainBase", "&Erase search history", 0, QApplication::UnicodeUTF8));
        showMissingHelpers_Action->setText(QApplication::translate("RclMainBase", "&Show missing helpers", 0, QApplication::UnicodeUTF8));
        showActiveTypes_Action->setText(QApplication::translate("RclMainBase", "&Show indexed types", 0, QApplication::UnicodeUTF8));
        helpAbout_RecollAction->setText(QApplication::translate("RclMainBase", "&About Recoll", 0, QApplication::UnicodeUTF8));
        userManualAction->setText(QApplication::translate("RclMainBase", "&User manual", 0, QApplication::UnicodeUTF8));
        toolsDoc_HistoryAction->setText(QApplication::translate("RclMainBase", "Document &History", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolsDoc_HistoryAction->setToolTip(QApplication::translate("RclMainBase", "Document  History", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolsAdvanced_SearchAction->setText(QApplication::translate("RclMainBase", "&Advanced Search", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolsAdvanced_SearchAction->setToolTip(QApplication::translate("RclMainBase", "Advanced/complex  Search", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolsSort_parametersAction->setText(QApplication::translate("RclMainBase", "&Sort parameters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolsSort_parametersAction->setToolTip(QApplication::translate("RclMainBase", "Sort parameters", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        toolsSpellAction->setText(QApplication::translate("RclMainBase", "Term &explorer", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        toolsSpellAction->setToolTip(QApplication::translate("RclMainBase", "Term explorer tool", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nextPageAction->setIconText(QApplication::translate("RclMainBase", "Next page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        nextPageAction->setToolTip(QApplication::translate("RclMainBase", "Next page of results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        nextPageAction->setShortcut(QApplication::translate("RclMainBase", "PgDown", 0, QApplication::UnicodeUTF8));
        firstPageAction->setIconText(QApplication::translate("RclMainBase", "First page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        firstPageAction->setToolTip(QApplication::translate("RclMainBase", "Go to first page of results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        firstPageAction->setShortcut(QApplication::translate("RclMainBase", "Shift+PgUp", 0, QApplication::UnicodeUTF8));
        prevPageAction->setIconText(QApplication::translate("RclMainBase", "Previous page", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        prevPageAction->setToolTip(QApplication::translate("RclMainBase", "Previous page of results", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        prevPageAction->setShortcut(QApplication::translate("RclMainBase", "PgUp", 0, QApplication::UnicodeUTF8));
        indexConfigAction->setText(QApplication::translate("RclMainBase", "&Index configuration", 0, QApplication::UnicodeUTF8));
        indexScheduleAction->setText(QApplication::translate("RclMainBase", "&Indexing schedule", 0, QApplication::UnicodeUTF8));
        queryPrefsAction->setText(QApplication::translate("RclMainBase", "&GUI configuration", 0, QApplication::UnicodeUTF8));
        extIdxAction->setText(QApplication::translate("RclMainBase", "E&xternal index dialog", 0, QApplication::UnicodeUTF8));
        extIdxAction->setIconText(QApplication::translate("RclMainBase", "External index dialog", 0, QApplication::UnicodeUTF8));
        toggleFullScreenAction->setText(QApplication::translate("RclMainBase", "&Full Screen", 0, QApplication::UnicodeUTF8));
        toggleFullScreenAction->setIconText(QApplication::translate("RclMainBase", "Full Screen", 0, QApplication::UnicodeUTF8));
        toggleFullScreenAction->setShortcut(QApplication::translate("RclMainBase", "F11", 0, QApplication::UnicodeUTF8));
        actionSortByDateAsc->setText(QApplication::translate("RclMainBase", "Sort by date, oldest first", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSortByDateAsc->setToolTip(QApplication::translate("RclMainBase", "Sort by dates from oldest to newest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSortByDateDesc->setText(QApplication::translate("RclMainBase", "Sort by date, newest first", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSortByDateDesc->setToolTip(QApplication::translate("RclMainBase", "Sort by dates from newest to oldest", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionShowQueryDetails->setText(QApplication::translate("RclMainBase", "Show Query Details", 0, QApplication::UnicodeUTF8));
        actionShowResultsAsTable->setText(QApplication::translate("RclMainBase", "Show as table", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionShowResultsAsTable->setToolTip(QApplication::translate("RclMainBase", "Show results in a spreadsheet-like table", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSaveResultsAsCSV->setText(QApplication::translate("RclMainBase", "Save as CSV (spreadsheet) file", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSaveResultsAsCSV->setToolTip(QApplication::translate("RclMainBase", "Saves the result into a file which you can load in a spreadsheet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionNext_Page->setText(QApplication::translate("RclMainBase", "Next Page", 0, QApplication::UnicodeUTF8));
        actionPrevious_Page->setText(QApplication::translate("RclMainBase", "Previous Page", 0, QApplication::UnicodeUTF8));
        actionFirst_Page->setText(QApplication::translate("RclMainBase", "First Page", 0, QApplication::UnicodeUTF8));
        allRDB->setText(QApplication::translate("RclMainBase", "All", 0, QApplication::UnicodeUTF8));
        Toolbar->setWindowTitle(QApplication::translate("RclMainBase", "Search tools", 0, QApplication::UnicodeUTF8));
        Toolbar1->setWindowTitle(QApplication::translate("RclMainBase", "Result list", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("RclMainBase", "&File", 0, QApplication::UnicodeUTF8));
        toolsMenu->setTitle(QApplication::translate("RclMainBase", "&Tools", 0, QApplication::UnicodeUTF8));
        preferencesMenu->setTitle(QApplication::translate("RclMainBase", "&Preferences", 0, QApplication::UnicodeUTF8));
        helpMenu->setTitle(QApplication::translate("RclMainBase", "&Help", 0, QApplication::UnicodeUTF8));
        menuResults->setTitle(QApplication::translate("RclMainBase", "&Results", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RclMainBase: public Ui_RclMainBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCLMAIN_H
