#ifndef ASTEROIDE_H
#define ASTEROIDE_H

#include <QObject>
#include <QGraphicsPixmapItem>
#include <QPixmap>

class asteroide : public QObject, public QGraphicsPixmapItem
{
public:
    asteroide();
    void set_imagen();
    void set_scale(int a, int b);
private:
    QPixmap asteroide_;
    int scalex =1, scaley= 1;
};

#endif // ASTEROIDE_H
