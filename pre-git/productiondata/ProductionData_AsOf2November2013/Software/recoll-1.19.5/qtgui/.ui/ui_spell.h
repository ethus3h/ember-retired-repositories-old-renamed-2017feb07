/********************************************************************************
** Form generated from reading UI file 'spell.ui'
**
** Created: Fri Aug 23 22:10:57 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPELL_H
#define UI_SPELL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SpellBase
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QComboBox *expTypeCMB;
    QLineEdit *baseWordLE;
    QLabel *label;
    QCheckBox *caseSensCB;
    QCheckBox *diacSensCB;
    QComboBox *stemLangCMB;
    QPushButton *expandPB;
    QPushButton *dismissPB;
    QLabel *statsLBL;
    QTableWidget *resTW;

    void setupUi(QWidget *SpellBase)
    {
        if (SpellBase->objectName().isEmpty())
            SpellBase->setObjectName(QString::fromUtf8("SpellBase"));
        SpellBase->resize(520, 465);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(SpellBase->sizePolicy().hasHeightForWidth());
        SpellBase->setSizePolicy(sizePolicy);
        SpellBase->setMinimumSize(QSize(100, 100));
        verticalLayout_2 = new QVBoxLayout(SpellBase);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        expTypeCMB = new QComboBox(SpellBase);
        expTypeCMB->setObjectName(QString::fromUtf8("expTypeCMB"));

        gridLayout->addWidget(expTypeCMB, 0, 0, 1, 1);

        baseWordLE = new QLineEdit(SpellBase);
        baseWordLE->setObjectName(QString::fromUtf8("baseWordLE"));
        baseWordLE->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(baseWordLE, 0, 1, 1, 2);

        label = new QLabel(SpellBase);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        caseSensCB = new QCheckBox(SpellBase);
        caseSensCB->setObjectName(QString::fromUtf8("caseSensCB"));

        gridLayout->addWidget(caseSensCB, 1, 1, 1, 1);

        diacSensCB = new QCheckBox(SpellBase);
        diacSensCB->setObjectName(QString::fromUtf8("diacSensCB"));

        gridLayout->addWidget(diacSensCB, 1, 2, 1, 1);

        stemLangCMB = new QComboBox(SpellBase);
        stemLangCMB->setObjectName(QString::fromUtf8("stemLangCMB"));

        gridLayout->addWidget(stemLangCMB, 2, 0, 1, 1);

        expandPB = new QPushButton(SpellBase);
        expandPB->setObjectName(QString::fromUtf8("expandPB"));
        expandPB->setEnabled(false);
        expandPB->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(expandPB, 2, 1, 1, 1);

        dismissPB = new QPushButton(SpellBase);
        dismissPB->setObjectName(QString::fromUtf8("dismissPB"));
        dismissPB->setEnabled(true);
        dismissPB->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(dismissPB, 2, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);

        statsLBL = new QLabel(SpellBase);
        statsLBL->setObjectName(QString::fromUtf8("statsLBL"));
        QFont font;
        font.setPointSize(7);
        statsLBL->setFont(font);

        verticalLayout->addWidget(statsLBL);

        resTW = new QTableWidget(SpellBase);
        if (resTW->columnCount() < 2)
            resTW->setColumnCount(2);
        if (resTW->rowCount() < 2)
            resTW->setRowCount(2);
        resTW->setObjectName(QString::fromUtf8("resTW"));
        resTW->setRowCount(2);
        resTW->setColumnCount(2);
        resTW->horizontalHeader()->setStretchLastSection(false);
        resTW->verticalHeader()->setVisible(false);

        verticalLayout->addWidget(resTW);


        verticalLayout_2->addLayout(verticalLayout);

        QWidget::setTabOrder(baseWordLE, expandPB);
        QWidget::setTabOrder(expandPB, dismissPB);
        QWidget::setTabOrder(dismissPB, stemLangCMB);

        retranslateUi(SpellBase);

        QMetaObject::connectSlotsByName(SpellBase);
    } // setupUi

    void retranslateUi(QWidget *SpellBase)
    {
        SpellBase->setWindowTitle(QApplication::translate("SpellBase", "Term Explorer", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("SpellBase", "Match", 0, QApplication::UnicodeUTF8));
        caseSensCB->setText(QApplication::translate("SpellBase", "Case", 0, QApplication::UnicodeUTF8));
        diacSensCB->setText(QApplication::translate("SpellBase", "Accents", 0, QApplication::UnicodeUTF8));
        expandPB->setText(QApplication::translate("SpellBase", "&Expand ", 0, QApplication::UnicodeUTF8));
        expandPB->setShortcut(QApplication::translate("SpellBase", "Alt+E", 0, QApplication::UnicodeUTF8));
        dismissPB->setText(QApplication::translate("SpellBase", "&Close", 0, QApplication::UnicodeUTF8));
        dismissPB->setShortcut(QApplication::translate("SpellBase", "Alt+C", 0, QApplication::UnicodeUTF8));
        statsLBL->setText(QApplication::translate("SpellBase", "No db info.", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SpellBase: public Ui_SpellBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPELL_H
