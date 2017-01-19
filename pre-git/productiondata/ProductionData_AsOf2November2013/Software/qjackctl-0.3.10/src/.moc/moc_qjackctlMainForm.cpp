/****************************************************************************
** Meta object code from reading C++ file 'qjackctlMainForm.h'
**
** Created: Sat Aug 31 19:57:51 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qjackctlMainForm.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qjackctlMainForm.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qjackctlMainForm[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x0a,
      30,   17,   17,   17, 0x0a,
      41,   17,   17,   17, 0x0a,
      58,   17,   17,   17, 0x09,
      71,   17,   17,   17, 0x09,
      85,   17,   17,   17, 0x09,
     119,   17,   17,   17, 0x09,
     134,   17,   17,   17, 0x09,
     148,   17,   17,   17, 0x09,
     164,   17,   17,   17, 0x09,
     186,   17,   17,   17, 0x09,
     206,   17,   17,   17, 0x09,
     218,   17,   17,   17, 0x09,
     239,   17,   17,   17, 0x09,
     263,  260,   17,   17, 0x09,
     302,   17,   17,   17, 0x09,
     319,   17,   17,   17, 0x09,
     346,   17,   17,   17, 0x09,
     367,   17,   17,   17, 0x09,
     386,   17,   17,   17, 0x09,
     406,   17,   17,   17, 0x09,
     430,   17,   17,   17, 0x09,
     451,   17,   17,   17, 0x09,
     467,   17,   17,   17, 0x09,
     483,   17,   17,   17, 0x09,
     501,   17,   17,   17, 0x09,
     521,   17,   17,   17, 0x09,
     541,   17,   17,   17, 0x09,
     558,   17,   17,   17, 0x09,
     574,   17,   17,   17, 0x09,
     593,   17,   17,   17, 0x09,
     623,   17,   17,   17, 0x09,
     653,   17,   17,   17, 0x09,
     677,   17,   17,   17, 0x09,
     697,   17,   17,   17, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_qjackctlMainForm[] = {
    "qjackctlMainForm\0\0startJack()\0stopJack()\0"
    "resetXrunStats()\0readStdout()\0"
    "jackStarted()\0jackError(QProcess::ProcessError)\0"
    "jackFinished()\0jackCleanup()\0"
    "jackStabilize()\0stdoutNotifySlot(int)\0"
    "alsaNotifySlot(int)\0timerSlot()\0"
    "jackConnectChanged()\0alsaConnectChanged()\0"
    ",,\0cableConnectSlot(QString,QString,uint)\0"
    "toggleMainForm()\0toggleMessagesStatusForm()\0"
    "toggleMessagesForm()\0toggleStatusForm()\0"
    "toggleSessionForm()\0toggleConnectionsForm()\0"
    "togglePatchbayForm()\0showSetupForm()\0"
    "showAboutForm()\0transportRewind()\0"
    "transportBackward()\0transportPlay(bool)\0"
    "transportStart()\0transportStop()\0"
    "transportForward()\0systemTrayContextMenu(QPoint)\0"
    "activatePresetsMenu(QAction*)\0"
    "activatePreset(QString)\0activatePreset(int)\0"
    "quitMainForm()\0"
};

const QMetaObject qjackctlMainForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_qjackctlMainForm,
      qt_meta_data_qjackctlMainForm, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qjackctlMainForm::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qjackctlMainForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qjackctlMainForm::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qjackctlMainForm))
        return static_cast<void*>(const_cast< qjackctlMainForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int qjackctlMainForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startJack(); break;
        case 1: stopJack(); break;
        case 2: resetXrunStats(); break;
        case 3: readStdout(); break;
        case 4: jackStarted(); break;
        case 5: jackError((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 6: jackFinished(); break;
        case 7: jackCleanup(); break;
        case 8: jackStabilize(); break;
        case 9: stdoutNotifySlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: alsaNotifySlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: timerSlot(); break;
        case 12: jackConnectChanged(); break;
        case 13: alsaConnectChanged(); break;
        case 14: cableConnectSlot((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3]))); break;
        case 15: toggleMainForm(); break;
        case 16: toggleMessagesStatusForm(); break;
        case 17: toggleMessagesForm(); break;
        case 18: toggleStatusForm(); break;
        case 19: toggleSessionForm(); break;
        case 20: toggleConnectionsForm(); break;
        case 21: togglePatchbayForm(); break;
        case 22: showSetupForm(); break;
        case 23: showAboutForm(); break;
        case 24: transportRewind(); break;
        case 25: transportBackward(); break;
        case 26: transportPlay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: transportStart(); break;
        case 28: transportStop(); break;
        case 29: transportForward(); break;
        case 30: systemTrayContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 31: activatePresetsMenu((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 32: activatePreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: activatePreset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: quitMainForm(); break;
        default: ;
        }
        _id -= 35;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
