#include "headers/Calendar.h"
#include "ui_Calendar.h"


//Calendar::Calendar(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::Calendar),
//    _student(new Student),
//    loginWindow(new LoginPage),
//    examsOverviewWindow(new ExamsOverview),
//    profileWindow(new Profile)
//{
//    ui->setupUi(this);
//    loginWindow->setStudent(_student);
//    examsOverviewWindow->setStudent(_student);
//    profileWindow->setStudent(_student);
//    connect(this, &Calendar::fillProfileSignal, profileWindow, &Profile::fillSlot);
//}

Calendar::Calendar(Student* student,QList<Exam*> exams, QWidget *parent):
    QWidget(parent),
    ui(new Ui::Calendar),
    loginWindow(new LoginPage),
    examsOverviewWindow(new ExamsOverview),
    _exams(exams),
     profileWindow(new Profile)

{
    ui->setupUi(this);
    _student = student;
    loginWindow->setStudent(_student);
    examsOverviewWindow->setStudent(_student);
    profileWindow->setStudent(_student);
    connect(this, &Calendar::fillProfileSignal, profileWindow, &Profile::fillSlot);
    connect(examsOverviewWindow, &ExamsOverview::fillCalendarSignal, this, &Calendar::colorCellsSlot);

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
    fmt.setBackground(Qt::GlobalColor::darkMagenta);

    for(auto& exam: _exams){
        QDate date = exam->getDate();
        ui->calendarWidget->setDateTextFormat(date, fmt);
    }
}

void Calendar::colorCellsSlot(){
    colorCells();
}

QVector<QPair<QString,QString>> Calendar::checkResults()
{
    QVector<QPair<QString,QString>> changedExams;
    for(auto& exam: _exams){
        if (exam->checkIfDatePassed()){
            QString url = exam->getUrl();
            //test linija za proveru QString url = "http://178.148.148.201:8989/1/index.html";
            Request req;
            req.download(url);
            if (req.isFileChanged()){
                changedExams.push_back(QPair<QString,QString>(exam->getSubject().getName(), exam->getUrl()));
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
    bool hasChanged=false;
    QVector<QPair<QString,QString>> changedExams = checkResults();
    for(auto& exam : changedExams){
        QMessageBox::information(this,"Rezultat provere","Došlo je do promene na web stranici za ispit " + exam.first + ".\n" + QUrl(exam.second).toString());
        hasChanged=true;
    }

    if(!hasChanged){
        QMessageBox::information(this,"Rezultat provere","Nema promena na web stranicama.");
    }
}


void Calendar::on_pbSendMail_clicked()
{
//        MailSender ms;
//        QString recip = ""; //dodajte mail koji isprobavate
//        auto res = ms.send(recip);

//        if (res != CURLE_OK) {
//           std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res);
//           QMessageBox::warning(this, "Email", "Slanje rasporeda nije uspelo.");
//         }
//         else
//           QMessageBox::information(this, "Email", "Raspored je poslat!");
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

    for(auto& exam: _exams){
        if(date == exam->getDate()){
            QMessageBox::information(this,"Ispit",exam->getSubject().getName().append("\n").append(exam->getTime().toString()));
            break;
        }
    }
}

