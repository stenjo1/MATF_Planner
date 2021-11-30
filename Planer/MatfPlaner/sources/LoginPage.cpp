#include "headers/LoginPage.h"
#include "ui_LoginPage.h"

LoginPage::LoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage),
    _mWindow(new FirstYearM),
    _iWindow(new FirstYearI)
{
    ui->setupUi(this);

    connect(_mWindow,  &FirstYearM::backSignal, this, &QWidget::show);
    connect(_iWindow,  &FirstYearI::backSignal, this, &QWidget::show);
}


LoginPage::~LoginPage()
{
    delete ui;
}


void LoginPage::on_nextButton_clicked()
{
    if(ui->info_department->isChecked()){

         _iWindow->show();
         hide();
         //nzm dal ode curi memorija

     }else if (ui->math_department->isChecked()){
        _mWindow->show();
        hide();
    }
}

