/********************************************************************************
** Form generated from reading UI file 'LoginPage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginPage
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QCheckBox *math_department;
    QCheckBox *info_department;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *nextButton;
    QButtonGroup *departmentGroup;

    void setupUi(QMainWindow *LoginPage)
    {
        if (LoginPage->objectName().isEmpty())
            LoginPage->setObjectName(QString::fromUtf8("LoginPage"));
        LoginPage->resize(600, 600);
        centralwidget = new QWidget(LoginPage);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(22);
        label_6->setFont(font);

        verticalLayout->addWidget(label_6, 0, Qt::AlignHCenter);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(17);
        label->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_4);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, 0, -1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_5);

        math_department = new QCheckBox(centralwidget);
        departmentGroup = new QButtonGroup(LoginPage);
        departmentGroup->setObjectName(QString::fromUtf8("departmentGroup"));
        departmentGroup->addButton(math_department);
        math_department->setObjectName(QString::fromUtf8("math_department"));
        QFont font2;
        font2.setPointSize(13);
        math_department->setFont(font2);

        horizontalLayout->addWidget(math_department);

        info_department = new QCheckBox(centralwidget);
        departmentGroup->addButton(info_department);
        info_department->setObjectName(QString::fromUtf8("info_department"));
        QFont font3;
        font3.setPointSize(12);
        info_department->setFont(font3);

        horizontalLayout->addWidget(info_department);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        nextButton = new QPushButton(centralwidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));

        horizontalLayout_4->addWidget(nextButton);


        verticalLayout->addLayout(horizontalLayout_4);

        LoginPage->setCentralWidget(centralwidget);

        retranslateUi(LoginPage);

        QMetaObject::connectSlotsByName(LoginPage);
    } // setupUi

    void retranslateUi(QMainWindow *LoginPage)
    {
        LoginPage->setWindowTitle(QCoreApplication::translate("LoginPage", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("LoginPage", "MatfPlaner", nullptr));
        label->setText(QCoreApplication::translate("LoginPage", "Ime", nullptr));
        label_2->setText(QCoreApplication::translate("LoginPage", "Email adresa", nullptr));
        label_4->setText(QCoreApplication::translate("LoginPage", "Godina studija", nullptr));
        label_5->setText(QCoreApplication::translate("LoginPage", "Smer:", nullptr));
        math_department->setText(QCoreApplication::translate("LoginPage", "Matematika", nullptr));
        info_department->setText(QCoreApplication::translate("LoginPage", "Informatika", nullptr));
        nextButton->setText(QCoreApplication::translate("LoginPage", "Dalje", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginPage: public Ui_LoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
