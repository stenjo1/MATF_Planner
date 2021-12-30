/****************************************************************************
** Meta object code from reading C++ file 'Calendar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MatfPlaner/headers/Calendar.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Calendar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calendar_t {
    const uint offsetsAndSize[22];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Calendar_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Calendar_t qt_meta_stringdata_Calendar = {
    {
QT_MOC_LITERAL(0, 8), // "Calendar"
QT_MOC_LITERAL(9, 17), // "fillProfileSignal"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 14), // "colorCellsSlot"
QT_MOC_LITERAL(43, 20), // "on_pbNewExam_clicked"
QT_MOC_LITERAL(64, 21), // "on_pbCheckUrl_clicked"
QT_MOC_LITERAL(86, 20), // "on_pbProfile_clicked"
QT_MOC_LITERAL(107, 21), // "on_pbSendMail_clicked"
QT_MOC_LITERAL(129, 18), // "on_pbLogin_clicked"
QT_MOC_LITERAL(148, 25), // "on_calendarWidget_clicked"
QT_MOC_LITERAL(174, 4) // "date"

    },
    "Calendar\0fillProfileSignal\0\0colorCellsSlot\0"
    "on_pbNewExam_clicked\0on_pbCheckUrl_clicked\0"
    "on_pbProfile_clicked\0on_pbSendMail_clicked\0"
    "on_pbLogin_clicked\0on_calendarWidget_clicked\0"
    "date"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calendar[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    1,   69,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QDate,   10,

       0        // eod
};

void Calendar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Calendar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fillProfileSignal(); break;
        case 1: _t->colorCellsSlot(); break;
        case 2: _t->on_pbNewExam_clicked(); break;
        case 3: _t->on_pbCheckUrl_clicked(); break;
        case 4: _t->on_pbProfile_clicked(); break;
        case 5: _t->on_pbSendMail_clicked(); break;
        case 6: _t->on_pbLogin_clicked(); break;
        case 7: _t->on_calendarWidget_clicked((*reinterpret_cast< const QDate(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Calendar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Calendar::fillProfileSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Calendar::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Calendar.offsetsAndSize,
    qt_meta_data_Calendar,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Calendar_t
, QtPrivate::TypeAndForceComplete<Calendar, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>


>,
    nullptr
} };


const QMetaObject *Calendar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calendar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calendar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Calendar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Calendar::fillProfileSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
