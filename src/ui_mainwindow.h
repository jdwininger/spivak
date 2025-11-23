/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPlay_file;
    QAction *action_Quit;
    QAction *action_About;
    QAction *actionStart_playing;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionNext_song_in_queue;
    QAction *actionPrevious_song_in_queue;
    QAction *actionSettings;
    QAction *actionShow_karaoke_queue_window;
    QAction *actionShow_music_queue_window;
    QAction *actionToggle_full_screen;
    QAction *actionRun_First_Time_Wizard;
    QAction *actionSend_the_feedback;
    QAction *actionRegistration;
    QWidget *centralWidget;
    QMenuBar *mainMenuBar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QMenu *menuPlayer;
    QMenu *menuWindows;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/application.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        actionPlay_file = new QAction(MainWindow);
        actionPlay_file->setObjectName("actionPlay_file");
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName("action_Quit");
        action_About = new QAction(MainWindow);
        action_About->setObjectName("action_About");
        actionStart_playing = new QAction(MainWindow);
        actionStart_playing->setObjectName("actionStart_playing");
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName("actionPause");
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName("actionStop");
        actionNext_song_in_queue = new QAction(MainWindow);
        actionNext_song_in_queue->setObjectName("actionNext_song_in_queue");
        actionPrevious_song_in_queue = new QAction(MainWindow);
        actionPrevious_song_in_queue->setObjectName("actionPrevious_song_in_queue");
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName("actionSettings");
        actionShow_karaoke_queue_window = new QAction(MainWindow);
        actionShow_karaoke_queue_window->setObjectName("actionShow_karaoke_queue_window");
        actionShow_karaoke_queue_window->setCheckable(true);
        actionShow_music_queue_window = new QAction(MainWindow);
        actionShow_music_queue_window->setObjectName("actionShow_music_queue_window");
        actionShow_music_queue_window->setCheckable(true);
        actionToggle_full_screen = new QAction(MainWindow);
        actionToggle_full_screen->setObjectName("actionToggle_full_screen");
        actionToggle_full_screen->setCheckable(true);
        actionRun_First_Time_Wizard = new QAction(MainWindow);
        actionRun_First_Time_Wizard->setObjectName("actionRun_First_Time_Wizard");
        actionSend_the_feedback = new QAction(MainWindow);
        actionSend_the_feedback->setObjectName("actionSend_the_feedback");
        actionRegistration = new QAction(MainWindow);
        actionRegistration->setObjectName("actionRegistration");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        MainWindow->setCentralWidget(centralWidget);
        mainMenuBar = new QMenuBar(MainWindow);
        mainMenuBar->setObjectName("mainMenuBar");
        mainMenuBar->setGeometry(QRect(0, 0, 400, 23));
        menu_File = new QMenu(mainMenuBar);
        menu_File->setObjectName("menu_File");
        menu_Help = new QMenu(mainMenuBar);
        menu_Help->setObjectName("menu_Help");
        menuPlayer = new QMenu(mainMenuBar);
        menuPlayer->setObjectName("menuPlayer");
        menuWindows = new QMenu(mainMenuBar);
        menuWindows->setObjectName("menuWindows");
        MainWindow->setMenuBar(mainMenuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        mainMenuBar->addAction(menu_File->menuAction());
        mainMenuBar->addAction(menuPlayer->menuAction());
        mainMenuBar->addAction(menuWindows->menuAction());
        mainMenuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionPlay_file);
        menu_File->addSeparator();
        menu_File->addAction(actionSettings);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menu_Help->addAction(actionRun_First_Time_Wizard);
        menu_Help->addAction(actionRegistration);
        menu_Help->addSeparator();
        menu_Help->addAction(action_About);
        menu_Help->addSeparator();
        menuPlayer->addAction(actionStart_playing);
        menuPlayer->addAction(actionPause);
        menuPlayer->addAction(actionStop);
        menuPlayer->addSeparator();
        menuPlayer->addAction(actionNext_song_in_queue);
        menuPlayer->addAction(actionPrevious_song_in_queue);
        menuPlayer->addSeparator();
        menuPlayer->addAction(actionToggle_full_screen);
        menuWindows->addAction(actionShow_karaoke_queue_window);
        menuWindows->addAction(actionShow_music_queue_window);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Spivak Karaoke Player", nullptr));
        actionPlay_file->setText(QCoreApplication::translate("MainWindow", "&Play file...", nullptr));
#if QT_CONFIG(shortcut)
        actionPlay_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Quit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        action_Quit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        action_About->setText(QCoreApplication::translate("MainWindow", "&About...", nullptr));
        actionStart_playing->setText(QCoreApplication::translate("MainWindow", "&Start playing", nullptr));
        actionPause->setText(QCoreApplication::translate("MainWindow", "&Pause", nullptr));
        actionStop->setText(QCoreApplication::translate("MainWindow", "St&op", nullptr));
        actionNext_song_in_queue->setText(QCoreApplication::translate("MainWindow", "&Next song in queue", nullptr));
        actionPrevious_song_in_queue->setText(QCoreApplication::translate("MainWindow", "Previous song &in queue", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "P&references...", nullptr));
        actionShow_karaoke_queue_window->setText(QCoreApplication::translate("MainWindow", "&Karaoke queue window", nullptr));
        actionShow_music_queue_window->setText(QCoreApplication::translate("MainWindow", "&Music queue window", nullptr));
        actionToggle_full_screen->setText(QCoreApplication::translate("MainWindow", "&Toggle full screen", nullptr));
#if QT_CONFIG(shortcut)
        actionToggle_full_screen->setShortcut(QCoreApplication::translate("MainWindow", "F11", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRun_First_Time_Wizard->setText(QCoreApplication::translate("MainWindow", "&Run First Time Wizard", nullptr));
        actionSend_the_feedback->setText(QCoreApplication::translate("MainWindow", "&Send the feedback...", nullptr));
        actionRegistration->setText(QCoreApplication::translate("MainWindow", "Registration...", nullptr));
        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        menuPlayer->setTitle(QCoreApplication::translate("MainWindow", "&Control", nullptr));
        menuWindows->setTitle(QCoreApplication::translate("MainWindow", "Windows", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
