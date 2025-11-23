/****************************************************************************
** Meta object code from reading C++ file 'eventor.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "eventor.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eventor.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN7EventorE_t {};
} // unnamed namespace

template <> constexpr inline auto Eventor::qt_create_metaobjectdata<qt_meta_tag_ZN7EventorE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Eventor",
        "karaokeStarted",
        "",
        "SongQueueItem",
        "song",
        "karaokePausedResumed",
        "pause",
        "karaokeVolumeChanged",
        "newvalue",
        "karaokeFinished",
        "karaokeStopped",
        "karaokeParametersChanged",
        "newBackgroundStarted",
        "file",
        "musicStarted",
        "musicPausedResumed",
        "musicVolumeChanged",
        "musicTagsChanged",
        "artist",
        "title",
        "musicFinished",
        "musicStopped",
        "queueChanged",
        "musicQueueChanged",
        "settingsChangedBackground",
        "settingsChangedMusic",
        "settingsChanged",
        "scanCollectionStarted",
        "scanCollectionProgress",
        "progressinfo",
        "scanCollectionFinished",
        "webserverUrlChanged",
        "newurl"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'karaokeStarted'
        QtMocHelpers::SignalData<void(SongQueueItem)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Signal 'karaokePausedResumed'
        QtMocHelpers::SignalData<void(bool)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'karaokeVolumeChanged'
        QtMocHelpers::SignalData<void(int)>(7, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'karaokeFinished'
        QtMocHelpers::SignalData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'karaokeStopped'
        QtMocHelpers::SignalData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'karaokeParametersChanged'
        QtMocHelpers::SignalData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'newBackgroundStarted'
        QtMocHelpers::SignalData<void(QString)>(12, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 13 },
        }}),
        // Signal 'musicStarted'
        QtMocHelpers::SignalData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'musicPausedResumed'
        QtMocHelpers::SignalData<void(bool)>(15, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 6 },
        }}),
        // Signal 'musicVolumeChanged'
        QtMocHelpers::SignalData<void(int)>(16, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Signal 'musicTagsChanged'
        QtMocHelpers::SignalData<void(QString, QString)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 18 }, { QMetaType::QString, 19 },
        }}),
        // Signal 'musicFinished'
        QtMocHelpers::SignalData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'musicStopped'
        QtMocHelpers::SignalData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'queueChanged'
        QtMocHelpers::SignalData<void()>(22, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'musicQueueChanged'
        QtMocHelpers::SignalData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsChangedBackground'
        QtMocHelpers::SignalData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsChangedMusic'
        QtMocHelpers::SignalData<void()>(25, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'settingsChanged'
        QtMocHelpers::SignalData<void()>(26, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scanCollectionStarted'
        QtMocHelpers::SignalData<void()>(27, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'scanCollectionProgress'
        QtMocHelpers::SignalData<void(QString)>(28, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 29 },
        }}),
        // Signal 'scanCollectionFinished'
        QtMocHelpers::SignalData<void()>(30, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'webserverUrlChanged'
        QtMocHelpers::SignalData<void(QString)>(31, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 32 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Eventor, qt_meta_tag_ZN7EventorE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Eventor::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7EventorE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7EventorE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN7EventorE_t>.metaTypes,
    nullptr
} };

void Eventor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Eventor *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->karaokeStarted((*reinterpret_cast<std::add_pointer_t<SongQueueItem>>(_a[1]))); break;
        case 1: _t->karaokePausedResumed((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->karaokeVolumeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->karaokeFinished(); break;
        case 4: _t->karaokeStopped(); break;
        case 5: _t->karaokeParametersChanged(); break;
        case 6: _t->newBackgroundStarted((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->musicStarted(); break;
        case 8: _t->musicPausedResumed((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->musicVolumeChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->musicTagsChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->musicFinished(); break;
        case 12: _t->musicStopped(); break;
        case 13: _t->queueChanged(); break;
        case 14: _t->musicQueueChanged(); break;
        case 15: _t->settingsChangedBackground(); break;
        case 16: _t->settingsChangedMusic(); break;
        case 17: _t->settingsChanged(); break;
        case 18: _t->scanCollectionStarted(); break;
        case 19: _t->scanCollectionProgress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->scanCollectionFinished(); break;
        case 21: _t->webserverUrlChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SongQueueItem >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(SongQueueItem )>(_a, &Eventor::karaokeStarted, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(bool )>(_a, &Eventor::karaokePausedResumed, 1))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(int )>(_a, &Eventor::karaokeVolumeChanged, 2))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::karaokeFinished, 3))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::karaokeStopped, 4))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::karaokeParametersChanged, 5))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(QString )>(_a, &Eventor::newBackgroundStarted, 6))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::musicStarted, 7))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(bool )>(_a, &Eventor::musicPausedResumed, 8))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(int )>(_a, &Eventor::musicVolumeChanged, 9))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(QString , QString )>(_a, &Eventor::musicTagsChanged, 10))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::musicFinished, 11))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::musicStopped, 12))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::queueChanged, 13))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::musicQueueChanged, 14))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::settingsChangedBackground, 15))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::settingsChangedMusic, 16))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::settingsChanged, 17))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::scanCollectionStarted, 18))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(QString )>(_a, &Eventor::scanCollectionProgress, 19))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)()>(_a, &Eventor::scanCollectionFinished, 20))
            return;
        if (QtMocHelpers::indexOfMethod<void (Eventor::*)(QString )>(_a, &Eventor::webserverUrlChanged, 21))
            return;
    }
}

const QMetaObject *Eventor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Eventor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN7EventorE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Eventor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Eventor::karaokeStarted(SongQueueItem _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}

// SIGNAL 1
void Eventor::karaokePausedResumed(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}

// SIGNAL 2
void Eventor::karaokeVolumeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 2, nullptr, _t1);
}

// SIGNAL 3
void Eventor::karaokeFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Eventor::karaokeStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Eventor::karaokeParametersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Eventor::newBackgroundStarted(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 6, nullptr, _t1);
}

// SIGNAL 7
void Eventor::musicStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Eventor::musicPausedResumed(bool _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 8, nullptr, _t1);
}

// SIGNAL 9
void Eventor::musicVolumeChanged(int _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 9, nullptr, _t1);
}

// SIGNAL 10
void Eventor::musicTagsChanged(QString _t1, QString _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 10, nullptr, _t1, _t2);
}

// SIGNAL 11
void Eventor::musicFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Eventor::musicStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Eventor::queueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void Eventor::musicQueueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void Eventor::settingsChangedBackground()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void Eventor::settingsChangedMusic()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void Eventor::settingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void Eventor::scanCollectionStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void Eventor::scanCollectionProgress(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 19, nullptr, _t1);
}

// SIGNAL 20
void Eventor::scanCollectionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void Eventor::webserverUrlChanged(QString _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 21, nullptr, _t1);
}
QT_WARNING_POP
