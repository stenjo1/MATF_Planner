#ifndef SECONDYEARMR_H
#define SECONDYEARMR_H

#include <QWidget>
#include "headers/ThirdYearMR.h"

namespace Ui {
class SecondYearMR;
}

class SecondYearMR : public QWidget
{
    Q_OBJECT

signals:
    void backSignal();

public:
    explicit SecondYearMR(QWidget *parent = nullptr);
    void setStudent(Student* student);
    ~SecondYearMR();

private slots:
    void on_pbNext_clicked();

    void on_pbBack_clicked();

    void on_pbEnd_clicked();

private:
    Ui::SecondYearMR *ui;
    Student* _student;
    ThirdYearMR *thirdWindow;
};

#endif // SECONDYEARMR_H
