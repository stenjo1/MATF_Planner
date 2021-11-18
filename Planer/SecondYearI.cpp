#include "SecondYearI.h"
#include "ui_SecondYearI.h"
#include "FirstYearI.h"

SecondYearI::SecondYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondYearI)
{
    ui->setupUi(this);
}

SecondYearI::~SecondYearI()
{
    delete ui;
}

void SecondYearI::on_back_button_clicked()
{
    FirstYearI *w = new FirstYearI;
    w->show();
    hide();
}

