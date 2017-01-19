/****************************************************************************
** Meta object code from reading C++ file 'qjackctlSetupForm.h'
**
** Created: Sat Aug 31 19:58:04 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlSetupForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlSetupForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlSetupForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   18,   18,   18, 0x0a,
      48,   18,   18,   18, 0x0a,
      68,   18,   18,   18, 0x0a,
      90,   18,   18,   18, 0x0a,
     107,   18,   18,   18, 0x0a,
     129,   18,   18,   18, 0x0a,
     147,   18,   18,   18, 0x0a,
     164,   18,   18,   18, 0x0a,
     182,   18,   18,   18, 0x0a,
     204,   18,   18,   18, 0x0a,
     230,   18,   18,   18, 0x0a,
     253,   18,   18,   18, 0x0a,
     280,   18,   18,   18, 0x0a,
     302,   18,   18,   18, 0x0a,
     328,   18,   18,   18, 0x0a,
     351,   18,   18,   18, 0x0a,
     378,   18,   18,   18, 0x0a,
     405,   18,   18,   18, 0x0a,
     429,   18,   18,   18, 0x0a,
     450,   18,   18,   18, 0x0a,
     471,   18,   18,   18, 0x0a,
     497,   18,   18,   18, 0x0a,
     518,   18,   18,   18, 0x0a,
     542,   18,   18,   18, 0x0a,
     560,   18,   18,   18, 0x0a,
     577,   18,   18,   18, 0x09,
     586,   18,   18,   18, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlSetupForm[] = {
    "qjackctlSetupForm\0\0changeCurrentPreset(QString)\0"
    "saveCurrentPreset()\0deleteCurrentPreset()\0"
    "changeAudio(int)\0changeDriver(QString)\0"
    "selectInterface()\0selectInDevice()\0"
    "selectOutDevice()\0symbolStartupScript()\0"
    "symbolPostStartupScript()\0"
    "symbolShutdownScript()\0"
    "symbolPostShutdownScript()\0"
    "browseStartupScript()\0browsePostStartupScript()\0"
    "browseShutdownScript()\0"
    "browsePostShutdownScript()\0"
    "browseActivePatchbayPath()\0"
    "browseMessagesLogPath()\0chooseDisplayFont1()\0"
    "chooseDisplayFont2()\0toggleDisplayEffect(bool)\0"
    "chooseMessagesFont()\0chooseConnectionsFont()\0"
    "settingsChanged()\0optionsChanged()\0"
    "accept()\0reject()\0"
};

const QMetaObject qjackctlSetupForm::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qjackctlSetupForm,
      qt_meta_data_qjackctlSetupForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlSetupForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlSetupForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlSetupForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlSetupForm))
        return static_cast<void*>(const_cast< qjackctlSetupForm*>(this));
    return QDialog::qt_metacast(_clname);
}

int qjackctlSetupForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeCurrentPreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: saveCurrentPreset(); break;
        case 2: deleteCurrentPreset(); break;
        case 3: changeAudio((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: changeDriver((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: selectInterface(); break;
        case 6: selectInDevice(); break;
        case 7: selectOutDevice(); break;
        case 8: symbolStartupScript(); break;
        case 9: symbolPostStartupScript(); break;
        case 10: symbolShutdownScript(); break;
        case 11: symbolPostShutdownScript(); break;
        case 12: browseStartupScript(); break;
        case 13: browsePostStartupScript(); break;
        case 14: browseShutdownScript(); break;
        case 15: browsePostShutdownScript(); break;
        case 16: browseActivePatchbayPath(); break;
        case 17: browseMessagesLogPath(); break;
        case 18: chooseDisplayFont1(); break;
        case 19: chooseDisplayFont2(); break;
        case 20: toggleDisplayEffect((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: chooseMessagesFont(); break;
        case 22: chooseConnectionsFont(); break;
        case 23: settingsChanged(); break;
        case 24: optionsChanged(); break;
        case 25: accept(); break;
        case 26: reject(); break;
        default: ;
        }
        _id -= 27;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
