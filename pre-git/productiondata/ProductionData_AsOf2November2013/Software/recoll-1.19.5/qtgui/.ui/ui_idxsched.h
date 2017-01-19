/********************************************************************************
** Form generated from reading UI file 'idxsched.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDXSCHED_H
#define UI_IDXSCHED_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCommandLinkButton>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_IdxSchedW
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCommandLinkButton *cronCLB;
    QCommandLinkButton *rtidxCLB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *IdxSchedW)
    {
        if (IdxSchedW->objectName().isEmpty())
            IdxSchedW->setObjectName(QString::fromUtf8("IdxSchedW"));
        IdxSchedW->resize(504, 403);
        verticalLayout_2 = new QVBoxLayout(IdxSchedW);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(IdxSchedW);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setTextFormat(Qt::AutoText);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        cronCLB = new QCommandLinkButton(IdxSchedW);
        cronCLB->setObjectName(QString::fromUtf8("cronCLB"));
        cronCLB->setAutoDefault(false);

        verticalLayout->addWidget(cronCLB);

        rtidxCLB = new QCommandLinkButton(IdxSchedW);
        rtidxCLB->setObjectName(QString::fromUtf8("rtidxCLB"));
        rtidxCLB->setAutoDefault(false);

        verticalLayout->addWidget(rtidxCLB);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(IdxSchedW);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(IdxSchedW);
        QObject::connect(buttonBox, SIGNAL(accepted()), IdxSchedW, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), IdxSchedW, SLOT(reject()));

        QMetaObject::connectSlotsByName(IdxSchedW);
    } // setupUi

    void retranslateUi(QDialog *IdxSchedW)
    {
        IdxSchedW->setWindowTitle(QApplication::translate("IdxSchedW", "Index scheduling setup", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("IdxSchedW", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Recoll</span> indexing can run permanently, indexing files as they change, or run at discrete intervals. </p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Reading the manual may help you to decide between these approaches (press F1). </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This tool can help you set up a schedule to automate batch indexing runs, or start real time indexing when you log in (or both, which rarely makes sense). </p></body></html>", 0, QApplication::UnicodeUTF8));
        cronCLB->setText(QApplication::translate("IdxSchedW", "Cron scheduling", 0, QApplication::UnicodeUTF8));
        cronCLB->setDescription(QApplication::translate("IdxSchedW", "The tool will let you decide at what time indexing should run and will install a crontab entry.", 0, QApplication::UnicodeUTF8));
        rtidxCLB->setText(QApplication::translate("IdxSchedW", "Real time indexing start up", 0, QApplication::UnicodeUTF8));
        rtidxCLB->setDescription(QApplication::translate("IdxSchedW", "Decide if real time indexing will be started when you log in (only for the default index).", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class IdxSchedW: public Ui_IdxSchedW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDXSCHED_H
