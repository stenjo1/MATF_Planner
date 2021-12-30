#include "headers/InsertExams.h"
#include "ui_InsertExams.h"
#include "headers/Subject.h"

InsertExams::InsertExams(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::InsertExams)
{
    ui->setupUi(this);
}
InsertExams::~InsertExams()
{
    delete ui;
    for (auto el: _exams)
        delete el;
}

void InsertExams::loadComboBox()
{
    for (auto& subj : _student->getAllSubjects()) {
        ui->comboBox->addItem(subj->getName());
    }

}

void InsertExams::setStudent(Student* student){
    _student=student;
}

QVector<Exam*> InsertExams::getExams(){
    return _exams;
}

void InsertExams::removeExam(QString& name){

    QVector<Exam*> allExams = getExams();
    QStringList parsed = name.split(" ");
    int index = name.indexOf(" ");
    int order = name.sliced(0,1).toInt();
    name = name.sliced(index+1);

    for (int i=0; i<allExams.length(); ++i) {
        if (allExams[i]->getSubject().getName().compare(name) == 0 and order==allExams[i]->getOrder()) {
            _exams.remove(i);
            break;
        }
    }
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

    if (!ui->checkBox1->isChecked()) {

        QString dateString1 = ui->dateLineEdit1->text();
        QString dateString11 = ui->dateLineEdit11->text();
        QDate date1 = QDate::fromString(dateString1, "dd.MM.yyyy.");
        QDate date11 = QDate::fromString(dateString11, "dd.MM.yyyy.");
        printf("%s\n", date1.toString().toStdString().c_str());
        if (!(date1.isValid())){
            ui->errorLabel->setText("Uneseni datum1 nije validan!");
            return ;
        }

        QString timeString1 = ui->timeLineEdit1->text();
        QTime time1 = QTime::fromString(timeString1, "HH:mm");
        QString timeString11 = ui->timeLineEdit11->text();
        QTime time11 = QTime::fromString(timeString1, "HH:mm");
        printf("%s\n", timeString1.toStdString().c_str());
        if (!time1.isValid()) {
            ui->errorLabel->setText("Uneseno vreme1 nije validno!");
            return;
        }
        Exam *exam1 = new Exam(subject, date1, date11, time1, time11, url, importanceRate,1);
        _exams.push_back(exam1);
    }
    if (!ui->checkBox2->isChecked()) {

        QString dateString2 = ui->dateLineEdit2->text();
        QDate date2 = QDate::fromString(dateString2, "dd.MM.yyyy.");
        QString dateString21 = ui->dateLineEdit21->text();
        QDate date21 = QDate::fromString(dateString21, "dd.MM.yyyy.");
        if (!date2.isValid()) {
            ui->errorLabel->setText("Uneseni datum2 nije validan!");
            return ;
        }
        if (!date21.isValid()) {
            ui->errorLabel->setText("Uneseni datum21 nije validan!");
            return ;
        }
        QString timeString2 = ui->timeLineEdit2->text();
        QTime time2 = QTime::fromString(timeString2, "HH:mm");
        QTime time21 = QTime::fromString(timeString2, "HH:mm");
        if (!time2.isValid()) {
            ui->errorLabel->setText("Uneseno vreme2 nije validno!");
            return;
        }
        Exam *exam2 = new Exam(subject, date2, date21, time2, time21, url, importanceRate,2);
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
    ui->horizontalSlider->setValue(1);
    ui->errorLabel->clear();
    ui->checkBox1->setChecked(false);
    ui->checkBox2->setChecked(false);
    ui->comboBox->setCurrentText("Odabir predmeta:");


}


void InsertExams::on_endInputExamButton_clicked()
{
    hide();
}


void InsertExams::writeToJson(){

        QJsonArray allExamsJson;
        for(auto exam: _exams){
            QJsonObject *examObj = exam->toJson();
            allExamsJson.append(*examObj);
        }

        QDir dir("..");
        QString path = dir.absolutePath() + "/MatfPlaner/resources/exams.json";

        QFile jsonFile(path);
        jsonFile.open(QFile::WriteOnly);
        QJsonDocument doc(allExamsJson);
        jsonFile.write(doc.toJson());

}

