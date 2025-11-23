/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "settingsChanged",
        "",
        "menuOpenKaraoke",
        "menuSettings",
        "menuAbout",
        "menuPlay",
        "menuPause",
        "menuStop",
        "menuQueueNext",
        "menuQueuePrev",
        "menuQueueClear",
        "menuToggleFullscreen",
        "menuToggleWindowQueueKaraoke",
        "menuToggleWindowQueueMusic",
        "menuShowWelcomeWizard",
        "menuRegistration",
        "toggleFullscreen",
        "windowClosed",
        "widget",
        "karaokeDatabaseStartScan",
        "karaokeDatabaseAbortScan",
        "karaokeDatabaseIsScanning",
        "setScreensaverSuppression",
        "supress",
        "scanCollectionStarted",
        "scanCollectionProgress",
        "progressinfo",
        "scanCollectionFinished",
        "generateCrash",
        "audioInitializationFinished",
        "errorMsg",
        "registrationLinkClicked",
        "link"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'settingsChanged'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuOpenKaraoke'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuSettings'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuAbout'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuPlay'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuPause'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuStop'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuQueueNext'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuQueuePrev'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuQueueClear'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuToggleFullscreen'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuToggleWindowQueueKaraoke'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuToggleWindowQueueMusic'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuShowWelcomeWizard'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'menuRegistration'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'toggleFullscreen'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'windowClosed'
        QtMocHelpers::SlotData<void(QObject *)>(18, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::QObjectStar, 19 },
        }}),
        // Slot 'karaokeDatabaseStartScan'
        QtMocHelpers::SlotData<bool()>(20, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'karaokeDatabaseAbortScan'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'karaokeDatabaseIsScanning'
        QtMocHelpers::SlotData<bool() const>(22, 2, QMC::AccessPublic, QMetaType::Bool),
        // Slot 'setScreensaverSuppression'
        QtMocHelpers::SlotData<void(bool)>(23, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Bool, 24 },
        }}),
        // Slot 'scanCollectionStarted'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'scanCollectionProgress'
        QtMocHelpers::SlotData<void(QString)>(26, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 27 },
        }}),
        // Slot 'scanCollectionFinished'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'generateCrash'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'audioInitializationFinished'
        QtMocHelpers::SlotData<void(QString)>(30, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 31 },
        }}),
        // Slot 'registrationLinkClicked'
        QtMocHelpers::SlotData<void(QString)>(32, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 33 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->settingsChanged(); break;
        case 1: _t->menuOpenKaraoke(); break;
        case 2: _t->menuSettings(); break;
        case 3: _t->menuAbout(); break;
        case 4: _t->menuPlay(); break;
        case 5: _t->menuPause(); break;
        case 6: _t->menuStop(); break;
        case 7: _t->menuQueueNext(); break;
        case 8: _t->menuQueuePrev(); break;
        case 9: _t->menuQueueClear(); break;
        case 10: _t->menuToggleFullscreen(); break;
        case 11: _t->menuToggleWindowQueueKaraoke(); break;
        case 12: _t->menuToggleWindowQueueMusic(); break;
        case 13: _t->menuShowWelcomeWizard(); break;
        case 14: _t->menuRegistration(); break;
        case 15: _t->toggleFullscreen(); break;
        case 16: _t->windowClosed((*reinterpret_cast<std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 17: { bool _r = _t->karaokeDatabaseStartScan();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 18: _t->karaokeDatabaseAbortScan(); break;
        case 19: { bool _r = _t->karaokeDatabaseIsScanning();
            if (_a[0]) *reinterpret_cast<bool*>(_a[0]) = std::move(_r); }  break;
        case 20: _t->setScreensaverSuppression((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->scanCollectionStarted(); break;
        case 22: _t->scanCollectionProgress((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->scanCollectionFinished(); break;
        case 24: _t->generateCrash(); break;
        case 25: _t->audioInitializationFinished((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->registrationLinkClicked((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}
QT_WARNING_POP
