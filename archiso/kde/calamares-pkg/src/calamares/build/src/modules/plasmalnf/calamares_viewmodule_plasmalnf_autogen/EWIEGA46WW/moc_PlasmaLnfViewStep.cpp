/****************************************************************************
** Meta object code from reading C++ file 'PlasmaLnfViewStep.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/plasmalnf/PlasmaLnfViewStep.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlasmaLnfViewStep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlasmaLnfViewStep_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlasmaLnfViewStep_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlasmaLnfViewStep_t qt_meta_stringdata_PlasmaLnfViewStep = {
    {
QT_MOC_LITERAL(0, 0, 17) // "PlasmaLnfViewStep"

    },
    "PlasmaLnfViewStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlasmaLnfViewStep[] = {

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

void PlasmaLnfViewStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PlasmaLnfViewStep::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::ViewStep::staticMetaObject>(),
    qt_meta_stringdata_PlasmaLnfViewStep.data,
    qt_meta_data_PlasmaLnfViewStep,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlasmaLnfViewStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlasmaLnfViewStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlasmaLnfViewStep.stringdata0))
        return static_cast<void*>(this);
    return Calamares::ViewStep::qt_metacast(_clname);
}

int PlasmaLnfViewStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::ViewStep::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PlasmaLnfViewStepFactory_t {
    QByteArrayData data[1];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlasmaLnfViewStepFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlasmaLnfViewStepFactory_t qt_meta_stringdata_PlasmaLnfViewStepFactory = {
    {
QT_MOC_LITERAL(0, 0, 24) // "PlasmaLnfViewStepFactory"

    },
    "PlasmaLnfViewStepFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlasmaLnfViewStepFactory[] = {

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

void PlasmaLnfViewStepFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PlasmaLnfViewStepFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<CalamaresPluginFactory::staticMetaObject>(),
    qt_meta_stringdata_PlasmaLnfViewStepFactory.data,
    qt_meta_data_PlasmaLnfViewStepFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PlasmaLnfViewStepFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlasmaLnfViewStepFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlasmaLnfViewStepFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return CalamaresPluginFactory::qt_metacast(_clname);
}

int PlasmaLnfViewStepFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x78,  0x18,  'P',  'l',  'a',  's',  'm', 
    'a',  'L',  'n',  'f',  'V',  'i',  'e',  'w', 
    'S',  't',  'e',  'p',  'F',  'a',  'c',  't', 
    'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(PlasmaLnfViewStepFactory, PlasmaLnfViewStepFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
