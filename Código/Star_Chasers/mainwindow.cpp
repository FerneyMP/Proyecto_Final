#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
    h=ui->View2->height();
    setup_scene2();

    //ui->View3->setEnabled(false);
    ui->AgregarDatos->setEnabled(false);
    ui->usuario->setEnabled(false);
    ui->contrasenia->setEnabled(false);
    ui->Start->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete scene1;
    delete scene2;
    delete Window2;
}

void MainWindow::setup_scene1()
{
    scene1 = new QGraphicsScene;

}

void MainWindow::setup_scene2()
{
    scene2 = new QGraphicsScene;
    wind2 = new window2(ui->View2->width()-2,ui->View2->height()-2);
    scene2->setSceneRect(0,0,ui->View2->width()-2,ui->View2->height()-2);
    ui->View2->setScene(scene2);
    scene2->addItem(wind2);
}

void MainWindow::setup_window2()
{

    //PASOS: 1.Configurar la escena
    //       2.Configurar la

    Window2 = new QMainWindow(this);//el this depende de la clase mainwindow
    //esta ventana va depender de la principal

    View2 = new QGraphicsView(scene2,Window2);
    View2->setGeometry(0,0,800,600);
}

void MainWindow::crear_txt(string name)
{
    fstream text(name, fstream::out );
    text.close();
}

void MainWindow::escribir_txt(string nombre, string user, string pass, int vidas)
{

    fstream text(nombre, fstream::out | fstream::app);
    text << "{" << user << "," << pass << "," << vidas << "}" << "\n";
    text.close();
}

string MainWindow::leer_usuario(string name)
{
    string datos;
    fstream text;
    text.open(name, fstream::in);
    if(text.is_open()){
        while(!text.eof()){
            datos.push_back(text.get());
        }
    }
    return datos;
    //else cout << "el archivo no pudo ser abierto";

}

void MainWindow::on_AgregarDatos_clicked()
{
    QString usuario_;
    QString contrasena_;
    string complete;
    usuario_ = ui->usuario->text();
    contrasena_ = ui->contrasenia->text();    

    ui->usuario->setEnabled(false);
    ui->contrasenia->setEnabled(false);

    ui->Registrar->setEnabled(false);
    ui->Start->setEnabled(false);
    ui->IniciarSesion->setEnabled(true);

    escribir_txt(DataBase,usuario_.toStdString(),contrasena_.toStdString(), vidas);
}

void MainWindow::on_Registrar_clicked()
{
    ui->IniciarSesion->setEnabled(false);
    ui->usuario->setEnabled(true);
    ui->contrasenia->setEnabled(true);
    ui->AgregarDatos->setEnabled(true);
}


void MainWindow::on_IniciarSesion_clicked()
{
    QString usuario_;
    QString contrasena_;
    string complete, datos, copia;
    size_t posicion;
    //int coma = 0;

    ui->Registrar->setEnabled(false);
    ui->usuario->clear();
    ui->contrasenia->clear();
    ui->usuario->setEnabled(true);
    ui->contrasenia->setEnabled(true);
    ui->AgregarDatos->setEnabled(false);
    ui->Start->setEnabled(true);
    ui->IniciarSesion->setEnabled(false);
    usuario_ = ui->usuario->text();
    contrasena_ = ui->contrasenia->text();

    //variables
    complete = usuario_.toStdString() + "," + contrasena_.toStdString();
    datos = leer_usuario(DataBase);

    if(datos.find(complete)!=string::npos){//Si es diferente, pertenece al string (npos)
        posicion = datos.find(complete);

        /*
        for(unsigned long c = posicion; c < datos.size(); c++){
            copia += datos[c];
        }

        for(unsigned long int i=0; i < copia.length(); ++i){
            if(copia[i]==44){
                coma++;
            }
            if(coma==2){

            }
        }*/
    }
}
