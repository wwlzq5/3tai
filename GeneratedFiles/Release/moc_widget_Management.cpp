/****************************************************************************
** Meta object code from reading C++ file 'widget_Management.h'
**
** Created: Tue Apr 19 09:28:12 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget_Management.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_Management.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MyCameraPoButton[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_MyCameraPoButton[] = {
    "MyCameraPoButton\0"
};

void MyCameraPoButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MyCameraPoButton::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MyCameraPoButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_MyCameraPoButton,
      qt_meta_data_MyCameraPoButton, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MyCameraPoButton::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MyCameraPoButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MyCameraPoButton::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MyCameraPoButton))
        return static_cast<void*>(const_cast< MyCameraPoButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int MyCameraPoButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_WidgetManagement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   17,   17,   17, 0x0a,
      66,   58,   17,   17, 0x08,
      93,   17,   17,   17, 0x08,
     115,  105,   17,   17, 0x08,
     132,   17,   17,   17, 0x28,
     145,   17,   17,   17, 0x08,
     160,   17,   17,   17, 0x08,
     175,   17,   17,   17, 0x08,
     190,   17,   17,   17, 0x08,
     205,   17,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_WidgetManagement[] = {
    "WidgetManagement\0\0signals_clearTable()\0"
    "slots_intoWidget()\0row,col\0"
    "slots_cellClicked(int,int)\0slots_new()\0"
    "bCurModel\0slots_load(bool)\0slots_load()\0"
    "slots_backup()\0slots_delete()\0"
    "slots_export()\0slots_import()\0"
    "slots_action_selectImage()\0"
};

void WidgetManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetManagement *_t = static_cast<WidgetManagement *>(_o);
        switch (_id) {
        case 0: _t->signals_clearTable(); break;
        case 1: _t->slots_intoWidget(); break;
        case 2: _t->slots_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->slots_new(); break;
        case 4: _t->slots_load((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slots_load(); break;
        case 6: _t->slots_backup(); break;
        case 7: _t->slots_delete(); break;
        case 8: _t->slots_export(); break;
        case 9: _t->slots_import(); break;
        case 10: _t->slots_action_selectImage(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WidgetManagement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WidgetManagement::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetManagement,
      qt_meta_data_WidgetManagement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetManagement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetManagement))
        return static_cast<void*>(const_cast< WidgetManagement*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void WidgetManagement::signals_clearTable()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
