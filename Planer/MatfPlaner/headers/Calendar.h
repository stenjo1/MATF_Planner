#ifndef CALENDAR_H
#define CALENDAR_H

#include <QWidget>
#include <QMessageBox>

//#include "headers/MailSender.h"
#include "headers/Request.h"
#include "headers/LoginPage.h"
#include "headers/ExamsOverview.h"
#include "headers/Profile.h"

namespace Ui {
class Calendar;
}

class Calendar : public QWidget
{
    Q_OBJECT

signals:
    void fillProfileSignal();

public:

    explicit Calendar(Student* student, QList<Exam*> exams = {}, QWidget *parent = nullptr);
    ~Calendar();

    LoginPage* getLoginPage() const;
    QVector<QPair<QString,QString>> checkResults();

//public slots:
//    void colorCellsSlot(); //

private slots:
    void on_pbNewExam_clicked();
    void on_pbCheckUrl_clicked();
    void on_pbProfile_clicked();
    void on_pbSendMail_clicked();
    void on_pbLogin_clicked();
    void on_calendarWidget_clicked(const QDate &date);
    void emptyCell(QDate date);

private:
    Ui::Calendar *ui;
    Student* _student;
    QVector<Exam*> _exams;
    LoginPage* _loginWindow;
    ExamsOverview* _examsOverviewWindow;
    Profile* _profileWindow;

    void colorCells();

};

#endif // CALENDAR_H
