/****************************************************************************
** Meta object code from reading C++ file 'reslist.h'
**
** Created: Fri Aug 23 22:11:55 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../reslist.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'reslist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ResList[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      33,    8,    8,    8, 0x05,
      60,   57,    8,    8, 0x05,
      96,    8,    8,    8, 0x05,
     127,    8,    8,    8, 0x05,
     154,    8,    8,    8, 0x05,
     177,    8,    8,    8, 0x05,
     199,    8,    8,    8, 0x05,
     223,    8,    8,    8, 0x05,
     243,    8,    8,    8, 0x05,
     265,  263,    8,    8, 0x05,
     294,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     318,  310,    8,    8, 0x0a,
     353,    8,    8,    8, 0x0a,
     365,    8,    8,    8, 0x0a,
     383,    8,    8,    8, 0x0a,
     403,    8,    8,    8, 0x0a,
     420,    8,    8,    8, 0x0a,
     438,    8,    8,    8, 0x0a,
     462,  455,    8,    8, 0x0a,
     481,    8,    8,    8, 0x0a,
     495,    8,    8,    8, 0x0a,
     512,    8,    8,    8, 0x0a,
     523,    8,    8,    8, 0x0a,
     536,    8,    8,    8, 0x0a,
     550,    8,    8,    8, 0x0a,
     563,    8,    8,    8, 0x0a,
     583,    8,    8,    8, 0x0a,
     600,    8,    8,    8, 0x0a,
     619,    8,    8,    8, 0x0a,
     637,    8,    8,    8, 0x0a,
     662,  657,    8,    8, 0x0a,
     678,    8,    8,    8, 0x0a,
     699,  694,    8,    8, 0x0a,
     724,  720,    8,    8, 0x0a,
     748,    8,    8,    8, 0x0a,
     767,    8,    8,    8, 0x09,
     784,    8,    8,    8, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_ResList[] = {
    "ResList\0\0nextPageAvailable(bool)\0"
    "prevPageAvailable(bool)\0,,\0"
    "docPreviewClicked(int,Rcl::Doc,int)\0"
    "docSaveToFileClicked(Rcl::Doc)\0"
    "previewRequested(Rcl::Doc)\0"
    "showSnippets(Rcl::Doc)\0showSubDocs(Rcl::Doc)\0"
    "editRequested(Rcl::Doc)\0docExpand(Rcl::Doc)\0"
    "wordSelect(QString)\0,\0"
    "wordReplace(QString,QString)\0"
    "hasResults(int)\0nsource\0"
    "setDocSource(RefCntr<DocSequence>)\0"
    "resetList()\0resPageUpOrBack()\0"
    "resPageDownOrNext()\0resultPageBack()\0"
    "resultPageFirst()\0resultPageNext()\0"
    "docnum\0resultPageFor(int)\0menuPreview()\0"
    "menuSaveToFile()\0menuEdit()\0menuCopyFN()\0"
    "menuCopyURL()\0menuExpand()\0"
    "menuPreviewParent()\0menuOpenParent()\0"
    "menuShowSnippets()\0menuShowSubDocs()\0"
    "previewExposed(int)\0text\0append(QString)\0"
    "readDocSource()\0link\0highlighted(QString)\0"
    "pos\0createPopupMenu(QPoint)\0"
    "showQueryDetails()\0languageChange()\0"
    "linkWasClicked(QUrl)\0"
};

const QMetaObject ResList::staticMetaObject = {
    { &RESLIST_PARENTCLASS::staticMetaObject, qt_meta_stringdata_ResList,
      qt_meta_data_ResList, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ResList::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ResList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ResList::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ResList))
        return static_cast<void*>(const_cast< ResList*>(this));
    return RESLIST_PARENTCLASS::qt_metacast(_clname);
}

int ResList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RESLIST_PARENTCLASS::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: nextPageAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: prevPageAvailable((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: docPreviewClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< Rcl::Doc(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: docSaveToFileClicked((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 4: previewRequested((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 5: showSnippets((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 6: showSubDocs((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 7: editRequested((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 8: docExpand((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 9: wordSelect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: wordReplace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 11: hasResults((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: setDocSource((*reinterpret_cast< RefCntr<DocSequence>(*)>(_a[1]))); break;
        case 13: resetList(); break;
        case 14: resPageUpOrBack(); break;
        case 15: resPageDownOrNext(); break;
        case 16: resultPageBack(); break;
        case 17: resultPageFirst(); break;
        case 18: resultPageNext(); break;
        case 19: resultPageFor((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: menuPreview(); break;
        case 21: menuSaveToFile(); break;
        case 22: menuEdit(); break;
        case 23: menuCopyFN(); break;
        case 24: menuCopyURL(); break;
        case 25: menuExpand(); break;
        case 26: menuPreviewParent(); break;
        case 27: menuOpenParent(); break;
        case 28: menuShowSnippets(); break;
        case 29: menuShowSubDocs(); break;
        case 30: previewExposed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: append((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 32: readDocSource(); break;
        case 33: highlighted((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: createPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 35: showQueryDetails(); break;
        case 36: languageChange(); break;
        case 37: linkWasClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 38;
    }
    return _id;
}

// SIGNAL 0
void ResList::nextPageAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ResList::prevPageAvailable(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ResList::docPreviewClicked(int _t1, Rcl::Doc _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ResList::docSaveToFileClicked(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ResList::previewRequested(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ResList::showSnippets(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ResList::showSubDocs(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ResList::editRequested(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ResList::docExpand(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void ResList::wordSelect(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ResList::wordReplace(const QString & _t1, const QString & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ResList::hasResults(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_END_MOC_NAMESPACE
