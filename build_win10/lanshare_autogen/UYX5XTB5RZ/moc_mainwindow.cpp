/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../ui/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[44];
    char stringdata0[941];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 23), // "setMainWindowVisibility"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 7), // "visible"
QT_MOC_LITERAL(4, 44, 25), // "onShowMainWindowTriggered"
QT_MOC_LITERAL(5, 70, 26), // "onSendFilesActionTriggered"
QT_MOC_LITERAL(6, 97, 27), // "onSendFolderActionTriggered"
QT_MOC_LITERAL(7, 125, 25), // "onSettingsActionTriggered"
QT_MOC_LITERAL(8, 151, 22), // "onAboutActionTriggered"
QT_MOC_LITERAL(9, 174, 18), // "onNewReceiverAdded"
QT_MOC_LITERAL(10, 193, 9), // "Receiver*"
QT_MOC_LITERAL(11, 203, 3), // "rec"
QT_MOC_LITERAL(12, 207, 26), // "onSenderTableDoubleClicked"
QT_MOC_LITERAL(13, 234, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 246, 5), // "index"
QT_MOC_LITERAL(15, 252, 20), // "onSenderClearClicked"
QT_MOC_LITERAL(16, 273, 21), // "onSenderCancelClicked"
QT_MOC_LITERAL(17, 295, 20), // "onSenderPauseClicked"
QT_MOC_LITERAL(18, 316, 21), // "onSenderResumeClicked"
QT_MOC_LITERAL(19, 338, 28), // "onReceiverTableDoubleClicked"
QT_MOC_LITERAL(20, 367, 22), // "onReceiverClearClicked"
QT_MOC_LITERAL(21, 390, 23), // "onReceiverCancelClicked"
QT_MOC_LITERAL(22, 414, 22), // "onReceiverPauseClicked"
QT_MOC_LITERAL(23, 437, 23), // "onReceiverResumeClicked"
QT_MOC_LITERAL(24, 461, 29), // "onSenderTableSelectionChanged"
QT_MOC_LITERAL(25, 491, 14), // "QItemSelection"
QT_MOC_LITERAL(26, 506, 8), // "selected"
QT_MOC_LITERAL(27, 515, 10), // "deselected"
QT_MOC_LITERAL(28, 526, 31), // "onReceiverTableSelectionChanged"
QT_MOC_LITERAL(29, 558, 33), // "onSenderTableContextMenuReque..."
QT_MOC_LITERAL(30, 592, 3), // "pos"
QT_MOC_LITERAL(31, 596, 35), // "onReceiverTableContextMenuReq..."
QT_MOC_LITERAL(32, 632, 28), // "openSenderFileInCurrentIndex"
QT_MOC_LITERAL(33, 661, 30), // "openSenderFolderInCurrentIndex"
QT_MOC_LITERAL(34, 692, 30), // "removeSenderItemInCurrentIndex"
QT_MOC_LITERAL(35, 723, 30), // "openReceiverFileInCurrentIndex"
QT_MOC_LITERAL(36, 754, 32), // "openReceiverFolderInCurrentIndex"
QT_MOC_LITERAL(37, 787, 32), // "removeReceiverItemInCurrentIndex"
QT_MOC_LITERAL(38, 820, 32), // "deleteReceiverFileInCurrentIndex"
QT_MOC_LITERAL(39, 853, 28), // "onSelectedSenderStateChanged"
QT_MOC_LITERAL(40, 882, 13), // "TransferState"
QT_MOC_LITERAL(41, 896, 5), // "state"
QT_MOC_LITERAL(42, 902, 30), // "onSelectedReceiverStateChanged"
QT_MOC_LITERAL(43, 933, 7) // "quitApp"

    },
    "MainWindow\0setMainWindowVisibility\0\0"
    "visible\0onShowMainWindowTriggered\0"
    "onSendFilesActionTriggered\0"
    "onSendFolderActionTriggered\0"
    "onSettingsActionTriggered\0"
    "onAboutActionTriggered\0onNewReceiverAdded\0"
    "Receiver*\0rec\0onSenderTableDoubleClicked\0"
    "QModelIndex\0index\0onSenderClearClicked\0"
    "onSenderCancelClicked\0onSenderPauseClicked\0"
    "onSenderResumeClicked\0"
    "onReceiverTableDoubleClicked\0"
    "onReceiverClearClicked\0onReceiverCancelClicked\0"
    "onReceiverPauseClicked\0onReceiverResumeClicked\0"
    "onSenderTableSelectionChanged\0"
    "QItemSelection\0selected\0deselected\0"
    "onReceiverTableSelectionChanged\0"
    "onSenderTableContextMenuRequested\0pos\0"
    "onReceiverTableContextMenuRequested\0"
    "openSenderFileInCurrentIndex\0"
    "openSenderFolderInCurrentIndex\0"
    "removeSenderItemInCurrentIndex\0"
    "openReceiverFileInCurrentIndex\0"
    "openReceiverFolderInCurrentIndex\0"
    "removeReceiverItemInCurrentIndex\0"
    "deleteReceiverFileInCurrentIndex\0"
    "onSelectedSenderStateChanged\0TransferState\0"
    "state\0onSelectedReceiverStateChanged\0"
    "quitApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  174,    2, 0x0a /* Public */,
       1,    0,  177,    2, 0x2a /* Public | MethodCloned */,
       4,    0,  178,    2, 0x08 /* Private */,
       5,    0,  179,    2, 0x08 /* Private */,
       6,    0,  180,    2, 0x08 /* Private */,
       7,    0,  181,    2, 0x08 /* Private */,
       8,    0,  182,    2, 0x08 /* Private */,
       9,    1,  183,    2, 0x08 /* Private */,
      12,    1,  186,    2, 0x08 /* Private */,
      15,    0,  189,    2, 0x08 /* Private */,
      16,    0,  190,    2, 0x08 /* Private */,
      17,    0,  191,    2, 0x08 /* Private */,
      18,    0,  192,    2, 0x08 /* Private */,
      19,    1,  193,    2, 0x08 /* Private */,
      20,    0,  196,    2, 0x08 /* Private */,
      21,    0,  197,    2, 0x08 /* Private */,
      22,    0,  198,    2, 0x08 /* Private */,
      23,    0,  199,    2, 0x08 /* Private */,
      24,    2,  200,    2, 0x08 /* Private */,
      28,    2,  205,    2, 0x08 /* Private */,
      29,    1,  210,    2, 0x08 /* Private */,
      31,    1,  213,    2, 0x08 /* Private */,
      32,    0,  216,    2, 0x08 /* Private */,
      33,    0,  217,    2, 0x08 /* Private */,
      34,    0,  218,    2, 0x08 /* Private */,
      35,    0,  219,    2, 0x08 /* Private */,
      36,    0,  220,    2, 0x08 /* Private */,
      37,    0,  221,    2, 0x08 /* Private */,
      38,    0,  222,    2, 0x08 /* Private */,
      39,    1,  223,    2, 0x08 /* Private */,
      42,    1,  226,    2, 0x08 /* Private */,
      43,    0,  229,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,
    QMetaType::Void, QMetaType::QPoint,   30,
    QMetaType::Void, QMetaType::QPoint,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMainWindowVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->setMainWindowVisibility(); break;
        case 2: _t->onShowMainWindowTriggered(); break;
        case 3: _t->onSendFilesActionTriggered(); break;
        case 4: _t->onSendFolderActionTriggered(); break;
        case 5: _t->onSettingsActionTriggered(); break;
        case 6: _t->onAboutActionTriggered(); break;
        case 7: _t->onNewReceiverAdded((*reinterpret_cast< Receiver*(*)>(_a[1]))); break;
        case 8: _t->onSenderTableDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: _t->onSenderClearClicked(); break;
        case 10: _t->onSenderCancelClicked(); break;
        case 11: _t->onSenderPauseClicked(); break;
        case 12: _t->onSenderResumeClicked(); break;
        case 13: _t->onReceiverTableDoubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 14: _t->onReceiverClearClicked(); break;
        case 15: _t->onReceiverCancelClicked(); break;
        case 16: _t->onReceiverPauseClicked(); break;
        case 17: _t->onReceiverResumeClicked(); break;
        case 18: _t->onSenderTableSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 19: _t->onReceiverTableSelectionChanged((*reinterpret_cast< const QItemSelection(*)>(_a[1])),(*reinterpret_cast< const QItemSelection(*)>(_a[2]))); break;
        case 20: _t->onSenderTableContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 21: _t->onReceiverTableContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 22: _t->openSenderFileInCurrentIndex(); break;
        case 23: _t->openSenderFolderInCurrentIndex(); break;
        case 24: _t->removeSenderItemInCurrentIndex(); break;
        case 25: _t->openReceiverFileInCurrentIndex(); break;
        case 26: _t->openReceiverFolderInCurrentIndex(); break;
        case 27: _t->removeReceiverItemInCurrentIndex(); break;
        case 28: _t->deleteReceiverFileInCurrentIndex(); break;
        case 29: _t->onSelectedSenderStateChanged((*reinterpret_cast< TransferState(*)>(_a[1]))); break;
        case 30: _t->onSelectedReceiverStateChanged((*reinterpret_cast< TransferState(*)>(_a[1]))); break;
        case 31: _t->quitApp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QItemSelection >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
