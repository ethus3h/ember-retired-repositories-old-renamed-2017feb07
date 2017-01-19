/*
JACK Audio Connection Kit - Qt GUI Interface.

   Copyright (C) 2003-2012, rncbc aka Rui Nuno Capela. All rights reserved.

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
** Form generated from reading UI file 'qjackctlSetupForm.ui'
**
** Created: Sat Aug 31 19:55:37 2013
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QJACKCTLSETUPFORM_H
#define UI_QJACKCTLSETUPFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qjackctlSetupForm
{
public:
    QVBoxLayout *vboxLayout;
    QTabWidget *SetupTabWidget;
    QWidget *SettingsTabPage;
    QVBoxLayout *vboxLayout1;
    QHBoxLayout *hboxLayout;
    QLabel *PresetTextLabel;
    QComboBox *PresetComboBox;
    QPushButton *PresetSavePushButton;
    QPushButton *PresetDeletePushButton;
    QGroupBox *ParametersGroupBox;
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QHBoxLayout *hboxLayout1;
    QLabel *ServerPrefixTextLabel;
    QComboBox *ServerPrefixComboBox;
    QLabel *ServerNameTextLabel;
    QComboBox *ServerNameComboBox;
    QLabel *DriverTextLabel;
    QComboBox *DriverComboBox;
    QSpacerItem *spacerItem1;
    QVBoxLayout *vboxLayout2;
    QCheckBox *RealtimeCheckBox;
    QCheckBox *NoMemLockCheckBox;
    QCheckBox *UnlockMemCheckBox;
    QCheckBox *SoftModeCheckBox;
    QCheckBox *MonitorCheckBox;
    QCheckBox *ShortsCheckBox;
    QCheckBox *HWMonCheckBox;
    QCheckBox *HWMeterCheckBox;
    QCheckBox *IgnoreHWCheckBox;
    QCheckBox *VerboseCheckBox;
    QSpacerItem *spacerItem2;
    QGridLayout *gridLayout1;
    QSpinBox *PeriodsSpinBox;
    QLabel *PriorityTextLabel;
    QLabel *FramesTextLabel;
    QComboBox *FramesComboBox;
    QLabel *PortMaxTextLabel;
    QLabel *ChanTextLabel;
    QComboBox *WaitComboBox;
    QComboBox *SampleRateComboBox;
    QSpinBox *PrioritySpinBox;
    QLabel *WordLengthTextLabel;
    QLabel *PeriodsTextLabel;
    QComboBox *WordLengthComboBox;
    QComboBox *PortMaxComboBox;
    QLabel *WaitTextLabel;
    QLabel *SampleRateTextLabel;
    QSpinBox *ChanSpinBox;
    QLabel *TimeoutTextLabel;
    QComboBox *TimeoutComboBox;
    QSpacerItem *spacerItem3;
    QGridLayout *gridLayout2;
    QLabel *InterfaceTextLabel;
    QComboBox *InterfaceComboBox;
    QToolButton *InterfaceToolButton;
    QLabel *DitherTextLabel;
    QComboBox *DitherComboBox;
    QLabel *AudioTextLabel;
    QComboBox *AudioComboBox;
    QLabel *InDeviceTextLabel;
    QComboBox *InDeviceComboBox;
    QToolButton *InDeviceToolButton;
    QLabel *OutDeviceTextLabel;
    QComboBox *OutDeviceComboBox;
    QToolButton *OutDeviceToolButton;
    QLabel *InOutChannelsTextLabel;
    QSpinBox *InChannelsSpinBox;
    QSpinBox *OutChannelsSpinBox;
    QLabel *InOutLatencyTextLabel;
    QSpinBox *InLatencySpinBox;
    QSpinBox *OutLatencySpinBox;
    QLabel *MidiDriverTextLabel;
    QComboBox *MidiDriverComboBox;
    QSpacerItem *spacerItem4;
    QHBoxLayout *hboxLayout2;
    QLabel *ServerSuffixTextLabel;
    QComboBox *ServerSuffixComboBox;
    QLabel *StartDelayTextLabel;
    QSpinBox *StartDelaySpinBox;
    QLabel *LatencyTextLabel;
    QLabel *LatencyTextValue;
    QSpacerItem *spacerItem5;
    QWidget *OptionsTabPage;
    QVBoxLayout *vboxLayout3;
    QGroupBox *ScriptingGroupBox;
    QGridLayout *gridLayout3;
    QCheckBox *StartupScriptCheckBox;
    QCheckBox *PostStartupScriptCheckBox;
    QCheckBox *ShutdownScriptCheckBox;
    QComboBox *StartupScriptShellComboBox;
    QToolButton *StartupScriptSymbolToolButton;
    QToolButton *StartupScriptBrowseToolButton;
    QComboBox *PostStartupScriptShellComboBox;
    QToolButton *PostStartupScriptSymbolToolButton;
    QToolButton *PostStartupScriptBrowseToolButton;
    QToolButton *ShutdownScriptSymbolToolButton;
    QToolButton *ShutdownScriptBrowseToolButton;
    QComboBox *ShutdownScriptShellComboBox;
    QCheckBox *PostShutdownScriptCheckBox;
    QToolButton *PostShutdownScriptSymbolToolButton;
    QToolButton *PostShutdownScriptBrowseToolButton;
    QComboBox *PostShutdownScriptShellComboBox;
    QGroupBox *StatisticsGroupBox;
    QGridLayout *gridLayout4;
    QCheckBox *StdoutCaptureCheckBox;
    QLabel *XrunRegexTextLabel;
    QComboBox *XrunRegexComboBox;
    QGroupBox *ConnectionsGroupBox;
    QGridLayout *gridLayout5;
    QCheckBox *ActivePatchbayCheckBox;
    QComboBox *ActivePatchbayPathComboBox;
    QToolButton *ActivePatchbayPathToolButton;
    QCheckBox *AutoRefreshCheckBox;
    QComboBox *TimeRefreshComboBox;
    QSpacerItem *spacerItem6;
    QGroupBox *LoggingGroupBox;
    QGridLayout *gridLayout6;
    QCheckBox *MessagesLogCheckBox;
    QComboBox *MessagesLogPathComboBox;
    QToolButton *MessagesLogPathToolButton;
    QSpacerItem *spacerItem7;
    QWidget *DisplayTabPage;
    QVBoxLayout *vboxLayout4;
    QGroupBox *TimeDisplayGroupBox;
    QGridLayout *gridLayout7;
    QHBoxLayout *hboxLayout3;
    QLabel *TimeFormatTextLabel;
    QComboBox *TimeFormatComboBox;
    QVBoxLayout *vboxLayout5;
    QRadioButton *TransportTimeRadioButton;
    QRadioButton *TransportBBTRadioButton;
    QRadioButton *ElapsedResetRadioButton;
    QRadioButton *ElapsedXrunRadioButton;
    QSpacerItem *spacerItem8;
    QSpacerItem *spacerItem9;
    QGridLayout *gridLayout8;
    QLabel *DisplayFont2TextLabel;
    QLabel *DisplayFont1TextLabel;
    QLabel *DisplayFont1Label;
    QPushButton *DisplayFont2PushButton;
    QPushButton *DisplayFont1PushButton;
    QLabel *DisplayFont2Label;
    QCheckBox *DisplayEffectCheckBox;
    QCheckBox *DisplayBlinkCheckBox;
    QGroupBox *MessagesWindowGroupBox;
    QHBoxLayout *hboxLayout4;
    QLabel *MessagesFontTextLabel;
    QPushButton *MessagesFontPushButton;
    QSpacerItem *spacerItem10;
    QCheckBox *MessagesLimitCheckBox;
    QComboBox *MessagesLimitLinesComboBox;
    QGroupBox *ConnectionsWindowGroupBox;
    QGridLayout *gridLayout9;
    QLabel *ConnectionsFontTextLabel;
    QPushButton *ConnectionsFontPushButton;
    QSpacerItem *spacerItem11;
    QLabel *ConnectionsIconSizeTextLabel;
    QComboBox *ConnectionsIconSizeComboBox;
    QSpacerItem *spacerItem12;
    QCheckBox *BezierLinesCheckBox;
    QCheckBox *AliasesEnabledCheckBox;
    QCheckBox *AliasesEditingCheckBox;
    QLabel *JackClientPortAliasTextLabel;
    QComboBox *JackClientPortAliasComboBox;
    QSpacerItem *spacerItem13;
    QWidget *MiscTabPage;
    QVBoxLayout *vboxLayout6;
    QGroupBox *OtherGroupBox;
    QGridLayout *gridLayout10;
    QVBoxLayout *vboxLayout7;
    QCheckBox *StartJackCheckBox;
    QCheckBox *QueryCloseCheckBox;
    QCheckBox *KeepOnTopCheckBox;
    QCheckBox *SystemTrayCheckBox;
    QCheckBox *StartMinimizedCheckBox;
    QCheckBox *DelayedSetupCheckBox;
    QCheckBox *SingletonCheckBox;
    QVBoxLayout *vboxLayout8;
    QCheckBox *ServerConfigCheckBox;
    QComboBox *ServerConfigNameComboBox;
    QCheckBox *ServerConfigTempCheckBox;
    QCheckBox *QueryShutdownCheckBox;
    QCheckBox *AlsaSeqEnabledCheckBox;
    QCheckBox *DBusEnabledCheckBox;
    QCheckBox *StopJackCheckBox;
    QSpacerItem *spacerItem14;
    QSpacerItem *spacerItem15;
    QGroupBox *ButtonsGroupBox;
    QGridLayout *gridLayout11;
    QVBoxLayout *vboxLayout9;
    QCheckBox *LeftButtonsCheckBox;
    QCheckBox *RightButtonsCheckBox;
    QCheckBox *TransportButtonsCheckBox;
    QCheckBox *TextLabelsCheckBox;
    QSpacerItem *spacerItem16;
    QGroupBox *DefaultsGroupBox;
    QHBoxLayout *hboxLayout5;
    QSpacerItem *spacerItem17;
    QLabel *BaseFontSizeTextLabel;
    QComboBox *BaseFontSizeComboBox;
    QDialogButtonBox *DialogButtonBox;

    void setupUi(QDialog *qjackctlSetupForm)
    {
        if (qjackctlSetupForm->objectName().isEmpty())
            qjackctlSetupForm->setObjectName(QString::fromUtf8("qjackctlSetupForm"));
        qjackctlSetupForm->resize(675, 503);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/setup1.png"), QSize(), QIcon::Normal, QIcon::Off);
        qjackctlSetupForm->setWindowIcon(icon);
        qjackctlSetupForm->setSizeGripEnabled(true);
        vboxLayout = new QVBoxLayout(qjackctlSetupForm);
        vboxLayout->setSpacing(4);
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        SetupTabWidget = new QTabWidget(qjackctlSetupForm);
        SetupTabWidget->setObjectName(QString::fromUtf8("SetupTabWidget"));
        SetupTabWidget->setAcceptDrops(false);
        SettingsTabPage = new QWidget();
        SettingsTabPage->setObjectName(QString::fromUtf8("SettingsTabPage"));
        vboxLayout1 = new QVBoxLayout(SettingsTabPage);
        vboxLayout1->setSpacing(4);
        vboxLayout1->setContentsMargins(4, 4, 4, 4);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(4);
        hboxLayout->setContentsMargins(4, 4, 4, 4);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        PresetTextLabel = new QLabel(SettingsTabPage);
        PresetTextLabel->setObjectName(QString::fromUtf8("PresetTextLabel"));
        PresetTextLabel->setWordWrap(false);

        hboxLayout->addWidget(PresetTextLabel);

        PresetComboBox = new QComboBox(SettingsTabPage);
        PresetComboBox->setObjectName(QString::fromUtf8("PresetComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PresetComboBox->sizePolicy().hasHeightForWidth());
        PresetComboBox->setSizePolicy(sizePolicy);
        PresetComboBox->setEditable(true);

        hboxLayout->addWidget(PresetComboBox);

        PresetSavePushButton = new QPushButton(SettingsTabPage);
        PresetSavePushButton->setObjectName(QString::fromUtf8("PresetSavePushButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/save1.png"), QSize(), QIcon::Normal, QIcon::Off);
        PresetSavePushButton->setIcon(icon1);
        PresetSavePushButton->setAutoDefault(false);

        hboxLayout->addWidget(PresetSavePushButton);

        PresetDeletePushButton = new QPushButton(SettingsTabPage);
        PresetDeletePushButton->setObjectName(QString::fromUtf8("PresetDeletePushButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/remove1.png"), QSize(), QIcon::Normal, QIcon::Off);
        PresetDeletePushButton->setIcon(icon2);
        PresetDeletePushButton->setAutoDefault(false);

        hboxLayout->addWidget(PresetDeletePushButton);


        vboxLayout1->addLayout(hboxLayout);

        ParametersGroupBox = new QGroupBox(SettingsTabPage);
        ParametersGroupBox->setObjectName(QString::fromUtf8("ParametersGroupBox"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        ParametersGroupBox->setFont(font);
        ParametersGroupBox->setFlat(true);
        gridLayout = new QGridLayout(ParametersGroupBox);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(8, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem, 0, 0, 1, 5);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setSpacing(4);
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        ServerPrefixTextLabel = new QLabel(ParametersGroupBox);
        ServerPrefixTextLabel->setObjectName(QString::fromUtf8("ServerPrefixTextLabel"));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        ServerPrefixTextLabel->setFont(font1);
        ServerPrefixTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(ServerPrefixTextLabel);

        ServerPrefixComboBox = new QComboBox(ParametersGroupBox);
        ServerPrefixComboBox->setObjectName(QString::fromUtf8("ServerPrefixComboBox"));
        sizePolicy.setHeightForWidth(ServerPrefixComboBox->sizePolicy().hasHeightForWidth());
        ServerPrefixComboBox->setSizePolicy(sizePolicy);
        ServerPrefixComboBox->setFont(font1);
        ServerPrefixComboBox->setEditable(true);

        hboxLayout1->addWidget(ServerPrefixComboBox);

        ServerNameTextLabel = new QLabel(ParametersGroupBox);
        ServerNameTextLabel->setObjectName(QString::fromUtf8("ServerNameTextLabel"));
        ServerNameTextLabel->setFont(font1);
        ServerNameTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ServerNameTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(ServerNameTextLabel);

        ServerNameComboBox = new QComboBox(ParametersGroupBox);
        ServerNameComboBox->setObjectName(QString::fromUtf8("ServerNameComboBox"));
        ServerNameComboBox->setFont(font1);
        ServerNameComboBox->setEditable(true);

        hboxLayout1->addWidget(ServerNameComboBox);

        DriverTextLabel = new QLabel(ParametersGroupBox);
        DriverTextLabel->setObjectName(QString::fromUtf8("DriverTextLabel"));
        DriverTextLabel->setFont(font1);
        DriverTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DriverTextLabel->setWordWrap(false);

        hboxLayout1->addWidget(DriverTextLabel);

        DriverComboBox = new QComboBox(ParametersGroupBox);
        DriverComboBox->setObjectName(QString::fromUtf8("DriverComboBox"));
        DriverComboBox->setFont(font1);
        DriverComboBox->setEditable(false);

        hboxLayout1->addWidget(DriverComboBox);


        gridLayout->addLayout(hboxLayout1, 1, 0, 1, 5);

        spacerItem1 = new QSpacerItem(8, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 0, 1, 5);

        vboxLayout2 = new QVBoxLayout();
        vboxLayout2->setSpacing(4);
        vboxLayout2->setContentsMargins(0, 0, 0, 0);
        vboxLayout2->setObjectName(QString::fromUtf8("vboxLayout2"));
        RealtimeCheckBox = new QCheckBox(ParametersGroupBox);
        RealtimeCheckBox->setObjectName(QString::fromUtf8("RealtimeCheckBox"));
        RealtimeCheckBox->setFont(font1);

        vboxLayout2->addWidget(RealtimeCheckBox);

        NoMemLockCheckBox = new QCheckBox(ParametersGroupBox);
        NoMemLockCheckBox->setObjectName(QString::fromUtf8("NoMemLockCheckBox"));
        NoMemLockCheckBox->setFont(font1);

        vboxLayout2->addWidget(NoMemLockCheckBox);

        UnlockMemCheckBox = new QCheckBox(ParametersGroupBox);
        UnlockMemCheckBox->setObjectName(QString::fromUtf8("UnlockMemCheckBox"));
        UnlockMemCheckBox->setFont(font1);

        vboxLayout2->addWidget(UnlockMemCheckBox);

        SoftModeCheckBox = new QCheckBox(ParametersGroupBox);
        SoftModeCheckBox->setObjectName(QString::fromUtf8("SoftModeCheckBox"));
        SoftModeCheckBox->setFont(font1);

        vboxLayout2->addWidget(SoftModeCheckBox);

        MonitorCheckBox = new QCheckBox(ParametersGroupBox);
        MonitorCheckBox->setObjectName(QString::fromUtf8("MonitorCheckBox"));
        MonitorCheckBox->setFont(font1);

        vboxLayout2->addWidget(MonitorCheckBox);

        ShortsCheckBox = new QCheckBox(ParametersGroupBox);
        ShortsCheckBox->setObjectName(QString::fromUtf8("ShortsCheckBox"));
        ShortsCheckBox->setFont(font1);

        vboxLayout2->addWidget(ShortsCheckBox);

        HWMonCheckBox = new QCheckBox(ParametersGroupBox);
        HWMonCheckBox->setObjectName(QString::fromUtf8("HWMonCheckBox"));
        HWMonCheckBox->setFont(font1);

        vboxLayout2->addWidget(HWMonCheckBox);

        HWMeterCheckBox = new QCheckBox(ParametersGroupBox);
        HWMeterCheckBox->setObjectName(QString::fromUtf8("HWMeterCheckBox"));
        HWMeterCheckBox->setFont(font1);

        vboxLayout2->addWidget(HWMeterCheckBox);

        IgnoreHWCheckBox = new QCheckBox(ParametersGroupBox);
        IgnoreHWCheckBox->setObjectName(QString::fromUtf8("IgnoreHWCheckBox"));
        IgnoreHWCheckBox->setFont(font1);

        vboxLayout2->addWidget(IgnoreHWCheckBox);

        VerboseCheckBox = new QCheckBox(ParametersGroupBox);
        VerboseCheckBox->setObjectName(QString::fromUtf8("VerboseCheckBox"));
        VerboseCheckBox->setFont(font1);

        vboxLayout2->addWidget(VerboseCheckBox);


        gridLayout->addLayout(vboxLayout2, 3, 0, 1, 1);

        spacerItem2 = new QSpacerItem(4, 8, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem2, 3, 1, 1, 1);

        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(4);
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        PeriodsSpinBox = new QSpinBox(ParametersGroupBox);
        PeriodsSpinBox->setObjectName(QString::fromUtf8("PeriodsSpinBox"));
        PeriodsSpinBox->setFont(font1);
        PeriodsSpinBox->setMinimum(2);
        PeriodsSpinBox->setMaximum(999);

        gridLayout1->addWidget(PeriodsSpinBox, 3, 1, 1, 1);

        PriorityTextLabel = new QLabel(ParametersGroupBox);
        PriorityTextLabel->setObjectName(QString::fromUtf8("PriorityTextLabel"));
        PriorityTextLabel->setFont(font1);
        PriorityTextLabel->setFrameShape(QFrame::NoFrame);
        PriorityTextLabel->setFrameShadow(QFrame::Plain);
        PriorityTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PriorityTextLabel->setWordWrap(false);

        gridLayout1->addWidget(PriorityTextLabel, 0, 0, 1, 1);

        FramesTextLabel = new QLabel(ParametersGroupBox);
        FramesTextLabel->setObjectName(QString::fromUtf8("FramesTextLabel"));
        FramesTextLabel->setFont(font1);
        FramesTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        FramesTextLabel->setWordWrap(false);

        gridLayout1->addWidget(FramesTextLabel, 1, 0, 1, 1);

        FramesComboBox = new QComboBox(ParametersGroupBox);
        FramesComboBox->setObjectName(QString::fromUtf8("FramesComboBox"));
        FramesComboBox->setFont(font1);
        FramesComboBox->setEditable(true);

        gridLayout1->addWidget(FramesComboBox, 1, 1, 1, 1);

        PortMaxTextLabel = new QLabel(ParametersGroupBox);
        PortMaxTextLabel->setObjectName(QString::fromUtf8("PortMaxTextLabel"));
        PortMaxTextLabel->setFont(font1);
        PortMaxTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PortMaxTextLabel->setWordWrap(false);

        gridLayout1->addWidget(PortMaxTextLabel, 7, 0, 1, 1);

        ChanTextLabel = new QLabel(ParametersGroupBox);
        ChanTextLabel->setObjectName(QString::fromUtf8("ChanTextLabel"));
        ChanTextLabel->setFont(font1);
        ChanTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ChanTextLabel->setWordWrap(false);
        ChanTextLabel->setMargin(0);

        gridLayout1->addWidget(ChanTextLabel, 6, 0, 1, 1);

        WaitComboBox = new QComboBox(ParametersGroupBox);
        WaitComboBox->setObjectName(QString::fromUtf8("WaitComboBox"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Serif"));
        font2.setBold(false);
        font2.setWeight(50);
        WaitComboBox->setFont(font2);
        WaitComboBox->setAcceptDrops(false);
        WaitComboBox->setEditable(true);

        gridLayout1->addWidget(WaitComboBox, 5, 1, 1, 1);

        SampleRateComboBox = new QComboBox(ParametersGroupBox);
        SampleRateComboBox->setObjectName(QString::fromUtf8("SampleRateComboBox"));
        SampleRateComboBox->setFont(font1);
        SampleRateComboBox->setEditable(true);

        gridLayout1->addWidget(SampleRateComboBox, 2, 1, 1, 1);

        PrioritySpinBox = new QSpinBox(ParametersGroupBox);
        PrioritySpinBox->setObjectName(QString::fromUtf8("PrioritySpinBox"));
        PrioritySpinBox->setFont(font1);
        PrioritySpinBox->setMaximum(89);

        gridLayout1->addWidget(PrioritySpinBox, 0, 1, 1, 1);

        WordLengthTextLabel = new QLabel(ParametersGroupBox);
        WordLengthTextLabel->setObjectName(QString::fromUtf8("WordLengthTextLabel"));
        WordLengthTextLabel->setFont(font1);
        WordLengthTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WordLengthTextLabel->setWordWrap(false);

        gridLayout1->addWidget(WordLengthTextLabel, 4, 0, 1, 1);

        PeriodsTextLabel = new QLabel(ParametersGroupBox);
        PeriodsTextLabel->setObjectName(QString::fromUtf8("PeriodsTextLabel"));
        PeriodsTextLabel->setFont(font1);
        PeriodsTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        PeriodsTextLabel->setWordWrap(false);

        gridLayout1->addWidget(PeriodsTextLabel, 3, 0, 1, 1);

        WordLengthComboBox = new QComboBox(ParametersGroupBox);
        WordLengthComboBox->setObjectName(QString::fromUtf8("WordLengthComboBox"));
        WordLengthComboBox->setFont(font1);
        WordLengthComboBox->setAcceptDrops(false);
        WordLengthComboBox->setEditable(true);

        gridLayout1->addWidget(WordLengthComboBox, 4, 1, 1, 1);

        PortMaxComboBox = new QComboBox(ParametersGroupBox);
        PortMaxComboBox->setObjectName(QString::fromUtf8("PortMaxComboBox"));
        PortMaxComboBox->setMinimumSize(QSize(60, 0));
        PortMaxComboBox->setFont(font1);
        PortMaxComboBox->setEditable(true);

        gridLayout1->addWidget(PortMaxComboBox, 7, 1, 1, 1);

        WaitTextLabel = new QLabel(ParametersGroupBox);
        WaitTextLabel->setObjectName(QString::fromUtf8("WaitTextLabel"));
        WaitTextLabel->setFont(font1);
        WaitTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        WaitTextLabel->setWordWrap(false);

        gridLayout1->addWidget(WaitTextLabel, 5, 0, 1, 1);

        SampleRateTextLabel = new QLabel(ParametersGroupBox);
        SampleRateTextLabel->setObjectName(QString::fromUtf8("SampleRateTextLabel"));
        SampleRateTextLabel->setFont(font1);
        SampleRateTextLabel->setFrameShape(QFrame::NoFrame);
        SampleRateTextLabel->setFrameShadow(QFrame::Plain);
        SampleRateTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        SampleRateTextLabel->setWordWrap(false);

        gridLayout1->addWidget(SampleRateTextLabel, 2, 0, 1, 1);

        ChanSpinBox = new QSpinBox(ParametersGroupBox);
        ChanSpinBox->setObjectName(QString::fromUtf8("ChanSpinBox"));
        ChanSpinBox->setFont(font1);
        ChanSpinBox->setMaximum(999);

        gridLayout1->addWidget(ChanSpinBox, 6, 1, 1, 1);

        TimeoutTextLabel = new QLabel(ParametersGroupBox);
        TimeoutTextLabel->setObjectName(QString::fromUtf8("TimeoutTextLabel"));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        TimeoutTextLabel->setFont(font3);
        TimeoutTextLabel->setFrameShape(QFrame::NoFrame);
        TimeoutTextLabel->setFrameShadow(QFrame::Plain);
        TimeoutTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TimeoutTextLabel->setWordWrap(false);

        gridLayout1->addWidget(TimeoutTextLabel, 8, 0, 1, 1);

        TimeoutComboBox = new QComboBox(ParametersGroupBox);
        TimeoutComboBox->setObjectName(QString::fromUtf8("TimeoutComboBox"));
        TimeoutComboBox->setFont(font1);
        TimeoutComboBox->setEditable(true);

        gridLayout1->addWidget(TimeoutComboBox, 8, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 3, 2, 1, 1);

        spacerItem3 = new QSpacerItem(4, 8, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem3, 3, 3, 1, 1);

        gridLayout2 = new QGridLayout();
        gridLayout2->setSpacing(4);
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        InterfaceTextLabel = new QLabel(ParametersGroupBox);
        InterfaceTextLabel->setObjectName(QString::fromUtf8("InterfaceTextLabel"));
        InterfaceTextLabel->setFont(font1);
        InterfaceTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        InterfaceTextLabel->setWordWrap(false);

        gridLayout2->addWidget(InterfaceTextLabel, 0, 0, 1, 1);

        InterfaceComboBox = new QComboBox(ParametersGroupBox);
        InterfaceComboBox->setObjectName(QString::fromUtf8("InterfaceComboBox"));
        InterfaceComboBox->setFont(font1);
        InterfaceComboBox->setEditable(true);

        gridLayout2->addWidget(InterfaceComboBox, 0, 1, 1, 2);

        InterfaceToolButton = new QToolButton(ParametersGroupBox);
        InterfaceToolButton->setObjectName(QString::fromUtf8("InterfaceToolButton"));
        InterfaceToolButton->setMinimumSize(QSize(22, 22));
        InterfaceToolButton->setMaximumSize(QSize(24, 24));
        InterfaceToolButton->setFont(font1);
        InterfaceToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout2->addWidget(InterfaceToolButton, 0, 3, 1, 1);

        DitherTextLabel = new QLabel(ParametersGroupBox);
        DitherTextLabel->setObjectName(QString::fromUtf8("DitherTextLabel"));
        DitherTextLabel->setFont(font1);
        DitherTextLabel->setFrameShape(QFrame::NoFrame);
        DitherTextLabel->setFrameShadow(QFrame::Plain);
        DitherTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        DitherTextLabel->setWordWrap(false);

        gridLayout2->addWidget(DitherTextLabel, 1, 0, 1, 1);

        DitherComboBox = new QComboBox(ParametersGroupBox);
        DitherComboBox->setObjectName(QString::fromUtf8("DitherComboBox"));
        DitherComboBox->setFont(font1);

        gridLayout2->addWidget(DitherComboBox, 1, 1, 1, 2);

        AudioTextLabel = new QLabel(ParametersGroupBox);
        AudioTextLabel->setObjectName(QString::fromUtf8("AudioTextLabel"));
        AudioTextLabel->setFont(font1);
        AudioTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        AudioTextLabel->setWordWrap(false);

        gridLayout2->addWidget(AudioTextLabel, 2, 0, 1, 1);

        AudioComboBox = new QComboBox(ParametersGroupBox);
        AudioComboBox->setObjectName(QString::fromUtf8("AudioComboBox"));
        AudioComboBox->setFont(font1);

        gridLayout2->addWidget(AudioComboBox, 2, 1, 1, 3);

        InDeviceTextLabel = new QLabel(ParametersGroupBox);
        InDeviceTextLabel->setObjectName(QString::fromUtf8("InDeviceTextLabel"));
        InDeviceTextLabel->setFont(font1);
        InDeviceTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        InDeviceTextLabel->setWordWrap(false);

        gridLayout2->addWidget(InDeviceTextLabel, 3, 0, 1, 1);

        InDeviceComboBox = new QComboBox(ParametersGroupBox);
        InDeviceComboBox->setObjectName(QString::fromUtf8("InDeviceComboBox"));
        InDeviceComboBox->setFont(font1);
        InDeviceComboBox->setEditable(true);

        gridLayout2->addWidget(InDeviceComboBox, 3, 1, 1, 2);

        InDeviceToolButton = new QToolButton(ParametersGroupBox);
        InDeviceToolButton->setObjectName(QString::fromUtf8("InDeviceToolButton"));
        InDeviceToolButton->setMinimumSize(QSize(22, 22));
        InDeviceToolButton->setMaximumSize(QSize(24, 24));
        InDeviceToolButton->setFont(font1);
        InDeviceToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout2->addWidget(InDeviceToolButton, 3, 3, 1, 1);

        OutDeviceTextLabel = new QLabel(ParametersGroupBox);
        OutDeviceTextLabel->setObjectName(QString::fromUtf8("OutDeviceTextLabel"));
        OutDeviceTextLabel->setFont(font1);
        OutDeviceTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        OutDeviceTextLabel->setWordWrap(false);

        gridLayout2->addWidget(OutDeviceTextLabel, 4, 0, 1, 1);

        OutDeviceComboBox = new QComboBox(ParametersGroupBox);
        OutDeviceComboBox->setObjectName(QString::fromUtf8("OutDeviceComboBox"));
        OutDeviceComboBox->setFont(font1);
        OutDeviceComboBox->setEditable(true);

        gridLayout2->addWidget(OutDeviceComboBox, 4, 1, 1, 2);

        OutDeviceToolButton = new QToolButton(ParametersGroupBox);
        OutDeviceToolButton->setObjectName(QString::fromUtf8("OutDeviceToolButton"));
        OutDeviceToolButton->setMinimumSize(QSize(22, 22));
        OutDeviceToolButton->setMaximumSize(QSize(24, 24));
        OutDeviceToolButton->setFont(font1);
        OutDeviceToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout2->addWidget(OutDeviceToolButton, 4, 3, 1, 1);

        InOutChannelsTextLabel = new QLabel(ParametersGroupBox);
        InOutChannelsTextLabel->setObjectName(QString::fromUtf8("InOutChannelsTextLabel"));
        InOutChannelsTextLabel->setFont(font1);
        InOutChannelsTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        InOutChannelsTextLabel->setWordWrap(false);

        gridLayout2->addWidget(InOutChannelsTextLabel, 5, 0, 1, 1);

        InChannelsSpinBox = new QSpinBox(ParametersGroupBox);
        InChannelsSpinBox->setObjectName(QString::fromUtf8("InChannelsSpinBox"));
        InChannelsSpinBox->setFont(font1);
        InChannelsSpinBox->setMaximum(999);

        gridLayout2->addWidget(InChannelsSpinBox, 5, 1, 1, 1);

        OutChannelsSpinBox = new QSpinBox(ParametersGroupBox);
        OutChannelsSpinBox->setObjectName(QString::fromUtf8("OutChannelsSpinBox"));
        OutChannelsSpinBox->setFont(font1);
        OutChannelsSpinBox->setMaximum(999);

        gridLayout2->addWidget(OutChannelsSpinBox, 5, 2, 1, 2);

        InOutLatencyTextLabel = new QLabel(ParametersGroupBox);
        InOutLatencyTextLabel->setObjectName(QString::fromUtf8("InOutLatencyTextLabel"));
        InOutLatencyTextLabel->setFont(font1);
        InOutLatencyTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        InOutLatencyTextLabel->setWordWrap(false);

        gridLayout2->addWidget(InOutLatencyTextLabel, 6, 0, 1, 1);

        InLatencySpinBox = new QSpinBox(ParametersGroupBox);
        InLatencySpinBox->setObjectName(QString::fromUtf8("InLatencySpinBox"));
        InLatencySpinBox->setFont(font1);
        InLatencySpinBox->setMaximum(9999999);

        gridLayout2->addWidget(InLatencySpinBox, 6, 1, 1, 1);

        OutLatencySpinBox = new QSpinBox(ParametersGroupBox);
        OutLatencySpinBox->setObjectName(QString::fromUtf8("OutLatencySpinBox"));
        OutLatencySpinBox->setFont(font1);
        OutLatencySpinBox->setMaximum(9999999);

        gridLayout2->addWidget(OutLatencySpinBox, 6, 2, 1, 2);

        MidiDriverTextLabel = new QLabel(ParametersGroupBox);
        MidiDriverTextLabel->setObjectName(QString::fromUtf8("MidiDriverTextLabel"));
        MidiDriverTextLabel->setFont(font1);
        MidiDriverTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        MidiDriverTextLabel->setWordWrap(false);

        gridLayout2->addWidget(MidiDriverTextLabel, 7, 1, 1, 1);

        MidiDriverComboBox = new QComboBox(ParametersGroupBox);
        MidiDriverComboBox->setObjectName(QString::fromUtf8("MidiDriverComboBox"));
        MidiDriverComboBox->setFont(font1);
        MidiDriverComboBox->setEditable(false);

        gridLayout2->addWidget(MidiDriverComboBox, 7, 2, 1, 2);


        gridLayout->addLayout(gridLayout2, 3, 4, 1, 1);

        spacerItem4 = new QSpacerItem(8, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem4, 4, 0, 1, 5);

        hboxLayout2 = new QHBoxLayout();
        hboxLayout2->setSpacing(4);
        hboxLayout2->setContentsMargins(0, 0, 0, 0);
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        ServerSuffixTextLabel = new QLabel(ParametersGroupBox);
        ServerSuffixTextLabel->setObjectName(QString::fromUtf8("ServerSuffixTextLabel"));
        ServerSuffixTextLabel->setFont(font1);
        ServerSuffixTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(ServerSuffixTextLabel);

        ServerSuffixComboBox = new QComboBox(ParametersGroupBox);
        ServerSuffixComboBox->setObjectName(QString::fromUtf8("ServerSuffixComboBox"));
        sizePolicy.setHeightForWidth(ServerSuffixComboBox->sizePolicy().hasHeightForWidth());
        ServerSuffixComboBox->setSizePolicy(sizePolicy);
        ServerSuffixComboBox->setFont(font1);
        ServerSuffixComboBox->setEditable(true);

        hboxLayout2->addWidget(ServerSuffixComboBox);

        StartDelayTextLabel = new QLabel(ParametersGroupBox);
        StartDelayTextLabel->setObjectName(QString::fromUtf8("StartDelayTextLabel"));
        StartDelayTextLabel->setFont(font1);
        StartDelayTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        StartDelayTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(StartDelayTextLabel);

        StartDelaySpinBox = new QSpinBox(ParametersGroupBox);
        StartDelaySpinBox->setObjectName(QString::fromUtf8("StartDelaySpinBox"));
        StartDelaySpinBox->setFont(font1);
        StartDelaySpinBox->setMinimum(0);
        StartDelaySpinBox->setMaximum(999);

        hboxLayout2->addWidget(StartDelaySpinBox);

        LatencyTextLabel = new QLabel(ParametersGroupBox);
        LatencyTextLabel->setObjectName(QString::fromUtf8("LatencyTextLabel"));
        LatencyTextLabel->setFont(font1);
        LatencyTextLabel->setFrameShape(QFrame::NoFrame);
        LatencyTextLabel->setFrameShadow(QFrame::Plain);
        LatencyTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        LatencyTextLabel->setWordWrap(false);

        hboxLayout2->addWidget(LatencyTextLabel);

        LatencyTextValue = new QLabel(ParametersGroupBox);
        LatencyTextValue->setObjectName(QString::fromUtf8("LatencyTextValue"));
        LatencyTextValue->setMinimumSize(QSize(72, 0));
        LatencyTextValue->setFont(font1);
        LatencyTextValue->setFrameShape(QFrame::StyledPanel);
        LatencyTextValue->setFrameShadow(QFrame::Sunken);
        LatencyTextValue->setAlignment(Qt::AlignCenter);
        LatencyTextValue->setWordWrap(false);

        hboxLayout2->addWidget(LatencyTextValue);


        gridLayout->addLayout(hboxLayout2, 5, 0, 1, 5);

        spacerItem5 = new QSpacerItem(8, 4, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem5, 6, 0, 1, 5);


        vboxLayout1->addWidget(ParametersGroupBox);

        SetupTabWidget->addTab(SettingsTabPage, QString());
        OptionsTabPage = new QWidget();
        OptionsTabPage->setObjectName(QString::fromUtf8("OptionsTabPage"));
        vboxLayout3 = new QVBoxLayout(OptionsTabPage);
        vboxLayout3->setSpacing(4);
        vboxLayout3->setContentsMargins(4, 4, 4, 4);
        vboxLayout3->setObjectName(QString::fromUtf8("vboxLayout3"));
        ScriptingGroupBox = new QGroupBox(OptionsTabPage);
        ScriptingGroupBox->setObjectName(QString::fromUtf8("ScriptingGroupBox"));
        ScriptingGroupBox->setFont(font);
        ScriptingGroupBox->setFlat(true);
        gridLayout3 = new QGridLayout(ScriptingGroupBox);
        gridLayout3->setSpacing(4);
        gridLayout3->setContentsMargins(8, 8, 8, 8);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        StartupScriptCheckBox = new QCheckBox(ScriptingGroupBox);
        StartupScriptCheckBox->setObjectName(QString::fromUtf8("StartupScriptCheckBox"));
        StartupScriptCheckBox->setFont(font1);

        gridLayout3->addWidget(StartupScriptCheckBox, 0, 0, 1, 1);

        PostStartupScriptCheckBox = new QCheckBox(ScriptingGroupBox);
        PostStartupScriptCheckBox->setObjectName(QString::fromUtf8("PostStartupScriptCheckBox"));
        PostStartupScriptCheckBox->setFont(font1);

        gridLayout3->addWidget(PostStartupScriptCheckBox, 1, 0, 1, 1);

        ShutdownScriptCheckBox = new QCheckBox(ScriptingGroupBox);
        ShutdownScriptCheckBox->setObjectName(QString::fromUtf8("ShutdownScriptCheckBox"));
        ShutdownScriptCheckBox->setFont(font1);

        gridLayout3->addWidget(ShutdownScriptCheckBox, 2, 0, 1, 1);

        StartupScriptShellComboBox = new QComboBox(ScriptingGroupBox);
        StartupScriptShellComboBox->setObjectName(QString::fromUtf8("StartupScriptShellComboBox"));
        sizePolicy.setHeightForWidth(StartupScriptShellComboBox->sizePolicy().hasHeightForWidth());
        StartupScriptShellComboBox->setSizePolicy(sizePolicy);
        StartupScriptShellComboBox->setFont(font1);
        StartupScriptShellComboBox->setEditable(true);

        gridLayout3->addWidget(StartupScriptShellComboBox, 0, 1, 1, 1);

        StartupScriptSymbolToolButton = new QToolButton(ScriptingGroupBox);
        StartupScriptSymbolToolButton->setObjectName(QString::fromUtf8("StartupScriptSymbolToolButton"));
        StartupScriptSymbolToolButton->setMinimumSize(QSize(22, 22));
        StartupScriptSymbolToolButton->setMaximumSize(QSize(24, 24));
        StartupScriptSymbolToolButton->setFont(font1);
        StartupScriptSymbolToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(StartupScriptSymbolToolButton, 0, 2, 1, 1);

        StartupScriptBrowseToolButton = new QToolButton(ScriptingGroupBox);
        StartupScriptBrowseToolButton->setObjectName(QString::fromUtf8("StartupScriptBrowseToolButton"));
        StartupScriptBrowseToolButton->setMinimumSize(QSize(22, 22));
        StartupScriptBrowseToolButton->setMaximumSize(QSize(24, 24));
        StartupScriptBrowseToolButton->setFont(font1);
        StartupScriptBrowseToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(StartupScriptBrowseToolButton, 0, 3, 1, 1);

        PostStartupScriptShellComboBox = new QComboBox(ScriptingGroupBox);
        PostStartupScriptShellComboBox->setObjectName(QString::fromUtf8("PostStartupScriptShellComboBox"));
        sizePolicy.setHeightForWidth(PostStartupScriptShellComboBox->sizePolicy().hasHeightForWidth());
        PostStartupScriptShellComboBox->setSizePolicy(sizePolicy);
        PostStartupScriptShellComboBox->setFont(font1);
        PostStartupScriptShellComboBox->setEditable(true);

        gridLayout3->addWidget(PostStartupScriptShellComboBox, 1, 1, 1, 1);

        PostStartupScriptSymbolToolButton = new QToolButton(ScriptingGroupBox);
        PostStartupScriptSymbolToolButton->setObjectName(QString::fromUtf8("PostStartupScriptSymbolToolButton"));
        PostStartupScriptSymbolToolButton->setMinimumSize(QSize(22, 22));
        PostStartupScriptSymbolToolButton->setMaximumSize(QSize(24, 24));
        PostStartupScriptSymbolToolButton->setFont(font1);
        PostStartupScriptSymbolToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(PostStartupScriptSymbolToolButton, 1, 2, 1, 1);

        PostStartupScriptBrowseToolButton = new QToolButton(ScriptingGroupBox);
        PostStartupScriptBrowseToolButton->setObjectName(QString::fromUtf8("PostStartupScriptBrowseToolButton"));
        PostStartupScriptBrowseToolButton->setMinimumSize(QSize(22, 22));
        PostStartupScriptBrowseToolButton->setMaximumSize(QSize(24, 24));
        PostStartupScriptBrowseToolButton->setFont(font1);
        PostStartupScriptBrowseToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(PostStartupScriptBrowseToolButton, 1, 3, 1, 1);

        ShutdownScriptSymbolToolButton = new QToolButton(ScriptingGroupBox);
        ShutdownScriptSymbolToolButton->setObjectName(QString::fromUtf8("ShutdownScriptSymbolToolButton"));
        ShutdownScriptSymbolToolButton->setMinimumSize(QSize(22, 22));
        ShutdownScriptSymbolToolButton->setMaximumSize(QSize(24, 24));
        ShutdownScriptSymbolToolButton->setFont(font1);
        ShutdownScriptSymbolToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(ShutdownScriptSymbolToolButton, 2, 2, 1, 1);

        ShutdownScriptBrowseToolButton = new QToolButton(ScriptingGroupBox);
        ShutdownScriptBrowseToolButton->setObjectName(QString::fromUtf8("ShutdownScriptBrowseToolButton"));
        ShutdownScriptBrowseToolButton->setMinimumSize(QSize(22, 22));
        ShutdownScriptBrowseToolButton->setMaximumSize(QSize(24, 24));
        ShutdownScriptBrowseToolButton->setFont(font1);
        ShutdownScriptBrowseToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(ShutdownScriptBrowseToolButton, 2, 3, 1, 1);

        ShutdownScriptShellComboBox = new QComboBox(ScriptingGroupBox);
        ShutdownScriptShellComboBox->setObjectName(QString::fromUtf8("ShutdownScriptShellComboBox"));
        sizePolicy.setHeightForWidth(ShutdownScriptShellComboBox->sizePolicy().hasHeightForWidth());
        ShutdownScriptShellComboBox->setSizePolicy(sizePolicy);
        ShutdownScriptShellComboBox->setFont(font1);
        ShutdownScriptShellComboBox->setEditable(true);

        gridLayout3->addWidget(ShutdownScriptShellComboBox, 2, 1, 1, 1);

        PostShutdownScriptCheckBox = new QCheckBox(ScriptingGroupBox);
        PostShutdownScriptCheckBox->setObjectName(QString::fromUtf8("PostShutdownScriptCheckBox"));
        PostShutdownScriptCheckBox->setFont(font1);

        gridLayout3->addWidget(PostShutdownScriptCheckBox, 3, 0, 1, 1);

        PostShutdownScriptSymbolToolButton = new QToolButton(ScriptingGroupBox);
        PostShutdownScriptSymbolToolButton->setObjectName(QString::fromUtf8("PostShutdownScriptSymbolToolButton"));
        PostShutdownScriptSymbolToolButton->setMinimumSize(QSize(22, 22));
        PostShutdownScriptSymbolToolButton->setMaximumSize(QSize(24, 24));
        PostShutdownScriptSymbolToolButton->setFont(font1);
        PostShutdownScriptSymbolToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(PostShutdownScriptSymbolToolButton, 3, 2, 1, 1);

        PostShutdownScriptBrowseToolButton = new QToolButton(ScriptingGroupBox);
        PostShutdownScriptBrowseToolButton->setObjectName(QString::fromUtf8("PostShutdownScriptBrowseToolButton"));
        PostShutdownScriptBrowseToolButton->setMinimumSize(QSize(22, 22));
        PostShutdownScriptBrowseToolButton->setMaximumSize(QSize(24, 24));
        PostShutdownScriptBrowseToolButton->setFont(font1);
        PostShutdownScriptBrowseToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout3->addWidget(PostShutdownScriptBrowseToolButton, 3, 3, 1, 1);

        PostShutdownScriptShellComboBox = new QComboBox(ScriptingGroupBox);
        PostShutdownScriptShellComboBox->setObjectName(QString::fromUtf8("PostShutdownScriptShellComboBox"));
        sizePolicy.setHeightForWidth(PostShutdownScriptShellComboBox->sizePolicy().hasHeightForWidth());
        PostShutdownScriptShellComboBox->setSizePolicy(sizePolicy);
        PostShutdownScriptShellComboBox->setFont(font1);
        PostShutdownScriptShellComboBox->setEditable(true);

        gridLayout3->addWidget(PostShutdownScriptShellComboBox, 3, 1, 1, 1);


        vboxLayout3->addWidget(ScriptingGroupBox);

        StatisticsGroupBox = new QGroupBox(OptionsTabPage);
        StatisticsGroupBox->setObjectName(QString::fromUtf8("StatisticsGroupBox"));
        StatisticsGroupBox->setFont(font);
        StatisticsGroupBox->setFlat(true);
        gridLayout4 = new QGridLayout(StatisticsGroupBox);
        gridLayout4->setSpacing(4);
        gridLayout4->setContentsMargins(8, 8, 8, 8);
        gridLayout4->setObjectName(QString::fromUtf8("gridLayout4"));
        StdoutCaptureCheckBox = new QCheckBox(StatisticsGroupBox);
        StdoutCaptureCheckBox->setObjectName(QString::fromUtf8("StdoutCaptureCheckBox"));
        StdoutCaptureCheckBox->setFont(font1);

        gridLayout4->addWidget(StdoutCaptureCheckBox, 0, 0, 1, 2);

        XrunRegexTextLabel = new QLabel(StatisticsGroupBox);
        XrunRegexTextLabel->setObjectName(QString::fromUtf8("XrunRegexTextLabel"));
        XrunRegexTextLabel->setFont(font1);
        XrunRegexTextLabel->setWordWrap(false);

        gridLayout4->addWidget(XrunRegexTextLabel, 1, 0, 1, 1);

        XrunRegexComboBox = new QComboBox(StatisticsGroupBox);
        XrunRegexComboBox->setObjectName(QString::fromUtf8("XrunRegexComboBox"));
        sizePolicy.setHeightForWidth(XrunRegexComboBox->sizePolicy().hasHeightForWidth());
        XrunRegexComboBox->setSizePolicy(sizePolicy);
        XrunRegexComboBox->setFont(font1);
        XrunRegexComboBox->setEditable(true);

        gridLayout4->addWidget(XrunRegexComboBox, 1, 1, 1, 1);


        vboxLayout3->addWidget(StatisticsGroupBox);

        ConnectionsGroupBox = new QGroupBox(OptionsTabPage);
        ConnectionsGroupBox->setObjectName(QString::fromUtf8("ConnectionsGroupBox"));
        ConnectionsGroupBox->setFont(font);
        ConnectionsGroupBox->setFlat(true);
        gridLayout5 = new QGridLayout(ConnectionsGroupBox);
        gridLayout5->setSpacing(4);
        gridLayout5->setContentsMargins(4, 4, 4, 4);
        gridLayout5->setObjectName(QString::fromUtf8("gridLayout5"));
        ActivePatchbayCheckBox = new QCheckBox(ConnectionsGroupBox);
        ActivePatchbayCheckBox->setObjectName(QString::fromUtf8("ActivePatchbayCheckBox"));
        ActivePatchbayCheckBox->setFont(font1);

        gridLayout5->addWidget(ActivePatchbayCheckBox, 0, 0, 1, 1);

        ActivePatchbayPathComboBox = new QComboBox(ConnectionsGroupBox);
        ActivePatchbayPathComboBox->setObjectName(QString::fromUtf8("ActivePatchbayPathComboBox"));
        sizePolicy.setHeightForWidth(ActivePatchbayPathComboBox->sizePolicy().hasHeightForWidth());
        ActivePatchbayPathComboBox->setSizePolicy(sizePolicy);
        ActivePatchbayPathComboBox->setFont(font1);
        ActivePatchbayPathComboBox->setEditable(true);

        gridLayout5->addWidget(ActivePatchbayPathComboBox, 0, 1, 1, 3);

        ActivePatchbayPathToolButton = new QToolButton(ConnectionsGroupBox);
        ActivePatchbayPathToolButton->setObjectName(QString::fromUtf8("ActivePatchbayPathToolButton"));
        ActivePatchbayPathToolButton->setMinimumSize(QSize(22, 22));
        ActivePatchbayPathToolButton->setMaximumSize(QSize(24, 24));
        ActivePatchbayPathToolButton->setFont(font1);
        ActivePatchbayPathToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout5->addWidget(ActivePatchbayPathToolButton, 0, 4, 1, 1);

        AutoRefreshCheckBox = new QCheckBox(ConnectionsGroupBox);
        AutoRefreshCheckBox->setObjectName(QString::fromUtf8("AutoRefreshCheckBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(AutoRefreshCheckBox->sizePolicy().hasHeightForWidth());
        AutoRefreshCheckBox->setSizePolicy(sizePolicy1);
        AutoRefreshCheckBox->setFont(font1);

        gridLayout5->addWidget(AutoRefreshCheckBox, 1, 0, 1, 2);

        TimeRefreshComboBox = new QComboBox(ConnectionsGroupBox);
        TimeRefreshComboBox->setObjectName(QString::fromUtf8("TimeRefreshComboBox"));
        sizePolicy1.setHeightForWidth(TimeRefreshComboBox->sizePolicy().hasHeightForWidth());
        TimeRefreshComboBox->setSizePolicy(sizePolicy1);
        TimeRefreshComboBox->setFont(font1);
        TimeRefreshComboBox->setEditable(true);

        gridLayout5->addWidget(TimeRefreshComboBox, 1, 2, 1, 1);

        spacerItem6 = new QSpacerItem(200, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout5->addItem(spacerItem6, 1, 3, 1, 2);


        vboxLayout3->addWidget(ConnectionsGroupBox);

        LoggingGroupBox = new QGroupBox(OptionsTabPage);
        LoggingGroupBox->setObjectName(QString::fromUtf8("LoggingGroupBox"));
        LoggingGroupBox->setFont(font);
        LoggingGroupBox->setFlat(true);
        gridLayout6 = new QGridLayout(LoggingGroupBox);
        gridLayout6->setSpacing(4);
        gridLayout6->setContentsMargins(4, 4, 4, 4);
        gridLayout6->setObjectName(QString::fromUtf8("gridLayout6"));
        MessagesLogCheckBox = new QCheckBox(LoggingGroupBox);
        MessagesLogCheckBox->setObjectName(QString::fromUtf8("MessagesLogCheckBox"));
        MessagesLogCheckBox->setFont(font1);

        gridLayout6->addWidget(MessagesLogCheckBox, 0, 0, 1, 1);

        MessagesLogPathComboBox = new QComboBox(LoggingGroupBox);
        MessagesLogPathComboBox->setObjectName(QString::fromUtf8("MessagesLogPathComboBox"));
        sizePolicy.setHeightForWidth(MessagesLogPathComboBox->sizePolicy().hasHeightForWidth());
        MessagesLogPathComboBox->setSizePolicy(sizePolicy);
        MessagesLogPathComboBox->setFont(font1);
        MessagesLogPathComboBox->setEditable(true);

        gridLayout6->addWidget(MessagesLogPathComboBox, 0, 1, 1, 1);

        MessagesLogPathToolButton = new QToolButton(LoggingGroupBox);
        MessagesLogPathToolButton->setObjectName(QString::fromUtf8("MessagesLogPathToolButton"));
        MessagesLogPathToolButton->setMinimumSize(QSize(22, 22));
        MessagesLogPathToolButton->setMaximumSize(QSize(24, 24));
        MessagesLogPathToolButton->setFont(font1);
        MessagesLogPathToolButton->setFocusPolicy(Qt::TabFocus);

        gridLayout6->addWidget(MessagesLogPathToolButton, 0, 2, 1, 1);


        vboxLayout3->addWidget(LoggingGroupBox);

        spacerItem7 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout3->addItem(spacerItem7);

        SetupTabWidget->addTab(OptionsTabPage, QString());
        DisplayTabPage = new QWidget();
        DisplayTabPage->setObjectName(QString::fromUtf8("DisplayTabPage"));
        vboxLayout4 = new QVBoxLayout(DisplayTabPage);
        vboxLayout4->setSpacing(4);
        vboxLayout4->setContentsMargins(4, 4, 4, 4);
        vboxLayout4->setObjectName(QString::fromUtf8("vboxLayout4"));
        TimeDisplayGroupBox = new QGroupBox(DisplayTabPage);
        TimeDisplayGroupBox->setObjectName(QString::fromUtf8("TimeDisplayGroupBox"));
        TimeDisplayGroupBox->setFont(font);
        TimeDisplayGroupBox->setFlat(true);
        gridLayout7 = new QGridLayout(TimeDisplayGroupBox);
        gridLayout7->setSpacing(4);
        gridLayout7->setContentsMargins(8, 8, 8, 8);
        gridLayout7->setObjectName(QString::fromUtf8("gridLayout7"));
        hboxLayout3 = new QHBoxLayout();
        hboxLayout3->setSpacing(4);
        hboxLayout3->setContentsMargins(4, 4, 4, 4);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        TimeFormatTextLabel = new QLabel(TimeDisplayGroupBox);
        TimeFormatTextLabel->setObjectName(QString::fromUtf8("TimeFormatTextLabel"));
        TimeFormatTextLabel->setFont(font1);
        TimeFormatTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        TimeFormatTextLabel->setWordWrap(false);

        hboxLayout3->addWidget(TimeFormatTextLabel);

        TimeFormatComboBox = new QComboBox(TimeDisplayGroupBox);
        TimeFormatComboBox->setObjectName(QString::fromUtf8("TimeFormatComboBox"));
        TimeFormatComboBox->setFont(font1);
        TimeFormatComboBox->setEditable(false);

        hboxLayout3->addWidget(TimeFormatComboBox);


        gridLayout7->addLayout(hboxLayout3, 1, 0, 1, 1);

        vboxLayout5 = new QVBoxLayout();
        vboxLayout5->setSpacing(4);
        vboxLayout5->setContentsMargins(4, 4, 4, 4);
        vboxLayout5->setObjectName(QString::fromUtf8("vboxLayout5"));
        TransportTimeRadioButton = new QRadioButton(TimeDisplayGroupBox);
        TransportTimeRadioButton->setObjectName(QString::fromUtf8("TransportTimeRadioButton"));
        TransportTimeRadioButton->setFont(font1);

        vboxLayout5->addWidget(TransportTimeRadioButton);

        TransportBBTRadioButton = new QRadioButton(TimeDisplayGroupBox);
        TransportBBTRadioButton->setObjectName(QString::fromUtf8("TransportBBTRadioButton"));
        TransportBBTRadioButton->setFont(font1);

        vboxLayout5->addWidget(TransportBBTRadioButton);

        ElapsedResetRadioButton = new QRadioButton(TimeDisplayGroupBox);
        ElapsedResetRadioButton->setObjectName(QString::fromUtf8("ElapsedResetRadioButton"));
        ElapsedResetRadioButton->setFont(font1);

        vboxLayout5->addWidget(ElapsedResetRadioButton);

        ElapsedXrunRadioButton = new QRadioButton(TimeDisplayGroupBox);
        ElapsedXrunRadioButton->setObjectName(QString::fromUtf8("ElapsedXrunRadioButton"));
        ElapsedXrunRadioButton->setFont(font1);

        vboxLayout5->addWidget(ElapsedXrunRadioButton);


        gridLayout7->addLayout(vboxLayout5, 0, 0, 1, 1);

        spacerItem8 = new QSpacerItem(24, 8, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem8, 0, 1, 1, 1);

        spacerItem9 = new QSpacerItem(24, 8, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout7->addItem(spacerItem9, 1, 1, 1, 1);

        gridLayout8 = new QGridLayout();
        gridLayout8->setSpacing(4);
        gridLayout8->setContentsMargins(4, 4, 4, 4);
        gridLayout8->setObjectName(QString::fromUtf8("gridLayout8"));
        DisplayFont2TextLabel = new QLabel(TimeDisplayGroupBox);
        DisplayFont2TextLabel->setObjectName(QString::fromUtf8("DisplayFont2TextLabel"));
        DisplayFont2TextLabel->setMinimumSize(QSize(180, 0));
        DisplayFont2TextLabel->setMaximumSize(QSize(260, 32767));
        DisplayFont2TextLabel->setFont(font1);
        DisplayFont2TextLabel->setAutoFillBackground(true);
        DisplayFont2TextLabel->setFrameShape(QFrame::StyledPanel);
        DisplayFont2TextLabel->setFrameShadow(QFrame::Sunken);
        DisplayFont2TextLabel->setAlignment(Qt::AlignCenter);
        DisplayFont2TextLabel->setWordWrap(false);

        gridLayout8->addWidget(DisplayFont2TextLabel, 3, 0, 1, 1);

        DisplayFont1TextLabel = new QLabel(TimeDisplayGroupBox);
        DisplayFont1TextLabel->setObjectName(QString::fromUtf8("DisplayFont1TextLabel"));
        DisplayFont1TextLabel->setMinimumSize(QSize(180, 0));
        DisplayFont1TextLabel->setMaximumSize(QSize(260, 32767));
        DisplayFont1TextLabel->setFont(font1);
        DisplayFont1TextLabel->setAutoFillBackground(true);
        DisplayFont1TextLabel->setFrameShape(QFrame::StyledPanel);
        DisplayFont1TextLabel->setFrameShadow(QFrame::Sunken);
        DisplayFont1TextLabel->setAlignment(Qt::AlignCenter);
        DisplayFont1TextLabel->setWordWrap(false);

        gridLayout8->addWidget(DisplayFont1TextLabel, 1, 0, 1, 1);

        DisplayFont1Label = new QLabel(TimeDisplayGroupBox);
        DisplayFont1Label->setObjectName(QString::fromUtf8("DisplayFont1Label"));
        DisplayFont1Label->setFont(font1);
        DisplayFont1Label->setWordWrap(false);

        gridLayout8->addWidget(DisplayFont1Label, 0, 0, 1, 2);

        DisplayFont2PushButton = new QPushButton(TimeDisplayGroupBox);
        DisplayFont2PushButton->setObjectName(QString::fromUtf8("DisplayFont2PushButton"));
        DisplayFont2PushButton->setFont(font1);
        DisplayFont2PushButton->setAutoDefault(false);

        gridLayout8->addWidget(DisplayFont2PushButton, 3, 1, 1, 1);

        DisplayFont1PushButton = new QPushButton(TimeDisplayGroupBox);
        DisplayFont1PushButton->setObjectName(QString::fromUtf8("DisplayFont1PushButton"));
        DisplayFont1PushButton->setFont(font1);
        DisplayFont1PushButton->setAutoDefault(false);

        gridLayout8->addWidget(DisplayFont1PushButton, 1, 1, 1, 1);

        DisplayFont2Label = new QLabel(TimeDisplayGroupBox);
        DisplayFont2Label->setObjectName(QString::fromUtf8("DisplayFont2Label"));
        DisplayFont2Label->setFont(font1);
        DisplayFont2Label->setWordWrap(false);

        gridLayout8->addWidget(DisplayFont2Label, 2, 0, 1, 2);

        DisplayEffectCheckBox = new QCheckBox(TimeDisplayGroupBox);
        DisplayEffectCheckBox->setObjectName(QString::fromUtf8("DisplayEffectCheckBox"));
        DisplayEffectCheckBox->setFont(font1);

        gridLayout8->addWidget(DisplayEffectCheckBox, 4, 0, 1, 2);

        DisplayBlinkCheckBox = new QCheckBox(TimeDisplayGroupBox);
        DisplayBlinkCheckBox->setObjectName(QString::fromUtf8("DisplayBlinkCheckBox"));
        DisplayBlinkCheckBox->setFont(font1);

        gridLayout8->addWidget(DisplayBlinkCheckBox, 5, 0, 1, 2);


        gridLayout7->addLayout(gridLayout8, 0, 2, 2, 1);


        vboxLayout4->addWidget(TimeDisplayGroupBox);

        MessagesWindowGroupBox = new QGroupBox(DisplayTabPage);
        MessagesWindowGroupBox->setObjectName(QString::fromUtf8("MessagesWindowGroupBox"));
        MessagesWindowGroupBox->setFont(font);
        MessagesWindowGroupBox->setFlat(true);
        hboxLayout4 = new QHBoxLayout(MessagesWindowGroupBox);
        hboxLayout4->setSpacing(4);
        hboxLayout4->setContentsMargins(8, 8, 8, 8);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        MessagesFontTextLabel = new QLabel(MessagesWindowGroupBox);
        MessagesFontTextLabel->setObjectName(QString::fromUtf8("MessagesFontTextLabel"));
        MessagesFontTextLabel->setMinimumSize(QSize(180, 0));
        MessagesFontTextLabel->setMaximumSize(QSize(260, 16777215));
        MessagesFontTextLabel->setFont(font1);
        MessagesFontTextLabel->setAutoFillBackground(true);
        MessagesFontTextLabel->setFrameShape(QFrame::StyledPanel);
        MessagesFontTextLabel->setFrameShadow(QFrame::Sunken);
        MessagesFontTextLabel->setAlignment(Qt::AlignCenter);
        MessagesFontTextLabel->setWordWrap(false);

        hboxLayout4->addWidget(MessagesFontTextLabel);

        MessagesFontPushButton = new QPushButton(MessagesWindowGroupBox);
        MessagesFontPushButton->setObjectName(QString::fromUtf8("MessagesFontPushButton"));
        MessagesFontPushButton->setFont(font1);
        MessagesFontPushButton->setAutoDefault(false);

        hboxLayout4->addWidget(MessagesFontPushButton);

        spacerItem10 = new QSpacerItem(8, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout4->addItem(spacerItem10);

        MessagesLimitCheckBox = new QCheckBox(MessagesWindowGroupBox);
        MessagesLimitCheckBox->setObjectName(QString::fromUtf8("MessagesLimitCheckBox"));
        MessagesLimitCheckBox->setFont(font1);

        hboxLayout4->addWidget(MessagesLimitCheckBox);

        MessagesLimitLinesComboBox = new QComboBox(MessagesWindowGroupBox);
        MessagesLimitLinesComboBox->setObjectName(QString::fromUtf8("MessagesLimitLinesComboBox"));
        MessagesLimitLinesComboBox->setFont(font1);
        MessagesLimitLinesComboBox->setEditable(true);

        hboxLayout4->addWidget(MessagesLimitLinesComboBox);


        vboxLayout4->addWidget(MessagesWindowGroupBox);

        ConnectionsWindowGroupBox = new QGroupBox(DisplayTabPage);
        ConnectionsWindowGroupBox->setObjectName(QString::fromUtf8("ConnectionsWindowGroupBox"));
        ConnectionsWindowGroupBox->setFont(font);
        ConnectionsWindowGroupBox->setFlat(true);
        gridLayout9 = new QGridLayout(ConnectionsWindowGroupBox);
        gridLayout9->setSpacing(4);
        gridLayout9->setContentsMargins(4, 4, 4, 4);
        gridLayout9->setObjectName(QString::fromUtf8("gridLayout9"));
        ConnectionsFontTextLabel = new QLabel(ConnectionsWindowGroupBox);
        ConnectionsFontTextLabel->setObjectName(QString::fromUtf8("ConnectionsFontTextLabel"));
        ConnectionsFontTextLabel->setMinimumSize(QSize(180, 0));
        ConnectionsFontTextLabel->setMaximumSize(QSize(260, 16777215));
        ConnectionsFontTextLabel->setFont(font1);
        ConnectionsFontTextLabel->setAutoFillBackground(true);
        ConnectionsFontTextLabel->setFrameShape(QFrame::StyledPanel);
        ConnectionsFontTextLabel->setFrameShadow(QFrame::Sunken);
        ConnectionsFontTextLabel->setAlignment(Qt::AlignCenter);
        ConnectionsFontTextLabel->setWordWrap(false);

        gridLayout9->addWidget(ConnectionsFontTextLabel, 0, 0, 1, 1);

        ConnectionsFontPushButton = new QPushButton(ConnectionsWindowGroupBox);
        ConnectionsFontPushButton->setObjectName(QString::fromUtf8("ConnectionsFontPushButton"));
        ConnectionsFontPushButton->setFont(font1);
        ConnectionsFontPushButton->setAutoDefault(false);

        gridLayout9->addWidget(ConnectionsFontPushButton, 0, 1, 1, 1);

        spacerItem11 = new QSpacerItem(8, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem11, 0, 2, 1, 1);

        ConnectionsIconSizeTextLabel = new QLabel(ConnectionsWindowGroupBox);
        ConnectionsIconSizeTextLabel->setObjectName(QString::fromUtf8("ConnectionsIconSizeTextLabel"));
        ConnectionsIconSizeTextLabel->setFont(font1);
        ConnectionsIconSizeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ConnectionsIconSizeTextLabel->setWordWrap(false);

        gridLayout9->addWidget(ConnectionsIconSizeTextLabel, 0, 3, 1, 1);

        ConnectionsIconSizeComboBox = new QComboBox(ConnectionsWindowGroupBox);
        ConnectionsIconSizeComboBox->setObjectName(QString::fromUtf8("ConnectionsIconSizeComboBox"));
        ConnectionsIconSizeComboBox->setFont(font1);
        ConnectionsIconSizeComboBox->setEditable(false);

        gridLayout9->addWidget(ConnectionsIconSizeComboBox, 0, 4, 1, 1);

        spacerItem12 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout9->addItem(spacerItem12, 1, 0, 1, 5);

        BezierLinesCheckBox = new QCheckBox(ConnectionsWindowGroupBox);
        BezierLinesCheckBox->setObjectName(QString::fromUtf8("BezierLinesCheckBox"));
        BezierLinesCheckBox->setFont(font1);

        gridLayout9->addWidget(BezierLinesCheckBox, 2, 0, 1, 3);

        AliasesEnabledCheckBox = new QCheckBox(ConnectionsWindowGroupBox);
        AliasesEnabledCheckBox->setObjectName(QString::fromUtf8("AliasesEnabledCheckBox"));
        AliasesEnabledCheckBox->setFont(font1);

        gridLayout9->addWidget(AliasesEnabledCheckBox, 3, 0, 1, 1);

        AliasesEditingCheckBox = new QCheckBox(ConnectionsWindowGroupBox);
        AliasesEditingCheckBox->setObjectName(QString::fromUtf8("AliasesEditingCheckBox"));
        AliasesEditingCheckBox->setFont(font1);

        gridLayout9->addWidget(AliasesEditingCheckBox, 4, 0, 1, 2);

        JackClientPortAliasTextLabel = new QLabel(ConnectionsWindowGroupBox);
        JackClientPortAliasTextLabel->setObjectName(QString::fromUtf8("JackClientPortAliasTextLabel"));
        JackClientPortAliasTextLabel->setFont(font1);
        JackClientPortAliasTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        JackClientPortAliasTextLabel->setWordWrap(false);

        gridLayout9->addWidget(JackClientPortAliasTextLabel, 4, 3, 1, 1);

        JackClientPortAliasComboBox = new QComboBox(ConnectionsWindowGroupBox);
        JackClientPortAliasComboBox->setObjectName(QString::fromUtf8("JackClientPortAliasComboBox"));
        JackClientPortAliasComboBox->setFont(font1);
        JackClientPortAliasComboBox->setEditable(false);

        gridLayout9->addWidget(JackClientPortAliasComboBox, 4, 4, 1, 1);


        vboxLayout4->addWidget(ConnectionsWindowGroupBox);

        spacerItem13 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        vboxLayout4->addItem(spacerItem13);

        SetupTabWidget->addTab(DisplayTabPage, QString());
        MiscTabPage = new QWidget();
        MiscTabPage->setObjectName(QString::fromUtf8("MiscTabPage"));
        vboxLayout6 = new QVBoxLayout(MiscTabPage);
        vboxLayout6->setSpacing(4);
        vboxLayout6->setContentsMargins(4, 4, 4, 4);
        vboxLayout6->setObjectName(QString::fromUtf8("vboxLayout6"));
        OtherGroupBox = new QGroupBox(MiscTabPage);
        OtherGroupBox->setObjectName(QString::fromUtf8("OtherGroupBox"));
        OtherGroupBox->setFont(font);
        OtherGroupBox->setFlat(true);
        gridLayout10 = new QGridLayout(OtherGroupBox);
        gridLayout10->setSpacing(4);
        gridLayout10->setContentsMargins(4, 4, 4, 4);
        gridLayout10->setObjectName(QString::fromUtf8("gridLayout10"));
        vboxLayout7 = new QVBoxLayout();
        vboxLayout7->setSpacing(4);
        vboxLayout7->setContentsMargins(0, 0, 0, 0);
        vboxLayout7->setObjectName(QString::fromUtf8("vboxLayout7"));
        StartJackCheckBox = new QCheckBox(OtherGroupBox);
        StartJackCheckBox->setObjectName(QString::fromUtf8("StartJackCheckBox"));
        StartJackCheckBox->setFont(font1);

        vboxLayout7->addWidget(StartJackCheckBox);

        QueryCloseCheckBox = new QCheckBox(OtherGroupBox);
        QueryCloseCheckBox->setObjectName(QString::fromUtf8("QueryCloseCheckBox"));
        QueryCloseCheckBox->setFont(font1);

        vboxLayout7->addWidget(QueryCloseCheckBox);

        KeepOnTopCheckBox = new QCheckBox(OtherGroupBox);
        KeepOnTopCheckBox->setObjectName(QString::fromUtf8("KeepOnTopCheckBox"));
        KeepOnTopCheckBox->setFont(font3);

        vboxLayout7->addWidget(KeepOnTopCheckBox);

        SystemTrayCheckBox = new QCheckBox(OtherGroupBox);
        SystemTrayCheckBox->setObjectName(QString::fromUtf8("SystemTrayCheckBox"));
        SystemTrayCheckBox->setFont(font1);

        vboxLayout7->addWidget(SystemTrayCheckBox);

        StartMinimizedCheckBox = new QCheckBox(OtherGroupBox);
        StartMinimizedCheckBox->setObjectName(QString::fromUtf8("StartMinimizedCheckBox"));
        StartMinimizedCheckBox->setFont(font1);

        vboxLayout7->addWidget(StartMinimizedCheckBox);

        DelayedSetupCheckBox = new QCheckBox(OtherGroupBox);
        DelayedSetupCheckBox->setObjectName(QString::fromUtf8("DelayedSetupCheckBox"));
        DelayedSetupCheckBox->setFont(font1);

        vboxLayout7->addWidget(DelayedSetupCheckBox);

        SingletonCheckBox = new QCheckBox(OtherGroupBox);
        SingletonCheckBox->setObjectName(QString::fromUtf8("SingletonCheckBox"));
        SingletonCheckBox->setFont(font1);

        vboxLayout7->addWidget(SingletonCheckBox);


        gridLayout10->addLayout(vboxLayout7, 0, 0, 1, 1);

        vboxLayout8 = new QVBoxLayout();
        vboxLayout8->setSpacing(4);
        vboxLayout8->setContentsMargins(0, 0, 0, 0);
        vboxLayout8->setObjectName(QString::fromUtf8("vboxLayout8"));
        ServerConfigCheckBox = new QCheckBox(OtherGroupBox);
        ServerConfigCheckBox->setObjectName(QString::fromUtf8("ServerConfigCheckBox"));
        ServerConfigCheckBox->setFont(font1);

        vboxLayout8->addWidget(ServerConfigCheckBox);

        ServerConfigNameComboBox = new QComboBox(OtherGroupBox);
        ServerConfigNameComboBox->setObjectName(QString::fromUtf8("ServerConfigNameComboBox"));
        ServerConfigNameComboBox->setFont(font1);
        ServerConfigNameComboBox->setEditable(true);

        vboxLayout8->addWidget(ServerConfigNameComboBox);

        ServerConfigTempCheckBox = new QCheckBox(OtherGroupBox);
        ServerConfigTempCheckBox->setObjectName(QString::fromUtf8("ServerConfigTempCheckBox"));
        ServerConfigTempCheckBox->setFont(font1);

        vboxLayout8->addWidget(ServerConfigTempCheckBox);

        QueryShutdownCheckBox = new QCheckBox(OtherGroupBox);
        QueryShutdownCheckBox->setObjectName(QString::fromUtf8("QueryShutdownCheckBox"));
        QueryShutdownCheckBox->setFont(font1);

        vboxLayout8->addWidget(QueryShutdownCheckBox);

        AlsaSeqEnabledCheckBox = new QCheckBox(OtherGroupBox);
        AlsaSeqEnabledCheckBox->setObjectName(QString::fromUtf8("AlsaSeqEnabledCheckBox"));
        AlsaSeqEnabledCheckBox->setFont(font1);

        vboxLayout8->addWidget(AlsaSeqEnabledCheckBox);

        DBusEnabledCheckBox = new QCheckBox(OtherGroupBox);
        DBusEnabledCheckBox->setObjectName(QString::fromUtf8("DBusEnabledCheckBox"));
        DBusEnabledCheckBox->setFont(font1);

        vboxLayout8->addWidget(DBusEnabledCheckBox);

        StopJackCheckBox = new QCheckBox(OtherGroupBox);
        StopJackCheckBox->setObjectName(QString::fromUtf8("StopJackCheckBox"));
        StopJackCheckBox->setFont(font1);

        vboxLayout8->addWidget(StopJackCheckBox);

        spacerItem14 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout8->addItem(spacerItem14);


        gridLayout10->addLayout(vboxLayout8, 0, 1, 1, 1);

        spacerItem15 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout10->addItem(spacerItem15, 1, 0, 1, 2);


        vboxLayout6->addWidget(OtherGroupBox);

        ButtonsGroupBox = new QGroupBox(MiscTabPage);
        ButtonsGroupBox->setObjectName(QString::fromUtf8("ButtonsGroupBox"));
        ButtonsGroupBox->setFont(font);
        ButtonsGroupBox->setFlat(true);
        gridLayout11 = new QGridLayout(ButtonsGroupBox);
        gridLayout11->setSpacing(4);
        gridLayout11->setContentsMargins(4, 4, 4, 4);
        gridLayout11->setObjectName(QString::fromUtf8("gridLayout11"));
        vboxLayout9 = new QVBoxLayout();
        vboxLayout9->setSpacing(4);
        vboxLayout9->setContentsMargins(0, 0, 0, 0);
        vboxLayout9->setObjectName(QString::fromUtf8("vboxLayout9"));
        LeftButtonsCheckBox = new QCheckBox(ButtonsGroupBox);
        LeftButtonsCheckBox->setObjectName(QString::fromUtf8("LeftButtonsCheckBox"));
        LeftButtonsCheckBox->setFont(font1);

        vboxLayout9->addWidget(LeftButtonsCheckBox);

        RightButtonsCheckBox = new QCheckBox(ButtonsGroupBox);
        RightButtonsCheckBox->setObjectName(QString::fromUtf8("RightButtonsCheckBox"));
        RightButtonsCheckBox->setFont(font1);

        vboxLayout9->addWidget(RightButtonsCheckBox);

        TransportButtonsCheckBox = new QCheckBox(ButtonsGroupBox);
        TransportButtonsCheckBox->setObjectName(QString::fromUtf8("TransportButtonsCheckBox"));
        TransportButtonsCheckBox->setFont(font1);

        vboxLayout9->addWidget(TransportButtonsCheckBox);

        TextLabelsCheckBox = new QCheckBox(ButtonsGroupBox);
        TextLabelsCheckBox->setObjectName(QString::fromUtf8("TextLabelsCheckBox"));
        TextLabelsCheckBox->setFont(font1);

        vboxLayout9->addWidget(TextLabelsCheckBox);


        gridLayout11->addLayout(vboxLayout9, 0, 0, 1, 1);

        spacerItem16 = new QSpacerItem(8, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout11->addItem(spacerItem16, 1, 0, 1, 2);


        vboxLayout6->addWidget(ButtonsGroupBox);

        DefaultsGroupBox = new QGroupBox(MiscTabPage);
        DefaultsGroupBox->setObjectName(QString::fromUtf8("DefaultsGroupBox"));
        DefaultsGroupBox->setFont(font);
        DefaultsGroupBox->setFlat(true);
        hboxLayout5 = new QHBoxLayout(DefaultsGroupBox);
        hboxLayout5->setSpacing(4);
        hboxLayout5->setContentsMargins(4, 4, 4, 4);
        hboxLayout5->setObjectName(QString::fromUtf8("hboxLayout5"));
        spacerItem17 = new QSpacerItem(8, 8, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout5->addItem(spacerItem17);

        BaseFontSizeTextLabel = new QLabel(DefaultsGroupBox);
        BaseFontSizeTextLabel->setObjectName(QString::fromUtf8("BaseFontSizeTextLabel"));
        BaseFontSizeTextLabel->setFont(font1);
        BaseFontSizeTextLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        hboxLayout5->addWidget(BaseFontSizeTextLabel);

        BaseFontSizeComboBox = new QComboBox(DefaultsGroupBox);
        BaseFontSizeComboBox->setObjectName(QString::fromUtf8("BaseFontSizeComboBox"));
        BaseFontSizeComboBox->setFont(font1);
        BaseFontSizeComboBox->setEditable(true);

        hboxLayout5->addWidget(BaseFontSizeComboBox);


        vboxLayout6->addWidget(DefaultsGroupBox);

        SetupTabWidget->addTab(MiscTabPage, QString());

        vboxLayout->addWidget(SetupTabWidget);

        DialogButtonBox = new QDialogButtonBox(qjackctlSetupForm);
        DialogButtonBox->setObjectName(QString::fromUtf8("DialogButtonBox"));
        DialogButtonBox->setOrientation(Qt::Horizontal);
        DialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(DialogButtonBox);

#ifndef QT_NO_SHORTCUT
        PresetTextLabel->setBuddy(PresetComboBox);
        ServerPrefixTextLabel->setBuddy(ServerPrefixComboBox);
        ServerNameTextLabel->setBuddy(ServerNameComboBox);
        DriverTextLabel->setBuddy(DriverComboBox);
        PriorityTextLabel->setBuddy(PrioritySpinBox);
        FramesTextLabel->setBuddy(FramesComboBox);
        PortMaxTextLabel->setBuddy(PortMaxComboBox);
        ChanTextLabel->setBuddy(ChanSpinBox);
        WordLengthTextLabel->setBuddy(WordLengthComboBox);
        PeriodsTextLabel->setBuddy(PeriodsSpinBox);
        WaitTextLabel->setBuddy(WaitComboBox);
        SampleRateTextLabel->setBuddy(SampleRateComboBox);
        TimeoutTextLabel->setBuddy(TimeoutComboBox);
        InterfaceTextLabel->setBuddy(InterfaceComboBox);
        DitherTextLabel->setBuddy(DitherComboBox);
        AudioTextLabel->setBuddy(AudioComboBox);
        InDeviceTextLabel->setBuddy(InDeviceComboBox);
        OutDeviceTextLabel->setBuddy(OutDeviceComboBox);
        InOutChannelsTextLabel->setBuddy(InChannelsSpinBox);
        InOutLatencyTextLabel->setBuddy(InLatencySpinBox);
        MidiDriverTextLabel->setBuddy(MidiDriverComboBox);
        ServerSuffixTextLabel->setBuddy(ServerSuffixComboBox);
        StartDelayTextLabel->setBuddy(StartDelaySpinBox);
        XrunRegexTextLabel->setBuddy(XrunRegexComboBox);
        TimeFormatTextLabel->setBuddy(TimeFormatComboBox);
        ConnectionsIconSizeTextLabel->setBuddy(ConnectionsIconSizeComboBox);
        JackClientPortAliasTextLabel->setBuddy(JackClientPortAliasComboBox);
        BaseFontSizeTextLabel->setBuddy(BaseFontSizeComboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(SetupTabWidget, PresetComboBox);
        QWidget::setTabOrder(PresetComboBox, PresetSavePushButton);
        QWidget::setTabOrder(PresetSavePushButton, PresetDeletePushButton);
        QWidget::setTabOrder(PresetDeletePushButton, ServerNameComboBox);
        QWidget::setTabOrder(ServerNameComboBox, DriverComboBox);
        QWidget::setTabOrder(DriverComboBox, RealtimeCheckBox);
        QWidget::setTabOrder(RealtimeCheckBox, NoMemLockCheckBox);
        QWidget::setTabOrder(NoMemLockCheckBox, UnlockMemCheckBox);
        QWidget::setTabOrder(UnlockMemCheckBox, SoftModeCheckBox);
        QWidget::setTabOrder(SoftModeCheckBox, MonitorCheckBox);
        QWidget::setTabOrder(MonitorCheckBox, ShortsCheckBox);
        QWidget::setTabOrder(ShortsCheckBox, HWMonCheckBox);
        QWidget::setTabOrder(HWMonCheckBox, HWMeterCheckBox);
        QWidget::setTabOrder(HWMeterCheckBox, IgnoreHWCheckBox);
        QWidget::setTabOrder(IgnoreHWCheckBox, VerboseCheckBox);
        QWidget::setTabOrder(VerboseCheckBox, PrioritySpinBox);
        QWidget::setTabOrder(PrioritySpinBox, FramesComboBox);
        QWidget::setTabOrder(FramesComboBox, SampleRateComboBox);
        QWidget::setTabOrder(SampleRateComboBox, PeriodsSpinBox);
        QWidget::setTabOrder(PeriodsSpinBox, WordLengthComboBox);
        QWidget::setTabOrder(WordLengthComboBox, WaitComboBox);
        QWidget::setTabOrder(WaitComboBox, ChanSpinBox);
        QWidget::setTabOrder(ChanSpinBox, PortMaxComboBox);
        QWidget::setTabOrder(PortMaxComboBox, TimeoutComboBox);
        QWidget::setTabOrder(TimeoutComboBox, InterfaceComboBox);
        QWidget::setTabOrder(InterfaceComboBox, InterfaceToolButton);
        QWidget::setTabOrder(InterfaceToolButton, DitherComboBox);
        QWidget::setTabOrder(DitherComboBox, AudioComboBox);
        QWidget::setTabOrder(AudioComboBox, InDeviceComboBox);
        QWidget::setTabOrder(InDeviceComboBox, InDeviceToolButton);
        QWidget::setTabOrder(InDeviceToolButton, OutDeviceComboBox);
        QWidget::setTabOrder(OutDeviceComboBox, OutDeviceToolButton);
        QWidget::setTabOrder(OutDeviceToolButton, InChannelsSpinBox);
        QWidget::setTabOrder(InChannelsSpinBox, OutChannelsSpinBox);
        QWidget::setTabOrder(OutChannelsSpinBox, InLatencySpinBox);
        QWidget::setTabOrder(InLatencySpinBox, OutLatencySpinBox);
        QWidget::setTabOrder(OutLatencySpinBox, MidiDriverComboBox);
        QWidget::setTabOrder(MidiDriverComboBox, ServerSuffixComboBox);
        QWidget::setTabOrder(ServerSuffixComboBox, StartDelaySpinBox);
        QWidget::setTabOrder(StartDelaySpinBox, StartupScriptCheckBox);
        QWidget::setTabOrder(StartupScriptCheckBox, StartupScriptShellComboBox);
        QWidget::setTabOrder(StartupScriptShellComboBox, StartupScriptSymbolToolButton);
        QWidget::setTabOrder(StartupScriptSymbolToolButton, StartupScriptBrowseToolButton);
        QWidget::setTabOrder(StartupScriptBrowseToolButton, PostStartupScriptCheckBox);
        QWidget::setTabOrder(PostStartupScriptCheckBox, PostStartupScriptShellComboBox);
        QWidget::setTabOrder(PostStartupScriptShellComboBox, PostStartupScriptSymbolToolButton);
        QWidget::setTabOrder(PostStartupScriptSymbolToolButton, PostStartupScriptBrowseToolButton);
        QWidget::setTabOrder(PostStartupScriptBrowseToolButton, ShutdownScriptCheckBox);
        QWidget::setTabOrder(ShutdownScriptCheckBox, ShutdownScriptShellComboBox);
        QWidget::setTabOrder(ShutdownScriptShellComboBox, ShutdownScriptSymbolToolButton);
        QWidget::setTabOrder(ShutdownScriptSymbolToolButton, ShutdownScriptBrowseToolButton);
        QWidget::setTabOrder(ShutdownScriptBrowseToolButton, PostShutdownScriptCheckBox);
        QWidget::setTabOrder(PostShutdownScriptCheckBox, PostShutdownScriptShellComboBox);
        QWidget::setTabOrder(PostShutdownScriptShellComboBox, PostShutdownScriptSymbolToolButton);
        QWidget::setTabOrder(PostShutdownScriptSymbolToolButton, PostShutdownScriptBrowseToolButton);
        QWidget::setTabOrder(PostShutdownScriptBrowseToolButton, StdoutCaptureCheckBox);
        QWidget::setTabOrder(StdoutCaptureCheckBox, XrunRegexComboBox);
        QWidget::setTabOrder(XrunRegexComboBox, ActivePatchbayCheckBox);
        QWidget::setTabOrder(ActivePatchbayCheckBox, ActivePatchbayPathComboBox);
        QWidget::setTabOrder(ActivePatchbayPathComboBox, ActivePatchbayPathToolButton);
        QWidget::setTabOrder(ActivePatchbayPathToolButton, AutoRefreshCheckBox);
        QWidget::setTabOrder(AutoRefreshCheckBox, MessagesLogCheckBox);
        QWidget::setTabOrder(MessagesLogCheckBox, MessagesLogPathComboBox);
        QWidget::setTabOrder(MessagesLogPathComboBox, MessagesLogPathToolButton);
        QWidget::setTabOrder(MessagesLogPathToolButton, TransportTimeRadioButton);
        QWidget::setTabOrder(TransportTimeRadioButton, TransportBBTRadioButton);
        QWidget::setTabOrder(TransportBBTRadioButton, ElapsedResetRadioButton);
        QWidget::setTabOrder(ElapsedResetRadioButton, ElapsedXrunRadioButton);
        QWidget::setTabOrder(ElapsedXrunRadioButton, TimeFormatComboBox);
        QWidget::setTabOrder(TimeFormatComboBox, DisplayFont1PushButton);
        QWidget::setTabOrder(DisplayFont1PushButton, DisplayFont2PushButton);
        QWidget::setTabOrder(DisplayFont2PushButton, DisplayEffectCheckBox);
        QWidget::setTabOrder(DisplayEffectCheckBox, DisplayBlinkCheckBox);
        QWidget::setTabOrder(DisplayBlinkCheckBox, MessagesFontPushButton);
        QWidget::setTabOrder(MessagesFontPushButton, MessagesLimitCheckBox);
        QWidget::setTabOrder(MessagesLimitCheckBox, MessagesLimitLinesComboBox);
        QWidget::setTabOrder(MessagesLimitLinesComboBox, ConnectionsFontPushButton);
        QWidget::setTabOrder(ConnectionsFontPushButton, ConnectionsIconSizeComboBox);
        QWidget::setTabOrder(ConnectionsIconSizeComboBox, BezierLinesCheckBox);
        QWidget::setTabOrder(BezierLinesCheckBox, AliasesEnabledCheckBox);
        QWidget::setTabOrder(AliasesEnabledCheckBox, AliasesEditingCheckBox);
        QWidget::setTabOrder(AliasesEditingCheckBox, StartJackCheckBox);
        QWidget::setTabOrder(StartJackCheckBox, QueryCloseCheckBox);
        QWidget::setTabOrder(QueryCloseCheckBox, KeepOnTopCheckBox);
        QWidget::setTabOrder(KeepOnTopCheckBox, SystemTrayCheckBox);
        QWidget::setTabOrder(SystemTrayCheckBox, StartMinimizedCheckBox);
        QWidget::setTabOrder(StartMinimizedCheckBox, DelayedSetupCheckBox);
        QWidget::setTabOrder(DelayedSetupCheckBox, SingletonCheckBox);
        QWidget::setTabOrder(SingletonCheckBox, ServerConfigCheckBox);
        QWidget::setTabOrder(ServerConfigCheckBox, ServerConfigNameComboBox);
        QWidget::setTabOrder(ServerConfigNameComboBox, ServerConfigTempCheckBox);
        QWidget::setTabOrder(ServerConfigTempCheckBox, QueryShutdownCheckBox);
        QWidget::setTabOrder(QueryShutdownCheckBox, AlsaSeqEnabledCheckBox);
        QWidget::setTabOrder(AlsaSeqEnabledCheckBox, LeftButtonsCheckBox);
        QWidget::setTabOrder(LeftButtonsCheckBox, RightButtonsCheckBox);
        QWidget::setTabOrder(RightButtonsCheckBox, TransportButtonsCheckBox);
        QWidget::setTabOrder(TransportButtonsCheckBox, TextLabelsCheckBox);
        QWidget::setTabOrder(TextLabelsCheckBox, BaseFontSizeComboBox);
        QWidget::setTabOrder(BaseFontSizeComboBox, DialogButtonBox);

        retranslateUi(qjackctlSetupForm);

        SetupTabWidget->setCurrentIndex(0);
        PortMaxComboBox->setCurrentIndex(1);
        TimeoutComboBox->setCurrentIndex(1);
        MessagesLimitLinesComboBox->setCurrentIndex(3);
        ConnectionsIconSizeComboBox->setCurrentIndex(0);
        JackClientPortAliasComboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qjackctlSetupForm);
    } // setupUi

    void retranslateUi(QDialog *qjackctlSetupForm)
    {
        qjackctlSetupForm->setWindowTitle(QApplication::translate("qjackctlSetupForm", "Setup - JACK Audio Connection Kit", 0, QApplication::UnicodeUTF8));
        PresetTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Preset &Name:", 0, QApplication::UnicodeUTF8));
        PresetComboBox->clear();
        PresetComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        PresetComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Settings preset name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PresetSavePushButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Save settings as current preset name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PresetSavePushButton->setText(QApplication::translate("qjackctlSetupForm", "&Save", 0, QApplication::UnicodeUTF8));
        PresetSavePushButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PresetDeletePushButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Delete current settings preset", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PresetDeletePushButton->setText(QApplication::translate("qjackctlSetupForm", "&Delete", 0, QApplication::UnicodeUTF8));
        PresetDeletePushButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+D", 0, QApplication::UnicodeUTF8));
        ParametersGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Parameters", 0, QApplication::UnicodeUTF8));
        ServerPrefixTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Server &Prefix:", 0, QApplication::UnicodeUTF8));
        ServerPrefixComboBox->clear();
        ServerPrefixComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "jackd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "jackdmp", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "jackstart", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ServerPrefixComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Server path (command line prefix)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ServerNameTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Name:", 0, QApplication::UnicodeUTF8));
        ServerNameComboBox->clear();
        ServerNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ServerNameComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The JACK Audio Connection Kit sound server name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DriverTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Driv&er:", 0, QApplication::UnicodeUTF8));
        DriverComboBox->clear();
        DriverComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "dummy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "sun", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "oss", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "alsa", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "portaudio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "coreaudio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "freebob", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "firewire", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "net", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "netone", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        DriverComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The audio backend driver interface to use", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        RealtimeCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Use realtime scheduling", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RealtimeCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Realtime", 0, QApplication::UnicodeUTF8));
        RealtimeCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+R", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        NoMemLockCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Do not attempt to lock memory, even if in realtime mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        NoMemLockCheckBox->setText(QApplication::translate("qjackctlSetupForm", "No Memory Loc&k", 0, QApplication::UnicodeUTF8));
        NoMemLockCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+K", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        UnlockMemCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Unlock memory of common toolkit libraries (GTK+, QT, FLTK, Wine)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        UnlockMemCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Unlock Memory", 0, QApplication::UnicodeUTF8));
        UnlockMemCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SoftModeCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Ignore xruns reported by the backend driver", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SoftModeCheckBox->setText(QApplication::translate("qjackctlSetupForm", "So&ft Mode", 0, QApplication::UnicodeUTF8));
        SoftModeCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+F", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MonitorCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Provide output monitor ports", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MonitorCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Monitor", 0, QApplication::UnicodeUTF8));
        MonitorCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+M", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShortsCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Force 16bit mode instead of failing over 32bit (default)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ShortsCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Force &16bit", 0, QApplication::UnicodeUTF8));
        ShortsCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        HWMonCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Enable hardware monitoring of capture ports", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        HWMonCheckBox->setText(QApplication::translate("qjackctlSetupForm", "H/W M&onitor", 0, QApplication::UnicodeUTF8));
        HWMonCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+O", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        HWMeterCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Enable hardware metering on cards that support it", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        HWMeterCheckBox->setText(QApplication::translate("qjackctlSetupForm", "H/&W Meter", 0, QApplication::UnicodeUTF8));
        HWMeterCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+W", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        IgnoreHWCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Ignore hardware period/buffer size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        IgnoreHWCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Ignore H/W", 0, QApplication::UnicodeUTF8));
        IgnoreHWCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+I", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        VerboseCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to give verbose output on messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        VerboseCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Verbose messages", 0, QApplication::UnicodeUTF8));
        VerboseCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+V", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PeriodsSpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Number of periods in the hardware buffer", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PriorityTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Priorit&y:", 0, QApplication::UnicodeUTF8));
        FramesTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Frames/Period:", 0, QApplication::UnicodeUTF8));
        FramesComboBox->clear();
        FramesComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "2048", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "4096", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        FramesComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Frames per period between process() calls", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PortMaxTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Port Ma&ximum:", 0, QApplication::UnicodeUTF8));
        ChanTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Channels:", 0, QApplication::UnicodeUTF8));
        WaitComboBox->clear();
        WaitComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "21333", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        WaitComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Number of microseconds to wait between engine processes (dummy)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SampleRateComboBox->clear();
        SampleRateComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "22050", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "32000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "44100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "48000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "88200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "96000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "192000", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        SampleRateComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Sample rate in frames per second", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PrioritySpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Scheduler priority when running realtime", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PrioritySpinBox->setSpecialValueText(QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8));
        WordLengthTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Word Length:", 0, QApplication::UnicodeUTF8));
        PeriodsTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Periods/&Buffer:", 0, QApplication::UnicodeUTF8));
        WordLengthComboBox->clear();
        WordLengthComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "64", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        WordLengthComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Word length", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PortMaxComboBox->clear();
        PortMaxComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "1024", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        PortMaxComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Maximum number of ports the JACK server can manage", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        WaitTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Wait (usec):", 0, QApplication::UnicodeUTF8));
        SampleRateTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Sample &Rate:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ChanSpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Maximum number of audio channels to allocate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ChanSpinBox->setSpecialValueText(QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8));
        TimeoutTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Timeout (msec):", 0, QApplication::UnicodeUTF8));
        TimeoutComboBox->clear();
        TimeoutComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "500", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "1000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "2000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "5000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "10000", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        TimeoutComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Set client timeout limit in miliseconds", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        InterfaceTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Interface:", 0, QApplication::UnicodeUTF8));
        InterfaceComboBox->clear();
        InterfaceComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "hw:0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "plughw:0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "/dev/audio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "/dev/dsp", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        InterfaceComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The PCM device name to use", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        InterfaceToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Select PCM device name", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        InterfaceToolButton->setText(QApplication::translate("qjackctlSetupForm", ">", 0, QApplication::UnicodeUTF8));
        DitherTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Dit&her:", 0, QApplication::UnicodeUTF8));
        DitherComboBox->clear();
        DitherComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "None", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "Rectangular", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "Shaped", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "Triangular", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        DitherComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Set dither mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AudioTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Audio:", 0, QApplication::UnicodeUTF8));
        AudioComboBox->clear();
        AudioComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "Duplex", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "Capture Only", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "Playback Only", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        AudioComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Provide either audio capture, playback or both", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        InDeviceTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Input Device:", 0, QApplication::UnicodeUTF8));
        InDeviceComboBox->clear();
        InDeviceComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "hw:0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "plughw:0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "/dev/audio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "/dev/dsp", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        InDeviceComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Alternate input device for capture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        InDeviceToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Select input device for capture", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        InDeviceToolButton->setText(QApplication::translate("qjackctlSetupForm", ">", 0, QApplication::UnicodeUTF8));
        OutDeviceTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Output Device:", 0, QApplication::UnicodeUTF8));
        OutDeviceComboBox->clear();
        OutDeviceComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "hw:0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "plughw:0", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "/dev/audio", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "/dev/dsp", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        OutDeviceComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Alternate output device for playback", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        OutDeviceToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Select output device for playback", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        OutDeviceToolButton->setText(QApplication::translate("qjackctlSetupForm", ">", 0, QApplication::UnicodeUTF8));
        InOutChannelsTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Channels I/O:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        InChannelsSpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Maximum input audio hardware channels to allocate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        InChannelsSpinBox->setSpecialValueText(QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        OutChannelsSpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Maximum output audio hardware channels to allocate", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        OutChannelsSpinBox->setSpecialValueText(QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8));
        InOutLatencyTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Latency I/O:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        InLatencySpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "External input latency (frames)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        InLatencySpinBox->setSpecialValueText(QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        OutLatencySpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "External output latency (frames)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        OutLatencySpinBox->setSpecialValueText(QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8));
        MidiDriverTextLabel->setText(QApplication::translate("qjackctlSetupForm", "MIDI Driv&er:", 0, QApplication::UnicodeUTF8));
        MidiDriverComboBox->clear();
        MidiDriverComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "none", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "raw", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "seq", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        MidiDriverComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The ALSA MIDI backend driver to use", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ServerSuffixTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Server Suffi&x:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ServerSuffixComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Extra driver options (command line suffix)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartDelayTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Start De&lay:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StartDelaySpinBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Time in seconds that client is delayed after server startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartDelaySpinBox->setSuffix(QApplication::translate("qjackctlSetupForm", " secs", 0, QApplication::UnicodeUTF8));
        LatencyTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Latency:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        LatencyTextValue->setToolTip(QApplication::translate("qjackctlSetupForm", "Output latency in milliseconds, calculated based on the period, rate and buffer settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        LatencyTextValue->setText(QApplication::translate("qjackctlSetupForm", "0 msecs", 0, QApplication::UnicodeUTF8));
        SetupTabWidget->setTabText(SetupTabWidget->indexOf(SettingsTabPage), QApplication::translate("qjackctlSetupForm", "Settings", 0, QApplication::UnicodeUTF8));
        ScriptingGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Scripting", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StartupScriptCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to execute a custom shell script before starting up the JACK audio server.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartupScriptCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Execute script on Start&up:", 0, QApplication::UnicodeUTF8));
        StartupScriptCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PostStartupScriptCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to execute a custom shell script after starting up the JACK audio server.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PostStartupScriptCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Execute script after &Startup:", 0, QApplication::UnicodeUTF8));
        PostStartupScriptCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShutdownScriptCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to execute a custom shell script before shuting down the JACK audio server.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ShutdownScriptCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Execute script on Shut&down:", 0, QApplication::UnicodeUTF8));
        ShutdownScriptCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StartupScriptShellComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Command line to be executed before starting up the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        StartupScriptSymbolToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Scripting argument meta-symbols", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartupScriptSymbolToolButton->setText(QApplication::translate("qjackctlSetupForm", ">", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StartupScriptBrowseToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Browse for script to be executed before starting up the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartupScriptBrowseToolButton->setText(QApplication::translate("qjackctlSetupForm", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PostStartupScriptShellComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Command line to be executed after starting up the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PostStartupScriptSymbolToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Scripting argument meta-symbols", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PostStartupScriptSymbolToolButton->setText(QApplication::translate("qjackctlSetupForm", ">", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PostStartupScriptBrowseToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Browse for script to be executed after starting up the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PostStartupScriptBrowseToolButton->setText(QApplication::translate("qjackctlSetupForm", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShutdownScriptSymbolToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Scripting argument meta-symbols", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ShutdownScriptSymbolToolButton->setText(QApplication::translate("qjackctlSetupForm", ">", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShutdownScriptBrowseToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Browse for script to be executed before shutting down the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ShutdownScriptBrowseToolButton->setText(QApplication::translate("qjackctlSetupForm", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ShutdownScriptShellComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Command line to be executed before shutting down the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        PostShutdownScriptCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to execute a custom shell script after shuting down the JACK audio server.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PostShutdownScriptCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Execute script after Shu&tdown:", 0, QApplication::UnicodeUTF8));
        PostShutdownScriptCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+T", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PostShutdownScriptSymbolToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Scripting argument meta-symbols", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PostShutdownScriptSymbolToolButton->setText(QApplication::translate("qjackctlSetupForm", ">", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PostShutdownScriptBrowseToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Browse for script to be executed after shutting down the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        PostShutdownScriptBrowseToolButton->setText(QApplication::translate("qjackctlSetupForm", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        PostShutdownScriptShellComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Command line to be executed after shutting down the JACK audio server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StatisticsGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Statistics", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StdoutCaptureCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to capture standard output (stdout/stderr) into messages window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StdoutCaptureCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Capture standard output", 0, QApplication::UnicodeUTF8));
        StdoutCaptureCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+C", 0, QApplication::UnicodeUTF8));
        XrunRegexTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&XRUN detection regex:", 0, QApplication::UnicodeUTF8));
        XrunRegexComboBox->clear();
        XrunRegexComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "xrun of at least ([0-9|\\.]+) msecs", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        XrunRegexComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Regular expression used to detect XRUNs on server output messages", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ConnectionsGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Connections", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ActivePatchbayCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to activate a patchbay definition for connection persistence profile.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ActivePatchbayCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Activate &Patchbay persistence:", 0, QApplication::UnicodeUTF8));
        ActivePatchbayCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+P", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ActivePatchbayPathComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Patchbay definition file to be activated as connection persistence profile", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ActivePatchbayPathToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Browse for a patchbay definition file to be activated", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ActivePatchbayPathToolButton->setText(QApplication::translate("qjackctlSetupForm", "...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AutoRefreshCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to refresh the connections patchbay automatically", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AutoRefreshCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Auto refresh connections Patchbay, every (secs):", 0, QApplication::UnicodeUTF8));
        AutoRefreshCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+A", 0, QApplication::UnicodeUTF8));
        TimeRefreshComboBox->clear();
        TimeRefreshComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "5", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "20", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "30", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "60", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "120", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        TimeRefreshComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Time in seconds between each auto-refresh cycle", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        LoggingGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Logging", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MessagesLogCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to activate a messages logging to file.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MessagesLogCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Messages log file:", 0, QApplication::UnicodeUTF8));
        MessagesLogCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+M", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MessagesLogPathComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Messages log file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MessagesLogPathToolButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Browse for the messages log file location", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MessagesLogPathToolButton->setText(QApplication::translate("qjackctlSetupForm", "...", 0, QApplication::UnicodeUTF8));
        SetupTabWidget->setTabText(SetupTabWidget->indexOf(OptionsTabPage), QApplication::translate("qjackctlSetupForm", "Options", 0, QApplication::UnicodeUTF8));
        TimeDisplayGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Time Display", 0, QApplication::UnicodeUTF8));
        TimeFormatTextLabel->setText(QApplication::translate("qjackctlSetupForm", "Time F&ormat:", 0, QApplication::UnicodeUTF8));
        TimeFormatComboBox->clear();
        TimeFormatComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "hh:mm:ss", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "hh:mm:ss.d", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "hh:mm:ss.dd", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "hh:mm:ss.ddd", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        TimeFormatComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The general time format on display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TransportTimeRadioButton->setText(QApplication::translate("qjackctlSetupForm", "Transport &Time Code", 0, QApplication::UnicodeUTF8));
        TransportTimeRadioButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+T", 0, QApplication::UnicodeUTF8));
        TransportBBTRadioButton->setText(QApplication::translate("qjackctlSetupForm", "Transport &BBT (bar:beat.ticks)", 0, QApplication::UnicodeUTF8));
        TransportBBTRadioButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+B", 0, QApplication::UnicodeUTF8));
        ElapsedResetRadioButton->setText(QApplication::translate("qjackctlSetupForm", "Elapsed time since last &Reset", 0, QApplication::UnicodeUTF8));
        ElapsedResetRadioButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+R", 0, QApplication::UnicodeUTF8));
        ElapsedXrunRadioButton->setText(QApplication::translate("qjackctlSetupForm", "Elapsed time since last &XRUN", 0, QApplication::UnicodeUTF8));
        ElapsedXrunRadioButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+X", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DisplayFont2TextLabel->setToolTip(QApplication::translate("qjackctlSetupForm", "Sample front panel normal display font", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        DisplayFont1TextLabel->setToolTip(QApplication::translate("qjackctlSetupForm", "Sample big time display font", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DisplayFont1Label->setText(QApplication::translate("qjackctlSetupForm", "Big Time display:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DisplayFont2PushButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Select font for front panel normal display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DisplayFont2PushButton->setText(QApplication::translate("qjackctlSetupForm", "&Font...", 0, QApplication::UnicodeUTF8));
        DisplayFont2PushButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+F", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DisplayFont1PushButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Select font for big time display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DisplayFont1PushButton->setText(QApplication::translate("qjackctlSetupForm", "&Font...", 0, QApplication::UnicodeUTF8));
        DisplayFont1PushButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+F", 0, QApplication::UnicodeUTF8));
        DisplayFont2Label->setText(QApplication::translate("qjackctlSetupForm", "Normal display:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DisplayEffectCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to enable a shiny glass light effect on the main display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DisplayEffectCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Display shiny glass light effect", 0, QApplication::UnicodeUTF8));
        DisplayEffectCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DisplayBlinkCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to enable blinking (flashing) of the server mode (RT) indicator", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DisplayBlinkCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Blin&k server mode indicator", 0, QApplication::UnicodeUTF8));
        DisplayBlinkCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+K", 0, QApplication::UnicodeUTF8));
        MessagesWindowGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Messages Window", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MessagesFontTextLabel->setToolTip(QApplication::translate("qjackctlSetupForm", "Sample messages text font display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        MessagesFontPushButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Select font for the messages text display", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MessagesFontPushButton->setText(QApplication::translate("qjackctlSetupForm", "&Font...", 0, QApplication::UnicodeUTF8));
        MessagesFontPushButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+F", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        MessagesLimitCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to keep a maximum number of lines in the messages window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        MessagesLimitCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Messages limit:", 0, QApplication::UnicodeUTF8));
        MessagesLimitCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+M", 0, QApplication::UnicodeUTF8));
        MessagesLimitLinesComboBox->clear();
        MessagesLimitLinesComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "100", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "250", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "500", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "1000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "2500", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "5000", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        MessagesLimitLinesComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The maximum number of message lines to keep in view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ConnectionsWindowGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Connections Window", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ConnectionsFontTextLabel->setToolTip(QApplication::translate("qjackctlSetupForm", "Sample connections view font", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ConnectionsFontPushButton->setToolTip(QApplication::translate("qjackctlSetupForm", "Select font for the connections view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ConnectionsFontPushButton->setText(QApplication::translate("qjackctlSetupForm", "&Font...", 0, QApplication::UnicodeUTF8));
        ConnectionsFontPushButton->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+F", 0, QApplication::UnicodeUTF8));
        ConnectionsIconSizeTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Icon size:", 0, QApplication::UnicodeUTF8));
        ConnectionsIconSizeComboBox->clear();
        ConnectionsIconSizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "16 x 16", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "32 x 32", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "64 x 64", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ConnectionsIconSizeComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The icon size for each item of the connections view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        BezierLinesCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to draw connection lines as cubic Bezier curves", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        BezierLinesCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Draw connection and patchbay lines as Be&zier curves", 0, QApplication::UnicodeUTF8));
        BezierLinesCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AliasesEnabledCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to enable client/port name aliases on the connections window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AliasesEnabledCheckBox->setText(QApplication::translate("qjackctlSetupForm", "E&nable client/port aliases", 0, QApplication::UnicodeUTF8));
        AliasesEnabledCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+N", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AliasesEditingCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to enable in-place client/port name editing (rename)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AliasesEditingCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Ena&ble client/port aliases editing (rename)", 0, QApplication::UnicodeUTF8));
        AliasesEditingCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+B", 0, QApplication::UnicodeUTF8));
        JackClientPortAliasTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&JACK client/port aliases:", 0, QApplication::UnicodeUTF8));
        JackClientPortAliasComboBox->clear();
        JackClientPortAliasComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "Default", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "First", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "Second", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        JackClientPortAliasComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "JACK client/port aliases display mode", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SetupTabWidget->setTabText(SetupTabWidget->indexOf(DisplayTabPage), QApplication::translate("qjackctlSetupForm", "Display", 0, QApplication::UnicodeUTF8));
        OtherGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Other", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StartJackCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to start JACK audio server immediately on application startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartJackCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Start JACK audio server on application startup", 0, QApplication::UnicodeUTF8));
        StartJackCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+S", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QueryCloseCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to ask for confirmation on application exit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QueryCloseCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Confirm application close", 0, QApplication::UnicodeUTF8));
        QueryCloseCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+C", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        KeepOnTopCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to keep all child windows on top of the main window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        KeepOnTopCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Keep child windows always on top", 0, QApplication::UnicodeUTF8));
        KeepOnTopCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+K", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SystemTrayCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to enable the system tray icon", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SystemTrayCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Enable system tray icon", 0, QApplication::UnicodeUTF8));
        SystemTrayCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+E", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StartMinimizedCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to start minimized to system tray", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StartMinimizedCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Start minimi&zed to system tray", 0, QApplication::UnicodeUTF8));
        StartMinimizedCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+Z", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DelayedSetupCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to delay window positioning at application startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DelayedSetupCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Delay window positioning at startup", 0, QApplication::UnicodeUTF8));
        DelayedSetupCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+D", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        SingletonCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to restrict to one single application instance (X11)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SingletonCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Single application &instance", 0, QApplication::UnicodeUTF8));
        SingletonCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+I", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ServerConfigCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to save the JACK server command-line configuration into a local file (auto-start)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ServerConfigCheckBox->setText(QApplication::translate("qjackctlSetupForm", "S&ave JACK audio server configuration to:", 0, QApplication::UnicodeUTF8));
        ServerConfigCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+A", 0, QApplication::UnicodeUTF8));
        ServerConfigNameComboBox->clear();
        ServerConfigNameComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", ".jackdrc", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        ServerConfigNameComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "The server configuration local file name (auto-start)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        ServerConfigTempCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to exit once all clients have closed (auto-start)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ServerConfigTempCheckBox->setText(QApplication::translate("qjackctlSetupForm", "C&onfigure as temporary server", 0, QApplication::UnicodeUTF8));
        ServerConfigTempCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+O", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QueryShutdownCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to ask for confirmation on JACK audio server shutdown", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        QueryShutdownCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Confirm server sh&utdown", 0, QApplication::UnicodeUTF8));
        QueryShutdownCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+U", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        AlsaSeqEnabledCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to enable ALSA Sequencer (MIDI) support on startup", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        AlsaSeqEnabledCheckBox->setText(QApplication::translate("qjackctlSetupForm", "E&nable ALSA Sequencer support", 0, QApplication::UnicodeUTF8));
        AlsaSeqEnabledCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+N", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        DBusEnabledCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to enable D-Bus interface", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        DBusEnabledCheckBox->setText(QApplication::translate("qjackctlSetupForm", "&Enable D-Bus interface", 0, QApplication::UnicodeUTF8));
        DBusEnabledCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        StopJackCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to stop JACK audio server on application exit", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        StopJackCheckBox->setText(QApplication::translate("qjackctlSetupForm", "S&top JACK audio server on application exit", 0, QApplication::UnicodeUTF8));
        StopJackCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+Q", 0, QApplication::UnicodeUTF8));
        ButtonsGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Buttons", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        LeftButtonsCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to hide the left button group on the main window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        LeftButtonsCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Hide main window &Left buttons", 0, QApplication::UnicodeUTF8));
        LeftButtonsCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+L", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        RightButtonsCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to hide the right button group on the main window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        RightButtonsCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Hide main window &Right buttons", 0, QApplication::UnicodeUTF8));
        RightButtonsCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+R", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        TransportButtonsCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to hide the transport button group on the main window", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TransportButtonsCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Hide main window &Transport buttons", 0, QApplication::UnicodeUTF8));
        TransportButtonsCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+T", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        TextLabelsCheckBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Whether to hide the text labels on the main window buttons", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        TextLabelsCheckBox->setText(QApplication::translate("qjackctlSetupForm", "Hide main window &button text labels", 0, QApplication::UnicodeUTF8));
        TextLabelsCheckBox->setShortcut(QApplication::translate("qjackctlSetupForm", "Alt+B", 0, QApplication::UnicodeUTF8));
        DefaultsGroupBox->setTitle(QApplication::translate("qjackctlSetupForm", "Defaults", 0, QApplication::UnicodeUTF8));
        BaseFontSizeTextLabel->setText(QApplication::translate("qjackctlSetupForm", "&Base font size:", 0, QApplication::UnicodeUTF8));
        BaseFontSizeComboBox->clear();
        BaseFontSizeComboBox->insertItems(0, QStringList()
         << QApplication::translate("qjackctlSetupForm", "(default)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "6", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "7", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "8", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "9", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "10", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "11", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("qjackctlSetupForm", "12", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        BaseFontSizeComboBox->setToolTip(QApplication::translate("qjackctlSetupForm", "Base application font size (pt.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        SetupTabWidget->setTabText(SetupTabWidget->indexOf(MiscTabPage), QApplication::translate("qjackctlSetupForm", "Misc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class qjackctlSetupForm: public Ui_qjackctlSetupForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QJACKCTLSETUPFORM_H
