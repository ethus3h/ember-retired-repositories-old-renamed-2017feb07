/****************************************************************************
** Meta object code from reading C++ file 'confgui.h'
**
** Created: Fri Aug 23 22:12:39 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../confgui/confgui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'confgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_confgui__ConfParamW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      47,   38,   20,   20, 0x09,
      65,   38,   20,   20, 0x09,
      79,   38,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamW[] = {
    "confgui::ConfParamW\0\0setEnabled(bool)\0"
    "newvalue\0setValue(QString)\0setValue(int)\0"
    "setValue(bool)\0"
};

const QMetaObject confgui::ConfParamW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_confgui__ConfParamW,
      qt_meta_data_confgui__ConfParamW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamW))
        return static_cast<void*>(const_cast< ConfParamW*>(this));
    return QWidget::qt_metacast(_clname);
}

int confgui::ConfParamW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: setValue((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setValue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfParamIntW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamIntW[] = {
    "confgui::ConfParamIntW\0\0i\0setEnabled(bool)\0"
};

const QMetaObject confgui::ConfParamIntW::staticMetaObject = {
    { &ConfParamW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamIntW,
      qt_meta_data_confgui__ConfParamIntW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamIntW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamIntW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamIntW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamIntW))
        return static_cast<void*>(const_cast< ConfParamIntW*>(this));
    return ConfParamW::qt_metacast(_clname);
}

int confgui::ConfParamIntW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfParamStrW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      26,   24,   23,   23, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamStrW[] = {
    "confgui::ConfParamStrW\0\0i\0setEnabled(bool)\0"
};

const QMetaObject confgui::ConfParamStrW::staticMetaObject = {
    { &ConfParamW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamStrW,
      qt_meta_data_confgui__ConfParamStrW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamStrW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamStrW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamStrW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamStrW))
        return static_cast<void*>(const_cast< ConfParamStrW*>(this));
    return ConfParamW::qt_metacast(_clname);
}

int confgui::ConfParamStrW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfParamCStrW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   25,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamCStrW[] = {
    "confgui::ConfParamCStrW\0\0i\0setEnabled(bool)\0"
};

const QMetaObject confgui::ConfParamCStrW::staticMetaObject = {
    { &ConfParamW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamCStrW,
      qt_meta_data_confgui__ConfParamCStrW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamCStrW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamCStrW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamCStrW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamCStrW))
        return static_cast<void*>(const_cast< ConfParamCStrW*>(this));
    return ConfParamW::qt_metacast(_clname);
}

int confgui::ConfParamCStrW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfParamBoolW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   25,   24,   24, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamBoolW[] = {
    "confgui::ConfParamBoolW\0\0i\0setEnabled(bool)\0"
};

const QMetaObject confgui::ConfParamBoolW::staticMetaObject = {
    { &ConfParamW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamBoolW,
      qt_meta_data_confgui__ConfParamBoolW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamBoolW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamBoolW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamBoolW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamBoolW))
        return static_cast<void*>(const_cast< ConfParamBoolW*>(this));
    return ConfParamW::qt_metacast(_clname);
}

int confgui::ConfParamBoolW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfParamFNW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x09,
      45,   43,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamFNW[] = {
    "confgui::ConfParamFNW\0\0showBrowserDialog()\0"
    "i\0setEnabled(bool)\0"
};

const QMetaObject confgui::ConfParamFNW::staticMetaObject = {
    { &ConfParamW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamFNW,
      qt_meta_data_confgui__ConfParamFNW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamFNW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamFNW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamFNW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamFNW))
        return static_cast<void*>(const_cast< ConfParamFNW*>(this));
    return ConfParamW::qt_metacast(_clname);
}

int confgui::ConfParamFNW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showBrowserDialog(); break;
        case 1: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfParamSLW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   45,   22,   22, 0x0a,
      64,   22,   22,   22, 0x09,
      82,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamSLW[] = {
    "confgui::ConfParamSLW\0\0entryDeleted(QString)\0"
    "i\0setEnabled(bool)\0showInputDialog()\0"
    "deleteSelected()\0"
};

const QMetaObject confgui::ConfParamSLW::staticMetaObject = {
    { &ConfParamW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamSLW,
      qt_meta_data_confgui__ConfParamSLW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamSLW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamSLW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamSLW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamSLW))
        return static_cast<void*>(const_cast< ConfParamSLW*>(this));
    return ConfParamW::qt_metacast(_clname);
}

int confgui::ConfParamSLW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: entryDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: setEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: showInputDialog(); break;
        case 3: deleteSelected(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void confgui::ConfParamSLW::entryDeleted(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_confgui__ConfParamDNLW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamDNLW[] = {
    "confgui::ConfParamDNLW\0\0showInputDialog()\0"
};

const QMetaObject confgui::ConfParamDNLW::staticMetaObject = {
    { &ConfParamSLW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamDNLW,
      qt_meta_data_confgui__ConfParamDNLW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamDNLW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamDNLW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamDNLW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamDNLW))
        return static_cast<void*>(const_cast< ConfParamDNLW*>(this));
    return ConfParamSLW::qt_metacast(_clname);
}

int confgui::ConfParamDNLW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamSLW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showInputDialog(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_confgui__ConfParamCSLW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_confgui__ConfParamCSLW[] = {
    "confgui::ConfParamCSLW\0\0showInputDialog()\0"
};

const QMetaObject confgui::ConfParamCSLW::staticMetaObject = {
    { &ConfParamSLW::staticMetaObject, qt_meta_stringdata_confgui__ConfParamCSLW,
      qt_meta_data_confgui__ConfParamCSLW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &confgui::ConfParamCSLW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *confgui::ConfParamCSLW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *confgui::ConfParamCSLW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_confgui__ConfParamCSLW))
        return static_cast<void*>(const_cast< ConfParamCSLW*>(this));
    return ConfParamSLW::qt_metacast(_clname);
}

int confgui::ConfParamCSLW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfParamSLW::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showInputDialog(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
