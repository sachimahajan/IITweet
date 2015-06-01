/********************************************************************************
** Form generated from reading ui file 'imageBrowser.ui'
**
** Created: Wed Oct 7 19:01:01 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_IMAGEBROWSER_H
#define UI_IMAGEBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imageBrowser
{
public:
    QFrame *frame;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButtonPrevious;
    QPushButton *pushButtonNext;
    QSlider *horizontalSliderForImage;
    QLCDNumber *lcdNumber;
    QLabel *label;

    void setupUi(QWidget *imageBrowser)
    {
        if (imageBrowser->objectName().isEmpty())
            imageBrowser->setObjectName(QString::fromUtf8("imageBrowser"));
        imageBrowser->resize(400, 300);
        frame = new QFrame(imageBrowser);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 20, 381, 271));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 361, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonPrevious = new QPushButton(gridLayoutWidget);
        pushButtonPrevious->setObjectName(QString::fromUtf8("pushButtonPrevious"));
        pushButtonPrevious->setMaximumSize(QSize(62, 16777215));

        gridLayout->addWidget(pushButtonPrevious, 1, 0, 2, 1);

        pushButtonNext = new QPushButton(gridLayoutWidget);
        pushButtonNext->setObjectName(QString::fromUtf8("pushButtonNext"));
        pushButtonNext->setMinimumSize(QSize(0, 0));
        pushButtonNext->setMaximumSize(QSize(41, 16777215));

        gridLayout->addWidget(pushButtonNext, 1, 2, 2, 1);

        horizontalSliderForImage = new QSlider(gridLayoutWidget);
        horizontalSliderForImage->setObjectName(QString::fromUtf8("horizontalSliderForImage"));
        horizontalSliderForImage->setValue(50);
        horizontalSliderForImage->setSliderPosition(50);
        horizontalSliderForImage->setOrientation(Qt::Horizontal);
        horizontalSliderForImage->setTickPosition(QSlider::TicksBothSides);

        gridLayout->addWidget(horizontalSliderForImage, 3, 0, 1, 3);

        lcdNumber = new QLCDNumber(gridLayoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMaximumSize(QSize(16777215, 24));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setFrameShadow(QFrame::Sunken);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(50));

        gridLayout->addWidget(lcdNumber, 0, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 1, 2, 1);


        retranslateUi(imageBrowser);
        QObject::connect(horizontalSliderForImage, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(imageBrowser);
    } // setupUi

    void retranslateUi(QWidget *imageBrowser)
    {
        imageBrowser->setWindowTitle(QApplication::translate("imageBrowser", "Form", 0, QApplication::UnicodeUTF8));
        pushButtonPrevious->setText(QApplication::translate("imageBrowser", "Previous", 0, QApplication::UnicodeUTF8));
        pushButtonNext->setText(QApplication::translate("imageBrowser", "Next", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("imageBrowser", "TextLabel", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(imageBrowser);
    } // retranslateUi

};

namespace Ui {
    class imageBrowser: public Ui_imageBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEBROWSER_H
