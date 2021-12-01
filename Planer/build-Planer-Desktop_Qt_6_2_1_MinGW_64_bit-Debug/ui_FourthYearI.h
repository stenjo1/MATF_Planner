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
    QCheckBox *cbRM;
    QCheckBox *cbRS;
    QCheckBox *cbIzborniR2;
    QCheckBox *cbIzborniR3;
    QCheckBox *cbIzborniM1;
    QCheckBox *cbPBP;
    QCheckBox *cbSK;
    QCheckBox *cbIzborniK;
    QCheckBox *cbIzborniV1;
    QCheckBox *cbIzborniM2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pbBack;
    QPushButton *pbEnd;

    void setupUi(QWidget *FourthYearI)
    {
        if (FourthYearI->objectName().isEmpty())
            FourthYearI->setObjectName(QString::fromUtf8("FourthYearI"));
        FourthYearI->resize(600, 600);
        verticalLayout = new QVBoxLayout(FourthYearI);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(FourthYearI);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        cbRM = new QCheckBox(FourthYearI);
        cbRM->setObjectName(QString::fromUtf8("cbRM"));

        verticalLayout->addWidget(cbRM);

        cbRS = new QCheckBox(FourthYearI);
        cbRS->setObjectName(QString::fromUtf8("cbRS"));

        verticalLayout->addWidget(cbRS);

        cbIzborniR2 = new QCheckBox(FourthYearI);
        cbIzborniR2->setObjectName(QString::fromUtf8("cbIzborniR2"));

        verticalLayout->addWidget(cbIzborniR2);

        cbIzborniR3 = new QCheckBox(FourthYearI);
        cbIzborniR3->setObjectName(QString::fromUtf8("cbIzborniR3"));

        verticalLayout->addWidget(cbIzborniR3);

        cbIzborniM1 = new QCheckBox(FourthYearI);
        cbIzborniM1->setObjectName(QString::fromUtf8("cbIzborniM1"));

        verticalLayout->addWidget(cbIzborniM1);

        cbPBP = new QCheckBox(FourthYearI);
        cbPBP->setObjectName(QString::fromUtf8("cbPBP"));

        verticalLayout->addWidget(cbPBP);

        cbSK = new QCheckBox(FourthYearI);
        cbSK->setObjectName(QString::fromUtf8("cbSK"));

        verticalLayout->addWidget(cbSK);

        cbIzborniK = new QCheckBox(FourthYearI);
        cbIzborniK->setObjectName(QString::fromUtf8("cbIzborniK"));

        verticalLayout->addWidget(cbIzborniK);

        cbIzborniV1 = new QCheckBox(FourthYearI);
        cbIzborniV1->setObjectName(QString::fromUtf8("cbIzborniV1"));

        verticalLayout->addWidget(cbIzborniV1);

        cbIzborniM2 = new QCheckBox(FourthYearI);
        cbIzborniM2->setObjectName(QString::fromUtf8("cbIzborniM2"));

        verticalLayout->addWidget(cbIzborniM2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pbBack = new QPushButton(FourthYearI);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout_2->addWidget(pbBack);

        pbEnd = new QPushButton(FourthYearI);
        pbEnd->setObjectName(QString::fromUtf8("pbEnd"));

        horizontalLayout_2->addWidget(pbEnd);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(FourthYearI);

        QMetaObject::connectSlotsByName(FourthYearI);
    } // setupUi

    void retranslateUi(QWidget *FourthYearI)
    {
        FourthYearI->setWindowTitle(QCoreApplication::translate("FourthYearI", "Form", nullptr));
        label->setText(QCoreApplication::translate("FourthYearI", "Cetvrta godina - informatika", nullptr));
        cbRM->setText(QCoreApplication::translate("FourthYearI", "Ra\304\215unarske mre\305\276e", nullptr));
        cbRS->setText(QCoreApplication::translate("FourthYearI", "Razvoj softvera", nullptr));
        cbIzborniR2->setText(QCoreApplication::translate("FourthYearI", "Izborni predmet R2", nullptr));
        cbIzborniR3->setText(QCoreApplication::translate("FourthYearI", "Izborni predmet R3", nullptr));
        cbIzborniM1->setText(QCoreApplication::translate("FourthYearI", "Izborni predmet M1", nullptr));
        cbPBP->setText(QCoreApplication::translate("FourthYearI", "Projektovanje baza podataka", nullptr));
        cbSK->setText(QCoreApplication::translate("FourthYearI", "Specijalni kurs", nullptr));
        cbIzborniK->setText(QCoreApplication::translate("FourthYearI", "Izborni predmet K", nullptr));
        cbIzborniV1->setText(QCoreApplication::translate("FourthYearI", "Izborni predmet V1", nullptr));
        cbIzborniM2->setText(QCoreApplication::translate("FourthYearI", "Izborni predmet M2", nullptr));
        pbBack->setText(QCoreApplication::translate("FourthYearI", "Nazad", nullptr));
        pbEnd->setText(QCoreApplication::translate("FourthYearI", "Kraj", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FourthYearI: public Ui_FourthYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOURTHYEARI_H
