#ifndef THIRDYEARI_H
#define THIRDYEARI_H

#include <QMainWindow>

namespace Ui {
class ThirdYearI;
}

class ThirdYearI : public QMainWindow
{
    Q_OBJECT

public:
    explicit ThirdYearI(QWidget *parent = nullptr);
    ~ThirdYearI();

private slots:
    void next_button_clicked();
    void on_back_pushButton_clicked();

private:
    Ui::ThirdYearI *ui;
};

#endif // THIRDYEARI_H
