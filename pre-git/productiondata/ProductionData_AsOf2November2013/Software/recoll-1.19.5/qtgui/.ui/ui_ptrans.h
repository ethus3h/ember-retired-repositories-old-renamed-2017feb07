/********************************************************************************
** Form generated from reading UI file 'ptrans.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PTRANS_H
#define UI_PTRANS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditTransBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *whatIdxLA;
    QTableWidget *transTW;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addPB;
    QPushButton *delPB;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelPB;
    QPushButton *savePB;

    void setupUi(QDialog *EditTransBase)
    {
        if (EditTransBase->objectName().isEmpty())
            EditTransBase->setObjectName(QString::fromUtf8("EditTransBase"));
        EditTransBase->resize(649, 362);
        verticalLayout_2 = new QVBoxLayout(EditTransBase);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        whatIdxLA = new QLabel(EditTransBase);
        whatIdxLA->setObjectName(QString::fromUtf8("whatIdxLA"));
        whatIdxLA->setWordWrap(false);

        verticalLayout->addWidget(whatIdxLA);

        transTW = new QTableWidget(EditTransBase);
        if (transTW->columnCount() < 2)
            transTW->setColumnCount(2);
        transTW->setObjectName(QString::fromUtf8("transTW"));
        transTW->setFrameShape(QFrame::StyledPanel);
        transTW->setFrameShadow(QFrame::Sunken);
        transTW->setEditTriggers(QAbstractItemView::NoEditTriggers);
        transTW->setSelectionMode(QAbstractItemView::ExtendedSelection);
        transTW->setSelectionBehavior(QAbstractItemView::SelectRows);
        transTW->setShowGrid(true);
        transTW->setSortingEnabled(true);
        transTW->setColumnCount(2);
        transTW->setProperty("allColumnsShowFocus", QVariant(true));
        transTW->setProperty("showSortIndicator", QVariant(false));
        transTW->horizontalHeader()->setDefaultSectionSize(300);
        transTW->horizontalHeader()->setMinimumSectionSize(20);
        transTW->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        transTW->horizontalHeader()->setStretchLastSection(true);
        transTW->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(transTW);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addPB = new QPushButton(EditTransBase);
        addPB->setObjectName(QString::fromUtf8("addPB"));

        horizontalLayout_2->addWidget(addPB);

        delPB = new QPushButton(EditTransBase);
        delPB->setObjectName(QString::fromUtf8("delPB"));
        delPB->setEnabled(false);

        horizontalLayout_2->addWidget(delPB);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelPB = new QPushButton(EditTransBase);
        cancelPB->setObjectName(QString::fromUtf8("cancelPB"));

        horizontalLayout->addWidget(cancelPB);

        savePB = new QPushButton(EditTransBase);
        savePB->setObjectName(QString::fromUtf8("savePB"));

        horizontalLayout->addWidget(savePB);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(EditTransBase);

        QMetaObject::connectSlotsByName(EditTransBase);
    } // setupUi

    void retranslateUi(QDialog *EditTransBase)
    {
        EditTransBase->setWindowTitle(QApplication::translate("EditTransBase", "Path Translations", 0, QApplication::UnicodeUTF8));
        whatIdxLA->setText(QApplication::translate("EditTransBase", "Setting path translations for ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        transTW->setToolTip(QApplication::translate("EditTransBase", "Select one or several file types, then use the controls in the frame below to change how they are processed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addPB->setText(QApplication::translate("EditTransBase", "Add", 0, QApplication::UnicodeUTF8));
        delPB->setText(QApplication::translate("EditTransBase", "Delete", 0, QApplication::UnicodeUTF8));
        cancelPB->setText(QApplication::translate("EditTransBase", "Cancel", 0, QApplication::UnicodeUTF8));
        savePB->setText(QApplication::translate("EditTransBase", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditTransBase: public Ui_EditTransBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PTRANS_H
