#ifndef FIRSTYEARM_H
#define FIRSTYEARM_H

#include <QMainWindow>
#include "headers/SecondYearMR.h"
#include "headers/Student.h"
namespace Ui {
class FirstYearM;
}

class FirstYearM : public QMainWindow
{
    Q_OBJECT

signals:
    void backSignal();

public:
    explicit FirstYearM(QWidget *parent = nullptr);
    void setStudent(Student* student);
    ~FirstYearM();

private slots:
    void on_pbNext_clicked();

    void on_pbBack_clicked();

    void on_pbEnd_clicked();

private:
    Ui::FirstYearM *ui;
    Student* _student;
    SecondYearMR *secondWindow;
};

#endif // FIRSTYEARM_H
