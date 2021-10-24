/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *View2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *usuario;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *contrasenia;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_4;
    QPushButton *AgregarDatos;
    QPushButton *Start;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_5;
    QPushButton *Registrar;
    QPushButton *IniciarSesion;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(988, 625);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        MainWindow->setCursor(QCursor(Qt::PointingHandCursor));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        View2 = new QGraphicsView(centralwidget);
        View2->setObjectName(QString::fromUtf8("View2"));
        View2->setGeometry(QRect(9, 9, 941, 561));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Algerian"));
        font1.setBold(false);
        font1.setWeight(50);
        View2->setFont(font1);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(630, 460, 292, 51));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        usuario = new QLineEdit(gridLayoutWidget);
        usuario->setObjectName(QString::fromUtf8("usuario"));

        gridLayout->addWidget(usuario, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QPalette palette;
        QBrush brush(QColor(255, 255, 127, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush1);
        QBrush brush2(QColor(127, 127, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush2);
        QBrush brush3(QColor(170, 170, 170, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush3);
        QBrush brush4(QColor(0, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush4);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        QBrush brush5(QColor(255, 255, 220, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush4);
        QBrush brush6(QColor(0, 0, 0, 128));
        brush6.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush4);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush6);
#endif
        label->setPalette(palette);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lucida Calligraphy"));
        font2.setPointSize(9);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush7(QColor(120, 120, 120, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        label_2->setPalette(palette1);
        label_2->setFont(font2);
        label_2->setContextMenuPolicy(Qt::PreventContextMenu);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        contrasenia = new QLineEdit(gridLayoutWidget);
        contrasenia->setObjectName(QString::fromUtf8("contrasenia"));
        contrasenia->setFocusPolicy(Qt::StrongFocus);
        contrasenia->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(contrasenia, 2, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(630, 520, 291, 31));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        AgregarDatos = new QPushButton(gridLayoutWidget_2);
        AgregarDatos->setObjectName(QString::fromUtf8("AgregarDatos"));

        gridLayout_4->addWidget(AgregarDatos, 0, 0, 1, 1);

        Start = new QPushButton(gridLayoutWidget_2);
        Start->setObjectName(QString::fromUtf8("Start"));

        gridLayout_4->addWidget(Start, 0, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(centralwidget);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 470, 160, 80));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        Registrar = new QPushButton(gridLayoutWidget_3);
        Registrar->setObjectName(QString::fromUtf8("Registrar"));

        gridLayout_5->addWidget(Registrar, 0, 0, 1, 1);

        IniciarSesion = new QPushButton(gridLayoutWidget_3);
        IniciarSesion->setObjectName(QString::fromUtf8("IniciarSesion"));

        gridLayout_5->addWidget(IniciarSesion, 1, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(200, 10, 581, 191));
        QPalette palette2;
        QBrush brush8(QColor(255, 255, 0, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush7);
        label_3->setPalette(palette2);
        QFont font3;
        font3.setFamily(QString::fromUtf8("Lucida Calligraphy"));
        font3.setPointSize(36);
        font3.setBold(false);
        font3.setWeight(50);
        label_3->setFont(font3);
        label_3->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 988, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Usuario:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Contrase\303\261a:", nullptr));
        AgregarDatos->setText(QCoreApplication::translate("MainWindow", "Ingresar datos", nullptr));
        Start->setText(QCoreApplication::translate("MainWindow", "Empezar", nullptr));
        Registrar->setText(QCoreApplication::translate("MainWindow", "Registrar", nullptr));
        IniciarSesion->setText(QCoreApplication::translate("MainWindow", "Iniciar Sesi\303\263n", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "STAR CHASERS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
