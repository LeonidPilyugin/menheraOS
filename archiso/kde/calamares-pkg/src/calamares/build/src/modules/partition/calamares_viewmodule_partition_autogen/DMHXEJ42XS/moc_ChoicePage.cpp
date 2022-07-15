/****************************************************************************
** Meta object code from reading C++ file 'ChoicePage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../../src/modules/partition/gui/ChoicePage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChoicePage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChoicePage_t {
    QByteArrayData data[16];
    char stringdata0[274];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChoicePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChoicePage_t qt_meta_stringdata_ChoicePage = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ChoicePage"
QT_MOC_LITERAL(1, 11, 17), // "nextStatusChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "actionChosen"
QT_MOC_LITERAL(4, 43, 12), // "deviceChosen"
QT_MOC_LITERAL(5, 56, 28), // "onPartitionToReplaceSelected"
QT_MOC_LITERAL(6, 85, 11), // "QModelIndex"
QT_MOC_LITERAL(7, 97, 7), // "current"
QT_MOC_LITERAL(8, 105, 8), // "previous"
QT_MOC_LITERAL(9, 114, 26), // "doReplaceSelectedPartition"
QT_MOC_LITERAL(10, 141, 24), // "doAlongsideSetupSplitter"
QT_MOC_LITERAL(11, 166, 27), // "onEncryptWidgetStateChanged"
QT_MOC_LITERAL(12, 194, 26), // "onHomeCheckBoxStateChanged"
QT_MOC_LITERAL(13, 221, 15), // "onActionChanged"
QT_MOC_LITERAL(14, 237, 24), // "onEraseSwapChoiceChanged"
QT_MOC_LITERAL(15, 262, 11) // "retranslate"

    },
    "ChoicePage\0nextStatusChanged\0\0"
    "actionChosen\0deviceChosen\0"
    "onPartitionToReplaceSelected\0QModelIndex\0"
    "current\0previous\0doReplaceSelectedPartition\0"
    "doAlongsideSetupSplitter\0"
    "onEncryptWidgetStateChanged\0"
    "onHomeCheckBoxStateChanged\0onActionChanged\0"
    "onEraseSwapChoiceChanged\0retranslate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChoicePage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       3,    0,   72,    2, 0x06 /* Public */,
       4,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    2,   74,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    2,   82,    2, 0x08 /* Private */,
      11,    0,   87,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ChoicePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChoicePage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nextStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->actionChosen(); break;
        case 2: _t->deviceChosen(); break;
        case 3: _t->onPartitionToReplaceSelected((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->doReplaceSelectedPartition((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->doAlongsideSetupSplitter((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 6: _t->onEncryptWidgetStateChanged(); break;
        case 7: _t->onHomeCheckBoxStateChanged(); break;
        case 8: _t->onActionChanged(); break;
        case 9: _t->onEraseSwapChoiceChanged(); break;
        case 10: _t->retranslate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChoicePage::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChoicePage::nextStatusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChoicePage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChoicePage::actionChosen)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ChoicePage::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChoicePage::deviceChosen)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChoicePage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChoicePage.data,
    qt_meta_data_ChoicePage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChoicePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChoicePage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChoicePage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChoicePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ChoicePage::nextStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ChoicePage::actionChosen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChoicePage::deviceChosen()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
