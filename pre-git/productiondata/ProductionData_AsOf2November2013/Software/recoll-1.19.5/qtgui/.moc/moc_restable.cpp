/****************************************************************************
** Meta object code from reading C++ file 'restable.h'
**
** Created: Fri Aug 23 22:13:07 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../restable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_RecollModel[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_RecollModel[] = {
    "RecollModel\0\0sortDataChanged(DocSeqSortSpec)\0"
};

const QMetaObject RecollModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_RecollModel,
      qt_meta_data_RecollModel, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &RecollModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *RecollModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *RecollModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_RecollModel))
        return static_cast<void*>(const_cast< RecollModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int RecollModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: sortDataChanged((*reinterpret_cast< DocSeqSortSpec(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void RecollModel::sortDataChanged(DocSeqSortSpec _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_ResTableDetailArea[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      24,   20,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ResTableDetailArea[] = {
    "ResTableDetailArea\0\0pos\0createPopupMenu(QPoint)\0"
};

const QMetaObject ResTableDetailArea::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_ResTableDetailArea,
      qt_meta_data_ResTableDetailArea, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ResTableDetailArea::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ResTableDetailArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ResTableDetailArea::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResTableDetailArea))
        return static_cast<void*>(const_cast< ResTableDetailArea*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int ResTableDetailArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: createPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
static const uint qt_meta_data_ResTable[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   10,    9,    9, 0x05,
      49,    9,    9,    9, 0x05,
      80,    9,    9,    9, 0x05,
     107,    9,    9,    9, 0x05,
     131,    9,    9,    9, 0x05,
     147,    9,    9,    9, 0x05,
     167,    9,    9,    9, 0x05,
     189,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     212,    9,    9,    9, 0x0a,
     258,  252,    9,    9, 0x0a,
     300,  292,    9,    9, 0x0a,
     335,    9,    9,    9, 0x0a,
     350,    9,    9,    9, 0x0a,
     373,  364,    9,    9, 0x0a,
     393,    9,    9,    9, 0x2a,
     409,    9,    9,    9, 0x0a,
     447,  443,    9,    9, 0x0a,
     471,    9,    9,    9, 0x0a,
     485,    9,    9,    9, 0x0a,
     502,    9,    9,    9, 0x0a,
     522,    9,    9,    9, 0x0a,
     533,    9,    9,    9, 0x0a,
     546,    9,    9,    9, 0x0a,
     560,    9,    9,    9, 0x0a,
     573,    9,    9,    9, 0x0a,
     593,    9,    9,    9, 0x0a,
     610,    9,    9,    9, 0x0a,
     629,    9,    9,    9, 0x0a,
     647,    9,    9,    9, 0x0a,
     677,    9,    9,    9, 0x0a,
     692,    9,    9,    9, 0x0a,
     704,    9,    9,    9, 0x0a,
     716,    9,    9,    9, 0x0a,
     728,    9,    9,    9, 0x0a,
     753,  749,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ResTable[] = {
    "ResTable\0\0,,\0docPreviewClicked(int,Rcl::Doc,int)\0"
    "docSaveToFileClicked(Rcl::Doc)\0"
    "previewRequested(Rcl::Doc)\0"
    "editRequested(Rcl::Doc)\0headerClicked()\0"
    "docExpand(Rcl::Doc)\0showSubDocs(Rcl::Doc)\0"
    "showSnippets(Rcl::Doc)\0"
    "onTableView_currentChanged(QModelIndex)\0"
    "index\0on_tableView_entered(QModelIndex)\0"
    "nsource\0setDocSource(RefCntr<DocSequence>)\0"
    "saveColState()\0resetSource()\0resetPos\0"
    "readDocSource(bool)\0readDocSource()\0"
    "onSortDataChanged(DocSeqSortSpec)\0pos\0"
    "createPopupMenu(QPoint)\0menuPreview()\0"
    "menuSaveToFile()\0menuSaveSelection()\0"
    "menuEdit()\0menuCopyFN()\0menuCopyURL()\0"
    "menuExpand()\0menuPreviewParent()\0"
    "menuOpenParent()\0menuShowSnippets()\0"
    "menuShowSubDocs()\0createHeaderPopupMenu(QPoint)\0"
    "deleteColumn()\0addColumn()\0resetSort()\0"
    "saveAsCSV()\0linkWasClicked(QUrl)\0row\0"
    "makeRowVisible(int)\0"
};

const QMetaObject ResTable::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ResTable,
      qt_meta_data_ResTable, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ResTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ResTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ResTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResTable))
        return static_cast<void*>(const_cast< ResTable*>(this));
    if (!strcmp(_clname, "Ui::ResTable"))
        return static_cast< Ui::ResTable*>(const_cast< ResTable*>(this));
    return QWidget::qt_metacast(_clname);
}

int ResTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: docPreviewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Rcl::Doc(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: docSaveToFileClicked((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 2: previewRequested((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 3: editRequested((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 4: headerClicked(); break;
        case 5: docExpand((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 6: showSubDocs((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 7: showSnippets((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 8: onTableView_currentChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 9: on_tableView_entered((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: setDocSource((*reinterpret_cast< RefCntr<DocSequence>(*)>(_a[1]))); break;
        case 11: saveColState(); break;
        case 12: resetSource(); break;
        case 13: readDocSource((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: readDocSource(); break;
        case 15: onSortDataChanged((*reinterpret_cast< DocSeqSortSpec(*)>(_a[1]))); break;
        case 16: createPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 17: menuPreview(); break;
        case 18: menuSaveToFile(); break;
        case 19: menuSaveSelection(); break;
        case 20: menuEdit(); break;
        case 21: menuCopyFN(); break;
        case 22: menuCopyURL(); break;
        case 23: menuExpand(); break;
        case 24: menuPreviewParent(); break;
        case 25: menuOpenParent(); break;
        case 26: menuShowSnippets(); break;
        case 27: menuShowSubDocs(); break;
        case 28: createHeaderPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 29: deleteColumn(); break;
        case 30: addColumn(); break;
        case 31: resetSort(); break;
        case 32: saveAsCSV(); break;
        case 33: linkWasClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 34: makeRowVisible((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void ResTable::docPreviewClicked(int _t1, Rcl::Doc _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ResTable::docSaveToFileClicked(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ResTable::previewRequested(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ResTable::editRequested(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ResTable::headerClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void ResTable::docExpand(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ResTable::showSubDocs(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ResTable::showSnippets(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
