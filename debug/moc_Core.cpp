/****************************************************************************
** Meta object code from reading C++ file 'Core.h'
**
** Created: Wed Oct 7 19:01:32 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../twitlib/Core.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Core.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Core[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x05,
      24,   18,    5,    5, 0x05,
      49,   41,    5,    5, 0x05,
      81,   76,    5,    5, 0x05,
     112,   76,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
     158,  155,    5,    5, 0x0a,
     187,  178,    5,    5, 0x0a,
     220,  209,    5,    5, 0x0a,
     246,   18,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Core[] = {
    "Core\0\0QueryDone()\0error\0OnError(QString)\0"
    "message\0OnMessageReceived(QString)\0"
    "resp\0OnStatusReceived(SERVER::RESP)\0"
    "OnResponseReceived(Returnables::Response*)\0"
    "id\0RequestStarted(int)\0id,error\0"
    "ReqFinished(int,bool)\0done,total\0"
    "DataReadProgress(int,int)\0Done(bool)\0"
};

const QMetaObject Core::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Core,
      qt_meta_data_Core, 0 }
};

const QMetaObject *Core::metaObject() const
{
    return &staticMetaObject;
}

void *Core::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Core))
        return static_cast<void*>(const_cast< Core*>(this));
    return QObject::qt_metacast(_clname);
}

int Core::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: QueryDone(); break;
        case 1: OnError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: OnMessageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: OnStatusReceived((*reinterpret_cast< SERVER::RESP(*)>(_a[1]))); break;
        case 4: OnResponseReceived((*reinterpret_cast< Returnables::Response*(*)>(_a[1]))); break;
        case 5: RequestStarted((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: ReqFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 7: DataReadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: Done((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Core::QueryDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Core::OnError(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Core::OnMessageReceived(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Core::OnStatusReceived(SERVER::RESP _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Core::OnResponseReceived(Returnables::Response * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
