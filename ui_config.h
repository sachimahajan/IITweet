/********************************************************************************
** Form generated from reading ui file 'config.ui'
**
** Created: Thu Oct 8 06:04:44 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CONFIG_H
#define UI_CONFIG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>
#include <lineedit.h>

QT_BEGIN_NAMESPACE

class Ui_configDialog
{
public:
    QDialogButtonBox *buttonBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    LineEdit *proxyUrl;
    LineEdit *proxyPort;
    LineEdit *userName;
    LineEdit *password;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QComboBox *comboBox;
    QWidget *tab_2;
    QLabel *label;

    void setupUi(QDialog *configDialog)
    {
        if (configDialog->objectName().isEmpty())
            configDialog->setObjectName(QString::fromUtf8("configDialog"));
        configDialog->resize(402, 272);
        configDialog->setAutoFillBackground(false);
        buttonBox = new QDialogButtonBox(configDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 361, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tabWidget = new QTabWidget(configDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 401, 231));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setElideMode(Qt::ElideRight);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayoutWidget = new QWidget(tab);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 9, 351, 201));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        proxyUrl = new LineEdit(gridLayoutWidget);
        proxyUrl->setObjectName(QString::fromUtf8("proxyUrl"));

        gridLayout->addWidget(proxyUrl, 1, 1, 1, 1);

        proxyPort = new LineEdit(gridLayoutWidget);
        proxyPort->setObjectName(QString::fromUtf8("proxyPort"));

        gridLayout->addWidget(proxyPort, 2, 1, 1, 1);

        userName = new LineEdit(gridLayoutWidget);
        userName->setObjectName(QString::fromUtf8("userName"));

        gridLayout->addWidget(userName, 3, 1, 1, 1);

        password = new LineEdit(gridLayoutWidget);
        password->setObjectName(QString::fromUtf8("password"));

        gridLayout->addWidget(password, 4, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 60, 181, 101));
        tabWidget->addTab(tab_2, QString());
        QWidget::setTabOrder(proxyUrl, proxyPort);
        QWidget::setTabOrder(proxyPort, userName);
        QWidget::setTabOrder(userName, password);
        QWidget::setTabOrder(password, buttonBox);
        QWidget::setTabOrder(buttonBox, tabWidget);

        retranslateUi(configDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), configDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), configDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(configDialog);
    } // setupUi

    void retranslateUi(QDialog *configDialog)
    {
        configDialog->setWindowTitle(QApplication::translate("configDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("configDialog", "proxy URL", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("configDialog", "Proxy Port", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("configDialog", "UserName", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("configDialog", "Password", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("configDialog", "Proxy Type", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("configDialog", "QNetworkProxy::NoProxy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("configDialog", "QNetworkProxy::DefaultProxy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("configDialog", "QNetworkProxy::Socks5Proxy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("configDialog", "QNetworkProxy::HttpProxy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("configDialog", "QNetworkProxy::HttpCachingProxy", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("configDialog", "QNetworkProxy::FtpCachingProxy", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("configDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"1\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px;\" width=\"100%\" cellspacing=\"1\" cellpadding=\"2\">\n"
"<tr>\n"
"<td width=\"25%\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#000000;\">Constant</p></td>\n"
"<td width=\"15%\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#000000;\">Value</p></td>\n"
"<td width=\"60%\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-"
                        "left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-weight:600; color:#000000;\">Description</p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">QNetworkProxy::NoProxy</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">2</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\">No proxying is used</p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-"
                        "block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">QNetworkProxy::DefaultProxy</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">0</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\">Proxy is determined based on the application proxy set using <a href=\"qnetworkproxy.html#setApplicationProxy\"><span style=\" text-decoration: underline; color:#004faf;\">setApplicationProxy</span></a>()</p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-fami"
                        "ly:'Courier New,courier';\">QNetworkProxy::Socks5Proxy</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">1</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><a href=\"qnetworkproxy.html#socks5\"><span style=\" text-decoration: underline; color:#004faf;\">Socks5</span></a> proxying is used</p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">QNetworkProxy::HttpProxy</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p align=\"center\" style=\" margi"
                        "n-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">3</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\">HTTP transparent proxying is used</p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">QNetworkProxy::HttpCachingProxy</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">4</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style"
                        "=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\">Proxying for HTTP requests only</p></td></tr>\n"
"<tr>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">QNetworkProxy::FtpCachingProxy</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"><span style=\" font-family:'Courier New,courier';\">5</span></p></td>\n"
"<td style=\" vertical-align:top;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\">Proxying for FTP requests only</p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("configDialog", "Network", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("configDialog", "Reserved For Future Use", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("configDialog", "Generic", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(configDialog);
    } // retranslateUi

};

namespace Ui {
    class configDialog: public Ui_configDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIG_H
