#include "proyectil.h"

proyectil::proyectil()
{
    proyectil_.load(":/new/prefix1/images/proyectil_.jpg");
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

/*
void proyectil::activar()
{
    timer->start(250);
}*/

