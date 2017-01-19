/****************************************************************************
** Meta object code from reading C++ file 'qjackctlPatchbayForm.h'
**
** Created: Sat Aug 31 19:57:58 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlPatchbayForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlPatchbayForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlPatchbayForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x0a,
      36,   21,   21,   21, 0x0a,
      51,   21,   21,   21, 0x0a,
      76,   66,   21,   21, 0x0a,
      96,   21,   21,   21, 0x0a,
     119,   21,   21,   21, 0x0a,
     132,   21,   21,   21, 0x0a,
     148,   21,   21,   21, 0x0a,
     162,   21,   21,   21, 0x0a,
     176,   21,   21,   21, 0x0a,
     192,   21,   21,   21, 0x0a,
     210,   21,   21,   21, 0x0a,
     223,   21,   21,   21, 0x0a,
     239,   21,   21,   21, 0x0a,
     253,   21,   21,   21, 0x0a,
     267,   21,   21,   21, 0x0a,
     283,   21,   21,   21, 0x0a,
     301,   21,   21,   21, 0x0a,
     319,   21,   21,   21, 0x0a,
     340,   21,   21,   21, 0x0a,
     356,   21,   21,   21, 0x0a,
     368,   21,   21,   21, 0x0a,
     386,   21,   21,   21, 0x0a,
     400,   21,   21,   21, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlPatchbayForm[] = {
    "qjackctlPatchbayForm\0\0newPatchbay()\0"
    "loadPatchbay()\0savePatchbay()\0iPatchbay\0"
    "selectPatchbay(int)\0toggleActivePatchbay()\0"
    "addOSocket()\0removeOSocket()\0editOSocket()\0"
    "copyOSocket()\0moveUpOSocket()\0"
    "moveDownOSocket()\0addISocket()\0"
    "removeISocket()\0editISocket()\0"
    "copyISocket()\0moveUpISocket()\0"
    "moveDownISocket()\0connectSelected()\0"
    "disconnectSelected()\0disconnectAll()\0"
    "expandAll()\0contentsChanged()\0"
    "refreshForm()\0stabilizeForm()\0"
};

const QMetaObject qjackctlPatchbayForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qjackctlPatchbayForm,
      qt_meta_data_qjackctlPatchbayForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlPatchbayForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlPatchbayForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlPatchbayForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlPatchbayForm))
        return static_cast<void*>(const_cast< qjackctlPatchbayForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int qjackctlPatchbayForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newPatchbay(); break;
        case 1: loadPatchbay(); break;
        case 2: savePatchbay(); break;
        case 3: selectPatchbay((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: toggleActivePatchbay(); break;
        case 5: addOSocket(); break;
        case 6: removeOSocket(); break;
        case 7: editOSocket(); break;
        case 8: copyOSocket(); break;
        case 9: moveUpOSocket(); break;
        case 10: moveDownOSocket(); break;
        case 11: addISocket(); break;
        case 12: removeISocket(); break;
        case 13: editISocket(); break;
        case 14: copyISocket(); break;
        case 15: moveUpISocket(); break;
        case 16: moveDownISocket(); break;
        case 17: connectSelected(); break;
        case 18: disconnectSelected(); break;
        case 19: disconnectAll(); break;
        case 20: expandAll(); break;
        case 21: contentsChanged(); break;
        case 22: refreshForm(); break;
        case 23: stabilizeForm(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
