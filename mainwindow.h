#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Header.h"
#include "controller.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void adjustViewSize();

private:
    void initScene();
    void initSceneBackground();
    void reflash();

    QGraphicsView *view;
    QGraphicsScene *scene;
    Controller *controller{};
};
#endif // MAINWINDOW_H
