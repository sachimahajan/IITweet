/****************************************************************************
** Meta object code from reading C++ file 'sendTwitDerived.h'
**
** Created: Thu Nov 5 00:09:43 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../sendTwitDerived.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sendTwitDerived.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SendTwitDerived[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      23,   17,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      41,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SendTwitDerived[] = {
    "SendTwitDerived\0\0value\0sendTwit(QString)\0"
    "recieveTwit()\0"
};

const QMetaObject SendTwitDerived::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SendTwitDerived,
      qt_meta_data_SendTwitDerived, 0 }
};

const QMetaObject *SendTwitDerived::metaObject() const
{
    return &staticMetaObject;
}

void *SendTwitDerived::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SendTwitDerived))
        return static_cast<void*>(const_cast< SendTwitDerived*>(this));
    if (!strcmp(_clname, "Ui::sendTwitDialog"))
        return static_cast< Ui::sendTwitDialog*>(const_cast< SendTwitDerived*>(this));
    return QDialog::qt_metacast(_clname);
}

int SendTwitDerived::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sendTwit((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: recieveTwit(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SendTwitDerived::sendTwit(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
