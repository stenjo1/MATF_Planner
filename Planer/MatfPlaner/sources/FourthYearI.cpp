#include "headers/FourthYearI.h"
#include "ui_FourthYearI.h"
#include "headers/ThirdYearI.h"
#include"headers/InsertExams.h"
FourthYearI::FourthYearI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FourthYearI)
{
    ui->setupUi(this);
}

FourthYearI::~FourthYearI()
{
    delete ui;
}


void FourthYearI::next_button_clicked(){
    //druga faza app
    //nzm dal ovde curi memorija
}

void FourthYearI::on_backButtonClicked()
{
    ThirdYearI *w = new ThirdYearI;
    w->show();
    hide();
//    //nzm dal ovde curi memorija
}

void FourthYearI::on_nextPushButton_clicked()
{
    InsertExams *w = new InsertExams;
    w->show();
    hide();
    //nzm dal ovde curi memorija
}

