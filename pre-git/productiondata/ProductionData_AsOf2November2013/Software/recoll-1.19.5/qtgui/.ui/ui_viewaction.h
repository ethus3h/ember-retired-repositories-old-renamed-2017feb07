/********************************************************************************
** Form generated from reading UI file 'viewaction.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWACTION_H
#define UI_VIEWACTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ViewActionBase
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *textLabel1;
    QCheckBox *useDesktopCB;
    QTableWidget *actionsLV;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLabel *currentLBL;
    QPushButton *selSamePB;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_new;
    QCheckBox *setExceptCB;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *newActionLE;
    QPushButton *chgActPB;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *closePB;

    void setupUi(QDialog *ViewActionBase)
    {
        if (ViewActionBase->objectName().isEmpty())
            ViewActionBase->setObjectName(QString::fromUtf8("ViewActionBase"));
        ViewActionBase->resize(635, 726);
        verticalLayout_3 = new QVBoxLayout(ViewActionBase);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        textLabel1 = new QLabel(ViewActionBase);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        verticalLayout_3->addWidget(textLabel1);

        useDesktopCB = new QCheckBox(ViewActionBase);
        useDesktopCB->setObjectName(QString::fromUtf8("useDesktopCB"));

        verticalLayout_3->addWidget(useDesktopCB);

        actionsLV = new QTableWidget(ViewActionBase);
        if (actionsLV->columnCount() < 2)
            actionsLV->setColumnCount(2);
        actionsLV->setObjectName(QString::fromUtf8("actionsLV"));
        actionsLV->setFrameShape(QFrame::StyledPanel);
        actionsLV->setFrameShadow(QFrame::Sunken);
        actionsLV->setEditTriggers(QAbstractItemView::NoEditTriggers);
        actionsLV->setSelectionMode(QAbstractItemView::ExtendedSelection);
        actionsLV->setSelectionBehavior(QAbstractItemView::SelectRows);
        actionsLV->setShowGrid(true);
        actionsLV->setSortingEnabled(true);
        actionsLV->setColumnCount(2);
        actionsLV->setProperty("allColumnsShowFocus", QVariant(true));
        actionsLV->setProperty("showSortIndicator", QVariant(true));
        actionsLV->horizontalHeader()->setDefaultSectionSize(150);
        actionsLV->horizontalHeader()->setProperty("showSortIndicator", QVariant(true));
        actionsLV->horizontalHeader()->setStretchLastSection(true);
        actionsLV->verticalHeader()->setVisible(false);

        verticalLayout_3->addWidget(actionsLV);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ViewActionBase);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        currentLBL = new QLabel(ViewActionBase);
        currentLBL->setObjectName(QString::fromUtf8("currentLBL"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(currentLBL->sizePolicy().hasHeightForWidth());
        currentLBL->setSizePolicy(sizePolicy);
        currentLBL->setFrameShape(QFrame::Box);
        currentLBL->setFrameShadow(QFrame::Raised);
        currentLBL->setTextFormat(Qt::PlainText);
        currentLBL->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_3->addWidget(currentLBL);

        selSamePB = new QPushButton(ViewActionBase);
        selSamePB->setObjectName(QString::fromUtf8("selSamePB"));

        horizontalLayout_3->addWidget(selSamePB);


        verticalLayout_3->addLayout(horizontalLayout_3);

        frame = new QFrame(ViewActionBase);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Plain);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_new = new QLabel(frame);
        label_new->setObjectName(QString::fromUtf8("label_new"));

        verticalLayout->addWidget(label_new);

        setExceptCB = new QCheckBox(frame);
        setExceptCB->setObjectName(QString::fromUtf8("setExceptCB"));

        verticalLayout->addWidget(setExceptCB);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        newActionLE = new QLineEdit(frame);
        newActionLE->setObjectName(QString::fromUtf8("newActionLE"));

        horizontalLayout_2->addWidget(newActionLE);


        verticalLayout->addLayout(horizontalLayout_2);

        chgActPB = new QPushButton(frame);
        chgActPB->setObjectName(QString::fromUtf8("chgActPB"));

        verticalLayout->addWidget(chgActPB);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        closePB = new QPushButton(ViewActionBase);
        closePB->setObjectName(QString::fromUtf8("closePB"));

        horizontalLayout->addWidget(closePB);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ViewActionBase);

        QMetaObject::connectSlotsByName(ViewActionBase);
    } // setupUi

    void retranslateUi(QDialog *ViewActionBase)
    {
        ViewActionBase->setWindowTitle(QApplication::translate("ViewActionBase", "Native Viewers", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("ViewActionBase", "Select one or several mime types then use the controls in the bottom frame to change how they are processed.", 0, QApplication::UnicodeUTF8));
        useDesktopCB->setText(QApplication::translate("ViewActionBase", "Use Desktop preferences by default", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionsLV->setToolTip(QApplication::translate("ViewActionBase", "Select one or several file types, then use the controls in the frame below to change how they are processed", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("ViewActionBase", "Recoll action:", 0, QApplication::UnicodeUTF8));
        currentLBL->setText(QApplication::translate("ViewActionBase", "current value", 0, QApplication::UnicodeUTF8));
        selSamePB->setText(QApplication::translate("ViewActionBase", "Select same", 0, QApplication::UnicodeUTF8));
        label_new->setText(QApplication::translate("ViewActionBase", "<b>New Values:</b>", 0, QApplication::UnicodeUTF8));
        setExceptCB->setText(QApplication::translate("ViewActionBase", "Exception to Desktop preferences", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ViewActionBase", "Action (empty -> recoll default)", 0, QApplication::UnicodeUTF8));
        chgActPB->setText(QApplication::translate("ViewActionBase", "Apply to current selection", 0, QApplication::UnicodeUTF8));
        closePB->setText(QApplication::translate("ViewActionBase", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ViewActionBase: public Ui_ViewActionBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWACTION_H
