/****************************************************************************
** Meta object code from reading C++ file 'transferinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "model/transferinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'transferinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TransferInfo_t {
    QByteArrayData data[11];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TransferInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TransferInfo_t qt_meta_stringdata_TransferInfo = {
    {
QT_MOC_LITERAL(0, 0, 12), // "TransferInfo"
QT_MOC_LITERAL(1, 13, 4), // "done"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 12), // "errorOcurred"
QT_MOC_LITERAL(4, 32, 6), // "errStr"
QT_MOC_LITERAL(5, 39, 15), // "progressChanged"
QT_MOC_LITERAL(6, 55, 8), // "progress"
QT_MOC_LITERAL(7, 64, 10), // "fileOpened"
QT_MOC_LITERAL(8, 75, 12), // "stateChanged"
QT_MOC_LITERAL(9, 88, 13), // "TransferState"
QT_MOC_LITERAL(10, 102, 5) // "state"

    },
    "TransferInfo\0done\0\0errorOcurred\0errStr\0"
    "progressChanged\0progress\0fileOpened\0"
    "stateChanged\0TransferState\0state"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TransferInfo[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,
       7,    0,   46,    2, 0x06 /* Public */,
       8,    1,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,

       0        // eod
};

void TransferInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TransferInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->done(); break;
        case 1: _t->errorOcurred((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->progressChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->fileOpened(); break;
        case 4: _t->stateChanged((*reinterpret_cast< TransferState(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TransferInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferInfo::done)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TransferInfo::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferInfo::errorOcurred)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TransferInfo::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferInfo::progressChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TransferInfo::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferInfo::fileOpened)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TransferInfo::*)(TransferState );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TransferInfo::stateChanged)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TransferInfo::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_TransferInfo.data,
    qt_meta_data_TransferInfo,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TransferInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TransferInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TransferInfo.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TransferInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void TransferInfo::done()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TransferInfo::errorOcurred(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void TransferInfo::progressChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TransferInfo::fileOpened()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TransferInfo::stateChanged(TransferState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
