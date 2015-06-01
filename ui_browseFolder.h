/********************************************************************************
** Form generated from reading ui file 'browseFolder.ui'
**
** Created: Sat Nov 7 17:11:02 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_BROWSEFOLDER_H
#define UI_BROWSEFOLDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowseFolderClass
{
public:
    QLineEdit *txtLocation;
    QDialogButtonBox *userOption;
    QTreeWidget *lstDirs;

    void setupUi(QDialog *BrowseFolderClass)
    {
        if (BrowseFolderClass->objectName().isEmpty())
            BrowseFolderClass->setObjectName(QString::fromUtf8("BrowseFolderClass"));
        BrowseFolderClass->resize(347, 508);
        txtLocation = new QLineEdit(BrowseFolderClass);
        txtLocation->setObjectName(QString::fromUtf8("txtLocation"));
        txtLocation->setGeometry(QRect(9, 10, 331, 31));
        userOption = new QDialogButtonBox(BrowseFolderClass);
        userOption->setObjectName(QString::fromUtf8("userOption"));
        userOption->setGeometry(QRect(90, 470, 166, 32));
        userOption->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);
        lstDirs = new QTreeWidget(BrowseFolderClass);
        lstDirs->setObjectName(QString::fromUtf8("lstDirs"));
        lstDirs->setGeometry(QRect(10, 50, 331, 411));

        retranslateUi(BrowseFolderClass);
        QObject::connect(userOption, SIGNAL(rejected()), BrowseFolderClass, SLOT(reject()));
        QObject::connect(userOption, SIGNAL(accepted()), BrowseFolderClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(BrowseFolderClass);
    } // setupUi

    void retranslateUi(QDialog *BrowseFolderClass)
    {
        BrowseFolderClass->setWindowTitle(QApplication::translate("BrowseFolderClass", "Browse..", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = lstDirs->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("BrowseFolderClass", "Virtual Directories", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(BrowseFolderClass);
    } // retranslateUi

};

namespace Ui {
    class BrowseFolderClass: public Ui_BrowseFolderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSEFOLDER_H
