#include "headers/FourthYearI.h"
#include "ui_FourthYearI.h"

FourthYearI::FourthYearI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourthYearI)
{
    ui->setupUi(this);
}

FourthYearI::~FourthYearI()
{
    delete ui;
}


void FourthYearI::on_pbEnd_clicked()
{
    hide();
}


void FourthYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}

