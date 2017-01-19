/********************************************************************************
** Form generated from reading UI file 'rtitool.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTITOOL_H
#define UI_RTITOOL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RTIToolW
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *sesCB;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCheckBox *nowCB;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RTIToolW)
    {
        if (RTIToolW->objectName().isEmpty())
            RTIToolW->setObjectName(QString::fromUtf8("RTIToolW"));
        RTIToolW->resize(423, 207);
        verticalLayout_2 = new QVBoxLayout(RTIToolW);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RTIToolW);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        sesCB = new QCheckBox(RTIToolW);
        sesCB->setObjectName(QString::fromUtf8("sesCB"));

        verticalLayout->addWidget(sesCB);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(28, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        nowCB = new QCheckBox(RTIToolW);
        nowCB->setObjectName(QString::fromUtf8("nowCB"));
        nowCB->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(nowCB->sizePolicy().hasHeightForWidth());
        nowCB->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(nowCB);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        buttonBox = new QDialogButtonBox(RTIToolW);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(RTIToolW);
        QObject::connect(buttonBox, SIGNAL(accepted()), RTIToolW, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RTIToolW, SLOT(reject()));

        QMetaObject::connectSlotsByName(RTIToolW);
    } // setupUi

    void retranslateUi(QDialog *RTIToolW)
    {
        RTIToolW->setWindowTitle(QApplication::translate("RTIToolW", "Real time indexing automatic start", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("RTIToolW", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Recoll</span> indexing can be set up to run as a daemon, updating the index as files change, in real time. You gain an always up to date index, but system resources are used permanently.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
        sesCB->setText(QApplication::translate("RTIToolW", "Start indexing daemon with my desktop session.", 0, QApplication::UnicodeUTF8));
        nowCB->setText(QApplication::translate("RTIToolW", "Also start indexing daemon right now.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class RTIToolW: public Ui_RTIToolW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTITOOL_H
