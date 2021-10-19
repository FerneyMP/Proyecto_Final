#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsView>
#include <QString>
#include <iostream>
#include <fstream>

#include "window2.h"

#define tam 50

#define DataBase "DataBase.txt" //Macro string para la definición del nombre del archivo
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setup_scene1();
    void setup_scene2();
    void setup_window2();
    void crear_txt(string name);
    void escribir_txt(string nombre, string user, string pass, int vidas);
    string leer_usuario(string name);
    void validar_usuario_contrasena();


private slots:
    void on_AgregarDatos_clicked();
    void on_Registrar_clicked();
    void on_IniciarSesion_clicked();
    void on_Start_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene1, *scene2;


    window2 *wind2;
    QMainWindow *Window2; //Ventana #2
    QGraphicsView *View2;
    int W1, H1, h;
    int vidas = 0;


};
#endif // MAINWINDOW_H
