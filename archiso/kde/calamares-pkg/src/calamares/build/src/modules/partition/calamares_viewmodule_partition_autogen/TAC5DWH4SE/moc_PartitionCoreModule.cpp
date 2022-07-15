/****************************************************************************
** Meta object code from reading C++ file 'PartitionCoreModule.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/partition/core/PartitionCoreModule.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PartitionCoreModule.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartitionCoreModule_t {
    QByteArrayData data[9];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartitionCoreModule_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartitionCoreModule_t qt_meta_stringdata_PartitionCoreModule = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PartitionCoreModule"
QT_MOC_LITERAL(1, 20, 24), // "hasRootMountPointChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 5), // "value"
QT_MOC_LITERAL(4, 52, 14), // "isDirtyChanged"
QT_MOC_LITERAL(5, 67, 8), // "reverted"
QT_MOC_LITERAL(6, 76, 14), // "deviceReverted"
QT_MOC_LITERAL(7, 91, 7), // "Device*"
QT_MOC_LITERAL(8, 99, 6) // "device"

    },
    "PartitionCoreModule\0hasRootMountPointChanged\0"
    "\0value\0isDirtyChanged\0reverted\0"
    "deviceReverted\0Device*\0device"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartitionCoreModule[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    0,   40,    2, 0x06 /* Public */,
       6,    1,   41,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void PartitionCoreModule::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartitionCoreModule *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hasRootMountPointChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->isDirtyChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->reverted(); break;
        case 3: _t->deviceReverted((*reinterpret_cast< Device*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PartitionCoreModule::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartitionCoreModule::hasRootMountPointChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PartitionCoreModule::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartitionCoreModule::isDirtyChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PartitionCoreModule::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartitionCoreModule::reverted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PartitionCoreModule::*)(Device * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PartitionCoreModule::deviceReverted)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PartitionCoreModule::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PartitionCoreModule.data,
    qt_meta_data_PartitionCoreModule,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartitionCoreModule::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartitionCoreModule::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartitionCoreModule.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PartitionCoreModule::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void PartitionCoreModule::hasRootMountPointChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PartitionCoreModule::isDirtyChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PartitionCoreModule::reverted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PartitionCoreModule::deviceReverted(Device * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
