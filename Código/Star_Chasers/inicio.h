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
#include "asteroide.h"

#define tam 50
#define cantidad_enemigos 10
#define cantidad_asteroides 3

namespace Ui {
class inicio;
}

class inicio : public QMainWindow
{
    Q_OBJECT

public:

    explicit inicio(QWidget *parent = nullptr);
     void setup_scene1();
     void setup_scene2();
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
     bool cambiar = false;
    ~inicio();

private slots:
   void movimientos_enemigos();
   void movimiento_proyectil();
   //void activar_jefe();
   void tiempo();

   void movimiento_jefe();
   void movimientoProyectil_jefe();
   void movimientos_asteroides();


private:
    Ui::inicio *ui;
    QGraphicsScene *scene1, *scene2;
    //QGraphicsView *View2;

    int h;
    window2 *mapa_1, *mapa_2;
    jugador1 *personaje_;
    jugador2 *personaje2_;

    QTimer *time_enemy1, *time_enemyFinal;
    QList<enemigo1*> lista_enemigos;

    enemigo1 *jefe_final;
    proyectil *proyect_;

    QList<asteroide*> lista_asteroides;

    QTimer *Time_Proyec;
    QTimer *tempo;
    float xo,yo, vxo = 4.5, vyo = 5, g = 1, T = 1; //velocidad(x,y) y gravedad constantes, posicion(x,y) varían
    unsigned long long n=0;
    float x,y;

    };

#endif // INICIO_H
