/****************************************************************************
** Meta object code from reading C++ file 'browser_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../moonlight-qt/qmdnsengine/qmdnsengine/src/src/browser_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'browser_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMdnsEngine__BrowserPrivate_t {
    const uint offsetsAndSize[22];
    char stringdata0[139];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QMdnsEngine__BrowserPrivate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QMdnsEngine__BrowserPrivate_t qt_meta_stringdata_QMdnsEngine__BrowserPrivate = {
    {
QT_MOC_LITERAL(0, 27), // "QMdnsEngine::BrowserPrivate"
QT_MOC_LITERAL(28, 17), // "onMessageReceived"
QT_MOC_LITERAL(46, 0), // ""
QT_MOC_LITERAL(47, 7), // "Message"
QT_MOC_LITERAL(55, 7), // "message"
QT_MOC_LITERAL(63, 13), // "onShouldQuery"
QT_MOC_LITERAL(77, 6), // "Record"
QT_MOC_LITERAL(84, 6), // "record"
QT_MOC_LITERAL(91, 15), // "onRecordExpired"
QT_MOC_LITERAL(107, 14), // "onQueryTimeout"
QT_MOC_LITERAL(122, 16) // "onServiceTimeout"

    },
    "QMdnsEngine::BrowserPrivate\0"
    "onMessageReceived\0\0Message\0message\0"
    "onShouldQuery\0Record\0record\0onRecordExpired\0"
    "onQueryTimeout\0onServiceTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMdnsEngine__BrowserPrivate[] = {

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
       1,    1,   44,    2, 0x08,    0 /* Private */,
       5,    1,   47,    2, 0x08,    2 /* Private */,
       8,    1,   50,    2, 0x08,    4 /* Private */,
       9,    0,   53,    2, 0x08,    6 /* Private */,
      10,    0,   54,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QMdnsEngine::BrowserPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BrowserPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMessageReceived((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 1: _t->onShouldQuery((*reinterpret_cast< const Record(*)>(_a[1]))); break;
        case 2: _t->onRecordExpired((*reinterpret_cast< const Record(*)>(_a[1]))); break;
        case 3: _t->onQueryTimeout(); break;
        case 4: _t->onServiceTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject QMdnsEngine::BrowserPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QMdnsEngine__BrowserPrivate.offsetsAndSize,
    qt_meta_data_QMdnsEngine__BrowserPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QMdnsEngine__BrowserPrivate_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Record &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Record &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QMdnsEngine::BrowserPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMdnsEngine::BrowserPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMdnsEngine__BrowserPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMdnsEngine::BrowserPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
