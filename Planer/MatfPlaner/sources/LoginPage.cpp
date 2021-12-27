#include "headers/LoginPage.h"
#include "ui_LoginPage.h"


LoginPage::LoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage),
    _windowISet(false),
    _windowMSet(false)
{
    ui->setupUi(this);

}

LoginPage::~LoginPage()
{
    delete ui;
}


void LoginPage::setupFirstWindow(QString filename, Window* &firstWindow, bool& windowSet){

    if(windowSet) {
        firstWindow->show();
    } else {
        firstWindow = new Window();
        connect(firstWindow,  &Window::showLogin, this, &QWidget::show);
        firstWindow->setFilename(filename);
        firstWindow->setStudent(_student);
        firstWindow->setupWindow();
        firstWindow->show();
        windowSet = true;
    }

    hide();

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
        //_student->emptyAllSubjects();

        if(ui->info_department->isChecked()) {
            _student->setModule(Module::Informatika);
            setupFirstWindow("i1o.json", _firstWindowI, _windowISet);

        }
        else if(ui->math_department->isChecked()) {
            _student->setModule(Module::Matematika);
            setupFirstWindow("r1o.json", _firstWindowM, _windowMSet);
        }
        else {
            ui->label_3->setText("Morate izabrati smer!");
            return;
        }

        ui->label_3->clear();

}

void LoginPage::setStudent(Student* student){
    _student = student;
}


