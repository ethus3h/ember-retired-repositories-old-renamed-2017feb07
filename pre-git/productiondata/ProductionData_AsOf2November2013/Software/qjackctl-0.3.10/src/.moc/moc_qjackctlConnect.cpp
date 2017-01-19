/****************************************************************************
** Meta object code from reading C++ file 'qjackctlConnect.h'
**
** Created: Sat Aug 31 19:57:32 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlConnect.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlConnect.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlClientListView[] = {

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
      24,   23,   23,   23, 0x09,
      42,   23,   23,   23, 0x09,
      56,   23,   23,   23, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlClientListView[] = {
    "qjackctlClientListView\0\0startRenameSlot()\0"
    "renamedSlot()\0timeoutSlot()\0"
};

const QMetaObject qjackctlClientListView::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_qjackctlClientListView,
      qt_meta_data_qjackctlClientListView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlClientListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlClientListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlClientListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlClientListView))
        return static_cast<void*>(const_cast< qjackctlClientListView*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int qjackctlClientListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startRenameSlot(); break;
        case 1: renamedSlot(); break;
        case 2: timeoutSlot(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
static const uint qt_meta_data_qjackctlConnectorView[] = {

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
      23,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlConnectorView[] = {
    "qjackctlConnectorView\0\0contentsChanged()\0"
};

const QMetaObject qjackctlConnectorView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qjackctlConnectorView,
      qt_meta_data_qjackctlConnectorView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlConnectorView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlConnectorView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlConnectorView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlConnectorView))
        return static_cast<void*>(const_cast< qjackctlConnectorView*>(this));
    return QWidget::qt_metacast(_clname);
}

int qjackctlConnectorView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: contentsChanged(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_qjackctlConnectView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlConnectView[] = {
    "qjackctlConnectView\0\0contentsChanged()\0"
};

const QMetaObject qjackctlConnectView::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_qjackctlConnectView,
      qt_meta_data_qjackctlConnectView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlConnectView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlConnectView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlConnectView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlConnectView))
        return static_cast<void*>(const_cast< qjackctlConnectView*>(this));
    return QSplitter::qt_metacast(_clname);
}

int qjackctlConnectView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: contentsChanged(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void qjackctlConnectView::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qjackctlConnect[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      36,   34,   16,   16, 0x05,
      84,   34,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     135,   16,   16,   16, 0x0a,
     150,   16,  145,   16, 0x0a,
     168,   16,  145,   16, 0x0a,
     189,   16,  145,   16, 0x0a,
     205,   16,   16,   16, 0x0a,
     224,  217,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlConnect[] = {
    "qjackctlConnect\0\0connectChanged()\0,\0"
    "connecting(qjackctlPortItem*,qjackctlPortItem*)\0"
    "disconnecting(qjackctlPortItem*,qjackctlPortItem*)\0"
    "refresh()\0bool\0connectSelected()\0"
    "disconnectSelected()\0disconnectAll()\0"
    "expandAll()\0bClear\0updateContents(bool)\0"
};

const QMetaObject qjackctlConnect::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qjackctlConnect,
      qt_meta_data_qjackctlConnect, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlConnect::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlConnect::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlConnect::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlConnect))
        return static_cast<void*>(const_cast< qjackctlConnect*>(this));
    return QObject::qt_metacast(_clname);
}

int qjackctlConnect::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: connectChanged(); break;
        case 1: connecting((*reinterpret_cast< qjackctlPortItem*(*)>(_a[1])),(*reinterpret_cast< qjackctlPortItem*(*)>(_a[2]))); break;
        case 2: disconnecting((*reinterpret_cast< qjackctlPortItem*(*)>(_a[1])),(*reinterpret_cast< qjackctlPortItem*(*)>(_a[2]))); break;
        case 3: refresh(); break;
        case 4: { bool _r = connectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = disconnectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = disconnectAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 7: expandAll(); break;
        case 8: updateContents((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void qjackctlConnect::connectChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void qjackctlConnect::connecting(qjackctlPortItem * _t1, qjackctlPortItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void qjackctlConnect::disconnecting(qjackctlPortItem * _t1, qjackctlPortItem * _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
