#include "SecondYearI.h"
#include "ui_SecondYearI.h"
#include "FirstYearI.h"
#include "ThirdYearI.h"
SecondYearI::SecondYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondYearI)
{
    ui->setupUi(this);
}

SecondYearI::~SecondYearI()
{
    delete ui;
}

void SecondYearI::on_back_button_clicked()
{
    FirstYearI *w = new FirstYearI;
    w->show();
    hide();
}

void SecondYearI::next_button_clicked(){
    ThirdYearI *w = new ThirdYearI;
    w->show();
    hide();
    //nzm dal ovde curi memorija
}
