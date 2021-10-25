#include "asteroide.h"

asteroide::asteroide()
{
    asteroide_.load(":/new/prefix1/images/asteoroide.jpeg");
}

void asteroide::set_imagen()
{
    setPixmap(asteroide_.scaled(scalex,scaley));
}

void asteroide::set_scale(int a, int b)
{
    scalex = a;
    scaley = b;
}
