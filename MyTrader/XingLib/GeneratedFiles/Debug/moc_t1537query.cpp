/****************************************************************************
** Meta object code from reading C++ file 't1537query.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Src/core/tr/t1537/t1537query.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 't1537query.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_T1537Query_t {
    QByteArrayData data[6];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_T1537Query_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_T1537Query_t qt_meta_stringdata_T1537Query = {
    {
QT_MOC_LITERAL(0, 0, 10), // "T1537Query"
QT_MOC_LITERAL(1, 11, 6), // "tmcode"
QT_MOC_LITERAL(2, 18, 5), // "upcnt"
QT_MOC_LITERAL(3, 24, 5), // "tmcnt"
QT_MOC_LITERAL(4, 30, 6), // "uprate"
QT_MOC_LITERAL(5, 37, 6) // "tmname"

    },
    "T1537Query\0tmcode\0upcnt\0tmcnt\0uprate\0"
    "tmname"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_T1537Query[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095103,
       2, QMetaType::Long, 0x00095003,
       3, QMetaType::Long, 0x00095003,
       4, QMetaType::Long, 0x00095003,
       5, QMetaType::QString, 0x00095003,

       0        // eod
};

void T1537Query::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        T1537Query *_t = static_cast<T1537Query *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->tmcode(); break;
        case 1: *reinterpret_cast< long*>(_v) = _t->upcnt(); break;
        case 2: *reinterpret_cast< long*>(_v) = _t->tmcnt(); break;
        case 3: *reinterpret_cast< long*>(_v) = _t->uprate(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->tmname(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        T1537Query *_t = static_cast<T1537Query *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTmcode(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUpCnt(*reinterpret_cast< long*>(_v)); break;
        case 2: _t->setTmCnt(*reinterpret_cast< long*>(_v)); break;
        case 3: _t->setUpRate(*reinterpret_cast< long*>(_v)); break;
        case 4: _t->setTmName(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject T1537Query::staticMetaObject = {
    { &CtsTrQuery::staticMetaObject, qt_meta_stringdata_T1537Query.data,
      qt_meta_data_T1537Query,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *T1537Query::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *T1537Query::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_T1537Query.stringdata0))
        return static_cast<void*>(const_cast< T1537Query*>(this));
    return CtsTrQuery::qt_metacast(_clname);
}

int T1537Query::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CtsTrQuery::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
