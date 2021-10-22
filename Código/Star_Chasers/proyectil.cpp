#include "proyectil.h"

proyectil::proyectil()
{
    proyectil_.load(":/new/prefix1/images/proyectil_.jpg");

}

int proyectil::set_imagen()
{
    setPixmap(proyectil_.scaled(scalex,scaley));
}

int proyectil::set_scale(int a, int b)
{
    scalex = a;
    scaley = b;
}

/*
void proyectil::activar()
{
    timer->start(250);
}*/

