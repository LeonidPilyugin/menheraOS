/****************************************************************************
** Meta object code from reading C++ file 'RequirementsModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamares/modulesystem/RequirementsModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RequirementsModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calamares__RequirementsModel_t {
    QByteArrayData data[10];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__RequirementsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__RequirementsModel_t qt_meta_stringdata_Calamares__RequirementsModel = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Calamares::RequirementsModel"
QT_MOC_LITERAL(1, 29, 28), // "satisfiedRequirementsChanged"
QT_MOC_LITERAL(2, 58, 0), // ""
QT_MOC_LITERAL(3, 59, 5), // "value"
QT_MOC_LITERAL(4, 65, 25), // "satisfiedMandatoryChanged"
QT_MOC_LITERAL(5, 91, 22), // "progressMessageChanged"
QT_MOC_LITERAL(6, 114, 7), // "message"
QT_MOC_LITERAL(7, 122, 21), // "satisfiedRequirements"
QT_MOC_LITERAL(8, 144, 18), // "satisfiedMandatory"
QT_MOC_LITERAL(9, 163, 15) // "progressMessage"

    },
    "Calamares::RequirementsModel\0"
    "satisfiedRequirementsChanged\0\0value\0"
    "satisfiedMandatoryChanged\0"
    "progressMessageChanged\0message\0"
    "satisfiedRequirements\0satisfiedMandatory\0"
    "progressMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__RequirementsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    1,   32,    2, 0x06 /* Public */,
       5,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString,    6,

 // properties: name, type, flags
       7, QMetaType::Bool, 0x00495801,
       8, QMetaType::Bool, 0x00495801,
       9, QMetaType::QString, 0x00495801,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Calamares::RequirementsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RequirementsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->satisfiedRequirementsChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->satisfiedMandatoryChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->progressMessageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RequirementsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RequirementsModel::satisfiedRequirementsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RequirementsModel::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RequirementsModel::satisfiedMandatoryChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (RequirementsModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RequirementsModel::progressMessageChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RequirementsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->satisfiedRequirements(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->satisfiedMandatory(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->progressMessage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Calamares::RequirementsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_Calamares__RequirementsModel.data,
    qt_meta_data_Calamares__RequirementsModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::RequirementsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::RequirementsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__RequirementsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Calamares::RequirementsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Calamares::RequirementsModel::satisfiedRequirementsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Calamares::RequirementsModel::satisfiedMandatoryChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Calamares::RequirementsModel::progressMessageChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
