/****************************************************************************
** Meta object code from reading C++ file 'ssearch_w.h'
**
** Created: Fri Aug 23 22:13:24 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ssearch_w.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ssearch_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SSearch[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,    9,    8,    8, 0x05,
      54,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
      73,   68,    8,    8, 0x0a,
     100,    8,    8,    8, 0x0a,
     123,   68,    8,    8, 0x0a,
     148,    8,    8,    8, 0x0a,
     168,    8,    8,    8, 0x0a,
     185,    9,    8,    8, 0x0a,
     216,   68,    8,    8, 0x0a,
     246,    8,    8,    8, 0x0a,
     265,    8,    8,    8, 0x0a,
     277,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SSearch[] = {
    "SSearch\0\0,\0startSearch(RefCntr<Rcl::SearchData>,bool)\0"
    "clearSearch()\0text\0searchTextChanged(QString)\0"
    "searchTypeChanged(int)\0setSearchString(QString)\0"
    "startSimpleSearch()\0addTerm(QString)\0"
    "onWordReplace(QString,QString)\0"
    "completionTermChosen(QString)\0"
    "wrapupCompletion()\0timerDone()\0"
    "takeFocus()\0"
};

const QMetaObject SSearch::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SSearch,
      qt_meta_data_SSearch, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SSearch))
        return static_cast<void*>(const_cast< SSearch*>(this));
    if (!strcmp(_clname, "Ui::SSearchBase"))
        return static_cast< Ui::SSearchBase*>(const_cast< SSearch*>(this));
    return QWidget::qt_metacast(_clname);
}

int SSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startSearch((*reinterpret_cast< RefCntr<Rcl::SearchData>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: clearSearch(); break;
        case 2: searchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: searchTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setSearchString((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: startSimpleSearch(); break;
        case 6: addTerm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: onWordReplace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: completionTermChosen((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: wrapupCompletion(); break;
        case 10: timerDone(); break;
        case 11: takeFocus(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SSearch::startSearch(RefCntr<Rcl::SearchData> _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SSearch::clearSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
