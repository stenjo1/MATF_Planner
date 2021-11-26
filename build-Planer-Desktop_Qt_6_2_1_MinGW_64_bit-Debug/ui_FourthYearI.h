/********************************************************************************
** Form generated from reading UI file 'FourthYearI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOURTHYEARI_H
#define UI_FOURTHYEARI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FourthYearI
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *backPushButton;
    QPushButton *nextPushButton;

    void setupUi(QWidget *FourthYearI)
    {
        if (FourthYearI->objectName().isEmpty())
            FourthYearI->setObjectName(QString::fromUtf8("FourthYearI"));
        FourthYearI->resize(765, 538);
        verticalLayout = new QVBoxLayout(FourthYearI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FourthYearI);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox_2 = new QCheckBox(FourthYearI);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox = new QCheckBox(FourthYearI);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);


        verticalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        checkBox_4 = new QCheckBox(FourthYearI);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_3->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(FourthYearI);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_3->addWidget(checkBox_3);


        verticalLayout->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        backPushButton = new QPushButton(FourthYearI);
        backPushButton->setObjectName(QString::fromUtf8("backPushButton"));

        horizontalLayout_2->addWidget(backPushButton);

        nextPushButton = new QPushButton(FourthYearI);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));

        horizontalLayout_2->addWidget(nextPushButton);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FourthYearI);
        QObject::connect(backPushButton, SIGNAL(clicked()), FourthYearI, SLOT(on_backButtonClicked()));
        QObject::connect(nextPushButton, SIGNAL(clicked()), FourthYearI, SLOT(next_button_clicked()));

        QMetaObject::connectSlotsByName(FourthYearI);
    } // setupUi

    void retranslateUi(QWidget *FourthYearI)
    {
        FourthYearI->setWindowTitle(QCoreApplication::translate("FourthYearI", "Form", nullptr));
        label->setText(QCoreApplication::translate("FourthYearI", "Cetvrta godina - informatika", nullptr));
        checkBox_2->setText(QCoreApplication::translate("FourthYearI", "Racunarske mreze", nullptr));
        checkBox->setText(QCoreApplication::translate("FourthYearI", "Razvoj softvera", nullptr));
        checkBox_4->setText(QCoreApplication::translate("FourthYearI", "Projektovanje baza podataka", nullptr));
        checkBox_3->setText(QCoreApplication::translate("FourthYearI", "Specijalni kurs", nullptr));
        backPushButton->setText(QCoreApplication::translate("FourthYearI", "nazad", nullptr));
        nextPushButton->setText(QCoreApplication::translate("FourthYearI", "napred", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FourthYearI: public Ui_FourthYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHYEARI_H
