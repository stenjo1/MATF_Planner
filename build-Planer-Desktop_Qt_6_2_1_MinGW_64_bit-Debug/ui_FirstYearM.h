/********************************************************************************
** Form generated from reading UI file 'FirstYearM.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTYEARM_H
#define UI_FIRSTYEARM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstYearM
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_10;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_6;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FirstYearM)
    {
        if (FirstYearM->objectName().isEmpty())
            FirstYearM->setObjectName(QString::fromUtf8("FirstYearM"));
        FirstYearM->resize(800, 600);
        centralwidget = new QWidget(FirstYearM);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(22);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(false);

        verticalLayout->addWidget(checkBox_2);

        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout->addWidget(checkBox_10);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout_2->addWidget(checkBox_8);

        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout_2->addWidget(checkBox_5);

        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout_2->addWidget(checkBox_9);

        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_2->addWidget(checkBox_6);


        verticalLayout_3->addLayout(verticalLayout_2);

        FirstYearM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FirstYearM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        FirstYearM->setMenuBar(menubar);
        statusbar = new QStatusBar(FirstYearM);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FirstYearM->setStatusBar(statusbar);

        retranslateUi(FirstYearM);

        QMetaObject::connectSlotsByName(FirstYearM);
    } // setupUi

    void retranslateUi(QMainWindow *FirstYearM)
    {
        FirstYearM->setWindowTitle(QCoreApplication::translate("FirstYearM", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("FirstYearM", "Prva godina - matematika", nullptr));
        checkBox_2->setText(QCoreApplication::translate("FirstYearM", "Analiza 1", nullptr));
        checkBox_4->setText(QCoreApplication::translate("FirstYearM", "Uvod u matematicku logiku", nullptr));
        checkBox_3->setText(QCoreApplication::translate("FirstYearM", "Programiranje 1", nullptr));
        checkBox_10->setText(QCoreApplication::translate("FirstYearM", "Strani jezik", nullptr));
        checkBox_8->setText(QCoreApplication::translate("FirstYearM", "Geometrija 1", nullptr));
        checkBox_5->setText(QCoreApplication::translate("FirstYearM", "Linearna algebra", nullptr));
        checkBox_9->setText(QCoreApplication::translate("FirstYearM", "Analiza 1", nullptr));
        checkBox_6->setText(QCoreApplication::translate("FirstYearM", "Programiranje 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstYearM: public Ui_FirstYearM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTYEARM_H
