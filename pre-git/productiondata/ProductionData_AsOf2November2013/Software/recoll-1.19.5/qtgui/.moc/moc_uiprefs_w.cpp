/****************************************************************************
** Meta object code from reading C++ file 'uiprefs_w.h'
**
** Created: Fri Aug 23 22:13:27 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../uiprefs_w.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uiprefs_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UIPrefsDialog[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      29,   14,   14,   14, 0x0a,
      46,   14,   14,   14, 0x0a,
      65,   14,   14,   14, 0x0a,
      88,   14,   14,   14, 0x0a,
     108,   14,   14,   14, 0x0a,
     126,   14,   14,   14, 0x0a,
     141,   14,   14,   14, 0x0a,
     161,  158,   14,   14, 0x0a,
     185,   14,   14,   14, 0x0a,
     208,   14,   14,   14, 0x0a,
     231,   14,   14,   14, 0x0a,
     254,   14,   14,   14, 0x0a,
     280,   14,   14,   14, 0x0a,
     312,  307,   14,   14, 0x0a,
     333,   14,   14,   14, 0x0a,
     350,   14,   14,   14, 0x0a,
     367,   14,   14,   14, 0x0a,
     391,   14,   14,   14, 0x0a,
     411,   14,   14,   14, 0x09,
     420,   14,   14,   14, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_UIPrefsDialog[] = {
    "UIPrefsDialog\0\0uiprefsDone()\0"
    "showFontDialog()\0resetReslistFont()\0"
    "showStylesheetDialog()\0showSnipCssDialog()\0"
    "resetStylesheet()\0resetSnipCss()\0"
    "showViewAction()\0mt\0showViewAction(QString)\0"
    "addExtraDbPB_clicked()\0delExtraDbPB_clicked()\0"
    "togExtraDbPB_clicked()\0actAllExtraDbPB_clicked()\0"
    "unacAllExtraDbPB_clicked()\0lang\0"
    "setStemLang(QString)\0editParaFormat()\0"
    "editHeaderText()\0extradDbSelectChanged()\0"
    "extraDbEditPtrans()\0accept()\0reject()\0"
};

const QMetaObject UIPrefsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_UIPrefsDialog,
      qt_meta_data_UIPrefsDialog, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UIPrefsDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UIPrefsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UIPrefsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UIPrefsDialog))
        return static_cast<void*>(const_cast< UIPrefsDialog*>(this));
    if (!strcmp(_clname, "Ui::uiPrefsDialogBase"))
        return static_cast< Ui::uiPrefsDialogBase*>(const_cast< UIPrefsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int UIPrefsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: uiprefsDone(); break;
        case 1: showFontDialog(); break;
        case 2: resetReslistFont(); break;
        case 3: showStylesheetDialog(); break;
        case 4: showSnipCssDialog(); break;
        case 5: resetStylesheet(); break;
        case 6: resetSnipCss(); break;
        case 7: showViewAction(); break;
        case 8: showViewAction((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: addExtraDbPB_clicked(); break;
        case 10: delExtraDbPB_clicked(); break;
        case 11: togExtraDbPB_clicked(); break;
        case 12: actAllExtraDbPB_clicked(); break;
        case 13: unacAllExtraDbPB_clicked(); break;
        case 14: setStemLang((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: editParaFormat(); break;
        case 16: editHeaderText(); break;
        case 17: extradDbSelectChanged(); break;
        case 18: extraDbEditPtrans(); break;
        case 19: accept(); break;
        case 20: reject(); break;
        default: ;
        }
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void UIPrefsDialog::uiprefsDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
