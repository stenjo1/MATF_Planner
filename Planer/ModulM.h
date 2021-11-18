#ifndef MODULM_H
#define MODULM_H

#include <QWidget>

namespace Ui {
class ModulM;
}

class ModulM : public QWidget
{
    Q_OBJECT

public:
    explicit ModulM(QWidget *parent = nullptr);
    ~ModulM();

private slots:
    void on_pbNext_clicked();

private:
    Ui::ModulM *ui;
};

#endif // MODULM_H
