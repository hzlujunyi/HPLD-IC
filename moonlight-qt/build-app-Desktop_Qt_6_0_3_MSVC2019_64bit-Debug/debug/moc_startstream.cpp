/****************************************************************************
** Meta object code from reading C++ file 'startstream.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../app/cli/startstream.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startstream.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CliStartStream__Launcher_t {
    const uint offsetsAndSize[46];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CliStartStream__Launcher_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CliStartStream__Launcher_t qt_meta_stringdata_CliStartStream__Launcher = {
    {
QT_MOC_LITERAL(0, 24), // "CliStartStream::Launcher"
QT_MOC_LITERAL(25, 17), // "searchingComputer"
QT_MOC_LITERAL(43, 0), // ""
QT_MOC_LITERAL(44, 12), // "searchingApp"
QT_MOC_LITERAL(57, 14), // "sessionCreated"
QT_MOC_LITERAL(72, 7), // "appName"
QT_MOC_LITERAL(80, 8), // "Session*"
QT_MOC_LITERAL(89, 7), // "session"
QT_MOC_LITERAL(97, 6), // "failed"
QT_MOC_LITERAL(104, 4), // "text"
QT_MOC_LITERAL(109, 15), // "appQuitRequired"
QT_MOC_LITERAL(125, 15), // "onComputerFound"
QT_MOC_LITERAL(141, 11), // "NvComputer*"
QT_MOC_LITERAL(153, 8), // "computer"
QT_MOC_LITERAL(162, 17), // "onComputerUpdated"
QT_MOC_LITERAL(180, 9), // "onTimeout"
QT_MOC_LITERAL(190, 18), // "onQuitAppCompleted"
QT_MOC_LITERAL(209, 5), // "error"
QT_MOC_LITERAL(215, 7), // "execute"
QT_MOC_LITERAL(223, 16), // "ComputerManager*"
QT_MOC_LITERAL(240, 7), // "manager"
QT_MOC_LITERAL(248, 14), // "quitRunningApp"
QT_MOC_LITERAL(263, 10) // "isExecuted"

    },
    "CliStartStream::Launcher\0searchingComputer\0"
    "\0searchingApp\0sessionCreated\0appName\0"
    "Session*\0session\0failed\0text\0"
    "appQuitRequired\0onComputerFound\0"
    "NvComputer*\0computer\0onComputerUpdated\0"
    "onTimeout\0onQuitAppCompleted\0error\0"
    "execute\0ComputerManager*\0manager\0"
    "quitRunningApp\0isExecuted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CliStartStream__Launcher[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    0 /* Public */,
       3,    0,   87,    2, 0x06,    1 /* Public */,
       4,    2,   88,    2, 0x06,    2 /* Public */,
       8,    1,   93,    2, 0x06,    5 /* Public */,
      10,    1,   96,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,   99,    2, 0x08,    9 /* Private */,
      14,    1,  102,    2, 0x08,   11 /* Private */,
      15,    0,  105,    2, 0x08,   13 /* Private */,
      16,    1,  106,    2, 0x08,   14 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      18,    1,  109,    2, 0x02,   16 /* Public */,
      21,    0,  112,    2, 0x02,   18 /* Public */,
      22,    0,  113,    2, 0x02,   19 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   17,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

void CliStartStream::Launcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Launcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchingComputer(); break;
        case 1: _t->searchingApp(); break;
        case 2: _t->sessionCreated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< Session*(*)>(_a[2]))); break;
        case 3: _t->failed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->appQuitRequired((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->onComputerFound((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 6: _t->onComputerUpdated((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 7: _t->onTimeout(); break;
        case 8: _t->onQuitAppCompleted((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 9: _t->execute((*reinterpret_cast< ComputerManager*(*)>(_a[1]))); break;
        case 10: _t->quitRunningApp(); break;
        case 11: { bool _r = _t->isExecuted();
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::searchingApp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Launcher::*)(QString , Session * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::sessionCreated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Launcher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::failed)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Launcher::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Launcher::appQuitRequired)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject CliStartStream::Launcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CliStartStream__Launcher.offsetsAndSize,
    qt_meta_data_CliStartStream__Launcher,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CliStartStream__Launcher_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<Session *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ComputerManager *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>

>,
    nullptr
} };


const QMetaObject *CliStartStream::Launcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CliStartStream::Launcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CliStartStream__Launcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CliStartStream::Launcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CliStartStream::Launcher::searchingComputer()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CliStartStream::Launcher::searchingApp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CliStartStream::Launcher::sessionCreated(QString _t1, Session * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CliStartStream::Launcher::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CliStartStream::Launcher::appQuitRequired(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
