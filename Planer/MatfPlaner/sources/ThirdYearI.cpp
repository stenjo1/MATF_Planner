#include "headers/ThirdYearI.h"
#include "ui_ThirdYearI.h"

ThirdYearI::ThirdYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdYearI),
    _student(new Student),
    fourthWindow(new FourthYearI)
{
    ui->setupUi(this);
    connect(fourthWindow, &FourthYearI::backSignal, this, &QWidget::show);
}


ThirdYearI::~ThirdYearI()
{
    delete ui;
}


void ThirdYearI::on_pbBack_clicked()
{
    emit backSignal();
    hide();
}


void ThirdYearI::on_pbNext_clicked()
{
    QVector<QCheckBox *> childCheckBoxes = ui->centralwidget->findChildren<QCheckBox *>(QString(), Qt::FindDirectChildrenOnly);
    QVector<Subject*> subjects = Utils::readJsonSubjectsFromFile("i3o.json");
    for (auto child : childCheckBoxes) {
            if (child->isChecked()) {
               for(Subject* subject:subjects){
                   if(child->text().compare(subject->getName())==0){
                       _student->addSubject(subject);
                   }
               }
            }
    }
    fourthWindow->setStudent(_student);
    fourthWindow->show();
    hide();
    //nzm dal ovde curi memorija
}


void ThirdYearI::on_pbEnd_clicked()
{
    hide();
}

void ThirdYearI::setStudent(Student* student){
    _student = student;
}
