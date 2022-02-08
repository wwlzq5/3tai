/********************************************************************************
** Form generated from reading UI file 'widget_test.ui'
**
** Created: Tue Jan 25 10:01:46 2022
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_TEST_H
#define UI_WIDGET_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "dhbasewidget.h"

QT_BEGIN_NAMESPACE

class Ui_WidgetTest
{
public:
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_14;
    DHBaseWidget *widget_LoginHoldTime;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *namelayout_LoginHoldTime;
    QHBoxLayout *horizontalLayout_18;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_11;
    DHBaseWidget *widget_CameraSurveillance;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_27;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_28;
    QCheckBox *checkBox_CameraOffLine;
    QLabel *label_MissNumber;
    QSpinBox *spinBox_OffLineNumber;
    QHBoxLayout *horizontalLayout_30;
    QCheckBox *checkBox_CameraContinueReject;
    QLabel *label_rejectNumber;
    QSpinBox *spinBox_RejectNo;
    QWidget *widget_StatisErrorType_4;
    QGridLayout *gridLayout_25;
    QGridLayout *layoutStatisErrorType_4;
    QHBoxLayout *horizontalLayout_31;
    QSpacerItem *horizontalSpacer_15;
    QLabel *CameraMonitor_Status;
    QPushButton *btnOK_CameraSurveillance;
    QSpacerItem *horizontalSpacer_16;
    DHBaseWidget *widget_EquipAlarm;
    QVBoxLayout *verticalLayout_17;
    QVBoxLayout *namelayout_CameraSurveillance;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_23;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *checkBox_EquipAlarm;
    QPushButton *ShowAlarmSet_btn;
    QTableWidget *tableWidget_EquipAlarm;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout_EquipAlarm;
    QPushButton *btn_ClearAlarm;
    QPushButton *btnOk_EquipAlarm;
    QSpacerItem *horizontalSpacer_9;
    DHBaseWidget *widget_saveImageSet;
    QVBoxLayout *verticalLayout_16;
    QHBoxLayout *horizontalLayout_16;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *namelayout_saveImage;
    QCheckBox *checkBox_saveFailureNormalImage;
    QCheckBox *checkBox_saveFailureStressImage;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_Mode;
    QComboBox *comboBox_SaveMode;
    QLabel *label_Number;
    QSpinBox *spinBox_Number;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *btnChoseCamera;
    QPushButton *btnChoseErrorType;
    QGroupBox *groupBox_ChoseCamera;
    QGridLayout *gridLayout_8;
    QGridLayout *layoutChoseCamera;
    QPushButton *pushButton_choseAllCamera;
    QPushButton *pushButton_choseNoneCamera;
    QGroupBox *groupBox_ChoseErrorType;
    QGridLayout *gridLayout_14;
    QVBoxLayout *layoutChoseErrorType;
    QPushButton *pushButton_choseAllErrorType;
    QPushButton *pushButton_choseNoneErrorType;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnOK_Save;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *layoutSample;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_4;
    DHBaseWidget *widget_IOCardSet;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *widget_IOCounter;
    QGridLayout *gridLayout_15;
    QLineEdit *Distance1to4;
    QLabel *label_6;
    QLabel *label_9;
    QLabel *label_IN1;
    QLabel *label_7;
    QLabel *label_OUT1;
    QLineEdit *lineDelay;
    QLabel *label_IN0;
    QLabel *label_OUT5;
    QLabel *label_OUT6;
    QLineEdit *KickDelay;
    QLineEdit *Delay6;
    QLabel *label_11;
    QLineEdit *Delay4;
    QLabel *label_OUT0;
    QLabel *label_frequency;
    QLabel *label_OUT4;
    QLabel *label_IN2;
    QLabel *label_20;
    QLabel *label_5;
    QLineEdit *Delay1;
    QLabel *label_OUT3;
    QLabel *label_OUT7;
    QLabel *label_OUT2;
    QLabel *label_IN3;
    QLineEdit *KickWidth;
    QLineEdit *Delay3;
    QPushButton *read;
    QPushButton *pushButton_set;
    QLineEdit *Delay2;
    QRadioButton *radioButton_normal;
    QPushButton *pushButton;
    QLineEdit *Delay5;
    QRadioButton *radioButton_bad;
    QLabel *label_24;
    QLabel *label_10;
    QLabel *label_15;
    QPushButton *settofile;
    QPushButton *advance1;
    QLabel *label_3;
    QLabel *label_8;
    QPushButton *settocard;
    QLabel *label_19;
    QRadioButton *radioButton_good;
    QGridLayout *gridLayout;
    QWidget *widget_splc;
    QGridLayout *gridLayout_2;

    void setupUi(QWidget *WidgetTest)
    {
        if (WidgetTest->objectName().isEmpty())
            WidgetTest->setObjectName(QString::fromUtf8("WidgetTest"));
        WidgetTest->resize(1334, 879);
        WidgetTest->setMinimumSize(QSize(0, 10));
        QFont font;
        font.setPointSize(15);
        WidgetTest->setFont(font);
        WidgetTest->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(WidgetTest);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, -1, -1, -1);
        scrollArea = new QScrollArea(WidgetTest);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy);
        scrollArea->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(-355, -180, 1646, 1014));
        horizontalLayout_2 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        widget_LoginHoldTime = new DHBaseWidget(scrollAreaWidgetContents);
        widget_LoginHoldTime->setObjectName(QString::fromUtf8("widget_LoginHoldTime"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_LoginHoldTime->sizePolicy().hasHeightForWidth());
        widget_LoginHoldTime->setSizePolicy(sizePolicy1);
        verticalLayout_13 = new QVBoxLayout(widget_LoginHoldTime);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(-1, 0, -1, -1);
        namelayout_LoginHoldTime = new QVBoxLayout();
        namelayout_LoginHoldTime->setObjectName(QString::fromUtf8("namelayout_LoginHoldTime"));

        verticalLayout_13->addLayout(namelayout_LoginHoldTime);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        comboBox = new QComboBox(widget_LoginHoldTime);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_18->addWidget(comboBox);

        pushButton_2 = new QPushButton(widget_LoginHoldTime);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_18->addWidget(pushButton_2);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_11);


        verticalLayout_13->addLayout(horizontalLayout_18);


        verticalLayout_14->addWidget(widget_LoginHoldTime);

        widget_CameraSurveillance = new DHBaseWidget(scrollAreaWidgetContents);
        widget_CameraSurveillance->setObjectName(QString::fromUtf8("widget_CameraSurveillance"));
        sizePolicy1.setHeightForWidth(widget_CameraSurveillance->sizePolicy().hasHeightForWidth());
        widget_CameraSurveillance->setSizePolicy(sizePolicy1);
        verticalLayout_18 = new QVBoxLayout(widget_CameraSurveillance);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        verticalLayout_18->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        checkBox_CameraOffLine = new QCheckBox(widget_CameraSurveillance);
        checkBox_CameraOffLine->setObjectName(QString::fromUtf8("checkBox_CameraOffLine"));
        sizePolicy.setHeightForWidth(checkBox_CameraOffLine->sizePolicy().hasHeightForWidth());
        checkBox_CameraOffLine->setSizePolicy(sizePolicy);

        horizontalLayout_28->addWidget(checkBox_CameraOffLine);

        label_MissNumber = new QLabel(widget_CameraSurveillance);
        label_MissNumber->setObjectName(QString::fromUtf8("label_MissNumber"));
        label_MissNumber->setMinimumSize(QSize(15, 0));
        label_MissNumber->setMaximumSize(QSize(150, 16777215));
        label_MissNumber->setFont(font);
        label_MissNumber->setMouseTracking(false);
        label_MissNumber->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_28->addWidget(label_MissNumber);

        spinBox_OffLineNumber = new QSpinBox(widget_CameraSurveillance);
        spinBox_OffLineNumber->setObjectName(QString::fromUtf8("spinBox_OffLineNumber"));
        spinBox_OffLineNumber->setMinimumSize(QSize(100, 0));
        spinBox_OffLineNumber->setMaximumSize(QSize(100, 16777215));
        spinBox_OffLineNumber->setFont(font);
        spinBox_OffLineNumber->setMinimum(1);
        spinBox_OffLineNumber->setMaximum(999);
        spinBox_OffLineNumber->setValue(10);

        horizontalLayout_28->addWidget(spinBox_OffLineNumber);


        verticalLayout_19->addLayout(horizontalLayout_28);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        checkBox_CameraContinueReject = new QCheckBox(widget_CameraSurveillance);
        checkBox_CameraContinueReject->setObjectName(QString::fromUtf8("checkBox_CameraContinueReject"));

        horizontalLayout_30->addWidget(checkBox_CameraContinueReject);

        label_rejectNumber = new QLabel(widget_CameraSurveillance);
        label_rejectNumber->setObjectName(QString::fromUtf8("label_rejectNumber"));
        label_rejectNumber->setMinimumSize(QSize(150, 0));
        label_rejectNumber->setMaximumSize(QSize(150, 16777215));
        label_rejectNumber->setFont(font);

        horizontalLayout_30->addWidget(label_rejectNumber);

        spinBox_RejectNo = new QSpinBox(widget_CameraSurveillance);
        spinBox_RejectNo->setObjectName(QString::fromUtf8("spinBox_RejectNo"));
        spinBox_RejectNo->setMinimumSize(QSize(100, 0));
        spinBox_RejectNo->setMaximumSize(QSize(100, 16777215));
        spinBox_RejectNo->setFont(font);
        spinBox_RejectNo->setMinimum(1);
        spinBox_RejectNo->setMaximum(999);
        spinBox_RejectNo->setValue(10);

        horizontalLayout_30->addWidget(spinBox_RejectNo);


        verticalLayout_19->addLayout(horizontalLayout_30);

        widget_StatisErrorType_4 = new QWidget(widget_CameraSurveillance);
        widget_StatisErrorType_4->setObjectName(QString::fromUtf8("widget_StatisErrorType_4"));
        widget_StatisErrorType_4->setMinimumSize(QSize(0, 0));
        gridLayout_25 = new QGridLayout(widget_StatisErrorType_4);
        gridLayout_25->setContentsMargins(2, 2, 2, 2);
        gridLayout_25->setObjectName(QString::fromUtf8("gridLayout_25"));
        layoutStatisErrorType_4 = new QGridLayout();
        layoutStatisErrorType_4->setObjectName(QString::fromUtf8("layoutStatisErrorType_4"));

        gridLayout_25->addLayout(layoutStatisErrorType_4, 0, 0, 1, 1);


        verticalLayout_19->addWidget(widget_StatisErrorType_4);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_31->addItem(horizontalSpacer_15);

        CameraMonitor_Status = new QLabel(widget_CameraSurveillance);
        CameraMonitor_Status->setObjectName(QString::fromUtf8("CameraMonitor_Status"));

        horizontalLayout_31->addWidget(CameraMonitor_Status);

        btnOK_CameraSurveillance = new QPushButton(widget_CameraSurveillance);
        btnOK_CameraSurveillance->setObjectName(QString::fromUtf8("btnOK_CameraSurveillance"));
        btnOK_CameraSurveillance->setMinimumSize(QSize(100, 0));

        horizontalLayout_31->addWidget(btnOK_CameraSurveillance);


        verticalLayout_19->addLayout(horizontalLayout_31);


        horizontalLayout_27->addLayout(verticalLayout_19);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_16);


        verticalLayout_18->addLayout(horizontalLayout_27);


        verticalLayout_14->addWidget(widget_CameraSurveillance);

        widget_EquipAlarm = new DHBaseWidget(scrollAreaWidgetContents);
        widget_EquipAlarm->setObjectName(QString::fromUtf8("widget_EquipAlarm"));
        widget_EquipAlarm->setMinimumSize(QSize(0, 0));
        verticalLayout_17 = new QVBoxLayout(widget_EquipAlarm);
        verticalLayout_17->setSpacing(0);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        verticalLayout_17->setContentsMargins(0, 25, 0, 0);
        namelayout_CameraSurveillance = new QVBoxLayout();
        namelayout_CameraSurveillance->setObjectName(QString::fromUtf8("namelayout_CameraSurveillance"));

        verticalLayout_17->addLayout(namelayout_CameraSurveillance);

        widget_2 = new QWidget(widget_EquipAlarm);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_23 = new QHBoxLayout(widget_2);
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        checkBox_EquipAlarm = new QCheckBox(widget_2);
        checkBox_EquipAlarm->setObjectName(QString::fromUtf8("checkBox_EquipAlarm"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkBox_EquipAlarm->sizePolicy().hasHeightForWidth());
        checkBox_EquipAlarm->setSizePolicy(sizePolicy2);

        horizontalLayout_19->addWidget(checkBox_EquipAlarm);

        ShowAlarmSet_btn = new QPushButton(widget_2);
        ShowAlarmSet_btn->setObjectName(QString::fromUtf8("ShowAlarmSet_btn"));
        ShowAlarmSet_btn->setCheckable(true);

        horizontalLayout_19->addWidget(ShowAlarmSet_btn);


        verticalLayout_20->addLayout(horizontalLayout_19);

        tableWidget_EquipAlarm = new QTableWidget(widget_2);
        if (tableWidget_EquipAlarm->columnCount() < 3)
            tableWidget_EquipAlarm->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_EquipAlarm->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_EquipAlarm->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_EquipAlarm->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget_EquipAlarm->rowCount() < 20)
            tableWidget_EquipAlarm->setRowCount(20);
        tableWidget_EquipAlarm->setObjectName(QString::fromUtf8("tableWidget_EquipAlarm"));
        tableWidget_EquipAlarm->setMinimumSize(QSize(650, 150));
        tableWidget_EquipAlarm->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"background:#FFFFFF;\n"
"}\n"
""));
        tableWidget_EquipAlarm->setRowCount(20);
        tableWidget_EquipAlarm->horizontalHeader()->setDefaultSectionSize(100);

        verticalLayout_20->addWidget(tableWidget_EquipAlarm);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(20);
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_20->addItem(horizontalSpacer);

        gridLayout_EquipAlarm = new QGridLayout();
        gridLayout_EquipAlarm->setObjectName(QString::fromUtf8("gridLayout_EquipAlarm"));
        gridLayout_EquipAlarm->setHorizontalSpacing(3);
        gridLayout_EquipAlarm->setVerticalSpacing(2);

        horizontalLayout_20->addLayout(gridLayout_EquipAlarm);

        btn_ClearAlarm = new QPushButton(widget_2);
        btn_ClearAlarm->setObjectName(QString::fromUtf8("btn_ClearAlarm"));

        horizontalLayout_20->addWidget(btn_ClearAlarm);

        btnOk_EquipAlarm = new QPushButton(widget_2);
        btnOk_EquipAlarm->setObjectName(QString::fromUtf8("btnOk_EquipAlarm"));
        btnOk_EquipAlarm->setMinimumSize(QSize(100, 0));

        horizontalLayout_20->addWidget(btnOk_EquipAlarm);


        verticalLayout_20->addLayout(horizontalLayout_20);


        horizontalLayout_23->addLayout(verticalLayout_20);

        horizontalSpacer_9 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_23->addItem(horizontalSpacer_9);


        verticalLayout_17->addWidget(widget_2);


        verticalLayout_14->addWidget(widget_EquipAlarm);

        widget_saveImageSet = new DHBaseWidget(scrollAreaWidgetContents);
        widget_saveImageSet->setObjectName(QString::fromUtf8("widget_saveImageSet"));
        sizePolicy1.setHeightForWidth(widget_saveImageSet->sizePolicy().hasHeightForWidth());
        widget_saveImageSet->setSizePolicy(sizePolicy1);
        verticalLayout_16 = new QVBoxLayout(widget_saveImageSet);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(-1, 0, -1, -1);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        namelayout_saveImage = new QVBoxLayout();
        namelayout_saveImage->setObjectName(QString::fromUtf8("namelayout_saveImage"));

        verticalLayout->addLayout(namelayout_saveImage);

        checkBox_saveFailureNormalImage = new QCheckBox(widget_saveImageSet);
        checkBox_saveFailureNormalImage->setObjectName(QString::fromUtf8("checkBox_saveFailureNormalImage"));

        verticalLayout->addWidget(checkBox_saveFailureNormalImage);

        checkBox_saveFailureStressImage = new QCheckBox(widget_saveImageSet);
        checkBox_saveFailureStressImage->setObjectName(QString::fromUtf8("checkBox_saveFailureStressImage"));

        verticalLayout->addWidget(checkBox_saveFailureStressImage);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_Mode = new QLabel(widget_saveImageSet);
        label_Mode->setObjectName(QString::fromUtf8("label_Mode"));
        label_Mode->setFont(font);

        horizontalLayout_9->addWidget(label_Mode);

        comboBox_SaveMode = new QComboBox(widget_saveImageSet);
        comboBox_SaveMode->setObjectName(QString::fromUtf8("comboBox_SaveMode"));

        horizontalLayout_9->addWidget(comboBox_SaveMode);

        label_Number = new QLabel(widget_saveImageSet);
        label_Number->setObjectName(QString::fromUtf8("label_Number"));
        label_Number->setFont(font);

        horizontalLayout_9->addWidget(label_Number);

        spinBox_Number = new QSpinBox(widget_saveImageSet);
        spinBox_Number->setObjectName(QString::fromUtf8("spinBox_Number"));
        spinBox_Number->setFont(font);
        spinBox_Number->setMinimum(-1);
        spinBox_Number->setMaximum(999);

        horizontalLayout_9->addWidget(spinBox_Number);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        btnChoseCamera = new QPushButton(widget_saveImageSet);
        btnChoseCamera->setObjectName(QString::fromUtf8("btnChoseCamera"));

        horizontalLayout_14->addWidget(btnChoseCamera);

        btnChoseErrorType = new QPushButton(widget_saveImageSet);
        btnChoseErrorType->setObjectName(QString::fromUtf8("btnChoseErrorType"));

        horizontalLayout_14->addWidget(btnChoseErrorType);


        verticalLayout->addLayout(horizontalLayout_14);


        verticalLayout_15->addLayout(verticalLayout);

        groupBox_ChoseCamera = new QGroupBox(widget_saveImageSet);
        groupBox_ChoseCamera->setObjectName(QString::fromUtf8("groupBox_ChoseCamera"));
        gridLayout_8 = new QGridLayout(groupBox_ChoseCamera);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        layoutChoseCamera = new QGridLayout();
        layoutChoseCamera->setObjectName(QString::fromUtf8("layoutChoseCamera"));

        gridLayout_8->addLayout(layoutChoseCamera, 0, 0, 1, 2);

        pushButton_choseAllCamera = new QPushButton(groupBox_ChoseCamera);
        pushButton_choseAllCamera->setObjectName(QString::fromUtf8("pushButton_choseAllCamera"));

        gridLayout_8->addWidget(pushButton_choseAllCamera, 1, 0, 1, 1);

        pushButton_choseNoneCamera = new QPushButton(groupBox_ChoseCamera);
        pushButton_choseNoneCamera->setObjectName(QString::fromUtf8("pushButton_choseNoneCamera"));

        gridLayout_8->addWidget(pushButton_choseNoneCamera, 1, 1, 1, 1);


        verticalLayout_15->addWidget(groupBox_ChoseCamera);

        groupBox_ChoseErrorType = new QGroupBox(widget_saveImageSet);
        groupBox_ChoseErrorType->setObjectName(QString::fromUtf8("groupBox_ChoseErrorType"));
        gridLayout_14 = new QGridLayout(groupBox_ChoseErrorType);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        layoutChoseErrorType = new QVBoxLayout();
        layoutChoseErrorType->setObjectName(QString::fromUtf8("layoutChoseErrorType"));

        gridLayout_14->addLayout(layoutChoseErrorType, 0, 0, 1, 2);

        pushButton_choseAllErrorType = new QPushButton(groupBox_ChoseErrorType);
        pushButton_choseAllErrorType->setObjectName(QString::fromUtf8("pushButton_choseAllErrorType"));

        gridLayout_14->addWidget(pushButton_choseAllErrorType, 1, 0, 1, 1);

        pushButton_choseNoneErrorType = new QPushButton(groupBox_ChoseErrorType);
        pushButton_choseNoneErrorType->setObjectName(QString::fromUtf8("pushButton_choseNoneErrorType"));

        gridLayout_14->addWidget(pushButton_choseNoneErrorType, 1, 1, 1, 1);


        verticalLayout_15->addWidget(groupBox_ChoseErrorType);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        btnOK_Save = new QPushButton(widget_saveImageSet);
        btnOK_Save->setObjectName(QString::fromUtf8("btnOK_Save"));
        btnOK_Save->setMinimumSize(QSize(100, 0));

        horizontalLayout_5->addWidget(btnOK_Save);


        verticalLayout_15->addLayout(horizontalLayout_5);


        horizontalLayout_16->addLayout(verticalLayout_15);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_5);


        verticalLayout_16->addLayout(horizontalLayout_16);


        verticalLayout_14->addWidget(widget_saveImageSet);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        layoutSample = new QVBoxLayout();
        layoutSample->setObjectName(QString::fromUtf8("layoutSample"));

        verticalLayout_7->addLayout(layoutSample);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btnOK = new QPushButton(scrollAreaWidgetContents);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(btnOK);

        btnCancel = new QPushButton(scrollAreaWidgetContents);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(btnCancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_7->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);


        verticalLayout_14->addLayout(verticalLayout_7);


        horizontalLayout_2->addLayout(verticalLayout_14);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        widget_IOCardSet = new DHBaseWidget(scrollAreaWidgetContents);
        widget_IOCardSet->setObjectName(QString::fromUtf8("widget_IOCardSet"));
        verticalLayout_11 = new QVBoxLayout(widget_IOCardSet);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(-1, 0, -1, -1);
        widget_IOCounter = new QVBoxLayout();
        widget_IOCounter->setObjectName(QString::fromUtf8("widget_IOCounter"));

        verticalLayout_11->addLayout(widget_IOCounter);

        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        Distance1to4 = new QLineEdit(widget_IOCardSet);
        Distance1to4->setObjectName(QString::fromUtf8("Distance1to4"));
        sizePolicy.setHeightForWidth(Distance1to4->sizePolicy().hasHeightForWidth());
        Distance1to4->setSizePolicy(sizePolicy);
        Distance1to4->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_15->addWidget(Distance1to4, 6, 1, 1, 1);

        label_6 = new QLabel(widget_IOCardSet);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(label_6, 1, 0, 1, 1);

        label_9 = new QLabel(widget_IOCardSet);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_15->addWidget(label_9, 2, 3, 1, 1);

        label_IN1 = new QLabel(widget_IOCardSet);
        label_IN1->setObjectName(QString::fromUtf8("label_IN1"));

        gridLayout_15->addWidget(label_IN1, 10, 1, 1, 1);

        label_7 = new QLabel(widget_IOCardSet);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_15->addWidget(label_7, 1, 3, 1, 1);

        label_OUT1 = new QLabel(widget_IOCardSet);
        label_OUT1->setObjectName(QString::fromUtf8("label_OUT1"));

        gridLayout_15->addWidget(label_OUT1, 11, 1, 1, 1);

        lineDelay = new QLineEdit(widget_IOCardSet);
        lineDelay->setObjectName(QString::fromUtf8("lineDelay"));
        sizePolicy.setHeightForWidth(lineDelay->sizePolicy().hasHeightForWidth());
        lineDelay->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(lineDelay, 7, 1, 1, 1);

        label_IN0 = new QLabel(widget_IOCardSet);
        label_IN0->setObjectName(QString::fromUtf8("label_IN0"));

        gridLayout_15->addWidget(label_IN0, 10, 0, 1, 1);

        label_OUT5 = new QLabel(widget_IOCardSet);
        label_OUT5->setObjectName(QString::fromUtf8("label_OUT5"));

        gridLayout_15->addWidget(label_OUT5, 12, 1, 1, 1);

        label_OUT6 = new QLabel(widget_IOCardSet);
        label_OUT6->setObjectName(QString::fromUtf8("label_OUT6"));

        gridLayout_15->addWidget(label_OUT6, 12, 3, 1, 1);

        KickDelay = new QLineEdit(widget_IOCardSet);
        KickDelay->setObjectName(QString::fromUtf8("KickDelay"));
        sizePolicy.setHeightForWidth(KickDelay->sizePolicy().hasHeightForWidth());
        KickDelay->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(KickDelay, 6, 4, 1, 1);

        Delay6 = new QLineEdit(widget_IOCardSet);
        Delay6->setObjectName(QString::fromUtf8("Delay6"));
        sizePolicy.setHeightForWidth(Delay6->sizePolicy().hasHeightForWidth());
        Delay6->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(Delay6, 3, 4, 1, 1);

        label_11 = new QLabel(widget_IOCardSet);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_15->addWidget(label_11, 3, 3, 1, 1);

        Delay4 = new QLineEdit(widget_IOCardSet);
        Delay4->setObjectName(QString::fromUtf8("Delay4"));
        sizePolicy.setHeightForWidth(Delay4->sizePolicy().hasHeightForWidth());
        Delay4->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(Delay4, 2, 4, 1, 1);

        label_OUT0 = new QLabel(widget_IOCardSet);
        label_OUT0->setObjectName(QString::fromUtf8("label_OUT0"));

        gridLayout_15->addWidget(label_OUT0, 11, 0, 1, 1);

        label_frequency = new QLabel(widget_IOCardSet);
        label_frequency->setObjectName(QString::fromUtf8("label_frequency"));

        gridLayout_15->addWidget(label_frequency, 9, 0, 1, 1);

        label_OUT4 = new QLabel(widget_IOCardSet);
        label_OUT4->setObjectName(QString::fromUtf8("label_OUT4"));

        gridLayout_15->addWidget(label_OUT4, 12, 0, 1, 1);

        label_IN2 = new QLabel(widget_IOCardSet);
        label_IN2->setObjectName(QString::fromUtf8("label_IN2"));

        gridLayout_15->addWidget(label_IN2, 10, 3, 1, 1);

        label_20 = new QLabel(widget_IOCardSet);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_15->addWidget(label_20, 6, 3, 1, 1);

        label_5 = new QLabel(widget_IOCardSet);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_15->addWidget(label_5, 7, 0, 1, 1);

        Delay1 = new QLineEdit(widget_IOCardSet);
        Delay1->setObjectName(QString::fromUtf8("Delay1"));
        sizePolicy.setHeightForWidth(Delay1->sizePolicy().hasHeightForWidth());
        Delay1->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(Delay1, 1, 1, 1, 1);

        label_OUT3 = new QLabel(widget_IOCardSet);
        label_OUT3->setObjectName(QString::fromUtf8("label_OUT3"));

        gridLayout_15->addWidget(label_OUT3, 11, 4, 1, 1);

        label_OUT7 = new QLabel(widget_IOCardSet);
        label_OUT7->setObjectName(QString::fromUtf8("label_OUT7"));

        gridLayout_15->addWidget(label_OUT7, 12, 4, 1, 1);

        label_OUT2 = new QLabel(widget_IOCardSet);
        label_OUT2->setObjectName(QString::fromUtf8("label_OUT2"));

        gridLayout_15->addWidget(label_OUT2, 11, 3, 1, 1);

        label_IN3 = new QLabel(widget_IOCardSet);
        label_IN3->setObjectName(QString::fromUtf8("label_IN3"));

        gridLayout_15->addWidget(label_IN3, 10, 4, 1, 1);

        KickWidth = new QLineEdit(widget_IOCardSet);
        KickWidth->setObjectName(QString::fromUtf8("KickWidth"));
        sizePolicy.setHeightForWidth(KickWidth->sizePolicy().hasHeightForWidth());
        KickWidth->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(KickWidth, 7, 4, 1, 1);

        Delay3 = new QLineEdit(widget_IOCardSet);
        Delay3->setObjectName(QString::fromUtf8("Delay3"));
        sizePolicy.setHeightForWidth(Delay3->sizePolicy().hasHeightForWidth());
        Delay3->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(Delay3, 2, 1, 1, 1);

        read = new QPushButton(widget_IOCardSet);
        read->setObjectName(QString::fromUtf8("read"));
        sizePolicy.setHeightForWidth(read->sizePolicy().hasHeightForWidth());
        read->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(read, 5, 4, 1, 1);

        pushButton_set = new QPushButton(widget_IOCardSet);
        pushButton_set->setObjectName(QString::fromUtf8("pushButton_set"));

        gridLayout_15->addWidget(pushButton_set, 4, 3, 1, 1);

        Delay2 = new QLineEdit(widget_IOCardSet);
        Delay2->setObjectName(QString::fromUtf8("Delay2"));
        sizePolicy.setHeightForWidth(Delay2->sizePolicy().hasHeightForWidth());
        Delay2->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(Delay2, 1, 4, 1, 1);

        radioButton_normal = new QRadioButton(widget_IOCardSet);
        radioButton_normal->setObjectName(QString::fromUtf8("radioButton_normal"));

        gridLayout_15->addWidget(radioButton_normal, 5, 3, 1, 1);

        pushButton = new QPushButton(widget_IOCardSet);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_15->addWidget(pushButton, 4, 0, 1, 1);

        Delay5 = new QLineEdit(widget_IOCardSet);
        Delay5->setObjectName(QString::fromUtf8("Delay5"));
        sizePolicy.setHeightForWidth(Delay5->sizePolicy().hasHeightForWidth());
        Delay5->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(Delay5, 3, 1, 1, 1);

        radioButton_bad = new QRadioButton(widget_IOCardSet);
        radioButton_bad->setObjectName(QString::fromUtf8("radioButton_bad"));
        sizePolicy.setHeightForWidth(radioButton_bad->sizePolicy().hasHeightForWidth());
        radioButton_bad->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(radioButton_bad, 5, 1, 1, 1);

        label_24 = new QLabel(widget_IOCardSet);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_15->addWidget(label_24, 13, 3, 1, 1);

        label_10 = new QLabel(widget_IOCardSet);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_15->addWidget(label_10, 3, 0, 1, 1);

        label_15 = new QLabel(widget_IOCardSet);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_15->addWidget(label_15, 13, 1, 1, 1);

        settofile = new QPushButton(widget_IOCardSet);
        settofile->setObjectName(QString::fromUtf8("settofile"));
        sizePolicy.setHeightForWidth(settofile->sizePolicy().hasHeightForWidth());
        settofile->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(settofile, 9, 4, 1, 1);

        advance1 = new QPushButton(widget_IOCardSet);
        advance1->setObjectName(QString::fromUtf8("advance1"));
        sizePolicy.setHeightForWidth(advance1->sizePolicy().hasHeightForWidth());
        advance1->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(advance1, 4, 4, 1, 1);

        label_3 = new QLabel(widget_IOCardSet);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(label_3, 6, 0, 1, 1);

        label_8 = new QLabel(widget_IOCardSet);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(label_8, 2, 0, 1, 1);

        settocard = new QPushButton(widget_IOCardSet);
        settocard->setObjectName(QString::fromUtf8("settocard"));
        sizePolicy.setHeightForWidth(settocard->sizePolicy().hasHeightForWidth());
        settocard->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(settocard, 9, 3, 1, 1);

        label_19 = new QLabel(widget_IOCardSet);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(label_19, 7, 3, 1, 1);

        radioButton_good = new QRadioButton(widget_IOCardSet);
        radioButton_good->setObjectName(QString::fromUtf8("radioButton_good"));
        sizePolicy.setHeightForWidth(radioButton_good->sizePolicy().hasHeightForWidth());
        radioButton_good->setSizePolicy(sizePolicy);

        gridLayout_15->addWidget(radioButton_good, 5, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout_15);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_splc = new QWidget(widget_IOCardSet);
        widget_splc->setObjectName(QString::fromUtf8("widget_splc"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_splc->sizePolicy().hasHeightForWidth());
        widget_splc->setSizePolicy(sizePolicy3);
        gridLayout_2 = new QGridLayout(widget_splc);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));

        gridLayout->addWidget(widget_splc, 0, 0, 1, 1);


        verticalLayout_11->addLayout(gridLayout);


        verticalLayout_4->addWidget(widget_IOCardSet);


        horizontalLayout_2->addLayout(verticalLayout_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);


        retranslateUi(WidgetTest);
        QObject::connect(btnCancel, SIGNAL(clicked()), WidgetTest, SLOT(slots_Cancel()));

        QMetaObject::connectSlotsByName(WidgetTest);
    } // setupUi

    void retranslateUi(QWidget *WidgetTest)
    {
        WidgetTest->setWindowTitle(QApplication::translate("WidgetTest", "Form", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("WidgetTest", "Save", 0, QApplication::UnicodeUTF8));
        checkBox_CameraOffLine->setText(QApplication::translate("WidgetTest", "CameraOffLine", 0, QApplication::UnicodeUTF8));
        label_MissNumber->setText(QApplication::translate("WidgetTest", "MissNumber:", 0, QApplication::UnicodeUTF8));
        checkBox_CameraContinueReject->setText(QApplication::translate("WidgetTest", "CameraContinueReject", 0, QApplication::UnicodeUTF8));
        label_rejectNumber->setText(QApplication::translate("WidgetTest", "RejectNumber:", 0, QApplication::UnicodeUTF8));
        CameraMonitor_Status->setText(QApplication::translate("WidgetTest", "TextLabel", 0, QApplication::UnicodeUTF8));
        btnOK_CameraSurveillance->setText(QApplication::translate("WidgetTest", "Save", 0, QApplication::UnicodeUTF8));
        checkBox_EquipAlarm->setText(QApplication::translate("WidgetTest", "Equipment maintenance alarm", 0, QApplication::UnicodeUTF8));
        ShowAlarmSet_btn->setText(QApplication::translate("WidgetTest", "Show", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_EquipAlarm->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("WidgetTest", "Alarm Frequency(DAY)", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_EquipAlarm->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("WidgetTest", "Alarm Infomation", 0, QApplication::UnicodeUTF8));
        btn_ClearAlarm->setText(QApplication::translate("WidgetTest", "Maintenance Completed", 0, QApplication::UnicodeUTF8));
        btnOk_EquipAlarm->setText(QApplication::translate("WidgetTest", "Save", 0, QApplication::UnicodeUTF8));
        checkBox_saveFailureNormalImage->setText(QApplication::translate("WidgetTest", "SaveFailureNormalImage", 0, QApplication::UnicodeUTF8));
        checkBox_saveFailureStressImage->setText(QApplication::translate("WidgetTest", "SaveFailureStressImage", 0, QApplication::UnicodeUTF8));
        label_Mode->setText(QApplication::translate("WidgetTest", "Save Image:", 0, QApplication::UnicodeUTF8));
        comboBox_SaveMode->clear();
        comboBox_SaveMode->insertItems(0, QStringList()
         << QApplication::translate("WidgetTest", "No Save", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetTest", "All Image(specified)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("WidgetTest", "Failur Image(specified)", 0, QApplication::UnicodeUTF8)
        );
        label_Number->setText(QApplication::translate("WidgetTest", "Specified Number:", 0, QApplication::UnicodeUTF8));
        btnChoseCamera->setText(QApplication::translate("WidgetTest", "CameraChoose", 0, QApplication::UnicodeUTF8));
        btnChoseErrorType->setText(QApplication::translate("WidgetTest", "FailureChoose", 0, QApplication::UnicodeUTF8));
        groupBox_ChoseCamera->setTitle(QApplication::translate("WidgetTest", "ChoseCamera", 0, QApplication::UnicodeUTF8));
        pushButton_choseAllCamera->setText(QApplication::translate("WidgetTest", "Chose All", 0, QApplication::UnicodeUTF8));
        pushButton_choseNoneCamera->setText(QApplication::translate("WidgetTest", "Chose None", 0, QApplication::UnicodeUTF8));
        groupBox_ChoseErrorType->setTitle(QApplication::translate("WidgetTest", "ChoseErrorTpye", 0, QApplication::UnicodeUTF8));
        pushButton_choseAllErrorType->setText(QApplication::translate("WidgetTest", "Chose All", 0, QApplication::UnicodeUTF8));
        pushButton_choseNoneErrorType->setText(QApplication::translate("WidgetTest", "Chose None", 0, QApplication::UnicodeUTF8));
        btnOK_Save->setText(QApplication::translate("WidgetTest", "Save", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("WidgetTest", "OK", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("WidgetTest", "Cancel", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("WidgetTest", "Channel1:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("WidgetTest", "Channel4:", 0, QApplication::UnicodeUTF8));
        label_IN1->setText(QApplication::translate("WidgetTest", "IN1:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("WidgetTest", "Channel2:", 0, QApplication::UnicodeUTF8));
        label_OUT1->setText(QApplication::translate("WidgetTest", "OUT1:", 0, QApplication::UnicodeUTF8));
        label_IN0->setText(QApplication::translate("WidgetTest", "IN0:", 0, QApplication::UnicodeUTF8));
        label_OUT5->setText(QApplication::translate("WidgetTest", "OUT5:", 0, QApplication::UnicodeUTF8));
        label_OUT6->setText(QApplication::translate("WidgetTest", "OUT6:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("WidgetTest", "Channel6:", 0, QApplication::UnicodeUTF8));
        label_OUT0->setText(QApplication::translate("WidgetTest", "OUT0:", 0, QApplication::UnicodeUTF8));
        label_frequency->setText(QApplication::translate("WidgetTest", "Frequency:", 0, QApplication::UnicodeUTF8));
        label_OUT4->setText(QApplication::translate("WidgetTest", "OUT4:", 0, QApplication::UnicodeUTF8));
        label_IN2->setText(QApplication::translate("WidgetTest", "IN2:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("WidgetTest", "Kick Delay:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("WidgetTest", "\345\220\216\345\205\211\345\273\266\350\277\237:", 0, QApplication::UnicodeUTF8));
        label_OUT3->setText(QApplication::translate("WidgetTest", "OUT3:", 0, QApplication::UnicodeUTF8));
        label_OUT7->setText(QApplication::translate("WidgetTest", "OUT7:", 0, QApplication::UnicodeUTF8));
        label_OUT2->setText(QApplication::translate("WidgetTest", "OUT2:", 0, QApplication::UnicodeUTF8));
        label_IN3->setText(QApplication::translate("WidgetTest", "IN3:", 0, QApplication::UnicodeUTF8));
        read->setText(QApplication::translate("WidgetTest", "Read", 0, QApplication::UnicodeUTF8));
        pushButton_set->setText(QApplication::translate("WidgetTest", "set", 0, QApplication::UnicodeUTF8));
        radioButton_normal->setText(QApplication::translate("WidgetTest", "Normal", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("WidgetTest", "\347\275\221\347\273\234\351\207\215\350\277\236", 0, QApplication::UnicodeUTF8));
        radioButton_bad->setText(QApplication::translate("WidgetTest", "Continue Kick", 0, QApplication::UnicodeUTF8));
        label_24->setText(QString());
        label_10->setText(QApplication::translate("WidgetTest", "Channel5:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QString());
        settofile->setText(QApplication::translate("WidgetTest", "Save to File", 0, QApplication::UnicodeUTF8));
        advance1->setText(QApplication::translate("WidgetTest", "Advance", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("WidgetTest", "\344\272\247\345\223\201\351\227\264\350\267\235(0.3):", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("WidgetTest", "Channel3:", 0, QApplication::UnicodeUTF8));
        settocard->setText(QApplication::translate("WidgetTest", "Set to Card", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("WidgetTest", "Kick Width:", 0, QApplication::UnicodeUTF8));
        radioButton_good->setText(QApplication::translate("WidgetTest", "Continue Good", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetTest: public Ui_WidgetTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_TEST_H
