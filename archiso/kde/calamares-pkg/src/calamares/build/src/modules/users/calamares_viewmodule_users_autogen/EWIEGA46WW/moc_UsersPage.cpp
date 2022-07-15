/****************************************************************************
** Meta object code from reading C++ file 'UsersPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/users/UsersPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UsersPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UsersPage_t {
    QByteArrayData data[8];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UsersPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UsersPage_t qt_meta_stringdata_UsersPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "UsersPage"
QT_MOC_LITERAL(1, 10, 20), // "onFullNameTextEdited"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "reportLoginNameStatus"
QT_MOC_LITERAL(4, 54, 20), // "reportHostNameStatus"
QT_MOC_LITERAL(5, 75, 26), // "onReuseUserPasswordChanged"
QT_MOC_LITERAL(6, 102, 24), // "reportUserPasswordStatus"
QT_MOC_LITERAL(7, 127, 24) // "reportRootPasswordStatus"

    },
    "UsersPage\0onFullNameTextEdited\0\0"
    "reportLoginNameStatus\0reportHostNameStatus\0"
    "onReuseUserPasswordChanged\0"
    "reportUserPasswordStatus\0"
    "reportRootPasswordStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UsersPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x09 /* Protected */,
       3,    1,   47,    2, 0x09 /* Protected */,
       4,    1,   50,    2, 0x09 /* Protected */,
       5,    1,   53,    2, 0x09 /* Protected */,
       6,    2,   56,    2, 0x09 /* Protected */,
       7,    2,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,

       0        // eod
};

void UsersPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UsersPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onFullNameTextEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->reportLoginNameStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->reportHostNameStatus((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->onReuseUserPasswordChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->reportUserPasswordStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->reportRootPasswordStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UsersPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_UsersPage.data,
    qt_meta_data_UsersPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UsersPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UsersPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UsersPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int UsersPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
