/********************************************************************************
** Form generated from reading UI file 'Widget_CarveInfo.ui'
**
** Created: Tue Jan 25 10:01:46 2022
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CARVEINFO_H
#define UI_WIDGET_CARVEINFO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "dhbasewidget.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_Widget_CarveInfo
{
public:
    QGridLayout *gridLayout_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_5;
    DHBaseWidget *widget_image;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *layoutImage;
    QGroupBox *groupBox_12;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_Normal;
    QRadioButton *radioButton_Stress;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_toNormal;
    QSpinBox *spinBox_toNormal;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_21;
    QSpinBox *spinBox_realNo;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_22;
    QSpinBox *spinBox_Ro;
    QGroupBox *groupBox_Position;
    QGridLayout *gridLayout_7;
    QSpinBox *spinBox_H;
    QSpinBox *spinBox_Y;
    QSpinBox *spinBox_W;
    QSpinBox *spinBox_X;
    QLabel *label_y;
    QLabel *label_w;
    QLabel *label_x;
    QLabel *label_h;
    QGroupBox *groupBox_11;
    QGridLayout *gridLayout_15;
    QPushButton *pushButton_up;
    QPushButton *pushButton_right;
    QPushButton *pushButton_left;
    QPushButton *pushButton_down;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_24;
    QSlider *horizontalSlider;
    QSpinBox *spinBox_exposureTime;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_startTest;
    QPushButton *pushButton_save;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_carve;
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_setToCamera;
    QPushButton *pushButton_copyROI;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_6;
    DHBaseWidget *widget_camera;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *layoutCamera;
    QWidget *widget_CameraInfo;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QComboBox *comboBox_triggerType;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_setToCamera_2;
    QPushButton *pushButton_grey;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit_delay;
    QPushButton *pushButton_readDelayPara;
    QWidget *widget_GrayTest;
    QHBoxLayout *horizontalLayout_2;
    QwtPlot *qwtPlot_sharpness;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_AverageGray;
    QLineEdit *lineEdit_gray;
    QLabel *label_Sharpness;
    QLineEdit *lineEdit_sharpness;

    void setupUi(QWidget *Widget_CarveInfo)
    {
        if (Widget_CarveInfo->objectName().isEmpty())
            Widget_CarveInfo->setObjectName(QString::fromUtf8("Widget_CarveInfo"));
        Widget_CarveInfo->resize(486, 473);
        Widget_CarveInfo->setMaximumSize(QSize(16777215, 10000));
        QFont font;
        font.setPointSize(12);
        Widget_CarveInfo->setFont(font);
        gridLayout_3 = new QGridLayout(Widget_CarveInfo);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        stackedWidget = new QStackedWidget(Widget_CarveInfo);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        widget_image = new DHBaseWidget(page);
        widget_image->setObjectName(QString::fromUtf8("widget_image"));
        verticalLayout_4 = new QVBoxLayout(widget_image);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(-1, 0, -1, -1);
        layoutImage = new QHBoxLayout();
        layoutImage->setSpacing(0);
        layoutImage->setObjectName(QString::fromUtf8("layoutImage"));

        verticalLayout_4->addLayout(layoutImage);

        groupBox_12 = new QGroupBox(widget_image);
        groupBox_12->setObjectName(QString::fromUtf8("groupBox_12"));
        gridLayout = new QGridLayout(groupBox_12);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton_Normal = new QRadioButton(groupBox_12);
        radioButton_Normal->setObjectName(QString::fromUtf8("radioButton_Normal"));

        horizontalLayout->addWidget(radioButton_Normal);

        radioButton_Stress = new QRadioButton(groupBox_12);
        radioButton_Stress->setObjectName(QString::fromUtf8("radioButton_Stress"));

        horizontalLayout->addWidget(radioButton_Stress);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_toNormal = new QLabel(groupBox_12);
        label_toNormal->setObjectName(QString::fromUtf8("label_toNormal"));

        horizontalLayout_4->addWidget(label_toNormal);

        spinBox_toNormal = new QSpinBox(groupBox_12);
        spinBox_toNormal->setObjectName(QString::fromUtf8("spinBox_toNormal"));

        horizontalLayout_4->addWidget(spinBox_toNormal);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        verticalLayout_4->addWidget(groupBox_12);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_21 = new QLabel(widget_image);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_5->addWidget(label_21);

        spinBox_realNo = new QSpinBox(widget_image);
        spinBox_realNo->setObjectName(QString::fromUtf8("spinBox_realNo"));

        horizontalLayout_5->addWidget(spinBox_realNo);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_22 = new QLabel(widget_image);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_10->addWidget(label_22);

        spinBox_Ro = new QSpinBox(widget_image);
        spinBox_Ro->setObjectName(QString::fromUtf8("spinBox_Ro"));
        spinBox_Ro->setMaximum(255);

        horizontalLayout_10->addWidget(spinBox_Ro);


        verticalLayout_4->addLayout(horizontalLayout_10);

        groupBox_Position = new QGroupBox(widget_image);
        groupBox_Position->setObjectName(QString::fromUtf8("groupBox_Position"));
        gridLayout_7 = new QGridLayout(groupBox_Position);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        spinBox_H = new QSpinBox(groupBox_Position);
        spinBox_H->setObjectName(QString::fromUtf8("spinBox_H"));
        spinBox_H->setMaximum(99999);
        spinBox_H->setSingleStep(4);

        gridLayout_7->addWidget(spinBox_H, 1, 3, 1, 1);

        spinBox_Y = new QSpinBox(groupBox_Position);
        spinBox_Y->setObjectName(QString::fromUtf8("spinBox_Y"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spinBox_Y->sizePolicy().hasHeightForWidth());
        spinBox_Y->setSizePolicy(sizePolicy);
        spinBox_Y->setMaximum(99999);
        spinBox_Y->setSingleStep(4);

        gridLayout_7->addWidget(spinBox_Y, 0, 3, 1, 1);

        spinBox_W = new QSpinBox(groupBox_Position);
        spinBox_W->setObjectName(QString::fromUtf8("spinBox_W"));
        spinBox_W->setMaximum(99999);
        spinBox_W->setSingleStep(4);

        gridLayout_7->addWidget(spinBox_W, 1, 1, 1, 1);

        spinBox_X = new QSpinBox(groupBox_Position);
        spinBox_X->setObjectName(QString::fromUtf8("spinBox_X"));
        sizePolicy.setHeightForWidth(spinBox_X->sizePolicy().hasHeightForWidth());
        spinBox_X->setSizePolicy(sizePolicy);
        spinBox_X->setMaximum(99999);
        spinBox_X->setSingleStep(4);

        gridLayout_7->addWidget(spinBox_X, 0, 1, 1, 1);

        label_y = new QLabel(groupBox_Position);
        label_y->setObjectName(QString::fromUtf8("label_y"));

        gridLayout_7->addWidget(label_y, 0, 2, 1, 1);

        label_w = new QLabel(groupBox_Position);
        label_w->setObjectName(QString::fromUtf8("label_w"));

        gridLayout_7->addWidget(label_w, 1, 0, 1, 1);

        label_x = new QLabel(groupBox_Position);
        label_x->setObjectName(QString::fromUtf8("label_x"));

        gridLayout_7->addWidget(label_x, 0, 0, 1, 1);

        label_h = new QLabel(groupBox_Position);
        label_h->setObjectName(QString::fromUtf8("label_h"));

        gridLayout_7->addWidget(label_h, 1, 2, 1, 1);


        verticalLayout_4->addWidget(groupBox_Position);

        groupBox_11 = new QGroupBox(widget_image);
        groupBox_11->setObjectName(QString::fromUtf8("groupBox_11"));
        gridLayout_15 = new QGridLayout(groupBox_11);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        pushButton_up = new QPushButton(groupBox_11);
        pushButton_up->setObjectName(QString::fromUtf8("pushButton_up"));
        pushButton_up->setMinimumSize(QSize(40, 40));

        gridLayout_15->addWidget(pushButton_up, 0, 0, 1, 1);

        pushButton_right = new QPushButton(groupBox_11);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));
        pushButton_right->setMinimumSize(QSize(40, 40));

        gridLayout_15->addWidget(pushButton_right, 0, 4, 1, 1);

        pushButton_left = new QPushButton(groupBox_11);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));
        pushButton_left->setMinimumSize(QSize(40, 40));

        gridLayout_15->addWidget(pushButton_left, 0, 3, 1, 1);

        pushButton_down = new QPushButton(groupBox_11);
        pushButton_down->setObjectName(QString::fromUtf8("pushButton_down"));
        pushButton_down->setMinimumSize(QSize(40, 40));

        gridLayout_15->addWidget(pushButton_down, 0, 1, 1, 1);


        verticalLayout_4->addWidget(groupBox_11);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_24 = new QLabel(widget_image);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_11->addWidget(label_24);

        horizontalSlider = new QSlider(widget_image);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(5000);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_11->addWidget(horizontalSlider);

        spinBox_exposureTime = new QSpinBox(widget_image);
        spinBox_exposureTime->setObjectName(QString::fromUtf8("spinBox_exposureTime"));
        spinBox_exposureTime->setMinimumSize(QSize(100, 0));
        spinBox_exposureTime->setMaximum(5000);

        horizontalLayout_11->addWidget(spinBox_exposureTime);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        pushButton_startTest = new QPushButton(widget_image);
        pushButton_startTest->setObjectName(QString::fromUtf8("pushButton_startTest"));
        pushButton_startTest->setMinimumSize(QSize(80, 40));

        horizontalLayout_12->addWidget(pushButton_startTest);

        pushButton_save = new QPushButton(widget_image);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setMinimumSize(QSize(40, 40));

        horizontalLayout_12->addWidget(pushButton_save);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButton_carve = new QPushButton(widget_image);
        pushButton_carve->setObjectName(QString::fromUtf8("pushButton_carve"));
        pushButton_carve->setMinimumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(pushButton_carve);

        pushButton_cancel = new QPushButton(widget_image);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));
        pushButton_cancel->setMinimumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(pushButton_cancel);

        pushButton_setToCamera = new QPushButton(widget_image);
        pushButton_setToCamera->setObjectName(QString::fromUtf8("pushButton_setToCamera"));
        pushButton_setToCamera->setMinimumSize(QSize(0, 40));

        horizontalLayout_6->addWidget(pushButton_setToCamera);

        pushButton_copyROI = new QPushButton(widget_image);
        pushButton_copyROI->setObjectName(QString::fromUtf8("pushButton_copyROI"));
        pushButton_copyROI->setMinimumSize(QSize(40, 40));

        horizontalLayout_6->addWidget(pushButton_copyROI);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer = new QSpacerItem(20, 25, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_5->addWidget(widget_image, 0, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_6 = new QGridLayout(page_2);
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        widget_camera = new DHBaseWidget(page_2);
        widget_camera->setObjectName(QString::fromUtf8("widget_camera"));
        widget_camera->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_camera);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        layoutCamera = new QHBoxLayout();
        layoutCamera->setObjectName(QString::fromUtf8("layoutCamera"));

        verticalLayout_2->addLayout(layoutCamera);

        widget_CameraInfo = new QWidget(widget_camera);
        widget_CameraInfo->setObjectName(QString::fromUtf8("widget_CameraInfo"));
        verticalLayout = new QVBoxLayout(widget_CameraInfo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_15 = new QLabel(widget_CameraInfo);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        comboBox_triggerType = new QComboBox(widget_CameraInfo);
        comboBox_triggerType->setObjectName(QString::fromUtf8("comboBox_triggerType"));

        horizontalLayout_8->addWidget(comboBox_triggerType);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_3);

        pushButton_setToCamera_2 = new QPushButton(widget_CameraInfo);
        pushButton_setToCamera_2->setObjectName(QString::fromUtf8("pushButton_setToCamera_2"));
        pushButton_setToCamera_2->setMinimumSize(QSize(0, 40));

        horizontalLayout_8->addWidget(pushButton_setToCamera_2);

        pushButton_grey = new QPushButton(widget_CameraInfo);
        pushButton_grey->setObjectName(QString::fromUtf8("pushButton_grey"));
        pushButton_grey->setMinimumSize(QSize(80, 40));

        horizontalLayout_8->addWidget(pushButton_grey);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(widget_CameraInfo);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        lineEdit_delay = new QLineEdit(widget_CameraInfo);
        lineEdit_delay->setObjectName(QString::fromUtf8("lineEdit_delay"));

        horizontalLayout_7->addWidget(lineEdit_delay);

        pushButton_readDelayPara = new QPushButton(widget_CameraInfo);
        pushButton_readDelayPara->setObjectName(QString::fromUtf8("pushButton_readDelayPara"));

        horizontalLayout_7->addWidget(pushButton_readDelayPara);


        verticalLayout->addLayout(horizontalLayout_7);


        verticalLayout_2->addWidget(widget_CameraInfo);

        widget_GrayTest = new QWidget(widget_camera);
        widget_GrayTest->setObjectName(QString::fromUtf8("widget_GrayTest"));
        horizontalLayout_2 = new QHBoxLayout(widget_GrayTest);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qwtPlot_sharpness = new QwtPlot(widget_GrayTest);
        qwtPlot_sharpness->setObjectName(QString::fromUtf8("qwtPlot_sharpness"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(qwtPlot_sharpness->sizePolicy().hasHeightForWidth());
        qwtPlot_sharpness->setSizePolicy(sizePolicy1);
        qwtPlot_sharpness->setMaximumSize(QSize(16777215, 100000));

        horizontalLayout_2->addWidget(qwtPlot_sharpness);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_AverageGray = new QLabel(widget_GrayTest);
        label_AverageGray->setObjectName(QString::fromUtf8("label_AverageGray"));

        verticalLayout_5->addWidget(label_AverageGray);

        lineEdit_gray = new QLineEdit(widget_GrayTest);
        lineEdit_gray->setObjectName(QString::fromUtf8("lineEdit_gray"));
        lineEdit_gray->setMaximumSize(QSize(100, 16777215));

        verticalLayout_5->addWidget(lineEdit_gray);

        label_Sharpness = new QLabel(widget_GrayTest);
        label_Sharpness->setObjectName(QString::fromUtf8("label_Sharpness"));

        verticalLayout_5->addWidget(label_Sharpness);

        lineEdit_sharpness = new QLineEdit(widget_GrayTest);
        lineEdit_sharpness->setObjectName(QString::fromUtf8("lineEdit_sharpness"));
        lineEdit_sharpness->setMaximumSize(QSize(100, 16777215));

        verticalLayout_5->addWidget(lineEdit_sharpness);


        horizontalLayout_2->addLayout(verticalLayout_5);

        horizontalLayout_2->setStretch(0, 7);
        horizontalLayout_2->setStretch(1, 3);
        qwtPlot_sharpness->raise();

        verticalLayout_2->addWidget(widget_GrayTest);

        widget_CameraInfo->raise();
        widget_GrayTest->raise();

        gridLayout_6->addWidget(widget_camera, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);

        gridLayout_3->addWidget(stackedWidget, 0, 0, 1, 1);


        retranslateUi(Widget_CarveInfo);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox_exposureTime, SLOT(setValue(int)));
        QObject::connect(spinBox_exposureTime, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget_CarveInfo);
    } // setupUi

    void retranslateUi(QWidget *Widget_CarveInfo)
    {
        Widget_CarveInfo->setWindowTitle(QApplication::translate("Widget_CarveInfo", "Widget_CarveSetting", 0, QApplication::UnicodeUTF8));
        groupBox_12->setTitle(QApplication::translate("Widget_CarveInfo", "Image Type\357\274\232", 0, QApplication::UnicodeUTF8));
        radioButton_Normal->setText(QApplication::translate("Widget_CarveInfo", "Normal", 0, QApplication::UnicodeUTF8));
        radioButton_Stress->setText(QApplication::translate("Widget_CarveInfo", "Stress", 0, QApplication::UnicodeUTF8));
        label_toNormal->setText(QApplication::translate("Widget_CarveInfo", "To Nomal Camera Number:", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("Widget_CarveInfo", "Real Camera\357\274\232", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("Widget_CarveInfo", "Angle\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_Position->setTitle(QApplication::translate("Widget_CarveInfo", "Position\357\274\232", 0, QApplication::UnicodeUTF8));
        label_y->setText(QApplication::translate("Widget_CarveInfo", "Y\357\274\232", 0, QApplication::UnicodeUTF8));
        label_w->setText(QApplication::translate("Widget_CarveInfo", "W\357\274\232", 0, QApplication::UnicodeUTF8));
        label_x->setText(QApplication::translate("Widget_CarveInfo", "X\357\274\232", 0, QApplication::UnicodeUTF8));
        label_h->setText(QApplication::translate("Widget_CarveInfo", "H\357\274\232", 0, QApplication::UnicodeUTF8));
        groupBox_11->setTitle(QApplication::translate("Widget_CarveInfo", "adjust\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_up->setText(QApplication::translate("Widget_CarveInfo", "UP", 0, QApplication::UnicodeUTF8));
        pushButton_right->setText(QApplication::translate("Widget_CarveInfo", "RIGHT", 0, QApplication::UnicodeUTF8));
        pushButton_left->setText(QApplication::translate("Widget_CarveInfo", "LEFT", 0, QApplication::UnicodeUTF8));
        pushButton_down->setText(QApplication::translate("Widget_CarveInfo", "DOWN", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("Widget_CarveInfo", "Exposure Time\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_startTest->setText(QApplication::translate("Widget_CarveInfo", "Start Test", 0, QApplication::UnicodeUTF8));
        pushButton_save->setText(QApplication::translate("Widget_CarveInfo", "Save", 0, QApplication::UnicodeUTF8));
        pushButton_carve->setText(QApplication::translate("Widget_CarveInfo", "Carve", 0, QApplication::UnicodeUTF8));
        pushButton_cancel->setText(QApplication::translate("Widget_CarveInfo", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_setToCamera->setText(QApplication::translate("Widget_CarveInfo", "SetToCamera", 0, QApplication::UnicodeUTF8));
        pushButton_copyROI->setText(QApplication::translate("Widget_CarveInfo", "CopyROI", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("Widget_CarveInfo", "Trigger Mode\357\274\232", 0, QApplication::UnicodeUTF8));
        comboBox_triggerType->clear();
        comboBox_triggerType->insertItems(0, QStringList()
         << QApplication::translate("Widget_CarveInfo", "Internal Trigger", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Widget_CarveInfo", "External Trigger", 0, QApplication::UnicodeUTF8)
        );
        pushButton_setToCamera_2->setText(QApplication::translate("Widget_CarveInfo", "\350\256\276\347\275\256\345\273\266\350\277\237", 0, QApplication::UnicodeUTF8));
        pushButton_grey->setText(QApplication::translate("Widget_CarveInfo", "Test Grey", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Widget_CarveInfo", "Camera Dalay:", 0, QApplication::UnicodeUTF8));
        pushButton_readDelayPara->setText(QApplication::translate("Widget_CarveInfo", "Read Delay Data", 0, QApplication::UnicodeUTF8));
        label_AverageGray->setText(QApplication::translate("Widget_CarveInfo", "Average Gray\357\274\232", 0, QApplication::UnicodeUTF8));
        label_Sharpness->setText(QApplication::translate("Widget_CarveInfo", "sharpness:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget_CarveInfo: public Ui_Widget_CarveInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CARVEINFO_H
