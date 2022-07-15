/****************************************************************************
** Meta object code from reading C++ file 'GeoIPTests.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamares/geoip/GeoIPTests.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GeoIPTests.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GeoIPTests_t {
    QByteArrayData data[13];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GeoIPTests_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GeoIPTests_t qt_meta_stringdata_GeoIPTests = {
    {
QT_MOC_LITERAL(0, 0, 10), // "GeoIPTests"
QT_MOC_LITERAL(1, 11, 12), // "initTestCase"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 9), // "testFixed"
QT_MOC_LITERAL(4, 35, 8), // "testJSON"
QT_MOC_LITERAL(5, 44, 11), // "testJSONalt"
QT_MOC_LITERAL(6, 56, 11), // "testJSONbad"
QT_MOC_LITERAL(7, 68, 7), // "testXML"
QT_MOC_LITERAL(8, 76, 8), // "testXML2"
QT_MOC_LITERAL(9, 85, 10), // "testXMLalt"
QT_MOC_LITERAL(10, 96, 10), // "testXMLbad"
QT_MOC_LITERAL(11, 107, 11), // "testSplitTZ"
QT_MOC_LITERAL(12, 119, 7) // "testGet"

    },
    "GeoIPTests\0initTestCase\0\0testFixed\0"
    "testJSON\0testJSONalt\0testJSONbad\0"
    "testXML\0testXML2\0testXMLalt\0testXMLbad\0"
    "testSplitTZ\0testGet"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GeoIPTests[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    0,   74,    2, 0x08 /* Private */,
       8,    0,   75,    2, 0x08 /* Private */,
       9,    0,   76,    2, 0x08 /* Private */,
      10,    0,   77,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GeoIPTests::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeoIPTests *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initTestCase(); break;
        case 1: _t->testFixed(); break;
        case 2: _t->testJSON(); break;
        case 3: _t->testJSONalt(); break;
        case 4: _t->testJSONbad(); break;
        case 5: _t->testXML(); break;
        case 6: _t->testXML2(); break;
        case 7: _t->testXMLalt(); break;
        case 8: _t->testXMLbad(); break;
        case 9: _t->testSplitTZ(); break;
        case 10: _t->testGet(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject GeoIPTests::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GeoIPTests.data,
    qt_meta_data_GeoIPTests,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GeoIPTests::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GeoIPTests::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GeoIPTests.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GeoIPTests::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
