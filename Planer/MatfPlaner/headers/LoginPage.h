#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "headers/FirstYearI.h"
#include "headers/FirstYearM.h"
#include <QRegularExpression>

namespace Ui {
class LoginPage;
}

class LoginPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage();

private slots:
    void on_nextButton_clicked();

private:
    Ui::LoginPage *ui;
    FirstYearM* _mWindow;
    FirstYearI* _iWindow;
};

#endif // LOGINPAGE_H
