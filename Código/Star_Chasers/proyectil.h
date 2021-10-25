#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include "enemigo1.h"

#include <QList>
#include <QGraphicsScene>

class proyectil: public QObject, public QGraphicsPixmapItem
{

public:
    proyectil(int a);
    void set_imagen();
    void set_scale(int a, int b);

public slots:
    void movimiento();
    bool activar(QList <enemigo1 *> *lista_enemigos, QGraphicsScene *escena);
    void movimiento_proyectil(QList<proyectil *> lista_proyectiles);

private:
    QPixmap proyectil_;
    int scalex =1, scaley= 1;
};

#endif // PROYECTIL_H
