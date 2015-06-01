/********************************************************************************
** Form generated from reading ui file 'explorer.ui'
**
** Created: Sat Nov 7 17:11:02 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_EXPLORER_H
#define UI_EXPLORER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ExplorerClass
{
public:
    QLabel *lblStatus;
    QPushButton *btnGo;
    QLineEdit *txtLocation;
    QPushButton *btnBack;
    QPushButton *btnForward;
    QLabel *lblLocation;
    QPushButton *btnUp;
    QLabel *lblTime;
    QPushButton *btnRefresh;
    QTreeWidget *lstDirs;
    QListView *lstFiles;

    void setupUi(QDialog *ExplorerClass)
    {
        if (ExplorerClass->objectName().isEmpty())
            ExplorerClass->setObjectName(QString::fromUtf8("ExplorerClass"));
        ExplorerClass->resize(695, 578);
        lblStatus = new QLabel(ExplorerClass);
        lblStatus->setObjectName(QString::fromUtf8("lblStatus"));
        lblStatus->setGeometry(QRect(10, 550, 260, 20));
        lblStatus->setWordWrap(false);
        btnGo = new QPushButton(ExplorerClass);
        btnGo->setObjectName(QString::fromUtf8("btnGo"));
        btnGo->setGeometry(QRect(650, 30, 31, 21));
        txtLocation = new QLineEdit(ExplorerClass);
        txtLocation->setObjectName(QString::fromUtf8("txtLocation"));
        txtLocation->setGeometry(QRect(340, 30, 300, 21));
        btnBack = new QPushButton(ExplorerClass);
        btnBack->setObjectName(QString::fromUtf8("btnBack"));
        btnBack->setGeometry(QRect(10, 10, 50, 50));
        const QIcon icon = QIcon(QString::fromUtf8(":/Icons/images/Left.bmp"));
        btnBack->setIcon(icon);
        btnForward = new QPushButton(ExplorerClass);
        btnForward->setObjectName(QString::fromUtf8("btnForward"));
        btnForward->setGeometry(QRect(60, 10, 50, 50));
        const QIcon icon1 = QIcon(QString::fromUtf8(":/Icons/images/Right.bmp"));
        btnForward->setIcon(icon1);
        lblLocation = new QLabel(ExplorerClass);
        lblLocation->setObjectName(QString::fromUtf8("lblLocation"));
        lblLocation->setGeometry(QRect(240, 30, 71, 20));
        lblLocation->setWordWrap(false);
        btnUp = new QPushButton(ExplorerClass);
        btnUp->setObjectName(QString::fromUtf8("btnUp"));
        btnUp->setGeometry(QRect(110, 10, 50, 50));
        const QIcon icon2 = QIcon(QString::fromUtf8(":/Icons/images/Up.bmp"));
        btnUp->setIcon(icon2);
        lblTime = new QLabel(ExplorerClass);
        lblTime->setObjectName(QString::fromUtf8("lblTime"));
        lblTime->setGeometry(QRect(450, 550, 230, 20));
        lblTime->setWordWrap(false);
        btnRefresh = new QPushButton(ExplorerClass);
        btnRefresh->setObjectName(QString::fromUtf8("btnRefresh"));
        btnRefresh->setGeometry(QRect(160, 10, 50, 50));
        const QIcon icon3 = QIcon(QString::fromUtf8(":/Icons/images/Refresh.bmp"));
        btnRefresh->setIcon(icon3);
        lstDirs = new QTreeWidget(ExplorerClass);
        lstDirs->setObjectName(QString::fromUtf8("lstDirs"));
        lstDirs->setGeometry(QRect(10, 70, 211, 471));
        lstFiles = new QListView(ExplorerClass);
        lstFiles->setObjectName(QString::fromUtf8("lstFiles"));
        lstFiles->setGeometry(QRect(230, 70, 461, 471));

        retranslateUi(ExplorerClass);

        QMetaObject::connectSlotsByName(ExplorerClass);
    } // setupUi

    void retranslateUi(QDialog *ExplorerClass)
    {
        ExplorerClass->setWindowTitle(QApplication::translate("ExplorerClass", "Virtual Explorer", 0, QApplication::UnicodeUTF8));
        lblStatus->setText(QString());
        btnGo->setText(QApplication::translate("ExplorerClass", "&Go", 0, QApplication::UnicodeUTF8));
        btnGo->setShortcut(QApplication::translate("ExplorerClass", "Alt+G", 0, QApplication::UnicodeUTF8));
        btnBack->setText(QString());
        btnForward->setText(QString());
        lblLocation->setText(QApplication::translate("ExplorerClass", "Location", 0, QApplication::UnicodeUTF8));
        btnUp->setText(QString());
        lblTime->setText(QString());
        btnRefresh->setText(QString());
        QTreeWidgetItem *___qtreewidgetitem = lstDirs->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("ExplorerClass", "HiddenCol", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("ExplorerClass", "Virtual Directories", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(ExplorerClass);
    } // retranslateUi

};

namespace Ui {
    class ExplorerClass: public Ui_ExplorerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLORER_H
