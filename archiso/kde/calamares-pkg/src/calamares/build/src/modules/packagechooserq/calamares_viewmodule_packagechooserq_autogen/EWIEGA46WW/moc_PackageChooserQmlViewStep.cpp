/****************************************************************************
** Meta object code from reading C++ file 'PackageChooserQmlViewStep.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/packagechooserq/PackageChooserQmlViewStep.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PackageChooserQmlViewStep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PackageChooserQmlViewStep_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PackageChooserQmlViewStep_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PackageChooserQmlViewStep_t qt_meta_stringdata_PackageChooserQmlViewStep = {
    {
QT_MOC_LITERAL(0, 0, 25) // "PackageChooserQmlViewStep"

    },
    "PackageChooserQmlViewStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PackageChooserQmlViewStep[] = {

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

void PackageChooserQmlViewStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PackageChooserQmlViewStep::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::QmlViewStep::staticMetaObject>(),
    qt_meta_stringdata_PackageChooserQmlViewStep.data,
    qt_meta_data_PackageChooserQmlViewStep,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PackageChooserQmlViewStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PackageChooserQmlViewStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PackageChooserQmlViewStep.stringdata0))
        return static_cast<void*>(this);
    return Calamares::QmlViewStep::qt_metacast(_clname);
}

int PackageChooserQmlViewStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::QmlViewStep::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PackageChooserQmlViewStepFactory_t {
    QByteArrayData data[1];
    char stringdata0[33];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PackageChooserQmlViewStepFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PackageChooserQmlViewStepFactory_t qt_meta_stringdata_PackageChooserQmlViewStepFactory = {
    {
QT_MOC_LITERAL(0, 0, 32) // "PackageChooserQmlViewStepFactory"

    },
    "PackageChooserQmlViewStepFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PackageChooserQmlViewStepFactory[] = {

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

void PackageChooserQmlViewStepFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PackageChooserQmlViewStepFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<CalamaresPluginFactory::staticMetaObject>(),
    qt_meta_stringdata_PackageChooserQmlViewStepFactory.data,
    qt_meta_data_PackageChooserQmlViewStepFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PackageChooserQmlViewStepFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PackageChooserQmlViewStepFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PackageChooserQmlViewStepFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return CalamaresPluginFactory::qt_metacast(_clname);
}

int PackageChooserQmlViewStepFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x78,  0x20,  'P',  'a',  'c',  'k',  'a', 
    'g',  'e',  'C',  'h',  'o',  'o',  's',  'e', 
    'r',  'Q',  'm',  'l',  'V',  'i',  'e',  'w', 
    'S',  't',  'e',  'p',  'F',  'a',  'c',  't', 
    'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(PackageChooserQmlViewStepFactory, PackageChooserQmlViewStepFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
