/****************************************************************************
** Meta object code from reading C++ file 'TimeZone.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamares/locale/TimeZone.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeZone.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CalamaresUtils__Locale__TimeZoneData_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalamaresUtils__Locale__TimeZoneData_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalamaresUtils__Locale__TimeZoneData_t qt_meta_stringdata_CalamaresUtils__Locale__TimeZoneData = {
    {
QT_MOC_LITERAL(0, 0, 36), // "CalamaresUtils::Locale::TimeZ..."
QT_MOC_LITERAL(1, 37, 6), // "region"
QT_MOC_LITERAL(2, 44, 4), // "zone"
QT_MOC_LITERAL(3, 49, 4), // "name"
QT_MOC_LITERAL(4, 54, 11) // "countryCode"

    },
    "CalamaresUtils::Locale::TimeZoneData\0"
    "region\0zone\0name\0countryCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalamaresUtils__Locale__TimeZoneData[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00095401,
       2, QMetaType::QString, 0x00095401,
       3, QMetaType::QString, 0x00095401,
       4, QMetaType::QString, 0x00095401,

       0        // eod
};

void CalamaresUtils::Locale::TimeZoneData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimeZoneData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->region(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->zone(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->tr(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->country(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject CalamaresUtils::Locale::TimeZoneData::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CalamaresUtils__Locale__TimeZoneData.data,
    qt_meta_data_CalamaresUtils__Locale__TimeZoneData,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalamaresUtils::Locale::TimeZoneData::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalamaresUtils::Locale::TimeZoneData::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalamaresUtils__Locale__TimeZoneData.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "TranslatableString"))
        return static_cast< TranslatableString*>(this);
    return QObject::qt_metacast(_clname);
}

int CalamaresUtils::Locale::TimeZoneData::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
struct qt_meta_stringdata_CalamaresUtils__Locale__RegionsModel_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalamaresUtils__Locale__RegionsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalamaresUtils__Locale__RegionsModel_t qt_meta_stringdata_CalamaresUtils__Locale__RegionsModel = {
    {
QT_MOC_LITERAL(0, 0, 36), // "CalamaresUtils::Locale::Regio..."
QT_MOC_LITERAL(1, 37, 2), // "tr"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6) // "region"

    },
    "CalamaresUtils::Locale::RegionsModel\0"
    "tr\0\0region"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalamaresUtils__Locale__RegionsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::QString, QMetaType::QString,    3,

       0        // eod
};

void CalamaresUtils::Locale::RegionsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegionsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QString _r = _t->tr((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalamaresUtils::Locale::RegionsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CalamaresUtils__Locale__RegionsModel.data,
    qt_meta_data_CalamaresUtils__Locale__RegionsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalamaresUtils::Locale::RegionsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalamaresUtils::Locale::RegionsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalamaresUtils__Locale__RegionsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CalamaresUtils::Locale::RegionsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_CalamaresUtils__Locale__ZonesModel_t {
    QByteArrayData data[9];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalamaresUtils__Locale__ZonesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalamaresUtils__Locale__ZonesModel_t qt_meta_stringdata_CalamaresUtils__Locale__ZonesModel = {
    {
QT_MOC_LITERAL(0, 0, 34), // "CalamaresUtils::Locale::Zones..."
QT_MOC_LITERAL(1, 35, 4), // "find"
QT_MOC_LITERAL(2, 40, 19), // "const TimeZoneData*"
QT_MOC_LITERAL(3, 60, 0), // ""
QT_MOC_LITERAL(4, 61, 6), // "region"
QT_MOC_LITERAL(5, 68, 4), // "zone"
QT_MOC_LITERAL(6, 73, 8), // "latitude"
QT_MOC_LITERAL(7, 82, 9), // "longitude"
QT_MOC_LITERAL(8, 92, 6) // "lookup"

    },
    "CalamaresUtils::Locale::ZonesModel\0"
    "find\0const TimeZoneData*\0\0region\0zone\0"
    "latitude\0longitude\0lookup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalamaresUtils__Locale__ZonesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    3, 0x0a /* Public */,
       1,    2,   34,    3, 0x0a /* Public */,
       8,    2,   39,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, QMetaType::QString, QMetaType::QString,    4,    5,
    0x80000000 | 2, QMetaType::Double, QMetaType::Double,    6,    7,
    QMetaType::QObjectStar, QMetaType::Double, QMetaType::Double,    6,    7,

       0        // eod
};

void CalamaresUtils::Locale::ZonesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ZonesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { const TimeZoneData* _r = _t->find((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const TimeZoneData**>(_a[0]) = std::move(_r); }  break;
        case 1: { const TimeZoneData* _r = _t->find((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< const TimeZoneData**>(_a[0]) = std::move(_r); }  break;
        case 2: { QObject* _r = _t->lookup((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QObject**>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CalamaresUtils::Locale::ZonesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CalamaresUtils__Locale__ZonesModel.data,
    qt_meta_data_CalamaresUtils__Locale__ZonesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalamaresUtils::Locale::ZonesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalamaresUtils::Locale::ZonesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalamaresUtils__Locale__ZonesModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CalamaresUtils::Locale::ZonesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_CalamaresUtils__Locale__RegionalZonesModel_t {
    QByteArrayData data[6];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CalamaresUtils__Locale__RegionalZonesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CalamaresUtils__Locale__RegionalZonesModel_t qt_meta_stringdata_CalamaresUtils__Locale__RegionalZonesModel = {
    {
QT_MOC_LITERAL(0, 0, 42), // "CalamaresUtils::Locale::Regio..."
QT_MOC_LITERAL(1, 43, 13), // "regionChanged"
QT_MOC_LITERAL(2, 57, 0), // ""
QT_MOC_LITERAL(3, 58, 9), // "setRegion"
QT_MOC_LITERAL(4, 68, 1), // "r"
QT_MOC_LITERAL(5, 70, 6) // "region"

    },
    "CalamaresUtils::Locale::RegionalZonesModel\0"
    "regionChanged\0\0setRegion\0r\0region"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CalamaresUtils__Locale__RegionalZonesModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       1,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    4,

 // properties: name, type, flags
       5, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,

       0        // eod
};

void CalamaresUtils::Locale::RegionalZonesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RegionalZonesModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->regionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->setRegion((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RegionalZonesModel::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RegionalZonesModel::regionChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RegionalZonesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->region(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RegionalZonesModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRegion(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CalamaresUtils::Locale::RegionalZonesModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QSortFilterProxyModel::staticMetaObject>(),
    qt_meta_stringdata_CalamaresUtils__Locale__RegionalZonesModel.data,
    qt_meta_data_CalamaresUtils__Locale__RegionalZonesModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CalamaresUtils::Locale::RegionalZonesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalamaresUtils::Locale::RegionalZonesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CalamaresUtils__Locale__RegionalZonesModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int CalamaresUtils::Locale::RegionalZonesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CalamaresUtils::Locale::RegionalZonesModel::regionChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
