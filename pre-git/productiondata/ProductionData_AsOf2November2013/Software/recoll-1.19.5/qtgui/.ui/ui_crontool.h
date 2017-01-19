/********************************************************************************
** Form generated from reading UI file 'crontool.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRONTOOL_H
#define UI_CRONTOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CronToolW
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *daysLE;
    QLabel *label_3;
    QLineEdit *hoursLE;
    QLabel *label_2;
    QLineEdit *minsLE;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CronToolW)
    {
        if (CronToolW->objectName().isEmpty())
            CronToolW->setObjectName(QString::fromUtf8("CronToolW"));
        CronToolW->resize(508, 416);
        verticalLayout_2 = new QVBoxLayout(CronToolW);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(CronToolW);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_4 = new QLabel(CronToolW);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        daysLE = new QLineEdit(CronToolW);
        daysLE->setObjectName(QString::fromUtf8("daysLE"));

        gridLayout->addWidget(daysLE, 0, 1, 1, 1);

        label_3 = new QLabel(CronToolW);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        hoursLE = new QLineEdit(CronToolW);
        hoursLE->setObjectName(QString::fromUtf8("hoursLE"));

        gridLayout->addWidget(hoursLE, 1, 1, 1, 1);

        label_2 = new QLabel(CronToolW);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        minsLE = new QLineEdit(CronToolW);
        minsLE->setObjectName(QString::fromUtf8("minsLE"));

        gridLayout->addWidget(minsLE, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        label_5 = new QLabel(CronToolW);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout->addWidget(label_5);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(CronToolW);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(CronToolW);
        QObject::connect(buttonBox, SIGNAL(accepted()), CronToolW, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CronToolW, SLOT(reject()));

        QMetaObject::connectSlotsByName(CronToolW);
    } // setupUi

    void retranslateUi(QDialog *CronToolW)
    {
        CronToolW->setWindowTitle(QApplication::translate("CronToolW", "Cron Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CronToolW", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Recoll</span> batch indexing schedule (cron) </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Each field can contain a wildcard (*), a single numeric value, comma-separated lists (1,3,5) and ranges (1-7). More generally, the fields will be used <span style=\" font-style:italic;\">as is</span> in"
                        "side the crontab file, and the full crontab syntax can be used, see crontab(5).</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br />For example, entering <span style=\" font-family:'Courier New,courier';\">*</span> in <span style=\" font-style:italic;\">Days, </span><span style=\" font-family:'Courier New,courier';\">12,19</span> in <span style=\" font-style:italic;\">Hours</span> and <span style=\" font-family:'Courier New,courier';\">15</span> in <span style=\" font-style:italic;\">Minutes</span> would start recollindex every day at 12:15 AM and 7:15 PM</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A schedule with very frequent activations is probably less efficient than real time indexing.</p"
                        "></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("CronToolW", "Days of week (* or 0-7, 0 or 7 is Sunday)", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("CronToolW", "Hours (* or 0-23)", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("CronToolW", "Minutes (0-59)", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("CronToolW", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Click <span style=\" font-style:italic;\">Disable</span> to stop automatic batch indexing, <span style=\" font-style:italic;\">Enable</span> to activate it, <span style=\" font-style:italic;\">Cancel</span> to change nothing.</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CronToolW: public Ui_CronToolW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRONTOOL_H
