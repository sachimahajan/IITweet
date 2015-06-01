/****************************************************************************
** Meta object code from reading C++ file 'twitterbackendinterface.h'
**
** Created: Wed Oct 7 19:01:29 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../twitterbackendinterface.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twitterbackendinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_twitterBackendInterface[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      25,   24,   24,   24, 0x05,
      53,   50,   24,   24, 0x05,

 // slots: signature, parameters, type, tag, flags
      76,   24,   24,   24, 0x0a,
      94,   24,   24,   24, 0x0a,
     113,   24,   24,   24, 0x0a,
     129,   24,   24,   24, 0x0a,
     149,  142,   24,   24, 0x0a,
     165,   24,   24,   24, 0x0a,
     175,   24,   24,   24, 0x0a,
     185,   24,   24,   24, 0x0a,
     195,   24,   24,   24, 0x0a,
     207,   24,   24,   24, 0x0a,
     218,   24,   24,   24, 0x0a,
     229,   24,   24,   24, 0x0a,
     247,   24,   24,   24, 0x0a,
     254,   24,   24,   24, 0x0a,
     273,   24,   24,   24, 0x0a,
     296,   24,   24,   24, 0x0a,
     315,   24,   24,   24, 0x0a,
     335,   24,   24,   24, 0x0a,
     356,   24,   24,   24, 0x0a,
     370,   24,   24,   24, 0x0a,
     380,   24,   24,   24, 0x0a,
     398,   24,   24,   24, 0x0a,
     423,   24,   24,   24, 0x0a,
     441,   24,   24,   24, 0x0a,
     460,   24,   24,   24, 0x0a,
     469,   24,   24,   24, 0x0a,
     477,   24,   24,   24, 0x0a,
     494,   24,   24,   24, 0x0a,
     512,   24,   24,   24, 0x0a,
     519,   24,   24,   24, 0x0a,
     541,  539,   24,   24, 0x0a,
     584,  578,   24,   24, 0x0a,
     609,  601,   24,   24, 0x0a,
     645,  636,   24,   24, 0x0a,
     676,   24,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_twitterBackendInterface[] = {
    "twitterBackendInterface\0\0"
    "public_timeline(QString)\0id\0"
    "statusMessage(QString)\0public_timeline()\0"
    "friends_timeline()\0user_timeline()\0"
    "showStatus()\0status\0update(QString)\0"
    "replies()\0destroy()\0friends()\0followers()\0"
    "featured()\0showUser()\0direct_messages()\0"
    "sent()\0newDirectMessage()\0"
    "destroyDirectMessage()\0createFriendship()\0"
    "destroyFriendship()\0verify_credentials()\0"
    "end_session()\0archive()\0update_location()\0"
    "update_delivery_device()\0createFavourite()\0"
    "destroyFavourite()\0follow()\0leave()\0"
    "createBlockage()\0destroyBlockage()\0"
    "test()\0downtime_schedule()\0,\0"
    "setUserNamePassword(QString,QString)\0"
    "error\0OnError(QString)\0message\0"
    "OnMessageReceived(QString)\0response\0"
    "OnStatusReceived(SERVER::RESP)\0"
    "OnResponseReceived(Returnables::Response*)\0"
};

const QMetaObject twitterBackendInterface::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_twitterBackendInterface,
      qt_meta_data_twitterBackendInterface, 0 }
};

const QMetaObject *twitterBackendInterface::metaObject() const
{
    return &staticMetaObject;
}

void *twitterBackendInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_twitterBackendInterface))
        return static_cast<void*>(const_cast< twitterBackendInterface*>(this));
    return QObject::qt_metacast(_clname);
}

int twitterBackendInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: public_timeline((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: statusMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: public_timeline(); break;
        case 3: friends_timeline(); break;
        case 4: user_timeline(); break;
        case 5: showStatus(); break;
        case 6: update((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: replies(); break;
        case 8: destroy(); break;
        case 9: friends(); break;
        case 10: followers(); break;
        case 11: featured(); break;
        case 12: showUser(); break;
        case 13: direct_messages(); break;
        case 14: sent(); break;
        case 15: newDirectMessage(); break;
        case 16: destroyDirectMessage(); break;
        case 17: createFriendship(); break;
        case 18: destroyFriendship(); break;
        case 19: verify_credentials(); break;
        case 20: end_session(); break;
        case 21: archive(); break;
        case 22: update_location(); break;
        case 23: update_delivery_device(); break;
        case 24: createFavourite(); break;
        case 25: destroyFavourite(); break;
        case 26: follow(); break;
        case 27: leave(); break;
        case 28: createBlockage(); break;
        case 29: destroyBlockage(); break;
        case 30: test(); break;
        case 31: downtime_schedule(); break;
        case 32: setUserNamePassword((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 33: OnError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 34: OnMessageReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: OnStatusReceived((*reinterpret_cast< SERVER::RESP(*)>(_a[1]))); break;
        case 36: OnResponseReceived((*reinterpret_cast< Returnables::Response*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void twitterBackendInterface::public_timeline(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void twitterBackendInterface::statusMessage(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
