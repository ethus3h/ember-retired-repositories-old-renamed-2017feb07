/****************************************************************************
** Meta object code from reading C++ file 'preview_w.h'
**
** Created: Fri Aug 23 22:12:58 2013
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../preview_w.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preview_w.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PreviewTextEdit[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x0a,
      33,   16,   16,   16, 0x0a,
      47,   16,   16,   16, 0x0a,
      62,   16,   16,   16, 0x0a,
      74,   70,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_PreviewTextEdit[] = {
    "PreviewTextEdit\0\0displayFields()\0"
    "displayText()\0displayImage()\0print()\0"
    "pos\0createPopupMenu(QPoint)\0"
};

const QMetaObject PreviewTextEdit::staticMetaObject = {
    { &PREVIEW_PARENTCLASS::staticMetaObject, qt_meta_stringdata_PreviewTextEdit,
      qt_meta_data_PreviewTextEdit, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PreviewTextEdit::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PreviewTextEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PreviewTextEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewTextEdit))
        return static_cast<void*>(const_cast< PreviewTextEdit*>(this));
    return PREVIEW_PARENTCLASS::qt_metacast(_clname);
}

int PreviewTextEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PREVIEW_PARENTCLASS::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayFields(); break;
        case 1: displayText(); break;
        case 2: displayImage(); break;
        case 3: print(); break;
        case 4: createPopupMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
static const uint qt_meta_data_Preview[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x05,
      33,    8,    8,    8, 0x05,
      66,   53,    8,    8, 0x05,
      93,   53,    8,    8, 0x05,
     120,   53,    8,    8, 0x05,
     153,    8,    8,    8, 0x05,
     182,    8,    8,    8, 0x05,

 // slots: signature, parameters, type, tag, flags
     211,  206,    8,    8, 0x0a,
     238,    8,    8,    8, 0x0a,
     283,  263,    8,    8, 0x0a,
     333,  316,    8,    8, 0x2a,
     361,    8,    8,    8, 0x0a,
     375,    8,    8,    8, 0x0a,
     392,  389,    8,    8, 0x0a,
     417,    8,    8,    8, 0x0a,
     435,    8,    8,    8, 0x0a,
     455,    8,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Preview[] = {
    "Preview\0\0previewClosed(Preview*)\0"
    "wordSelect(QString)\0w,sid,docnum\0"
    "showNext(Preview*,int,int)\0"
    "showPrev(Preview*,int,int)\0"
    "previewExposed(Preview*,int,int)\0"
    "printCurrentPreviewRequest()\0"
    "saveDocToFile(Rcl::Doc)\0text\0"
    "searchTextChanged(QString)\0"
    "searchTextFromIndex(int)\0str,next,reverse,wo\0"
    "doSearch(QString,bool,bool,bool)\0"
    "str,next,reverse\0doSearch(QString,bool,bool)\0"
    "nextPressed()\0prevPressed()\0tw\0"
    "currentChanged(QWidget*)\0closeCurrentTab()\0"
    "emitSaveDocToFile()\0togglePlainPre()\0"
};

const QMetaObject Preview::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Preview,
      qt_meta_data_Preview, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Preview::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Preview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Preview::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Preview))
        return static_cast<void*>(const_cast< Preview*>(this));
    return QWidget::qt_metacast(_clname);
}

int Preview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: previewClosed((*reinterpret_cast< Preview*(*)>(_a[1]))); break;
        case 1: wordSelect((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: showNext((*reinterpret_cast< Preview*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 3: showPrev((*reinterpret_cast< Preview*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 4: previewExposed((*reinterpret_cast< Preview*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 5: printCurrentPreviewRequest(); break;
        case 6: saveDocToFile((*reinterpret_cast< Rcl::Doc(*)>(_a[1]))); break;
        case 7: searchTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: searchTextFromIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: doSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 10: doSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: nextPressed(); break;
        case 12: prevPressed(); break;
        case 13: currentChanged((*reinterpret_cast< QWidget*(*)>(_a[1]))); break;
        case 14: closeCurrentTab(); break;
        case 15: emitSaveDocToFile(); break;
        case 16: togglePlainPre(); break;
        default: ;
        }
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Preview::previewClosed(Preview * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Preview::wordSelect(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Preview::showNext(Preview * _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Preview::showPrev(Preview * _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Preview::previewExposed(Preview * _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Preview::printCurrentPreviewRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 5, 0);
}

// SIGNAL 6
void Preview::saveDocToFile(Rcl::Doc _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
