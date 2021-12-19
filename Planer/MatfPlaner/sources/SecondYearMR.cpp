#include "headers/SecondYearMR.h"
#include "ui_SecondYearMR.h"

SecondYearMR::SecondYearMR(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondYearMR),
    thirdWindow(new ThirdYearMR)
{
    ui->setupUi(this);
    connect(thirdWindow, &ThirdYearMR::backSignal, this, &QWidget::show);

}

SecondYearMR::~SecondYearMR()
{
    delete ui;
}

void SecondYearMR::on_pbNext_clicked()
{
    thirdWindow->setStudent(_student);
    thirdWindow->show();
    hide();
}


void SecondYearMR::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void SecondYearMR::on_pbEnd_clicked()
{
    hide();
}

void SecondYearMR::setStudent(Student* student){
    _student = student;
}
