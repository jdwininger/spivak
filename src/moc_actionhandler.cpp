/****************************************************************************
** Meta object code from reading C++ file 'actionhandler.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "actionhandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'actionhandler.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN13ActionHandlerE_t {};
} // unnamed namespace

template <> constexpr inline auto ActionHandler::qt_create_metaobjectdata<qt_meta_tag_ZN13ActionHandlerE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ActionHandler",
        "actionKaraokePlayerStart",
        "",
        "actionKaraokePlayerStop",
        "actionKaraokePlayerPauseResume",
        "actionKaraokePlayerForward",
        "actionKaraokePlayerBackward",
        "actionKaraokePlayerLyricsEarlier",
        "actionKaraokePlayerLyricsLater",
        "actionKaraokePlayerRatingIncrease",
        "actionKaraokePlayerRatingDecrease",
        "actionKaraokePlayerPitchIncrease",
        "actionKaraokePlayerPitchDecrease",
        "actionKaraokePlayerTempoIncrease",
        "actionKaraokePlayerTempoDecrease",
        "actionKaraokePlayerChangePitch",
        "actionKaraokePlayerChangeTempo",
        "actionKaraokePlayerChangeVoiceRemoval",
        "actionPlayerVolumeUp",
        "actionPlayerVolumeDown",
        "actionPlayerVolumeSet",
        "actionMusicPlayerPlay",
        "actionMusicPlayerPauseResume",
        "actionMusicPlayerStop",
        "actionMusicQueueNext",
        "actionMusicQueuePrev",
        "actionQuit",
        "actionQueueClear",
        "enqueueSong",
        "singer",
        "id",
        "path",
        "dequeueSong",
        "error",
        "message",
        "warning",
        "cmdAction",
        "event",
        "keyEvent",
        "QKeyEvent*",
        "settingsChanged",
        "nextQueueAction",
        "prevQueueAction",
        "playerStartAction",
        "playerStopAction",
        "playerPauseAction",
        "nextQueueItemMusic",
        "nextQueueItemKaraoke"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'actionKaraokePlayerStart'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerStop'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerPauseResume'
        QtMocHelpers::SignalData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerForward'
        QtMocHelpers::SignalData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerBackward'
        QtMocHelpers::SignalData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerLyricsEarlier'
        QtMocHelpers::SignalData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerLyricsLater'
        QtMocHelpers::SignalData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerRatingIncrease'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerRatingDecrease'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerPitchIncrease'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerPitchDecrease'
        QtMocHelpers::SignalData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerTempoIncrease'
        QtMocHelpers::SignalData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerTempoDecrease'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionKaraokePlayerChangePitch'
        QtMocHelpers::SignalData<void(int)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'actionKaraokePlayerChangeTempo'
        QtMocHelpers::SignalData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'actionKaraokePlayerChangeVoiceRemoval'
        QtMocHelpers::SignalData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'actionPlayerVolumeUp'
        QtMocHelpers::SignalData<void()>(18, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionPlayerVolumeDown'
        QtMocHelpers::SignalData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionPlayerVolumeSet'
        QtMocHelpers::SignalData<void(int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 2 },
        }}),
        // Signal 'actionMusicPlayerPlay'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionMusicPlayerPauseResume'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionMusicPlayerStop'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionMusicQueueNext'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionMusicQueuePrev'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionQuit'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'actionQueueClear'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'enqueueSong'
        QtMocHelpers::SlotData<void(QString, int)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 }, { QMetaType::Int, 30 },
        }}),
        // Slot 'enqueueSong'
        QtMocHelpers::SlotData<void(QString, QString)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 }, { QMetaType::QString, 31 },
        }}),
        // Slot 'dequeueSong'
        QtMocHelpers::SlotData<void(int)>(32, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 30 },
        }}),
        // Slot 'error'
        QtMocHelpers::SlotData<void(QString)>(33, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 34 },
        }}),
        // Slot 'warning'
        QtMocHelpers::SlotData<void(QString)>(35, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 34 },
        }}),
        // Slot 'cmdAction'
        QtMocHelpers::SlotData<bool(int)>(36, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 37 },
        }}),
        // Slot 'keyEvent'
        QtMocHelpers::SlotData<void(QKeyEvent *)>(38, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 39, 37 },
        }}),
        // Slot 'settingsChanged'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'nextQueueAction'
        QtMocHelpers::SlotData<void()>(41, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'prevQueueAction'
        QtMocHelpers::SlotData<void()>(42, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playerStartAction'
        QtMocHelpers::SlotData<void()>(43, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playerStopAction'
        QtMocHelpers::SlotData<void()>(44, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'playerPauseAction'
        QtMocHelpers::SlotData<void()>(45, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextQueueItemMusic'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'nextQueueItemKaraoke'
        QtMocHelpers::SlotData<void()>(47, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ActionHandler, qt_meta_tag_ZN13ActionHandlerE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ActionHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ActionHandlerE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ActionHandlerE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN13ActionHandlerE_t>.metaTypes,
    nullptr
} };

void ActionHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ActionHandler *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->actionKaraokePlayerStart(); break;
        case 1: _t->actionKaraokePlayerStop(); break;
        case 2: _t->actionKaraokePlayerPauseResume(); break;
        case 3: _t->actionKaraokePlayerForward(); break;
        case 4: _t->actionKaraokePlayerBackward(); break;
        case 5: _t->actionKaraokePlayerLyricsEarlier(); break;
        case 6: _t->actionKaraokePlayerLyricsLater(); break;
        case 7: _t->actionKaraokePlayerRatingIncrease(); break;
        case 8: _t->actionKaraokePlayerRatingDecrease(); break;
        case 9: _t->actionKaraokePlayerPitchIncrease(); break;
        case 10: _t->actionKaraokePlayerPitchDecrease(); break;
        case 11: _t->actionKaraokePlayerTempoIncrease(); break;
        case 12: _t->actionKaraokePlayerTempoDecrease(); break;
        case 13: _t->actionKaraokePlayerChangePitch((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->actionKaraokePlayerChangeTempo((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->actionKaraokePlayerChangeVoiceRemoval((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->actionPlayerVolumeUp(); break;
        case 17: _t->actionPlayerVolumeDown(); break;
        case 18: _t->actionPlayerVolumeSet((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->actionMusicPlayerPlay(); break;
        case 20: _t->actionMusicPlayerPauseResume(); break;
        case 21: _t->actionMusicPlayerStop(); break;
        case 22: _t->actionMusicQueueNext(); break;
        case 23: _t->actionMusicQueuePrev(); break;
        case 24: _t->actionQuit(); break;
        case 25: _t->actionQueueClear(); break;
        case 26: _t->enqueueSong((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 27: _t->enqueueSong((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 28: _t->dequeueSong((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 29: _t->error((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 30: _t->warning((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 31: { bool _r = _t->cmdAction((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 32: _t->keyEvent((*reinterpret_cast<std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 33: _t->settingsChanged(); break;
        case 34: _t->nextQueueAction(); break;
        case 35: _t->prevQueueAction(); break;
        case 36: _t->playerStartAction(); break;
        case 37: _t->playerStopAction(); break;
        case 38: _t->playerPauseAction(); break;
        case 39: _t->nextQueueItemMusic(); break;
        case 40: _t->nextQueueItemKaraoke(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerStart, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerStop, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerPauseResume, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerForward, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerBackward, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerLyricsEarlier, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerLyricsLater, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerRatingIncrease, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerRatingDecrease, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerPitchIncrease, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerPitchDecrease, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerTempoIncrease, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionKaraokePlayerTempoDecrease, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)(int )>(_a, &ActionHandler::actionKaraokePlayerChangePitch, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)(int )>(_a, &ActionHandler::actionKaraokePlayerChangeTempo, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)(int )>(_a, &ActionHandler::actionKaraokePlayerChangeVoiceRemoval, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionPlayerVolumeUp, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionPlayerVolumeDown, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)(int )>(_a, &ActionHandler::actionPlayerVolumeSet, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionMusicPlayerPlay, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionMusicPlayerPauseResume, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionMusicPlayerStop, 21))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionMusicQueueNext, 22))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionMusicQueuePrev, 23))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionQuit, 24))
            return;
        if (QtMocHelpers::indexOfMethod<void (ActionHandler::*)()>(_a, &ActionHandler::actionQueueClear, 25))
            return;
    }
}

const QMetaObject *ActionHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ActionHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN13ActionHandlerE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ActionHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 41)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 41;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 41)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 41;
    }
    return _id;
}

// SIGNAL 0
void ActionHandler::actionKaraokePlayerStart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ActionHandler::actionKaraokePlayerStop()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ActionHandler::actionKaraokePlayerPauseResume()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ActionHandler::actionKaraokePlayerForward()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ActionHandler::actionKaraokePlayerBackward()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ActionHandler::actionKaraokePlayerLyricsEarlier()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void ActionHandler::actionKaraokePlayerLyricsLater()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void ActionHandler::actionKaraokePlayerRatingIncrease()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void ActionHandler::actionKaraokePlayerRatingDecrease()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void ActionHandler::actionKaraokePlayerPitchIncrease()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void ActionHandler::actionKaraokePlayerPitchDecrease()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void ActionHandler::actionKaraokePlayerTempoIncrease()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void ActionHandler::actionKaraokePlayerTempoDecrease()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void ActionHandler::actionKaraokePlayerChangePitch(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 13, nullptr, _t1);
}

// SIGNAL 14
void ActionHandler::actionKaraokePlayerChangeTempo(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 14, nullptr, _t1);
}

// SIGNAL 15
void ActionHandler::actionKaraokePlayerChangeVoiceRemoval(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 15, nullptr, _t1);
}

// SIGNAL 16
void ActionHandler::actionPlayerVolumeUp()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void ActionHandler::actionPlayerVolumeDown()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void ActionHandler::actionPlayerVolumeSet(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 18, nullptr, _t1);
}

// SIGNAL 19
void ActionHandler::actionMusicPlayerPlay()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void ActionHandler::actionMusicPlayerPauseResume()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void ActionHandler::actionMusicPlayerStop()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void ActionHandler::actionMusicQueueNext()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void ActionHandler::actionMusicQueuePrev()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void ActionHandler::actionQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void ActionHandler::actionQueueClear()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}
QT_WARNING_POP
