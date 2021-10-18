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

    //Window2 = new QMainWindow(this);//el this depende de la clase mainwindow
    //esta ventana va depender de la principal

   // View2 = new QGraphicsView(scene2,Window2);
    //View2->setGeometry(0,0,800,600);
}

void MainWindow::crear_txt(string name)
{
    fstream text(name, fstream::out);
    text.close();
}

void MainWindow::escribir_txt(string nombre)
{
    fstream text(nombre, fstream::out);

}


void MainWindow::on_label_linkActivated(const QString &link)
{
    QPalette palette = ui->label->palette();
    palette.setColor(QPalette::Window,Qt::white);
    palette.setColor(QPalette::WindowText,Qt::white);
    //palette.setBrush()
    //palette.setColor(ui->label->backgroundRole(),Qt::yellow);
    //palette.setColor(ui->label->foregroundRole(),Qt::yellow);
    ui->label->setPalette(palette);
}



void MainWindow::on_AgregarDatos_clicked()
{
    QString usuario_;
    QString contrasena_;
    usuario_ = ui->usuario->text();
    contrasena_ = ui->contrasenia->text();

    ui->usuario->setEnabled(false);
    ui->contrasenia->setEnabled(false);
}
