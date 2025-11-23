/****************************************************************************
** Meta object code from reading C++ file 'songqueue.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "songqueue.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'songqueue.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN9SongQueueE_t {};
} // unnamed namespace

template <> constexpr inline auto SongQueue::qt_create_metaobjectdata<qt_meta_tag_ZN9SongQueueE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "SongQueue",
        "clear",
        "",
        "providerFinished",
        "id",
        "error",
        "providerProgress",
        "progress",
        "statusChanged",
        "playstarted",
        "addSong",
        "singer",
        "file",
        "SongQueueItem",
        "song",
        "SongQueueItemRetriever*",
        "retriever",
        "insertSong",
        "position",
        "songid",
        "replaceSong",
        "removeSong",
        "removeSongById",
        "moveSong",
        "from",
        "to"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'clear'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'providerFinished'
        QtMocHelpers::SlotData<void(int, const QString &)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::QString, 5 },
        }}),
        // Slot 'providerProgress'
        QtMocHelpers::SlotData<void(int, int)>(6, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::Int, 7 },
        }}),
        // Slot 'statusChanged'
        QtMocHelpers::SlotData<void(int, bool)>(8, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 4 }, { QMetaType::Bool, 9 },
        }}),
        // Slot 'addSong'
        QtMocHelpers::SlotData<void(const QString &, int)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { QMetaType::Int, 4 },
        }}),
        // Slot 'addSong'
        QtMocHelpers::SlotData<void(const QString &, const QString &)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QString, 11 }, { QMetaType::QString, 12 },
        }}),
        // Slot 'addSong'
        QtMocHelpers::SlotData<void(SongQueueItem)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 },
        }}),
        // Slot 'addSong'
        QtMocHelpers::SlotData<void(SongQueueItem, SongQueueItemRetriever *)>(10, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 13, 14 }, { 0x80000000 | 15, 16 },
        }}),
        // Slot 'insertSong'
        QtMocHelpers::SlotData<void(unsigned int, const QString &, int)>(17, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 18 }, { QMetaType::QString, 11 }, { QMetaType::Int, 19 },
        }}),
        // Slot 'replaceSong'
        QtMocHelpers::SlotData<void(unsigned int, int)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 18 }, { QMetaType::Int, 19 },
        }}),
        // Slot 'replaceSong'
        QtMocHelpers::SlotData<void(unsigned int, const SongQueueItem &)>(20, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 18 }, { 0x80000000 | 13, 14 },
        }}),
        // Slot 'removeSong'
        QtMocHelpers::SlotData<void(unsigned int)>(21, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 18 },
        }}),
        // Slot 'removeSongById'
        QtMocHelpers::SlotData<bool(int)>(22, 2, QMC::AccessPublic, QMetaType::Bool, {{
            { QMetaType::Int, 4 },
        }}),
        // Slot 'moveSong'
        QtMocHelpers::SlotData<void(unsigned int, unsigned int)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::UInt, 24 }, { QMetaType::UInt, 25 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<SongQueue, qt_meta_tag_ZN9SongQueueE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject SongQueue::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SongQueueE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SongQueueE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN9SongQueueE_t>.metaTypes,
    nullptr
} };

void SongQueue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<SongQueue *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->clear(); break;
        case 1: _t->providerFinished((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->providerProgress((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->statusChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->addSong((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->addSong((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->addSong((*reinterpret_cast<std::add_pointer_t<SongQueueItem>>(_a[1]))); break;
        case 7: _t->addSong((*reinterpret_cast<std::add_pointer_t<SongQueueItem>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SongQueueItemRetriever*>>(_a[2]))); break;
        case 8: _t->insertSong((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[3]))); break;
        case 9: _t->replaceSong((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<int>>(_a[2]))); break;
        case 10: _t->replaceSong((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<SongQueueItem>>(_a[2]))); break;
        case 11: _t->removeSong((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1]))); break;
        case 12: { bool _r = _t->removeSongById((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->moveSong((*reinterpret_cast<std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<uint>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SongQueueItem >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SongQueueItem >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< SongQueueItem >(); break;
            }
            break;
        }
    }
}

const QMetaObject *SongQueue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SongQueue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN9SongQueueE_t>.strings))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SongQueue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
