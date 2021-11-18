#include "ModulM.h"
#include "ui_ModulM.h"
#include "SecondYearMR.h"

ModulM::ModulM(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModulM)
{
    ui->setupUi(this);
}

ModulM::~ModulM()
{
    delete ui;
}

void ModulM::on_pbNext_clicked()
{
    SecondYearMR *w = new SecondYearMR;
    w->show();
    close();
}

