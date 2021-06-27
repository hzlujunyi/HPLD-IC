/****************************************************************************
** Meta object code from reading C++ file 'computerseeker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../moonlight-qt/app/backend/computerseeker.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computerseeker.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComputerSeeker_t {
    const uint offsetsAndSize[16];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ComputerSeeker_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ComputerSeeker_t qt_meta_stringdata_ComputerSeeker = {
    {
QT_MOC_LITERAL(0, 14), // "ComputerSeeker"
QT_MOC_LITERAL(15, 13), // "computerFound"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 11), // "NvComputer*"
QT_MOC_LITERAL(42, 8), // "computer"
QT_MOC_LITERAL(51, 12), // "errorTimeout"
QT_MOC_LITERAL(64, 17), // "onComputerUpdated"
QT_MOC_LITERAL(82, 9) // "onTimeout"

    },
    "ComputerSeeker\0computerFound\0\0NvComputer*\0"
    "computer\0errorTimeout\0onComputerUpdated\0"
    "onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputerSeeker[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x06,    0 /* Public */,
       5,    0,   41,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   42,    2, 0x08,    3 /* Private */,
       7,    0,   45,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void ComputerSeeker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComputerSeeker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->computerFound((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 1: _t->errorTimeout(); break;
        case 2: _t->onComputerUpdated((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 3: _t->onTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComputerSeeker::*)(NvComputer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerSeeker::computerFound)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComputerSeeker::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerSeeker::errorTimeout)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ComputerSeeker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ComputerSeeker.offsetsAndSize,
    qt_meta_data_ComputerSeeker,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ComputerSeeker_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *ComputerSeeker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerSeeker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerSeeker.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComputerSeeker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}

// SIGNAL 0
void ComputerSeeker::computerFound(NvComputer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ComputerSeeker::errorTimeout()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
