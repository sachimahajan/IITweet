/****************************************************************************
** Meta object code from reading C++ file 'derivedconfigdialog.h'
**
** Created: Thu Oct 8 06:04:49 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../derivedconfigdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'derivedconfigdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ui__derivedConfigDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x09,
      34,   24,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_Ui__derivedConfigDialog[] = {
    "Ui::derivedConfigDialog\0\0reject()\0"
    "accept()\0"
};

const QMetaObject Ui::derivedConfigDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Ui__derivedConfigDialog,
      qt_meta_data_Ui__derivedConfigDialog, 0 }
};

const QMetaObject *Ui::derivedConfigDialog::metaObject() const
{
    return &staticMetaObject;
}

void *Ui::derivedConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ui__derivedConfigDialog))
        return static_cast<void*>(const_cast< derivedConfigDialog*>(this));
    if (!strcmp(_clname, "Ui::configDialog"))
        return static_cast< Ui::configDialog*>(const_cast< derivedConfigDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Ui::derivedConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: reject(); break;
        case 1: accept(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
