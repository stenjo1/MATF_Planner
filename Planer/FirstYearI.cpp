#include "FirstYearI.h"
#include "ui_FirstYearI.h"

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
