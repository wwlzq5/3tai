/****************************************************************************
** Meta object code from reading C++ file 'widget_plc.h'
**
** Created: Mon Apr 18 13:52:02 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget_plc.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_plc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Widget_PLC[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   11,   11,   11, 0x0a,
      58,   11,   11,   11, 0x0a,
      81,   11,   11,   11, 0x0a,
     104,   11,   11,   11, 0x0a,
     127,   11,   11,   11, 0x0a,
     147,   11,   11,   11, 0x0a,
     163,   11,   11,   11, 0x0a,
     184,   11,   11,   11, 0x0a,
     204,   11,   11,   11, 0x0a,
     223,   11,   11,   11, 0x0a,
     242,   11,   11,   11, 0x0a,
     261,   11,   11,   11, 0x0a,
     282,   11,   11,   11, 0x0a,
     301,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Widget_PLC[] = {
    "Widget_PLC\0\0signal_updatePLCInfo(WORD)\0"
    "slots_intoWidget()\0slots_Pushbuttonsure()\0"
    "slots_Pushbuttonsave()\0slots_Pushbuttonread()\0"
    "slots_readFromPLC()\0slots_TimeOut()\0"
    "slots_CrashTimeOut()\0slots_clickBox(int)\0"
    "slots_modify1(int)\0slots_modify2(int)\0"
    "slots_modify3(int)\0slots_AutoAlert(int)\0"
    "slots_showPamSet()\0slots_HidePicture()\0"
};

void Widget_PLC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget_PLC *_t = static_cast<Widget_PLC *>(_o);
        switch (_id) {
        case 0: _t->signal_updatePLCInfo((*reinterpret_cast< WORD(*)>(_a[1]))); break;
        case 1: _t->slots_intoWidget(); break;
        case 2: _t->slots_Pushbuttonsure(); break;
        case 3: _t->slots_Pushbuttonsave(); break;
        case 4: _t->slots_Pushbuttonread(); break;
        case 5: _t->slots_readFromPLC(); break;
        case 6: _t->slots_TimeOut(); break;
        case 7: _t->slots_CrashTimeOut(); break;
        case 8: _t->slots_clickBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slots_modify1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slots_modify2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->slots_modify3((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->slots_AutoAlert((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->slots_showPamSet(); break;
        case 14: _t->slots_HidePicture(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Widget_PLC::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Widget_PLC::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget_PLC,
      qt_meta_data_Widget_PLC, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Widget_PLC::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Widget_PLC::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Widget_PLC::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Widget_PLC))
        return static_cast<void*>(const_cast< Widget_PLC*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget_PLC::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Widget_PLC::signal_updatePLCInfo(WORD _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
