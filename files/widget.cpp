#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMouseTracking(true);

    ui->widget_2->hide();

    point = new paintPoint();
    figure = new Figures();

    this->resize(wid, wid);          // Устанавливаем размеры окна приложения
    this->setFixedSize(wid, hei);

//    point = new paintPoint();   // Инициализируем графическую сцену      // Инициализируем графическую сцену
//    ui->graphicsView->setScene(point);  // Устанавливаем графическую сцену

//    point->setSceneRect(0,0,wid,hei); // Устанавливаем размер сцены
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_buHandButton_clicked()
{
    ui->widget_2->hide();
//    point = new paintPoint();   // Инициализируем графическую сцену      // Инициализируем графическую сцену
//    delete point;
//    delete figure;
    ui->graphicsView->setScene(point);  // Устанавливаем графическую сцену

    point->setSceneRect(0,0,wid,hei); // Устанавливаем размер сцены
    point->getSize(lineSize);
    point->getColor(R, G, B);


}

void Widget::on_figuresButton_clicked()
{
    ui->widget_2->show();
//    delete point;
//    delete figure;
    ui->graphicsView->setScene(figure);
    figure->setSceneRect(0,0,wid,hei); // Устанавливаем размер сцены
    figure->getCase(figureCase);
    figure->getSize(lineSize);
    figure->getColor(R, G, B);
}

void Widget::on_redButton_clicked()
{
    R = 205;
    G = 92;
    B = 92;
    point->getColor(R, G, B);
}

void Widget::on_blackButton_clicked()
{
    R = 0;
    G = 0;
    B = 0;
    point->getColor(R, G, B);
}

void Widget::on_violetButton_clicked()
{
    R = 219;
    G = 112;
    B = 147;
    point->getColor(R, G, B);
}

void Widget::on_midnightBlueButton_clicked()
{
    R = 25;
    G = 25;
    B = 112;
    point->getColor(R, G, B);
}

void Widget::on_blueButton_clicked()
{
    R = 0;
    G = 128;
    B = 128;
    point->getColor(R, G, B);
}

void Widget::on_lineEdit_textChanged()
{
    QString from_inbox = ui->lineEdit->text();

    if (from_inbox != ""){
        lineSize = from_inbox.toInt(&isInt,10);
    }
    point->getSize(lineSize);


}

void Widget::on_radioButton_clicked()
{
    //line
    figureCase = 0;
}

void Widget::on_radioButton_2_clicked()
{
    //rect
    figureCase = 1;
}

void Widget::on_radioButton_3_clicked()
{
    //cyrcle
    figureCase = 2;
}
