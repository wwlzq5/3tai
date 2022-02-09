/****************************************************************************
** Meta object code from reading C++ file 'glasswaredetectsystem.h'
**
** Created: Tue Feb 8 17:47:30 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../glasswaredetectsystem.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glasswaredetectsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GlasswareDetectSystem[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x05,
      54,   22,   22,   22, 0x05,
      79,   22,   22,   22, 0x05,
      95,   22,   22,   22, 0x05,
     120,   22,   22,   22, 0x05,

 // slots: signature, parameters, type, tag, flags
     162,  143,   22,   22, 0x0a,
     199,  186,   22,   22, 0x2a,
     226,  219,   22,   22, 0x0a,
     267,   22,   22,   22, 0x0a,
     292,  285,   22,   22, 0x0a,
     311,   22,   22,   22, 0x2a,
     326,   22,   22,   22, 0x0a,
     363,  352,   22,   22, 0x0a,
     401,  396,   22,   22, 0x2a,
     440,  430,   22,   22, 0x0a,
     476,  471,   22,   22, 0x0a,
     502,   22,   22,   22, 0x0a,
     522,   22,   22,   22, 0x0a,
     538,   22,   22,   22, 0x0a,
     556,   22,   22,   22, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GlasswareDetectSystem[] = {
    "GlasswareDetectSystem\0\0"
    "signals_intoManagementWidget()\0"
    "signals_intoTestWidget()\0signals_clear()\0"
    "signals_HideWarning(int)\0"
    "signals_ConnectSever()\0current_page,iPara\0"
    "slots_turnPage(int,int)\0current_page\0"
    "slots_turnPage(int)\0msgbox\0"
    "slots_MessageBoxMainThread(s_MSGBoxInfo)\0"
    "slots_OnBtnStar()\0ifyanz\0slots_OnExit(bool)\0"
    "slots_OnExit()\0slots_UpdateCoderNumber()\0"
    "nCam,nMode\0slots_updateCameraState(int,int)\0"
    "nCam\0slots_updateCameraState(int)\0"
    "nCam,mode\0slots_SetCameraStatus(int,int)\0"
    "path\0directoryChanged(QString)\0"
    "onServerDataReady()\0onAginConnect()\0"
    "slot_SockScreen()\0slots_loginState(int)\0"
};

void GlasswareDetectSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GlasswareDetectSystem *_t = static_cast<GlasswareDetectSystem *>(_o);
        switch (_id) {
        case 0: _t->signals_intoManagementWidget(); break;
        case 1: _t->signals_intoTestWidget(); break;
        case 2: _t->signals_clear(); break;
        case 3: _t->signals_HideWarning((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->signals_ConnectSever(); break;
        case 5: _t->slots_turnPage((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->slots_turnPage((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->slots_MessageBoxMainThread((*reinterpret_cast< s_MSGBoxInfo(*)>(_a[1]))); break;
        case 8: _t->slots_OnBtnStar(); break;
        case 9: _t->slots_OnExit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->slots_OnExit(); break;
        case 11: _t->slots_UpdateCoderNumber(); break;
        case 12: _t->slots_updateCameraState((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 13: _t->slots_updateCameraState((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->slots_SetCameraStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->directoryChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 16: _t->onServerDataReady(); break;
        case 17: _t->onAginConnect(); break;
        case 18: _t->slot_SockScreen(); break;
        case 19: _t->slots_loginState((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData GlasswareDetectSystem::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GlasswareDetectSystem::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GlasswareDetectSystem,
      qt_meta_data_GlasswareDetectSystem, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GlasswareDetectSystem::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GlasswareDetectSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GlasswareDetectSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GlasswareDetectSystem))
        return static_cast<void*>(const_cast< GlasswareDetectSystem*>(this));
    return QDialog::qt_metacast(_clname);
}

int GlasswareDetectSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void GlasswareDetectSystem::signals_intoManagementWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GlasswareDetectSystem::signals_intoTestWidget()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void GlasswareDetectSystem::signals_clear()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void GlasswareDetectSystem::signals_HideWarning(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GlasswareDetectSystem::signals_ConnectSever()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
