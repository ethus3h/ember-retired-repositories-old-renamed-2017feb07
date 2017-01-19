/****************************************************************************
** Meta object code from reading C++ file 'qjackctlConnectionsForm.h'
**
** Created: Sat Aug 31 19:57:48 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlConnectionsForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlConnectionsForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlConnectionsForm[] = {

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
      25,   24,   24,   24, 0x0a,
      48,   24,   24,   24, 0x0a,
      74,   24,   24,   24, 0x0a,
      95,   24,   24,   24, 0x0a,
     112,   24,   24,   24, 0x0a,
     132,   24,   24,   24, 0x0a,
     147,   24,   24,   24, 0x0a,
     164,   24,   24,   24, 0x0a,
     186,   24,   24,   24, 0x0a,
     211,   24,   24,   24, 0x0a,
     231,   24,   24,   24, 0x0a,
     247,   24,   24,   24, 0x0a,
     266,   24,   24,   24, 0x0a,
     280,   24,   24,   24, 0x0a,
     296,   24,   24,   24, 0x0a,
     318,   24,   24,   24, 0x0a,
     343,   24,   24,   24, 0x0a,
     363,   24,   24,   24, 0x0a,
     379,   24,   24,   24, 0x0a,
     398,   24,   24,   24, 0x0a,
     412,   24,   24,   24, 0x0a,
     430,  428,   24,   24, 0x09,
     486,  428,   24,   24, 0x09,
     541,  428,   24,   24, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlConnectionsForm[] = {
    "qjackctlConnectionsForm\0\0"
    "audioConnectSelected()\0audioDisconnectSelected()\0"
    "audioDisconnectAll()\0audioExpandAll()\0"
    "audioRefreshClear()\0audioRefresh()\0"
    "audioStabilize()\0midiConnectSelected()\0"
    "midiDisconnectSelected()\0midiDisconnectAll()\0"
    "midiExpandAll()\0midiRefreshClear()\0"
    "midiRefresh()\0midiStabilize()\0"
    "alsaConnectSelected()\0alsaDisconnectSelected()\0"
    "alsaDisconnectAll()\0alsaExpandAll()\0"
    "alsaRefreshClear()\0alsaRefresh()\0"
    "alsaStabilize()\0,\0"
    "audioDisconnecting(qjackctlPortItem*,qjackctlPortItem*)\0"
    "midiDisconnecting(qjackctlPortItem*,qjackctlPortItem*)\0"
    "alsaDisconnecting(qjackctlPortItem*,qjackctlPortItem*)\0"
};

const QMetaObject qjackctlConnectionsForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qjackctlConnectionsForm,
      qt_meta_data_qjackctlConnectionsForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlConnectionsForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlConnectionsForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlConnectionsForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlConnectionsForm))
        return static_cast<void*>(const_cast< qjackctlConnectionsForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int qjackctlConnectionsForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: audioConnectSelected(); break;
        case 1: audioDisconnectSelected(); break;
        case 2: audioDisconnectAll(); break;
        case 3: audioExpandAll(); break;
        case 4: audioRefreshClear(); break;
        case 5: audioRefresh(); break;
        case 6: audioStabilize(); break;
        case 7: midiConnectSelected(); break;
        case 8: midiDisconnectSelected(); break;
        case 9: midiDisconnectAll(); break;
        case 10: midiExpandAll(); break;
        case 11: midiRefreshClear(); break;
        case 12: midiRefresh(); break;
        case 13: midiStabilize(); break;
        case 14: alsaConnectSelected(); break;
        case 15: alsaDisconnectSelected(); break;
        case 16: alsaDisconnectAll(); break;
        case 17: alsaExpandAll(); break;
        case 18: alsaRefreshClear(); break;
        case 19: alsaRefresh(); break;
        case 20: alsaStabilize(); break;
        case 21: audioDisconnecting((*reinterpret_cast< qjackctlPortItem*(*)>(_a[1])),(*reinterpret_cast< qjackctlPortItem*(*)>(_a[2]))); break;
        case 22: midiDisconnecting((*reinterpret_cast< qjackctlPortItem*(*)>(_a[1])),(*reinterpret_cast< qjackctlPortItem*(*)>(_a[2]))); break;
        case 23: alsaDisconnecting((*reinterpret_cast< qjackctlPortItem*(*)>(_a[1])),(*reinterpret_cast< qjackctlPortItem*(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
