/********************************************************************************
** Form generated from reading UI file 'advsearch.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADVSEARCH_H
#define UI_ADVSEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDateEdit>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdvSearchBase
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *hboxLayout;
    QVBoxLayout *vboxLayout;
    QLabel *textLabel2;
    QComboBox *conjunctCMB;
    QSpacerItem *spacer2;
    QPushButton *delClausePB;
    QPushButton *addClausePB;
    QFrame *clauseFRM;
    QVBoxLayout *vboxLayout1;
    QFrame *clauseline;
    QWidget *tab_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *filterDatesCB;
    QLabel *label;
    QDateEdit *minDateDTE;
    QLabel *label_2;
    QDateEdit *maxDateDTE;
    QFrame *line2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *filterSizesCB;
    QLabel *labelminsize;
    QLineEdit *minSizeLE;
    QLabel *labelmaxsize;
    QLineEdit *maxSizeLE;
    QFrame *line4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *hboxLayout1;
    QCheckBox *restrictFtCB;
    QCheckBox *restrictCtCB;
    QPushButton *saveFileTypesPB;
    QHBoxLayout *hboxLayout2;
    QVBoxLayout *vboxLayout2;
    QLabel *textLabel2_2;
    QListWidget *yesFiltypsLB;
    QVBoxLayout *vboxLayout3;
    QPushButton *delAFiltypPB;
    QPushButton *delFiltypPB;
    QPushButton *addFiltypPB;
    QPushButton *addAFiltypPB;
    QVBoxLayout *vboxLayout4;
    QLabel *textLabel3;
    QListWidget *noFiltypsLB;
    QFrame *line5;
    QGridLayout *gridLayout;
    QComboBox *subtreeCMB;
    QPushButton *browsePB;
    QLabel *textLabel1;
    QCheckBox *direxclCB;
    QHBoxLayout *hboxLayout3;
    QPushButton *searchPB;
    QPushButton *dismissPB;

    void setupUi(QDialog *AdvSearchBase)
    {
        if (AdvSearchBase->objectName().isEmpty())
            AdvSearchBase->setObjectName(QString::fromUtf8("AdvSearchBase"));
        AdvSearchBase->resize(544, 441);
        AdvSearchBase->setSizeGripEnabled(true);
        verticalLayout = new QVBoxLayout(AdvSearchBase);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(AdvSearchBase);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_2 = new QVBoxLayout(tab_5);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(2);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        textLabel2 = new QLabel(tab_5);
        textLabel2->setObjectName(QString::fromUtf8("textLabel2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textLabel2->sizePolicy().hasHeightForWidth());
        textLabel2->setSizePolicy(sizePolicy);
        textLabel2->setFrameShape(QFrame::NoFrame);
        textLabel2->setFrameShadow(QFrame::Plain);
        textLabel2->setWordWrap(false);
        textLabel2->setMargin(4);

        vboxLayout->addWidget(textLabel2);

        conjunctCMB = new QComboBox(tab_5);
        conjunctCMB->setObjectName(QString::fromUtf8("conjunctCMB"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(8);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(conjunctCMB->sizePolicy().hasHeightForWidth());
        conjunctCMB->setSizePolicy(sizePolicy1);

        vboxLayout->addWidget(conjunctCMB);

        spacer2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacer2);

        delClausePB = new QPushButton(tab_5);
        delClausePB->setObjectName(QString::fromUtf8("delClausePB"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(delClausePB->sizePolicy().hasHeightForWidth());
        delClausePB->setSizePolicy(sizePolicy2);
        delClausePB->setAutoDefault(false);

        vboxLayout->addWidget(delClausePB);

        addClausePB = new QPushButton(tab_5);
        addClausePB->setObjectName(QString::fromUtf8("addClausePB"));
        sizePolicy2.setHeightForWidth(addClausePB->sizePolicy().hasHeightForWidth());
        addClausePB->setSizePolicy(sizePolicy2);
        addClausePB->setAutoDefault(false);

        vboxLayout->addWidget(addClausePB);


        hboxLayout->addLayout(vboxLayout);

        clauseFRM = new QFrame(tab_5);
        clauseFRM->setObjectName(QString::fromUtf8("clauseFRM"));
        clauseFRM->setFrameShape(QFrame::StyledPanel);
        clauseFRM->setFrameShadow(QFrame::Plain);
        vboxLayout1 = new QVBoxLayout(clauseFRM);
        vboxLayout1->setSpacing(1);
        vboxLayout1->setContentsMargins(0, 0, 0, 0);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        clauseline = new QFrame(clauseFRM);
        clauseline->setObjectName(QString::fromUtf8("clauseline"));
        clauseline->setFrameShape(QFrame::HLine);
        clauseline->setFrameShadow(QFrame::Plain);

        vboxLayout1->addWidget(clauseline);


        hboxLayout->addWidget(clauseFRM);


        verticalLayout_2->addLayout(hboxLayout);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        verticalLayout_5 = new QVBoxLayout(tab_6);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        filterDatesCB = new QCheckBox(tab_6);
        filterDatesCB->setObjectName(QString::fromUtf8("filterDatesCB"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(filterDatesCB->sizePolicy().hasHeightForWidth());
        filterDatesCB->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(filterDatesCB);

        label = new QLabel(tab_6);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        minDateDTE = new QDateEdit(tab_6);
        minDateDTE->setObjectName(QString::fromUtf8("minDateDTE"));
        minDateDTE->setEnabled(false);

        horizontalLayout_2->addWidget(minDateDTE);

        label_2 = new QLabel(tab_6);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        maxDateDTE = new QDateEdit(tab_6);
        maxDateDTE->setObjectName(QString::fromUtf8("maxDateDTE"));
        maxDateDTE->setEnabled(false);

        horizontalLayout_2->addWidget(maxDateDTE);


        verticalLayout_4->addLayout(horizontalLayout_2);

        line2 = new QFrame(tab_6);
        line2->setObjectName(QString::fromUtf8("line2"));
        line2->setFrameShape(QFrame::HLine);
        line2->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        filterSizesCB = new QCheckBox(tab_6);
        filterSizesCB->setObjectName(QString::fromUtf8("filterSizesCB"));
        sizePolicy3.setHeightForWidth(filterSizesCB->sizePolicy().hasHeightForWidth());
        filterSizesCB->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(filterSizesCB);

        labelminsize = new QLabel(tab_6);
        labelminsize->setObjectName(QString::fromUtf8("labelminsize"));

        horizontalLayout->addWidget(labelminsize);

        minSizeLE = new QLineEdit(tab_6);
        minSizeLE->setObjectName(QString::fromUtf8("minSizeLE"));
        minSizeLE->setEnabled(false);

        horizontalLayout->addWidget(minSizeLE);

        labelmaxsize = new QLabel(tab_6);
        labelmaxsize->setObjectName(QString::fromUtf8("labelmaxsize"));

        horizontalLayout->addWidget(labelmaxsize);

        maxSizeLE = new QLineEdit(tab_6);
        maxSizeLE->setObjectName(QString::fromUtf8("maxSizeLE"));
        maxSizeLE->setEnabled(false);

        horizontalLayout->addWidget(maxSizeLE);


        verticalLayout_4->addLayout(horizontalLayout);

        line4 = new QFrame(tab_6);
        line4->setObjectName(QString::fromUtf8("line4"));
        line4->setFrameShape(QFrame::HLine);
        line4->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(6);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        restrictFtCB = new QCheckBox(tab_6);
        restrictFtCB->setObjectName(QString::fromUtf8("restrictFtCB"));
        sizePolicy3.setHeightForWidth(restrictFtCB->sizePolicy().hasHeightForWidth());
        restrictFtCB->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(restrictFtCB);

        restrictCtCB = new QCheckBox(tab_6);
        restrictCtCB->setObjectName(QString::fromUtf8("restrictCtCB"));
        restrictCtCB->setEnabled(false);
        sizePolicy3.setHeightForWidth(restrictCtCB->sizePolicy().hasHeightForWidth());
        restrictCtCB->setSizePolicy(sizePolicy3);

        hboxLayout1->addWidget(restrictCtCB);

        saveFileTypesPB = new QPushButton(tab_6);
        saveFileTypesPB->setObjectName(QString::fromUtf8("saveFileTypesPB"));
        saveFileTypesPB->setEnabled(false);
        saveFileTypesPB->setAutoDefault(false);

        hboxLayout1->addWidget(saveFileTypesPB);


        verticalLayout_3->addLayout(hboxLayout1);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(6);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        textLabel2_2 = new QLabel(tab_6);
        textLabel2_2->setObjectName(QString::fromUtf8("textLabel2_2"));
        textLabel2_2->setWordWrap(false);

        vboxLayout2->addWidget(textLabel2_2);

        yesFiltypsLB = new QListWidget(tab_6);
        yesFiltypsLB->setObjectName(QString::fromUtf8("yesFiltypsLB"));
        yesFiltypsLB->setEnabled(false);
        yesFiltypsLB->setMinimumSize(QSize(200, 20));
        yesFiltypsLB->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout2->addWidget(yesFiltypsLB);


        hboxLayout2->addLayout(vboxLayout2);

        vboxLayout3 = new QVBoxLayout();
        vboxLayout3->setSpacing(0);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        delAFiltypPB = new QPushButton(tab_6);
        delAFiltypPB->setObjectName(QString::fromUtf8("delAFiltypPB"));
        delAFiltypPB->setEnabled(false);
        delAFiltypPB->setAutoDefault(false);

        vboxLayout3->addWidget(delAFiltypPB);

        delFiltypPB = new QPushButton(tab_6);
        delFiltypPB->setObjectName(QString::fromUtf8("delFiltypPB"));
        delFiltypPB->setEnabled(false);
        delFiltypPB->setAutoDefault(false);

        vboxLayout3->addWidget(delFiltypPB);

        addFiltypPB = new QPushButton(tab_6);
        addFiltypPB->setObjectName(QString::fromUtf8("addFiltypPB"));
        addFiltypPB->setEnabled(false);
        addFiltypPB->setAutoDefault(false);

        vboxLayout3->addWidget(addFiltypPB);

        addAFiltypPB = new QPushButton(tab_6);
        addAFiltypPB->setObjectName(QString::fromUtf8("addAFiltypPB"));
        addAFiltypPB->setEnabled(false);
        addAFiltypPB->setAutoDefault(false);

        vboxLayout3->addWidget(addAFiltypPB);


        hboxLayout2->addLayout(vboxLayout3);

        vboxLayout4 = new QVBoxLayout();
        vboxLayout4->setSpacing(0);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        textLabel3 = new QLabel(tab_6);
        textLabel3->setObjectName(QString::fromUtf8("textLabel3"));
        textLabel3->setWordWrap(false);

        vboxLayout4->addWidget(textLabel3);

        noFiltypsLB = new QListWidget(tab_6);
        noFiltypsLB->setObjectName(QString::fromUtf8("noFiltypsLB"));
        noFiltypsLB->setEnabled(false);
        noFiltypsLB->setMinimumSize(QSize(200, 20));
        noFiltypsLB->setSelectionMode(QAbstractItemView::ExtendedSelection);

        vboxLayout4->addWidget(noFiltypsLB);


        hboxLayout2->addLayout(vboxLayout4);


        verticalLayout_3->addLayout(hboxLayout2);


        verticalLayout_4->addLayout(verticalLayout_3);

        line5 = new QFrame(tab_6);
        line5->setObjectName(QString::fromUtf8("line5"));
        line5->setFrameShape(QFrame::HLine);
        line5->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line5);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        subtreeCMB = new QComboBox(tab_6);
        subtreeCMB->setObjectName(QString::fromUtf8("subtreeCMB"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(8);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(subtreeCMB->sizePolicy().hasHeightForWidth());
        subtreeCMB->setSizePolicy(sizePolicy4);
        subtreeCMB->setMinimumSize(QSize(300, 0));
        subtreeCMB->setEditable(true);
        subtreeCMB->setMaxCount(20);
        subtreeCMB->setInsertPolicy(QComboBox::NoInsert);
        subtreeCMB->setDuplicatesEnabled(false);

        gridLayout->addWidget(subtreeCMB, 1, 0, 1, 1);

        browsePB = new QPushButton(tab_6);
        browsePB->setObjectName(QString::fromUtf8("browsePB"));
        browsePB->setAutoDefault(false);

        gridLayout->addWidget(browsePB, 1, 1, 1, 1);

        textLabel1 = new QLabel(tab_6);
        textLabel1->setObjectName(QString::fromUtf8("textLabel1"));
        textLabel1->setWordWrap(false);

        gridLayout->addWidget(textLabel1, 0, 0, 1, 1);

        direxclCB = new QCheckBox(tab_6);
        direxclCB->setObjectName(QString::fromUtf8("direxclCB"));

        gridLayout->addWidget(direxclCB, 0, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout);


        verticalLayout_5->addLayout(verticalLayout_4);

        tabWidget->addTab(tab_6, QString());

        verticalLayout->addWidget(tabWidget);

        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(6);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        searchPB = new QPushButton(AdvSearchBase);
        searchPB->setObjectName(QString::fromUtf8("searchPB"));

        hboxLayout3->addWidget(searchPB);

        dismissPB = new QPushButton(AdvSearchBase);
        dismissPB->setObjectName(QString::fromUtf8("dismissPB"));
        dismissPB->setAutoDefault(false);

        hboxLayout3->addWidget(dismissPB);


        verticalLayout->addLayout(hboxLayout3);


        retranslateUi(AdvSearchBase);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AdvSearchBase);
    } // setupUi

    void retranslateUi(QDialog *AdvSearchBase)
    {
        AdvSearchBase->setWindowTitle(QApplication::translate("AdvSearchBase", "Advanced search", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        textLabel2->setToolTip(QApplication::translate("AdvSearchBase", "All non empty fields on the right will be combined with AND (\"All clauses\" choice) or OR (\"Any clause\" choice) conjunctions. <br>\"Any\" \"All\" and \"None\" field types can accept a mix of simple words, and phrases enclosed in double quotes.<br>Fields with no data are ignored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        textLabel2->setText(QApplication::translate("AdvSearchBase", "Search for <br>documents<br>satisfying:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        conjunctCMB->setToolTip(QApplication::translate("AdvSearchBase", "All non empty fields on the right will be combined with AND (\"All clauses\" choice) or OR (\"Any clause\" choice) conjunctions. <br>\"Any\" \"All\" and \"None\" field types can accept a mix of simple words, and phrases enclosed in double quotes.<br>Fields with no data are ignored.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        delClausePB->setText(QApplication::translate("AdvSearchBase", "Delete clause", 0, QApplication::UnicodeUTF8));
        addClausePB->setText(QApplication::translate("AdvSearchBase", "Add clause", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("AdvSearchBase", "Find", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        filterDatesCB->setToolTip(QApplication::translate("AdvSearchBase", "Check this to enable filtering on dates", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filterDatesCB->setText(QApplication::translate("AdvSearchBase", "Filter dates", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AdvSearchBase", "From", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AdvSearchBase", "To", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        filterSizesCB->setToolTip(QApplication::translate("AdvSearchBase", "Check this to enable filtering on sizes", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        filterSizesCB->setText(QApplication::translate("AdvSearchBase", "Filter sizes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelminsize->setToolTip(QApplication::translate("AdvSearchBase", "Minimum size. You can use k/K,m/M,g/G as multipliers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelminsize->setText(QApplication::translate("AdvSearchBase", "Min. Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelmaxsize->setToolTip(QApplication::translate("AdvSearchBase", "Maximum size. You can use k/K,m/M,g/G as multipliers", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelmaxsize->setText(QApplication::translate("AdvSearchBase", "Max. Size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        restrictFtCB->setToolTip(QApplication::translate("AdvSearchBase", "Check this to enable filtering on file types", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        restrictFtCB->setText(QApplication::translate("AdvSearchBase", "Restrict file types", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        restrictCtCB->setToolTip(QApplication::translate("AdvSearchBase", "Check this to use file categories instead of raw mime types", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        restrictCtCB->setText(QApplication::translate("AdvSearchBase", "By categories", 0, QApplication::UnicodeUTF8));
        saveFileTypesPB->setText(QApplication::translate("AdvSearchBase", "Save as default", 0, QApplication::UnicodeUTF8));
        textLabel2_2->setText(QApplication::translate("AdvSearchBase", "Searched file types", 0, QApplication::UnicodeUTF8));
        delAFiltypPB->setText(QApplication::translate("AdvSearchBase", "All ---->", 0, QApplication::UnicodeUTF8));
        delFiltypPB->setText(QApplication::translate("AdvSearchBase", "Sel ----->", 0, QApplication::UnicodeUTF8));
        addFiltypPB->setText(QApplication::translate("AdvSearchBase", "<----- Sel", 0, QApplication::UnicodeUTF8));
        addAFiltypPB->setText(QApplication::translate("AdvSearchBase", "<----- All", 0, QApplication::UnicodeUTF8));
        textLabel3->setText(QApplication::translate("AdvSearchBase", "Ignored file types", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        subtreeCMB->setToolTip(QApplication::translate("AdvSearchBase", "Enter top directory for search", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        browsePB->setText(QApplication::translate("AdvSearchBase", "Browse", 0, QApplication::UnicodeUTF8));
        textLabel1->setText(QApplication::translate("AdvSearchBase", "Restrict results to files in subtree:", 0, QApplication::UnicodeUTF8));
        direxclCB->setText(QApplication::translate("AdvSearchBase", "Invert", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("AdvSearchBase", "Filter", 0, QApplication::UnicodeUTF8));
        searchPB->setText(QApplication::translate("AdvSearchBase", "Start Search", 0, QApplication::UnicodeUTF8));
        dismissPB->setText(QApplication::translate("AdvSearchBase", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AdvSearchBase: public Ui_AdvSearchBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADVSEARCH_H
