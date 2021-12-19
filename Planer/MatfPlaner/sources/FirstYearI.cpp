#include "headers/FirstYearI.h"
#include "ui_FirstYearI.h"

FirstYearI::FirstYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstYearI),
    secondWindow(new SecondYearI)
{
    ui->setupUi(this);
    connect(secondWindow, &SecondYearI::backSignal, this, &QWidget::show);
}


FirstYearI::~FirstYearI()
{
    delete ui;
}

void FirstYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void FirstYearI::on_pbNext_clicked()
{
    secondWindow->setStudent(_student);
    QVector<QCheckBox *> childCheckBoxes = ui->centralwidget->findChildren<QCheckBox *>(QString(), Qt::FindDirectChildrenOnly);
    QVector<Subject*> subjects = Utils::readJsonSubjectsFromFile();
    for (auto child : childCheckBoxes) {
            if (child->isChecked()) {
               for(Subject* subject:subjects){
                   if(child->text().compare(subject->getName())==0){
                       _student->addSubject(subject);
                   }
               }
            }

    secondWindow->show();
    hide();
    }
}


void FirstYearI::on_pbEnd_clicked()
{
    hide();
}

void FirstYearI::setStudent(Student* student){
    _student = student;
}


