#ifndef CALENDAR_H
#define CALENDAR_H

#include <QWidget>

namespace Ui {
class Calendar;
}

class Calendar : public QWidget
{
    Q_OBJECT

public:
    explicit Calendar(QWidget *parent = nullptr);
    ~Calendar();

private slots:
    void on_pbNewExam_clicked();

    void on_pbProfile_clicked();

private:
    Ui::Calendar *ui;
};

#endif // CALENDAR_H
