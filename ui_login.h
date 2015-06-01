/********************************************************************************
** Form generated from reading ui file 'login.ui'
**
** Created: Sun Nov 22 04:47:33 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <lineedit.h>

QT_BEGIN_NAMESPACE

class Ui_loginDialog
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    LineEdit *loginLineEdit;
    QLabel *label;
    LineEdit *passwordLineEdit;
    QCheckBox *rememberPasswordCheckBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *login;
    QPushButton *cancel;

    void setupUi(QDialog *loginDialog)
    {
        if (loginDialog->objectName().isEmpty())
            loginDialog->setObjectName(QString::fromUtf8("loginDialog"));
        loginDialog->resize(279, 258);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginDialog->sizePolicy().hasHeightForWidth());
        loginDialog->setSizePolicy(sizePolicy);
        loginDialog->setMaximumSize(QSize(279, 258));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/twitter/twitter_system_tray1.png"), QSize(), QIcon::Normal, QIcon::Off);
        loginDialog->setWindowIcon(icon);
        verticalLayoutWidget = new QWidget(loginDialog);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 261, 242));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setScaledContents(false);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        loginLineEdit = new LineEdit(verticalLayoutWidget);
        loginLineEdit->setObjectName(QString::fromUtf8("loginLineEdit"));

        verticalLayout->addWidget(loginLineEdit);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        passwordLineEdit = new LineEdit(verticalLayoutWidget);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordLineEdit);

        rememberPasswordCheckBox = new QCheckBox(verticalLayoutWidget);
        rememberPasswordCheckBox->setObjectName(QString::fromUtf8("rememberPasswordCheckBox"));
        rememberPasswordCheckBox->setLayoutDirection(Qt::LeftToRight);
        rememberPasswordCheckBox->setTristate(false);

        verticalLayout->addWidget(rememberPasswordCheckBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        login = new QPushButton(verticalLayoutWidget);
        login->setObjectName(QString::fromUtf8("login"));

        horizontalLayout->addWidget(login);

        cancel = new QPushButton(verticalLayoutWidget);
        cancel->setObjectName(QString::fromUtf8("cancel"));

        horizontalLayout->addWidget(cancel);


        verticalLayout->addLayout(horizontalLayout);

        label->raise();
        passwordLineEdit->raise();
        rememberPasswordCheckBox->raise();
        label_2->raise();
        loginLineEdit->raise();

        retranslateUi(loginDialog);
        QObject::connect(login, SIGNAL(clicked()), loginDialog, SLOT(accept()));
        QObject::connect(cancel, SIGNAL(clicked()), loginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(loginDialog);
    } // setupUi

    void retranslateUi(QDialog *loginDialog)
    {
        loginDialog->setWindowTitle(QApplication::translate("loginDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("loginDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Username/E-mail:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("loginDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt;\">Password:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        rememberPasswordCheckBox->setText(QApplication::translate("loginDialog", "Remember Password", 0, QApplication::UnicodeUTF8));
        login->setText(QApplication::translate("loginDialog", "Login", 0, QApplication::UnicodeUTF8));
        cancel->setText(QApplication::translate("loginDialog", "Cancel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(loginDialog);
    } // retranslateUi

};

namespace Ui {
    class loginDialog: public Ui_loginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
