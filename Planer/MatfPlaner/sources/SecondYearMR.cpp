#include "headers/SecondYearMR.h"
#include "ui_SecondYearMR.h"
#include "headers/ThirdYearMR.h"
#include "headers/FirstYearM.h"

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


void SecondYearMR::on_pbBack_clicked()
{
    FirstYearM *w = new FirstYearM;
    w->show();
    close();
}


void SecondYearMR::on_pbEnd_clicked()
{

}

