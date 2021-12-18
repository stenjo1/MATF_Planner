#include "headers/Profile.h"
#include "ui_Profile.h"

Profile::Profile(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);

}

Profile::~Profile()
{
    delete ui;
}

void Profile::setStudent(Student* s){
    _student = s;
}

void Profile::fillSlot(){
    ui->labelName->setText(_student->getName());
    ui->labelEmail->setText(_student->getEmail());
    ui->labelYearOfStudy->setText(QString().setNum(_student->getYearOfStudy()));
}
