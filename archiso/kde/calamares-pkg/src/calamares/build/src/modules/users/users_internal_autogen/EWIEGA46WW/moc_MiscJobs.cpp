/****************************************************************************
** Meta object code from reading C++ file 'MiscJobs.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/users/MiscJobs.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MiscJobs.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SetupSudoJob_t {
    QByteArrayData data[1];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetupSudoJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetupSudoJob_t qt_meta_stringdata_SetupSudoJob = {
    {
QT_MOC_LITERAL(0, 0, 12) // "SetupSudoJob"

    },
    "SetupSudoJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetupSudoJob[] = {

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

void SetupSudoJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SetupSudoJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::Job::staticMetaObject>(),
    qt_meta_stringdata_SetupSudoJob.data,
    qt_meta_data_SetupSudoJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetupSudoJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetupSudoJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetupSudoJob.stringdata0))
        return static_cast<void*>(this);
    return Calamares::Job::qt_metacast(_clname);
}

int SetupSudoJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::Job::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_SetupGroupsJob_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SetupGroupsJob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SetupGroupsJob_t qt_meta_stringdata_SetupGroupsJob = {
    {
QT_MOC_LITERAL(0, 0, 14) // "SetupGroupsJob"

    },
    "SetupGroupsJob"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SetupGroupsJob[] = {

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

void SetupGroupsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject SetupGroupsJob::staticMetaObject = { {
    QMetaObject::SuperData::link<Calamares::Job::staticMetaObject>(),
    qt_meta_stringdata_SetupGroupsJob.data,
    qt_meta_data_SetupGroupsJob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SetupGroupsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SetupGroupsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SetupGroupsJob.stringdata0))
        return static_cast<void*>(this);
    return Calamares::Job::qt_metacast(_clname);
}

int SetupGroupsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Calamares::Job::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
