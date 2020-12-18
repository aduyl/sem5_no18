#include "paintpoint.h"

paintPoint::paintPoint(QObject *parent) : QGraphicsScene(parent)
{

}

void paintPoint::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{

   // painter->setPen(QPen(QColor(R, G, B), brushSize, Qt::SolidLine, Qt::FlatCap));

//    if(isPressed){
//        painter->drawPoint(point);
//    }


    Q_UNUSED(option)
    Q_UNUSED(widget)
}

paintPoint::~paintPoint()
{

}

void paintPoint::getColor(int r, int g, int b)
{
    R = r;
    G = g;
    B = b;
}

void paintPoint::getSize(int size)
{
    brushSize = size;
}

void paintPoint::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    //qDebug() << event->pos();
    addEllipse(event->scenePos().x() - 5,
                   event->scenePos().y() - 5,
                   brushSize,
                   brushSize,
                   QPen(Qt::NoPen),
                   QBrush(QColor(R, G, B)));
        // Сохраняем координаты точки нажатия
        previousPoint = event->scenePos();
}

void paintPoint::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    isPressed = false;
    Q_UNUSED(event)
}

void paintPoint::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    //qDebug() << event->pos();
    // Отрисовываем линии с использованием предыдущей координаты
        addLine(previousPoint.x(),
                previousPoint.y(),
                event->scenePos().x(),
                event->scenePos().y(),
                QPen(QColor(R, G, B),brushSize,Qt::SolidLine,Qt::RoundCap));
        // Обновляем данные о предыдущей координате
        previousPoint = event->scenePos();

}
