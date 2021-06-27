/****************************************************************************
** Meta object code from reading C++ file 'session.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../app/streaming/session.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'session.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Session_t {
    const uint offsetsAndSize[34];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Session_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Session_t qt_meta_stringdata_Session = {
    {
QT_MOC_LITERAL(0, 7), // "Session"
QT_MOC_LITERAL(8, 13), // "stageStarting"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 5), // "stage"
QT_MOC_LITERAL(29, 11), // "stageFailed"
QT_MOC_LITERAL(41, 9), // "errorCode"
QT_MOC_LITERAL(51, 12), // "failingPorts"
QT_MOC_LITERAL(64, 17), // "connectionStarted"
QT_MOC_LITERAL(82, 18), // "displayLaunchError"
QT_MOC_LITERAL(101, 4), // "text"
QT_MOC_LITERAL(106, 20), // "displayLaunchWarning"
QT_MOC_LITERAL(127, 12), // "quitStarting"
QT_MOC_LITERAL(140, 15), // "sessionFinished"
QT_MOC_LITERAL(156, 14), // "portTestResult"
QT_MOC_LITERAL(171, 4), // "exec"
QT_MOC_LITERAL(176, 14), // "displayOriginX"
QT_MOC_LITERAL(191, 14) // "displayOriginY"

    },
    "Session\0stageStarting\0\0stage\0stageFailed\0"
    "errorCode\0failingPorts\0connectionStarted\0"
    "displayLaunchError\0text\0displayLaunchWarning\0"
    "quitStarting\0sessionFinished\0"
    "portTestResult\0exec\0displayOriginX\0"
    "displayOriginY"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Session[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x06,    0 /* Public */,
       4,    3,   65,    2, 0x06,    2 /* Public */,
       7,    0,   72,    2, 0x06,    6 /* Public */,
       8,    1,   73,    2, 0x06,    7 /* Public */,
      10,    1,   76,    2, 0x06,    9 /* Public */,
      11,    0,   79,    2, 0x06,   11 /* Public */,
      12,    1,   80,    2, 0x06,   12 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      14,    2,   83,    2, 0x02,   14 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,    3,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,

       0        // eod
};

void Session::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Session *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stageStarting((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->stageFailed((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->connectionStarted(); break;
        case 3: _t->displayLaunchError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->displayLaunchWarning((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->quitStarting(); break;
        case 6: _t->sessionFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->exec((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Session::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::stageStarting)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Session::*)(QString , int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::stageFailed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::connectionStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Session::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::displayLaunchError)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Session::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::displayLaunchWarning)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Session::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::quitStarting)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Session::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Session::sessionFinished)) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject Session::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Session.offsetsAndSize,
    qt_meta_data_Session,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Session_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

>,
    nullptr
} };


const QMetaObject *Session::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Session::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Session.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Session::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Session::stageStarting(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Session::stageFailed(QString _t1, int _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Session::connectionStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Session::displayLaunchError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Session::displayLaunchWarning(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Session::quitStarting()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Session::sessionFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
