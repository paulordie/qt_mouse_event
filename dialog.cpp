#include "dialog.h"
#include "ui_dialog.h"

#include "my_qlabel.h"
#include <QString>


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->IbIMouse, SIGNAL(Mouse_Pos()),this, SLOT(Mouse_current_pos()));
    connect(ui->IbIMouse, SIGNAL(Mouse_Pressed()),this, SLOT(Mouse_Pressed()));
    connect(ui->IbIMouse, SIGNAL(Mouse_Left()),this, SLOT(Mouse_left()));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::Mouse_current_pos()
{
    ui->IbIMouse_current_pos->setText(QString("X = %1, Y = %2").arg(ui->IbIMouse->x)
                                      .arg(ui->IbIMouse->y));
    ui->IbIMouse_Current_Event->setText("Mouse is Moving");
}

void Dialog::Mouse_Pressed()
{
    ui->IbIMouse_Current_Event->setText("Mouse Pressed!");
}

void Dialog::Mouse_left()
{
    ui->IbIMouse_Current_Event->setText("Mouse Left!");
}
