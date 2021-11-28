#include "headers/InsertExams.h"
#include "ui_InsertExams.h"
#include "headers/Subject.hpp"
#include"headers/Utils.h"

InsertExams::InsertExams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertExams)
{
    ui->setupUi(this);
}

void InsertExams::addExam(){
    QString dateString = ui->dateLineEdit->text();
    QDate date = Utils::fromQStringtoQDate(dateString);
    QString name = ui->examLineEdit->text();
    Subject dummy; //ovde treba da prepoznas po imenu predmet i da povuces iz baze
    QString url = ui->urlLineEdit->text();
    Exam *exam =new Exam(date,url,dummy,false,0);// NEMOJ DA ZOVES KONSTRUKTOR KAO U JAVI SARO
    exams.push_back(exam); //lista dinamicki alociranih ispita
}

InsertExams::~InsertExams()
{
    delete ui;
    for (auto el: exams)
        delete el;
}

void InsertExams::on_addExamButton_clicked()
{
    addExam(); //ovde ce biti mnogo gresaka mora neki try catch
        //da ispise to pogledaj
}


void InsertExams::on_clearWidgetButton_clicked()
{
    ui->examLineEdit->clear();
    ui->urlLineEdit->clear();
    ui->dateLineEdit->clear();

}

