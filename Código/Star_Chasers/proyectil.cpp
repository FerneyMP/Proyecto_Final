#include "proyectil.h"

proyectil::proyectil(int a)
{
    if(a == 1) proyectil_.load(":/new/prefix1/images/proyectil_.jpg");
    else if(a == 2) proyectil_.load(":/new/prefix1/images/shoot_2.png");
    //timer = new QTimer;
    //connect(timer, SIGNAL(timeout()),this, SLOT(movimiento()));
}
                    //:/new/prefix1/images/proyectil_.jpg
void proyectil::set_imagen()
{
    setPixmap(proyectil_.scaled(scalex,scaley));
}

void proyectil::set_scale(int a, int b)
{
    scalex = a;
    scaley = b;
}

void proyectil::activar()
{

}

proyectil::~proyectil()
{
    //delete timer;
}

void proyectil::movimiento()
{
    setPos(x()+5,y());
}
