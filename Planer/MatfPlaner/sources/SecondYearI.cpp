#include "headers/SecondYearI.h"
#include "ui_SecondYearI.h"

SecondYearI::SecondYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondYearI),
    thirdWindow(new ThirdYearI)
{
    ui->setupUi(this);
    connect(thirdWindow, &ThirdYearI::backSignal, this, &QWidget::show);

}


SecondYearI::~SecondYearI()
{
    delete ui;
}




void SecondYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void SecondYearI::on_pbNext_clicked()
{
    QVector<QCheckBox *> childCheckBoxes = ui->centralwidget->findChildren<QCheckBox *>(QString(), Qt::FindDirectChildrenOnly);
    QVector<Subject*> subjects = Utils::readJsonSubjectsFromFile("i2o.json");
    for (auto child : childCheckBoxes) {
            if (child->isChecked()) {
               for(Subject* subject:subjects){
                   if(child->text().compare(subject->getName())==0){
                       _student->addSubject(subject);
                   }
               }
            }
    }
    thirdWindow->setStudent(_student);
    thirdWindow->show();
    hide();
}


void SecondYearI::on_pbEnd_clicked()
{
    hide();
}

void SecondYearI::setStudent(Student* student){
    _student = student;
}
