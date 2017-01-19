/****************************************************************************
** Meta object code from reading C++ file 'spell_w.h'
**
** Created: Fri Aug 23 22:13:21 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../spell_w.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'spell_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SpellW[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
       8,    7,    7,    7, 0x05,

 // slots: signature, parameters, type, tag, flags
      28,    7,    7,    7, 0x0a,
      39,    7,    7,    7, 0x0a,
      60,    7,    7,    7, 0x0a,
      82,   80,    7,    7, 0x0a,
     109,    7,    7,    7, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SpellW[] = {
    "SpellW\0\0wordSelect(QString)\0doExpand()\0"
    "wordChanged(QString)\0textDoubleClicked()\0"
    ",\0textDoubleClicked(int,int)\0modeSet(int)\0"
};

const QMetaObject SpellW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SpellW,
      qt_meta_data_SpellW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SpellW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SpellW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SpellW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SpellW))
        return static_cast<void*>(const_cast< SpellW*>(this));
    if (!strcmp(_clname, "Ui::SpellBase"))
        return static_cast< Ui::SpellBase*>(const_cast< SpellW*>(this));
    return QWidget::qt_metacast(_clname);
}

int SpellW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: wordSelect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: doExpand(); break;
        case 2: wordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: textDoubleClicked(); break;
        case 4: textDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: modeSet((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SpellW::wordSelect(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
