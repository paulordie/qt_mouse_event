#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

private slots:

    void Mouse_current_pos();
    void Mouse_Pressed();
    void Mouse_left();


private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
