/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inicio
{
public:
    QWidget *centralwidget;
    QGraphicsView *View2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *inicio)
    {
        if (inicio->objectName().isEmpty())
            inicio->setObjectName(QString::fromUtf8("inicio"));
        inicio->resize(800, 600);
        centralwidget = new QWidget(inicio);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        View2 = new QGraphicsView(centralwidget);
        View2->setObjectName(QString::fromUtf8("View2"));
        View2->setGeometry(QRect(0, 0, 941, 561));
        inicio->setCentralWidget(centralwidget);
        menubar = new QMenuBar(inicio);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        inicio->setMenuBar(menubar);
        statusbar = new QStatusBar(inicio);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        inicio->setStatusBar(statusbar);

        retranslateUi(inicio);

        QMetaObject::connectSlotsByName(inicio);
    } // setupUi

    void retranslateUi(QMainWindow *inicio)
    {
        inicio->setWindowTitle(QCoreApplication::translate("inicio", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inicio: public Ui_inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H
