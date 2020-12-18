#ifndef PAINTPOINT_H
#define PAINTPOINT_H

#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsScene>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>

class paintPoint: public QGraphicsScene
{
    Q_OBJECT
public:
    explicit paintPoint(QObject *parent = nullptr);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    ~paintPoint();
    int R = 0;
    int G = 0;
    int B = 0;
    int brushSize = 1;
    bool isPressed = false;
    void getColor(int r, int g, int b);
    void getSize(int size);
private:
    QPointF     previousPoint;


private:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

};

#endif // PAINTPOINT_H
