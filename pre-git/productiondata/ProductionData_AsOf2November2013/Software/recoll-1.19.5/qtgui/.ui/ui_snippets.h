/********************************************************************************
** Form generated from reading UI file 'snippets.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SNIPPETS_H
#define UI_SNIPPETS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_Snippets
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QWidget *browserw;
    QHBoxLayout *horizontalLayout_2;
    QFrame *searchFM;
    QHBoxLayout *horizontalLayout;
    QToolButton *searchClosePB;
    QLabel *searchLB;
    QLineEdit *searchLE;
    QPushButton *nextPB;
    QPushButton *prevPB;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Snippets)
    {
        if (Snippets->objectName().isEmpty())
            Snippets->setObjectName(QString::fromUtf8("Snippets"));
        Snippets->resize(640, 400);
        verticalLayout_2 = new QVBoxLayout(Snippets);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        browserw = new QWidget(Snippets);
        browserw->setObjectName(QString::fromUtf8("browserw"));

        verticalLayout->addWidget(browserw);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        searchFM = new QFrame(Snippets);
        searchFM->setObjectName(QString::fromUtf8("searchFM"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchFM->sizePolicy().hasHeightForWidth());
        searchFM->setSizePolicy(sizePolicy);
        searchFM->setFrameShape(QFrame::StyledPanel);
        searchFM->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(searchFM);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 1, -1, 1);
        searchClosePB = new QToolButton(searchFM);
        searchClosePB->setObjectName(QString::fromUtf8("searchClosePB"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(searchClosePB->sizePolicy().hasHeightForWidth());
        searchClosePB->setSizePolicy(sizePolicy1);
        searchClosePB->setText(QString::fromUtf8("X"));
        searchClosePB->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(searchClosePB);

        searchLB = new QLabel(searchFM);
        searchLB->setObjectName(QString::fromUtf8("searchLB"));

        horizontalLayout->addWidget(searchLB);

        searchLE = new QLineEdit(searchFM);
        searchLE->setObjectName(QString::fromUtf8("searchLE"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(searchLE->sizePolicy().hasHeightForWidth());
        searchLE->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(searchLE);

        nextPB = new QPushButton(searchFM);
        nextPB->setObjectName(QString::fromUtf8("nextPB"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nextPB->sizePolicy().hasHeightForWidth());
        nextPB->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(nextPB);

        prevPB = new QPushButton(searchFM);
        prevPB->setObjectName(QString::fromUtf8("prevPB"));
        sizePolicy3.setHeightForWidth(prevPB->sizePolicy().hasHeightForWidth());
        prevPB->setSizePolicy(sizePolicy3);

        horizontalLayout->addWidget(prevPB);


        horizontalLayout_2->addWidget(searchFM);

        buttonBox = new QDialogButtonBox(Snippets);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        horizontalLayout_2->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(Snippets);
        QObject::connect(searchClosePB, SIGNAL(clicked()), searchFM, SLOT(hide()));

        QMetaObject::connectSlotsByName(Snippets);
    } // setupUi

    void retranslateUi(QWidget *Snippets)
    {
        Snippets->setWindowTitle(QApplication::translate("Snippets", "Snippets", 0, QApplication::UnicodeUTF8));
        searchLB->setText(QApplication::translate("Snippets", "Find:", 0, QApplication::UnicodeUTF8));
        nextPB->setText(QApplication::translate("Snippets", "Next", 0, QApplication::UnicodeUTF8));
        prevPB->setText(QApplication::translate("Snippets", "Prev", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Snippets: public Ui_Snippets {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SNIPPETS_H
