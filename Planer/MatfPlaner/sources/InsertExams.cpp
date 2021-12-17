#include "headers/InsertExams.h"
#include "ui_InsertExams.h"
#include "headers/Subject.hpp"
#include"headers/Utils.h"

InsertExams::InsertExams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertExams),
    exams(new QVector<Exam*>)
{
    ui->setupUi(this);
//    for (auto subject : _student->getAllSubjects()) {
//         ui->comboBox->addItem(subject.getName());
//    }

}
InsertExams::~InsertExams()
{
    delete ui;
    for (auto el: *exams)
        delete el;
}


void InsertExams::on_addExamButton_clicked()
{

    Subject dummy; //ovde treba da prepoznas po imenu predmet i da povuces iz baze
    QString dateString1 = ui->dateLineEdit1->text();
    QDate date1 = QDate::fromString(dateString1, "dd'.'MM'.'YYYY'.'");
    printf("%s\n", date1.toString().toStdString().c_str());
    if (!(date1.isValid())){
        ui->errorLabel->setText("Uneseni datum nije validan!");
        return ;
    }
    QString timeString1 = ui->timeLineEdit1->text();
    QTime time1 = QTime::fromString(timeString1, "hh:mm");
    printf("%s\n", timeString1.toStdString().c_str());
    if (!time1.isValid()) {
        ui->errorLabel->setText("Uneseno vreme nije validno!");
        return;
    }
    QString dateString2 = ui->dateLineEdit2->text();
    QDate date2 = QDate::fromString(dateString2, "dd.MM.YYYY.");
    if (!date2.isValid()) {
        ui->errorLabel->setText("Uneseni datum nije validan!");
        return ;
    }
    QString timeString2 = ui->timeLineEdit2->text();
    QTime time2 = QTime::fromString(timeString2, "hh:mm");
    if (!time2.isValid()) {
        ui->errorLabel->setText("Uneseno vreme nije validno!");
        return;
    }

    int importanceRate = ui->importanceRateLineEdit->text().toInt();
    QString url = ui->urlLabel->text();

    Exam *exam1 = new Exam(dummy, date1, time1, url, importanceRate);
    Exam *exam2 = new Exam(dummy, date2, time2, url, importanceRate);

    exams->push_back(exam1);
    exams->push_back(exam2);
}



void InsertExams::on_clearWidgetButton_clicked()
{

    ui->urlLineEdit->clear();
    ui->dateLineEdit1->clear();
    ui->dateLineEdit2->clear();
    ui->importanceRateLineEdit->clear();
    ui->errorLabel->clear();
    ui->comboBox->clear();

}


void InsertExams::on_endInputExamButton_clicked()
{
    close();
}

