#include "headers/Calendar.h"
#include "ui_Calendar.h"


Calendar::Calendar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Calendar),
    _student(new Student),
    loginWindow(new LoginPage),
    examsOverviewWindow(new ExamsOverview),
    profileWindow(new Profile)
{
    ui->setupUi(this);
    loginWindow->setStudent(_student);
    examsOverviewWindow->setStudent(_student);
    profileWindow->setStudent(_student);
    connect(this, &Calendar::fillProfileSignal, profileWindow, &Profile::fillSlot);
}

Calendar::Calendar(QList<Exam*> exams, QWidget *parent):
    QWidget(parent),
    ui(new Ui::Calendar),
    _student(new Student),
    loginWindow(new LoginPage),
    examsOverviewWindow(new ExamsOverview),
    _exams(exams),
     profileWindow(new Profile)

{
    ui->setupUi(this);
    loginWindow->setStudent(_student);
    examsOverviewWindow->setStudent(_student);
    profileWindow->setStudent(_student);
    connect(this, &Calendar::fillProfileSignal, profileWindow, &Profile::fillSlot);

    colorCells();
}


Calendar::~Calendar()
{
    delete ui;
    for (auto exam : _exams) {
        delete exam;
    }
}

void Calendar::colorCells()
{
    QTextCharFormat fmt;
    fmt.setBackground(Qt::magenta);

    for(auto& exam: _exams){
        QDate date = exam->getDate();
        //test linija jer i dalje exam cita sve prazno kao i ono za url
        //QDate date(2021,12,12);
        ui->calendarWidget->setDateTextFormat(date, fmt);
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
                changedExams.push_back(exam->getSubject().getName());
                qDebug()<<"Web page is updated!";
            }
        }
    }

    return changedExams;
}

void Calendar::on_pbNewExam_clicked()
{

   examsOverviewWindow->show();

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


void Calendar::on_pbSendMail_clicked()
{

}


void Calendar::on_pbLogin_clicked()
{
    loginWindow->show();
}


void Calendar::on_pbProfile_clicked()
{
    emit fillProfileSignal();
    profileWindow->show();
}


void Calendar::on_calendarWidget_clicked(const QDate &date)
{
    QMessageBox msgBox;
    QString msg = "";
    //test linija
    //QDate testDate(2021,12,12);

    for(auto& exam: _exams){
        if(date == exam->getDate()){
            msg += exam->getSubject().getName();

            msgBox.setText(msg);
            msgBox.exec();

            break;
        }
    }
}

