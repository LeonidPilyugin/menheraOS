/****************************************************************************
** Meta object code from reading C++ file 'ContextualProcessJob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/contextualprocess/ContextualProcessJob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ContextualProcessJob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ContextualProcessJob_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContextualProcessJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContextualProcessJob_t qt_meta_stringdata_ContextualProcessJob = {
    {
QT_MOC_LITERAL(0, 0, 20) // "ContextualProcessJob"

    },
    "ContextualProcessJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContextualProcessJob[] = {

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

void ContextualProcessJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ContextualProcessJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::CppJob::staticMetaObject>(),
    qt_meta_stringdata_ContextualProcessJob.data,
    qt_meta_data_ContextualProcessJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContextualProcessJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContextualProcessJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContextualProcessJob.stringdata0))
        return static_cast<void*>(this);
    return Calamares::CppJob::qt_metacast(_clname);
}

int ContextualProcessJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::CppJob::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_ContextualProcessJobFactory_t {
    QByteArrayData data[1];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ContextualProcessJobFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ContextualProcessJobFactory_t qt_meta_stringdata_ContextualProcessJobFactory = {
    {
QT_MOC_LITERAL(0, 0, 27) // "ContextualProcessJobFactory"

    },
    "ContextualProcessJobFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ContextualProcessJobFactory[] = {

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

void ContextualProcessJobFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ContextualProcessJobFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<CalamaresPluginFactory::staticMetaObject>(),
    qt_meta_stringdata_ContextualProcessJobFactory.data,
    qt_meta_data_ContextualProcessJobFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ContextualProcessJobFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ContextualProcessJobFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ContextualProcessJobFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return CalamaresPluginFactory::qt_metacast(_clname);
}

int ContextualProcessJobFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x78,  0x1b,  'C',  'o',  'n',  't',  'e', 
    'x',  't',  'u',  'a',  'l',  'P',  'r',  'o', 
    'c',  'e',  's',  's',  'J',  'o',  'b',  'F', 
    'a',  'c',  't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(ContextualProcessJobFactory, ContextualProcessJobFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
