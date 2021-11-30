#include "headers/SecondYearI.h"
#include "ui_SecondYearI.h"

SecondYearI::SecondYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondYearI),
    thirdWindow(new ThirdYearI)
{
    ui->setupUi(this);
    connect(thirdWindow, &ThirdYearI::backSignal, this, &QWidget::show);

}

SecondYearI::~SecondYearI()
{
    delete ui;
}




void SecondYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void SecondYearI::on_pbNext_clicked()
{
    thirdWindow->show();
    hide();
}


void SecondYearI::on_pbEnd_clicked()
{
    hide();
}

