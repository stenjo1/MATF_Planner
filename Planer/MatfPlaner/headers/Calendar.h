#ifndef CALENDAR_H
#define CALENDAR_H

#include <QWidget>
#include <QMessageBox>

#include "headers/Request.h"
#include "headers/LoginPage.h"
#include "headers/InsertExams.h"
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
    explicit Calendar(QWidget *parent = nullptr);
    explicit Calendar( QList<Exam*> exams = {}, QWidget *parent = nullptr);
    ~Calendar();

    QVector<QString> checkResults();

private:
    void colorCells(); //

private slots:
    void on_pbNewExam_clicked();
    void on_pbCheckUrl_clicked();
    void on_pbProfile_clicked();

    void on_pbSendMail_clicked();

    void on_pbLogin_clicked();

private:
    Ui::Calendar *ui;
    Student* _student;
    LoginPage* loginWindow;
    InsertExams* insertExamsWindow;
    QVector<Exam*> _exams;
    Profile* profileWindow;

};

#endif // CALENDAR_H
