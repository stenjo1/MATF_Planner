#include "headers/Calendar.h"
#include "ui_Calendar.h"

Calendar::Calendar(Student* student,QList<Exam*> exams, QWidget *parent):
    QWidget(parent),
    ui(new Ui::Calendar),
    _exams(exams),
    _loginWindow(new LoginPage),
    _examsOverviewWindow(new ExamsOverview(_exams)),
    _profileWindow(new Profile)


{
    ui->setupUi(this);
    _student = student;
    _loginWindow->setStudent(_student);
    _examsOverviewWindow->setStudent(_student);
    _profileWindow->setStudent(_student);
    connect(this, &Calendar::fillProfileSignal, _profileWindow, &Profile::fillSlot);
    connect(_examsOverviewWindow, &ExamsOverview::fillCalendarSignal, this, &Calendar::colorCells);
    connect(_examsOverviewWindow, SIGNAL(emptyCalendarSignal(QDate)), this, SLOT(emptyCell(QDate)));

    colorCells();
}


Calendar::~Calendar()
{
    delete ui;
    delete _profileWindow;
    delete _examsOverviewWindow;
    delete _loginWindow;
    for (auto exam : _exams) {
        delete exam;
    }
}

LoginPage* Calendar::getLoginPage() const{
    return _loginWindow;
}

void Calendar::colorCells()
{
    QTextCharFormat fmt;
    fmt.setBackground(QColor(61, 66, 107));

    for(auto& exam: _exams){
        QDate date = exam->getDate();
        ui->calendarWidget->setDateTextFormat(date, fmt);
    }
}

void Calendar::emptyCell(QDate date)
{
    QTextCharFormat fmt;
    fmt.setBackground(QColorConstants::Transparent);

    ui->calendarWidget->setDateTextFormat(date, fmt);
}


QVector<QPair<QString,QString>> Calendar::checkResults()
{
    QVector<QPair<QString,QString>> changedExams;
    for(auto& exam: _exams){
        if (exam->checkIfDatePassed()){
            QString url = exam->getUrl();
            if(url.isEmpty()){
                qDebug()<<"CALENDAR::CHECK RESULTS::Empty url string";
            } else{
                Request req;
                req.download(url);
                if (req.isFileChanged()){
                    changedExams.push_back(QPair<QString,QString>(exam->getSubject().getName(), exam->getUrl()));
                    qDebug()<<"Web page is updated!";
                }
            }
        }
    }

    return changedExams;
}

void Calendar::on_pbNewExam_clicked()
{

   _examsOverviewWindow->show();

}

void Calendar::on_pbCheckUrl_clicked()
{
    bool hasChanged=false;
    QVector<QPair<QString,QString>> changedExams = checkResults();
    for(auto& exam : changedExams){
        QMessageBox msgBox;
        msgBox.setTextFormat(Qt::RichText);
        QMessageBox::information(&msgBox,"Rezultat provere","Doslo je do promene na sajtu predmeta <a href='" + exam.second + "'>" + exam.first + "</a>");
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
    _loginWindow->show();
}


void Calendar::on_pbProfile_clicked()
{
    emit fillProfileSignal();
    _profileWindow->show();
}


void Calendar::on_calendarWidget_clicked(const QDate &date)
{
    bool hasExam = false;
    for(auto& exam: _exams){
        if(date == exam->getDate()){
            QMessageBox::information(this,"Ispit",exam->getSubject().getName().append("\n").append(exam->getTime().toString()));
            hasExam = true;
            break;
        }
    }
//    // ako ne uspemo da resimo drugacije, nek bude bar ovo da kad klikne na obojeno polje sa kog je obrisan ispit,
//    if (!hasExam){
//        QTextCharFormat fmt;
//        fmt.setBackground(QColor(50, 9, 142)); //namestiti na boju pozadine kalendara
//        ui->calendarWidget->setDateTextFormat(date, fmt);
//    }
}

void Calendar::checkIfExamIsClose(){
    QString closeExams = QString();
    QDate currentDate = QDate::currentDate();
    for(auto exam : _exams){
        int daysToExam = currentDate.daysTo(exam->getDate());
        if (daysToExam <= 3){
            closeExams.append("Ostalo je ").append(QString::fromStdString(std::to_string(daysToExam))).append(" dan do ispita ").append(exam->getSubject().getName()).append("\n");
        }
    }
    QMessageBox msgBox;
    msgBox.setIcon(QMessageBox::Warning);
    Qt::WindowFlags flags = msgBox.windowFlags();
    msgBox.setParent(this, flags);
    msgBox.setText(closeExams);
    msgBox.exec();
}
