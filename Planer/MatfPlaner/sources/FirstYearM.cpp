#include "headers/FirstYearM.h"
#include "ui_FirstYearM.h"


FirstYearM::FirstYearM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstYearM),
    secondWindow(new SecondYearMR)
{
    ui->setupUi(this);

    connect(secondWindow, &SecondYearMR::backSignal, this, &QWidget::show);
}

FirstYearM::~FirstYearM()
{
    delete ui;
}

void FirstYearM::on_pbNext_clicked()
{
    secondWindow->setStudent(_student);
    secondWindow->show();
    hide();

}


void FirstYearM::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void FirstYearM::on_pbEnd_clicked()
{
    hide();
}

void FirstYearM::setStudent(Student* student){
    _student = student;
}


