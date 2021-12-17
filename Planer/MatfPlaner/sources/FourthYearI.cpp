#include "headers/FourthYearI.h"
#include "ui_FourthYearI.h"

FourthYearI::FourthYearI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourthYearI),
    _student(new Student)
{
    ui->setupUi(this);
}

FourthYearI::~FourthYearI()
{
    delete ui;
}


void FourthYearI::on_pbEnd_clicked()
{
    _student->writeToJson();
    hide();
}


void FourthYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}

void FourthYearI::setStudent(Student *student){
    _student = student;
}

