#include "headers/FourthYearMR.h"
#include "ui_FourthYearMR.h"


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
    _student->writeToJson();
    hide();
    //nzm dal ovde curi memorija
}


void FourthYearMR::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}

void FourthYearMR::setStudent(Student* student){
    _student = student;
}


