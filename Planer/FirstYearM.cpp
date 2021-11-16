#include "FirstYearM.h"
#include "ui_FirstYearM.h"

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
