/****************************************************************************
** Meta object code from reading C++ file 'LightSource.h'
**
** Created: Thu Mar 31 09:50:30 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LightSource.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LightSource.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LightSource[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      36,   12,   12,   12, 0x0a,
      59,   12,   12,   12, 0x0a,
      83,   12,   12,   12, 0x0a,
      96,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_LightSource[] = {
    "LightSource\0\0slots_clickAccont(int)\0"
    "slot_radioButton(bool)\0slot_setPushbotton(int)\0"
    "slot_login()\0slot_cancel()\0"
};

void LightSource::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LightSource *_t = static_cast<LightSource *>(_o);
        switch (_id) {
        case 0: _t->slots_clickAccont((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->slot_radioButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->slot_setPushbotton((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->slot_login(); break;
        case 4: _t->slot_cancel(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LightSource::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LightSource::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LightSource,
      qt_meta_data_LightSource, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LightSource::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LightSource::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LightSource::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LightSource))
        return static_cast<void*>(const_cast< LightSource*>(this));
    return QWidget::qt_metacast(_clname);
}

int LightSource::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
