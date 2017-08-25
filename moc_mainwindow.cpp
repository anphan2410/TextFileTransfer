/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 3), // "Out"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 9), // "QVariant*"
QT_MOC_LITERAL(4, 26, 2), // "In"
QT_MOC_LITERAL(5, 29, 7), // "enumVar"
QT_MOC_LITERAL(6, 37, 7), // "dataVar"
QT_MOC_LITERAL(7, 45, 40), // "on_pushButton_SendARandomMess..."
QT_MOC_LITERAL(8, 86, 43), // "on_pushButton_clearPendingFra..."
QT_MOC_LITERAL(9, 130, 29), // "on_pushButton_Connect_clicked"
QT_MOC_LITERAL(10, 160, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(11, 182, 37), // "on_pushButtonSendAPresenceReq..."
QT_MOC_LITERAL(12, 220, 33), // "on_pushButtonSendADataReq_cli..."
QT_MOC_LITERAL(13, 254, 23) // "on_pushButton_2_clicked"

    },
    "MainWindow\0Out\0\0QVariant*\0In\0enumVar\0"
    "dataVar\0on_pushButton_SendARandomMessage_clicked\0"
    "on_pushButton_clearPendingFrameList_clicked\0"
    "on_pushButton_Connect_clicked\0"
    "on_pushButton_clicked\0"
    "on_pushButtonSendAPresenceReq_clicked\0"
    "on_pushButtonSendADataReq_clicked\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   69,    2, 0x06 /* Public */,
       1,    1,   74,    2, 0x26 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags
       4,    2,   77,    2, 0x08 /* Private */,
       4,    1,   82,    2, 0x28 /* Private | MethodCloned */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    0,   91,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    5,    6,
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Out((*reinterpret_cast< QVariant*(*)>(_a[1])),(*reinterpret_cast< QVariant*(*)>(_a[2]))); break;
        case 1: _t->Out((*reinterpret_cast< QVariant*(*)>(_a[1]))); break;
        case 2: _t->In((*reinterpret_cast< QVariant*(*)>(_a[1])),(*reinterpret_cast< QVariant*(*)>(_a[2]))); break;
        case 3: _t->In((*reinterpret_cast< QVariant*(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_SendARandomMessage_clicked(); break;
        case 5: _t->on_pushButton_clearPendingFrameList_clicked(); break;
        case 6: _t->on_pushButton_Connect_clicked(); break;
        case 7: _t->on_pushButton_clicked(); break;
        case 8: _t->on_pushButtonSendAPresenceReq_clicked(); break;
        case 9: _t->on_pushButtonSendADataReq_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(QVariant * , QVariant * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::Out)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void MainWindow::Out(QVariant * _t1, QVariant * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
