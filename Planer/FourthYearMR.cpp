#include "FourthYearMR.h"
#include "ui_FourthYearMR.h"
#include "ThirdYearMR.h"

FourthYearMR::FourthYearMR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourthYearMR)
{
    ui->setupUi(this);
}

FourthYearMR::~FourthYearMR()
{
    delete ui;
}

void FourthYearMR::on_pbEnd_clicked()
{

}


void FourthYearMR::on_pbBack_clicked()
{
    ThirdYearMR *w = new ThirdYearMR;
    w->show();
    close();
}

