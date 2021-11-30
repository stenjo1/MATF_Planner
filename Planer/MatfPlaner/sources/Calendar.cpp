#include "headers/Calendar.h"
#include "ui_Calendar.h"


Calendar::Calendar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calendar),
    loginWindow(new LoginPage)
{
    ui->setupUi(this);
}

Calendar::~Calendar()
{
    delete ui;
}

void Calendar::on_pbNewExam_clicked()
{
    //examWindow->show();

}


void Calendar::on_pbProfile_clicked()
{
    loginWindow->show();
}


