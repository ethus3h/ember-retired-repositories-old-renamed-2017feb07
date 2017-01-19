/********************************************************************************
** Form generated from reading UI file 'restable.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESTABLE_H
#define UI_RESTABLE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QSplitter>
#include <QtGui/QTableView>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResTable
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QTableView *tableView;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ResTable)
    {
        if (ResTable->objectName().isEmpty())
            ResTable->setObjectName(QString::fromUtf8("ResTable"));
        ResTable->resize(640, 480);
        verticalLayout = new QVBoxLayout(ResTable);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(ResTable);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        tableView = new QTableView(splitter);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(2);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(false);
        tableView->setShowGrid(true);
        tableView->setSortingEnabled(true);
        tableView->setWordWrap(false);
        tableView->setCornerButtonEnabled(false);
        splitter->addWidget(tableView);
        tableView->verticalHeader()->setVisible(false);
        textBrowser = new QTextBrowser(splitter);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy1);
        splitter->addWidget(textBrowser);

        verticalLayout->addWidget(splitter);


        retranslateUi(ResTable);

        QMetaObject::connectSlotsByName(ResTable);
    } // setupUi

    void retranslateUi(QWidget *ResTable)
    {
        Q_UNUSED(ResTable);
    } // retranslateUi

};

namespace Ui {
    class ResTable: public Ui_ResTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESTABLE_H
