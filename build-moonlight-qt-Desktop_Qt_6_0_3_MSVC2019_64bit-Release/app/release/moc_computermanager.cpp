/****************************************************************************
** Meta object code from reading C++ file 'computermanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../moonlight-qt/app/backend/computermanager.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MdnsPendingComputer_t {
    const uint offsetsAndSize[18];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MdnsPendingComputer_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MdnsPendingComputer_t qt_meta_stringdata_MdnsPendingComputer = {
    {
QT_MOC_LITERAL(0, 19), // "MdnsPendingComputer"
QT_MOC_LITERAL(20, 12), // "resolvedHost"
QT_MOC_LITERAL(33, 0), // ""
QT_MOC_LITERAL(34, 20), // "MdnsPendingComputer*"
QT_MOC_LITERAL(55, 20), // "QList<QHostAddress>&"
QT_MOC_LITERAL(76, 21), // "handleResolvedTimeout"
QT_MOC_LITERAL(98, 21), // "handleResolvedAddress"
QT_MOC_LITERAL(120, 12), // "QHostAddress"
QT_MOC_LITERAL(133, 7) // "address"

    },
    "MdnsPendingComputer\0resolvedHost\0\0"
    "MdnsPendingComputer*\0QList<QHostAddress>&\0"
    "handleResolvedTimeout\0handleResolvedAddress\0"
    "QHostAddress\0address"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MdnsPendingComputer[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x06,    0 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   37,    2, 0x08,    3 /* Private */,
       6,    1,   38,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void MdnsPendingComputer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MdnsPendingComputer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->resolvedHost((*reinterpret_cast< MdnsPendingComputer*(*)>(_a[1])),(*reinterpret_cast< QList<QHostAddress>(*)>(_a[2]))); break;
        case 1: _t->handleResolvedTimeout(); break;
        case 2: _t->handleResolvedAddress((*reinterpret_cast< const QHostAddress(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MdnsPendingComputer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MdnsPendingComputer::*)(MdnsPendingComputer * , QVector<QHostAddress> & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MdnsPendingComputer::resolvedHost)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MdnsPendingComputer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_MdnsPendingComputer.offsetsAndSize,
    qt_meta_data_MdnsPendingComputer,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MdnsPendingComputer_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<MdnsPendingComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QHostAddress> &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QHostAddress &, std::false_type>


>,
    nullptr
} };


const QMetaObject *MdnsPendingComputer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MdnsPendingComputer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MdnsPendingComputer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MdnsPendingComputer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void MdnsPendingComputer::resolvedHost(MdnsPendingComputer * _t1, QVector<QHostAddress> & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_ComputerManager_t {
    const uint offsetsAndSize[48];
    char stringdata0[355];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ComputerManager_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ComputerManager_t qt_meta_stringdata_ComputerManager = {
    {
QT_MOC_LITERAL(0, 15), // "ComputerManager"
QT_MOC_LITERAL(16, 20), // "computerStateChanged"
QT_MOC_LITERAL(37, 0), // ""
QT_MOC_LITERAL(38, 11), // "NvComputer*"
QT_MOC_LITERAL(50, 8), // "computer"
QT_MOC_LITERAL(59, 16), // "pairingCompleted"
QT_MOC_LITERAL(76, 5), // "error"
QT_MOC_LITERAL(82, 20), // "computerAddCompleted"
QT_MOC_LITERAL(103, 7), // "success"
QT_MOC_LITERAL(111, 20), // "detectedPortBlocking"
QT_MOC_LITERAL(132, 16), // "quitAppCompleted"
QT_MOC_LITERAL(149, 17), // "handleAboutToQuit"
QT_MOC_LITERAL(167, 26), // "handleComputerStateChanged"
QT_MOC_LITERAL(194, 25), // "handleMdnsServiceResolved"
QT_MOC_LITERAL(220, 20), // "MdnsPendingComputer*"
QT_MOC_LITERAL(241, 20), // "QList<QHostAddress>&"
QT_MOC_LITERAL(262, 9), // "addresses"
QT_MOC_LITERAL(272, 12), // "startPolling"
QT_MOC_LITERAL(285, 16), // "stopPollingAsync"
QT_MOC_LITERAL(302, 10), // "addNewHost"
QT_MOC_LITERAL(313, 7), // "address"
QT_MOC_LITERAL(321, 4), // "mdns"
QT_MOC_LITERAL(326, 12), // "QHostAddress"
QT_MOC_LITERAL(339, 15) // "mdnsIpv6Address"

    },
    "ComputerManager\0computerStateChanged\0"
    "\0NvComputer*\0computer\0pairingCompleted\0"
    "error\0computerAddCompleted\0success\0"
    "detectedPortBlocking\0quitAppCompleted\0"
    "handleAboutToQuit\0handleComputerStateChanged\0"
    "handleMdnsServiceResolved\0"
    "MdnsPendingComputer*\0QList<QHostAddress>&\0"
    "addresses\0startPolling\0stopPollingAsync\0"
    "addNewHost\0address\0mdns\0QHostAddress\0"
    "mdnsIpv6Address"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputerManager[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    0 /* Public */,
       5,    2,   83,    2, 0x06,    2 /* Public */,
       7,    2,   88,    2, 0x06,    5 /* Public */,
      10,    1,   93,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   96,    2, 0x08,   10 /* Private */,
      12,    1,   97,    2, 0x08,   11 /* Private */,
      13,    2,  100,    2, 0x08,   13 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  105,    2, 0x02,   16 /* Public */,
      18,    0,  106,    2, 0x02,   17 /* Public */,
      19,    3,  107,    2, 0x02,   18 /* Public */,
      19,    2,  114,    2, 0x22,   22 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    6,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,    8,    9,
    QMetaType::Void, QMetaType::QVariant,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 15,    4,   16,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool, 0x80000000 | 22,   20,   21,   23,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   20,   21,

       0        // eod
};

void ComputerManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComputerManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->computerStateChanged((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 1: _t->pairingCompleted((*reinterpret_cast< NvComputer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->computerAddCompleted((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: _t->quitAppCompleted((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 4: _t->handleAboutToQuit(); break;
        case 5: _t->handleComputerStateChanged((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 6: _t->handleMdnsServiceResolved((*reinterpret_cast< MdnsPendingComputer*(*)>(_a[1])),(*reinterpret_cast< QList<QHostAddress>(*)>(_a[2]))); break;
        case 7: _t->startPolling(); break;
        case 8: _t->stopPollingAsync(); break;
        case 9: _t->addNewHost((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QHostAddress(*)>(_a[3]))); break;
        case 10: _t->addNewHost((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MdnsPendingComputer* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComputerManager::*)(NvComputer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerManager::computerStateChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComputerManager::*)(NvComputer * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerManager::pairingCompleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ComputerManager::*)(QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerManager::computerAddCompleted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ComputerManager::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerManager::quitAppCompleted)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ComputerManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ComputerManager.offsetsAndSize,
    qt_meta_data_ComputerManager,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ComputerManager_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<MdnsPendingComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QHostAddress> &, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QHostAddress, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>

>,
    nullptr
} };


const QMetaObject *ComputerManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ComputerManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ComputerManager::computerStateChanged(NvComputer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ComputerManager::pairingCompleted(NvComputer * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ComputerManager::computerAddCompleted(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ComputerManager::quitAppCompleted(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
