/********************************************************************************
** Form generated from reading UI file 'ModulM.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODULM_H
#define UI_MODULM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModulM
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QRadioButton *rbL;
    QRadioButton *rbM;
    QRadioButton *rbR;
    QRadioButton *rbV;
    QRadioButton *rbN;
    QRadioButton *radioButton_6;
    QPushButton *pbNext;

    void setupUi(QWidget *ModulM)
    {
        if (ModulM->objectName().isEmpty())
            ModulM->setObjectName(QString::fromUtf8("ModulM"));
        ModulM->resize(566, 526);
        verticalLayout = new QVBoxLayout(ModulM);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ModulM);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(22);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        rbL = new QRadioButton(ModulM);
        rbL->setObjectName(QString::fromUtf8("rbL"));
        QFont font1;
        font1.setPointSize(16);
        rbL->setFont(font1);

        verticalLayout->addWidget(rbL);

        rbM = new QRadioButton(ModulM);
        rbM->setObjectName(QString::fromUtf8("rbM"));
        rbM->setFont(font1);

        verticalLayout->addWidget(rbM);

        rbR = new QRadioButton(ModulM);
        rbR->setObjectName(QString::fromUtf8("rbR"));
        rbR->setFont(font1);

        verticalLayout->addWidget(rbR);

        rbV = new QRadioButton(ModulM);
        rbV->setObjectName(QString::fromUtf8("rbV"));
        rbV->setFont(font1);

        verticalLayout->addWidget(rbV);

        rbN = new QRadioButton(ModulM);
        rbN->setObjectName(QString::fromUtf8("rbN"));
        rbN->setFont(font1);

        verticalLayout->addWidget(rbN);

        radioButton_6 = new QRadioButton(ModulM);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setFont(font1);

        verticalLayout->addWidget(radioButton_6);

        pbNext = new QPushButton(ModulM);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        verticalLayout->addWidget(pbNext);


        retranslateUi(ModulM);

        QMetaObject::connectSlotsByName(ModulM);
    } // setupUi

    void retranslateUi(QWidget *ModulM)
    {
        ModulM->setWindowTitle(QCoreApplication::translate("ModulM", "Form", nullptr));
        label->setText(QCoreApplication::translate("ModulM", "Program studija", nullptr));
        rbL->setText(QCoreApplication::translate("ModulM", "Profesor matematike i ra\304\215unarstva", nullptr));
        rbM->setText(QCoreApplication::translate("ModulM", "Teorijska matematika i primene", nullptr));
        rbR->setText(QCoreApplication::translate("ModulM", "Ra\304\215unarstvo i informatika", nullptr));
        rbV->setText(QCoreApplication::translate("ModulM", "Primenjena matematika", nullptr));
        rbN->setText(QCoreApplication::translate("ModulM", "Statistika, aktuarska i finansijska matematika", nullptr));
        radioButton_6->setText(QCoreApplication::translate("ModulM", "Astronomija", nullptr));
        pbNext->setText(QCoreApplication::translate("ModulM", "Dalje", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModulM: public Ui_ModulM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODULM_H
