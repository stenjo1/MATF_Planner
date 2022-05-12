#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include "headers/Window.h"
#include <QMainWindow>
#include <QRegularExpression>

namespace Ui
{
class LoginPage;
}

class LoginPage : public QMainWindow
{
    Q_OBJECT

  public:
    explicit LoginPage(QWidget *parent = nullptr);
    void setStudent(Student *student);
    ~LoginPage();

  private slots:
    void on_nextButton_clicked();

  private:
    Ui::LoginPage *ui;
    Student *_student;
    Window *_firstWindowI = nullptr;
    Window *_firstWindowM = nullptr;
    bool _windowISet      = false;
    bool _windowMSet      = false;
    void setupFirstWindow(QString filename, Window *&firstWindow, bool &windowSet);
};

#endif // LOGINPAGE_H
