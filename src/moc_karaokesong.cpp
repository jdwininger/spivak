/****************************************************************************
** Meta object code from reading C++ file 'karaokesong.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "karaokesong.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'karaokesong.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11KaraokeSongE_t {};
} // unnamed namespace

template <> constexpr inline auto KaraokeSong::qt_create_metaobjectdata<qt_meta_tag_ZN11KaraokeSongE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "KaraokeSong",
        "audioLoaded",
        "",
        "audioError",
        "start",
        "pause",
        "seekForward",
        "seekBackward",
        "seekTo",
        "timing",
        "stop",
        "lyricEarlier",
        "lyricLater",
        "ratingDown",
        "ratingUp",
        "volumeDown",
        "volumeUp",
        "volumeSet",
        "newvalue",
        "durationChanged",
        "pitchLower",
        "pitchHigher",
        "pitchSet",
        "tempoSlower",
        "tempoFaster",
        "tempoSet",
        "songLoaded"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'audioLoaded'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Signal 'audioError'
        QtMocHelpers::SignalData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'start'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pause'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'seekForward'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'seekBackward'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'seekTo'
        QtMocHelpers::SlotData<void(qint64)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::LongLong, 9 },
        }}),
        // Slot 'stop'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'lyricEarlier'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'lyricLater'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ratingDown'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'ratingUp'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'volumeDown'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'volumeUp'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'volumeSet'
        QtMocHelpers::SlotData<void(int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'durationChanged'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pitchLower'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pitchHigher'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'pitchSet'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'tempoSlower'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'tempoFaster'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'tempoSet'
        QtMocHelpers::SlotData<void(int)>(25, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 18 },
        }}),
        // Slot 'songLoaded'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<KaraokeSong, qt_meta_tag_ZN11KaraokeSongE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject KaraokeSong::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11KaraokeSongE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11KaraokeSongE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11KaraokeSongE_t>.metaTypes,
    nullptr
} };

void KaraokeSong::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<KaraokeSong *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->audioLoaded(); break;
        case 1: _t->audioError(); break;
        case 2: _t->start(); break;
        case 3: _t->pause(); break;
        case 4: _t->seekForward(); break;
        case 5: _t->seekBackward(); break;
        case 6: _t->seekTo((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1]))); break;
        case 7: _t->stop(); break;
        case 8: _t->lyricEarlier(); break;
        case 9: _t->lyricLater(); break;
        case 10: _t->ratingDown(); break;
        case 11: _t->ratingUp(); break;
        case 12: _t->volumeDown(); break;
        case 13: _t->volumeUp(); break;
        case 14: _t->volumeSet((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->durationChanged(); break;
        case 16: _t->pitchLower(); break;
        case 17: _t->pitchHigher(); break;
        case 18: _t->pitchSet((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->tempoSlower(); break;
        case 20: _t->tempoFaster(); break;
        case 21: _t->tempoSet((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->songLoaded(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (KaraokeSong::*)()>(_a, &KaraokeSong::audioLoaded, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (KaraokeSong::*)()>(_a, &KaraokeSong::audioError, 1))
            return;
    }
}

const QMetaObject *KaraokeSong::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KaraokeSong::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11KaraokeSongE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KaraokeSong::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 23;
    }
    return _id;
}

// SIGNAL 0
void KaraokeSong::audioLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void KaraokeSong::audioError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
