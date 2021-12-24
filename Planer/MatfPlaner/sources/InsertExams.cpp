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
    for (Subject* subj : _student->getAllSubjects()) {

    }
    ui->errorLabel->setText("govno");

}

void InsertExams::setStudent(Student* student){
    _student=student;
}

QVector<Exam*> InsertExams::getExams(){
    return _exams;
}

void InsertExams::removeExam(QString& name){
    QVector<Exam*> allExams = getExams();
    for (int i=0; i<allExams.length(); ++i) {
        if (allExams[i]->getSubject().getName().compare(name) == 0) {
            _exams.remove(i);
        }
    }
}


void InsertExams::on_addExamButton_clicked()
{
    Subject* subject = new Subject("Analiza 3", 6);

    //ovde puca stoka
//    for (Subject* subj : _student->getAllSubjects()) {
//       if (subj->getName().compare(ui->lineEdit->text()) == 0)
//           subject = subj;
//    }
    QString dateString1 = ui->dateLineEdit1->text();

    QDate date1 = QDate::fromString(dateString1, "dd.MM.yyyy.");
    printf("%s\n", date1.toString().toStdString().c_str());
    if (!(date1.isValid())){
        ui->errorLabel->setText("Uneseni datum1 nije validan!");
        return ;
    }
    QString timeString1 = ui->timeLineEdit1->text();
    QTime time1 = QTime::fromString(timeString1, "HH:mm");
    printf("%s\n", timeString1.toStdString().c_str());
    if (!time1.isValid()) {
        ui->errorLabel->setText("Uneseno vreme1 nije validno!");
        return;
    }
    QString dateString2 = ui->dateLineEdit2->text();
    QDate date2 = QDate::fromString(dateString2, "dd.MM.yyyy.");
    if (!date2.isValid()) {
        ui->errorLabel->setText("Uneseni datum2 nije validan!");
        return ;
    }
    QString timeString2 = ui->timeLineEdit2->text();
    QTime time2 = QTime::fromString(timeString2, "HH:mm");
    if (!time2.isValid()) {
        ui->errorLabel->setText("Uneseno vreme2 nije validno!");
        return;
    }

    int importanceRate = ui->horizontalSlider->value();
    QString url = ui->urlLabel->text();

    Exam *exam1 = new Exam(*subject, date1, time1, url, importanceRate);
    Exam *exam2 = new Exam(*subject, date2, time2, url, importanceRate);

    _exams.push_back(exam1);
    _exams.push_back(exam2);

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
    ui->comboBox->setCurrentText("Odabir predmeta:");


}


void InsertExams::on_endInputExamButton_clicked()
{
    writeToJson();
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

void InsertExams::on_comboBox_activated(int index)
{

}

