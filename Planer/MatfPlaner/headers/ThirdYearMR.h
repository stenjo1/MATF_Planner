#ifndef THIRDYEARMR_H
#define THIRDYEARMR_H

#include <QWidget>
#include "headers/FourthYearMR.h"
#include"headers/Student.hpp"
namespace Ui {
class ThirdYearMR;
}

class ThirdYearMR : public QWidget
{
    Q_OBJECT

signals:
    void backSignal();
public:
    explicit ThirdYearMR(QWidget *parent = nullptr);
    void setStudent(Student* student);
    ~ThirdYearMR();

private slots:
    void on_pbNext_clicked();

    void on_pbBack_clicked();

    void on_pbEnd_clicked();

private:
    Ui::ThirdYearMR *ui;
    Student* _student;
    FourthYearMR *fourthWindow;
};

#endif // THIRDYEARMR_H
