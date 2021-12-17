#include "headers/LoginPage.h"
#include "ui_LoginPage.h"


LoginPage::LoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage),
    _student(new Student),
    _mWindow(new FirstYearM),
    _iWindow(new FirstYearI)


{
    ui->setupUi(this);
    connect(_mWindow,  &FirstYearM::backSignal, this, &QWidget::show);
    connect(_iWindow,  &FirstYearI::backSignal, this, &QWidget::show);
}

LoginPage::~LoginPage()
{
    delete ui;
}


void LoginPage::on_nextButton_clicked()
{

    QString name = ui->lineEdit->text();
    QString mail = ui->lineEdit_3->text();
    QString year = ui->lineEdit_4->text();

    QRegularExpression mailRegex;
    mailRegex.setPattern("^[a-zA-Z0-9.!#$%&'*+/=?^_`{|}~-]+@[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?(?:\.[a-zA-Z0-9](?:[a-zA-Z0-9-]{0,61}[a-zA-Z0-9])?)*$");

    if(name == ""){
        ui->label_3->setText("Morate uneti ime!");
        return;
    }

    QRegularExpressionMatch match = mailRegex.match(mail);
    bool hasMatch = match.hasMatch();

    if(!hasMatch) {
        ui->label_3->setText("Email adresa nije u ispravnom formatu!");
        return;
    }

    bool okYear;
    year.toInt(&okYear, 10);

    if(!okYear) {
        ui->label_3->setText("Godina studija mora biti broj!");
        return;
    }

    _student->setName(name);
    _student->setEmail(mail);
    _student->setYearOfStudy(year.toInt());
    //_student->writeToJson();

    if(!ui->info_department->isChecked() && !ui->math_department->isChecked()) {
        ui->label_3->setText("Morati izabrati smer!");
        return;
    }

    if(ui->info_department->isChecked()){
        _iWindow->setStudent(_student);
        _iWindow->show();
        _student->writeToJson();
         hide();
         //nzm dal ode curi memorija

     }else if (ui->math_department->isChecked()){
        _mWindow->setStudent(_student);
        _mWindow->show();
        _student->writeToJson();
        hide();
    }


}
void LoginPage::setStudent(Student* student){
    _student = student;
}


