/****************************************************************************
** Meta object code from reading C++ file 'simpletrquery.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/core/tr/simpletrquery.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simpletrquery.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SimpleTrQuery_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SimpleTrQuery_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SimpleTrQuery_t qt_meta_stringdata_SimpleTrQuery = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SimpleTrQuery"
QT_MOC_LITERAL(1, 14, 13), // "onReceiveData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 6), // "trCode"
QT_MOC_LITERAL(4, 36, 22) // "onReceiveChartRealData"

    },
    "SimpleTrQuery\0onReceiveData\0\0trCode\0"
    "onReceiveChartRealData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SimpleTrQuery[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void SimpleTrQuery::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SimpleTrQuery *_t = static_cast<SimpleTrQuery *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onReceiveData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onReceiveChartRealData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject SimpleTrQuery::staticMetaObject = {
    { &TrQuery::staticMetaObject, qt_meta_stringdata_SimpleTrQuery.data,
      qt_meta_data_SimpleTrQuery,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SimpleTrQuery::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SimpleTrQuery::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SimpleTrQuery.stringdata0))
        return static_cast<void*>(const_cast< SimpleTrQuery*>(this));
    return TrQuery::qt_metacast(_clname);
}

int SimpleTrQuery::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrQuery::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
