/****************************************************************************
** Meta object code from reading C++ file 'WelcomeQmlViewStep.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/welcomeq/WelcomeQmlViewStep.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WelcomeQmlViewStep.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WelcomeQmlViewStep_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WelcomeQmlViewStep_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WelcomeQmlViewStep_t qt_meta_stringdata_WelcomeQmlViewStep = {
    {
QT_MOC_LITERAL(0, 0, 18) // "WelcomeQmlViewStep"

    },
    "WelcomeQmlViewStep"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WelcomeQmlViewStep[] = {

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

void WelcomeQmlViewStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WelcomeQmlViewStep::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::QmlViewStep::staticMetaObject>(),
    qt_meta_stringdata_WelcomeQmlViewStep.data,
    qt_meta_data_WelcomeQmlViewStep,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WelcomeQmlViewStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomeQmlViewStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WelcomeQmlViewStep.stringdata0))
        return static_cast<void*>(this);
    return Calamares::QmlViewStep::qt_metacast(_clname);
}

int WelcomeQmlViewStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::QmlViewStep::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_WelcomeQmlViewStepFactory_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WelcomeQmlViewStepFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WelcomeQmlViewStepFactory_t qt_meta_stringdata_WelcomeQmlViewStepFactory = {
    {
QT_MOC_LITERAL(0, 0, 25) // "WelcomeQmlViewStepFactory"

    },
    "WelcomeQmlViewStepFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WelcomeQmlViewStepFactory[] = {

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

void WelcomeQmlViewStepFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject WelcomeQmlViewStepFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<CalamaresPluginFactory::staticMetaObject>(),
    qt_meta_stringdata_WelcomeQmlViewStepFactory.data,
    qt_meta_data_WelcomeQmlViewStepFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WelcomeQmlViewStepFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WelcomeQmlViewStepFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WelcomeQmlViewStepFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return CalamaresPluginFactory::qt_metacast(_clname);
}

int WelcomeQmlViewStepFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x78,  0x19,  'W',  'e',  'l',  'c',  'o', 
    'm',  'e',  'Q',  'm',  'l',  'V',  'i',  'e', 
    'w',  'S',  't',  'e',  'p',  'F',  'a',  'c', 
    't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(WelcomeQmlViewStepFactory, WelcomeQmlViewStepFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
