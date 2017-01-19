/********************************************************************************
** Form generated from reading UI file 'ssearchb.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SSEARCHB_H
#define UI_SSEARCHB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SSearchBase
{
public:
    QHBoxLayout *hboxLayout;
    QHBoxLayout *hboxLayout1;
    QPushButton *clearqPB;
    QPushButton *searchPB;
    QComboBox *searchTypCMB;
    QComboBox *queryText;

    void setupUi(QWidget *SSearchBase)
    {
        if (SSearchBase->objectName().isEmpty())
            SSearchBase->setObjectName(QString::fromUtf8("SSearchBase"));
        SSearchBase->resize(593, 48);
        hboxLayout = new QHBoxLayout(SSearchBase);
        hboxLayout->setSpacing(2);
        hboxLayout->setContentsMargins(4, 4, 4, 4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        clearqPB = new QPushButton(SSearchBase);
        clearqPB->setObjectName(QString::fromUtf8("clearqPB"));
        clearqPB->setEnabled(false);

        hboxLayout1->addWidget(clearqPB);

        searchPB = new QPushButton(SSearchBase);
        searchPB->setObjectName(QString::fromUtf8("searchPB"));
        searchPB->setEnabled(false);

        hboxLayout1->addWidget(searchPB);

        searchTypCMB = new QComboBox(SSearchBase);
        searchTypCMB->setObjectName(QString::fromUtf8("searchTypCMB"));
        searchTypCMB->setFocusPolicy(Qt::TabFocus);

        hboxLayout1->addWidget(searchTypCMB);

        queryText = new QComboBox(SSearchBase);
        queryText->setObjectName(QString::fromUtf8("queryText"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(8);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(queryText->sizePolicy().hasHeightForWidth());
        queryText->setSizePolicy(sizePolicy);
        queryText->setMinimumSize(QSize(155, 0));
        queryText->setEditable(true);
        queryText->setMaxCount(200);
        queryText->setInsertPolicy(QComboBox::NoInsert);
        queryText->setDuplicatesEnabled(false);

        hboxLayout1->addWidget(queryText);


        hboxLayout->addLayout(hboxLayout1);


        retranslateUi(SSearchBase);

        QMetaObject::connectSlotsByName(SSearchBase);
    } // setupUi

    void retranslateUi(QWidget *SSearchBase)
    {
        SSearchBase->setWindowTitle(QApplication::translate("SSearchBase", "SSearchBase", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        clearqPB->setToolTip(QApplication::translate("SSearchBase", "Erase search entry", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        clearqPB->setText(QApplication::translate("SSearchBase", "Clear", 0, QApplication::UnicodeUTF8));
        clearqPB->setShortcut(QApplication::translate("SSearchBase", "Ctrl+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchPB->setToolTip(QApplication::translate("SSearchBase", "Start query", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchPB->setText(QApplication::translate("SSearchBase", "Search", 0, QApplication::UnicodeUTF8));
        searchPB->setShortcut(QString());
#ifndef QT_NO_TOOLTIP
        searchTypCMB->setToolTip(QApplication::translate("SSearchBase", "Choose search type.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        queryText->setToolTip(QApplication::translate("SSearchBase", "Enter search terms here. Type ESC SPC for completions of current term.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class SSearchBase: public Ui_SSearchBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SSEARCHB_H
