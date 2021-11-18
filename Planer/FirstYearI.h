#ifndef FIRSTYEARI_H
#define FIRSTYEARI_H

#include <QMainWindow>

namespace Ui {
class FirstYearI;
}

class FirstYearI : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstYearI(QWidget *parent = nullptr);
    ~FirstYearI();

private slots:
    void on_back_button_clicked();
    void forward_button_clicked();

private:
    Ui::FirstYearI *ui;
};

#endif // FIRSTYEARI_H
