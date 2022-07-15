/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/netinstall/Config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Config_t {
    QByteArrayData data[14];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Config"
QT_MOC_LITERAL(1, 7, 13), // "statusChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 6), // "status"
QT_MOC_LITERAL(4, 29, 19), // "sidebarLabelChanged"
QT_MOC_LITERAL(5, 49, 5), // "label"
QT_MOC_LITERAL(6, 55, 17), // "titleLabelChanged"
QT_MOC_LITERAL(7, 73, 11), // "statusReady"
QT_MOC_LITERAL(8, 85, 11), // "retranslate"
QT_MOC_LITERAL(9, 97, 11), // "loadingDone"
QT_MOC_LITERAL(10, 109, 12), // "packageModel"
QT_MOC_LITERAL(11, 122, 13), // "PackageModel*"
QT_MOC_LITERAL(12, 136, 12), // "sidebarLabel"
QT_MOC_LITERAL(13, 149, 10) // "titleLabel"

    },
    "Config\0statusChanged\0\0status\0"
    "sidebarLabelChanged\0label\0titleLabelChanged\0"
    "statusReady\0retranslate\0loadingDone\0"
    "packageModel\0PackageModel*\0sidebarLabel\0"
    "titleLabel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,
       6,    1,   50,    2, 0x06 /* Public */,
       7,    0,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   54,    2, 0x08 /* Private */,
       9,    0,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      10, 0x80000000 | 11, 0x0009580b,
       3, QMetaType::QString, 0x00495801,
      12, QMetaType::QString, 0x00495801,
      13, QMetaType::QString, 0x00495801,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sidebarLabelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->titleLabelChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->statusReady(); break;
        case 4: _t->retranslate(); break;
        case 5: _t->loadingDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Config::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Config::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::sidebarLabelChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Config::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::titleLabelChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Config::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::statusReady)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< PackageModel* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< PackageModel**>(_v) = _t->m_model; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->sidebarLabel(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->titleLabel(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->m_model != *reinterpret_cast< PackageModel**>(_v)) {
                _t->m_model = *reinterpret_cast< PackageModel**>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Config::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Config.data,
    qt_meta_data_Config,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Config.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void Config::statusChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::sidebarLabelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Config::titleLabelChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Config::statusReady()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
