#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>


class proyectil: QObject, public QGraphicsPixmapItem
{
public:
    proyectil();
    int set_imagen();
    int set_scale(int a, int b);
    //void activar();
    //QTimer *timer;
private:
    QPixmap proyectil_;
    int scalex =1, scaley= 1;

};

#endif // PROYECTIL_H
