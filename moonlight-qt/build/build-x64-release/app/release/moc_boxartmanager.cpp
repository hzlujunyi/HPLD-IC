/****************************************************************************
** Meta object code from reading C++ file 'boxartmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../app/backend/boxartmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'boxartmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BoxArtManager_t {
    QByteArrayData data[9];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoxArtManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoxArtManager_t qt_meta_stringdata_BoxArtManager = {
    {
QT_MOC_LITERAL(0, 0, 13), // "BoxArtManager"
QT_MOC_LITERAL(1, 14, 18), // "boxArtLoadComplete"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 11), // "NvComputer*"
QT_MOC_LITERAL(4, 46, 8), // "computer"
QT_MOC_LITERAL(5, 55, 5), // "NvApp"
QT_MOC_LITERAL(6, 61, 3), // "app"
QT_MOC_LITERAL(7, 65, 5), // "image"
QT_MOC_LITERAL(8, 71, 24) // "handleBoxArtLoadComplete"

    },
    "BoxArtManager\0boxArtLoadComplete\0\0"
    "NvComputer*\0computer\0NvApp\0app\0image\0"
    "handleBoxArtLoadComplete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoxArtManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    3,   31,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QUrl,    4,    6,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QUrl,    4,    6,    7,

       0        // eod
};

void BoxArtManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BoxArtManager *_t = static_cast<BoxArtManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->boxArtLoadComplete((*reinterpret_cast< NvComputer*(*)>(_a[1])),(*reinterpret_cast< NvApp(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3]))); break;
        case 1: _t->handleBoxArtLoadComplete((*reinterpret_cast< NvComputer*(*)>(_a[1])),(*reinterpret_cast< NvApp(*)>(_a[2])),(*reinterpret_cast< QUrl(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NvApp >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< NvApp >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (BoxArtManager::*_t)(NvComputer * , NvApp , QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BoxArtManager::boxArtLoadComplete)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject BoxArtManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BoxArtManager.data,
      qt_meta_data_BoxArtManager,  qt_static_metacall, nullptr, nullptr}
};


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
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
