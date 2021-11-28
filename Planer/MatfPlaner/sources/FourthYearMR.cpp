#include "headers/FourthYearMR.h"
#include "ui_FourthYearMR.h"
#include "headers/ThirdYearMR.h"
#include"headers/InsertExams.h"
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
    InsertExams *w = new InsertExams;
    w->show();
    hide();
    //nzm dal ovde curi memorija
}


void FourthYearMR::on_pbBack_clicked()
{
    ThirdYearMR *w = new ThirdYearMR;
    w->show();
    close();
}

