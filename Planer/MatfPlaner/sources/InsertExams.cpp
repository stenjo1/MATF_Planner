#include "headers/InsertExams.h"
#include "ui_InsertExams.h"
#include "headers/Subject.hpp"
#include"headers/Utils.h"

InsertExams::InsertExams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertExams)
{
    ui->setupUi(this);
    QList<Exam*> *exams = new QList<Exam*>; //feels weird
}

void InsertExams::addExam(){
    QString dateString1 = ui->dateLineEdit1->text(); //postoji i DateTimeEdit, treba nam i vreme ispita, mozda je lakse preko toga
    QDate date1 = Utils::fromQStringtoQDate(dateString1);
    QString dateString2 = ui->dateLineEdit2->text(); //postoji i DateTimeEdit, treba nam i vreme ispita, mozda je lakse preko toga
    QDate date2 = Utils::fromQStringtoQDate(dateString2);
    QString name = ui->examLineEdit->text();
    Subject dummy; //ovde treba da prepoznas po imenu predmet i da povuces iz baze
    QString url = ui->urlLineEdit->text();
    Exam *exam1 =new Exam(date1,url,dummy,false,0);// NEMOJ DA ZOVES KONSTRUKTOR KAO U JAVI SARO
    Exam *exam2 =new Exam(date2,url,dummy,false,0);
    exams->push_back(exam1);
    exams->push_back(exam2);//lista dinamicki alociranih ispita
}

InsertExams::~InsertExams()
{
    delete ui;
    for (auto el: *exams)
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
    ui->dateLineEdit1->clear();
    ui->dateLineEdit2->clear();

}


void InsertExams::on_endInputExamButton_clicked()
{
    close();
}

