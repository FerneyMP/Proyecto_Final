#include "window2.h"

window2::window2(int width, int heigth)
{
    QPixmap entrada(":/new/prefix1/images/level2.jpeg");
    h = heigth;
    w = width;
    setPixmap(entrada.scaled(w,h));
}
int window2::get_h()
{
    return h;
}

