/********************************************************************************
** Form generated from reading UI file 'welcome_wizard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOME_WIZARD_H
#define UI_WELCOME_WIZARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizard>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWizard
{
public:
    QWizardPage *wizardWelcome;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QWizardPage *wizardTestSound;
    QVBoxLayout *verticalLayout_2;
    QWizardPage *wizardPlaySingleFile;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QWizardPage *wizardSetupCollection;
    QVBoxLayout *verticalLayout_4;
    QLabel *lblCollection;
    QWizardPage *wizardQueueWindow;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QWizardPage *wizardManagingQueue;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_4;
    QWizardPage *wizardPageInternet;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QWizardPage *wizardPageBackground;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QWizardPage *wizardMusic;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QWizardPage *wizardFinal;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;

    void setupUi(QWizard *WelcomeWizard)
    {
        if (WelcomeWizard->objectName().isEmpty())
            WelcomeWizard->setObjectName("WelcomeWizard");
        WelcomeWizard->resize(751, 412);
        WelcomeWizard->setWizardStyle(QWizard::ClassicStyle);
        wizardWelcome = new QWizardPage();
        wizardWelcome->setObjectName("wizardWelcome");
        verticalLayout = new QVBoxLayout(wizardWelcome);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(wizardWelcome);
        label->setObjectName("label");
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        WelcomeWizard->addPage(wizardWelcome);
        wizardTestSound = new QWizardPage();
        wizardTestSound->setObjectName("wizardTestSound");
        verticalLayout_2 = new QVBoxLayout(wizardTestSound);
        verticalLayout_2->setObjectName("verticalLayout_2");
        WelcomeWizard->addPage(wizardTestSound);
        wizardPlaySingleFile = new QWizardPage();
        wizardPlaySingleFile->setObjectName("wizardPlaySingleFile");
        verticalLayout_3 = new QVBoxLayout(wizardPlaySingleFile);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_2 = new QLabel(wizardPlaySingleFile);
        label_2->setObjectName("label_2");
        label_2->setWordWrap(true);

        verticalLayout_3->addWidget(label_2);

        WelcomeWizard->addPage(wizardPlaySingleFile);
        wizardSetupCollection = new QWizardPage();
        wizardSetupCollection->setObjectName("wizardSetupCollection");
        verticalLayout_4 = new QVBoxLayout(wizardSetupCollection);
        verticalLayout_4->setObjectName("verticalLayout_4");
        lblCollection = new QLabel(wizardSetupCollection);
        lblCollection->setObjectName("lblCollection");
        lblCollection->setWordWrap(true);

        verticalLayout_4->addWidget(lblCollection);

        WelcomeWizard->addPage(wizardSetupCollection);
        wizardQueueWindow = new QWizardPage();
        wizardQueueWindow->setObjectName("wizardQueueWindow");
        verticalLayout_5 = new QVBoxLayout(wizardQueueWindow);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_3 = new QLabel(wizardQueueWindow);
        label_3->setObjectName("label_3");
        label_3->setWordWrap(true);

        verticalLayout_5->addWidget(label_3);

        WelcomeWizard->addPage(wizardQueueWindow);
        wizardManagingQueue = new QWizardPage();
        wizardManagingQueue->setObjectName("wizardManagingQueue");
        verticalLayout_6 = new QVBoxLayout(wizardManagingQueue);
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_4 = new QLabel(wizardManagingQueue);
        label_4->setObjectName("label_4");
        label_4->setWordWrap(true);

        verticalLayout_6->addWidget(label_4);

        WelcomeWizard->addPage(wizardManagingQueue);
        wizardPageInternet = new QWizardPage();
        wizardPageInternet->setObjectName("wizardPageInternet");
        verticalLayout_8 = new QVBoxLayout(wizardPageInternet);
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_6 = new QLabel(wizardPageInternet);
        label_6->setObjectName("label_6");
        label_6->setWordWrap(true);

        verticalLayout_8->addWidget(label_6);

        WelcomeWizard->addPage(wizardPageInternet);
        wizardPageBackground = new QWizardPage();
        wizardPageBackground->setObjectName("wizardPageBackground");
        verticalLayout_7 = new QVBoxLayout(wizardPageBackground);
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_5 = new QLabel(wizardPageBackground);
        label_5->setObjectName("label_5");
        label_5->setWordWrap(true);

        verticalLayout_7->addWidget(label_5);

        WelcomeWizard->addPage(wizardPageBackground);
        wizardMusic = new QWizardPage();
        wizardMusic->setObjectName("wizardMusic");
        verticalLayout_9 = new QVBoxLayout(wizardMusic);
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_7 = new QLabel(wizardMusic);
        label_7->setObjectName("label_7");
        label_7->setWordWrap(true);

        verticalLayout_9->addWidget(label_7);

        WelcomeWizard->addPage(wizardMusic);
        wizardFinal = new QWizardPage();
        wizardFinal->setObjectName("wizardFinal");
        verticalLayout_10 = new QVBoxLayout(wizardFinal);
        verticalLayout_10->setObjectName("verticalLayout_10");
        label_8 = new QLabel(wizardFinal);
        label_8->setObjectName("label_8");
        label_8->setWordWrap(true);

        verticalLayout_10->addWidget(label_8);

        WelcomeWizard->addPage(wizardFinal);

        retranslateUi(WelcomeWizard);

        QMetaObject::connectSlotsByName(WelcomeWizard);
    } // setupUi

    void retranslateUi(QWizard *WelcomeWizard)
    {
        WelcomeWizard->setWindowTitle(QCoreApplication::translate("WelcomeWizard", "Welcome to Spivak!", nullptr));
        wizardWelcome->setTitle(QCoreApplication::translate("WelcomeWizard", "Welcome to Spivak!", nullptr));
        wizardWelcome->setSubTitle(QString());
        label->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>This tutorial will help you to configure Spivak, and to learn about major player features.</p><p>Every screen will ask you to try something, this text will be in <span style=\" color:#0000ff;\">blue color</span> to help you distinguish it from the rest of the text.</p><p>The black screen window you see is the player's main screen window. This screen will show Karaoke when it is played. You can make it fullscreen by going into Control menu and choosing &quot;Toggle Full Screen&quot; option. Press F11 or Esc key to get back to the windowed screen.</p><p><span style=\" font-weight:600; color:#0000ff;\">Practice: please try to switch to full screen, and then switch back to window (by pressing F11), then click Next.</span></p><p><span style=\" font-style:italic;\">Advanced users: you can start in full screen by passing the -fs command-line option.</span></p></body></html>", nullptr));
        wizardTestSound->setTitle(QCoreApplication::translate("WelcomeWizard", "Testing your sound system", nullptr));
        wizardTestSound->setSubTitle(QString());
        wizardPlaySingleFile->setTitle(QCoreApplication::translate("WelcomeWizard", "Let's play a Karaoke file", nullptr));
        label_2->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>Karaoke files consist of music and lyrics. Some files contain both music and lyrics (and other things such as images and videos) in a single file. Those are KaraFun files (with .KFN extension), KAR/MIDI files (typically with .KAR extension), and ZIP archives containing both a music and lyric file.</p><p>However it is more typical to have a music file and a lyric file separately. A music file is a typical MP3, OGG or WMA file. A lyric file usually has CDG or LRC extension. In this case the player expects both files to have the same file name, such as &quot;a-ha take on me.mp3&quot; and &quot;a-ha take on me.cdg&quot;, and to be stored in the same directory.</p><p><span style=\" color:#0000ff;\">You can play a single Karaoke file by going into File menu, and choosing the &quot;Play file&quot; option. </span></p><p><span style=\" color:#0000ff;\">Choose either a music or a lyric file (you can also choose a ZIP archive containing both), and it will start playing.</span></p><p><span style=\" f"
                        "ont-style:italic; color:#000000;\">Player supports following Karaoke formats: CDG, LRC, KAR, KaraFun, Encore Lyric, KOK, Ultrastar. It also supports AVI, MKV, MP4 and WMV videos, and ZIP archives with the above.</span></p></body></html>", nullptr));
        wizardSetupCollection->setTitle(QCoreApplication::translate("WelcomeWizard", "Setting up your Karaoke collection", nullptr));
        lblCollection->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>Most Karaoke fans have tons of Karaoke songs, which are in most cases organized as collections. The player has full support for song collections, and supports some extra cool features once you set up the collection.</p><p>Typically your collection is organized by having all the songs in a directory, or a set of directories, such as {PLATFORMDIR}. You need to tell the player where it is.</p><p><span style=\" color:#0000ff;\">1. Please open {PREFERENCES}. In this menu please go to Collection tab and add the root directory of your collection (such as {PLATFORMDIR}) in &quot;Root directory of local Karaoke collection&quot;. </span></p><p><span style=\" color:#0000ff;\">2. Configure the other options as you please (click on Help link next to option if you don't understand it). Make sure you properly configure the artist-title recognition; test it in the Test window right there.</span></p><p><span style=\" color:#0000ff;\">3 Click Update button to scan your files. </span></p><p><span style=\" c"
                        "olor:#0000ff;\">4. Wait until the scan finishes (you can stop it early if you're eager, but don't forget to rescan it later).</span></p><p><span style=\" font-style:italic;\">If you want to start your collection from scratch, just click on Erase button down there.</span></p></body></html>", nullptr));
        wizardQueueWindow->setTitle(QCoreApplication::translate("WelcomeWizard", "Queue management window", nullptr));
        label_3->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>Now once you have set up a collection, you can use the Queue window to add songs into the queue. </p><p><span style=\" color:#0000ff;\">Go to Windows menu and click on Karaoke Queue item. A new window will open.</span></p><p>There you will see:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Singer Queue</span> on the left, showing the queue of singers, and the chosen songs.</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Player controls</span> at the botton, letting you to start, stop or pause the song, and move forward/backward in the queue</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0p"
                        "x;\"><span style=\" font-weight:600;\">Search for the song</span> in collection on the right side, with the search field at bottom, allowing you to search in your collection. The songs then could be dragged then into the Singer Queue window.</li></ul><p><span style=\" color:#0000ff;\">Please add at least three songs to the queue:</span></p><p><span style=\" color:#0000ff;\">1. Add first song by clicking on </span><span style=\" font-weight:600; color:#0000ff;\">Add</span><span style=\" color:#0000ff;\"> button, and clicking on </span><span style=\" font-weight:600; color:#0000ff;\">File from disk</span><span style=\" color:#0000ff;\">.</span></p><p><span style=\" color:#0000ff;\">2. Add second song by clicking on </span><span style=\" font-weight:600; color:#0000ff;\">Add</span><span style=\" color:#0000ff;\"> button, and clicking on </span><span style=\" font-weight:600; color:#0000ff;\">Search in collection</span><span style=\" color:#0000ff;\"> (note you need to double-click on a song to select it)</span></"
                        "p><p><span style=\" color:#0000ff;\">3. Add a third song by searching for it in the right panel, and drag it </span><span style=\" font-weight:600; color:#0000ff;\">into the empty space</span><span style=\" color:#0000ff;\"> in Singer Queue.</span></p></body></html>", nullptr));
        wizardManagingQueue->setTitle(QCoreApplication::translate("WelcomeWizard", "Controlling the queue", nullptr));
        label_4->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>You can also charge the order the singers will sing, by dragging the singers in the queue, and dropping it where they would sing.</p><p><span style=\" color:#0000ff;\">In your queue please try to drag singers around. Note that when dragging, you must drop a singer at the exact line between the singers, which will take some practice.</span></p><p>You can also drop songs from the search panel between the singers (which will add a new song). However you can also drop songs from the search panel on the singers, which will replace the song currently queued.</p><p><span style=\" color:#0000ff;\">Please seach for songs in the right search panel, and drop them between singers. Then drop a song on the singer. See the difference?</span></p><p><span style=\" color:#0000ff;\">Now you can start the queue by pressing Play button on a player. Try to press Pause or Stop buttons, and use Forward and Back player buttons to move in queue. See how the bold item in the Singer Queue moves back and forth.</span"
                        "></p><p><span style=\" font-style:italic;\">When main window has focus, you can use arrows (up/down does next/previous item, left-right seeks in a song, X stops the song, Space pauses it, Enter starts playing.</span></p></body></html>", nullptr));
        wizardPageInternet->setTitle(QCoreApplication::translate("WelcomeWizard", "Adding songs through Web browser", nullptr));
        label_6->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>Setting up a collection makes it possible for your Karaoke party to add the songs into queue themselves, making it essentially self-managing. For this you need to enable the internal Web service.</p><p><span style=\" color:#0000ff;\">Open Preferences menu, go to Misc tab, click the </span><span style=\" font-weight:600; color:#0000ff;\">Enable Web interface</span><span style=\" color:#0000ff;\"> checkbox. Then click Ok and close the Preferences. </span>Notice that the once the player is stopped, the &quot;Please select song&quot; text is replaced by a string <span style=\" text-decoration: underline; color:#0000ff;\">http://your-IP-address:8000</span>.</p><p><span style=\" color:#0000ff;\">Please open a Web browser and enter this string (including the :8000) into the address bar of your Web browser, and enjoy access through the Web interface.</span></p><p>Web interface allows your friends to:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list"
                        "-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Search the song collection by song title and artist;</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Browse the song collection by letter;</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Automatically add themselves with chosen songs as singers (this could be disabled in Settings/Misc/Allow queuing songs)</li></ul><p>When adding songs, the player uses Smart Queue and enforces <span style=\" font-weight:600;\">fair rotation.</span> If one user adds many songs at once, they will not be queued together, but would be spread letting other singers sing in a fair rotation.</p><p><span style=\" font-style:italic;\">Note: in some cases your network configuration may prevent connecting to the device. In this case please make sure t"
                        "he firewall on a machine allows remote connections to this port.</span></p></body></html>", nullptr));
        wizardPageBackground->setTitle(QCoreApplication::translate("WelcomeWizard", "Making it look cool - adding background", nullptr));
        label_5->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>Lyrics against black screen don't look cool, so it is time to add background. A player can use one of the following backgrounds:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Images</span> - you specify a directory containing multiple images, which will be shown in a zoomed animation, and transition from one image to another.</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Videos</span> - you specify a directory containing one or more videos, which will be played muted in a loop, one after another.</li></ul><p><span style=\" color:#0000ff;\">To use this functonality, please open the Preferences menu and go to Background tab. Select image or video background in"
                        " a dropdown list, and specify the directory containing images or videos, at your preference. Click Ok, and you should see your background starting playing, even if no songs are playing.</span></p><p>Sometime songs come with their own supplied background (Ultrastar supports this), in which case the player will show the song background, unless the relevant setting in Background tab is selected.</p><p><span style=\" font-style:italic;\">Best background videos are slow-moving videos of nature or landmark views (such as many National Geographic videos). Best background images are large, darker colors nature images. Fast-action videos and images with many bright details make it harder to focus on lyrics, or even see them.</span></p></body></html>", nullptr));
        wizardMusic->setTitle(QCoreApplication::translate("WelcomeWizard", "Background Music", nullptr));
        label_7->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>Sometime the party goes slow, singers come and go, and there are periods of silence between songs. Wouldn't it be nice to fill them up with music, which would only play when nobody is singing, would automatically pause when someone starts a song, and once all singers finish, it would resume?</p><p>The player supports this functionality. To enable it:</p><p><span style=\" color:#0000ff;\">1. Create a directory, and copy there the music files you would like to be played as fillers;</span></p><p><span style=\" color:#0000ff;\">2. Open Preferences menu, and go to Music tab.</span></p><p><span style=\" color:#0000ff;\">3. Check the box &quot;Enable the music player...&quot; at top</span></p><p><span style=\" color:#0000ff;\">4. Select your music directory as Music files directory root, and choose the order.</span></p><p>Once you finish settings, the music will be loaded. <span style=\" color:#0000ff;\">Now if you press &quot;Play&quot; when the queue is empty, the music will start playing.</sp"
                        "an> It will automatically fade out when the Karaoke song is started, and will resume once the song is finished if no more songs are started.</p><p>You can also control music through a Music Queue window available in <span style=\" font-weight:600;\">Windows/Music Queue</span> menu.</p></body></html>", nullptr));
        wizardFinal->setTitle(QCoreApplication::translate("WelcomeWizard", "You are finished!", nullptr));
        label_8->setText(QCoreApplication::translate("WelcomeWizard", "<html><head/><body><p>This overview focused on most important functionality. There is however much more, for example LIRC support or lyrics text encoding autodetection.</p><p>And there is a professional version focused on Karaoke DJs. That version is not free, but has more functionality, such as:</p><p>1.<span style=\" font-weight:600;\"> Users can search and add songs directly through your Web site</span>, which means:</p><ul style=\"margin-top: 0px; margin-bottom: 0px; margin-left: 0px; margin-right: 0px; -qt-list-indent: 1;\"><li style=\" margin-top:12px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You are not depending on open WiFi being available;</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can require registration and maintain the user base of your fans;</li><li style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:"
                        "0px;\">You can incorporate various content such as promotions;</li><li style=\" margin-top:0px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">You can sell various perks such as ability to &quot;skip the line&quot;</li></ul><p>2. <span style=\" font-weight:600;\">Secure, remote song collection</span>, so you do not need to equip every DJ station with a 2Tb hard drive to store the songs, 90% of which will never be sung, and you do not need to keep them in sync;</p><p>3. <span style=\" font-weight:600;\">Better search, allowing search by words in lyrics</span>, for those singers who know &quot;those words were there&quot;, but can't remember a singer nor artist;</p><p>4. <span style=\" font-weight:600;\">Dedicated Android application</span> with your branding (iOS in progress);</p><p>5. <span style=\" font-weight:600;\">Premium support</span>, access to play statistics for the management, and many more.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWizard: public Ui_WelcomeWizard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOME_WIZARD_H
