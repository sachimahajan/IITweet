/********************************************************************************
** Form generated from reading ui file 'mainWindow.ui'
**
** Created: Sun Nov 22 04:47:33 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLogin;
    QAction *actionLogout;
    QAction *actionPublic;
    QAction *actionFriends;
    QAction *actionOwn;
    QAction *actionAbout_Qt_Twitter;
    QAction *actionAbout_Qt;
    QAction *actionHelp;
    QAction *actionExit;
    QAction *actionFacebook_Status_Twitter;
    QAction *actionConfigure;
    QAction *actionSet_New_Status;
    QAction *actionFollow;
    QAction *actionLeave;
    QAction *actionUser_Methods;
    QAction *actionDirect_Message_Methods;
    QAction *actionFriendship_Methods;
    QAction *actionArchive;
    QAction *actionFavorite_Methods;
    QAction *actionBlock_Methods;
    QAction *actionIs_It_Working;
    QAction *actionAdd_Tag;
    QAction *actionDelete_Tag;
    QAction *actionModify;
    QAction *actionView_Tag;
    QAction *actionExplore_Tags;
    QAction *actionEXPLORE;
    QWidget *centralwidget;
    QLabel *twitterImageLabel;
    QLabel *textLabelMainWindow;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuAbout;
    QMenu *menuAbout_2;
    QMenu *menuTwitter;
    QMenu *menuConfigure;
    QMenu *menuTagger;
    QMenu *menuTagEXPLORE;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(526, 366);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/twitter/TwitterPostIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        actionLogin = new QAction(MainWindow);
        actionLogin->setObjectName(QString::fromUtf8("actionLogin"));
        actionLogin->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/twitter/RSS-Green-32 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogin->setIcon(icon1);
        actionLogin->setIconVisibleInMenu(true);
        actionLogout = new QAction(MainWindow);
        actionLogout->setObjectName(QString::fromUtf8("actionLogout"));
        actionLogout->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/twitter/RSS-Red-32 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionLogout->setIcon(icon2);
        actionPublic = new QAction(MainWindow);
        actionPublic->setObjectName(QString::fromUtf8("actionPublic"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/twitter/twitter_system_tray_2.0.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPublic->setIcon(icon3);
        actionFriends = new QAction(MainWindow);
        actionFriends->setObjectName(QString::fromUtf8("actionFriends"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/twitter/twitter_system_tray.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFriends->setIcon(icon4);
        actionOwn = new QAction(MainWindow);
        actionOwn->setObjectName(QString::fromUtf8("actionOwn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/twitter/twhitter_btn_02.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOwn->setIcon(icon5);
        actionAbout_Qt_Twitter = new QAction(MainWindow);
        actionAbout_Qt_Twitter->setObjectName(QString::fromUtf8("actionAbout_Qt_Twitter"));
        actionAbout_Qt_Twitter->setIcon(icon);
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/twitter/qt.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Qt->setIcon(icon6);
        actionHelp = new QAction(MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/twitter/help-about.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon7);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/twitter/RSS-BlkWt-32 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon8);
        actionFacebook_Status_Twitter = new QAction(MainWindow);
        actionFacebook_Status_Twitter->setObjectName(QString::fromUtf8("actionFacebook_Status_Twitter"));
        actionFacebook_Status_Twitter->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/twitter/icon.facebook.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFacebook_Status_Twitter->setIcon(icon9);
        actionConfigure = new QAction(MainWindow);
        actionConfigure->setObjectName(QString::fromUtf8("actionConfigure"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/twitter/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfigure->setIcon(icon10);
        actionSet_New_Status = new QAction(MainWindow);
        actionSet_New_Status->setObjectName(QString::fromUtf8("actionSet_New_Status"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/twitter/RSS-Blue-32 (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSet_New_Status->setIcon(icon11);
        actionFollow = new QAction(MainWindow);
        actionFollow->setObjectName(QString::fromUtf8("actionFollow"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/twitter/RSS-Purple-32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFollow->setIcon(icon12);
        actionLeave = new QAction(MainWindow);
        actionLeave->setObjectName(QString::fromUtf8("actionLeave"));
        actionLeave->setIcon(icon2);
        actionUser_Methods = new QAction(MainWindow);
        actionUser_Methods->setObjectName(QString::fromUtf8("actionUser_Methods"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/twitter/personal.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionUser_Methods->setIcon(icon13);
        actionDirect_Message_Methods = new QAction(MainWindow);
        actionDirect_Message_Methods->setObjectName(QString::fromUtf8("actionDirect_Message_Methods"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/twitter/message-unread.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionDirect_Message_Methods->setIcon(icon14);
        actionFriendship_Methods = new QAction(MainWindow);
        actionFriendship_Methods->setObjectName(QString::fromUtf8("actionFriendship_Methods"));
        actionArchive = new QAction(MainWindow);
        actionArchive->setObjectName(QString::fromUtf8("actionArchive"));
        actionFavorite_Methods = new QAction(MainWindow);
        actionFavorite_Methods->setObjectName(QString::fromUtf8("actionFavorite_Methods"));
        actionBlock_Methods = new QAction(MainWindow);
        actionBlock_Methods->setObjectName(QString::fromUtf8("actionBlock_Methods"));
        actionIs_It_Working = new QAction(MainWindow);
        actionIs_It_Working->setObjectName(QString::fromUtf8("actionIs_It_Working"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/twitter/questionmark"), QSize(), QIcon::Normal, QIcon::Off);
        actionIs_It_Working->setIcon(icon15);
        actionAdd_Tag = new QAction(MainWindow);
        actionAdd_Tag->setObjectName(QString::fromUtf8("actionAdd_Tag"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/twitter/add_user_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_Tag->setIcon(icon16);
        actionDelete_Tag = new QAction(MainWindow);
        actionDelete_Tag->setObjectName(QString::fromUtf8("actionDelete_Tag"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/twitter/remove_user_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelete_Tag->setIcon(icon17);
        actionModify = new QAction(MainWindow);
        actionModify->setObjectName(QString::fromUtf8("actionModify"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/twitter/edit_user_32.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionModify->setIcon(icon18);
        actionView_Tag = new QAction(MainWindow);
        actionView_Tag->setObjectName(QString::fromUtf8("actionView_Tag"));
        actionView_Tag->setIcon(icon13);
        actionExplore_Tags = new QAction(MainWindow);
        actionExplore_Tags->setObjectName(QString::fromUtf8("actionExplore_Tags"));
        actionEXPLORE = new QAction(MainWindow);
        actionEXPLORE->setObjectName(QString::fromUtf8("actionEXPLORE"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        twitterImageLabel = new QLabel(centralwidget);
        twitterImageLabel->setObjectName(QString::fromUtf8("twitterImageLabel"));
        twitterImageLabel->setGeometry(QRect(130, 80, 221, 61));
        twitterImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/twitter/iiTweet.jpg")));
        textLabelMainWindow = new QLabel(centralwidget);
        textLabelMainWindow->setObjectName(QString::fromUtf8("textLabelMainWindow"));
        textLabelMainWindow->setGeometry(QRect(40, 80, 511, 291));
        textLabelMainWindow->setLayoutDirection(Qt::LeftToRight);
        textLabelMainWindow->setAutoFillBackground(false);
        textLabelMainWindow->setTextFormat(Qt::RichText);
        textLabelMainWindow->setScaledContents(true);
        textLabelMainWindow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        textLabelMainWindow->setWordWrap(true);
        textLabelMainWindow->setOpenExternalLinks(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 526, 23));
        menubar->setAutoFillBackground(false);
        menubar->setStyleSheet(QString::fromUtf8("font: 75 italic 10pt \"Utopia\";\n"
""));
        menubar->setDefaultUp(false);
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuAbout_2 = new QMenu(menubar);
        menuAbout_2->setObjectName(QString::fromUtf8("menuAbout_2"));
        menuTwitter = new QMenu(menubar);
        menuTwitter->setObjectName(QString::fromUtf8("menuTwitter"));
        menuConfigure = new QMenu(menubar);
        menuConfigure->setObjectName(QString::fromUtf8("menuConfigure"));
        menuTagger = new QMenu(menuConfigure);
        menuTagger->setObjectName(QString::fromUtf8("menuTagger"));
        menuTagEXPLORE = new QMenu(menubar);
        menuTagEXPLORE->setObjectName(QString::fromUtf8("menuTagEXPLORE"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(false);
        toolBar->setAcceptDrops(false);
        toolBar->setLayoutDirection(Qt::LeftToRight);
        toolBar->setAutoFillBackground(false);
        toolBar->setStyleSheet(QString::fromUtf8(""));
        toolBar->setMovable(true);
        toolBar->setFloatable(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menubar->addAction(menuTwitter->menuAction());
        menubar->addAction(menuAbout_2->menuAction());
        menubar->addAction(menuConfigure->menuAction());
        menubar->addAction(menuTagEXPLORE->menuAction());
        menuFile->addAction(actionLogin);
        menuFile->addAction(actionLogout);
        menuFile->addSeparator();
        menuFile->addAction(actionConfigure);
        menuFile->addAction(actionExit);
        menuFile->addSeparator();
        menuAbout->addAction(actionPublic);
        menuAbout->addAction(actionFriends);
        menuAbout->addAction(actionOwn);
        menuAbout->addSeparator();
        menuAbout_2->addAction(actionIs_It_Working);
        menuAbout_2->addAction(actionAbout_Qt_Twitter);
        menuAbout_2->addAction(actionAbout_Qt);
        menuAbout_2->addSeparator();
        menuAbout_2->addAction(actionHelp);
        menuTwitter->addAction(actionSet_New_Status);
        menuTwitter->addAction(actionFollow);
        menuTwitter->addAction(actionLeave);
        menuTwitter->addAction(actionUser_Methods);
        menuTwitter->addAction(actionDirect_Message_Methods);
        menuTwitter->addSeparator();
        menuConfigure->addAction(menuTagger->menuAction());
        menuConfigure->addAction(actionExplore_Tags);
        menuTagger->addAction(actionAdd_Tag);
        menuTagger->addAction(actionDelete_Tag);
        menuTagger->addAction(actionModify);
        menuTagger->addAction(actionView_Tag);
        menuTagEXPLORE->addAction(actionEXPLORE);
        toolBar->addAction(actionLogin);
        toolBar->addAction(actionSet_New_Status);
        toolBar->addAction(actionFollow);
        toolBar->addAction(actionConfigure);
        toolBar->addAction(actionExit);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Twitter Client made in qt , This is UI First", 0, QApplication::UnicodeUTF8));
        actionLogin->setText(QApplication::translate("MainWindow", "&Login", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLogin->setToolTip(QApplication::translate("MainWindow", "Login To Twitter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionLogin->setStatusTip(QApplication::translate("MainWindow", "Simple Login to twitter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionLogout->setText(QApplication::translate("MainWindow", "Logout", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionLogout->setToolTip(QApplication::translate("MainWindow", "Logout From Twitter", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPublic->setText(QApplication::translate("MainWindow", "Publi&c", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        actionPublic->setStatusTip(QApplication::translate("MainWindow", "Display TimeLine's From Twitter Server", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        actionFriends->setText(QApplication::translate("MainWindow", "Friend&s", 0, QApplication::UnicodeUTF8));
        actionOwn->setText(QApplication::translate("MainWindow", "Ow&n", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt_Twitter->setText(QApplication::translate("MainWindow", "About Qt Twitter", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindow", "About Qt", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("MainWindow", "New From Twitter", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "E&xit", 0, QApplication::UnicodeUTF8));
        actionFacebook_Status_Twitter->setText(QApplication::translate("MainWindow", "Facebook Status = Twitter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionFacebook_Status_Twitter->setToolTip(QApplication::translate("MainWindow", "Set Facebook Status equal to Twitter's microblog from next update", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        actionFacebook_Status_Twitter->setStatusTip(QApplication::translate("MainWindow", "Set Facebook Status equal to Twitter's microblog from next update", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionFacebook_Status_Twitter->setWhatsThis(QApplication::translate("MainWindow", "Set Facebook Status equal to Twitter's microblog from next update", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        actionConfigure->setText(QApplication::translate("MainWindow", "Configure", 0, QApplication::UnicodeUTF8));
        actionSet_New_Status->setText(QApplication::translate("MainWindow", "Set New Status", 0, QApplication::UnicodeUTF8));
        actionFollow->setText(QApplication::translate("MainWindow", "Follow", 0, QApplication::UnicodeUTF8));
        actionLeave->setText(QApplication::translate("MainWindow", "Leave", 0, QApplication::UnicodeUTF8));
        actionUser_Methods->setText(QApplication::translate("MainWindow", "User Methods", 0, QApplication::UnicodeUTF8));
        actionDirect_Message_Methods->setText(QApplication::translate("MainWindow", "Direct Message Methods", 0, QApplication::UnicodeUTF8));
        actionFriendship_Methods->setText(QApplication::translate("MainWindow", "Friendship Methods", 0, QApplication::UnicodeUTF8));
        actionArchive->setText(QApplication::translate("MainWindow", "archive", 0, QApplication::UnicodeUTF8));
        actionFavorite_Methods->setText(QApplication::translate("MainWindow", "Favorite Methods", 0, QApplication::UnicodeUTF8));
        actionBlock_Methods->setText(QApplication::translate("MainWindow", "Block Methods", 0, QApplication::UnicodeUTF8));
        actionIs_It_Working->setText(QApplication::translate("MainWindow", "Is It Working?", 0, QApplication::UnicodeUTF8));
        actionAdd_Tag->setText(QApplication::translate("MainWindow", "Add Tag", 0, QApplication::UnicodeUTF8));
        actionDelete_Tag->setText(QApplication::translate("MainWindow", "Delete Tag", 0, QApplication::UnicodeUTF8));
        actionModify->setText(QApplication::translate("MainWindow", "Modify Tag", 0, QApplication::UnicodeUTF8));
        actionView_Tag->setText(QApplication::translate("MainWindow", "View Tag", 0, QApplication::UnicodeUTF8));
        actionExplore_Tags->setText(QApplication::translate("MainWindow", "Explore Tags", 0, QApplication::UnicodeUTF8));
        actionEXPLORE->setText(QApplication::translate("MainWindow", "EXPLORE", 0, QApplication::UnicodeUTF8));
        twitterImageLabel->setText(QString());
        textLabelMainWindow->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuAbout->setTitle(QApplication::translate("MainWindow", "&Timeline", 0, QApplication::UnicodeUTF8));
        menuAbout_2->setTitle(QApplication::translate("MainWindow", "&About", 0, QApplication::UnicodeUTF8));
        menuTwitter->setTitle(QApplication::translate("MainWindow", "T&witter", 0, QApplication::UnicodeUTF8));
        menuConfigure->setTitle(QApplication::translate("MainWindow", "Configure", 0, QApplication::UnicodeUTF8));
        menuTagger->setTitle(QApplication::translate("MainWindow", "Tagger", 0, QApplication::UnicodeUTF8));
        menuTagEXPLORE->setTitle(QApplication::translate("MainWindow", "tagEXPLORE", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
