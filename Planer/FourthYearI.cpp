#include "FourthYearI.h"
#include "ui_FourthYearI.h"
#include "ThirdYearI.h"
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
