#ifndef MY_QLABEL_H
#define MY_QLABEL_H

#include <QWidget>
#include <QMouseEvent>
#include <QEvent>
#include <QDebug>

class my_qlabel : public QWidget
{
    Q_OBJECT
public:
    explicit my_qlabel(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void leaveEvent(QEvent *);

    int x, y;

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();

public slots:
};

#endif // MY_QLABEL_H
