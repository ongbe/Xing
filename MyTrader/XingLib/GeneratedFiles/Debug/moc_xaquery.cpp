/****************************************************************************
** Meta object code from reading C++ file 'xaquery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/core/xing/xaquery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'xaquery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_XAQuery_t {
    QByteArrayData data[12];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_XAQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_XAQuery_t qt_meta_stringdata_XAQuery = {
    {
QT_MOC_LITERAL(0, 0, 7), // "XAQuery"
QT_MOC_LITERAL(1, 8, 14), // "ReceiveMessage"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "bIsSystemError"
QT_MOC_LITERAL(4, 39, 7), // "msgCode"
QT_MOC_LITERAL(5, 47, 3), // "msg"
QT_MOC_LITERAL(6, 51, 11), // "ReceiveData"
QT_MOC_LITERAL(7, 63, 6), // "trCode"
QT_MOC_LITERAL(8, 70, 20), // "ReceiveChartRealData"
QT_MOC_LITERAL(9, 91, 16), // "onReceiveMessage"
QT_MOC_LITERAL(10, 108, 13), // "onReceiveData"
QT_MOC_LITERAL(11, 122, 22) // "onReceiveChartRealData"

    },
    "XAQuery\0ReceiveMessage\0\0bIsSystemError\0"
    "msgCode\0msg\0ReceiveData\0trCode\0"
    "ReceiveChartRealData\0onReceiveMessage\0"
    "onReceiveData\0onReceiveChartRealData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_XAQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       6,    1,   51,    2, 0x06 /* Public */,
       8,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    3,   57,    2, 0x0a /* Public */,
      10,    1,   64,    2, 0x0a /* Public */,
      11,    1,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void XAQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        XAQuery *_t = static_cast<XAQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ReceiveMessage((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->ReceiveData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->ReceiveChartRealData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onReceiveMessage((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 4: _t->onReceiveData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->onReceiveChartRealData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (XAQuery::*_t)(bool , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XAQuery::ReceiveMessage)) {
                *result = 0;
            }
        }
        {
            typedef void (XAQuery::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XAQuery::ReceiveData)) {
                *result = 1;
            }
        }
        {
            typedef void (XAQuery::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&XAQuery::ReceiveChartRealData)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject XAQuery::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_XAQuery.data,
      qt_meta_data_XAQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *XAQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XAQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_XAQuery.stringdata0))
        return static_cast<void*>(const_cast< XAQuery*>(this));
    return QObject::qt_metacast(_clname);
}

int XAQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void XAQuery::ReceiveMessage(bool _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void XAQuery::ReceiveData(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void XAQuery::ReceiveChartRealData(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
