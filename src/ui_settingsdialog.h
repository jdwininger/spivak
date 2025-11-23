/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "colorbutton.h"
#include "labelshowhelp.h"

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout_8;
    QTabWidget *tabWidget;
    QWidget *tabCollections;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_7;
    QRadioButton *boxCollectionTypeFS;
    QRadioButton *boxCollectionTypeHTTP;
    QSpacerItem *horizontalSpacer_12;
    QLabel *lblRootDir_2;
    QLabel *lblRootDir;
    QLineEdit *leCollectionPath;
    QPushButton *btnBrowseCollection;
    LabelShowHelp *label_25;
    QLabel *lblHTTPauth;
    QLineEdit *leHTTPuser;
    QLineEdit *leHTTPpass;
    LabelShowHelp *label_26;
    LabelShowHelp *lblFSdetectLang;
    QLabel *lblCollectionLanguage;
    LabelShowHelp *label_28;
    QLabel *label_14;
    LabelShowHelp *label_32;
    QComboBox *boxCollectionLanguage;
    QComboBox *boxCollectionSeparator;
    QCheckBox *boxCollectionDetectLang;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *leCollectionName;
    QCheckBox *boxColelctionZIP;
    QCheckBox *boxIgnoreSSLerrors;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    QLineEdit *leArtistTitleTest;
    QLabel *lblTestArtistTitle;
    QGroupBox *groupBox_8;
    QHBoxLayout *horizontalLayout_17;
    QLabel *lblCollectionInfo;
    QPushButton *btnUpdateCollection;
    QPushButton *btnEraseCollection;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label;
    QComboBox *boxBackgroundType;
    LabelShowHelp *label_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QRadioButton *rbBackgroundIgnoreCustom;
    QRadioButton *rbBackgroundUseCustom;
    QSpacerItem *horizontalSpacer_4;
    LabelShowHelp *label_19;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *boxCDGtransparent;
    QSpacerItem *horizontalSpacer_3;
    LabelShowHelp *label_20;
    QGroupBox *groupBackgroundColor;
    QHBoxLayout *horizontalLayout;
    QLabel *label_15;
    ColorButton *btnBackgroundColor;
    QGroupBox *groupBackgroundImage;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_16;
    QLineEdit *lePathImages;
    QPushButton *btnBrowseImages;
    LabelShowHelp *label_21;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *boxBackgroundTransitions;
    QSpinBox *spinBackgroundDelay;
    QSpacerItem *horizontalSpacer_5;
    LabelShowHelp *label_22;
    QGroupBox *groupBackgroundVideo;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_17;
    QLineEdit *lePathVideos;
    QPushButton *btnBrowseVideos;
    LabelShowHelp *label_23;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupCDG_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_24;
    QFontComboBox *fontPlayerLyrics;
    QLabel *label_4;
    QSpinBox *spinMaxLyricFontLines;
    LabelShowHelp *label_41;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout;
    QLabel *label_33;
    ColorButton *btnPlayerLyricsNotification;
    LabelShowHelp *label_37;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_29;
    ColorButton *btnPlayerLyricsInfo;
    LabelShowHelp *label_39;
    QLabel *label_30;
    ColorButton *btnPlayerLyricsPast;
    LabelShowHelp *label_38;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label_31;
    ColorButton *btnPlayerLyricsFuture;
    LabelShowHelp *label_40;
    QLabel *label_34;
    ColorButton *btnPlayerLyricsSpotlight;
    LabelShowHelp *label_49;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_145;
    LabelShowHelp *label_146;
    QSpinBox *lyricBackgroundTransparency;
    QGroupBox *groupRenderingExample;
    QVBoxLayout *verticalLayout_10;
    QLabel *lblTextRenderingExample;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *boxMusicEnable;
    LabelShowHelp *label_43;
    QGroupBox *groupMusicPlayer;
    QGridLayout *gridLayout_4;
    QLabel *label_5;
    QLineEdit *leMusicPath;
    LabelShowHelp *label_47;
    QLabel *label_8;
    QRadioButton *rbMusicRandomOrder;
    QRadioButton *rbMusicSortOrder;
    LabelShowHelp *label_48;
    QCheckBox *boxMusicCrossfade;
    QSpinBox *spinMusicCrossfadeDelay;
    LabelShowHelp *label_50;
    QPushButton *btnBrowseMusic;
    QSpacerItem *verticalSpacer_6;
    QWidget *tab;
    QVBoxLayout *verticalLayout_13;
    QLabel *lblCustomMessages;
    QGroupBox *groupDisplayMessages;
    QGridLayout *gridLayout_5;
    QLineEdit *leCustomMessage1;
    QLabel *label_52;
    QLineEdit *leCustomMessage2;
    QLabel *label_27;
    QLabel *label_53;
    QLabel *label_54;
    QLineEdit *leCustomMessage3;
    QSpacerItem *verticalSpacer_5;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QRadioButton *rbQueueNewStart;
    QRadioButton *rbQueueNewEnd;
    LabelShowHelp *label_42;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_15;
    QCheckBox *boxSaveQueueOnExit;
    LabelShowHelp *label_46;
    QSpacerItem *horizontalSpacer_10;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *boxWebEnable;
    LabelShowHelp *label_44;
    QSpacerItem *horizontalSpacer_9;
    QCheckBox *boxWebAllowAddSong;
    LabelShowHelp *label_45;
    QGroupBox *groupLIRC;
    QGridLayout *gridLayout_3;
    QLineEdit *leLIRCmapping;
    QCheckBox *boxLIRCenable;
    QLineEdit *leLIRCdevice;
    QLabel *label_10;
    QPushButton *btnBrowseLIRCmapping;
    QGroupBox *groupBox_9;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QRadioButton *rbMidiBuiltin;
    QRadioButton *rbMidiNative;
    LabelShowHelp *label_36;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_9;
    QSpinBox *spinLyricDelay;
    LabelShowHelp *label_35;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_6;
    QComboBox *boxFallbackEncoding;
    LabelShowHelp *label_51;
    QSpacerItem *horizontalSpacer_13;
    QCheckBox *boxForceFullScreen;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName("SettingsDialog");
        SettingsDialog->setEnabled(true);
        SettingsDialog->resize(1088, 700);
        verticalLayout_8 = new QVBoxLayout(SettingsDialog);
        verticalLayout_8->setObjectName("verticalLayout_8");
        tabWidget = new QTabWidget(SettingsDialog);
        tabWidget->setObjectName("tabWidget");
        tabCollections = new QWidget();
        tabCollections->setObjectName("tabCollections");
        verticalLayout = new QVBoxLayout(tabCollections);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(tabCollections);
        groupBox->setObjectName("groupBox");
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(label_7);

        boxCollectionTypeFS = new QRadioButton(groupBox);
        boxCollectionTypeFS->setObjectName("boxCollectionTypeFS");
        boxCollectionTypeFS->setChecked(true);

        horizontalLayout_13->addWidget(boxCollectionTypeFS);

        boxCollectionTypeHTTP = new QRadioButton(groupBox);
        boxCollectionTypeHTTP->setObjectName("boxCollectionTypeHTTP");
        boxCollectionTypeHTTP->setEnabled(true);

        horizontalLayout_13->addWidget(boxCollectionTypeHTTP);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_12);


        gridLayout_2->addLayout(horizontalLayout_13, 0, 0, 1, 3);

        lblRootDir_2 = new QLabel(groupBox);
        lblRootDir_2->setObjectName("lblRootDir_2");
        lblRootDir_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblRootDir_2, 1, 0, 1, 1);

        lblRootDir = new QLabel(groupBox);
        lblRootDir->setObjectName("lblRootDir");
        lblRootDir->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblRootDir, 2, 0, 1, 1);

        leCollectionPath = new QLineEdit(groupBox);
        leCollectionPath->setObjectName("leCollectionPath");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(leCollectionPath->sizePolicy().hasHeightForWidth());
        leCollectionPath->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(leCollectionPath, 2, 1, 1, 4);

        btnBrowseCollection = new QPushButton(groupBox);
        btnBrowseCollection->setObjectName("btnBrowseCollection");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/icon_open_file.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnBrowseCollection->setIcon(icon);

        gridLayout_2->addWidget(btnBrowseCollection, 2, 5, 1, 1);

        label_25 = new LabelShowHelp(groupBox);
        label_25->setObjectName("label_25");

        gridLayout_2->addWidget(label_25, 2, 6, 1, 1);

        lblHTTPauth = new QLabel(groupBox);
        lblHTTPauth->setObjectName("lblHTTPauth");
        lblHTTPauth->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblHTTPauth, 3, 0, 1, 1);

        leHTTPuser = new QLineEdit(groupBox);
        leHTTPuser->setObjectName("leHTTPuser");

        gridLayout_2->addWidget(leHTTPuser, 3, 1, 1, 1);

        leHTTPpass = new QLineEdit(groupBox);
        leHTTPpass->setObjectName("leHTTPpass");
        leHTTPpass->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(leHTTPpass, 3, 2, 1, 2);

        label_26 = new LabelShowHelp(groupBox);
        label_26->setObjectName("label_26");

        gridLayout_2->addWidget(label_26, 4, 6, 1, 1);

        lblFSdetectLang = new LabelShowHelp(groupBox);
        lblFSdetectLang->setObjectName("lblFSdetectLang");

        gridLayout_2->addWidget(lblFSdetectLang, 5, 6, 1, 1);

        lblCollectionLanguage = new QLabel(groupBox);
        lblCollectionLanguage->setObjectName("lblCollectionLanguage");
        lblCollectionLanguage->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(lblCollectionLanguage, 6, 0, 1, 1);

        label_28 = new LabelShowHelp(groupBox);
        label_28->setObjectName("label_28");

        gridLayout_2->addWidget(label_28, 6, 6, 1, 1);

        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_14, 7, 0, 1, 1);

        label_32 = new LabelShowHelp(groupBox);
        label_32->setObjectName("label_32");

        gridLayout_2->addWidget(label_32, 7, 6, 1, 1);

        boxCollectionLanguage = new QComboBox(groupBox);
        boxCollectionLanguage->setObjectName("boxCollectionLanguage");

        gridLayout_2->addWidget(boxCollectionLanguage, 6, 1, 1, 5);

        boxCollectionSeparator = new QComboBox(groupBox);
        boxCollectionSeparator->setObjectName("boxCollectionSeparator");

        gridLayout_2->addWidget(boxCollectionSeparator, 7, 1, 1, 5);

        boxCollectionDetectLang = new QCheckBox(groupBox);
        boxCollectionDetectLang->setObjectName("boxCollectionDetectLang");

        gridLayout_2->addWidget(boxCollectionDetectLang, 5, 0, 1, 4);

        horizontalSpacer_2 = new QSpacerItem(195, 29, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 4, 1, 2);

        leCollectionName = new QLineEdit(groupBox);
        leCollectionName->setObjectName("leCollectionName");
        sizePolicy1.setHeightForWidth(leCollectionName->sizePolicy().hasHeightForWidth());
        leCollectionName->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(leCollectionName, 1, 1, 1, 3);

        boxColelctionZIP = new QCheckBox(groupBox);
        boxColelctionZIP->setObjectName("boxColelctionZIP");

        gridLayout_2->addWidget(boxColelctionZIP, 4, 0, 1, 5);

        boxIgnoreSSLerrors = new QCheckBox(groupBox);
        boxIgnoreSSLerrors->setObjectName("boxIgnoreSSLerrors");

        gridLayout_2->addWidget(boxIgnoreSSLerrors, 3, 4, 1, 2);


        verticalLayout->addWidget(groupBox);

        groupBox_5 = new QGroupBox(tabCollections);
        groupBox_5->setObjectName("groupBox_5");
        verticalLayout_11 = new QVBoxLayout(groupBox_5);
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName("label_12");

        horizontalLayout_16->addWidget(label_12);

        leArtistTitleTest = new QLineEdit(groupBox_5);
        leArtistTitleTest->setObjectName("leArtistTitleTest");
        sizePolicy1.setHeightForWidth(leArtistTitleTest->sizePolicy().hasHeightForWidth());
        leArtistTitleTest->setSizePolicy(sizePolicy1);

        horizontalLayout_16->addWidget(leArtistTitleTest);

        lblTestArtistTitle = new QLabel(groupBox_5);
        lblTestArtistTitle->setObjectName("lblTestArtistTitle");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblTestArtistTitle->sizePolicy().hasHeightForWidth());
        lblTestArtistTitle->setSizePolicy(sizePolicy2);
        lblTestArtistTitle->setAlignment(Qt::AlignCenter);

        horizontalLayout_16->addWidget(lblTestArtistTitle);


        verticalLayout_11->addLayout(horizontalLayout_16);


        verticalLayout->addWidget(groupBox_5);

        groupBox_8 = new QGroupBox(tabCollections);
        groupBox_8->setObjectName("groupBox_8");
        horizontalLayout_17 = new QHBoxLayout(groupBox_8);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        lblCollectionInfo = new QLabel(groupBox_8);
        lblCollectionInfo->setObjectName("lblCollectionInfo");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lblCollectionInfo->sizePolicy().hasHeightForWidth());
        lblCollectionInfo->setSizePolicy(sizePolicy3);
        lblCollectionInfo->setWordWrap(true);

        horizontalLayout_17->addWidget(lblCollectionInfo);

        btnUpdateCollection = new QPushButton(groupBox_8);
        btnUpdateCollection->setObjectName("btnUpdateCollection");

        horizontalLayout_17->addWidget(btnUpdateCollection);

        btnEraseCollection = new QPushButton(groupBox_8);
        btnEraseCollection->setObjectName("btnEraseCollection");

        horizontalLayout_17->addWidget(btnEraseCollection);


        verticalLayout->addWidget(groupBox_8);

        tabWidget->addTab(tabCollections, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        verticalLayout_7 = new QVBoxLayout(tab_2);
        verticalLayout_7->setObjectName("verticalLayout_7");
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label = new QLabel(tab_2);
        label->setObjectName("label");

        horizontalLayout_10->addWidget(label);

        boxBackgroundType = new QComboBox(tab_2);
        boxBackgroundType->addItem(QString());
        boxBackgroundType->addItem(QString());
        boxBackgroundType->addItem(QString());
        boxBackgroundType->setObjectName("boxBackgroundType");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(boxBackgroundType->sizePolicy().hasHeightForWidth());
        boxBackgroundType->setSizePolicy(sizePolicy4);

        horizontalLayout_10->addWidget(boxBackgroundType);

        label_2 = new LabelShowHelp(tab_2);
        label_2->setObjectName("label_2");

        horizontalLayout_10->addWidget(label_2);


        verticalLayout_7->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_13 = new QLabel(tab_2);
        label_13->setObjectName("label_13");

        horizontalLayout_9->addWidget(label_13);

        rbBackgroundIgnoreCustom = new QRadioButton(tab_2);
        rbBackgroundIgnoreCustom->setObjectName("rbBackgroundIgnoreCustom");

        horizontalLayout_9->addWidget(rbBackgroundIgnoreCustom);

        rbBackgroundUseCustom = new QRadioButton(tab_2);
        rbBackgroundUseCustom->setObjectName("rbBackgroundUseCustom");

        horizontalLayout_9->addWidget(rbBackgroundUseCustom);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_4);

        label_19 = new LabelShowHelp(tab_2);
        label_19->setObjectName("label_19");

        horizontalLayout_9->addWidget(label_19);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        boxCDGtransparent = new QCheckBox(tab_2);
        boxCDGtransparent->setObjectName("boxCDGtransparent");

        horizontalLayout_5->addWidget(boxCDGtransparent);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        label_20 = new LabelShowHelp(tab_2);
        label_20->setObjectName("label_20");

        horizontalLayout_5->addWidget(label_20);


        verticalLayout_7->addLayout(horizontalLayout_5);

        groupBackgroundColor = new QGroupBox(tab_2);
        groupBackgroundColor->setObjectName("groupBackgroundColor");
        horizontalLayout = new QHBoxLayout(groupBackgroundColor);
        horizontalLayout->setObjectName("horizontalLayout");
        label_15 = new QLabel(groupBackgroundColor);
        label_15->setObjectName("label_15");

        horizontalLayout->addWidget(label_15);

        btnBackgroundColor = new ColorButton(groupBackgroundColor);
        btnBackgroundColor->setObjectName("btnBackgroundColor");

        horizontalLayout->addWidget(btnBackgroundColor);


        verticalLayout_7->addWidget(groupBackgroundColor);

        groupBackgroundImage = new QGroupBox(tab_2);
        groupBackgroundImage->setObjectName("groupBackgroundImage");
        verticalLayout_2 = new QVBoxLayout(groupBackgroundImage);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_16 = new QLabel(groupBackgroundImage);
        label_16->setObjectName("label_16");

        horizontalLayout_7->addWidget(label_16);

        lePathImages = new QLineEdit(groupBackgroundImage);
        lePathImages->setObjectName("lePathImages");

        horizontalLayout_7->addWidget(lePathImages);

        btnBrowseImages = new QPushButton(groupBackgroundImage);
        btnBrowseImages->setObjectName("btnBrowseImages");
        btnBrowseImages->setIcon(icon);

        horizontalLayout_7->addWidget(btnBrowseImages);

        label_21 = new LabelShowHelp(groupBackgroundImage);
        label_21->setObjectName("label_21");

        horizontalLayout_7->addWidget(label_21);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        boxBackgroundTransitions = new QCheckBox(groupBackgroundImage);
        boxBackgroundTransitions->setObjectName("boxBackgroundTransitions");

        horizontalLayout_11->addWidget(boxBackgroundTransitions);

        spinBackgroundDelay = new QSpinBox(groupBackgroundImage);
        spinBackgroundDelay->setObjectName("spinBackgroundDelay");
        spinBackgroundDelay->setEnabled(false);
        spinBackgroundDelay->setMinimum(5);
        spinBackgroundDelay->setMaximum(600);

        horizontalLayout_11->addWidget(spinBackgroundDelay);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_5);

        label_22 = new LabelShowHelp(groupBackgroundImage);
        label_22->setObjectName("label_22");

        horizontalLayout_11->addWidget(label_22);


        verticalLayout_2->addLayout(horizontalLayout_11);


        verticalLayout_7->addWidget(groupBackgroundImage);

        groupBackgroundVideo = new QGroupBox(tab_2);
        groupBackgroundVideo->setObjectName("groupBackgroundVideo");
        horizontalLayout_12 = new QHBoxLayout(groupBackgroundVideo);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_17 = new QLabel(groupBackgroundVideo);
        label_17->setObjectName("label_17");

        horizontalLayout_8->addWidget(label_17);

        lePathVideos = new QLineEdit(groupBackgroundVideo);
        lePathVideos->setObjectName("lePathVideos");

        horizontalLayout_8->addWidget(lePathVideos);

        btnBrowseVideos = new QPushButton(groupBackgroundVideo);
        btnBrowseVideos->setObjectName("btnBrowseVideos");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/icon_open_file.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        btnBrowseVideos->setIcon(icon1);

        horizontalLayout_8->addWidget(btnBrowseVideos);

        label_23 = new LabelShowHelp(groupBackgroundVideo);
        label_23->setObjectName("label_23");

        horizontalLayout_8->addWidget(label_23);


        horizontalLayout_12->addLayout(horizontalLayout_8);


        verticalLayout_7->addWidget(groupBackgroundVideo);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        verticalLayout_4 = new QVBoxLayout(tab_3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        groupCDG_2 = new QGroupBox(tab_3);
        groupCDG_2->setObjectName("groupCDG_2");
        verticalLayout_3 = new QVBoxLayout(groupCDG_2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_24 = new QLabel(groupCDG_2);
        label_24->setObjectName("label_24");

        horizontalLayout_4->addWidget(label_24);

        fontPlayerLyrics = new QFontComboBox(groupCDG_2);
        fontPlayerLyrics->setObjectName("fontPlayerLyrics");
        sizePolicy4.setHeightForWidth(fontPlayerLyrics->sizePolicy().hasHeightForWidth());
        fontPlayerLyrics->setSizePolicy(sizePolicy4);

        horizontalLayout_4->addWidget(fontPlayerLyrics);

        label_4 = new QLabel(groupCDG_2);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        spinMaxLyricFontLines = new QSpinBox(groupCDG_2);
        spinMaxLyricFontLines->setObjectName("spinMaxLyricFontLines");
        spinMaxLyricFontLines->setMinimum(1);
        spinMaxLyricFontLines->setMaximum(30);
        spinMaxLyricFontLines->setValue(4);

        horizontalLayout_4->addWidget(spinMaxLyricFontLines);

        label_41 = new LabelShowHelp(groupCDG_2);
        label_41->setObjectName("label_41");

        horizontalLayout_4->addWidget(label_41);


        verticalLayout_3->addLayout(horizontalLayout_4);

        groupBox_7 = new QGroupBox(groupCDG_2);
        groupBox_7->setObjectName("groupBox_7");
        gridLayout = new QGridLayout(groupBox_7);
        gridLayout->setObjectName("gridLayout");
        label_33 = new QLabel(groupBox_7);
        label_33->setObjectName("label_33");
        label_33->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_33, 0, 0, 1, 1);

        btnPlayerLyricsNotification = new ColorButton(groupBox_7);
        btnPlayerLyricsNotification->setObjectName("btnPlayerLyricsNotification");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy5.setHorizontalStretch(1);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnPlayerLyricsNotification->sizePolicy().hasHeightForWidth());
        btnPlayerLyricsNotification->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(btnPlayerLyricsNotification, 0, 1, 1, 1);

        label_37 = new LabelShowHelp(groupBox_7);
        label_37->setObjectName("label_37");

        gridLayout->addWidget(label_37, 0, 2, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(183, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 3, 1, 1);

        label_29 = new QLabel(groupBox_7);
        label_29->setObjectName("label_29");
        label_29->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_29, 0, 4, 1, 1);

        btnPlayerLyricsInfo = new ColorButton(groupBox_7);
        btnPlayerLyricsInfo->setObjectName("btnPlayerLyricsInfo");
        sizePolicy5.setHeightForWidth(btnPlayerLyricsInfo->sizePolicy().hasHeightForWidth());
        btnPlayerLyricsInfo->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(btnPlayerLyricsInfo, 0, 5, 1, 1);

        label_39 = new LabelShowHelp(groupBox_7);
        label_39->setObjectName("label_39");
        sizePolicy.setHeightForWidth(label_39->sizePolicy().hasHeightForWidth());
        label_39->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_39, 0, 6, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName("label_30");
        label_30->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_30, 1, 0, 1, 1);

        btnPlayerLyricsPast = new ColorButton(groupBox_7);
        btnPlayerLyricsPast->setObjectName("btnPlayerLyricsPast");
        sizePolicy5.setHeightForWidth(btnPlayerLyricsPast->sizePolicy().hasHeightForWidth());
        btnPlayerLyricsPast->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(btnPlayerLyricsPast, 1, 1, 1, 1);

        label_38 = new LabelShowHelp(groupBox_7);
        label_38->setObjectName("label_38");

        gridLayout->addWidget(label_38, 1, 2, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(183, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 1, 3, 1, 1);

        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName("label_31");
        label_31->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_31, 1, 4, 1, 1);

        btnPlayerLyricsFuture = new ColorButton(groupBox_7);
        btnPlayerLyricsFuture->setObjectName("btnPlayerLyricsFuture");
        sizePolicy5.setHeightForWidth(btnPlayerLyricsFuture->sizePolicy().hasHeightForWidth());
        btnPlayerLyricsFuture->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(btnPlayerLyricsFuture, 1, 5, 1, 1);

        label_40 = new LabelShowHelp(groupBox_7);
        label_40->setObjectName("label_40");
        sizePolicy.setHeightForWidth(label_40->sizePolicy().hasHeightForWidth());
        label_40->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_40, 1, 6, 1, 1);

        label_34 = new QLabel(groupBox_7);
        label_34->setObjectName("label_34");
        label_34->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_34, 2, 0, 1, 1);

        btnPlayerLyricsSpotlight = new ColorButton(groupBox_7);
        btnPlayerLyricsSpotlight->setObjectName("btnPlayerLyricsSpotlight");
        sizePolicy5.setHeightForWidth(btnPlayerLyricsSpotlight->sizePolicy().hasHeightForWidth());
        btnPlayerLyricsSpotlight->setSizePolicy(sizePolicy5);

        gridLayout->addWidget(btnPlayerLyricsSpotlight, 2, 1, 1, 1);

        label_49 = new LabelShowHelp(groupBox_7);
        label_49->setObjectName("label_49");

        gridLayout->addWidget(label_49, 2, 2, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(179, 28, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 2, 3, 1, 1);

        label_145 = new QLabel(groupBox_7);
        label_145->setObjectName("label_145");
        label_145->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_145, 2, 4, 1, 1);

        label_146 = new LabelShowHelp(groupBox_7);
        label_146->setObjectName("label_146");

        gridLayout->addWidget(label_146, 2, 6, 1, 1);

        lyricBackgroundTransparency = new QSpinBox(groupBox_7);
        lyricBackgroundTransparency->setObjectName("lyricBackgroundTransparency");
        lyricBackgroundTransparency->setMaximum(100);

        gridLayout->addWidget(lyricBackgroundTransparency, 2, 5, 1, 1);


        verticalLayout_3->addWidget(groupBox_7);


        verticalLayout_4->addWidget(groupCDG_2);

        groupRenderingExample = new QGroupBox(tab_3);
        groupRenderingExample->setObjectName("groupRenderingExample");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(1);
        sizePolicy6.setHeightForWidth(groupRenderingExample->sizePolicy().hasHeightForWidth());
        groupRenderingExample->setSizePolicy(sizePolicy6);
        verticalLayout_10 = new QVBoxLayout(groupRenderingExample);
        verticalLayout_10->setObjectName("verticalLayout_10");
        lblTextRenderingExample = new QLabel(groupRenderingExample);
        lblTextRenderingExample->setObjectName("lblTextRenderingExample");

        verticalLayout_10->addWidget(lblTextRenderingExample);


        verticalLayout_4->addWidget(groupRenderingExample);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        tabWidget->addTab(tab_3, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        verticalLayout_6 = new QVBoxLayout(tab_5);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        boxMusicEnable = new QCheckBox(tab_5);
        boxMusicEnable->setObjectName("boxMusicEnable");

        horizontalLayout_3->addWidget(boxMusicEnable);

        label_43 = new LabelShowHelp(tab_5);
        label_43->setObjectName("label_43");

        horizontalLayout_3->addWidget(label_43);


        verticalLayout_6->addLayout(horizontalLayout_3);

        groupMusicPlayer = new QGroupBox(tab_5);
        groupMusicPlayer->setObjectName("groupMusicPlayer");
        groupMusicPlayer->setEnabled(false);
        gridLayout_4 = new QGridLayout(groupMusicPlayer);
        gridLayout_4->setObjectName("gridLayout_4");
        label_5 = new QLabel(groupMusicPlayer);
        label_5->setObjectName("label_5");

        gridLayout_4->addWidget(label_5, 0, 0, 1, 1);

        leMusicPath = new QLineEdit(groupMusicPlayer);
        leMusicPath->setObjectName("leMusicPath");

        gridLayout_4->addWidget(leMusicPath, 0, 1, 1, 5);

        label_47 = new LabelShowHelp(groupMusicPlayer);
        label_47->setObjectName("label_47");

        gridLayout_4->addWidget(label_47, 0, 7, 1, 1);

        label_8 = new QLabel(groupMusicPlayer);
        label_8->setObjectName("label_8");

        gridLayout_4->addWidget(label_8, 1, 0, 1, 1);

        rbMusicRandomOrder = new QRadioButton(groupMusicPlayer);
        rbMusicRandomOrder->setObjectName("rbMusicRandomOrder");
        rbMusicRandomOrder->setChecked(true);

        gridLayout_4->addWidget(rbMusicRandomOrder, 1, 1, 1, 3);

        rbMusicSortOrder = new QRadioButton(groupMusicPlayer);
        rbMusicSortOrder->setObjectName("rbMusicSortOrder");

        gridLayout_4->addWidget(rbMusicSortOrder, 1, 4, 1, 3);

        label_48 = new LabelShowHelp(groupMusicPlayer);
        label_48->setObjectName("label_48");

        gridLayout_4->addWidget(label_48, 1, 7, 1, 1);

        boxMusicCrossfade = new QCheckBox(groupMusicPlayer);
        boxMusicCrossfade->setObjectName("boxMusicCrossfade");

        gridLayout_4->addWidget(boxMusicCrossfade, 2, 0, 1, 2);

        spinMusicCrossfadeDelay = new QSpinBox(groupMusicPlayer);
        spinMusicCrossfadeDelay->setObjectName("spinMusicCrossfadeDelay");
        spinMusicCrossfadeDelay->setEnabled(false);
        spinMusicCrossfadeDelay->setMinimum(1);
        spinMusicCrossfadeDelay->setMaximum(10);

        gridLayout_4->addWidget(spinMusicCrossfadeDelay, 2, 2, 1, 1);

        label_50 = new LabelShowHelp(groupMusicPlayer);
        label_50->setObjectName("label_50");

        gridLayout_4->addWidget(label_50, 2, 3, 1, 1);

        btnBrowseMusic = new QPushButton(groupMusicPlayer);
        btnBrowseMusic->setObjectName("btnBrowseMusic");
        btnBrowseMusic->setIcon(icon);

        gridLayout_4->addWidget(btnBrowseMusic, 0, 6, 1, 1);


        verticalLayout_6->addWidget(groupMusicPlayer);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_6);

        tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        verticalLayout_13 = new QVBoxLayout(tab);
        verticalLayout_13->setObjectName("verticalLayout_13");
        lblCustomMessages = new QLabel(tab);
        lblCustomMessages->setObjectName("lblCustomMessages");

        verticalLayout_13->addWidget(lblCustomMessages);

        groupDisplayMessages = new QGroupBox(tab);
        groupDisplayMessages->setObjectName("groupDisplayMessages");
        gridLayout_5 = new QGridLayout(groupDisplayMessages);
        gridLayout_5->setObjectName("gridLayout_5");
        leCustomMessage1 = new QLineEdit(groupDisplayMessages);
        leCustomMessage1->setObjectName("leCustomMessage1");

        gridLayout_5->addWidget(leCustomMessage1, 0, 1, 1, 1);

        label_52 = new QLabel(groupDisplayMessages);
        label_52->setObjectName("label_52");

        gridLayout_5->addWidget(label_52, 1, 0, 1, 1);

        leCustomMessage2 = new QLineEdit(groupDisplayMessages);
        leCustomMessage2->setObjectName("leCustomMessage2");

        gridLayout_5->addWidget(leCustomMessage2, 1, 1, 1, 1);

        label_27 = new QLabel(groupDisplayMessages);
        label_27->setObjectName("label_27");

        gridLayout_5->addWidget(label_27, 0, 0, 1, 1);

        label_53 = new QLabel(groupDisplayMessages);
        label_53->setObjectName("label_53");

        gridLayout_5->addWidget(label_53, 2, 0, 1, 1);

        label_54 = new QLabel(groupDisplayMessages);
        label_54->setObjectName("label_54");

        gridLayout_5->addWidget(label_54, 3, 0, 1, 2);

        leCustomMessage3 = new QLineEdit(groupDisplayMessages);
        leCustomMessage3->setObjectName("leCustomMessage3");

        gridLayout_5->addWidget(leCustomMessage3, 2, 1, 1, 1);


        verticalLayout_13->addWidget(groupDisplayMessages);

        verticalSpacer_5 = new QSpacerItem(20, 287, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_5);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        verticalLayout_5 = new QVBoxLayout(tab_4);
        verticalLayout_5->setObjectName("verticalLayout_5");
        groupBox_3 = new QGroupBox(tab_4);
        groupBox_3->setObjectName("groupBox_3");
        verticalLayout_9 = new QVBoxLayout(groupBox_3);
        verticalLayout_9->setObjectName("verticalLayout_9");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");

        horizontalLayout_6->addWidget(label_11);

        rbQueueNewStart = new QRadioButton(groupBox_3);
        rbQueueNewStart->setObjectName("rbQueueNewStart");

        horizontalLayout_6->addWidget(rbQueueNewStart);

        rbQueueNewEnd = new QRadioButton(groupBox_3);
        rbQueueNewEnd->setObjectName("rbQueueNewEnd");

        horizontalLayout_6->addWidget(rbQueueNewEnd);

        label_42 = new LabelShowHelp(groupBox_3);
        label_42->setObjectName("label_42");

        horizontalLayout_6->addWidget(label_42);

        horizontalSpacer = new QSpacerItem(70, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout_9->addLayout(horizontalLayout_6);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        boxSaveQueueOnExit = new QCheckBox(groupBox_3);
        boxSaveQueueOnExit->setObjectName("boxSaveQueueOnExit");

        horizontalLayout_15->addWidget(boxSaveQueueOnExit);

        label_46 = new LabelShowHelp(groupBox_3);
        label_46->setObjectName("label_46");

        horizontalLayout_15->addWidget(label_46);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_10);


        verticalLayout_9->addLayout(horizontalLayout_15);


        verticalLayout_5->addWidget(groupBox_3);

        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName("groupBox_4");
        horizontalLayout_14 = new QHBoxLayout(groupBox_4);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        boxWebEnable = new QCheckBox(groupBox_4);
        boxWebEnable->setObjectName("boxWebEnable");

        horizontalLayout_14->addWidget(boxWebEnable);

        label_44 = new LabelShowHelp(groupBox_4);
        label_44->setObjectName("label_44");

        horizontalLayout_14->addWidget(label_44);

        horizontalSpacer_9 = new QSpacerItem(252, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_9);

        boxWebAllowAddSong = new QCheckBox(groupBox_4);
        boxWebAllowAddSong->setObjectName("boxWebAllowAddSong");
        boxWebAllowAddSong->setEnabled(false);

        horizontalLayout_14->addWidget(boxWebAllowAddSong);

        label_45 = new LabelShowHelp(groupBox_4);
        label_45->setObjectName("label_45");

        horizontalLayout_14->addWidget(label_45);


        verticalLayout_5->addWidget(groupBox_4);

        groupLIRC = new QGroupBox(tab_4);
        groupLIRC->setObjectName("groupLIRC");
        gridLayout_3 = new QGridLayout(groupLIRC);
        gridLayout_3->setObjectName("gridLayout_3");
        leLIRCmapping = new QLineEdit(groupLIRC);
        leLIRCmapping->setObjectName("leLIRCmapping");
        leLIRCmapping->setEnabled(false);

        gridLayout_3->addWidget(leLIRCmapping, 1, 1, 1, 1);

        boxLIRCenable = new QCheckBox(groupLIRC);
        boxLIRCenable->setObjectName("boxLIRCenable");

        gridLayout_3->addWidget(boxLIRCenable, 0, 0, 1, 1);

        leLIRCdevice = new QLineEdit(groupLIRC);
        leLIRCdevice->setObjectName("leLIRCdevice");
        leLIRCdevice->setEnabled(false);

        gridLayout_3->addWidget(leLIRCdevice, 0, 1, 1, 1);

        label_10 = new QLabel(groupLIRC);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_10, 1, 0, 1, 1);

        btnBrowseLIRCmapping = new QPushButton(groupLIRC);
        btnBrowseLIRCmapping->setObjectName("btnBrowseLIRCmapping");
        btnBrowseLIRCmapping->setEnabled(false);
        btnBrowseLIRCmapping->setIcon(icon1);

        gridLayout_3->addWidget(btnBrowseLIRCmapping, 1, 2, 1, 1);


        verticalLayout_5->addWidget(groupLIRC);

        groupBox_9 = new QGroupBox(tab_4);
        groupBox_9->setObjectName("groupBox_9");
        verticalLayout_12 = new QVBoxLayout(groupBox_9);
        verticalLayout_12->setObjectName("verticalLayout_12");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox_9);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        rbMidiBuiltin = new QRadioButton(groupBox_9);
        rbMidiBuiltin->setObjectName("rbMidiBuiltin");

        horizontalLayout_2->addWidget(rbMidiBuiltin);

        rbMidiNative = new QRadioButton(groupBox_9);
        rbMidiNative->setObjectName("rbMidiNative");

        horizontalLayout_2->addWidget(rbMidiNative);

        label_36 = new LabelShowHelp(groupBox_9);
        label_36->setObjectName("label_36");

        horizontalLayout_2->addWidget(label_36);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        label_9 = new QLabel(groupBox_9);
        label_9->setObjectName("label_9");

        horizontalLayout_2->addWidget(label_9);

        spinLyricDelay = new QSpinBox(groupBox_9);
        spinLyricDelay->setObjectName("spinLyricDelay");
        spinLyricDelay->setMinimum(-2000);
        spinLyricDelay->setMaximum(2000);

        horizontalLayout_2->addWidget(spinLyricDelay);

        label_35 = new LabelShowHelp(groupBox_9);
        label_35->setObjectName("label_35");

        horizontalLayout_2->addWidget(label_35);


        verticalLayout_12->addLayout(horizontalLayout_2);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_6 = new QLabel(groupBox_9);
        label_6->setObjectName("label_6");

        horizontalLayout_18->addWidget(label_6);

        boxFallbackEncoding = new QComboBox(groupBox_9);
        boxFallbackEncoding->setObjectName("boxFallbackEncoding");

        horizontalLayout_18->addWidget(boxFallbackEncoding);

        label_51 = new LabelShowHelp(groupBox_9);
        label_51->setObjectName("label_51");

        horizontalLayout_18->addWidget(label_51);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_13);


        verticalLayout_12->addLayout(horizontalLayout_18);


        verticalLayout_5->addWidget(groupBox_9);

        boxForceFullScreen = new QCheckBox(tab_4);
        boxForceFullScreen->setObjectName("boxForceFullScreen");

        verticalLayout_5->addWidget(boxForceFullScreen);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_8->addWidget(tabWidget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_8->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        lblRootDir_2->setBuddy(leCollectionPath);
        lblRootDir->setBuddy(leCollectionPath);
        label_25->setBuddy(leCollectionPath);
        lblHTTPauth->setBuddy(leCollectionPath);
        label_26->setBuddy(boxColelctionZIP);
        lblFSdetectLang->setBuddy(boxCollectionDetectLang);
        lblCollectionLanguage->setBuddy(boxCollectionLanguage);
        label_28->setBuddy(boxCollectionLanguage);
        label_32->setBuddy(boxCollectionSeparator);
        label->setBuddy(boxBackgroundType);
        label_2->setBuddy(boxBackgroundType);
        label_13->setBuddy(rbBackgroundIgnoreCustom);
        label_19->setBuddy(rbBackgroundIgnoreCustom);
        label_20->setBuddy(boxCDGtransparent);
        label_15->setBuddy(btnBackgroundColor);
        label_16->setBuddy(lePathImages);
        label_21->setBuddy(btnBrowseImages);
        label_22->setBuddy(spinBackgroundDelay);
        label_17->setBuddy(lePathVideos);
        label_23->setBuddy(lePathVideos);
        label_24->setBuddy(fontPlayerLyrics);
        label_4->setBuddy(spinMaxLyricFontLines);
        label_41->setBuddy(spinMaxLyricFontLines);
        label_33->setBuddy(btnPlayerLyricsNotification);
        label_37->setBuddy(btnPlayerLyricsNotification);
        label_29->setBuddy(btnPlayerLyricsInfo);
        label_39->setBuddy(btnPlayerLyricsInfo);
        label_30->setBuddy(btnPlayerLyricsPast);
        label_38->setBuddy(btnPlayerLyricsPast);
        label_31->setBuddy(btnPlayerLyricsFuture);
        label_40->setBuddy(btnPlayerLyricsFuture);
        label_34->setBuddy(btnPlayerLyricsSpotlight);
        label_49->setBuddy(btnPlayerLyricsSpotlight);
        label_145->setBuddy(lyricBackgroundTransparency);
        label_146->setBuddy(lyricBackgroundTransparency);
        label_43->setBuddy(boxMusicEnable);
        label_47->setBuddy(leMusicPath);
        label_48->setBuddy(rbMusicRandomOrder);
        label_50->setBuddy(spinMusicCrossfadeDelay);
        label_42->setBuddy(rbQueueNewEnd);
        label_46->setBuddy(boxSaveQueueOnExit);
        label_44->setBuddy(boxWebEnable);
        label_45->setBuddy(boxWebAllowAddSong);
        label_36->setBuddy(rbMidiNative);
        label_35->setBuddy(spinLyricDelay);
        label_51->setBuddy(boxFallbackEncoding);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SettingsDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SettingsDialog, qOverload<>(&QDialog::reject));
        QObject::connect(boxBackgroundTransitions, &QCheckBox::toggled, spinBackgroundDelay, &QSpinBox::setEnabled);
        QObject::connect(boxWebEnable, &QCheckBox::toggled, boxWebAllowAddSong, &QCheckBox::setEnabled);
        QObject::connect(boxMusicEnable, &QCheckBox::toggled, groupMusicPlayer, &QGroupBox::setEnabled);
        QObject::connect(boxMusicCrossfade, &QCheckBox::toggled, spinMusicCrossfadeDelay, &QSpinBox::setEnabled);

        tabWidget->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Spivak Karaoke Player Settings", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SettingsDialog", "Collection information", nullptr));
        label_7->setText(QCoreApplication::translate("SettingsDialog", "This is a", nullptr));
        boxCollectionTypeFS->setText(QCoreApplication::translate("SettingsDialog", "filesystem collection (including mapped dri&ves)", nullptr));
        boxCollectionTypeHTTP->setText(QCoreApplication::translate("SettingsDialog", "Web collection", nullptr));
        lblRootDir_2->setText(QCoreApplication::translate("SettingsDialog", "Collection name:", nullptr));
        lblRootDir->setText(QCoreApplication::translate("SettingsDialog", "Root directory of the local &Karaoke collection:", nullptr));
#if QT_CONFIG(whatsthis)
        leCollectionPath->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Karaoke songs are typically stored on disk in a specific folder. This folder may contain one or more Karaoke songs, as well as other subfolders containing Karaoke songs. This folder would be your collection root path, and should be specified here.</p><p>For example, if you have the following folder structure:</p><p><span style=\" font-style:italic;\">C:\\Users\\Me\\Documents\\Karaoke\\<br/>C:\\Users\\Me\\Documents\\Karaoke\\Beatles\\Yesterday.kar<br/>C:\\Users\\Me\\Documents\\Karaoke\\Bee Gees\\How deep is your love.zip</span></p><p>your collection root path would be <span style=\" font-weight:600;\">C:\\Users\\Me\\Documents\\Karaoke\\</span></p><p>You can also store your collection on an HTTP server which serves the similar data structure. Please read the documentation how to do this.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnBrowseCollection->setText(QString());
        label_25->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        lblHTTPauth->setText(QCoreApplication::translate("SettingsDialog", "Authentication infor&mation if needed:", nullptr));
        leHTTPuser->setPlaceholderText(QCoreApplication::translate("SettingsDialog", "login", nullptr));
        leHTTPpass->setPlaceholderText(QCoreApplication::translate("SettingsDialog", "password", nullptr));
        label_26->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        lblFSdetectLang->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        lblCollectionLanguage->setText(QCoreApplication::translate("SettingsDialog", "Default language for &undetected songs:", nullptr));
        label_28->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("SettingsDialog", "Artist and title are separated by:", nullptr));
        label_32->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        boxCollectionLanguage->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Sets the language for either all the songs (if detection is disabled), or only for the songs which language is not detected. If you know your collection only contains the songs in certain language, you can set this option and disable the language detection to speed up the scan.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        boxCollectionSeparator->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This option is used for detecting the <span style=\" font-weight:600;\">Artist </span>(Singer, Performer) and <span style=\" font-weight:600;\">Title </span>(Song name) of a Karaoke song. While this information could be sometime obtained from the Karaoke song itself, this information may be not reliable, and is often not available at all (for example for CD+G files). Therefore the only reliable way is to use the file and folder names.</p><p>The &quot;A-HA/Take on me&quot; option means the Artist is the folder name. In this case the scanner assumes this folder only contains the songs for this particular artist. The file name of each song in this case is a song title.</p><p>The &quot;A-HA - Take on me&quot; option means the information about the Artist and Title is stored in the file name itself. In this case the scanner separates them by a combination of space-dash-space and assumes the left part is artist, and the right part is title. Using a space-dash-space instead of just a dash is imp"
                        "ortant, as using only a dash in the case above would result in the artist name &quot;A&quot; and song title &quot;HA - Take on me&quot;, which would be incorrect.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        boxCollectionDetectLang->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>The scanner is able to detect the language the Karaoke <span style=\" font-weight:600;\">text</span> lyrics are written into, and store it in the database during the scan. This information will be available during search and browsing, and allows users to look directly for songs in a specific language, for example Chinese, Russian or Italian. This will slow down the scan roughly by 10%.</p><p><span style=\" font-weight:600;\">This option only works with text lyrics</span>, and does not work with non-text Karaoke files such as video or CD+G (and the language scanner is not invoked on them). Currenly supported text lyrics formats are KAR, Karafun, LRC and UltraStar.</p><p><span style=\" font-style:italic;\">Please note this option controls language detection, and not lyrics encoding detection, which is detected separately and automatically.</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        boxCollectionDetectLang->setText(QCoreApplication::translate("SettingsDialog", "Detect the karaoke song language for text lyrics (seen in browse/search)", nullptr));
#if QT_CONFIG(whatsthis)
        leCollectionName->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>A name for your collection</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        boxColelctionZIP->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>If you have Karaoke songs which are stored in ZIP archives (typical example would be MP3+G, where an MP3 and associated CD+G file with the same file name are stored in a single ZIP archive), please check this checkbox. This will ensure ZIP files are analyzed during the database scan, and those songs would be available during the search.</p><p>However if you do not have any ZIP archives containing Karaoke songs, you can uncheck this box and all ZIP archives would be ignored.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        boxColelctionZIP->setText(QCoreApplication::translate("SettingsDialog", "Consider all ZIP archives as possibly containing karaoke songs and analyze them", nullptr));
        boxIgnoreSSLerrors->setText(QCoreApplication::translate("SettingsDialog", "Ignore SSL certificate errors", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("SettingsDialog", "Paste a path or URL from your collection to see how the artist and title are detected:", nullptr));
        label_12->setText(QCoreApplication::translate("SettingsDialog", "Path/URL:", nullptr));
        lblTestArtistTitle->setText(QCoreApplication::translate("SettingsDialog", "Not detected artist or title", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("SettingsDialog", "Collection management", nullptr));
        lblCollectionInfo->setText(QString());
        btnUpdateCollection->setText(QCoreApplication::translate("SettingsDialog", "Update", nullptr));
        btnEraseCollection->setText(QCoreApplication::translate("SettingsDialog", "Erase", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabCollections), QCoreApplication::translate("SettingsDialog", "Collection", nullptr));
        label->setText(QCoreApplication::translate("SettingsDialog", "Background type:", nullptr));
        boxBackgroundType->setItemText(0, QCoreApplication::translate("SettingsDialog", "Plain color", nullptr));
        boxBackgroundType->setItemText(1, QCoreApplication::translate("SettingsDialog", "Image or set of images with transitions", nullptr));
        boxBackgroundType->setItemText(2, QCoreApplication::translate("SettingsDialog", "Video or set of videos", nullptr));

#if QT_CONFIG(whatsthis)
        boxBackgroundType->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>You can specify one of three kinds of background for the player:</p><ul><li>A plain color, meaning the whole screen will be colored in a specific color;<li>An image or set of images. You will specify a directory containing one or more image files, which could be animated and transition to different images (slideshow);<li>A video or set of videos. You will specify a directory containing one or more video files.</ul></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("SettingsDialog", "If a &karaoke song comes with a background (i.e. UltraStar):", nullptr));
#if QT_CONFIG(whatsthis)
        rbBackgroundIgnoreCustom->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Certain formats such as KaraFun, UltraStar and MP3+LRC allow the creator to specify a different background image, which is embedded into a file. This option controls which background would be shown when those karaoke files are played:</p><p>- If you set it to &quot;<span style=\" font-weight:600;\">Ignore it</span>&quot;, your background will always show on those songs, even if the creator embedded a background image into the Karaoke file.</p><p>- If you set it to &quot;<span style=\" font-weight:600;\">Use it</span>&quot;, and the Karaoke file contains a background, it will be shown instead of yours when this song is played.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbBackgroundIgnoreCustom->setText(QCoreApplication::translate("SettingsDialog", "I&gnore it", nullptr));
        rbBackgroundUseCustom->setText(QCoreApplication::translate("SettingsDialog", "&Use it", nullptr));
        label_19->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        boxCDGtransparent->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>CD+G files come with its own background, which is typically black and fills up the whole screen. Therefore your background images or videos are not shown when CD+G files are played.</p><p><br/></p><p>Enabling this option &quot;hacks&quot; the CD+G format by making its background color transparent. This allows your background to be shown even when CD+G files are being played. However some CD+G formats might become difficult to read when this option is enabled.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        boxCDGtransparent->setText(QCoreApplication::translate("SettingsDialog", "Make CD+G background transparent", nullptr));
        label_20->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        groupBackgroundColor->setTitle(QCoreApplication::translate("SettingsDialog", "Color parameters", nullptr));
        label_15->setText(QCoreApplication::translate("SettingsDialog", "Use the following color as background:", nullptr));
#if QT_CONFIG(whatsthis)
        btnBackgroundColor->setWhatsThis(QCoreApplication::translate("SettingsDialog", "Preview window text color for the text which has been sung.", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnBackgroundColor->setText(QCoreApplication::translate("SettingsDialog", "PushButton", nullptr));
        groupBackgroundImage->setTitle(QCoreApplication::translate("SettingsDialog", "Image parameters", nullptr));
        label_16->setText(QCoreApplication::translate("SettingsDialog", "Root path to background images:", nullptr));
#if QT_CONFIG(whatsthis)
        lePathImages->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Please specify the directory containing one or more images (or image directories) in JPG or PNG formats. All those images will be read, and if more than one image is present, they will be shown in a sequence.</p><p>Please choose the images carefully - a background image with many different details and bright colors distracts the singer and makes it hard to read the words.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnBrowseImages->setText(QString());
        label_21->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        boxBackgroundTransitions->setText(QCoreApplication::translate("SettingsDialog", "Enable image transition and show each image for at most", nullptr));
#if QT_CONFIG(whatsthis)
        spinBackgroundDelay->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>The background image shown is typically only changed when the animation sequence ends. This option will also force to change the background image every specified number of seconds. Choose the large number if you have only few images, and a smaller number if you have a lot of images.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        spinBackgroundDelay->setSuffix(QCoreApplication::translate("SettingsDialog", " seconds", nullptr));
        label_22->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        groupBackgroundVideo->setTitle(QCoreApplication::translate("SettingsDialog", "Video parameters", nullptr));
        label_17->setText(QCoreApplication::translate("SettingsDialog", "Root path to background &videos:", nullptr));
#if QT_CONFIG(whatsthis)
        lePathVideos->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Please specify the directory containing one or more video files (or directories with video files) in AVI, MP4 or MKV formats. All those videos will be read, and if more than one video is present, they will be shown in an order.</p><p>Please choose the videos carefully - a fast-pacing background video with a lot of actions and bright colors distracts the singer and makes it hard to read the words.</p><p>The background video may have sound, but it will be muted by the Player.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnBrowseVideos->setText(QString());
        label_23->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("SettingsDialog", "Background", nullptr));
        groupCDG_2->setTitle(QCoreApplication::translate("SettingsDialog", "Text lyrics rendering", nullptr));
        label_24->setText(QCoreApplication::translate("SettingsDialog", "Font:", nullptr));
#if QT_CONFIG(whatsthis)
        fontPlayerLyrics->setWhatsThis(QCoreApplication::translate("SettingsDialog", "Font family for preview window", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("SettingsDialog", "Screen should fit at least", nullptr));
#if QT_CONFIG(whatsthis)
        spinMaxLyricFontLines->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>The player will automatically detect the maximum possible font size, and will use the largest font which will fit the longest line of the song. However if the song has very short sentences, this will result in having letters of half-screen size which will be constantly moving, making singing difficult. Using this setting it is possible to restrict the maximum font size so the font will stay small enough to fit the requested number of lines in a screen.</p><p>The value depends on your screen resolution; to get the best value, please try the songs which have short lyric sentences. For 1920x1080 HDMI the reasonable number is between 4 and 8 lines.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        spinMaxLyricFontLines->setSuffix(QCoreApplication::translate("SettingsDialog", " lines", nullptr));
        label_41->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("SettingsDialog", "Colors", nullptr));
        label_33->setText(QCoreApplication::translate("SettingsDialog", "Top scrolling line", nullptr));
#if QT_CONFIG(whatsthis)
        btnPlayerLyricsNotification->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This color will be used for the top notification scrolling line text.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnPlayerLyricsNotification->setText(QCoreApplication::translate("SettingsDialog", "PushButton", nullptr));
        label_37->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_29->setText(QCoreApplication::translate("SettingsDialog", "On-screen information", nullptr));
#if QT_CONFIG(whatsthis)
        btnPlayerLyricsInfo->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This color will be used for on-screen (not top) information messages.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnPlayerLyricsInfo->setText(QCoreApplication::translate("SettingsDialog", "PushButton", nullptr));
        label_39->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_30->setText(QCoreApplication::translate("SettingsDialog", "&Lyrics already sung", nullptr));
#if QT_CONFIG(whatsthis)
        btnPlayerLyricsPast->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Color of lyrics which have been sung already.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnPlayerLyricsPast->setText(QCoreApplication::translate("SettingsDialog", "PushButton", nullptr));
#if QT_CONFIG(whatsthis)
        label_38->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This color will be used to show the lyrics which were already sung.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_38->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_31->setText(QCoreApplication::translate("SettingsDialog", "Lyrics not sung &yet", nullptr));
#if QT_CONFIG(whatsthis)
        btnPlayerLyricsFuture->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Color of lyrics which are not sung yet (future lyrics)</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnPlayerLyricsFuture->setText(QCoreApplication::translate("SettingsDialog", "PushButton", nullptr));
        label_40->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_34->setText(QCoreApplication::translate("SettingsDialog", "Lyrics spotlight", nullptr));
#if QT_CONFIG(whatsthis)
        btnPlayerLyricsSpotlight->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Color of lyrics in the spotlight - the tiny spot where the song is currently being played.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        btnPlayerLyricsSpotlight->setText(QCoreApplication::translate("SettingsDialog", "PushButton", nullptr));
#if QT_CONFIG(whatsthis)
        label_49->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This color will be used to show the lyrics which were already sung.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_49->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_145->setText(QCoreApplication::translate("SettingsDialog", "Tint background by", nullptr));
#if QT_CONFIG(whatsthis)
        label_146->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This color will be used to show the lyrics which were already sung.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_146->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        lyricBackgroundTransparency->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>Specifies how much to &quot;tint&quot; the background when playing Karaoke. This helps you to see the lyrics better, but makes the background less visible. The value could be in range of 0% (background is fully transparent) to 100% (background is fully tinted, i.e. dark).</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        lyricBackgroundTransparency->setSuffix(QCoreApplication::translate("SettingsDialog", " %", nullptr));
        lyricBackgroundTransparency->setPrefix(QString());
        groupRenderingExample->setTitle(QCoreApplication::translate("SettingsDialog", "Text rendering example", nullptr));
        lblTextRenderingExample->setText(QCoreApplication::translate("SettingsDialog", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("SettingsDialog", "Player", nullptr));
#if QT_CONFIG(whatsthis)
        boxMusicEnable->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>If you are using this player as a Karaoke machine for guest entertainment, you probably want it to play something even when nobody is singing. This attracts people's attention to the machine, and makes them more eager to sing.</p><p>If this option is enabled, the player will play the music from the directory of your choice when no Karaoke is being played. The music will start when the queue is empty, and will automatically pause as soon as new songs are put into the queue. The music will resume once the queue is empty again.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        boxMusicEnable->setText(QCoreApplication::translate("SettingsDialog", "Enable the music player, which plays music when the queue is empty", nullptr));
        label_43->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        groupMusicPlayer->setTitle(QCoreApplication::translate("SettingsDialog", "Music player parameters", nullptr));
        label_5->setText(QCoreApplication::translate("SettingsDialog", "Music files directory root:", nullptr));
#if QT_CONFIG(whatsthis)
        leMusicPath->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>The player will look up for the music files in this directory. The supported music files could be in MP3, OGG, FLAC or WMA formats. The player will also look in all subdirectories, if any. This lookup happens when the player starts, so please make sure this directory contains a limited number of files.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_47->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("SettingsDialog", "Play the music from this directory:", nullptr));
#if QT_CONFIG(whatsthis)
        rbMusicRandomOrder->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This option controls the order the music files are played.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbMusicRandomOrder->setText(QCoreApplication::translate("SettingsDialog", "in random order", nullptr));
        rbMusicSortOrder->setText(QCoreApplication::translate("SettingsDialog", "a&lphabetically ordered", nullptr));
        label_48->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        boxMusicCrossfade->setText(QCoreApplication::translate("SettingsDialog", "Cross-fade the music and karaoke for", nullptr));
#if QT_CONFIG(whatsthis)
        spinMusicCrossfadeDelay->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>If this option is enabled, the music will cross-fade (i.e. its volume will turn down graduately) for the specified number of seconds before starting playing the Karaoke. After Karaoke ends, the music will also increase back into the desired volume graduately. This makes the appearance more professional, and such setup is typical in professional Karaoke shows.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        spinMusicCrossfadeDelay->setSuffix(QCoreApplication::translate("SettingsDialog", " seconds", nullptr));
        label_50->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        btnBrowseMusic->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("SettingsDialog", "Music", nullptr));
        lblCustomMessages->setText(QCoreApplication::translate("SettingsDialog", "This functionality is only available for registered users. Please register your application using Help/Register menu.", nullptr));
        groupDisplayMessages->setTitle(QCoreApplication::translate("SettingsDialog", "Here you can customize the messages shown on the application screen when no songs are being played", nullptr));
        label_52->setText(QCoreApplication::translate("SettingsDialog", "Second row custom message:", nullptr));
        label_27->setText(QCoreApplication::translate("SettingsDialog", "First row custom message:", nullptr));
        label_53->setText(QCoreApplication::translate("SettingsDialog", "Third row custom message:", nullptr));
        label_54->setText(QCoreApplication::translate("SettingsDialog", "If you leave the field empty, the default message will be shown. If you want to hide the field, enter a single space there.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("SettingsDialog", "Main Screen", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("SettingsDialog", "Song queueing and rotation", nullptr));
        label_11->setText(QCoreApplication::translate("SettingsDialog", "New singers are added at:", nullptr));
        rbQueueNewStart->setText(QCoreApplication::translate("SettingsDialog", "next in the &queue", nullptr));
#if QT_CONFIG(whatsthis)
        rbQueueNewEnd->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This option controld queuing when a new singer joins an existing rotation and adds a song the first time. Consider the following three-singer queue in which singer Adam wants to add a song &quot;It is mine&quot;:</p><p>&quot;Another day&quot; by John<br/>&quot;My way&quot; by Sam<br/>&quot;Here she is&quot; by Stasy<br/>&quot;Second night&quot; by John</p><p>If the <span style=\" font-weight:600;\">next in queue</span> option is selected, the new singer will be put next, and the queue would be:</p><p>&quot;Another day&quot; by John<br/><span style=\" color:#ff0000;\">&quot;It is mine&quot; by Adam</span><br/>&quot;My way&quot; by Sam<br/>&quot;Here she is&quot; by Stasy<br/>&quot;Second night&quot; by John</p><p>However if <span style=\" font-weight:600;\">at the end of rotation</span> option is selected, the new singers will be added at the end of rotation, so the queue would be:</p><p>&quot;Another day&quot; by John<br/>&quot;My way&quot; by Sam<br/>&quot;Here she is&quot; by Stasy<br/>"
                        "<span style=\" color:#ff0000;\">&quot;It is mine&quot; by Adam</span><br/>&quot;Second night&quot; by John</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbQueueNewEnd->setText(QCoreApplication::translate("SettingsDialog", "at the end of the rotation", nullptr));
        label_42->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        boxSaveQueueOnExit->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>If this option is checked, the player will save the queue upon exit, and will load it upon start. This means that if you restart the player, the queue will be saved.</p><p>If this option is not checked, the player will only load the queue if it crashed. Otherwise it will start with an empty queue.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        boxSaveQueueOnExit->setText(QCoreApplication::translate("SettingsDialog", "Save the current singer queue when the application exits", nullptr));
        label_46->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("SettingsDialog", "Web interface", nullptr));
#if QT_CONFIG(whatsthis)
        boxWebEnable->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>This option enables built-in Web interface which allows the users to browse, search and (if <span style=\" font-weight:600;\">Allow queueing songs</span> is checked) add the songs into the rotation from their laptops or phones.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        boxWebEnable->setText(QCoreApplication::translate("SettingsDialog", "Enable Web interface", nullptr));
        label_44->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        boxWebAllowAddSong->setText(QCoreApplication::translate("SettingsDialog", "Allow queueing songs", nullptr));
        label_45->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        groupLIRC->setTitle(QCoreApplication::translate("SettingsDialog", "LIRC setup", nullptr));
        boxLIRCenable->setText(QCoreApplication::translate("SettingsDialog", "Enable LIRC, and use the following device:", nullptr));
        label_10->setText(QCoreApplication::translate("SettingsDialog", "Remote buttons to actions mapping file:", nullptr));
        btnBrowseLIRCmapping->setText(QString());
        groupBox_9->setTitle(QCoreApplication::translate("SettingsDialog", "Advanced", nullptr));
        label_3->setText(QCoreApplication::translate("SettingsDialog", "MIDI player:", nullptr));
        rbMidiBuiltin->setText(QCoreApplication::translate("SettingsDialog", "b&uilt-in", nullptr));
#if QT_CONFIG(whatsthis)
        rbMidiNative->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>The multimedia API for most operating systems does not come with a MIDI player. While GStreamer framework the player is using supports most popular MIDI software synthesers (such as Timidity, Fluidsynth and Wildmidi), setting them up is a non-trivial task. Especially on Windows, but even on Linux several distributions (such as OpenSuSE Leap) are bundled with GStreamer which has no MIDI packages prebuilt.</p><p>To compensate for this lack of functionality, the player comes with built-in MIDI syntheser, and is able to play MIDI files without any external support. The sound is good, but of course using large soundfonts it is possible to make it better. If you want a better sound, and went through the pain of configuring native MIDI playback through GStreamer, please choose the &quot;GStreamer&quot; option. Otherwise please keep the &quot;built-in&quot; option set.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        rbMidiNative->setText(QCoreApplication::translate("SettingsDialog", "&GStreamer", nullptr));
        label_36->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("SettingsDialog", "Music-lyrics delay:", nullptr));
#if QT_CONFIG(whatsthis)
        spinLyricDelay->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>If your computer is connected to TV and to amplifier using different cables, and you use an amplifier with digital processing, it might add a delay. Some HDMI cables also add delay for sound channel, which results in all lyrics being a little earlier, or a little later.</p><p>If this is the case with your equipment, adjusting this value will help. Increase the value to increase the music-lyrics delay (means lyrics would show later), and decrease the value to have the lyrics shown earlier. The value is in milliseconds.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        spinLyricDelay->setSuffix(QCoreApplication::translate("SettingsDialog", " ms", nullptr));
        spinLyricDelay->setPrefix(QString());
        label_35->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("SettingsDialog", "Fallback text encoding:", nullptr));
#if QT_CONFIG(tooltip)
        boxFallbackEncoding->setToolTip(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        boxFallbackEncoding->setWhatsThis(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p>For the text-based lyrics which are not using Unicode, and which do not specify the encoding, Spivak must guess the character encoding to properly show them. It uses a built-in encoding detection library. However this library sometime fails to detect the encoding, and in this case Spivak will use the &quot;fallback&quot; encoding specified in this setting. Default fallback is UTF-8.</p><p>Change this setting if your lyrics come up unreadable, and you see the message &quot;Automatic encoding detection failed&quot; in your logs.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_51->setText(QCoreApplication::translate("SettingsDialog", "<html><head/><body><p><a href=\"background\"><span style=\" text-decoration: underline; color:#2980b9;\">Help</span></a></p></body></html>", nullptr));
        boxForceFullScreen->setText(QCoreApplication::translate("SettingsDialog", "Always start in full screen", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("SettingsDialog", "Misc", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
