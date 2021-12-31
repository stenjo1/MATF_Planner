#include "headers/InsertExams.h"
#include "ui_InsertExams.h"
#include "headers/Subject.h"

InsertExams::InsertExams(QVector<Exam*>& allExams, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertExams),
    _exams(allExams)
{
    ui->setupUi(this);
}
InsertExams::~InsertExams()
{
    delete ui;
}

void InsertExams::loadComboBox()
{
    ui->comboBox->clear();
    for (auto& subj : _student->getAllSubjects()) {
        ui->comboBox->addItem(subj->getName());
    }

}

void InsertExams::setStudent(Student* student){
    _student=student;
}

void InsertExams::removeExam(QString& name){

    int index = name.indexOf(" ");
    int order = name.sliced(0,1).toInt();
    name = name.sliced(index+1);

    for (int i=0; i<_exams.length(); ++i) {
        if (_exams[i]->getSubject().getName().compare(name) == 0 and order==_exams[i]->getOrder()) {
            _exams.remove(i);
            break;
        }
    }
}

bool InsertExams::checkInput(QDate date, QTime time, int ord) {
    if (!(date.isValid())){
        ui->errorLabel->setText("Uneseni datum za ispit u " + QString::number(ord) + ". roku nije validan!");
        return false;
    }
    if (QDate::currentDate().daysTo(date)<0)
    {
        ui->errorLabel->setText("Datum je prosao za ispit u " + QString::number(ord) + ". roku, uneti datum u buducnosti");
        return false;
    }

    if (!time.isValid()) {
        ui->errorLabel->setText("Uneseno vreme za ispit u " + QString::number(ord) + ". roku nije validno!");
        return false;
    }
    return true;
}

void InsertExams::on_addExamButton_clicked()
{
    Subject subject;

    for (auto& subj : _student->getAllSubjects()) {
       if (subj->getName().compare(ui->comboBox->currentText()) == 0){
           subject = *subj;
       }
    }

    int importanceRate = ui->horizontalSlider->value();
    QString url = ui->urlLineEdit->text();

    QString dateString, timeString;
    QDate date, oralDate;
    QTime time, oralTime;

    if (!ui->checkBox1->isChecked()) {

        dateString = ui->dateLineEdit1->text();
        date = QDate::fromString(dateString, "dd.MM.yyyy.");
        timeString = ui->timeLineEdit1->text();
        QTime time = QTime::fromString(timeString, "HH:mm");

        if (checkInput(date,time,1)==false)
            return;


        if (!ui->checkBoxOral1->isChecked()) {
            dateString = ui->dateLineEditOral1->text();
            oralDate = QDate::fromString(dateString, "dd.MM.yyyy.");
            timeString = ui->timeLineEditOral1->text();
            oralTime = QTime::fromString(timeString, "HH:mm");
           if (checkInput(oralDate,oralTime,1)==false)
               return;
        }
        else{
            oralDate = date.addDays(7);
            oralTime = time;
        }
        Exam *exam1 = new Exam(subject, date, oralDate, time, oralTime, url, importanceRate,1);
        _exams.push_back(exam1);
    }

    if (!ui->checkBox2->isChecked()) {

        dateString = ui->dateLineEdit2->text();
        date = QDate::fromString(dateString, "dd.MM.yyyy.");
        timeString = ui->timeLineEdit2->text();
        time = QTime::fromString(timeString, "HH:mm");
        if (checkInput(date,time,2)==false)
            return;


        if (!ui->checkBoxOral2->isChecked()) {
            dateString = ui->dateLineEditOral2->text();
            oralDate = QDate::fromString(dateString, "dd.MM.yyyy.");
            timeString = ui->timeLineEditOral2->text();
            oralTime = QTime::fromString(timeString, "HH:mm");
            if (checkInput(oralDate,oralTime,2)==false)
                return;
        }
        else{
            oralDate = date.addDays(7);
            oralTime = time;
        }
        Exam *exam2 = new Exam(subject, date, oralDate, time, oralTime, url, importanceRate,2);
        _exams.push_back(exam2);
    }

    ui->errorLabel->clear();

    emit reloadListWidget();
}


void InsertExams::on_clearWidgetButton_clicked()
{

    ui->urlLineEdit->clear();
    ui->dateLineEdit1->clear();
    ui->dateLineEdit2->clear();
    ui->timeLineEdit1->clear();
    ui->timeLineEdit2->clear();
    ui->dateLineEditOral1->clear();
    ui->dateLineEditOral2->clear();
    ui->timeLineEditOral1->clear();
    ui->timeLineEditOral2->clear();
    ui->horizontalSlider->setValue(1);
    ui->errorLabel->clear();
    ui->checkBox1->setChecked(false);
    ui->checkBox2->setChecked(false);
    ui->checkBoxOral1->setChecked(false);
    ui->checkBox2->setChecked(false);
    ui->comboBox->setCurrentText("Odabir predmeta:");


}


void InsertExams::on_endInputExamButton_clicked()
{
    hide();
}



