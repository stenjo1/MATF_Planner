#ifndef CALENDAR_H
#define CALENDAR_H

#include <QWidget>
#include <QMessageBox>

#include "headers/Exam.hpp"
#include "headers/Request.h"
#include "headers/LoginPage.h"

namespace Ui {
class Calendar;
}

class Calendar : public QWidget
{
    Q_OBJECT

public:
    explicit Calendar(QWidget *parent = nullptr);
    explicit Calendar( QList<Exam*> exams = {}, QWidget *parent = nullptr);
    ~Calendar();

    QVector<QString> checkResults();

private slots:
    void on_pbNewExam_clicked();
    void on_pbCheckUrl_clicked();
    void on_pbProfile_clicked();

private:
    Ui::Calendar *ui;
    LoginPage *loginWindow;
    QList<Exam*> _exams;
};

#endif // CALENDAR_H
