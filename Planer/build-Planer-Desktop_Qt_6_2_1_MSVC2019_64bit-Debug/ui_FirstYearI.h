/********************************************************************************
** Form generated from reading UI file 'FirstYearI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRSTYEARI_H
#define UI_FIRSTYEARI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FirstYearI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbEnd;

    void setupUi(QMainWindow *FirstYearI)
    {
        if (FirstYearI->objectName().isEmpty())
            FirstYearI->setObjectName(QString::fromUtf8("FirstYearI"));
        FirstYearI->resize(600, 600);
        centralwidget = new QWidget(FirstYearI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout->addWidget(checkBox_10);

        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout->addWidget(checkBox_9);

        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout->addWidget(checkBox_8);

        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout->addWidget(checkBox_7);

        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout->addWidget(checkBox_6);

        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbBack = new QPushButton(centralwidget);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(centralwidget);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout->addLayout(horizontalLayout);

        pbEnd = new QPushButton(centralwidget);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        verticalLayout->addWidget(pbEnd);

        FirstYearI->setCentralWidget(centralwidget);

        retranslateUi(FirstYearI);

        QMetaObject::connectSlotsByName(FirstYearI);
    } // setupUi

    void retranslateUi(QMainWindow *FirstYearI)
    {
        FirstYearI->setWindowTitle(QCoreApplication::translate("FirstYearI", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("FirstYearI", "Prva godina", nullptr));
        checkBox_10->setText(QCoreApplication::translate("FirstYearI", "Programiranje 1", nullptr));
        checkBox_9->setText(QCoreApplication::translate("FirstYearI", "Uvod u organizaciju i arhitekturu ra\304\215unara 1", nullptr));
        checkBox_8->setText(QCoreApplication::translate("FirstYearI", "Diskretne strukture 1", nullptr));
        checkBox_7->setText(QCoreApplication::translate("FirstYearI", "Linearna algebra i analiti\304\215ka geometrija", nullptr));
        checkBox_6->setText(QCoreApplication::translate("FirstYearI", "Izborni predmet O1", nullptr));
        checkBox_5->setText(QCoreApplication::translate("FirstYearI", "Programiranje 2", nullptr));
        checkBox_4->setText(QCoreApplication::translate("FirstYearI", "Uvod u organizaciju i arhitekturu ra\304\215unara 2", nullptr));
        checkBox_3->setText(QCoreApplication::translate("FirstYearI", "Diskretne strukture 2", nullptr));
        checkBox_2->setText(QCoreApplication::translate("FirstYearI", "Analiza 1", nullptr));
        checkBox->setText(QCoreApplication::translate("FirstYearI", "Izborni predemet O2", nullptr));
        pbBack->setText(QCoreApplication::translate("FirstYearI", "Nazad", nullptr));
        pbNext->setText(QCoreApplication::translate("FirstYearI", "Dalje", nullptr));
        pbEnd->setText(QCoreApplication::translate("FirstYearI", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstYearI: public Ui_FirstYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTYEARI_H
