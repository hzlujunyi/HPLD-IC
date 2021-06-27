/****************************************************************************
** Meta object code from reading C++ file 'boxartmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../moonlight-qt/app/backend/boxartmanager.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boxartmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoxArtManager_t {
    const uint offsetsAndSize[18];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_BoxArtManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_BoxArtManager_t qt_meta_stringdata_BoxArtManager = {
    {
QT_MOC_LITERAL(0, 13), // "BoxArtManager"
QT_MOC_LITERAL(14, 18), // "boxArtLoadComplete"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 11), // "NvComputer*"
QT_MOC_LITERAL(46, 8), // "computer"
QT_MOC_LITERAL(55, 5), // "NvApp"
QT_MOC_LITERAL(61, 3), // "app"
QT_MOC_LITERAL(65, 5), // "image"
QT_MOC_LITERAL(71, 24) // "handleBoxArtLoadComplete"

    },
    "BoxArtManager\0boxArtLoadComplete\0\0"
    "NvComputer*\0computer\0NvApp\0app\0image\0"
    "handleBoxArtLoadComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoxArtManager[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   26,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    3,   33,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QUrl,    4,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QUrl,    4,    6,    7,

       0        // eod
};

void BoxArtManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BoxArtManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->boxArtLoadComplete((*reinterpret_cast< NvComputer*(*)>(_a[1])),(*reinterpret_cast< NvApp(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3]))); break;
        case 1: _t->handleBoxArtLoadComplete((*reinterpret_cast< NvComputer*(*)>(_a[1])),(*reinterpret_cast< NvApp(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NvApp >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< NvApp >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BoxArtManager::*)(NvComputer * , NvApp , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoxArtManager::boxArtLoadComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BoxArtManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_BoxArtManager.offsetsAndSize,
    qt_meta_data_BoxArtManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_BoxArtManager_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<NvApp, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<NvApp, std::false_type>, QtPrivate::TypeAndForceComplete<QUrl, std::false_type>


>,
    nullptr
} };


const QMetaObject *BoxArtManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoxArtManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoxArtManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int BoxArtManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void BoxArtManager::boxArtLoadComplete(NvComputer * _t1, NvApp _t2, QUrl _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
