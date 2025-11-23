/****************************************************************************
** Meta object code from reading C++ file 'queuekaraokewidget_addeditdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "queuekaraokewidget_addeditdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'queuekaraokewidget_addeditdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN32QueueKaraokeWidget_AddEditDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto QueueKaraokeWidget_AddEditDialog::qt_create_metaobjectdata<qt_meta_tag_ZN32QueueKaraokeWidget_AddEditDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "QueueKaraokeWidget_AddEditDialog",
        "showSearch",
        "",
        "buttonSearch",
        "buttonAddFile",
        "searchEntryDoubleClicked",
        "QModelIndex",
        "item",
        "accept"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'showSearch'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buttonSearch'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'buttonAddFile'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'searchEntryDoubleClicked'
        QtMocHelpers::SlotData<void(QModelIndex)>(5, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 6, 7 },
        }}),
        // Slot 'accept'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<QueueKaraokeWidget_AddEditDialog, qt_meta_tag_ZN32QueueKaraokeWidget_AddEditDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject QueueKaraokeWidget_AddEditDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32QueueKaraokeWidget_AddEditDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32QueueKaraokeWidget_AddEditDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN32QueueKaraokeWidget_AddEditDialogE_t>.metaTypes,
    nullptr
} };

void QueueKaraokeWidget_AddEditDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<QueueKaraokeWidget_AddEditDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showSearch(); break;
        case 1: _t->buttonSearch(); break;
        case 2: _t->buttonAddFile(); break;
        case 3: _t->searchEntryDoubleClicked((*reinterpret_cast<std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 4: _t->accept(); break;
        default: ;
        }
    }
}

const QMetaObject *QueueKaraokeWidget_AddEditDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QueueKaraokeWidget_AddEditDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN32QueueKaraokeWidget_AddEditDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int QueueKaraokeWidget_AddEditDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
