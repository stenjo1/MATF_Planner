#ifndef FOURTHYEARI_H
#define FOURTHYEARI_H

#include <QWidget>
#include"headers/Student.h"

namespace Ui {
class FourthYearI;
}

class FourthYearI : public QWidget
{
    Q_OBJECT

signals:
    void backSignal();
public:
    explicit FourthYearI(QWidget *parent = nullptr);
    void setStudent(Student* student);
    ~FourthYearI();

private slots:

    void on_pbEnd_clicked();

    void on_pbBack_clicked();

private:
    Ui::FourthYearI *ui;
    Student* _student;
};

#endif // FOURTHYEARI_H
