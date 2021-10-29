#include "cuadros_de_dialogo.h"

cuadros_de_dialogo::cuadros_de_dialogo(int width, int heigth, int a)
{
    h = heigth;
    w = width;
    if(a == 1){
        QPixmap gameOver(":/new/prefix1/images/game_over.jpg");
        setPixmap(gameOver.scaled(w,h));
    }
    else if(a == 2){
        QPixmap win(":/new/prefix1/images/win.jpg");
        setPixmap(win.scaled(w,h));
    }
}

int cuadros_de_dialogo::get_h()
{
    return h;
}

