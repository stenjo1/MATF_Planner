#include "headers/FirstYearM.h"
#include "ui_FirstYearM.h"
#include "headers/LoginPage.h"
#include "headers/SecondYearMR.h"

FirstYearM::FirstYearM(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstYearM)
{
    ui->setupUi(this);
}

FirstYearM::~FirstYearM()
{
    delete ui;
}

void FirstYearM::on_pbNext_clicked()
{
    SecondYearMR *w = new SecondYearMR;
    w->show();
    hide();


}


void FirstYearM::on_pbBack_clicked()
{
    LoginPage *w = new LoginPage;
    w->show();
    hide();
}

