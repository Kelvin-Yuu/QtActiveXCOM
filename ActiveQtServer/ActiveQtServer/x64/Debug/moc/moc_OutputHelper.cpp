/****************************************************************************
** Meta object code from reading C++ file 'OutputHelper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../OutputHelper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OutputHelper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OutputHelper_t {
    QByteArrayData data[15];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OutputHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OutputHelper_t qt_meta_stringdata_OutputHelper = {
    {
QT_MOC_LITERAL(0, 0, 12), // "OutputHelper"
QT_MOC_LITERAL(1, 13, 7), // "ClassID"
QT_MOC_LITERAL(2, 21, 38), // "{cd36361d-a1ba-4b83-8ad4-d485..."
QT_MOC_LITERAL(3, 60, 11), // "InterfaceID"
QT_MOC_LITERAL(4, 72, 38), // "{FB298DC5-6AE0-4E86-92C8-DF06..."
QT_MOC_LITERAL(5, 111, 8), // "EventsID"
QT_MOC_LITERAL(6, 120, 38), // "{37FB2D8B-F98F-4352-8E69-251F..."
QT_MOC_LITERAL(7, 159, 14), // "RegisterObject"
QT_MOC_LITERAL(8, 174, 3), // "yes"
QT_MOC_LITERAL(9, 178, 12), // "sendToClient"
QT_MOC_LITERAL(10, 191, 0), // ""
QT_MOC_LITERAL(11, 192, 3), // "msg"
QT_MOC_LITERAL(12, 196, 7), // "isclose"
QT_MOC_LITERAL(13, 204, 20), // "ReceiveFromClient_SC"
QT_MOC_LITERAL(14, 225, 17) // "ReceiveFromClient"

    },
    "OutputHelper\0ClassID\0"
    "{cd36361d-a1ba-4b83-8ad4-d485ef796ad6}\0"
    "InterfaceID\0{FB298DC5-6AE0-4E86-92C8-DF06105797B4}\0"
    "EventsID\0{37FB2D8B-F98F-4352-8E69-251FBB87AA4F}\0"
    "RegisterObject\0yes\0sendToClient\0\0msg\0"
    "isclose\0ReceiveFromClient_SC\0"
    "ReceiveFromClient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutputHelper[] = {

 // content:
       8,       // revision
       0,       // classname
       4,   14, // classinfo
       4,   22, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,
       5,    6,
       7,    8,

 // signals: name, argc, parameters, tag, flags
       9,    1,   42,   10, 0x06 /* Public */,
      12,    0,   45,   10, 0x06 /* Public */,
      13,    1,   46,   10, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,   49,   10, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void OutputHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OutputHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendToClient((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->isclose(); break;
        case 2: _t->ReceiveFromClient_SC((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->ReceiveFromClient((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OutputHelper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutputHelper::sendToClient)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OutputHelper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutputHelper::isclose)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OutputHelper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&OutputHelper::ReceiveFromClient_SC)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OutputHelper::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_OutputHelper.data,
    qt_meta_data_OutputHelper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OutputHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OutputHelper.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QAxBindable"))
        return static_cast< QAxBindable*>(this);
    return QObject::qt_metacast(_clname);
}

int OutputHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OutputHelper::sendToClient(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OutputHelper::isclose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OutputHelper::ReceiveFromClient_SC(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
