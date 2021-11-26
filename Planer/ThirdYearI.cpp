#include "ThirdYearI.h"
#include "ui_ThirdYearI.h"
#include "SecondYearI.h"
#include "FourthYearI.h"
ThirdYearI::ThirdYearI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ThirdYearI)
{
    ui->setupUi(this);
}

ThirdYearI::~ThirdYearI()
{
    delete ui;
}


void ThirdYearI::next_button_clicked(){
    FourthYearI *w = new FourthYearI;
    w->show();
    hide();
    //nzm dal ovde curi memorija
}

void ThirdYearI::on_back_pushButton_clicked()
{
    SecondYearI *w = new SecondYearI;
    w->show();
    hide();
//    //nzm dal ovde curi memorija
}

