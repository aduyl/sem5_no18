#include "figures.h"


Figures::Figures(QObject *parent) : QGraphicsScene(parent)
{
    //this->setMouseTracking(true);
}


Figures::~Figures()
{

}

void Figures::getColor(int r, int g, int b)
{
    R = r;
    G = g;
    B = b;
}

void Figures::getSize(int size)
{
    brushSize = size;
}

void Figures::getCase(int Cse)
{
    if(Cse == 0){
        isLine = true;
        isRect = false;
        isCyrcle = false;

    }
    if(Cse == 1){
        isLine = false;
        isRect = true;
        isCyrcle = false;
    }
    if(Cse == 2){
        isLine = false;
        isRect = false;
        isCyrcle = true;

    }
}

void Figures::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if(isLine){
        isLine = false;
        isLineFin = true;
        startPoint = event->pos();
        startX =static_cast<int>( event->pos().x());
        startY =static_cast<int>( event->pos().y());
        //addEllipse(event->pos().x(), event->pos().y(),brushSize, brushSize,QPen(Qt::NoPen),QBrush(QColor(R, G, B)));



    }

    if(isRect){

    }

    if(isCyrcle){

    }
}

void Figures::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    Q_UNUSED(event)
}

void Figures::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if(isLine){
        //QPointF temp = startPoint;
        //finalePoint = event->pos();
        qDebug() << startPoint;
        qDebug() << event->pos();
        addLine(startPoint.x(),
                startPoint.y(),
                event->pos().x(),
                event->pos().y(),
                QPen(QColor(R, G, B),brushSize,Qt::SolidLine,Qt::RoundCap));
    }

    if(isRect){

    }

    if(isCyrcle){

    }
}
