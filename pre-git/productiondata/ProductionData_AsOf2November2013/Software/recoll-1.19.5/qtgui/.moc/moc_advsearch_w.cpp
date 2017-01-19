/****************************************************************************
** Meta object code from reading C++ file 'advsearch_w.h'
**
** Created: Fri Aug 23 22:12:37 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../advsearch_w.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'advsearch_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AdvSearch[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   11,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
      56,   10,   10,   10, 0x0a,
      78,   10,   10,   10, 0x0a,
     101,   10,   10,   10, 0x0a,
     123,   10,   10,   10, 0x0a,
     146,   10,   10,   10, 0x0a,
     167,   10,   10,   10, 0x0a,
     195,   10,   10,   10, 0x0a,
     223,   10,   10,   10, 0x0a,
     250,   10,   10,   10, 0x0a,
     277,   10,   10,   10, 0x0a,
     295,  289,   10,   10, 0x0a,
     332,   10,   10,   10, 0x0a,
     351,   10,   10,   10, 0x0a,
     367,   10,   10,   10, 0x0a,
     379,   10,   10,   10, 0x0a,
     391,   10,   10,   10, 0x0a,
     411,   10,  406,   10, 0x0a,
     419,   10,   10,   10, 0x0a,
     437,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AdvSearch[] = {
    "AdvSearch\0\0,\0startSearch(RefCntr<Rcl::SearchData>,bool)\0"
    "delFiltypPB_clicked()\0delAFiltypPB_clicked()\0"
    "addFiltypPB_clicked()\0addAFiltypPB_clicked()\0"
    "guiListsToIgnTypes()\0filterDatesCB_toggled(bool)\0"
    "filterSizesCB_toggled(bool)\0"
    "restrictFtCB_toggled(bool)\0"
    "restrictCtCB_toggled(bool)\0runSearch()\0"
    "sdata\0fromSearch(RefCntr<Rcl::SearchData>)\0"
    "browsePB_clicked()\0saveFileTypes()\0"
    "delClause()\0addClause()\0addClause(int)\0"
    "bool\0close()\0slotHistoryNext()\0"
    "slotHistoryPrev()\0"
};

const QMetaObject AdvSearch::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_AdvSearch,
      qt_meta_data_AdvSearch, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AdvSearch::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AdvSearch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AdvSearch::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AdvSearch))
        return static_cast<void*>(const_cast< AdvSearch*>(this));
    if (!strcmp(_clname, "Ui::AdvSearchBase"))
        return static_cast< Ui::AdvSearchBase*>(const_cast< AdvSearch*>(this));
    return QDialog::qt_metacast(_clname);
}

int AdvSearch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: startSearch((*reinterpret_cast< RefCntr<Rcl::SearchData>(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: delFiltypPB_clicked(); break;
        case 2: delAFiltypPB_clicked(); break;
        case 3: addFiltypPB_clicked(); break;
        case 4: addAFiltypPB_clicked(); break;
        case 5: guiListsToIgnTypes(); break;
        case 6: filterDatesCB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: filterSizesCB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: restrictFtCB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: restrictCtCB_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: runSearch(); break;
        case 11: fromSearch((*reinterpret_cast< RefCntr<Rcl::SearchData>(*)>(_a[1]))); break;
        case 12: browsePB_clicked(); break;
        case 13: saveFileTypes(); break;
        case 14: delClause(); break;
        case 15: addClause(); break;
        case 16: addClause((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: { bool _r = close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 18: slotHistoryNext(); break;
        case 19: slotHistoryPrev(); break;
        default: ;
        }
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void AdvSearch::startSearch(RefCntr<Rcl::SearchData> _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
