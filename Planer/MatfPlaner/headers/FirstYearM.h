#ifndef FIRSTYEARM_H
#define FIRSTYEARM_H

#include <QMainWindow>
#include "headers/SecondYearMR.h"

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
    ~FirstYearM();

private slots:
    void on_pbNext_clicked();

    void on_pbBack_clicked();

    void on_pbEnd_clicked();

private:
    Ui::FirstYearM *ui;
    SecondYearMR *secondWindow;
};

#endif // FIRSTYEARM_H
