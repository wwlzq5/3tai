/****************************************************************************
** Meta object code from reading C++ file 'widget_test.h'
**
** Created: Thu Mar 31 09:50:29 2022
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../widget_test.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget_test.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WidgetTest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      36,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      46,   12,   11,   11, 0x05,
      84,   11,   11,   11, 0x05,
     132,  108,   11,   11, 0x05,
     165,  163,   11,   11, 0x05,
     198,   11,   11,   11, 0x05,
     220,  163,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     245,   11,   11,   11, 0x0a,
     265,   11,   11,   11, 0x0a,
     283,  163,   11,   11, 0x0a,
     307,   11,   11,   11, 0x0a,
     325,   11,   11,   11, 0x0a,
     343,   11,   11,   11, 0x0a,
     362,   11,   11,   11, 0x0a,
     382,   11,   11,   11, 0x0a,
     405,   11,   11,   11, 0x0a,
     420,   11,   11,   11, 0x0a,
     449,   11,   11,   11, 0x0a,
     470,  464,   11,   11, 0x0a,
     503,  497,   11,   11, 0x0a,
     530,   11,   11,   11, 0x0a,
     548,   11,   11,   11, 0x0a,
     566,   11,   11,   11, 0x0a,
     584,   11,   11,   11, 0x0a,
     601,   11,   11,   11, 0x0a,
     624,   11,   11,   11, 0x0a,
     648,   11,   11,   11, 0x0a,
     674,   11,   11,   11, 0x0a,
     701,   11,   11,   11, 0x0a,
     729,   11,   11,   11, 0x0a,
     754,   11,   11,   11, 0x0a,
     777,   11,   11,   11, 0x0a,
     802,   11,   11,   11, 0x0a,
     833,   11,   11,   11, 0x0a,
     867,   11,   11,   11, 0x0a,
     890,   11,   11,   11, 0x0a,
     914,  163,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WidgetTest[] = {
    "WidgetTest\0\0iStatisMode,iMinute,iStatisNumber\0"
    "signals_changeStatisMode(int,int,int)\0"
    "signals_ReadDistance1()\0warningType,warningInfo\0"
    "signals_sendAlarm(int,QString)\0,\0"
    "signals_ShowWarning(int,QString)\0"
    "signal_UsualSend(int)\0signal_ioSetPam(int,int)\0"
    "slot_ConnectSever()\0slot_readIoCard()\0"
    "slots_IoSetPam(int,int)\0slots_IoOpenPam()\0"
    "slot_openPlcSet()\0slots_intoWidget()\0"
    "slots_ChoseCamera()\0slots_ChoseErrorType()\0"
    "slots_OKSave()\0slots_OKCameraSurveillance()\0"
    "slots_Cancel()\0iMode\0slots_KickModeChanged(int)\0"
    "index\0slots_SaveModeChanged(int)\0"
    "slots_readDelay()\0slots_setToCard()\0"
    "slots_setToFile()\0slots_advance1()\0"
    "slots_choseAllCamera()\0slots_choseNoneCamera()\0"
    "slots_choseAllErrorType()\0"
    "slots_choseNoneErrorType()\0"
    "slots_updateIOcardCounter()\0"
    "slots_ifCheckShowImage()\0"
    "slots_CameraOffAreet()\0SetCameraMonitorStatus()\0"
    "slots_EquipAlarmCheckBox(bool)\0"
    "slots_EquipAlarmInfoShowbtn(bool)\0"
    "slots_EquipAlarmSave()\0slots_EquipAlarmClear()\0"
    "slots_SetEquipAlarmSatus(int,bool)\0"
};

void WidgetTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WidgetTest *_t = static_cast<WidgetTest *>(_o);
        switch (_id) {
        case 0: _t->signals_changeStatisMode((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->signals_ReadDistance1(); break;
        case 2: _t->signals_sendAlarm((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->signals_ShowWarning((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->signal_UsualSend((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->signal_ioSetPam((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->slot_ConnectSever(); break;
        case 7: _t->slot_readIoCard(); break;
        case 8: _t->slots_IoSetPam((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->slots_IoOpenPam(); break;
        case 10: _t->slot_openPlcSet(); break;
        case 11: _t->slots_intoWidget(); break;
        case 12: _t->slots_ChoseCamera(); break;
        case 13: _t->slots_ChoseErrorType(); break;
        case 14: _t->slots_OKSave(); break;
        case 15: _t->slots_OKCameraSurveillance(); break;
        case 16: _t->slots_Cancel(); break;
        case 17: _t->slots_KickModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->slots_SaveModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slots_readDelay(); break;
        case 20: _t->slots_setToCard(); break;
        case 21: _t->slots_setToFile(); break;
        case 22: _t->slots_advance1(); break;
        case 23: _t->slots_choseAllCamera(); break;
        case 24: _t->slots_choseNoneCamera(); break;
        case 25: _t->slots_choseAllErrorType(); break;
        case 26: _t->slots_choseNoneErrorType(); break;
        case 27: _t->slots_updateIOcardCounter(); break;
        case 28: _t->slots_ifCheckShowImage(); break;
        case 29: _t->slots_CameraOffAreet(); break;
        case 30: _t->SetCameraMonitorStatus(); break;
        case 31: _t->slots_EquipAlarmCheckBox((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->slots_EquipAlarmInfoShowbtn((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->slots_EquipAlarmSave(); break;
        case 34: _t->slots_EquipAlarmClear(); break;
        case 35: _t->slots_SetEquipAlarmSatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WidgetTest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WidgetTest::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WidgetTest,
      qt_meta_data_WidgetTest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WidgetTest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WidgetTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WidgetTest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetTest))
        return static_cast<void*>(const_cast< WidgetTest*>(this));
    return QWidget::qt_metacast(_clname);
}

int WidgetTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 36)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 36;
    }
    return _id;
}

// SIGNAL 0
void WidgetTest::signals_changeStatisMode(int _t1, int _t2, int _t3)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WidgetTest::signals_ReadDistance1()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WidgetTest::signals_sendAlarm(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WidgetTest::signals_ShowWarning(int _t1, QString _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WidgetTest::signal_UsualSend(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WidgetTest::signal_ioSetPam(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
