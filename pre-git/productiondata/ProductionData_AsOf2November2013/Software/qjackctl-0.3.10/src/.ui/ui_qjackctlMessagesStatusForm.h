/*
JACK Audio Connection Kit - Qt GUI Interface.

   Copyright (C) 2003-2012, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.


*/

/********************************************************************************
** Form generated from reading UI file 'qjackctlMessagesStatusForm.ui'
**
** Created: Sat Aug 31 19:55:37 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QJACKCTLMESSAGESSTATUSFORM_H
#define UI_QJACKCTLMESSAGESSTATUSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qjackctlMessagesStatusForm
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *MessagesStatusTabWidget;
    QWidget *MessagesTab;
    QGridLayout *gridLayout;
    QTextEdit *MessagesTextView;
    QWidget *StatusTab;
    QGridLayout *gridLayout1;
    QTreeWidget *StatsListView;
    QPushButton *ResetPushButton;
    QSpacerItem *spacerItem;
    QPushButton *RefreshPushButton;

    void setupUi(QWidget *qjackctlMessagesStatusForm)
    {
        if (qjackctlMessagesStatusForm->objectName().isEmpty())
            qjackctlMessagesStatusForm->setObjectName(QString::fromUtf8("qjackctlMessagesStatusForm"));
        qjackctlMessagesStatusForm->resize(480, 320);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qjackctlMessagesStatusForm->sizePolicy().hasHeightForWidth());
        qjackctlMessagesStatusForm->setSizePolicy(sizePolicy);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/messagesstatus1.png"));
        qjackctlMessagesStatusForm->setWindowIcon(icon);
        vboxLayout = new QVBoxLayout(qjackctlMessagesStatusForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(4, 4, 4, 4);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        MessagesStatusTabWidget = new QTabWidget(qjackctlMessagesStatusForm);
        MessagesStatusTabWidget->setObjectName(QString::fromUtf8("MessagesStatusTabWidget"));
        MessagesTab = new QWidget();
        MessagesTab->setObjectName(QString::fromUtf8("MessagesTab"));
        gridLayout = new QGridLayout(MessagesTab);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        MessagesTextView = new QTextEdit(MessagesTab);
        MessagesTextView->setObjectName(QString::fromUtf8("MessagesTextView"));
        MessagesTextView->setMinimumSize(QSize(320, 80));
        MessagesTextView->setUndoRedoEnabled(false);
        MessagesTextView->setLineWrapMode(QTextEdit::NoWrap);
        MessagesTextView->setReadOnly(true);

        gridLayout->addWidget(MessagesTextView, 0, 0, 1, 1);

        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/messages1.png"));
        MessagesStatusTabWidget->addTab(MessagesTab, icon1, QString());
        StatusTab = new QWidget();
        StatusTab->setObjectName(QString::fromUtf8("StatusTab"));
        gridLayout1 = new QGridLayout(StatusTab);
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(4, 4, 4, 4);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        StatsListView = new QTreeWidget(StatusTab);
        StatsListView->setObjectName(QString::fromUtf8("StatsListView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(StatsListView->sizePolicy().hasHeightForWidth());
        StatsListView->setSizePolicy(sizePolicy1);
        StatsListView->setMinimumSize(QSize(240, 0));
        StatsListView->setAlternatingRowColors(true);
        StatsListView->setSelectionMode(QAbstractItemView::NoSelection);
        StatsListView->setRootIsDecorated(true);
        StatsListView->setUniformRowHeights(true);
        StatsListView->setSortingEnabled(false);
        StatsListView->setAllColumnsShowFocus(true);

        gridLayout1->addWidget(StatsListView, 0, 0, 1, 3);

        ResetPushButton = new QPushButton(StatusTab);
        ResetPushButton->setObjectName(QString::fromUtf8("ResetPushButton"));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/reset1.png"));
        ResetPushButton->setIcon(icon2);

        gridLayout1->addWidget(ResetPushButton, 1, 0, 1, 1);

        spacerItem = new QSpacerItem(313, 16, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout1->addItem(spacerItem, 1, 1, 1, 1);

        RefreshPushButton = new QPushButton(StatusTab);
        RefreshPushButton->setObjectName(QString::fromUtf8("RefreshPushButton"));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/refresh1.png"));
        RefreshPushButton->setIcon(icon3);

        gridLayout1->addWidget(RefreshPushButton, 1, 2, 1, 1);

        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/status1.png"));
        MessagesStatusTabWidget->addTab(StatusTab, icon4, QString());

        vboxLayout->addWidget(MessagesStatusTabWidget);

        QWidget::setTabOrder(MessagesTextView, StatsListView);
        QWidget::setTabOrder(StatsListView, ResetPushButton);
        QWidget::setTabOrder(ResetPushButton, RefreshPushButton);

        retranslateUi(qjackctlMessagesStatusForm);

        MessagesStatusTabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qjackctlMessagesStatusForm);
    } // setupUi

    void retranslateUi(QWidget *qjackctlMessagesStatusForm)
    {
        qjackctlMessagesStatusForm->setWindowTitle(QApplication::translate("qjackctlMessagesStatusForm", "Messages / Status - JACK Audio Connection Kit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MessagesTextView->setToolTip(QApplication::translate("qjackctlMessagesStatusForm", "Messages output log", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MessagesStatusTabWidget->setTabText(MessagesStatusTabWidget->indexOf(MessagesTab), QApplication::translate("qjackctlMessagesStatusForm", "&Messages", 0, QApplication::UnicodeUTF8));
        MessagesStatusTabWidget->setTabToolTip(MessagesStatusTabWidget->indexOf(MessagesTab), QApplication::translate("qjackctlMessagesStatusForm", "Messages log", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = StatsListView->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("qjackctlMessagesStatusForm", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("qjackctlMessagesStatusForm", "Description", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StatsListView->setToolTip(QApplication::translate("qjackctlMessagesStatusForm", "Statistics since last server startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ResetPushButton->setToolTip(QApplication::translate("qjackctlMessagesStatusForm", "Reset XRUN statistic values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ResetPushButton->setText(QApplication::translate("qjackctlMessagesStatusForm", "Re&set", 0, QApplication::UnicodeUTF8));
        ResetPushButton->setShortcut(QApplication::translate("qjackctlMessagesStatusForm", "Alt+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RefreshPushButton->setToolTip(QApplication::translate("qjackctlMessagesStatusForm", "Refresh XRUN statistic values", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RefreshPushButton->setText(QApplication::translate("qjackctlMessagesStatusForm", "&Refresh", 0, QApplication::UnicodeUTF8));
        RefreshPushButton->setShortcut(QApplication::translate("qjackctlMessagesStatusForm", "Alt+R", 0, QApplication::UnicodeUTF8));
        MessagesStatusTabWidget->setTabText(MessagesStatusTabWidget->indexOf(StatusTab), QApplication::translate("qjackctlMessagesStatusForm", "&Status", 0, QApplication::UnicodeUTF8));
        MessagesStatusTabWidget->setTabToolTip(MessagesStatusTabWidget->indexOf(StatusTab), QApplication::translate("qjackctlMessagesStatusForm", "Status information", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qjackctlMessagesStatusForm: public Ui_qjackctlMessagesStatusForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QJACKCTLMESSAGESSTATUSFORM_H
