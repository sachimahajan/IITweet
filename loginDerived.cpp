#include "loginDerived.h"
#include <QDebug>
LoginDialogDerived ::LoginDialogDerived() 
{
  setupUi(this);
    QObject::connect(this,SIGNAL(accepted()),this,SLOT(emitUserPassword()));
//   QObject::connect(this,SIGNAL(rejected()),this,SLOT(emitUserPassword()));


}
void LoginDialogDerived ::emitUserPassword()
{
//   qDebug()<<"loginDeribved"<<loginLineEdit->text()<<passwordLineEdit->text();
  emit setUserPassword(loginLineEdit->text(),passwordLineEdit->text());
}

