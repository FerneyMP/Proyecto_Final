#include "inicio.h"
#include "ui_inicio.h"
//#include "mainwindow.h"

inicio::inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::inicio)
{
    ui->setupUi(this);
    h=ui->View2->height();
    tempo = new QTimer(this);
    connect(tempo, SIGNAL(timeout()),this,SLOT(tiempo()));
    tempo->start(1000);
    setWindowTitle("Star Chasers");

    srand(time(NULL)); //crear la semilla para el # aleatorio
    setup_scene1();
}

inicio::~inicio()
{
    delete ui;
    delete scene1;
    delete proyect_;
    delete Time_Proyec;
    delete tempo;
}

void inicio::setup_scene1()
{
    //Funcion que se encarga de anadir objetos a la scene

    time_enemy1 = new QTimer; //timer para el enemigo
    connect(time_enemy1,SIGNAL(timeout()),this,SLOT(movimientos_enemigos()));
    Time_Proyec = new QTimer;
    connect(Time_Proyec,SIGNAL(timeout()),this,SLOT(movimiento_proyectil()));


     scene1 = new QGraphicsScene;
     mapa_1 = new window2(ui->View2->width()-2,ui->View2->height()-2,2);
     scene1->setSceneRect(0,0,ui->View2->width()-2,ui->View2->height()-2);
     ui->View2->setScene(scene1);
     scene1->addItem(mapa_1);

     //creacion del personaje
     personaje_ = new jugador1;
     personaje_->set_scale(tam,tam);
     personaje_->setPos(0 ,0);
     personaje_->set_imagen();
     scene1->addItem(personaje_);

     //creacion de los enemigos
     enemigo1 *enemigo;
     for (int i=0;i<cantidad_enemigos;i++){
            enemigo=new enemigo1;
            lista_enemigos.push_back(enemigo);
     }
     generar_enemy( lista_enemigos);
     time_enemy1->start(70);
}

void inicio::keyPressEvent(QKeyEvent *tecla)
{
     //posicion xy del personaje (esto se usa para el disparo)
    /*Funcion para generar el movimiento del personaje a partir de las teclas
    el movimiento de un solo jugador se da con las teclas W S y se dispara con la tecla R*/
    if (tecla-> key() == Qt:: Key_W) {  //movimiento hacia arriba
        if ( personaje_->y()>0) personaje_-> setY(personaje_->y()-5);
    }
    if (tecla-> key() == Qt:: Key_S) { //movimiento hacia abajo
        if (personaje_->y()+(tam)<ui->View2->height()-2) personaje_-> setY(personaje_->y()+5);
    }
    if (tecla-> key() == Qt::Key_R){ //aqui se anade el objeto de la clase disparo
        proyect_ = new proyectil; //para que genere nuevas posiciones de memoria cada vez que se dispara
        proyect_->set_scale(tam/3,tam/3);
        proyect_->setPos(personaje_->x()+tam*0.38, personaje_->y()+tam*0.38);
        proyect_->set_imagen();
        scene1->addItem(proyect_);
        Time_Proyec->start(70);
    }
    //el movimiento del segundo jugador se da con las flechas de arriba y abajo y se dispara con la tecla P
}

void inicio::movimiento_proyectil()
{
    proyect_->setX(proyect_->x()+5);  //SE MUEVE DE MANERA RECTILINEA
}

void inicio::generar_enemy(QList<enemigo1*> lista_enemigos)
{
    //Funcion que se encarga de generar las posiciones aleatorias de (x,y) para ubicar los enemigos en el juego

    bool bandera=true;
    int aleatorioX, aleatorioY;
    for (int i=0; i<lista_enemigos.size();i++ ){
        lista_enemigos[i]->set_scale(tam,tam);

        //se generarn los numeros aleatorios
        aleatorioX=(rand()%(ui->View2->width()-2))+1000;
        aleatorioY = rand()%((ui->View2->height()-2)-2*tam);

        for (int j=0; j<i ;j++){ //j son los objetos ya creados
           float w=(lista_enemigos[i]->size)*0.5;
           // coordenadas de los centros
           float x1=lista_enemigos[j]->x()+w,x2=aleatorioX+w;
           float y1=lista_enemigos[j]->y()+w,y2=aleatorioY+w;
           float dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2)); //formula de la distancia entre los centros
           //comprobar que las imagenes no esten una encima de otra
           if (dist<=sqrt(2)*lista_enemigos[i]->size) bandera=false;
        }
        if (!bandera) i--; //vuelve a repetir todo el proceso con el mismo elemento
        else {
            lista_enemigos[i]->setPos(aleatorioX, aleatorioY);
            lista_enemigos[i]->set_imagen();
            scene1->addItem( lista_enemigos[i]);
        }
        bandera=true;
    }
}

void inicio::nivel()
{
    //Condicional para cada vez que pase de nivel aumentar en 1
}

void inicio::vidas()
{
    //Reducir las vidas cada vez que el enemigo toca al jugador o las balas del jefe final tocan al jugador
}

void inicio::tiempo()
{
    ui->lcdNumber->display(contador);
    contador -=1;
}

void inicio::movimientos_enemigos()
{
    //Funcion que se encarga de crear los puntos (x,y) aleatorios de cada enemigo

    for (int i=0; i<lista_enemigos.size(); i++){
        int posX= lista_enemigos[i]->x();// posY=enemy1[i]->y();
        lista_enemigos[i]-> setX(lista_enemigos[i]->x()-5);//PARA LA IZQUIERDA

        if ((personaje_->x()+tam >= lista_enemigos[i]->x()+tam && personaje_->x()-tam <= lista_enemigos[i]->x()+tam) && ((personaje_->y()-tam<=lista_enemigos[i]->y()+tam && personaje_->y()+tam >= lista_enemigos[i]->y()+tam ) || ( personaje_->y()+tam >=  lista_enemigos[i]->y()-tam &&  personaje_->y()+tam <= lista_enemigos[i]->y()+tam))){
            scene1->removeItem(personaje_);
            //TERMINAR JUEGO, mostrar un cuadro de dialogo de que perdio

            delete personaje_;//preguntar pq se muere el programa y pq no se pone esto en el destructor!!

           /* MainWindow * mainwindow = new MainWindow ();
            mainwindow -> show();*/

           // MainWindow w;
           // w.show();

           // close();

        }
        if(posX<0){
            scene1->removeItem( lista_enemigos[i]);
            delete lista_enemigos[i];
            lista_enemigos.removeAt(i);
     }
   }
}
