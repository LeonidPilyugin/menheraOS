/****************************************************************************
** Meta object code from reading C++ file 'Slideshow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamaresui/viewpages/Slideshow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Slideshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calamares__Slideshow_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__Slideshow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__Slideshow_t qt_meta_stringdata_Calamares__Slideshow = {
    {
QT_MOC_LITERAL(0, 0, 20) // "Calamares::Slideshow"

    },
    "Calamares::Slideshow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__Slideshow[] = {

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

void Calamares::Slideshow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Calamares::Slideshow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Calamares__Slideshow.data,
    qt_meta_data_Calamares__Slideshow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::Slideshow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::Slideshow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__Slideshow.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Calamares::Slideshow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_Calamares__SlideshowQML_t {
    QByteArrayData data[5];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__SlideshowQML_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__SlideshowQML_t qt_meta_stringdata_Calamares__SlideshowQML = {
    {
QT_MOC_LITERAL(0, 0, 23), // "Calamares::SlideshowQML"
QT_MOC_LITERAL(1, 24, 17), // "loadQmlV2Complete"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 9), // "loadQmlV2"
QT_MOC_LITERAL(4, 53, 14) // "startSlideShow"

    },
    "Calamares::SlideshowQML\0loadQmlV2Complete\0"
    "\0loadQmlV2\0startSlideShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__SlideshowQML[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Calamares::SlideshowQML::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SlideshowQML *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->loadQmlV2Complete(); break;
        case 1: _t->loadQmlV2(); break;
        case 2: _t->startSlideShow(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Calamares::SlideshowQML::staticMetaObject = { {
    QMetaObject::SuperData::link<Slideshow::staticMetaObject>(),
    qt_meta_stringdata_Calamares__SlideshowQML.data,
    qt_meta_data_Calamares__SlideshowQML,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::SlideshowQML::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::SlideshowQML::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__SlideshowQML.stringdata0))
        return static_cast<void*>(this);
    return Slideshow::qt_metacast(_clname);
}

int Calamares::SlideshowQML::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Slideshow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_Calamares__SlideshowPictures_t {
    QByteArrayData data[3];
    char stringdata0[35];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calamares__SlideshowPictures_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calamares__SlideshowPictures_t qt_meta_stringdata_Calamares__SlideshowPictures = {
    {
QT_MOC_LITERAL(0, 0, 28), // "Calamares::SlideshowPictures"
QT_MOC_LITERAL(1, 29, 4), // "next"
QT_MOC_LITERAL(2, 34, 0) // ""

    },
    "Calamares::SlideshowPictures\0next\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calamares__SlideshowPictures[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void Calamares::SlideshowPictures::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SlideshowPictures *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->next(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject Calamares::SlideshowPictures::staticMetaObject = { {
    QMetaObject::SuperData::link<Slideshow::staticMetaObject>(),
    qt_meta_stringdata_Calamares__SlideshowPictures.data,
    qt_meta_data_Calamares__SlideshowPictures,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Calamares::SlideshowPictures::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calamares::SlideshowPictures::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Calamares__SlideshowPictures.stringdata0))
        return static_cast<void*>(this);
    return Slideshow::qt_metacast(_clname);
}

int Calamares::SlideshowPictures::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Slideshow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
