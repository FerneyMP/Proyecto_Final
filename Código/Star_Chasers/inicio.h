#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QKeyEvent>
#include <QGraphicsView>
#include <QString>
#include <iostream>
#include <fstream>
#include <QList>
#include <math.h>
#include <QObject>

#include "jugador1.h"
#include "jugador2.h"
#include "enemigo1.h"
#include "window2.h"
#include "proyectil.h"

#define tam 50
#define cantidad_enemigos 10

namespace Ui {
class inicio;
}

class inicio : public QMainWindow
{
    Q_OBJECT

public:

    explicit inicio(QWidget *parent = nullptr);
     void setup_scene1();
     void keyPressEvent(QKeyEvent *tecla);
     void generar_enemy(QList<enemigo1*> lista_enemigos);
     void nivel();
     void vidas();
     void puntaje();
     void colisiones();
     int contador = 180;
     int puntaje1 =  0;
     int puntaje2 =  0;
     int vida     =  3;
    ~inicio();

private slots:
   void movimientos_enemigos();
   void movimiento_proyectil();
   void tiempo();

private:
    Ui::inicio *ui;
    QGraphicsScene *scene1;
    //QGraphicsView *View2;

    int h;
    window2 *mapa_1;
    jugador1 *personaje_;
    jugador2 *personaje2_;

    QTimer *time_enemy1;
    QList<enemigo1*> lista_enemigos;

    proyectil *proyect_;
    QTimer *Time_Proyec;
    QTimer *tempo;
    float xo,yo, vxo = 4.5, vyo = 5, g = 1, T = 1; //velocidad(x,y) y gravedad constantes, posicion(x,y) varían
    unsigned long long n=0;
    float x,y;

    };

#endif // INICIO_H
