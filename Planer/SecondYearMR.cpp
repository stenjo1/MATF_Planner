#include "SecondYearMR.h"
#include "ui_SecondYearMR.h"
#include "ThirdYearMR.h"

SecondYearMR::SecondYearMR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondYearMR)
{
    ui->setupUi(this);
}

SecondYearMR::~SecondYearMR()
{
    delete ui;
}

void SecondYearMR::on_pbNext_clicked()
{
    ThirdYearMR *w = new ThirdYearMR;
    w->show();
    close();
}

