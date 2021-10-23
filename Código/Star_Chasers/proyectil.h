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
    void set_imagen();
    void set_scale(int a, int b);

private:
    QPixmap proyectil_;
    int scalex =1, scaley= 1;

};

#endif // PROYECTIL_H
