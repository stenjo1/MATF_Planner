#include "headers/Calendar.h"
#include "ui_Calendar.h"
#include "headers/InsertExams.h"


Calendar::Calendar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calendar),
    loginWindow(new LoginPage)
{
    ui->setupUi(this);
}

Calendar::Calendar(QList<Exam*> exams, QWidget *parent):
    QWidget(parent),
     ui(new Ui::Calendar),
    loginWindow(new LoginPage),
    _exams(exams)

{
    ui->setupUi(this);
}


Calendar::~Calendar()
{
    delete ui;
    for (auto exam : _exams) {
        delete exam;
    }
}

QVector<QString> Calendar::checkResults()
{
    QVector<QString> changedExams;
    for(auto& exam: _exams){
        if (exam->checkIfDatePassed()){
            QString url = exam->getUrl();
            //test linija za proveru QString url = "http://178.148.148.201:8989/1/index.html";
            Request req;
            req.download(url);
            if (req.isFileChanged()){
                //TODO: add exam name
                changedExams.push_back("Ime ispita");
                qDebug()<<"Web page is updated!";
            }
        }
    }

    return changedExams;
}

void Calendar::on_pbNewExam_clicked()
{
    InsertExams *w = new InsertExams;
    w->show();

}

//exam vraca prazan url i ne moze da se posalje net zahtev
void Calendar::on_pbCheckUrl_clicked()
{
    QMessageBox msgBox;
    QString msg;

    QVector<QString> changedExams = checkResults();
    for(auto& exam : changedExams){
        msg += exam + " website has changed.\n";
    }

    if(msg.isEmpty()){
        msg = "Nothing's changed ...";
    }

    msgBox.setText(msg);
    msgBox.exec();
}

void Calendar::on_pbProfile_clicked()
{
    loginWindow->show();
}



void Calendar::on_pbSendMail_clicked()
{

}

