/********************************************************************************
** Form generated from reading UI file 'LightSource.ui'
**
** Created: Thu Mar 24 09:30:29 2022
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIGHTSOURCE_H
#define UI_LIGHTSOURCE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
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
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Light_Source
{
public:
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider;
    QLabel *label_3;
    QSpinBox *spinBox;
    QPushButton *pushButton_7;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QLabel *label_4;
    QCheckBox *checkBox;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Light_Source)
    {
        if (Light_Source->objectName().isEmpty())
            Light_Source->setObjectName(QString::fromUtf8("Light_Source"));
        Light_Source->resize(1096, 274);
        gridLayout_5 = new QGridLayout(Light_Source);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_4 = new QGroupBox(Light_Source);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_4 = new QGridLayout(groupBox_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_4->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_4 = new QPushButton(groupBox_4);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_4->addWidget(pushButton_4, 4, 1, 1, 1);

        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_4->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(groupBox_4);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_4->addWidget(pushButton_3, 4, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_4, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));

        gridLayout_5->addLayout(horizontalLayout, 0, 0, 1, 2);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_3 = new QGroupBox(Light_Source);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSlider = new QSlider(groupBox_3);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMaximum(50);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        spinBox = new QSpinBox(groupBox_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        horizontalLayout_2->addWidget(spinBox);

        pushButton_7 = new QPushButton(groupBox_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_2->addWidget(pushButton_7);


        gridLayout_2->addWidget(groupBox_3, 1, 0, 1, 4);

        groupBox_5 = new QGroupBox(Light_Source);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        radioButton = new QRadioButton(groupBox_5);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        gridLayout_6->addWidget(radioButton, 0, 0, 1, 1);

        radioButton_2 = new QRadioButton(groupBox_5);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        gridLayout_6->addWidget(radioButton_2, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_5, 0, 1, 1, 1);

        groupBox = new QGroupBox(Light_Source);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_7->addWidget(label_4, 0, 0, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(false);

        gridLayout_7->addWidget(checkBox, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout_7->addWidget(pushButton_5, 1, 2, 1, 1);

        pushButton_6 = new QPushButton(groupBox);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout_7->addWidget(pushButton_6, 1, 1, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        gridLayout_7->addWidget(lineEdit_2, 0, 1, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(Light_Source);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 2, 1, 2);

        gridLayout_2->setColumnStretch(0, 2);
        gridLayout_2->setColumnStretch(1, 1);
        gridLayout_2->setColumnStretch(2, 1);

        gridLayout_5->addLayout(gridLayout_2, 1, 0, 1, 1);


        retranslateUi(Light_Source);

        QMetaObject::connectSlotsByName(Light_Source);
    } // setupUi

    void retranslateUi(QWidget *Light_Source)
    {
        Light_Source->setWindowTitle(QApplication::translate("Light_Source", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Light_Source", "\346\223\215\344\275\234\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Light_Source", "\346\201\242\345\244\215\351\273\230\350\256\244\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Light_Source", "\344\277\235\345\255\230\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Light_Source", "\350\257\273\345\217\226\350\256\276\345\244\207\351\205\215\347\275\256", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Light_Source", "\350\277\236\347\273\255\350\247\246\345\217\221", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Light_Source", "\346\235\241\347\272\271\350\256\276\347\275\256 ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Light_Source", "\344\272\256\345\272\246\347\255\211\347\272\247:", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Light_Source", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Light_Source", "\346\235\241\347\272\271\346\240\267\345\274\217", 0, QApplication::UnicodeUTF8));
        radioButton->setText(QApplication::translate("Light_Source", "\346\235\241\347\272\271\346\240\267\345\274\2171", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("Light_Source", "\346\235\241\347\272\271\346\240\267\345\274\2172", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Light_Source", "\347\231\273\345\275\225\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Light_Source", "IP\345\234\260\345\235\200:", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("Light_Source", "\350\277\236\346\216\245\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Light_Source", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Light_Source", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Light_Source", "\350\247\246\345\217\221\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Light_Source", "us", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Light_Source", "\347\202\271\344\272\256\346\227\266\351\225\277:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Light_Source: public Ui_Light_Source {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIGHTSOURCE_H
