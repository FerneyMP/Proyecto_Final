#include "win.h"
#include "ui_win.h"


win::win(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::win)
{
    ui->setupUi(this);
    imagen();
}

win::~win()
{
    delete ui;
    delete scena;
    delete dialogos;
}

void win::imagen()
{
    scena = new QGraphicsScene;
    dialogos = new cuadros_de_dialogo(ui->graphicsView->width(),ui->graphicsView->height(),2);
    scena->setSceneRect(0,0,ui->graphicsView->width(),ui->graphicsView->height());
    ui->graphicsView->setScene(scena);
    scena->addItem(dialogos);
}
