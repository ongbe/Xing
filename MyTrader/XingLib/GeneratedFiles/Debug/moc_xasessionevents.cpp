/****************************************************************************
** Meta object code from reading C++ file 'xasessionevents.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/core/xing/xasessionevents.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xasessionevents.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XASessionEvents_t {
    QByteArrayData data[14];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XASessionEvents_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XASessionEvents_t qt_meta_stringdata_XASessionEvents = {
    {
QT_MOC_LITERAL(0, 0, 15), // "XASessionEvents"
QT_MOC_LITERAL(1, 16, 7), // "onLogin"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "szCode"
QT_MOC_LITERAL(4, 32, 5), // "szMsg"
QT_MOC_LITERAL(5, 38, 8), // "onLogout"
QT_MOC_LITERAL(6, 47, 12), // "onDisconnect"
QT_MOC_LITERAL(7, 60, 14), // "eventTriggered"
QT_MOC_LITERAL(8, 75, 10), // "Disconnect"
QT_MOC_LITERAL(9, 86, 5), // "Login"
QT_MOC_LITERAL(10, 92, 6), // "Logout"
QT_MOC_LITERAL(11, 99, 9), // "exception"
QT_MOC_LITERAL(12, 109, 15), // "propertyChanged"
QT_MOC_LITERAL(13, 125, 4) // "name"

    },
    "XASessionEvents\0onLogin\0\0szCode\0szMsg\0"
    "onLogout\0onDisconnect\0eventTriggered\0"
    "Disconnect\0Login\0Logout\0exception\0"
    "propertyChanged\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XASessionEvents[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   59,    2, 0x06 /* Public */,
       5,    0,   64,    2, 0x06 /* Public */,
       6,    0,   65,    2, 0x06 /* Public */,
       7,    1,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   69,    2, 0x08 /* Private */,
       9,    2,   70,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    4,   76,    2, 0x08 /* Private */,
      12,    1,   85,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

void XASessionEvents::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XASessionEvents *_t = static_cast<XASessionEvents *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLogin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->onLogout(); break;
        case 2: _t->onDisconnect(); break;
        case 3: _t->eventTriggered((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->Disconnect(); break;
        case 5: _t->Login((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->Logout(); break;
        case 7: _t->exception((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 8: _t->propertyChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XASessionEvents::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XASessionEvents::onLogin)) {
                *result = 0;
            }
        }
        {
            typedef void (XASessionEvents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XASessionEvents::onLogout)) {
                *result = 1;
            }
        }
        {
            typedef void (XASessionEvents::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XASessionEvents::onDisconnect)) {
                *result = 2;
            }
        }
        {
            typedef void (XASessionEvents::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XASessionEvents::eventTriggered)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject XASessionEvents::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XASessionEvents.data,
      qt_meta_data_XASessionEvents,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XASessionEvents::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XASessionEvents::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XASessionEvents.stringdata0))
        return static_cast<void*>(const_cast< XASessionEvents*>(this));
    return QObject::qt_metacast(_clname);
}

int XASessionEvents::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void XASessionEvents::onLogin(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XASessionEvents::onLogout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void XASessionEvents::onDisconnect()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void XASessionEvents::eventTriggered(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
