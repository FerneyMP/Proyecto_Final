#include "proyectil.h"

proyectil::proyectil(int a)
{
    if(a == 1) proyectil_.load(":/new/prefix1/images/proyectil_.jpg");
    else if(a == 2) proyectil_.load(":/new/prefix1/images/shoot_2.png");
}

void proyectil::set_imagen()
{
    setPixmap(proyectil_.scaled(scalex,scaley));
}

void proyectil::set_scale(int a, int b)
{
    scalex = a;
    scaley = b;
}

bool proyectil::activar(QList<enemigo1 *> *lista_enemigos, QGraphicsScene *escena)
{
    bool bandera = false;
    for(int i=0; i<lista_enemigos->size(); i++){
        if(collidesWithItem(lista_enemigos->at(i))){
            escena->removeItem(lista_enemigos->at(i));
            // se elimina de la escena
            delete lista_enemigos->at(i);
            lista_enemigos->removeAt(i); //se elimina del contenedor
            bandera = true;
        }
    }
    return bandera;
}

void proyectil::movimiento_proyectil(QList<proyectil *> lista_proyectiles)
{
    for(int i = 0; i<lista_proyectiles.size(); i++){
        lista_proyectiles[i]->setX(lista_proyectiles[i]->x()+5);  //SE MUEVE DE MANERA RECTILINEA
    }
}




