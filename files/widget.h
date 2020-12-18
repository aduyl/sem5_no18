#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>
#include <QScrollArea>
#include <QMessageBox>
#include <QKeyEvent>
#include <QtMath>
#include <paintpoint.h>
#include <figures.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


    int wid = 1200;
    int hei = 800;
    int lineSize = 1;
    bool isInt = false;
    int R = 0;
    int G = 0;
    int B = 0;
    int figureCase = 0;

private slots:
    void on_buHandButton_clicked();

    void on_figuresButton_clicked();

    void on_redButton_clicked();

    void on_blackButton_clicked();

    void on_violetButton_clicked();

    void on_midnightBlueButton_clicked();

    void on_blueButton_clicked();

    void on_lineEdit_textChanged();

    void on_radioButton_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_3_clicked();

private:
    Ui::Widget *ui;
    paintPoint *point;
    Figures *figure;
};
#endif // WIDGET_H
