#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>
#include "jugador1.h"
#include <QList>

class proyectil: public QObject, public QGraphicsPixmapItem
{

public:
    proyectil(int a);
    void set_imagen();
    void set_scale(int a, int b);
    ~proyectil();

public slots:
    void movimiento();
    void activar();

private:
    QPixmap proyectil_;
    int scalex =1, scaley= 1;
    QTimer *timer;
};

#endif // PROYECTIL_H
