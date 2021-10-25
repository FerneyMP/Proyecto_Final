#ifndef PROYECTIL_H
#define PROYECTIL_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>
#include <QTimer>
#include "enemigo1.h"

#include <QList>
#include <QGraphicsScene>

class proyectil: public QObject, public QGraphicsPixmapItem
{

public:
    proyectil(int a);
    void set_imagen();
    void set_scale(int a, int b);
    ~proyectil();

public slots:
    void movimiento();
    bool activar(QList <enemigo1 *> *lista_enemigos, int puntaje1, QGraphicsScene *escena);

private:
    QPixmap proyectil_;
    int scalex =1, scaley= 1;
    QTimer *timer;
};

#endif // PROYECTIL_H
