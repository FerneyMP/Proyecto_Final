#ifndef WIN_H
#define WIN_H

#include <QDialog>
#include <QGraphicsScene>
#include "cuadros_de_dialogo.h"

namespace Ui {
class win;
}

class win : public QDialog
{
    Q_OBJECT

public:
    explicit win(QWidget *parent = nullptr);
    ~win();
    void imagen();

private:
    Ui::win *ui;
    QGraphicsScene *scena;
    cuadros_de_dialogo *dialogos;
};

#endif // WIN_H
