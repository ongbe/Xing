/****************************************************************************
** Meta object code from reading C++ file 't1516query.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../tr/t1516/t1516query.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 't1516query.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_T1516Query_t {
    QByteArrayData data[8];
    char stringdata[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_T1516Query_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_T1516Query_t qt_meta_stringdata_T1516Query = {
    {
QT_MOC_LITERAL(0, 0, 10), // "T1516Query"
QT_MOC_LITERAL(1, 11, 13), // "onReceiveData"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 6), // "trCode"
QT_MOC_LITERAL(4, 33, 22), // "onReceiveChartRealData"
QT_MOC_LITERAL(5, 56, 6), // "upcode"
QT_MOC_LITERAL(6, 63, 5), // "gubun"
QT_MOC_LITERAL(7, 69, 6) // "shcode"

    },
    "T1516Query\0onReceiveData\0\0trCode\0"
    "onReceiveChartRealData\0upcode\0gubun\0"
    "shcode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_T1516Query[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       3,   30, // properties
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

 // properties: name, type, flags
       5, QMetaType::QString, 0x00095103,
       6, QMetaType::QString, 0x00095103,
       7, QMetaType::QString, 0x00095103,

       0        // eod
};

void T1516Query::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        T1516Query *_t = static_cast<T1516Query *>(_o);
        switch (_id) {
        case 0: _t->onReceiveData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->onReceiveChartRealData((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject T1516Query::staticMetaObject = {
    { &TrQuery::staticMetaObject, qt_meta_stringdata_T1516Query.data,
      qt_meta_data_T1516Query,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *T1516Query::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T1516Query::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_T1516Query.stringdata))
        return static_cast<void*>(const_cast< T1516Query*>(this));
    return TrQuery::qt_metacast(_clname);
}

int T1516Query::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = upcode(); break;
        case 1: *reinterpret_cast< QString*>(_v) = gubun(); break;
        case 2: *reinterpret_cast< QString*>(_v) = shcode(); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setUpcode(*reinterpret_cast< QString*>(_v)); break;
        case 1: setGubun(*reinterpret_cast< QString*>(_v)); break;
        case 2: setShcode(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE