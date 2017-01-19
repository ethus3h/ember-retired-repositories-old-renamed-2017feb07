/*
JACK Audio Connection Kit - Qt GUI Interface.

   Copyright (C) 2003-2010, rncbc aka Rui Nuno Capela. All rights reserved.

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
** Form generated from reading UI file 'qjackctlAboutForm.ui'
**
** Created: Sat Aug 31 19:55:37 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QJACKCTLABOUTFORM_H
#define UI_QJACKCTLABOUTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_qjackctlAboutForm
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QPushButton *ClosePushButton;
    QToolButton *AboutQtButton;
    QSpacerItem *spacerItem1;
    QTextBrowser *AboutTextView;
    QLabel *IconPixmapLabel;

    void setupUi(QDialog *qjackctlAboutForm)
    {
        if (qjackctlAboutForm->objectName().isEmpty())
            qjackctlAboutForm->setObjectName(QString::fromUtf8("qjackctlAboutForm"));
        qjackctlAboutForm->resize(520, 280);
        QFont font;
        qjackctlAboutForm->setFont(font);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/about1.png"));
        qjackctlAboutForm->setWindowIcon(icon);
        qjackctlAboutForm->setSizeGripEnabled(true);
        gridLayout = new QGridLayout(qjackctlAboutForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(8, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 2, 1, 1);

        ClosePushButton = new QPushButton(qjackctlAboutForm);
        ClosePushButton->setObjectName(QString::fromUtf8("ClosePushButton"));

        gridLayout->addWidget(ClosePushButton, 2, 1, 1, 1);

        AboutQtButton = new QToolButton(qjackctlAboutForm);
        AboutQtButton->setObjectName(QString::fromUtf8("AboutQtButton"));
        AboutQtButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/qtlogo.png"));
        AboutQtButton->setIcon(icon1);

        gridLayout->addWidget(AboutQtButton, 2, 0, 1, 1);

        spacerItem1 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 1, 0, 1, 1);

        AboutTextView = new QTextBrowser(qjackctlAboutForm);
        AboutTextView->setObjectName(QString::fromUtf8("AboutTextView"));
        AboutTextView->setLineWidth(1);
        AboutTextView->setUndoRedoEnabled(false);
        AboutTextView->setReadOnly(true);
        AboutTextView->setOpenExternalLinks(true);

        gridLayout->addWidget(AboutTextView, 0, 1, 2, 2);

        IconPixmapLabel = new QLabel(qjackctlAboutForm);
        IconPixmapLabel->setObjectName(QString::fromUtf8("IconPixmapLabel"));
        IconPixmapLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/qjackctl.png")));
        IconPixmapLabel->setAlignment(Qt::AlignCenter);
        IconPixmapLabel->setWordWrap(false);
        IconPixmapLabel->setMargin(2);

        gridLayout->addWidget(IconPixmapLabel, 0, 0, 1, 1);

        QWidget::setTabOrder(AboutTextView, AboutQtButton);
        QWidget::setTabOrder(AboutQtButton, ClosePushButton);

        retranslateUi(qjackctlAboutForm);

        QMetaObject::connectSlotsByName(qjackctlAboutForm);
    } // setupUi

    void retranslateUi(QDialog *qjackctlAboutForm)
    {
        qjackctlAboutForm->setWindowTitle(QApplication::translate("qjackctlAboutForm", "About QjackCtl", 0, QApplication::UnicodeUTF8));
        ClosePushButton->setText(QApplication::translate("qjackctlAboutForm", "&Close", 0, QApplication::UnicodeUTF8));
        ClosePushButton->setShortcut(QApplication::translate("qjackctlAboutForm", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AboutQtButton->setToolTip(QApplication::translate("qjackctlAboutForm", "About Qt", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AboutQtButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class qjackctlAboutForm: public Ui_qjackctlAboutForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QJACKCTLABOUTFORM_H
