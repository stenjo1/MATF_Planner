#ifndef FOURTHYEARI_H
#define FOURTHYEARI_H

#include <QWidget>

namespace Ui {
class FourthYearI;
}

class FourthYearI : public QWidget
{
    Q_OBJECT

public:
    explicit FourthYearI(QWidget *parent = nullptr);
    ~FourthYearI();

private slots:
    void next_button_clicked();
    void on_backButtonClicked();

    void on_nextPushButton_clicked();

private:
    Ui::FourthYearI *ui;
};

#endif // FOURTHYEARI_H
