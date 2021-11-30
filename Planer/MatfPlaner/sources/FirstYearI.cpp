#include "headers/FirstYearI.h"
#include "ui_FirstYearI.h"

FirstYearI::FirstYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstYearI),
    secondWindow(new SecondYearI)
{
    ui->setupUi(this);
    connect(secondWindow, &SecondYearI::backSignal, this, &QWidget::show);
}

FirstYearI::~FirstYearI()
{
    delete ui;
}



void FirstYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void FirstYearI::on_pbNext_clicked()
{
    secondWindow->show();
    hide();
}


void FirstYearI::on_pbEnd_clicked()
{
    hide();
}

