/****************************************************************************
** Meta object code from reading C++ file 'systemproperties.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../app/backend/systemproperties.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systemproperties.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SystemProperties_t {
    const uint offsetsAndSize[40];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_SystemProperties_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_SystemProperties_t qt_meta_stringdata_SystemProperties = {
    {
QT_MOC_LITERAL(0, 16), // "SystemProperties"
QT_MOC_LITERAL(17, 23), // "unmappedGamepadsChanged"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 15), // "refreshDisplays"
QT_MOC_LITERAL(58, 20), // "getDesktopResolution"
QT_MOC_LITERAL(79, 12), // "displayIndex"
QT_MOC_LITERAL(92, 19), // "getNativeResolution"
QT_MOC_LITERAL(112, 23), // "hasHardwareAcceleration"
QT_MOC_LITERAL(136, 24), // "rendererAlwaysFullScreen"
QT_MOC_LITERAL(161, 16), // "isRunningWayland"
QT_MOC_LITERAL(178, 17), // "isRunningXWayland"
QT_MOC_LITERAL(196, 7), // "isWow64"
QT_MOC_LITERAL(204, 22), // "friendlyNativeArchName"
QT_MOC_LITERAL(227, 21), // "hasDesktopEnvironment"
QT_MOC_LITERAL(249, 10), // "hasBrowser"
QT_MOC_LITERAL(260, 21), // "hasDiscordIntegration"
QT_MOC_LITERAL(282, 16), // "unmappedGamepads"
QT_MOC_LITERAL(299, 25), // "maximumStreamingFrameRate"
QT_MOC_LITERAL(325, 17), // "maximumResolution"
QT_MOC_LITERAL(343, 13) // "versionString"

    },
    "SystemProperties\0unmappedGamepadsChanged\0"
    "\0refreshDisplays\0getDesktopResolution\0"
    "displayIndex\0getNativeResolution\0"
    "hasHardwareAcceleration\0"
    "rendererAlwaysFullScreen\0isRunningWayland\0"
    "isRunningXWayland\0isWow64\0"
    "friendlyNativeArchName\0hasDesktopEnvironment\0"
    "hasBrowser\0hasDiscordIntegration\0"
    "unmappedGamepads\0maximumStreamingFrameRate\0"
    "maximumResolution\0versionString"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SystemProperties[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      13,   46, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,   13 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x02,   14 /* Public */,
       4,    1,   40,    2, 0x02,   15 /* Public */,
       6,    1,   43,    2, 0x02,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::QRect, QMetaType::Int,    5,
    QMetaType::QRect, QMetaType::Int,    5,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015401, uint(-1), 0,
       9, QMetaType::Bool, 0x00015401, uint(-1), 0,
      10, QMetaType::Bool, 0x00015401, uint(-1), 0,
      11, QMetaType::Bool, 0x00015401, uint(-1), 0,
      12, QMetaType::QString, 0x00015401, uint(-1), 0,
      13, QMetaType::Bool, 0x00015401, uint(-1), 0,
      14, QMetaType::Bool, 0x00015401, uint(-1), 0,
      15, QMetaType::Bool, 0x00015401, uint(-1), 0,
      16, QMetaType::QString, 0x00015003, uint(0), 0,
      17, QMetaType::Int, 0x00015401, uint(-1), 0,
      18, QMetaType::QSize, 0x00015401, uint(-1), 0,
      19, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

void SystemProperties::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SystemProperties *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->unmappedGamepadsChanged(); break;
        case 1: _t->refreshDisplays(); break;
        case 2: { QRect _r = _t->getDesktopResolution((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = std::move(_r); }  break;
        case 3: { QRect _r = _t->getNativeResolution((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QRect*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SystemProperties::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SystemProperties::unmappedGamepadsChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SystemProperties *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasHardwareAcceleration; break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->rendererAlwaysFullScreen; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isRunningWayland; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isRunningXWayland; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isWow64; break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->friendlyNativeArchName; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasDesktopEnvironment; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->hasBrowser; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->hasDiscordIntegration; break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->unmappedGamepads; break;
        case 10: *reinterpret_cast< int*>(_v) = _t->maximumStreamingFrameRate; break;
        case 11: *reinterpret_cast< QSize*>(_v) = _t->maximumResolution; break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->versionString; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SystemProperties *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 9:
            if (_t->unmappedGamepads != *reinterpret_cast< QString*>(_v)) {
                _t->unmappedGamepads = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->unmappedGamepadsChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SystemProperties::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SystemProperties.offsetsAndSize,
    qt_meta_data_SystemProperties,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_SystemProperties_t
, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<QSize, std::true_type>, QtPrivate::TypeAndForceComplete<QString, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QRect, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QRect, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

>,
    nullptr
} };


const QMetaObject *SystemProperties::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SystemProperties::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SystemProperties.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SystemProperties::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SystemProperties::unmappedGamepadsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
