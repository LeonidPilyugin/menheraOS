/****************************************************************************
** Meta object code from reading C++ file 'LoaderQueue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/netinstall/LoaderQueue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoaderQueue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoaderQueue_t {
    QByteArrayData data[8];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoaderQueue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoaderQueue_t qt_meta_stringdata_LoaderQueue = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoaderQueue"
QT_MOC_LITERAL(1, 12, 4), // "done"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 4), // "load"
QT_MOC_LITERAL(4, 23, 9), // "fetchNext"
QT_MOC_LITERAL(5, 33, 5), // "fetch"
QT_MOC_LITERAL(6, 39, 3), // "url"
QT_MOC_LITERAL(7, 43, 11) // "dataArrived"

    },
    "LoaderQueue\0done\0\0load\0fetchNext\0fetch\0"
    "url\0dataArrived"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoaderQueue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    1,   42,    2, 0x0a /* Public */,
       7,    0,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void,

       0        // eod
};

void LoaderQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoaderQueue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->load(); break;
        case 2: _t->fetchNext(); break;
        case 3: _t->fetch((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 4: _t->dataArrived(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoaderQueue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoaderQueue::done)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LoaderQueue::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_LoaderQueue.data,
    qt_meta_data_LoaderQueue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LoaderQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoaderQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoaderQueue.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LoaderQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void LoaderQueue::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
