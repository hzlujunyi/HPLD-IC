/****************************************************************************
** Meta object code from reading C++ file 'sdlgamepadkeynavigation.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../app/gui/sdlgamepadkeynavigation.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sdlgamepadkeynavigation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SdlGamepadKeyNavigation_t {
    const uint offsetsAndSize[16];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SdlGamepadKeyNavigation_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SdlGamepadKeyNavigation_t qt_meta_stringdata_SdlGamepadKeyNavigation = {
    {
QT_MOC_LITERAL(0, 23), // "SdlGamepadKeyNavigation"
QT_MOC_LITERAL(24, 19), // "onPollingTimerFired"
QT_MOC_LITERAL(44, 0), // ""
QT_MOC_LITERAL(45, 6), // "enable"
QT_MOC_LITERAL(52, 7), // "disable"
QT_MOC_LITERAL(60, 12), // "setUiNavMode"
QT_MOC_LITERAL(73, 12), // "settingsMode"
QT_MOC_LITERAL(86, 20) // "getConnectedGamepads"

    },
    "SdlGamepadKeyNavigation\0onPollingTimerFired\0"
    "\0enable\0disable\0setUiNavMode\0settingsMode\0"
    "getConnectedGamepads"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SdlGamepadKeyNavigation[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    0 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x02,    1 /* Public */,
       4,    0,   46,    2, 0x02,    2 /* Public */,
       5,    1,   47,    2, 0x02,    3 /* Public */,
       7,    0,   50,    2, 0x02,    5 /* Public */,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Int,

       0        // eod
};

void SdlGamepadKeyNavigation::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SdlGamepadKeyNavigation *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPollingTimerFired(); break;
        case 1: _t->enable(); break;
        case 2: _t->disable(); break;
        case 3: _t->setUiNavMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: { int _r = _t->getConnectedGamepads();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject SdlGamepadKeyNavigation::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SdlGamepadKeyNavigation.offsetsAndSize,
    qt_meta_data_SdlGamepadKeyNavigation,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SdlGamepadKeyNavigation_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

>,
    nullptr
} };


const QMetaObject *SdlGamepadKeyNavigation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SdlGamepadKeyNavigation::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SdlGamepadKeyNavigation.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SdlGamepadKeyNavigation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
