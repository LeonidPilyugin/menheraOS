/****************************************************************************
** Meta object code from reading C++ file 'FixedAspectRatioLabel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../src/libcalamaresui/widgets/FixedAspectRatioLabel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FixedAspectRatioLabel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FixedAspectRatioLabel_t {
    QByteArrayData data[7];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FixedAspectRatioLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FixedAspectRatioLabel_t qt_meta_stringdata_FixedAspectRatioLabel = {
    {
QT_MOC_LITERAL(0, 0, 21), // "FixedAspectRatioLabel"
QT_MOC_LITERAL(1, 22, 9), // "setPixmap"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 6), // "pixmap"
QT_MOC_LITERAL(4, 40, 11), // "resizeEvent"
QT_MOC_LITERAL(5, 52, 13), // "QResizeEvent*"
QT_MOC_LITERAL(6, 66, 5) // "event"

    },
    "FixedAspectRatioLabel\0setPixmap\0\0"
    "pixmap\0resizeEvent\0QResizeEvent*\0event"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FixedAspectRatioLabel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x0a /* Public */,
       4,    1,   27,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

       0        // eod
};

void FixedAspectRatioLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FixedAspectRatioLabel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FixedAspectRatioLabel::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_FixedAspectRatioLabel.data,
    qt_meta_data_FixedAspectRatioLabel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FixedAspectRatioLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FixedAspectRatioLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FixedAspectRatioLabel.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int FixedAspectRatioLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
