/********************************************************************************
** Form generated from reading ui file 'tageditor.ui'
**
** Created: Wed Jun 11 20:49:29 2008
**      by: Qt User Interface Compiler version 4.3.1
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_TAGEDITOR_H
#define UI_TAGEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

class Ui_TagEditorClass
{
public:
    QLineEdit *txtTags;
    QDialogButtonBox *userOption;
    QLabel *lblTags;
    QLabel *lblFilenames;
    QLabel *lblFilenamesTxt;

    void setupUi(QDialog *TagEditorClass)
    {
    if (TagEditorClass->objectName().isEmpty())
        TagEditorClass->setObjectName(QString::fromUtf8("TagEditorClass"));
    TagEditorClass->resize(392, 117);
    txtTags = new QLineEdit(TagEditorClass);
    txtTags->setObjectName(QString::fromUtf8("txtTags"));
    txtTags->setGeometry(QRect(60, 40, 321, 22));
    userOption = new QDialogButtonBox(TagEditorClass);
    userOption->setObjectName(QString::fromUtf8("userOption"));
    userOption->setGeometry(QRect(110, 80, 160, 26));
    userOption->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);
    lblTags = new QLabel(TagEditorClass);
    lblTags->setObjectName(QString::fromUtf8("lblTags"));
    lblTags->setGeometry(QRect(10, 40, 52, 21));
    lblFilenames = new QLabel(TagEditorClass);
    lblFilenames->setObjectName(QString::fromUtf8("lblFilenames"));
    lblFilenames->setGeometry(QRect(10, 10, 52, 21));
    lblFilenamesTxt = new QLabel(TagEditorClass);
    lblFilenamesTxt->setObjectName(QString::fromUtf8("lblFilenamesTxt"));
    lblFilenamesTxt->setGeometry(QRect(60, 10, 321, 21));

    retranslateUi(TagEditorClass);
    QObject::connect(userOption, SIGNAL(rejected()), TagEditorClass, SLOT(reject()));
    QObject::connect(userOption, SIGNAL(accepted()), TagEditorClass, SLOT(accept()));

    QMetaObject::connectSlotsByName(TagEditorClass);
    } // setupUi

    void retranslateUi(QDialog *TagEditorClass)
    {
    TagEditorClass->setWindowTitle(QApplication::translate("TagEditorClass", "TagEditor", 0, QApplication::UnicodeUTF8));
    lblTags->setText(QApplication::translate("TagEditorClass", "Tag(s)", 0, QApplication::UnicodeUTF8));
    lblFilenames->setText(QApplication::translate("TagEditorClass", "File(s)", 0, QApplication::UnicodeUTF8));
    lblFilenamesTxt->setText(QApplication::translate("TagEditorClass", "None", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(TagEditorClass);
    } // retranslateUi

};

namespace Ui {
    class TagEditorClass: public Ui_TagEditorClass {};
} // namespace Ui

#endif // UI_TAGEDITOR_H
