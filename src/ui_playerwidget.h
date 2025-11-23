/********************************************************************************
** Form generated from reading UI file 'playerwidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERWIDGET_H
#define UI_PLAYERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "playerbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PlayerWidget
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *lblInfo;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblTimeCur;
    QProgressBar *seekBar;
    QLabel *lblTimeRemaining;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    PlayerButton *btnRew;
    PlayerButton *btnPausePlay;
    PlayerButton *btnStop;
    PlayerButton *btnFwd;
    QGroupBox *groupAdvanced;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *spinPitch;
    QLabel *label_3;
    QSpinBox *spinTempo;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *lblVolume;
    QSlider *sliderVolume;

    void setupUi(QWidget *PlayerWidget)
    {
        if (PlayerWidget->objectName().isEmpty())
            PlayerWidget->setObjectName("PlayerWidget");
        PlayerWidget->resize(451, 193);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PlayerWidget->sizePolicy().hasHeightForWidth());
        PlayerWidget->setSizePolicy(sizePolicy);
        horizontalLayout_4 = new QHBoxLayout(PlayerWidget);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lblInfo = new QLabel(PlayerWidget);
        lblInfo->setObjectName("lblInfo");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lblInfo->sizePolicy().hasHeightForWidth());
        lblInfo->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(lblInfo);

        groupBox = new QGroupBox(PlayerWidget);
        groupBox->setObjectName("groupBox");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy2);
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        lblTimeCur = new QLabel(groupBox);
        lblTimeCur->setObjectName("lblTimeCur");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblTimeCur->sizePolicy().hasHeightForWidth());
        lblTimeCur->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(lblTimeCur);

        seekBar = new QProgressBar(groupBox);
        seekBar->setObjectName("seekBar");
        seekBar->setValue(24);

        horizontalLayout_2->addWidget(seekBar);

        lblTimeRemaining = new QLabel(groupBox);
        lblTimeRemaining->setObjectName("lblTimeRemaining");
        sizePolicy3.setHeightForWidth(lblTimeRemaining->sizePolicy().hasHeightForWidth());
        lblTimeRemaining->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(lblTimeRemaining);

        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/dryicons_clock.png")));

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnRew = new PlayerButton(PlayerWidget);
        btnRew->setObjectName("btnRew");
        btnRew->setEnabled(false);

        horizontalLayout->addWidget(btnRew);

        btnPausePlay = new PlayerButton(PlayerWidget);
        btnPausePlay->setObjectName("btnPausePlay");
        btnPausePlay->setEnabled(false);

        horizontalLayout->addWidget(btnPausePlay);

        btnStop = new PlayerButton(PlayerWidget);
        btnStop->setObjectName("btnStop");
        btnStop->setEnabled(false);

        horizontalLayout->addWidget(btnStop);

        btnFwd = new PlayerButton(PlayerWidget);
        btnFwd->setObjectName("btnFwd");
        btnFwd->setEnabled(false);

        horizontalLayout->addWidget(btnFwd);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addLayout(verticalLayout);

        groupAdvanced = new QGroupBox(PlayerWidget);
        groupAdvanced->setObjectName("groupAdvanced");
        horizontalLayout_3 = new QHBoxLayout(groupAdvanced);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(groupAdvanced);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        spinPitch = new QSpinBox(groupAdvanced);
        spinPitch->setObjectName("spinPitch");
        spinPitch->setMaximum(200);
        spinPitch->setSingleStep(5);
        spinPitch->setValue(100);

        horizontalLayout_3->addWidget(spinPitch);

        label_3 = new QLabel(groupAdvanced);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        spinTempo = new QSpinBox(groupAdvanced);
        spinTempo->setObjectName("spinTempo");
        spinTempo->setMaximum(200);
        spinTempo->setSingleStep(5);
        spinTempo->setValue(100);

        horizontalLayout_3->addWidget(spinTempo);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(groupAdvanced);


        horizontalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lblVolume = new QLabel(PlayerWidget);
        lblVolume->setObjectName("lblVolume");

        verticalLayout_2->addWidget(lblVolume);

        sliderVolume = new QSlider(PlayerWidget);
        sliderVolume->setObjectName("sliderVolume");
        sliderVolume->setOrientation(Qt::Vertical);

        verticalLayout_2->addWidget(sliderVolume);


        horizontalLayout_4->addLayout(verticalLayout_2);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(spinPitch);
        label_3->setBuddy(spinTempo);
#endif // QT_CONFIG(shortcut)

        retranslateUi(PlayerWidget);

        QMetaObject::connectSlotsByName(PlayerWidget);
    } // setupUi

    void retranslateUi(QWidget *PlayerWidget)
    {
        PlayerWidget->setWindowTitle(QCoreApplication::translate("PlayerWidget", "P&layer controls", nullptr));
        lblInfo->setText(QCoreApplication::translate("PlayerWidget", "Nothing is being played", nullptr));
        groupBox->setTitle(QString());
#if QT_CONFIG(tooltip)
        lblTimeCur->setToolTip(QCoreApplication::translate("PlayerWidget", "Playing time", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        lblTimeCur->setWhatsThis(QCoreApplication::translate("PlayerWidget", "Time in minutes:seconds.tenth of milliseconds of how long the song has been played.", nullptr));
#endif // QT_CONFIG(whatsthis)
        lblTimeCur->setText(QCoreApplication::translate("PlayerWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">---</span></p></body></html>", nullptr));
#if QT_CONFIG(tooltip)
        lblTimeRemaining->setToolTip(QCoreApplication::translate("PlayerWidget", "Remaining time", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        lblTimeRemaining->setWhatsThis(QCoreApplication::translate("PlayerWidget", "Remaining time in minutes:seconds.tenth of milliseconds", nullptr));
#endif // QT_CONFIG(whatsthis)
        lblTimeRemaining->setText(QCoreApplication::translate("PlayerWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Liberation Sans'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:600;\">---</span></p></body></html>", nullptr));
        label->setText(QString());
#if QT_CONFIG(tooltip)
        btnRew->setToolTip(QCoreApplication::translate("PlayerWidget", "Seeks five seconds backward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnRew->setWhatsThis(QCoreApplication::translate("PlayerWidget", "Seeks five seconds backward", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnRew->setText(QCoreApplication::translate("PlayerWidget", "Prev", nullptr));
#if QT_CONFIG(tooltip)
        btnPausePlay->setToolTip(QCoreApplication::translate("PlayerWidget", "Plays or pauses a current playing song", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnPausePlay->setWhatsThis(QCoreApplication::translate("PlayerWidget", "Plays or pauses a current playing song", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnPausePlay->setText(QCoreApplication::translate("PlayerWidget", "Pause", nullptr));
#if QT_CONFIG(shortcut)
        btnPausePlay->setShortcut(QCoreApplication::translate("PlayerWidget", "Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        btnStop->setToolTip(QCoreApplication::translate("PlayerWidget", "Stops the currently playing song", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnStop->setWhatsThis(QCoreApplication::translate("PlayerWidget", "Stops the currently playing song", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnStop->setText(QCoreApplication::translate("PlayerWidget", "Stop", nullptr));
#if QT_CONFIG(tooltip)
        btnFwd->setToolTip(QCoreApplication::translate("PlayerWidget", "Seeks five seconds forward", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        btnFwd->setWhatsThis(QCoreApplication::translate("PlayerWidget", "Seeks five seconds forward", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnFwd->setText(QCoreApplication::translate("PlayerWidget", "Next", nullptr));
        groupAdvanced->setTitle(QString());
        label_2->setText(QCoreApplication::translate("PlayerWidget", "Pitch:", nullptr));
        spinPitch->setSuffix(QCoreApplication::translate("PlayerWidget", " %", nullptr));
        label_3->setText(QCoreApplication::translate("PlayerWidget", "Te&mpo:", nullptr));
        spinTempo->setSuffix(QCoreApplication::translate("PlayerWidget", " %", nullptr));
        lblVolume->setText(QCoreApplication::translate("PlayerWidget", "Vol", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayerWidget: public Ui_PlayerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERWIDGET_H
