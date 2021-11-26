/********************************************************************************
** Form generated from reading UI file 'ThirdYearI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDYEARI_H
#define UI_THIRDYEARI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdYearI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_7;
    QPushButton *next_pushButton;
    QPushButton *back_pushButton;

    void setupUi(QMainWindow *ThirdYearI)
    {
        if (ThirdYearI->objectName().isEmpty())
            ThirdYearI->setObjectName(QString::fromUtf8("ThirdYearI"));
        ThirdYearI->resize(984, 441);
        centralwidget = new QWidget(ThirdYearI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout->addWidget(checkBox_2);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout_3->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout_3->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout_3->addWidget(checkBox_10);

        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout_3->addWidget(checkBox_7);


        verticalLayout_2->addLayout(verticalLayout_3);

        next_pushButton = new QPushButton(centralwidget);
        next_pushButton->setObjectName(QString::fromUtf8("next_pushButton"));

        verticalLayout_2->addWidget(next_pushButton);

        back_pushButton = new QPushButton(centralwidget);
        back_pushButton->setObjectName(QString::fromUtf8("back_pushButton"));

        verticalLayout_2->addWidget(back_pushButton);

        ThirdYearI->setCentralWidget(centralwidget);

        retranslateUi(ThirdYearI);
        QObject::connect(next_pushButton, SIGNAL(clicked()), ThirdYearI, SLOT(next_button_clicked()));

        QMetaObject::connectSlotsByName(ThirdYearI);
    } // setupUi

    void retranslateUi(QMainWindow *ThirdYearI)
    {
        ThirdYearI->setWindowTitle(QCoreApplication::translate("ThirdYearI", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("ThirdYearI", "Treca godina - informatika", nullptr));
        checkBox->setText(QCoreApplication::translate("ThirdYearI", "Relacione baze podataka", nullptr));
        checkBox_4->setText(QCoreApplication::translate("ThirdYearI", "Prevodjenje programskih jezika", nullptr));
        checkBox_5->setText(QCoreApplication::translate("ThirdYearI", "Racunarska grafika", nullptr));
        checkBox_3->setText(QCoreApplication::translate("ThirdYearI", "Verovatnoca", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ThirdYearI", "Uvoid u numericku matematiku", nullptr));
        checkBox_8->setText(QCoreApplication::translate("ThirdYearI", "Vestacka inteligencija", nullptr));
        checkBox_9->setText(QCoreApplication::translate("ThirdYearI", "Istrazivanje podataka 1", nullptr));
        checkBox_10->setText(QCoreApplication::translate("ThirdYearI", "Programske paradigme", nullptr));
        checkBox_7->setText(QCoreApplication::translate("ThirdYearI", "Statistika", nullptr));
        next_pushButton->setText(QCoreApplication::translate("ThirdYearI", "napred", nullptr));
        back_pushButton->setText(QCoreApplication::translate("ThirdYearI", "nazad", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdYearI: public Ui_ThirdYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDYEARI_H
