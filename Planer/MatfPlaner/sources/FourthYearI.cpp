#include "headers/FourthYearI.h"
#include "ui_FourthYearI.h"

FourthYearI::FourthYearI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourthYearI),
    _student(new Student)
{
    ui->setupUi(this);
}

FourthYearI::~FourthYearI()
{
    delete ui;
}


void FourthYearI::on_pbEnd_clicked()
{
    QVector<QCheckBox *> childCheckBoxes = ui->centralwidget_2->findChildren<QCheckBox *>(QString(), Qt::FindDirectChildrenOnly);
    QVector<Subject*> subjects = Utils::readJsonSubjectsFromFile("i4o.json");
    for (auto child : childCheckBoxes) {
            if (child->isChecked()) {
               for(Subject* subject:subjects){
                   if(child->text().compare(subject->getName())==0){
                       _student->addSubject(subject);
                   }
               }
            }
    }
    _student->writeToJson();
    hide();
}


void FourthYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}

void FourthYearI::setStudent(Student *student){
    _student = student;
}

