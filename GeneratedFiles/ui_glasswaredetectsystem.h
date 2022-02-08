/********************************************************************************
** Form generated from reading UI file 'glasswaredetectsystem.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLASSWAREDETECTSYSTEM_H
#define UI_GLASSWAREDETECTSYSTEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GlasswareDetectSystemClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *GlasswareDetectSystemClass)
    {
        if (GlasswareDetectSystemClass->objectName().isEmpty())
            GlasswareDetectSystemClass->setObjectName(QString::fromUtf8("GlasswareDetectSystemClass"));
        GlasswareDetectSystemClass->resize(600, 400);
        menuBar = new QMenuBar(GlasswareDetectSystemClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        GlasswareDetectSystemClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GlasswareDetectSystemClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        GlasswareDetectSystemClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(GlasswareDetectSystemClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        GlasswareDetectSystemClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(GlasswareDetectSystemClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        GlasswareDetectSystemClass->setStatusBar(statusBar);

        retranslateUi(GlasswareDetectSystemClass);

        QMetaObject::connectSlotsByName(GlasswareDetectSystemClass);
    } // setupUi

    void retranslateUi(QMainWindow *GlasswareDetectSystemClass)
    {
        GlasswareDetectSystemClass->setWindowTitle(QApplication::translate("GlasswareDetectSystemClass", "GlasswareDetectSystem", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GlasswareDetectSystemClass: public Ui_GlasswareDetectSystemClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GLASSWAREDETECTSYSTEM_H
