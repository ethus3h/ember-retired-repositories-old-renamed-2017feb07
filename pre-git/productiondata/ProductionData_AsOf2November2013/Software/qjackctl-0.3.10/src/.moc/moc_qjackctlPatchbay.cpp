/****************************************************************************
** Meta object code from reading C++ file 'qjackctlPatchbay.h'
**
** Created: Sat Aug 31 19:57:35 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlPatchbay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlPatchbay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlSocketList[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   19,   20,   19, 0x0a,
      41,   19,   20,   19, 0x0a,
      60,   19,   20,   19, 0x0a,
      77,   19,   20,   19, 0x0a,
      94,   19,   20,   19, 0x0a,
     116,   19,   20,   19, 0x0a,
     135,   19,   20,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlSocketList[] = {
    "qjackctlSocketList\0\0bool\0addSocketItem()\0"
    "removeSocketItem()\0editSocketItem()\0"
    "copySocketItem()\0exclusiveSocketItem()\0"
    "moveUpSocketItem()\0moveDownSocketItem()\0"
};

const QMetaObject qjackctlSocketList::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qjackctlSocketList,
      qt_meta_data_qjackctlSocketList, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlSocketList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlSocketList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlSocketList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSocketList))
        return static_cast<void*>(const_cast< qjackctlSocketList*>(this));
    return QObject::qt_metacast(_clname);
}

int qjackctlSocketList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { bool _r = addSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 1: { bool _r = removeSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = editSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = copySocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: { bool _r = exclusiveSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: { bool _r = moveUpSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 6: { bool _r = moveDownSocketItem();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
static const uint qt_meta_data_qjackctlSocketListView[] = {

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

static const char qt_meta_stringdata_qjackctlSocketListView[] = {
    "qjackctlSocketListView\0\0timeoutSlot()\0"
};

const QMetaObject qjackctlSocketListView::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_qjackctlSocketListView,
      qt_meta_data_qjackctlSocketListView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlSocketListView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlSocketListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlSocketListView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSocketListView))
        return static_cast<void*>(const_cast< qjackctlSocketListView*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int qjackctlSocketListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: timeoutSlot(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_qjackctlPatchworkView[] = {

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

static const char qt_meta_stringdata_qjackctlPatchworkView[] = {
    "qjackctlPatchworkView\0\0contentsChanged()\0"
};

const QMetaObject qjackctlPatchworkView::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qjackctlPatchworkView,
      qt_meta_data_qjackctlPatchworkView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlPatchworkView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlPatchworkView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlPatchworkView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPatchworkView))
        return static_cast<void*>(const_cast< qjackctlPatchworkView*>(this));
    return QWidget::qt_metacast(_clname);
}

int qjackctlPatchworkView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
static const uint qt_meta_data_qjackctlPatchbayView[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   40,   21,   21, 0x0a,
      96,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlPatchbayView[] = {
    "qjackctlPatchbayView\0\0contentsChanged()\0"
    "pos,pSocketList\0contextMenu(QPoint,qjackctlSocketList*)\0"
    "activateForwardMenu(QAction*)\0"
};

const QMetaObject qjackctlPatchbayView::staticMetaObject = {
    { &QSplitter::staticMetaObject, qt_meta_stringdata_qjackctlPatchbayView,
      qt_meta_data_qjackctlPatchbayView, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlPatchbayView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlPatchbayView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlPatchbayView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPatchbayView))
        return static_cast<void*>(const_cast< qjackctlPatchbayView*>(this));
    return QSplitter::qt_metacast(_clname);
}

int qjackctlPatchbayView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSplitter::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: contentsChanged(); break;
        case 1: contextMenu((*reinterpret_cast< const QPoint(*)>(_a[1])),(*reinterpret_cast< qjackctlSocketList*(*)>(_a[2]))); break;
        case 2: activateForwardMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void qjackctlPatchbayView::contentsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qjackctlPatchbay[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      33,   17,   28,   17, 0x0a,
      51,   17,   28,   17, 0x0a,
      72,   17,   28,   17, 0x0a,
      88,   17,   17,   17, 0x0a,
     100,   17,   17,   17, 0x0a,
     108,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlPatchbay[] = {
    "qjackctlPatchbay\0\0refresh()\0bool\0"
    "connectSelected()\0disconnectSelected()\0"
    "disconnectAll()\0expandAll()\0clear()\0"
    "connectionsSnapshot()\0"
};

const QMetaObject qjackctlPatchbay::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qjackctlPatchbay,
      qt_meta_data_qjackctlPatchbay, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlPatchbay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlPatchbay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlPatchbay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPatchbay))
        return static_cast<void*>(const_cast< qjackctlPatchbay*>(this));
    return QObject::qt_metacast(_clname);
}

int qjackctlPatchbay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: refresh(); break;
        case 1: { bool _r = connectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 2: { bool _r = disconnectSelected();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 3: { bool _r = disconnectAll();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 4: expandAll(); break;
        case 5: clear(); break;
        case 6: connectionsSnapshot(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
