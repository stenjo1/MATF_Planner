#include "FirstYearM.h"
#include "ui_FirstYearM.h"
#include "ModulM.h"
#include "LoginPage.h"

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
    ModulM *w = new ModulM;
    w->show();
    hide();


}


void FirstYearM::on_pbBack_clicked()
{
    LoginPage *w = new LoginPage;
    w->show();
    hide();
}

