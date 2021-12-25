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
    ui->labelModule->setText(_student->getModuleString());
    //TODO: iz jsona sa predmetima ispisati one koji nisu u listi nepolozenih (allSubjects)

     QString text = "";
     int espbSum=0;
     for (Subject* subj : _student->getAllSubjects()) {
         text += subj->getName() + "\n";
         espbSum+=subj->getEspb();
     }

     ui->plainTextEdit->insertPlainText(text);
     ui->labelESPB->setNum(240-espbSum);


}
