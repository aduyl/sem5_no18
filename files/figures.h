#ifndef FIGURES_H
#define FIGURES_H

#include <QObject>
#include <QWidget>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>
#include <QGraphicsScene>
#include <QKeyEvent>

class Figures: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit Figures(QObject *parent = nullptr);
    ~Figures();
    int R = 0;
    int G = 0;
    int B = 0;
    int brushSize = 1;


    bool isLine = false;
    bool isRect = false;
    bool isCyrcle = false;
    bool isLineFin = false;
    bool isRectFin = false;
    bool isCyrcleFin = false;

    QPointF     startPoint;
    QPointF     finalePoint;
    int startX = 0;
    int startY = 0;

    void getColor(int r, int g, int b);
    void getSize(int size);
    void getCase(int Cse);

private:

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // FIGURES_H
