/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/partition/Config.h"
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
    QByteArrayData data[25];
    char stringdata0[320];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Config"
QT_MOC_LITERAL(1, 7, 20), // "installChoiceChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "InstallChoice"
QT_MOC_LITERAL(4, 43, 17), // "swapChoiceChanged"
QT_MOC_LITERAL(5, 61, 10), // "SwapChoice"
QT_MOC_LITERAL(6, 72, 26), // "eraseModeFilesystemChanged"
QT_MOC_LITERAL(7, 99, 16), // "setInstallChoice"
QT_MOC_LITERAL(8, 116, 13), // "setSwapChoice"
QT_MOC_LITERAL(9, 130, 20), // "setEraseFsTypeChoice"
QT_MOC_LITERAL(10, 151, 14), // "filesystemName"
QT_MOC_LITERAL(11, 166, 13), // "installChoice"
QT_MOC_LITERAL(12, 180, 10), // "swapChoice"
QT_MOC_LITERAL(13, 191, 19), // "eraseModeFilesystem"
QT_MOC_LITERAL(14, 211, 23), // "allowManualPartitioning"
QT_MOC_LITERAL(15, 235, 8), // "NoChoice"
QT_MOC_LITERAL(16, 244, 9), // "Alongside"
QT_MOC_LITERAL(17, 254, 5), // "Erase"
QT_MOC_LITERAL(18, 260, 7), // "Replace"
QT_MOC_LITERAL(19, 268, 6), // "Manual"
QT_MOC_LITERAL(20, 275, 6), // "NoSwap"
QT_MOC_LITERAL(21, 282, 9), // "ReuseSwap"
QT_MOC_LITERAL(22, 292, 9), // "SmallSwap"
QT_MOC_LITERAL(23, 302, 8), // "FullSwap"
QT_MOC_LITERAL(24, 311, 8) // "SwapFile"

    },
    "Config\0installChoiceChanged\0\0InstallChoice\0"
    "swapChoiceChanged\0SwapChoice\0"
    "eraseModeFilesystemChanged\0setInstallChoice\0"
    "setSwapChoice\0setEraseFsTypeChoice\0"
    "filesystemName\0installChoice\0swapChoice\0"
    "eraseModeFilesystem\0allowManualPartitioning\0"
    "NoChoice\0Alongside\0Erase\0Replace\0"
    "Manual\0NoSwap\0ReuseSwap\0SmallSwap\0"
    "FullSwap\0SwapFile"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   78, // properties
       2,   94, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   63,    2, 0x0a /* Public */,
       7,    1,   66,    2, 0x0a /* Public */,
       8,    1,   69,    2, 0x0a /* Public */,
       8,    1,   72,    2, 0x0a /* Public */,
       9,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QString,   10,

 // properties: name, type, flags
      11, 0x80000000 | 3, 0x0049510b,
      12, 0x80000000 | 5, 0x0049510b,
      13, QMetaType::QString, 0x00495003,
      14, QMetaType::Bool, 0x00095c01,

 // properties: notify_signal_id
       0,
       1,
       2,
       0,

 // enums: name, alias, flags, count, data
       3,    3, 0x0,    5,  104,
       5,    5, 0x0,    5,  114,

 // enum data: key, value
      15, uint(Config::NoChoice),
      16, uint(Config::Alongside),
      17, uint(Config::Erase),
      18, uint(Config::Replace),
      19, uint(Config::Manual),
      20, uint(Config::NoSwap),
      21, uint(Config::ReuseSwap),
      22, uint(Config::SmallSwap),
      23, uint(Config::FullSwap),
      24, uint(Config::SwapFile),

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->installChoiceChanged((*reinterpret_cast< InstallChoice(*)>(_a[1]))); break;
        case 1: _t->swapChoiceChanged((*reinterpret_cast< SwapChoice(*)>(_a[1]))); break;
        case 2: _t->eraseModeFilesystemChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->setInstallChoice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setInstallChoice((*reinterpret_cast< InstallChoice(*)>(_a[1]))); break;
        case 5: _t->setSwapChoice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setSwapChoice((*reinterpret_cast< SwapChoice(*)>(_a[1]))); break;
        case 7: _t->setEraseFsTypeChoice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Config::*)(InstallChoice );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::installChoiceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Config::*)(SwapChoice );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::swapChoiceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Config::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::eraseModeFilesystemChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< InstallChoice*>(_v) = _t->installChoice(); break;
        case 1: *reinterpret_cast< SwapChoice*>(_v) = _t->swapChoice(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->eraseFsType(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->allowManualPartitioning(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInstallChoice(*reinterpret_cast< InstallChoice*>(_v)); break;
        case 1: _t->setSwapChoice(*reinterpret_cast< SwapChoice*>(_v)); break;
        case 2: _t->setEraseFsTypeChoice(*reinterpret_cast< QString*>(_v)); break;
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
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
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
void Config::installChoiceChanged(InstallChoice _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::swapChoiceChanged(SwapChoice _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Config::eraseModeFilesystemChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
