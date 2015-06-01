/* this program is developed on QDevelop -- a good Qt IDE by Jean - Luc Biord and others :) & Kdevelop also
qt used = Qt Open Source Edition version 4.4.1-snapshot-20080419.
on open suse 10.3
[02:53:53 PM Tuesday, December 09 2008] update i am using qt 4.4.3 and qt creator/kate/vim and ubuntu
[Sun Feb 1 18:37:36 2009] qt 4.5 beta kdevelop and Vim on Open Suse 11.0
*/
#include <QApplication>
#include "MainWindow/mainwindowimpl.h"
#include "loginDerived.h"
#include "sendTwitDerived.h"
#include "twitterbackendinterface.h"
//#include "styleSheet.h"
#include "derivedconfigdialog.h"
//#include "imagebrowserimpl.h"
#include <QDialog>

//start tageditor main
#include "tageditor.h"
#include <QtGui>
#include <QApplication>
//end tageditor main

//add explorer code
#include "explorer.h"
#include <QtGui>
#include <QApplication>

//include server too
#include "server.h"

void readfromfile();
void writetofile();

int main(int argc,char **argv)
{
    readfromfile();
    //start tageditor code
    QApplication a1(argc, argv);
    TagEditor w;
    w.show();
    a1.connect(&a1, SIGNAL(lastWindowClosed()), &a1, SLOT(quit()));

    //connected - end tageditor code

    ///////////explorer.h
    QApplication a2(argc, argv);
    Explorer e;
    e.show();
    a2.connect(&a2, SIGNAL(lastWindowClosed()), &a2, SLOT(quit()));

    //////////////end of explorer.h

    // Initialize the Window
    if (argc<2) {
                printf("No input!!");
            return -1;
    }
   linkedlist *lst = new linkedlist();
    int i=1;
   while (i<argc) {
           lst->add(argv[i]);
          i++;
    }
    w.setFileName(lst);
    lst->removeAll();
    delete lst;





    //declarations
        QApplication app(argc,argv);

        //this is derived from ui file and the added functionality  system tray MainWindow Class
        MainWindowImpl mainWindow(NULL/*,Qt::FramelessWindowHint*/);
        Ui::loginDialogDerived myLoginDialog;
        Ui::sendTwitDerived mySendTwitDialog;
        Ui::derivedConfigDialog myConfigDialog;
        Backend::twitterBackend myTwitter;
	

        //connection slots
        QObject::connect(&mainWindow,SIGNAL(quit()),&app,SLOT(quit()));//just quit when you get quit signal
        QObject::connect(mainWindow.actionLogin,SIGNAL(triggered()),&myLoginDialog,SLOT(show()));
        QObject::connect(mainWindow.actionSet_New_Status,SIGNAL(triggered()),&mySendTwitDialog,SLOT(show()));
        QObject::connect(mainWindow.actionPublic,SIGNAL(triggered()),&myTwitter,SLOT(public_timeline()));
        QObject::connect(mainWindow.actionFriends,SIGNAL(triggered()),&myTwitter,SLOT(friends_timeline()));
        QObject::connect(mainWindow.actionOwn,SIGNAL(triggered()),&myTwitter,SLOT(user_timeline()));
//         QObject::connect(mainWindow.actionConfigure,SIGNAL(triggered()),&myConfigDialog,SLOT(show()));

        QObject::connect(&myLoginDialog,SIGNAL(setUserPassword(QString,QString)) ,&myTwitter ,SLOT(setUserNamePassword(QString,QString)) );/**login connection */
        QObject::connect(&myTwitter,SIGNAL(public_timeline(QString)),mainWindow.textLabelMainWindow,SLOT(setText(QString))
        );//connection for shwoing public timeline
        QObject::connect(&mySendTwitDialog,SIGNAL(sendTwit(QString)),&myTwitter,SLOT(update(QString)));
		
        //QObject::connect(mainWindow.action,SIGNAL(triggered()),&myTwitter,SLOT());
        //property setting
//	app.setStyleSheet(globalStyle);
         mySendTwitDialog.setupUi(&containerSendTwitDialog);
        mainWindow.show();
	myConfigDialog.show();
        return app.exec();
        return a1.exec();
        return a2.exec();
        writetofile();
}
