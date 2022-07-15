/****************************************************************************
** Meta object code from reading C++ file 'ModuleManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamaresui/modulesystem/ModuleManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModuleManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calamares__ModuleManager_t {
    QByteArrayData data[8];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__ModuleManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__ModuleManager_t qt_meta_stringdata_Calamares__ModuleManager = {
    {
QT_MOC_LITERAL(0, 0, 24), // "Calamares::ModuleManager"
QT_MOC_LITERAL(1, 25, 8), // "initDone"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 13), // "modulesLoaded"
QT_MOC_LITERAL(4, 49, 13), // "modulesFailed"
QT_MOC_LITERAL(5, 63, 20), // "requirementsComplete"
QT_MOC_LITERAL(6, 84, 11), // "canContinue"
QT_MOC_LITERAL(7, 96, 6) // "doInit"

    },
    "Calamares::ModuleManager\0initDone\0\0"
    "modulesLoaded\0modulesFailed\0"
    "requirementsComplete\0canContinue\0"
    "doInit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__ModuleManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,
       5,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Calamares::ModuleManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModuleManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initDone(); break;
        case 1: _t->modulesLoaded(); break;
        case 2: _t->modulesFailed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->requirementsComplete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->doInit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModuleManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::initDone)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModuleManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::modulesLoaded)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModuleManager::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::modulesFailed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ModuleManager::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModuleManager::requirementsComplete)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Calamares::ModuleManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Calamares__ModuleManager.data,
    qt_meta_data_Calamares__ModuleManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::ModuleManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::ModuleManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__ModuleManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Calamares::ModuleManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Calamares::ModuleManager::initDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Calamares::ModuleManager::modulesLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Calamares::ModuleManager::modulesFailed(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Calamares::ModuleManager::requirementsComplete(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
