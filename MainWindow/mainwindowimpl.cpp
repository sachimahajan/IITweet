#include "mainwindowimpl.h"
#include <QPrinter>
#include <QPrintDialog>
#include <QDebug>
#include <QMessageBox>
//
MainWindowImpl::MainWindowImpl(QWidget *parent ,Qt::WindowFlags flags ) : mainWindowDerived (parent , flags)
{
	setupUi(this);
	//defining the menu actions of main windwos here.
	
	//Here Comes File Menu
	//connect(actionLogout, SIGNAL(triggered()), this, SIGNAL(doLogout()));
        //connect(actionPrint, SIGNAL(triggered()), this, SLOT(doPrint()));
	connect(actionAbout_Qt, SIGNAL(triggered()), this, SLOT(showAboutQt()));
    connect(actionAbout_Qt_Twitter, SIGNAL(triggered()), this, SLOT(showAboutQtTwitter()));
//     connect(actionView_Images_From_Area,SIGNAL(triggered() ),this ,SIGNAL(showImageBrowser()));
	//(actionExit, SIGNAL(triggered())already handled in Ui File

	//Here Comes Timeline Menu

}

void MainWindowImpl::showAboutQt()
{
	QMessageBox temp;
	temp.aboutQt(this,"About Qt Framework/Toolkit");
}
void MainWindowImpl::showAboutQtTwitter()
{
	QMessageBox temp;
	temp.about(this,"About QtTwitter Program","HI this should be where i say about my progam");
}

