#include "window2.h"

window2::window2(int width, int heigth)
{
    h = heigth;
    w = width;
    QPixmap entrada(":/new/prefix1/images/presentacion.jpeg");
    setPixmap(entrada.scaled(w,h));
}
int window2::get_h()
{
    return h;
}

