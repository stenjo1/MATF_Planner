#ifndef FOURTHYEARMR_H
#define FOURTHYEARMR_H

#include <QWidget>

namespace Ui {
class FourthYearMR;
}

class FourthYearMR : public QWidget
{
    Q_OBJECT

public:
    explicit FourthYearMR(QWidget *parent = nullptr);
    ~FourthYearMR();

private slots:
    void on_pbEnd_clicked();

private:
    Ui::FourthYearMR *ui;
};

#endif // FOURTHYEARMR_H
