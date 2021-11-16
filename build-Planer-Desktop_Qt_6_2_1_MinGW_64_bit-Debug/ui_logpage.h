/********************************************************************************
** Form generated from reading UI file 'logpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGPAGE_H
#define UI_LOGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *titleOfPage;
    QPushButton *nextPushButton;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *studentName;
    QLabel *studentSurname;
    QLabel *yearOfStudy;
    QLabel *studentEmail;
    QLabel *department;
    QLineEdit *surnameLineEdit;
    QLineEdit *emailLineEdit;
    QLineEdit *yearOfStudyLineEdit;
    QLineEdit *departmentLineEdit;
    QLineEdit *nameLineEdit;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 438);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        titleOfPage = new QLabel(centralwidget);
        titleOfPage->setObjectName(QString::fromUtf8("titleOfPage"));
        titleOfPage->setGeometry(QRect(210, 20, 191, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(18);
        font.setBold(true);
        titleOfPage->setFont(font);
        titleOfPage->setLayoutDirection(Qt::LeftToRight);
        titleOfPage->setTextFormat(Qt::RichText);
        titleOfPage->setScaledContents(false);
        nextPushButton = new QPushButton(centralwidget);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));
        nextPushButton->setGeometry(QRect(470, 360, 111, 31));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(140, 110, 321, 141));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        studentName = new QLabel(formLayoutWidget);
        studentName->setObjectName(QString::fromUtf8("studentName"));
        QFont font1;
        font1.setPointSize(13);
        studentName->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, studentName);

        studentSurname = new QLabel(formLayoutWidget);
        studentSurname->setObjectName(QString::fromUtf8("studentSurname"));
        studentSurname->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, studentSurname);

        yearOfStudy = new QLabel(formLayoutWidget);
        yearOfStudy->setObjectName(QString::fromUtf8("yearOfStudy"));
        yearOfStudy->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, yearOfStudy);

        studentEmail = new QLabel(formLayoutWidget);
        studentEmail->setObjectName(QString::fromUtf8("studentEmail"));
        studentEmail->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, studentEmail);

        department = new QLabel(formLayoutWidget);
        department->setObjectName(QString::fromUtf8("department"));
        department->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, department);

        surnameLineEdit = new QLineEdit(formLayoutWidget);
        surnameLineEdit->setObjectName(QString::fromUtf8("surnameLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, surnameLineEdit);

        emailLineEdit = new QLineEdit(formLayoutWidget);
        emailLineEdit->setObjectName(QString::fromUtf8("emailLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, emailLineEdit);

        yearOfStudyLineEdit = new QLineEdit(formLayoutWidget);
        yearOfStudyLineEdit->setObjectName(QString::fromUtf8("yearOfStudyLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, yearOfStudyLineEdit);

        departmentLineEdit = new QLineEdit(formLayoutWidget);
        departmentLineEdit->setObjectName(QString::fromUtf8("departmentLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, departmentLineEdit);

        nameLineEdit = new QLineEdit(formLayoutWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameLineEdit);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        titleOfPage->setText(QCoreApplication::translate("MainWindow", "MATFPLANER", nullptr));
        nextPushButton->setText(QCoreApplication::translate("MainWindow", "slede\304\207a", nullptr));
        studentName->setText(QCoreApplication::translate("MainWindow", "Ime", nullptr));
        studentSurname->setText(QCoreApplication::translate("MainWindow", "Prezime", nullptr));
        yearOfStudy->setText(QCoreApplication::translate("MainWindow", "godina studiranja", nullptr));
        studentEmail->setText(QCoreApplication::translate("MainWindow", "email", nullptr));
        department->setText(QCoreApplication::translate("MainWindow", "smer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGPAGE_H
