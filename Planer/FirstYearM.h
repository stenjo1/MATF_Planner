#ifndef FIRSTYEARM_H
#define FIRSTYEARM_H

#include <QMainWindow>

namespace Ui {
class FirstYearM;
}

class FirstYearM : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstYearM(QWidget *parent = nullptr);
    ~FirstYearM();

private:
    Ui::FirstYearM *ui;
};

#endif // FIRSTYEARM_H
