#include "my_qlabel.h"

my_qlabel::my_qlabel(QWidget *parent) : QWidget(parent)
{

}

void my_qlabel::mouseMoveEvent(QMouseEvent *event)
{
    this->x = event->x();
    this->y = event->y();
    emit Mouse_Pos();
}

void my_qlabel::mousePressEvent(QMouseEvent *event)
{
    emit Mouse_Pressed();
}

void my_qlabel::leaveEvent(QEvent *)
{
    emit Mouse_Left();
}
