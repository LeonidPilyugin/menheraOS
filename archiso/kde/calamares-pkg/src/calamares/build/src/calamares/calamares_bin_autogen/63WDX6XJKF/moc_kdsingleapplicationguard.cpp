/****************************************************************************
** Meta object code from reading C++ file 'kdsingleapplicationguard.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../3rdparty/kdsingleapplicationguard/kdsingleapplicationguard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kdsingleapplicationguard.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_KDSingleApplicationGuard_t {
    QByteArrayData data[20];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_KDSingleApplicationGuard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_KDSingleApplicationGuard_t qt_meta_stringdata_KDSingleApplicationGuard = {
    {
QT_MOC_LITERAL(0, 0, 24), // "KDSingleApplicationGuard"
QT_MOC_LITERAL(1, 25, 15), // "instanceStarted"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 34), // "KDSingleApplicationGuard::Ins..."
QT_MOC_LITERAL(4, 77, 8), // "instance"
QT_MOC_LITERAL(5, 86, 14), // "instanceExited"
QT_MOC_LITERAL(6, 101, 13), // "exitRequested"
QT_MOC_LITERAL(7, 115, 14), // "raiseRequested"
QT_MOC_LITERAL(8, 130, 21), // "becamePrimaryInstance"
QT_MOC_LITERAL(9, 152, 23), // "becameSecondaryInstance"
QT_MOC_LITERAL(10, 176, 13), // "policyChanged"
QT_MOC_LITERAL(11, 190, 32), // "KDSingleApplicationGuard::Policy"
QT_MOC_LITERAL(12, 223, 6), // "policy"
QT_MOC_LITERAL(13, 230, 22), // "shutdownOtherInstances"
QT_MOC_LITERAL(14, 253, 18), // "killOtherInstances"
QT_MOC_LITERAL(15, 272, 11), // "operational"
QT_MOC_LITERAL(16, 284, 15), // "primaryInstance"
QT_MOC_LITERAL(17, 300, 6), // "Policy"
QT_MOC_LITERAL(18, 307, 8), // "NoPolicy"
QT_MOC_LITERAL(19, 316, 22) // "AutoKillOtherInstances"

    },
    "KDSingleApplicationGuard\0instanceStarted\0"
    "\0KDSingleApplicationGuard::Instance\0"
    "instance\0instanceExited\0exitRequested\0"
    "raiseRequested\0becamePrimaryInstance\0"
    "becameSecondaryInstance\0policyChanged\0"
    "KDSingleApplicationGuard::Policy\0"
    "policy\0shutdownOtherInstances\0"
    "killOtherInstances\0operational\0"
    "primaryInstance\0Policy\0NoPolicy\0"
    "AutoKillOtherInstances"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_KDSingleApplicationGuard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   74, // properties
       1,   90, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    1,   62,    2, 0x06 /* Public */,
       6,    0,   65,    2, 0x06 /* Public */,
       7,    0,   66,    2, 0x06 /* Public */,
       8,    0,   67,    2, 0x06 /* Public */,
       9,    0,   68,    2, 0x06 /* Public */,
      10,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,   72,    2, 0x0a /* Public */,
      14,    0,   73,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00095001,
       6, QMetaType::Bool, 0x00095001,
      16, QMetaType::Bool, 0x00495001,
      12, 0x80000000 | 17, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       4,
       6,

 // enums: name, alias, flags, count, data
      17,   17, 0x0,    2,   95,

 // enum data: key, value
      18, uint(KDSingleApplicationGuard::NoPolicy),
      19, uint(KDSingleApplicationGuard::AutoKillOtherInstances),

       0        // eod
};

void KDSingleApplicationGuard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KDSingleApplicationGuard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->instanceStarted((*reinterpret_cast< const KDSingleApplicationGuard::Instance(*)>(_a[1]))); break;
        case 1: _t->instanceExited((*reinterpret_cast< const KDSingleApplicationGuard::Instance(*)>(_a[1]))); break;
        case 2: _t->exitRequested(); break;
        case 3: _t->raiseRequested(); break;
        case 4: _t->becamePrimaryInstance(); break;
        case 5: _t->becameSecondaryInstance(); break;
        case 6: _t->policyChanged((*reinterpret_cast< KDSingleApplicationGuard::Policy(*)>(_a[1]))); break;
        case 7: _t->shutdownOtherInstances(); break;
        case 8: _t->killOtherInstances(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSingleApplicationGuard::Instance >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< KDSingleApplicationGuard::Instance >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KDSingleApplicationGuard::*)(const KDSingleApplicationGuard::Instance & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDSingleApplicationGuard::instanceStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KDSingleApplicationGuard::*)(const KDSingleApplicationGuard::Instance & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDSingleApplicationGuard::instanceExited)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KDSingleApplicationGuard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDSingleApplicationGuard::exitRequested)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KDSingleApplicationGuard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDSingleApplicationGuard::raiseRequested)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (KDSingleApplicationGuard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDSingleApplicationGuard::becamePrimaryInstance)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (KDSingleApplicationGuard::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDSingleApplicationGuard::becameSecondaryInstance)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (KDSingleApplicationGuard::*)(KDSingleApplicationGuard::Policy );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&KDSingleApplicationGuard::policyChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KDSingleApplicationGuard *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isOperational(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isExitRequested(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isPrimaryInstance(); break;
        case 3: *reinterpret_cast< Policy*>(_v) = _t->policy(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KDSingleApplicationGuard *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setPolicy(*reinterpret_cast< Policy*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject KDSingleApplicationGuard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_KDSingleApplicationGuard.data,
    qt_meta_data_KDSingleApplicationGuard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *KDSingleApplicationGuard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KDSingleApplicationGuard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_KDSingleApplicationGuard.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KDSingleApplicationGuard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void KDSingleApplicationGuard::instanceStarted(const KDSingleApplicationGuard::Instance & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KDSingleApplicationGuard::instanceExited(const KDSingleApplicationGuard::Instance & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KDSingleApplicationGuard::exitRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KDSingleApplicationGuard::raiseRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void KDSingleApplicationGuard::becamePrimaryInstance()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void KDSingleApplicationGuard::becameSecondaryInstance()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void KDSingleApplicationGuard::policyChanged(KDSingleApplicationGuard::Policy _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
