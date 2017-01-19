/*
JACK Audio Connection Kit - Qt GUI Interface.

   Copyright (C) 2003-2013, rncbc aka Rui Nuno Capela. All rights reserved.

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

 
*/

/********************************************************************************
** Form generated from reading UI file 'qjackctlMainForm.ui'
**
** Created: Sat Aug 31 19:55:37 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QJACKCTLMAINFORM_H
#define UI_QJACKCTLMAINFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qjackctlMainForm
{
public:
    QGridLayout *gridLayout;
    QToolButton *StartToolButton;
    QToolButton *StopToolButton;
    QFrame *StatusDisplayFrame;
    QGridLayout *gridLayout1;
    QLabel *ServerStateTextLabel;
    QLabel *ServerModeTextLabel;
    QLabel *DspLoadTextLabel;
    QLabel *SampleRateTextLabel;
    QLabel *XrunCountTextLabel;
    QLabel *TimeDisplayTextLabel;
    QLabel *TransportStateTextLabel;
    QLabel *TransportBPMTextLabel;
    QLabel *TransportTimeTextLabel;
    QToolButton *QuitToolButton;
    QToolButton *SessionToolButton;
    QToolButton *MessagesStatusToolButton;
    QToolButton *SetupToolButton;
    QToolButton *ConnectionsToolButton;
    QToolButton *PatchbayToolButton;
    QToolButton *RewindToolButton;
    QToolButton *BackwardToolButton;
    QToolButton *PlayToolButton;
    QToolButton *PauseToolButton;
    QToolButton *ForwardToolButton;
    QToolButton *AboutToolButton;

    void setupUi(QWidget *qjackctlMainForm)
    {
        if (qjackctlMainForm->objectName().isEmpty())
            qjackctlMainForm->setObjectName(QString::fromUtf8("qjackctlMainForm"));
        qjackctlMainForm->resize(427, 100);
        QSizePolicy sizePolicy(static_cast<QSizePolicy::Policy>(1), static_cast<QSizePolicy::Policy>(1));
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(qjackctlMainForm->sizePolicy().hasHeightForWidth());
        qjackctlMainForm->setSizePolicy(sizePolicy);
        QFont font;
        qjackctlMainForm->setFont(font);
        const QIcon icon = QIcon(QString::fromUtf8(":/images/qjackctl.png"));
        qjackctlMainForm->setWindowIcon(icon);
        gridLayout = new QGridLayout(qjackctlMainForm);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        StartToolButton = new QToolButton(qjackctlMainForm);
        StartToolButton->setObjectName(QString::fromUtf8("StartToolButton"));
        StartToolButton->setMinimumSize(QSize(28, 28));
        StartToolButton->setMaximumSize(QSize(32767, 28));
        StartToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon1 = QIcon(QString::fromUtf8(":/images/start1.png"));
        StartToolButton->setIcon(icon1);
        StartToolButton->setCheckable(false);
        StartToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(StartToolButton, 0, 0, 1, 1);

        StopToolButton = new QToolButton(qjackctlMainForm);
        StopToolButton->setObjectName(QString::fromUtf8("StopToolButton"));
        StopToolButton->setMinimumSize(QSize(28, 28));
        StopToolButton->setMaximumSize(QSize(32767, 28));
        StopToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon2 = QIcon(QString::fromUtf8(":/images/stop1.png"));
        StopToolButton->setIcon(icon2);
        StopToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(StopToolButton, 0, 1, 1, 1);

        StatusDisplayFrame = new QFrame(qjackctlMainForm);
        StatusDisplayFrame->setObjectName(QString::fromUtf8("StatusDisplayFrame"));
        QSizePolicy sizePolicy1(static_cast<QSizePolicy::Policy>(7), static_cast<QSizePolicy::Policy>(7));
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(StatusDisplayFrame->sizePolicy().hasHeightForWidth());
        StatusDisplayFrame->setSizePolicy(sizePolicy1);
        StatusDisplayFrame->setMaximumSize(QSize(260, 80));
        StatusDisplayFrame->setAutoFillBackground(true);
        StatusDisplayFrame->setFrameShape(QFrame::Panel);
        StatusDisplayFrame->setFrameShadow(QFrame::Sunken);
        gridLayout1 = new QGridLayout(StatusDisplayFrame);
        gridLayout1->setSpacing(0);
        gridLayout1->setContentsMargins(2, 2, 2, 2);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        ServerStateTextLabel = new QLabel(StatusDisplayFrame);
        ServerStateTextLabel->setObjectName(QString::fromUtf8("ServerStateTextLabel"));
        ServerStateTextLabel->setMinimumSize(QSize(50, 0));
        ServerStateTextLabel->setFont(font);
        ServerStateTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        ServerStateTextLabel->setWordWrap(false);
        ServerStateTextLabel->setIndent(2);

        gridLayout1->addWidget(ServerStateTextLabel, 0, 0, 1, 2);

        ServerModeTextLabel = new QLabel(StatusDisplayFrame);
        ServerModeTextLabel->setObjectName(QString::fromUtf8("ServerModeTextLabel"));
        ServerModeTextLabel->setMinimumSize(QSize(20, 0));
        ServerModeTextLabel->setFont(font);
        ServerModeTextLabel->setAlignment(Qt::AlignCenter);
        ServerModeTextLabel->setWordWrap(false);

        gridLayout1->addWidget(ServerModeTextLabel, 0, 2, 1, 1);

        DspLoadTextLabel = new QLabel(StatusDisplayFrame);
        DspLoadTextLabel->setObjectName(QString::fromUtf8("DspLoadTextLabel"));
        DspLoadTextLabel->setMinimumSize(QSize(40, 0));
        DspLoadTextLabel->setFont(font);
        DspLoadTextLabel->setAlignment(Qt::AlignCenter);
        DspLoadTextLabel->setWordWrap(false);

        gridLayout1->addWidget(DspLoadTextLabel, 0, 3, 1, 2);

        SampleRateTextLabel = new QLabel(StatusDisplayFrame);
        SampleRateTextLabel->setObjectName(QString::fromUtf8("SampleRateTextLabel"));
        SampleRateTextLabel->setMinimumSize(QSize(50, 0));
        SampleRateTextLabel->setFont(font);
        SampleRateTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SampleRateTextLabel->setWordWrap(false);

        gridLayout1->addWidget(SampleRateTextLabel, 0, 5, 1, 1);

        XrunCountTextLabel = new QLabel(StatusDisplayFrame);
        XrunCountTextLabel->setObjectName(QString::fromUtf8("XrunCountTextLabel"));
        XrunCountTextLabel->setMinimumSize(QSize(30, 0));
        XrunCountTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        XrunCountTextLabel->setWordWrap(false);
        XrunCountTextLabel->setIndent(2);

        gridLayout1->addWidget(XrunCountTextLabel, 1, 0, 1, 1);

        TimeDisplayTextLabel = new QLabel(StatusDisplayFrame);
        TimeDisplayTextLabel->setObjectName(QString::fromUtf8("TimeDisplayTextLabel"));
        TimeDisplayTextLabel->setMinimumSize(QSize(130, 0));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        TimeDisplayTextLabel->setFont(font1);
        TimeDisplayTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TimeDisplayTextLabel->setWordWrap(false);

        gridLayout1->addWidget(TimeDisplayTextLabel, 1, 1, 1, 5);

        TransportStateTextLabel = new QLabel(StatusDisplayFrame);
        TransportStateTextLabel->setObjectName(QString::fromUtf8("TransportStateTextLabel"));
        TransportStateTextLabel->setMinimumSize(QSize(50, 0));
        TransportStateTextLabel->setFont(font);
        TransportStateTextLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        TransportStateTextLabel->setWordWrap(false);
        TransportStateTextLabel->setIndent(2);

        gridLayout1->addWidget(TransportStateTextLabel, 2, 0, 1, 2);

        TransportBPMTextLabel = new QLabel(StatusDisplayFrame);
        TransportBPMTextLabel->setObjectName(QString::fromUtf8("TransportBPMTextLabel"));
        TransportBPMTextLabel->setMinimumSize(QSize(30, 0));
        TransportBPMTextLabel->setFont(font);
        TransportBPMTextLabel->setAlignment(Qt::AlignCenter);
        TransportBPMTextLabel->setWordWrap(false);

        gridLayout1->addWidget(TransportBPMTextLabel, 2, 2, 1, 2);

        TransportTimeTextLabel = new QLabel(StatusDisplayFrame);
        TransportTimeTextLabel->setObjectName(QString::fromUtf8("TransportTimeTextLabel"));
        TransportTimeTextLabel->setMinimumSize(QSize(80, 0));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        TransportTimeTextLabel->setFont(font2);
        TransportTimeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TransportTimeTextLabel->setWordWrap(false);

        gridLayout1->addWidget(TransportTimeTextLabel, 2, 4, 1, 2);


        gridLayout->addWidget(StatusDisplayFrame, 0, 2, 2, 5);

        QuitToolButton = new QToolButton(qjackctlMainForm);
        QuitToolButton->setObjectName(QString::fromUtf8("QuitToolButton"));
        QuitToolButton->setMinimumSize(QSize(28, 28));
        QuitToolButton->setMaximumSize(QSize(32767, 28));
        QuitToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon3 = QIcon(QString::fromUtf8(":/images/quit1.png"));
        QuitToolButton->setIcon(icon3);
        QuitToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(QuitToolButton, 0, 7, 1, 1);

        SessionToolButton = new QToolButton(qjackctlMainForm);
        SessionToolButton->setObjectName(QString::fromUtf8("SessionToolButton"));
        SessionToolButton->setMinimumSize(QSize(28, 28));
        SessionToolButton->setMaximumSize(QSize(32767, 28));
        SessionToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon4 = QIcon(QString::fromUtf8(":/images/session1.png"));
        SessionToolButton->setIcon(icon4);
        SessionToolButton->setCheckable(true);
        SessionToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(SessionToolButton, 1, 1, 1, 1);

        MessagesStatusToolButton = new QToolButton(qjackctlMainForm);
        MessagesStatusToolButton->setObjectName(QString::fromUtf8("MessagesStatusToolButton"));
        MessagesStatusToolButton->setMinimumSize(QSize(28, 28));
        MessagesStatusToolButton->setMaximumSize(QSize(32767, 28));
        MessagesStatusToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon5 = QIcon(QString::fromUtf8(":/images/messagesstatus1.png"));
        MessagesStatusToolButton->setIcon(icon5);
        MessagesStatusToolButton->setCheckable(true);
        MessagesStatusToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(MessagesStatusToolButton, 1, 0, 1, 1);

        SetupToolButton = new QToolButton(qjackctlMainForm);
        SetupToolButton->setObjectName(QString::fromUtf8("SetupToolButton"));
        SetupToolButton->setMinimumSize(QSize(28, 28));
        SetupToolButton->setMaximumSize(QSize(32767, 28));
        SetupToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon6 = QIcon(QString::fromUtf8(":/images/setup1.png"));
        SetupToolButton->setIcon(icon6);
        SetupToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(SetupToolButton, 1, 7, 1, 1);

        ConnectionsToolButton = new QToolButton(qjackctlMainForm);
        ConnectionsToolButton->setObjectName(QString::fromUtf8("ConnectionsToolButton"));
        ConnectionsToolButton->setMinimumSize(QSize(28, 28));
        ConnectionsToolButton->setMaximumSize(QSize(32767, 28));
        ConnectionsToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon7 = QIcon(QString::fromUtf8(":/images/connections1.png"));
        ConnectionsToolButton->setIcon(icon7);
        ConnectionsToolButton->setCheckable(true);
        ConnectionsToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(ConnectionsToolButton, 2, 0, 1, 1);

        PatchbayToolButton = new QToolButton(qjackctlMainForm);
        PatchbayToolButton->setObjectName(QString::fromUtf8("PatchbayToolButton"));
        PatchbayToolButton->setMinimumSize(QSize(28, 28));
        PatchbayToolButton->setMaximumSize(QSize(32767, 28));
        PatchbayToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon8 = QIcon(QString::fromUtf8(":/images/patchbay1.png"));
        PatchbayToolButton->setIcon(icon8);
        PatchbayToolButton->setCheckable(true);
        PatchbayToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(PatchbayToolButton, 2, 1, 1, 1);

        RewindToolButton = new QToolButton(qjackctlMainForm);
        RewindToolButton->setObjectName(QString::fromUtf8("RewindToolButton"));
        RewindToolButton->setMinimumSize(QSize(28, 28));
        RewindToolButton->setMaximumSize(QSize(48, 28));
        RewindToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon9 = QIcon(QString::fromUtf8(":/images/rewind1.png"));
        RewindToolButton->setIcon(icon9);

        gridLayout->addWidget(RewindToolButton, 2, 2, 1, 1);

        BackwardToolButton = new QToolButton(qjackctlMainForm);
        BackwardToolButton->setObjectName(QString::fromUtf8("BackwardToolButton"));
        BackwardToolButton->setMinimumSize(QSize(28, 28));
        BackwardToolButton->setMaximumSize(QSize(48, 28));
        BackwardToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon10 = QIcon(QString::fromUtf8(":/images/backward1.png"));
        BackwardToolButton->setIcon(icon10);
        BackwardToolButton->setAutoRepeat(true);

        gridLayout->addWidget(BackwardToolButton, 2, 3, 1, 1);

        PlayToolButton = new QToolButton(qjackctlMainForm);
        PlayToolButton->setObjectName(QString::fromUtf8("PlayToolButton"));
        PlayToolButton->setMinimumSize(QSize(28, 28));
        PlayToolButton->setMaximumSize(QSize(48, 28));
        PlayToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon11 = QIcon(QString::fromUtf8(":/images/play1.png"));
        PlayToolButton->setIcon(icon11);
        PlayToolButton->setCheckable(true);

        gridLayout->addWidget(PlayToolButton, 2, 4, 1, 1);

        PauseToolButton = new QToolButton(qjackctlMainForm);
        PauseToolButton->setObjectName(QString::fromUtf8("PauseToolButton"));
        sizePolicy.setHeightForWidth(PauseToolButton->sizePolicy().hasHeightForWidth());
        PauseToolButton->setSizePolicy(sizePolicy);
        PauseToolButton->setMinimumSize(QSize(28, 28));
        PauseToolButton->setMaximumSize(QSize(48, 28));
        PauseToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon12 = QIcon(QString::fromUtf8(":/images/pause1.png"));
        PauseToolButton->setIcon(icon12);

        gridLayout->addWidget(PauseToolButton, 2, 5, 1, 1);

        ForwardToolButton = new QToolButton(qjackctlMainForm);
        ForwardToolButton->setObjectName(QString::fromUtf8("ForwardToolButton"));
        ForwardToolButton->setMinimumSize(QSize(28, 28));
        ForwardToolButton->setMaximumSize(QSize(48, 28));
        ForwardToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon13 = QIcon(QString::fromUtf8(":/images/forward1.png"));
        ForwardToolButton->setIcon(icon13);
        ForwardToolButton->setAutoRepeat(true);

        gridLayout->addWidget(ForwardToolButton, 2, 6, 1, 1);

        AboutToolButton = new QToolButton(qjackctlMainForm);
        AboutToolButton->setObjectName(QString::fromUtf8("AboutToolButton"));
        AboutToolButton->setMinimumSize(QSize(28, 28));
        AboutToolButton->setMaximumSize(QSize(32767, 28));
        AboutToolButton->setFocusPolicy(Qt::TabFocus);
        const QIcon icon14 = QIcon(QString::fromUtf8(":/images/about1.png"));
        AboutToolButton->setIcon(icon14);
        AboutToolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(AboutToolButton, 2, 7, 1, 1);

        QWidget::setTabOrder(StartToolButton, StopToolButton);
        QWidget::setTabOrder(StopToolButton, QuitToolButton);
        QWidget::setTabOrder(QuitToolButton, SessionToolButton);
        QWidget::setTabOrder(SessionToolButton, MessagesStatusToolButton);
        QWidget::setTabOrder(MessagesStatusToolButton, SetupToolButton);
        QWidget::setTabOrder(SetupToolButton, ConnectionsToolButton);
        QWidget::setTabOrder(ConnectionsToolButton, PatchbayToolButton);
        QWidget::setTabOrder(PatchbayToolButton, RewindToolButton);
        QWidget::setTabOrder(RewindToolButton, BackwardToolButton);
        QWidget::setTabOrder(BackwardToolButton, PlayToolButton);
        QWidget::setTabOrder(PlayToolButton, PauseToolButton);
        QWidget::setTabOrder(PauseToolButton, ForwardToolButton);
        QWidget::setTabOrder(ForwardToolButton, AboutToolButton);

        retranslateUi(qjackctlMainForm);

        QMetaObject::connectSlotsByName(qjackctlMainForm);
    } // setupUi

    void retranslateUi(QWidget *qjackctlMainForm)
    {
        qjackctlMainForm->setWindowTitle(QApplication::translate("qjackctlMainForm", "QjackCtl", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StartToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Start the JACK server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartToolButton->setText(QApplication::translate("qjackctlMainForm", "&Start", 0, QApplication::UnicodeUTF8));
        StartToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StopToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Stop the JACK server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StopToolButton->setText(QApplication::translate("qjackctlMainForm", "S&top", 0, QApplication::UnicodeUTF8));
        StopToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+T", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ServerStateTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "JACK server state", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ServerModeTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "JACK server mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        DspLoadTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "DSP Load", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        SampleRateTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "Sample rate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        XrunCountTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "XRUN Count (notifications)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TimeDisplayTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "Time display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TimeDisplayTextLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        TransportStateTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "Transport state", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TransportBPMTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "Transport BPM", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        TransportTimeTextLabel->setToolTip(QApplication::translate("qjackctlMainForm", "Transport time", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TransportTimeTextLabel->setText(QString());
#ifndef QT_NO_TOOLTIP
        QuitToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Quit processing and exit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QuitToolButton->setText(QApplication::translate("qjackctlMainForm", "&Quit", 0, QApplication::UnicodeUTF8));
        QuitToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+Q", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SessionToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Show/hide the session management window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SessionToolButton->setText(QApplication::translate("qjackctlMainForm", "S&ession", 0, QApplication::UnicodeUTF8));
        SessionToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+E", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MessagesStatusToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Show/hide the messages log/status window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MessagesStatusToolButton->setText(QApplication::translate("qjackctlMainForm", "&Messages", 0, QApplication::UnicodeUTF8));
        MessagesStatusToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+M", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SetupToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Show settings and options dialog", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SetupToolButton->setText(QApplication::translate("qjackctlMainForm", "Set&up...", 0, QApplication::UnicodeUTF8));
        SetupToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ConnectionsToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Show/hide the actual connections patchbay window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ConnectionsToolButton->setText(QApplication::translate("qjackctlMainForm", "&Connect", 0, QApplication::UnicodeUTF8));
        ConnectionsToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PatchbayToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Show/hide the patchbay editor window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PatchbayToolButton->setText(QApplication::translate("qjackctlMainForm", "&Patchbay", 0, QApplication::UnicodeUTF8));
        PatchbayToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RewindToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Rewind transport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RewindToolButton->setText(QApplication::translate("qjackctlMainForm", "&Rewind", 0, QApplication::UnicodeUTF8));
        RewindToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+R", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        BackwardToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Backward transport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BackwardToolButton->setText(QApplication::translate("qjackctlMainForm", "&Backward", 0, QApplication::UnicodeUTF8));
        BackwardToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PlayToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Start transport rolling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PlayToolButton->setText(QApplication::translate("qjackctlMainForm", "&Play", 0, QApplication::UnicodeUTF8));
        PlayToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Space", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PauseToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Stop transport rolling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PauseToolButton->setText(QApplication::translate("qjackctlMainForm", "Pa&use", 0, QApplication::UnicodeUTF8));
        PauseToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Shift+Space", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ForwardToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Forward transport", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ForwardToolButton->setText(QApplication::translate("qjackctlMainForm", "&Forward", 0, QApplication::UnicodeUTF8));
        ForwardToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+F", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AboutToolButton->setToolTip(QApplication::translate("qjackctlMainForm", "Show information about this application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AboutToolButton->setText(QApplication::translate("qjackctlMainForm", "Ab&out...", 0, QApplication::UnicodeUTF8));
        AboutToolButton->setShortcut(QApplication::translate("qjackctlMainForm", "Alt+O", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qjackctlMainForm: public Ui_qjackctlMainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QJACKCTLMAINFORM_H
