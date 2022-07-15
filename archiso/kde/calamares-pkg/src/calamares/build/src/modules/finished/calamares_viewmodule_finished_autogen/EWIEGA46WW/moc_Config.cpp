/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/finished/Config.h"
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
    QByteArrayData data[31];
    char stringdata0[412];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Config_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Config"
QT_MOC_LITERAL(1, 7, 18), // "restartModeChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "RestartMode"
QT_MOC_LITERAL(4, 39, 1), // "m"
QT_MOC_LITERAL(5, 41, 23), // "restartNowWantedChanged"
QT_MOC_LITERAL(6, 65, 1), // "w"
QT_MOC_LITERAL(7, 67, 21), // "failureMessageChanged"
QT_MOC_LITERAL(8, 89, 21), // "failureDetailsChanged"
QT_MOC_LITERAL(9, 111, 14), // "failureChanged"
QT_MOC_LITERAL(10, 126, 14), // "restartNowMode"
QT_MOC_LITERAL(11, 141, 17), // "setRestartNowMode"
QT_MOC_LITERAL(12, 159, 16), // "restartNowWanted"
QT_MOC_LITERAL(13, 176, 19), // "setRestartNowWanted"
QT_MOC_LITERAL(14, 196, 17), // "restartNowCommand"
QT_MOC_LITERAL(15, 214, 16), // "notifyOnFinished"
QT_MOC_LITERAL(16, 231, 14), // "failureMessage"
QT_MOC_LITERAL(17, 246, 14), // "failureDetails"
QT_MOC_LITERAL(18, 261, 9), // "hasFailed"
QT_MOC_LITERAL(19, 271, 9), // "doRestart"
QT_MOC_LITERAL(20, 281, 13), // "restartAnyway"
QT_MOC_LITERAL(21, 295, 8), // "doNotify"
QT_MOC_LITERAL(22, 304, 10), // "sendAnyway"
QT_MOC_LITERAL(23, 315, 20), // "onInstallationFailed"
QT_MOC_LITERAL(24, 336, 7), // "message"
QT_MOC_LITERAL(25, 344, 7), // "details"
QT_MOC_LITERAL(26, 352, 6), // "failed"
QT_MOC_LITERAL(27, 359, 5), // "Never"
QT_MOC_LITERAL(28, 365, 20), // "UserDefaultUnchecked"
QT_MOC_LITERAL(29, 386, 18), // "UserDefaultChecked"
QT_MOC_LITERAL(30, 405, 6) // "Always"

    },
    "Config\0restartModeChanged\0\0RestartMode\0"
    "m\0restartNowWantedChanged\0w\0"
    "failureMessageChanged\0failureDetailsChanged\0"
    "failureChanged\0restartNowMode\0"
    "setRestartNowMode\0restartNowWanted\0"
    "setRestartNowWanted\0restartNowCommand\0"
    "notifyOnFinished\0failureMessage\0"
    "failureDetails\0hasFailed\0doRestart\0"
    "restartAnyway\0doNotify\0sendAnyway\0"
    "onInstallationFailed\0message\0details\0"
    "failed\0Never\0UserDefaultUnchecked\0"
    "UserDefaultChecked\0Always"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       7,  160, // properties
       1,  188, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  114,    2, 0x06 /* Public */,
       5,    1,  117,    2, 0x06 /* Public */,
       7,    1,  120,    2, 0x06 /* Public */,
       8,    1,  123,    2, 0x06 /* Public */,
       9,    1,  126,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  129,    2, 0x0a /* Public */,
      11,    1,  130,    2, 0x0a /* Public */,
      12,    0,  133,    2, 0x0a /* Public */,
      13,    1,  134,    2, 0x0a /* Public */,
      14,    0,  137,    2, 0x0a /* Public */,
      15,    0,  138,    2, 0x0a /* Public */,
      16,    0,  139,    2, 0x0a /* Public */,
      17,    0,  140,    2, 0x0a /* Public */,
      18,    0,  141,    2, 0x0a /* Public */,
      19,    1,  142,    2, 0x0a /* Public */,
      19,    0,  145,    2, 0x0a /* Public */,
      21,    2,  146,    2, 0x0a /* Public */,
      21,    1,  151,    2, 0x0a /* Public */,
      21,    0,  154,    2, 0x0a /* Public */,
      23,    2,  155,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    0x80000000 | 3,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   18,   22,
    QMetaType::Void, QMetaType::Bool,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   24,   25,

 // properties: name, type, flags
      10, 0x80000000 | 3, 0x0049510b,
      12, QMetaType::Bool, 0x00495103,
      14, QMetaType::QString, 0x00095c01,
      15, QMetaType::Bool, 0x00095c01,
      16, QMetaType::QString, 0x00495001,
      17, QMetaType::QString, 0x00495001,
      26, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       0,
       2,
       3,
       4,

 // enums: name, alias, flags, count, data
       3,    3, 0x2,    4,  193,

 // enum data: key, value
      27, uint(Config::RestartMode::Never),
      28, uint(Config::RestartMode::UserDefaultUnchecked),
      29, uint(Config::RestartMode::UserDefaultChecked),
      30, uint(Config::RestartMode::Always),

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->restartModeChanged((*reinterpret_cast< RestartMode(*)>(_a[1]))); break;
        case 1: _t->restartNowWantedChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->failureMessageChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->failureDetailsChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->failureChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: { RestartMode _r = _t->restartNowMode();
            if (_a[0]) *reinterpret_cast< RestartMode*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->setRestartNowMode((*reinterpret_cast< RestartMode(*)>(_a[1]))); break;
        case 7: { bool _r = _t->restartNowWanted();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->setRestartNowWanted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: { QString _r = _t->restartNowCommand();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->notifyOnFinished();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->failureMessage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->failureDetails();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->hasFailed();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: _t->doRestart((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->doRestart(); break;
        case 16: _t->doNotify((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 17: _t->doNotify((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->doNotify(); break;
        case 19: _t->onInstallationFailed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Config::*)(RestartMode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::restartModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Config::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::restartNowWantedChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Config::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::failureMessageChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Config::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::failureDetailsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Config::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Config::failureChanged)) {
                *result = 4;
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
        case 0: *reinterpret_cast< RestartMode*>(_v) = _t->restartNowMode(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->restartNowWanted(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->restartNowCommand(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->notifyOnFinished(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->failureMessage(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->failureDetails(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasFailed(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Config *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRestartNowMode(*reinterpret_cast< RestartMode*>(_v)); break;
        case 1: _t->setRestartNowWanted(*reinterpret_cast< bool*>(_v)); break;
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
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Config::restartModeChanged(RestartMode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::restartNowWantedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Config::failureMessageChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Config::failureDetailsChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Config::failureChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
