/****************************************************************************
** Meta object code from reading C++ file 'qjackctlSocketForm.h'
**
** Created: Sat Aug 31 19:58:08 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlSocketForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlSocketForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlSocketForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   19,   19,   19, 0x0a,
      30,   19,   19,   19, 0x0a,
      40,   19,   19,   19, 0x0a,
      51,   19,   19,   19, 0x0a,
      64,   19,   19,   19, 0x0a,
      77,   19,   19,   19, 0x0a,
      92,   19,   19,   19, 0x0a,
     107,   19,   19,   19, 0x0a,
     137,   19,   19,   19, 0x0a,
     163,   19,   19,   19, 0x0a,
     183,   19,   19,   19, 0x0a,
     203,   19,   19,   19, 0x0a,
     219,   19,   19,   19, 0x09,
     228,   19,   19,   19, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlSocketForm[] = {
    "qjackctlSocketForm\0\0changed()\0addPlug()\0"
    "editPlug()\0removePlug()\0moveUpPlug()\0"
    "moveDownPlug()\0selectedPlug()\0"
    "activateAddPlugMenu(QAction*)\0"
    "customContextMenu(QPoint)\0socketTypeChanged()\0"
    "clientNameChanged()\0stabilizeForm()\0"
    "accept()\0reject()\0"
};

const QMetaObject qjackctlSocketForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qjackctlSocketForm,
      qt_meta_data_qjackctlSocketForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlSocketForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlSocketForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlSocketForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSocketForm))
        return static_cast<void*>(const_cast< qjackctlSocketForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int qjackctlSocketForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changed(); break;
        case 1: addPlug(); break;
        case 2: editPlug(); break;
        case 3: removePlug(); break;
        case 4: moveUpPlug(); break;
        case 5: moveDownPlug(); break;
        case 6: selectedPlug(); break;
        case 7: activateAddPlugMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: customContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 9: socketTypeChanged(); break;
        case 10: clientNameChanged(); break;
        case 11: stabilizeForm(); break;
        case 12: accept(); break;
        case 13: reject(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
