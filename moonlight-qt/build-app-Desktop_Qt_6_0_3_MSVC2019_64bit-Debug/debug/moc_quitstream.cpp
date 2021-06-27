/****************************************************************************
** Meta object code from reading C++ file 'quitstream.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../app/cli/quitstream.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'quitstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CliQuitStream__Launcher_t {
    const uint offsetsAndSize[32];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CliQuitStream__Launcher_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CliQuitStream__Launcher_t qt_meta_stringdata_CliQuitStream__Launcher = {
    {
QT_MOC_LITERAL(0, 23), // "CliQuitStream::Launcher"
QT_MOC_LITERAL(24, 17), // "searchingComputer"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 11), // "quittingApp"
QT_MOC_LITERAL(55, 6), // "failed"
QT_MOC_LITERAL(62, 4), // "text"
QT_MOC_LITERAL(67, 15), // "onComputerFound"
QT_MOC_LITERAL(83, 11), // "NvComputer*"
QT_MOC_LITERAL(95, 8), // "computer"
QT_MOC_LITERAL(104, 21), // "onComputerSeekTimeout"
QT_MOC_LITERAL(126, 18), // "onQuitAppCompleted"
QT_MOC_LITERAL(145, 5), // "error"
QT_MOC_LITERAL(151, 7), // "execute"
QT_MOC_LITERAL(159, 16), // "ComputerManager*"
QT_MOC_LITERAL(176, 7), // "manager"
QT_MOC_LITERAL(184, 10) // "isExecuted"

    },
    "CliQuitStream::Launcher\0searchingComputer\0"
    "\0quittingApp\0failed\0text\0onComputerFound\0"
    "NvComputer*\0computer\0onComputerSeekTimeout\0"
    "onQuitAppCompleted\0error\0execute\0"
    "ComputerManager*\0manager\0isExecuted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CliQuitStream__Launcher[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    0 /* Public */,
       3,    0,   63,    2, 0x06,    1 /* Public */,
       4,    1,   64,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   67,    2, 0x08,    4 /* Private */,
       9,    0,   70,    2, 0x08,    6 /* Private */,
      10,    1,   71,    2, 0x08,    7 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   74,    2, 0x02,    9 /* Public */,
      15,    0,   77,    2, 0x02,   11 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   11,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Bool,

       0        // eod
};

void CliQuitStream::Launcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Launcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchingComputer(); break;
        case 1: _t->quittingApp(); break;
        case 2: _t->failed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->onComputerFound((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 4: _t->onComputerSeekTimeout(); break;
        case 5: _t->onQuitAppCompleted((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 6: _t->execute((*reinterpret_cast< ComputerManager*(*)>(_a[1]))); break;
        case 7: { bool _r = _t->isExecuted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Launcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::searchingComputer)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Launcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::quittingApp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Launcher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::failed)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject CliQuitStream::Launcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CliQuitStream__Launcher.offsetsAndSize,
    qt_meta_data_CliQuitStream__Launcher,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CliQuitStream__Launcher_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ComputerManager *, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>

>,
    nullptr
} };


const QMetaObject *CliQuitStream::Launcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CliQuitStream::Launcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CliQuitStream__Launcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CliQuitStream::Launcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void CliQuitStream::Launcher::searchingComputer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CliQuitStream::Launcher::quittingApp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CliQuitStream::Launcher::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
