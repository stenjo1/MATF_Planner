#include "FirstYearI.h"
#include "ui_FirstYearI.h"
#include "LoginPage.h"
#include "SecondYearI.h"
FirstYearI::FirstYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FirstYearI)
{
    ui->setupUi(this);
}

FirstYearI::~FirstYearI()
{
    delete ui;
}

void FirstYearI::on_back_button_clicked()
{
    LoginPage *w = new LoginPage;
    w->show();
    hide();
    //nzm dal ovde curi memorija
}




void FirstYearI::on_forward_button_clicked()
{
    SecondYearI *w = new SecondYearI;
    w->show();
    hide();
    //nzm dal ovde curi memorija
}

