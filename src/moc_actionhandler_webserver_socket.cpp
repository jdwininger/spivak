/****************************************************************************
** Meta object code from reading C++ file 'actionhandler_webserver_socket.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "actionhandler_webserver_socket.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actionhandler_webserver_socket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.0. It"
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
struct qt_meta_tag_ZN30ActionHandler_WebServer_SocketE_t {};
} // unnamed namespace

template <> constexpr inline auto ActionHandler_WebServer_Socket::qt_create_metaobjectdata<qt_meta_tag_ZN30ActionHandler_WebServer_SocketE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ActionHandler_WebServer_Socket",
        "queueAdd",
        "",
        "singer",
        "id",
        "queueRemove",
        "commandAction",
        "startKaraokeScan",
        "readyRead"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'queueAdd'
        QtMocHelpers::SignalData<void(QString, int)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'queueRemove'
        QtMocHelpers::SignalData<void(int)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'commandAction'
        QtMocHelpers::SignalData<void(int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 },
        }}),
        // Signal 'startKaraokeScan'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'readyRead'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ActionHandler_WebServer_Socket, qt_meta_tag_ZN30ActionHandler_WebServer_SocketE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ActionHandler_WebServer_Socket::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30ActionHandler_WebServer_SocketE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30ActionHandler_WebServer_SocketE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN30ActionHandler_WebServer_SocketE_t>.metaTypes,
    nullptr
} };

void ActionHandler_WebServer_Socket::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ActionHandler_WebServer_Socket *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->queueAdd((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 1: _t->queueRemove((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->commandAction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->startKaraokeScan(); break;
        case 4: _t->readyRead(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ActionHandler_WebServer_Socket::*)(QString , int )>(_a, &ActionHandler_WebServer_Socket::queueAdd, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler_WebServer_Socket::*)(int )>(_a, &ActionHandler_WebServer_Socket::queueRemove, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler_WebServer_Socket::*)(int )>(_a, &ActionHandler_WebServer_Socket::commandAction, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler_WebServer_Socket::*)()>(_a, &ActionHandler_WebServer_Socket::startKaraokeScan, 3))
            return;
    }
}

const QMetaObject *ActionHandler_WebServer_Socket::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionHandler_WebServer_Socket::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN30ActionHandler_WebServer_SocketE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActionHandler_WebServer_Socket::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ActionHandler_WebServer_Socket::queueAdd(QString _t1, int _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void ActionHandler_WebServer_Socket::queueRemove(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void ActionHandler_WebServer_Socket::commandAction(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void ActionHandler_WebServer_Socket::startKaraokeScan()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
