/****************************************************************************
** Meta object code from reading C++ file 'SecondYearMR.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../MatfPlaner/headers/SecondYearMR.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SecondYearMR.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SecondYearMR_t {
    const uint offsetsAndSize[10];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SecondYearMR_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SecondYearMR_t qt_meta_stringdata_SecondYearMR = {
    {
QT_MOC_LITERAL(0, 12), // "SecondYearMR"
QT_MOC_LITERAL(13, 17), // "on_pbNext_clicked"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 17), // "on_pbBack_clicked"
QT_MOC_LITERAL(50, 16) // "on_pbEnd_clicked"

    },
    "SecondYearMR\0on_pbNext_clicked\0\0"
    "on_pbBack_clicked\0on_pbEnd_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SecondYearMR[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x08,    1 /* Private */,
       3,    0,   33,    2, 0x08,    2 /* Private */,
       4,    0,   34,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SecondYearMR::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SecondYearMR *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pbNext_clicked(); break;
        case 1: _t->on_pbBack_clicked(); break;
        case 2: _t->on_pbEnd_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject SecondYearMR::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SecondYearMR.offsetsAndSize,
    qt_meta_data_SecondYearMR,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SecondYearMR_t
, QtPrivate::TypeAndForceComplete<SecondYearMR, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *SecondYearMR::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SecondYearMR::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SecondYearMR.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SecondYearMR::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
