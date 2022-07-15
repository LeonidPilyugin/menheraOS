/****************************************************************************
** Meta object code from reading C++ file 'JobExample.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamares/JobExample.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JobExample.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calamares__NamedJob_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__NamedJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__NamedJob_t qt_meta_stringdata_Calamares__NamedJob = {
    {
QT_MOC_LITERAL(0, 0, 19) // "Calamares::NamedJob"

    },
    "Calamares::NamedJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__NamedJob[] = {

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

void Calamares::NamedJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Calamares::NamedJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Job::staticMetaObject>(),
    qt_meta_stringdata_Calamares__NamedJob.data,
    qt_meta_data_Calamares__NamedJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::NamedJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::NamedJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__NamedJob.stringdata0))
        return static_cast<void*>(this);
    return Job::qt_metacast(_clname);
}

int Calamares::NamedJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Job::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Calamares__GoodJob_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__GoodJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__GoodJob_t qt_meta_stringdata_Calamares__GoodJob = {
    {
QT_MOC_LITERAL(0, 0, 18) // "Calamares::GoodJob"

    },
    "Calamares::GoodJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__GoodJob[] = {

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

void Calamares::GoodJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Calamares::GoodJob::staticMetaObject = { {
    QMetaObject::SuperData::link<NamedJob::staticMetaObject>(),
    qt_meta_stringdata_Calamares__GoodJob.data,
    qt_meta_data_Calamares__GoodJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::GoodJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::GoodJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__GoodJob.stringdata0))
        return static_cast<void*>(this);
    return NamedJob::qt_metacast(_clname);
}

int Calamares::GoodJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NamedJob::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Calamares__FailJob_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__FailJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__FailJob_t qt_meta_stringdata_Calamares__FailJob = {
    {
QT_MOC_LITERAL(0, 0, 18) // "Calamares::FailJob"

    },
    "Calamares::FailJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__FailJob[] = {

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

void Calamares::FailJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Calamares::FailJob::staticMetaObject = { {
    QMetaObject::SuperData::link<NamedJob::staticMetaObject>(),
    qt_meta_stringdata_Calamares__FailJob.data,
    qt_meta_data_Calamares__FailJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::FailJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::FailJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__FailJob.stringdata0))
        return static_cast<void*>(this);
    return NamedJob::qt_metacast(_clname);
}

int Calamares::FailJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NamedJob::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
