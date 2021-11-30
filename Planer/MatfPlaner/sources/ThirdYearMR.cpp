#include "headers/ThirdYearMR.h"
#include "ui_ThirdYearMR.h"

ThirdYearMR::ThirdYearMR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThirdYearMR),
    fourthWindow(new FourthYearMR)
{
    ui->setupUi(this);
    connect(fourthWindow, &FourthYearMR::backSignal, this, &QWidget::show);
}

ThirdYearMR::~ThirdYearMR()
{
    delete ui;
}

void ThirdYearMR::on_pbNext_clicked()
{
    fourthWindow->show();
    hide();
}


void ThirdYearMR::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void ThirdYearMR::on_pbEnd_clicked()
{
    hide();
}

