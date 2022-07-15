/****************************************************************************
** Meta object code from reading C++ file 'LocaleViewStep.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/locale/LocaleViewStep.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocaleViewStep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocaleViewStep_t {
    QByteArrayData data[3];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocaleViewStep_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocaleViewStep_t qt_meta_stringdata_LocaleViewStep = {
    {
QT_MOC_LITERAL(0, 0, 14), // "LocaleViewStep"
QT_MOC_LITERAL(1, 15, 9), // "setUpPage"
QT_MOC_LITERAL(2, 25, 0) // ""

    },
    "LocaleViewStep\0setUpPage\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocaleViewStep[] = {

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
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void LocaleViewStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocaleViewStep *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setUpPage(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LocaleViewStep::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::ViewStep::staticMetaObject>(),
    qt_meta_stringdata_LocaleViewStep.data,
    qt_meta_data_LocaleViewStep,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocaleViewStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocaleViewStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocaleViewStep.stringdata0))
        return static_cast<void*>(this);
    return Calamares::ViewStep::qt_metacast(_clname);
}

int LocaleViewStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::ViewStep::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_LocaleViewStepFactory_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocaleViewStepFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocaleViewStepFactory_t qt_meta_stringdata_LocaleViewStepFactory = {
    {
QT_MOC_LITERAL(0, 0, 21) // "LocaleViewStepFactory"

    },
    "LocaleViewStepFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocaleViewStepFactory[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void LocaleViewStepFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LocaleViewStepFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<CalamaresPluginFactory::staticMetaObject>(),
    qt_meta_stringdata_LocaleViewStepFactory.data,
    qt_meta_data_LocaleViewStepFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocaleViewStepFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocaleViewStepFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocaleViewStepFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return CalamaresPluginFactory::qt_metacast(_clname);
}

int LocaleViewStepFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CalamaresPluginFactory::qt_metacall(_c, _id, _a);
    return _id;
}

QT_PLUGIN_METADATA_SECTION
static constexpr unsigned char qt_pluginMetaData[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1a,  'i',  'o',  '.',  'c',  'a', 
    'l',  'a',  'm',  'a',  'r',  'e',  's',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n',  'F',  'a', 
    'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x75,  'L',  'o',  'c',  'a',  'l',  'e', 
    'V',  'i',  'e',  'w',  'S',  't',  'e',  'p', 
    'F',  'a',  'c',  't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(LocaleViewStepFactory, LocaleViewStepFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
