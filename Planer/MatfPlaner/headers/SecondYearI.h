#ifndef SECONDYEARI_H
#define SECONDYEARI_H

#include <QMainWindow>
#include "headers/ThirdYearI.h"
#include "headers/Student.hpp"

namespace Ui {
class SecondYearI;
}

class SecondYearI : public QMainWindow
{
    Q_OBJECT

signals:
    void backSignal();
public:
    explicit SecondYearI(QWidget *parent = nullptr);
    void setStudent(Student* student);
    ~SecondYearI();

private slots:
    void on_pbBack_clicked();

    void on_pbNext_clicked();

    void on_pbEnd_clicked();

private:
    Ui::SecondYearI *ui;
    Student* _student;
    ThirdYearI *thirdWindow;

};

#endif // SECONDYEARI_H
