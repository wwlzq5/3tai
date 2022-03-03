/****************************************************************************
** Meta object code from reading C++ file 'widget_plc.h'
**
** Created: Wed Mar 2 15:10:24 2022
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
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      35,   11,   11,   11, 0x0a,
      58,   11,   11,   11, 0x0a,
      81,   11,   11,   11, 0x0a,
     101,   11,   11,   11, 0x0a,
     117,   11,   11,   11, 0x0a,
     138,   11,   11,   11, 0x0a,
     158,   11,   11,   11, 0x0a,
     177,   11,   11,   11, 0x0a,
     196,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Widget_PLC[] = {
    "Widget_PLC\0\0slots_Pushbuttonsure()\0"
    "slots_Pushbuttonsave()\0slots_Pushbuttonread()\0"
    "slots_readFromPLC()\0slots_TimeOut()\0"
    "slots_CrashTimeOut()\0slots_clickBox(int)\0"
    "slots_modify1(int)\0slots_modify2(int)\0"
    "slots_modify3(int)\0"
};

void Widget_PLC::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Widget_PLC *_t = static_cast<Widget_PLC *>(_o);
        switch (_id) {
        case 0: _t->slots_Pushbuttonsure(); break;
        case 1: _t->slots_Pushbuttonsave(); break;
        case 2: _t->slots_Pushbuttonread(); break;
        case 3: _t->slots_readFromPLC(); break;
        case 4: _t->slots_TimeOut(); break;
        case 5: _t->slots_CrashTimeOut(); break;
        case 6: _t->slots_clickBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slots_modify1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->slots_modify2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->slots_modify3((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
