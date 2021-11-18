#ifndef SECONDYEARI_H
#define SECONDYEARI_H

#include <QMainWindow>

namespace Ui {
class SecondYearI;
}

class SecondYearI : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondYearI(QWidget *parent = nullptr);
    ~SecondYearI();

private slots:
    void on_back_button_clicked();

private:
    Ui::SecondYearI *ui;
};

#endif // SECONDYEARI_H
