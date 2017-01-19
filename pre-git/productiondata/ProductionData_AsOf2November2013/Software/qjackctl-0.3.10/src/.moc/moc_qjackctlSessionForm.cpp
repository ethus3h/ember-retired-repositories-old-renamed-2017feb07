/****************************************************************************
** Meta object code from reading C++ file 'qjackctlSessionForm.h'
**
** Created: Sat Aug 31 19:58:01 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlSessionForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlSessionForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlSessionInfraClientItemEditor[] = {

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
      38,   37,   37,   37, 0x05,

 // slots: signature, parameters, type, tag, flags
      53,   37,   37,   37, 0x09,
      66,   37,   37,   37, 0x09,
      78,   37,   37,   37, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlSessionInfraClientItemEditor[] = {
    "qjackctlSessionInfraClientItemEditor\0"
    "\0finishSignal()\0browseSlot()\0resetSlot()\0"
    "finishSlot()\0"
};

const QMetaObject qjackctlSessionInfraClientItemEditor::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qjackctlSessionInfraClientItemEditor,
      qt_meta_data_qjackctlSessionInfraClientItemEditor, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlSessionInfraClientItemEditor::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlSessionInfraClientItemEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlSessionInfraClientItemEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSessionInfraClientItemEditor))
        return static_cast<void*>(const_cast< qjackctlSessionInfraClientItemEditor*>(this));
    return QWidget::qt_metacast(_clname);
}

int qjackctlSessionInfraClientItemEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: finishSignal(); break;
        case 1: browseSlot(); break;
        case 2: resetSlot(); break;
        case 3: finishSlot(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void qjackctlSessionInfraClientItemEditor::finishSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
static const uint qt_meta_data_qjackctlSessionInfraClientItemDelegate[] = {

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
      40,   39,   39,   39, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate[] = {
    "qjackctlSessionInfraClientItemDelegate\0"
    "\0commitEditor()\0"
};

const QMetaObject qjackctlSessionInfraClientItemDelegate::staticMetaObject = {
    { &QItemDelegate::staticMetaObject, qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate,
      qt_meta_data_qjackctlSessionInfraClientItemDelegate, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlSessionInfraClientItemDelegate::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlSessionInfraClientItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlSessionInfraClientItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSessionInfraClientItemDelegate))
        return static_cast<void*>(const_cast< qjackctlSessionInfraClientItemDelegate*>(this));
    return QItemDelegate::qt_metacast(_clname);
}

int qjackctlSessionInfraClientItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: commitEditor(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_qjackctlSessionForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      21,   20,   20,   20, 0x0a,
      35,   20,   20,   20, 0x0a,
      53,   20,   20,   20, 0x0a,
      78,   20,   20,   20, 0x0a,
     104,   20,   20,   20, 0x0a,
     129,   20,   20,   20, 0x0a,
     145,   20,   20,   20, 0x09,
     161,   20,   20,   20, 0x09,
     180,   20,   20,   20, 0x09,
     202,  198,   20,   20, 0x09,
     233,   20,   20,   20, 0x09,
     250,   20,   20,   20, 0x09,
     268,   20,   20,   20, 0x09,
     292,   20,   20,   20, 0x09,
     312,   20,   20,   20, 0x09,
     332,   20,   20,   20, 0x09,
     353,  198,   20,   20, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlSessionForm[] = {
    "qjackctlSessionForm\0\0loadSession()\0"
    "saveSessionSave()\0saveSessionSaveAndQuit()\0"
    "saveSessionSaveTemplate()\0"
    "saveSessionVersion(bool)\0updateSession()\0"
    "recentSession()\0updateRecentMenu()\0"
    "clearRecentMenu()\0pos\0"
    "sessionViewContextMenu(QPoint)\0"
    "addInfraClient()\0editInfraClient()\0"
    "editInfraClientCommit()\0removeInfraClient()\0"
    "selectInfraClient()\0updateInfraClients()\0"
    "infraClientContextMenu(QPoint)\0"
};

const QMetaObject qjackctlSessionForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qjackctlSessionForm,
      qt_meta_data_qjackctlSessionForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlSessionForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlSessionForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlSessionForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSessionForm))
        return static_cast<void*>(const_cast< qjackctlSessionForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int qjackctlSessionForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: loadSession(); break;
        case 1: saveSessionSave(); break;
        case 2: saveSessionSaveAndQuit(); break;
        case 3: saveSessionSaveTemplate(); break;
        case 4: saveSessionVersion((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: updateSession(); break;
        case 6: recentSession(); break;
        case 7: updateRecentMenu(); break;
        case 8: clearRecentMenu(); break;
        case 9: sessionViewContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 10: addInfraClient(); break;
        case 11: editInfraClient(); break;
        case 12: editInfraClientCommit(); break;
        case 13: removeInfraClient(); break;
        case 14: selectInfraClient(); break;
        case 15: updateInfraClients(); break;
        case 16: infraClientContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
