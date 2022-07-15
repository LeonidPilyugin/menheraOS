/****************************************************************************
** Meta object code from reading C++ file 'PartitionJobTests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../../src/modules/partition/tests/PartitionJobTests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PartitionJobTests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PartitionJobTests_t {
    QByteArrayData data[9];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PartitionJobTests_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PartitionJobTests_t qt_meta_stringdata_PartitionJobTests = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PartitionJobTests"
QT_MOC_LITERAL(1, 18, 12), // "initTestCase"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "cleanupTestCase"
QT_MOC_LITERAL(4, 48, 18), // "testPartitionTable"
QT_MOC_LITERAL(5, 67, 19), // "testCreatePartition"
QT_MOC_LITERAL(6, 87, 27), // "testCreatePartitionExtended"
QT_MOC_LITERAL(7, 115, 24), // "testResizePartition_data"
QT_MOC_LITERAL(8, 140, 19) // "testResizePartition"

    },
    "PartitionJobTests\0initTestCase\0\0"
    "cleanupTestCase\0testPartitionTable\0"
    "testCreatePartition\0testCreatePartitionExtended\0"
    "testResizePartition_data\0testResizePartition"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PartitionJobTests[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PartitionJobTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PartitionJobTests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->cleanupTestCase(); break;
        case 2: _t->testPartitionTable(); break;
        case 3: _t->testCreatePartition(); break;
        case 4: _t->testCreatePartitionExtended(); break;
        case 5: _t->testResizePartition_data(); break;
        case 6: _t->testResizePartition(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject PartitionJobTests::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PartitionJobTests.data,
    qt_meta_data_PartitionJobTests,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PartitionJobTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PartitionJobTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PartitionJobTests.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PartitionJobTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
