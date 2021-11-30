#ifndef SECONDYEARI_H
#define SECONDYEARI_H

#include <QMainWindow>
#include "headers/ThirdYearI.h"

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
    ~SecondYearI();

private slots:
    void on_pbBack_clicked();

    void on_pbNext_clicked();

    void on_pbEnd_clicked();

private:
    Ui::SecondYearI *ui;
    ThirdYearI *thirdWindow;
};

#endif // SECONDYEARI_H
