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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbEnd;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FirstYearM)
    {
        if (FirstYearM->objectName().isEmpty())
            FirstYearM->setObjectName(QString::fromUtf8("FirstYearM"));
        FirstYearM->resize(814, 624);
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

        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout->addWidget(checkBox_9);

        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout->addWidget(checkBox_6);

        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout->addWidget(checkBox_10);

        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout->addWidget(checkBox_8);

        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(centralwidget);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(centralwidget);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout_3->addLayout(horizontalLayout);

        pbEnd = new QPushButton(centralwidget);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        verticalLayout_3->addWidget(pbEnd);

        FirstYearM->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FirstYearM);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 814, 22));
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
        label_6->setText(QCoreApplication::translate("FirstYearM", "Prva godina ", nullptr));
        checkBox_2->setText(QCoreApplication::translate("FirstYearM", "Analiza 1", nullptr));
        checkBox_5->setText(QCoreApplication::translate("FirstYearM", "Linearna algebra", nullptr));
        checkBox_9->setText(QCoreApplication::translate("FirstYearM", "Analiza 1", nullptr));
        checkBox_6->setText(QCoreApplication::translate("FirstYearM", "Programiranje 2", nullptr));
        checkBox_4->setText(QCoreApplication::translate("FirstYearM", "Uvod u matematicku logiku", nullptr));
        checkBox_10->setText(QCoreApplication::translate("FirstYearM", "Strani jezik", nullptr));
        checkBox_8->setText(QCoreApplication::translate("FirstYearM", "Geometrija 1", nullptr));
        checkBox_3->setText(QCoreApplication::translate("FirstYearM", "Programiranje 1", nullptr));
        pbBack->setText(QCoreApplication::translate("FirstYearM", "Nazad", nullptr));
        pbNext->setText(QCoreApplication::translate("FirstYearM", "Dalje", nullptr));
        pbEnd->setText(QCoreApplication::translate("FirstYearM", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstYearM: public Ui_FirstYearM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTYEARM_H
