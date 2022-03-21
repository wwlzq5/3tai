#ifndef WIDGET_PLC_H
#define WIDGET_PLC_H
#include <QWidget>
#include <QTimer>
#include "ui_Widget_plc.h"
#include <QtNetwork/QUdpSocket> 
#include <windows.h>
#include <QDebug>
#include <QVector>
#include <QCheckBox>
class Widget_PLC : public QWidget
{
	Q_OBJECT

public:
	Widget_PLC(QWidget *parent,int);
	~Widget_PLC();
public slots:
	void slots_Pushbuttonsure();
	void slots_Pushbuttonsave();
	void slots_Pushbuttonread();
	void slots_readFromPLC();
	void slots_TimeOut();
	void slots_CrashTimeOut();
	void slots_clickBox(int);
	void slots_modify1(int);
	void slots_modify2(int);
	void slots_modify3(int);
	void slots_AutoAlert(int);
public:
	void EnterPLC();
public:
	Ui::widget_plc ui;
public:
	template<typename T>
	void DataToByte(T& xx, QByteArray& st);
	template<typename T>
	void ByteToData(QByteArray& st, int nStart, int nEnd,T&);
	int SendMessage(int,QByteArray&,int,int,int);//��ȡд�����ݣ���Ҫ������ȡ���ݳ���
	void SendDataToPLCHead(int nAddr, QByteArray& st, int state,int id,int DataSize);
	void SendCustomAlert(int,int);
public:
	QUdpSocket* m_pSocket;
	QTimer* m_zTimer;
	QTimer* m_CrashTimer;
	int nErrorType;
	int nErrorCameraID;
	int nSystemType;
	QWidget * nAlertSet;
	QList<QCheckBox*> nlistCheckBox;
	QList<QCheckBox*> nCustomAlert;
	int* nAlertDataList;
	int* nCustomList;
};

#endif // WIDGET_PLC_H
