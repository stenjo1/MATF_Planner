#include "headers/Calendar.h"
#include "ui_Calendar.h"
#include "headers/InsertExams.h"
#include "headers/LoginPage.h"

Calendar::Calendar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calendar)
{
    ui->setupUi(this);
}

Calendar::~Calendar()
{
    delete ui;
}

void Calendar::on_pbNewExam_clicked()
{
    InsertExams* w = new InsertExams;
    w->show();

}


void Calendar::on_pbProfile_clicked()
{
    LoginPage *w = new LoginPage;
    w->show();
}

