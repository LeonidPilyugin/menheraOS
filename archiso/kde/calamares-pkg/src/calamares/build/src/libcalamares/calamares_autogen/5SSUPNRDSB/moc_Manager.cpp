/****************************************************************************
** Meta object code from reading C++ file 'Manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamares/network/Manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalamaresUtils__Network__Manager_t {
    QByteArrayData data[7];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalamaresUtils__Network__Manager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalamaresUtils__Network__Manager_t qt_meta_stringdata_CalamaresUtils__Network__Manager = {
    {
QT_MOC_LITERAL(0, 0, 32), // "CalamaresUtils::Network::Manager"
QT_MOC_LITERAL(1, 33, 18), // "hasInternetChanged"
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 16), // "checkHasInternet"
QT_MOC_LITERAL(4, 70, 11), // "hasInternet"
QT_MOC_LITERAL(5, 82, 17), // "checkInternetUrls"
QT_MOC_LITERAL(6, 100, 13) // "QVector<QUrl>"

    },
    "CalamaresUtils::Network::Manager\0"
    "hasInternetChanged\0\0checkHasInternet\0"
    "hasInternet\0checkInternetUrls\0"
    "QVector<QUrl>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalamaresUtils__Network__Manager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   32,    2, 0x0a /* Public */,
       4,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,

 // properties: name, type, flags
       4, QMetaType::Bool, 0x00495801,
       5, 0x80000000 | 6, 0x0009500b,

 // properties: notify_signal_id
       0,
       0,

       0        // eod
};

void CalamaresUtils::Network::Manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Manager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hasInternetChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: { bool _r = _t->checkHasInternet();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->hasInternet();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Manager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Manager::hasInternetChanged)) {
                *result = 0;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QUrl> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Manager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->hasInternet(); break;
        case 1: *reinterpret_cast< QVector<QUrl>*>(_v) = _t->getCheckInternetUrls(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Manager *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCheckHasInternetUrl(*reinterpret_cast< QVector<QUrl>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CalamaresUtils::Network::Manager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CalamaresUtils__Network__Manager.data,
    qt_meta_data_CalamaresUtils__Network__Manager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalamaresUtils::Network::Manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalamaresUtils::Network::Manager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalamaresUtils__Network__Manager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CalamaresUtils::Network::Manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CalamaresUtils::Network::Manager::hasInternetChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
