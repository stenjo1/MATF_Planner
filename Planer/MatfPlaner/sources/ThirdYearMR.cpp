#include "headers/ThirdYearMR.h"
#include "ui_ThirdYearMR.h"
#include "headers/FourthYearMR.h"
#include "headers/SecondYearMR.h"

ThirdYearMR::ThirdYearMR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThirdYearMR)
{
    ui->setupUi(this);
}

ThirdYearMR::~ThirdYearMR()
{
    delete ui;
}

void ThirdYearMR::on_pbNext_clicked()
{
    FourthYearMR *w = new FourthYearMR;
    w->show();
    close();
}


void ThirdYearMR::on_pbBack_clicked()
{
    SecondYearMR *w = new SecondYearMR;
    w->show();
    close();
}


void ThirdYearMR::on_pbEnd_clicked()
{

}

