#ifndef THIRDYEARMR_H
#define THIRDYEARMR_H

#include <QWidget>

namespace Ui {
class ThirdYearMR;
}

class ThirdYearMR : public QWidget
{
    Q_OBJECT

public:
    explicit ThirdYearMR(QWidget *parent = nullptr);
    ~ThirdYearMR();

private slots:
    void on_pbNext_clicked();

    void on_pbBack_clicked();

    void on_pbEnd_clicked();

private:
    Ui::ThirdYearMR *ui;
};

#endif // THIRDYEARMR_H
