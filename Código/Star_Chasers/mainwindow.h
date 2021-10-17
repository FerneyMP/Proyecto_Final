#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>
#include <QGraphicsView>

#include "window2.h"
#define tam 50

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setup_scene1();
    void setup_scene2();
    void setup_window2();




private slots:
    void on_label_linkActivated(const QString &link);

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene1, *scene2;


    window2 *wind2;
    QMainWindow *Window2; //Ventana #2
    QGraphicsView *View2;
    int W1, H1, h;


};
#endif // MAINWINDOW_H
