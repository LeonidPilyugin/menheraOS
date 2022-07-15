/****************************************************************************
** Meta object code from reading C++ file 'GlobalStorage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamares/GlobalStorage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GlobalStorage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calamares__GlobalStorage_t {
    QByteArrayData data[8];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__GlobalStorage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__GlobalStorage_t qt_meta_stringdata_Calamares__GlobalStorage = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Calamares::GlobalStorage"
QT_MOC_LITERAL(1, 25, 7), // "changed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 8), // "contains"
QT_MOC_LITERAL(4, 43, 3), // "key"
QT_MOC_LITERAL(5, 47, 5), // "count"
QT_MOC_LITERAL(6, 53, 4), // "keys"
QT_MOC_LITERAL(7, 58, 5) // "value"

    },
    "Calamares::GlobalStorage\0changed\0\0"
    "contains\0key\0count\0keys\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__GlobalStorage[] = {

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
       3,    1,   40,    2, 0x0a /* Public */,
       5,    0,   43,    2, 0x0a /* Public */,
       6,    0,   44,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    4,
    QMetaType::Int,
    QMetaType::QStringList,
    QMetaType::QVariant, QMetaType::QString,    4,

       0        // eod
};

void Calamares::GlobalStorage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GlobalStorage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changed(); break;
        case 1: { bool _r = _t->contains((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->count();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 3: { QStringList _r = _t->keys();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 4: { QVariant _r = _t->value((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GlobalStorage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GlobalStorage::changed)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Calamares::GlobalStorage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Calamares__GlobalStorage.data,
    qt_meta_data_Calamares__GlobalStorage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::GlobalStorage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::GlobalStorage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__GlobalStorage.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Calamares::GlobalStorage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Calamares::GlobalStorage::changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
