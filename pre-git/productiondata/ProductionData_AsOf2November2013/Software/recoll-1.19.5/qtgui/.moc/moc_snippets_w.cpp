/****************************************************************************
** Meta object code from reading C++ file 'snippets_w.h'
**
** Created: Fri Aug 23 22:13:16 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../snippets_w.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snippets_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SnippetsW[] = {

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
      25,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      65,   10,   10,   10, 0x09,
      86,   10,   10,   10, 0x09,
     101,   10,   10,   10, 0x09,
     120,   10,   10,   10, 0x09,
     143,   10,   10,   10, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_SnippetsW[] = {
    "SnippetsW\0\0,pagenum,term\0"
    "startNativeViewer(Rcl::Doc,int,QString)\0"
    "linkWasClicked(QUrl)\0slotEditFind()\0"
    "slotEditFindNext()\0slotEditFindPrevious()\0"
    "slotSearchTextChanged(QString)\0"
};

const QMetaObject SnippetsW::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SnippetsW,
      qt_meta_data_SnippetsW, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SnippetsW::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SnippetsW::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SnippetsW::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SnippetsW))
        return static_cast<void*>(const_cast< SnippetsW*>(this));
    if (!strcmp(_clname, "Ui::Snippets"))
        return static_cast< Ui::Snippets*>(const_cast< SnippetsW*>(this));
    return QWidget::qt_metacast(_clname);
}

int SnippetsW::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startNativeViewer((*reinterpret_cast< Rcl::Doc(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: linkWasClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: slotEditFind(); break;
        case 3: slotEditFindNext(); break;
        case 4: slotEditFindPrevious(); break;
        case 5: slotSearchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void SnippetsW::startNativeViewer(Rcl::Doc _t1, int _t2, QString _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
