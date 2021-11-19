/********************************************************************************
** Form generated from reading UI file 'SecondYearI.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDYEARI_H
#define UI_SECONDYEARI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondYearI
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *checkBox_15;
    QCheckBox *checkBox_17;
    QCheckBox *checkBox_16;
    QCheckBox *checkBox_14;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_4;
    QFrame *frame_5;
    QPushButton *back_button;
    QPushButton *forward_button;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondYearI)
    {
        if (SecondYearI->objectName().isEmpty())
            SecondYearI->setObjectName(QString::fromUtf8("SecondYearI"));
        SecondYearI->resize(784, 537);
        centralwidget = new QWidget(SecondYearI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(22);
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        frame_6 = new QFrame(centralwidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);

        verticalLayout_3->addWidget(frame_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkBox_11 = new QCheckBox(centralwidget);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));

        verticalLayout_5->addWidget(checkBox_11);

        checkBox_13 = new QCheckBox(centralwidget);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));

        verticalLayout_5->addWidget(checkBox_13);

        checkBox_12 = new QCheckBox(centralwidget);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));

        verticalLayout_5->addWidget(checkBox_12);

        checkBox_10 = new QCheckBox(centralwidget);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));

        verticalLayout_5->addWidget(checkBox_10);

        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_5->addWidget(checkBox);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        checkBox_15 = new QCheckBox(centralwidget);
        checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));

        verticalLayout_6->addWidget(checkBox_15);

        checkBox_17 = new QCheckBox(centralwidget);
        checkBox_17->setObjectName(QString::fromUtf8("checkBox_17"));

        verticalLayout_6->addWidget(checkBox_17);

        checkBox_16 = new QCheckBox(centralwidget);
        checkBox_16->setObjectName(QString::fromUtf8("checkBox_16"));

        verticalLayout_6->addWidget(checkBox_16);

        checkBox_14 = new QCheckBox(centralwidget);
        checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));

        verticalLayout_6->addWidget(checkBox_14);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame_4);

        frame_5 = new QFrame(centralwidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);

        horizontalLayout_3->addWidget(frame_5);

        back_button = new QPushButton(centralwidget);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        horizontalLayout_3->addWidget(back_button);

        forward_button = new QPushButton(centralwidget);
        forward_button->setObjectName(QString::fromUtf8("forward_button"));

        horizontalLayout_3->addWidget(forward_button);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_5);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);

        SecondYearI->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(SecondYearI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SecondYearI->setStatusBar(statusbar);

        retranslateUi(SecondYearI);
        QObject::connect(forward_button, SIGNAL(clicked()), SecondYearI, SLOT(next_button_clicked()));

        QMetaObject::connectSlotsByName(SecondYearI);
    } // setupUi

    void retranslateUi(QMainWindow *SecondYearI)
    {
        SecondYearI->setWindowTitle(QCoreApplication::translate("SecondYearI", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("SecondYearI", "Druga godina - informatika", nullptr));
        checkBox_11->setText(QCoreApplication::translate("SecondYearI", "Algoritmi i strukture podataka", nullptr));
        checkBox_13->setText(QCoreApplication::translate("SecondYearI", "Objektno orijentisano programiranje", nullptr));
        checkBox_12->setText(QCoreApplication::translate("SecondYearI", "Operativni sistemi", nullptr));
        checkBox_10->setText(QCoreApplication::translate("SecondYearI", "Geometrija", nullptr));
        checkBox->setText(QCoreApplication::translate("SecondYearI", "Analiza 2", nullptr));
        checkBox_15->setText(QCoreApplication::translate("SecondYearI", "Konstrukcija i analiza algoritama", nullptr));
        checkBox_17->setText(QCoreApplication::translate("SecondYearI", "Uvod u veb i internet tehnologije", nullptr));
        checkBox_16->setText(QCoreApplication::translate("SecondYearI", "Analiza 3", nullptr));
        checkBox_14->setText(QCoreApplication::translate("SecondYearI", "Algebra 1", nullptr));
        back_button->setText(QCoreApplication::translate("SecondYearI", "nazad", nullptr));
        forward_button->setText(QCoreApplication::translate("SecondYearI", "napred", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondYearI: public Ui_SecondYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDYEARI_H
