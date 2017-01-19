/****************************************************************************
** Meta object code from reading C++ file 'confguiindex.h'
**
** Created: Fri Aug 23 22:12:41 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../confgui/confguiindex.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'confguiindex.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_confgui__ConfIndexW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      37,   20,   20,   20, 0x0a,
      53,   20,   20,   20, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfIndexW[] = {
    "confgui::ConfIndexW\0\0acceptChanges()\0"
    "rejectChanges()\0reloadPanels()\0"
};

const QMetaObject confgui::ConfIndexW::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_confgui__ConfIndexW,
      qt_meta_data_confgui__ConfIndexW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfIndexW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfIndexW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfIndexW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfIndexW))
        return static_cast<void*>(const_cast< ConfIndexW*>(this));
    return QDialog::qt_metacast(_clname);
}

int confgui::ConfIndexW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: acceptChanges(); break;
        case 1: rejectChanges(); break;
        case 2: reloadPanels(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfTopPanelW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfTopPanelW[] = {
    "confgui::ConfTopPanelW\0"
};

const QMetaObject confgui::ConfTopPanelW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_confgui__ConfTopPanelW,
      qt_meta_data_confgui__ConfTopPanelW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfTopPanelW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfTopPanelW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfTopPanelW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfTopPanelW))
        return static_cast<void*>(const_cast< ConfTopPanelW*>(this));
    return QWidget::qt_metacast(_clname);
}

int confgui::ConfTopPanelW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_confgui__ConfSubPanelW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x08,
      75,   23,   23,   23, 0x08,
      98,   23,   23,   23, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfSubPanelW[] = {
    "confgui::ConfSubPanelW\0\0,\0"
    "subDirChanged(QListWidgetItem*,QListWidgetItem*)\0"
    "subDirDeleted(QString)\0restoreEmpty()\0"
};

const QMetaObject confgui::ConfSubPanelW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_confgui__ConfSubPanelW,
      qt_meta_data_confgui__ConfSubPanelW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfSubPanelW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfSubPanelW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfSubPanelW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfSubPanelW))
        return static_cast<void*>(const_cast< ConfSubPanelW*>(this));
    return QWidget::qt_metacast(_clname);
}

int confgui::ConfSubPanelW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: subDirChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: subDirDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: restoreEmpty(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfBeaglePanelW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfBeaglePanelW[] = {
    "confgui::ConfBeaglePanelW\0"
};

const QMetaObject confgui::ConfBeaglePanelW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_confgui__ConfBeaglePanelW,
      qt_meta_data_confgui__ConfBeaglePanelW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfBeaglePanelW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfBeaglePanelW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfBeaglePanelW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfBeaglePanelW))
        return static_cast<void*>(const_cast< ConfBeaglePanelW*>(this));
    return QWidget::qt_metacast(_clname);
}

int confgui::ConfBeaglePanelW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_confgui__ConfSearchPanelW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfSearchPanelW[] = {
    "confgui::ConfSearchPanelW\0"
};

const QMetaObject confgui::ConfSearchPanelW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_confgui__ConfSearchPanelW,
      qt_meta_data_confgui__ConfSearchPanelW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfSearchPanelW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfSearchPanelW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfSearchPanelW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfSearchPanelW))
        return static_cast<void*>(const_cast< ConfSearchPanelW*>(this));
    return QWidget::qt_metacast(_clname);
}

int confgui::ConfSearchPanelW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
