#include "LoginPage.h"
#include "ui_LoginPage.h"
#include "FirstYearI.h"
#include "FirstYearM.h"
LoginPage::LoginPage(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginPage)
{
    ui->setupUi(this);
}

LoginPage::~LoginPage()
{
    delete ui;
}


void LoginPage::on_nextButton_clicked()
{
    if(ui->info_department->isChecked()){

         FirstYearI *w = new FirstYearI;
         w->show();
         hide();
         //nzm dal ode curi memorija
     }else if (ui->math_department->isChecked()){
        FirstYearM *w = new FirstYearM;
        w->show();
        hide();
    }
}

