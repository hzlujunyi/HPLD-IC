/****************************************************************************
** Meta object code from reading C++ file 'resolver_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../moonlight-qt/qmdnsengine/qmdnsengine/src/src/resolver_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resolver_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QMdnsEngine__ResolverPrivate_t {
    const uint offsetsAndSize[12];
    char stringdata0[74];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_QMdnsEngine__ResolverPrivate_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_QMdnsEngine__ResolverPrivate_t qt_meta_stringdata_QMdnsEngine__ResolverPrivate = {
    {
QT_MOC_LITERAL(0, 28), // "QMdnsEngine::ResolverPrivate"
QT_MOC_LITERAL(29, 17), // "onMessageReceived"
QT_MOC_LITERAL(47, 0), // ""
QT_MOC_LITERAL(48, 7), // "Message"
QT_MOC_LITERAL(56, 7), // "message"
QT_MOC_LITERAL(64, 9) // "onTimeout"

    },
    "QMdnsEngine::ResolverPrivate\0"
    "onMessageReceived\0\0Message\0message\0"
    "onTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QMdnsEngine__ResolverPrivate[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    0 /* Private */,
       5,    0,   29,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

void QMdnsEngine::ResolverPrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResolverPrivate *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMessageReceived((*reinterpret_cast< const Message(*)>(_a[1]))); break;
        case 1: _t->onTimeout(); break;
        default: ;
        }
    }
}

const QMetaObject QMdnsEngine::ResolverPrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_QMdnsEngine__ResolverPrivate.offsetsAndSize,
    qt_meta_data_QMdnsEngine__ResolverPrivate,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_QMdnsEngine__ResolverPrivate_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const Message &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *QMdnsEngine::ResolverPrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QMdnsEngine::ResolverPrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QMdnsEngine__ResolverPrivate.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QMdnsEngine::ResolverPrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE