#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QMainWindow>
#include "headers/Window.h"
#include <QRegularExpression>

namespace Ui {
class LoginPage;
}

class LoginPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginPage(QWidget *parent = nullptr);
    void setStudent(Student* student);
    ~LoginPage();

private slots:
    void on_nextButton_clicked();

private:
    Ui::LoginPage *ui;
    Student* _student;
    Window* _firstWindowI;
    Window* _firstWindowM;
    bool _windowISet;
    bool _windowMSet;
    void setupFirstWindow(QString filename, Window* &firstWindow, bool& windowSet);
};

#endif // LOGINPAGE_H
