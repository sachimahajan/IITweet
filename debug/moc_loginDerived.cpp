/****************************************************************************
** Meta object code from reading C++ file 'loginDerived.h'
**
** Created: Thu Nov 5 00:09:41 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../loginDerived.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginDerived.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoginDialogDerived[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      34,   20,   19,   19, 0x05,

 // slots: signature, parameters, type, tag, flags
      67,   19,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LoginDialogDerived[] = {
    "LoginDialogDerived\0\0user,password\0"
    "setUserPassword(QString,QString)\0"
    "emitUserPassword()\0"
};

const QMetaObject LoginDialogDerived::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoginDialogDerived,
      qt_meta_data_LoginDialogDerived, 0 }
};

const QMetaObject *LoginDialogDerived::metaObject() const
{
    return &staticMetaObject;
}

void *LoginDialogDerived::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialogDerived))
        return static_cast<void*>(const_cast< LoginDialogDerived*>(this));
    if (!strcmp(_clname, "Ui::loginDialog"))
        return static_cast< Ui::loginDialog*>(const_cast< LoginDialogDerived*>(this));
    return QDialog::qt_metacast(_clname);
}

int LoginDialogDerived::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setUserPassword((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: emitUserPassword(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void LoginDialogDerived::setUserPassword(QString _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
