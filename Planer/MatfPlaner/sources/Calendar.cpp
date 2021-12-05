#include "headers/Calendar.h"
#include "ui_Calendar.h"


Calendar::Calendar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calendar),
    loginWindow(new LoginPage)
{
    ui->setupUi(this);
}

Calendar::Calendar(QList<Exam*> exams,QWidget *parent):
    QWidget(parent),
    ui(new Ui::Calendar){
    ui->setupUi(this);
}


Calendar::~Calendar()
{
    delete ui;
    for (auto exam : _exams) {
        delete exam;
    }
}

void Calendar::on_pbNewExam_clicked()
{
    //examWindow->show();

}


void Calendar::on_pbProfile_clicked()
{
    loginWindow->show();
}


