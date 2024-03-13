/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../controller.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSControllerENDCLASS = QtMocHelpers::stringData(
    "Controller",
    "picFileReceive",
    "",
    "newConnect",
    "sendMessage",
    "readMessage",
    "quint16&",
    "QString&",
    "sendFile",
    "fileReceive",
    "picFileCount",
    "displayError",
    "QAbstractSocket::SocketError",
    "receivedata"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSControllerENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[12];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[9];
    char stringdata9[12];
    char stringdata10[13];
    char stringdata11[13];
    char stringdata12[29];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSControllerENDCLASS_t qt_meta_stringdata_CLASSControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "Controller"
        QT_MOC_LITERAL(11, 14),  // "picFileReceive"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 10),  // "newConnect"
        QT_MOC_LITERAL(38, 11),  // "sendMessage"
        QT_MOC_LITERAL(50, 11),  // "readMessage"
        QT_MOC_LITERAL(62, 8),  // "quint16&"
        QT_MOC_LITERAL(71, 8),  // "QString&"
        QT_MOC_LITERAL(80, 8),  // "sendFile"
        QT_MOC_LITERAL(89, 11),  // "fileReceive"
        QT_MOC_LITERAL(101, 12),  // "picFileCount"
        QT_MOC_LITERAL(114, 12),  // "displayError"
        QT_MOC_LITERAL(127, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(156, 11)   // "receivedata"
    },
    "Controller",
    "picFileReceive",
    "",
    "newConnect",
    "sendMessage",
    "readMessage",
    "quint16&",
    "QString&",
    "sendFile",
    "fileReceive",
    "picFileCount",
    "displayError",
    "QAbstractSocket::SocketError",
    "receivedata"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    2,   70,    2, 0x08,    3 /* Private */,
       5,    2,   75,    2, 0x08,    6 /* Private */,
       8,    1,   80,    2, 0x08,    9 /* Private */,
       9,    0,   83,    2, 0x08,   11 /* Private */,
      10,    0,   84,    2, 0x08,   12 /* Private */,
      11,    1,   85,    2, 0x08,   13 /* Private */,
      13,    0,   88,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UShort, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 7,    2,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Controller::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Controller, std::true_type>,
        // method 'picFileReceive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newConnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'readMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16 &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString &, std::false_type>,
        // method 'sendFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'fileReceive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'picFileCount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'receivedata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->picFileReceive(); break;
        case 1: _t->newConnect(); break;
        case 2: _t->sendMessage((*reinterpret_cast< std::add_pointer_t<quint16>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->readMessage((*reinterpret_cast< std::add_pointer_t<quint16&>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString&>>(_a[2]))); break;
        case 4: _t->sendFile((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->fileReceive(); break;
        case 6: _t->picFileCount(); break;
        case 7: _t->displayError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 8: _t->receivedata(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Controller::*)();
            if (_t _q_method = &Controller::picFileReceive; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void Controller::picFileReceive()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
