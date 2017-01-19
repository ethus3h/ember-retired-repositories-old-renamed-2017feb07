/********************************************************************************
** Form generated from reading UI file 'firstidx.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTIDX_H
#define UI_FIRSTIDX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FirstIdxDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCommandLinkButton *idxconfCLB;
    QCommandLinkButton *idxschedCLB;
    QPushButton *runidxPB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FirstIdxDialog)
    {
        if (FirstIdxDialog->objectName().isEmpty())
            FirstIdxDialog->setObjectName(QString::fromUtf8("FirstIdxDialog"));
        FirstIdxDialog->resize(502, 503);
        verticalLayout_2 = new QVBoxLayout(FirstIdxDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FirstIdxDialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::RichText);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        idxconfCLB = new QCommandLinkButton(FirstIdxDialog);
        idxconfCLB->setObjectName(QString::fromUtf8("idxconfCLB"));
        idxconfCLB->setCheckable(false);
        idxconfCLB->setAutoDefault(false);

        verticalLayout->addWidget(idxconfCLB);

        idxschedCLB = new QCommandLinkButton(FirstIdxDialog);
        idxschedCLB->setObjectName(QString::fromUtf8("idxschedCLB"));
        idxschedCLB->setAutoDefault(false);

        verticalLayout->addWidget(idxschedCLB);

        runidxPB = new QPushButton(FirstIdxDialog);
        runidxPB->setObjectName(QString::fromUtf8("runidxPB"));

        verticalLayout->addWidget(runidxPB);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(FirstIdxDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(FirstIdxDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FirstIdxDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FirstIdxDialog, SLOT(reject()));
        QObject::connect(runidxPB, SIGNAL(clicked()), FirstIdxDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(FirstIdxDialog);
    } // setupUi

    void retranslateUi(QDialog *FirstIdxDialog)
    {
        FirstIdxDialog->setWindowTitle(QApplication::translate("FirstIdxDialog", "First indexing setup", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FirstIdxDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">It appears that the index for this configuration does not exist.</span><br /><br />If you just want to index your home directory with a set of reasonable defaults, press the <span style=\" font-style:italic;\">Start indexing now</span> button. You will be able to adjust the details later. </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0"
                        "px; -qt-block-indent:0; text-indent:0px;\">If you want more control, use the following links to adjust the indexing configuration and schedule.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">These tools can be accessed later from the <span style=\" font-style:italic;\">Preferences</span> menu.</p></body></html>", 0, QApplication::UnicodeUTF8));
        idxconfCLB->setText(QApplication::translate("FirstIdxDialog", "Indexing configuration", 0, QApplication::UnicodeUTF8));
        idxconfCLB->setDescription(QApplication::translate("FirstIdxDialog", "This will let you adjust the directories you want to index, and other parameters like excluded file paths or names, default character sets, etc.", 0, QApplication::UnicodeUTF8));
        idxschedCLB->setText(QApplication::translate("FirstIdxDialog", "Indexing schedule", 0, QApplication::UnicodeUTF8));
        idxschedCLB->setDescription(QApplication::translate("FirstIdxDialog", "This will let you chose between batch and real-time indexing, and set up an automatic  schedule for batch indexing (using cron).", 0, QApplication::UnicodeUTF8));
        runidxPB->setText(QApplication::translate("FirstIdxDialog", "Start indexing now", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FirstIdxDialog: public Ui_FirstIdxDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTIDX_H
