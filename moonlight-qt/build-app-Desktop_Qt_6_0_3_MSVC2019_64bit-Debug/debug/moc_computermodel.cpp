/****************************************************************************
** Meta object code from reading C++ file 'computermodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../app/gui/computermodel.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'computermodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ComputerModel_t {
    const uint offsetsAndSize[50];
    char stringdata0[357];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ComputerModel_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ComputerModel_t qt_meta_stringdata_ComputerModel = {
    {
QT_MOC_LITERAL(0, 13), // "ComputerModel"
QT_MOC_LITERAL(14, 16), // "pairingCompleted"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 5), // "error"
QT_MOC_LITERAL(38, 23), // "connectionTestCompleted"
QT_MOC_LITERAL(62, 6), // "result"
QT_MOC_LITERAL(69, 12), // "blockedPorts"
QT_MOC_LITERAL(82, 26), // "handleComputerStateChanged"
QT_MOC_LITERAL(109, 11), // "NvComputer*"
QT_MOC_LITERAL(121, 8), // "computer"
QT_MOC_LITERAL(130, 22), // "handlePairingCompleted"
QT_MOC_LITERAL(153, 10), // "initialize"
QT_MOC_LITERAL(164, 16), // "ComputerManager*"
QT_MOC_LITERAL(181, 15), // "computerManager"
QT_MOC_LITERAL(197, 14), // "deleteComputer"
QT_MOC_LITERAL(212, 13), // "computerIndex"
QT_MOC_LITERAL(226, 17), // "generatePinString"
QT_MOC_LITERAL(244, 12), // "pairComputer"
QT_MOC_LITERAL(257, 3), // "pin"
QT_MOC_LITERAL(261, 25), // "testConnectionForComputer"
QT_MOC_LITERAL(287, 12), // "wakeComputer"
QT_MOC_LITERAL(300, 14), // "renameComputer"
QT_MOC_LITERAL(315, 4), // "name"
QT_MOC_LITERAL(320, 27), // "createSessionForCurrentGame"
QT_MOC_LITERAL(348, 8) // "Session*"

    },
    "ComputerModel\0pairingCompleted\0\0error\0"
    "connectionTestCompleted\0result\0"
    "blockedPorts\0handleComputerStateChanged\0"
    "NvComputer*\0computer\0handlePairingCompleted\0"
    "initialize\0ComputerManager*\0computerManager\0"
    "deleteComputer\0computerIndex\0"
    "generatePinString\0pairComputer\0pin\0"
    "testConnectionForComputer\0wakeComputer\0"
    "renameComputer\0name\0createSessionForCurrentGame\0"
    "Session*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ComputerModel[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    0 /* Public */,
       4,    2,   89,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   94,    2, 0x08,    5 /* Private */,
      10,    2,   97,    2, 0x08,    7 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  102,    2, 0x02,   10 /* Public */,
      14,    1,  105,    2, 0x02,   12 /* Public */,
      16,    0,  108,    2, 0x02,   14 /* Public */,
      17,    2,  109,    2, 0x02,   15 /* Public */,
      19,    1,  114,    2, 0x02,   18 /* Public */,
      20,    1,  117,    2, 0x02,   20 /* Public */,
      21,    2,  120,    2, 0x02,   22 /* Public */,
      23,    1,  125,    2, 0x02,   25 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8, QMetaType::QString,    9,    3,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::QString,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   15,   18,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   15,   22,
    0x80000000 | 24, QMetaType::Int,   15,

       0        // eod
};

void ComputerModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ComputerModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pairingCompleted((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->connectionTestCompleted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->handleComputerStateChanged((*reinterpret_cast< NvComputer*(*)>(_a[1]))); break;
        case 3: _t->handlePairingCompleted((*reinterpret_cast< NvComputer*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->initialize((*reinterpret_cast< ComputerManager*(*)>(_a[1]))); break;
        case 5: _t->deleteComputer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: { QString _r = _t->generatePinString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->pairComputer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->testConnectionForComputer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->wakeComputer((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->renameComputer((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 11: { Session* _r = _t->createSessionForCurrentGame((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< Session**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ComputerManager* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ComputerModel::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerModel::pairingCompleted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ComputerModel::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ComputerModel::connectionTestCompleted)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ComputerModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ComputerModel.offsetsAndSize,
    qt_meta_data_ComputerModel,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ComputerModel_t
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVariant, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<NvComputer *, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<ComputerManager *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<Session *, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>

>,
    nullptr
} };


const QMetaObject *ComputerModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ComputerModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ComputerModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ComputerModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ComputerModel::pairingCompleted(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ComputerModel::connectionTestCompleted(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
