/****************************************************************************
** Meta object code from reading C++ file 'EquipRuntime.h'
**
** Created: Mon Mar 28 10:09:47 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EquipRuntime.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EquipRuntime.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EquipRuntime[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      37,   13,   13,   13, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_EquipRuntime[] = {
    "EquipRuntime\0\0,\0SendAlarms(int,bool)\0"
    "Slots_timer()\0"
};

void EquipRuntime::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EquipRuntime *_t = static_cast<EquipRuntime *>(_o);
        switch (_id) {
        case 0: _t->SendAlarms((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 1: _t->Slots_timer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData EquipRuntime::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject EquipRuntime::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_EquipRuntime,
      qt_meta_data_EquipRuntime, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EquipRuntime::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EquipRuntime::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EquipRuntime::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EquipRuntime))
        return static_cast<void*>(const_cast< EquipRuntime*>(this));
    return QObject::qt_metacast(_clname);
}

int EquipRuntime::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EquipRuntime::SendAlarms(int _t1, bool _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
