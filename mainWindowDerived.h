#ifndef __MAINWINDOWDERIVED_H__
#define __MAINWINDOWDERIVED_H__
#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QCloseEvent>
#include <QMenu>
#include <QDebug>
#include <QObject>
/** this class ha been defined just to make available certainfeatures like system tray
 integration + system tray menu ,  to the program 

*/
class mainWindowDerived : public QMainWindow 
{
	Q_OBJECT
	public:
	mainWindowDerived(QWidget *parent ,Qt::WindowFlags flags);
	protected:
	void closeEvent(QCloseEvent *event);
	private:
	QSystemTrayIcon myTrayIcon;	
	QMenu *myTrayIconMenu;
	QAction *minimizeAction;
	QAction *maximizeAction;
	QAction *restoreAction;
	QAction *quitAction;
	public slots:
	void showMessage(QString);//show a message in notification
	signals:
	void quit();
	
};

#endif // __MAINWINDOWDERIVED_H__
