/****************************************************************************
** Meta object code from reading C++ file 'ExamsOverview.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MatfPlaner/headers/ExamsOverview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ExamsOverview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ExamsOverview_t {
    const uint offsetsAndSize[22];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ExamsOverview_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ExamsOverview_t qt_meta_stringdata_ExamsOverview = {
    {
QT_MOC_LITERAL(0, 13), // "ExamsOverview"
QT_MOC_LITERAL(14, 12), // "loadComboBox"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 18), // "fillCalendarSignal"
QT_MOC_LITERAL(47, 13), // "loadExamsJson"
QT_MOC_LITERAL(61, 12), // "loadExamList"
QT_MOC_LITERAL(74, 27), // "on_listWidget_doubleClicked"
QT_MOC_LITERAL(102, 11), // "QModelIndex"
QT_MOC_LITERAL(114, 5), // "index"
QT_MOC_LITERAL(120, 20), // "on_pbAddExam_clicked"
QT_MOC_LITERAL(141, 20) // "on_pbConfirm_clicked"

    },
    "ExamsOverview\0loadComboBox\0\0"
    "fillCalendarSignal\0loadExamsJson\0"
    "loadExamList\0on_listWidget_doubleClicked\0"
    "QModelIndex\0index\0on_pbAddExam_clicked\0"
    "on_pbConfirm_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ExamsOverview[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       9,    0,   63,    2, 0x08,    7 /* Private */,
      10,    0,   64,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ExamsOverview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ExamsOverview *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadComboBox(); break;
        case 1: _t->fillCalendarSignal(); break;
        case 2: _t->loadExamsJson(); break;
        case 3: _t->loadExamList(); break;
        case 4: _t->on_listWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_pbAddExam_clicked(); break;
        case 6: _t->on_pbConfirm_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ExamsOverview::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExamsOverview::loadComboBox)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ExamsOverview::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExamsOverview::fillCalendarSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ExamsOverview::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ExamsOverview::loadExamsJson)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ExamsOverview::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ExamsOverview.offsetsAndSize,
    qt_meta_data_ExamsOverview,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ExamsOverview_t
, QtPrivate::TypeAndForceComplete<ExamsOverview, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ExamsOverview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ExamsOverview::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ExamsOverview.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ExamsOverview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void ExamsOverview::loadComboBox()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ExamsOverview::fillCalendarSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ExamsOverview::loadExamsJson()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
