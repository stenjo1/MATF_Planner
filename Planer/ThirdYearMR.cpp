#include "ThirdYearMR.h"
#include "ui_ThirdYearMR.h"
#include "FourthYearMR.h"

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

