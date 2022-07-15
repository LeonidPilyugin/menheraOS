/****************************************************************************
** Meta object code from reading C++ file 'Tests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/shellprocess/Tests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Tests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ShellProcessTests_t {
    QByteArrayData data[9];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ShellProcessTests_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ShellProcessTests_t qt_meta_stringdata_ShellProcessTests = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ShellProcessTests"
QT_MOC_LITERAL(1, 18, 12), // "initTestCase"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 27), // "testProcessListSampleConfig"
QT_MOC_LITERAL(4, 60, 23), // "testProcessListFromList"
QT_MOC_LITERAL(5, 84, 25), // "testProcessListFromString"
QT_MOC_LITERAL(6, 110, 21), // "testProcessFromObject"
QT_MOC_LITERAL(7, 132, 25), // "testProcessListFromObject"
QT_MOC_LITERAL(8, 158, 20) // "testRootSubstitution"

    },
    "ShellProcessTests\0initTestCase\0\0"
    "testProcessListSampleConfig\0"
    "testProcessListFromList\0"
    "testProcessListFromString\0"
    "testProcessFromObject\0testProcessListFromObject\0"
    "testRootSubstitution"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ShellProcessTests[] = {

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

void ShellProcessTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShellProcessTests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testProcessListSampleConfig(); break;
        case 2: _t->testProcessListFromList(); break;
        case 3: _t->testProcessListFromString(); break;
        case 4: _t->testProcessFromObject(); break;
        case 5: _t->testProcessListFromObject(); break;
        case 6: _t->testRootSubstitution(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject ShellProcessTests::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ShellProcessTests.data,
    qt_meta_data_ShellProcessTests,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ShellProcessTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ShellProcessTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ShellProcessTests.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ShellProcessTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
