/****************************************************************************
** Meta object code from reading C++ file 'LuksBootKeyFileJob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/luksbootkeyfile/LuksBootKeyFileJob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LuksBootKeyFileJob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LuksBootKeyFileJob_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LuksBootKeyFileJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LuksBootKeyFileJob_t qt_meta_stringdata_LuksBootKeyFileJob = {
    {
QT_MOC_LITERAL(0, 0, 18) // "LuksBootKeyFileJob"

    },
    "LuksBootKeyFileJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LuksBootKeyFileJob[] = {

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

void LuksBootKeyFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LuksBootKeyFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::CppJob::staticMetaObject>(),
    qt_meta_stringdata_LuksBootKeyFileJob.data,
    qt_meta_data_LuksBootKeyFileJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LuksBootKeyFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LuksBootKeyFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LuksBootKeyFileJob.stringdata0))
        return static_cast<void*>(this);
    return Calamares::CppJob::qt_metacast(_clname);
}

int LuksBootKeyFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::CppJob::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_LuksBootKeyFileJobFactory_t {
    QByteArrayData data[1];
    char stringdata0[26];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LuksBootKeyFileJobFactory_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LuksBootKeyFileJobFactory_t qt_meta_stringdata_LuksBootKeyFileJobFactory = {
    {
QT_MOC_LITERAL(0, 0, 25) // "LuksBootKeyFileJobFactory"

    },
    "LuksBootKeyFileJobFactory"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LuksBootKeyFileJobFactory[] = {

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

void LuksBootKeyFileJobFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject LuksBootKeyFileJobFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<CalamaresPluginFactory::staticMetaObject>(),
    qt_meta_stringdata_LuksBootKeyFileJobFactory.data,
    qt_meta_data_LuksBootKeyFileJobFactory,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LuksBootKeyFileJobFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LuksBootKeyFileJobFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LuksBootKeyFileJobFactory.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "org.kde.KPluginFactory"))
        return static_cast< KPluginFactory*>(this);
    return CalamaresPluginFactory::qt_metacast(_clname);
}

int LuksBootKeyFileJobFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    0x03,  0x78,  0x19,  'L',  'u',  'k',  's',  'B', 
    'o',  'o',  't',  'K',  'e',  'y',  'F',  'i', 
    'l',  'e',  'J',  'o',  'b',  'F',  'a',  'c', 
    't',  'o',  'r',  'y', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(LuksBootKeyFileJobFactory, LuksBootKeyFileJobFactory)

QT_WARNING_POP
QT_END_MOC_NAMESPACE
