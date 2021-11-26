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

class Ui_FirstYearI
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *back_button;
    QPushButton *forward_button;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *FirstYearI)
    {
        if (FirstYearI->objectName().isEmpty())
            FirstYearI->setObjectName(QString::fromUtf8("FirstYearI"));
        FirstYearI->resize(739, 480);
        centralwidget = new QWidget(FirstYearI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        checkBox_6 = new QCheckBox(centralwidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));

        verticalLayout_2->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(centralwidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));

        verticalLayout_2->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(centralwidget);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));

        verticalLayout_2->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(centralwidget);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));

        verticalLayout_2->addWidget(checkBox_9);


        gridLayout->addLayout(verticalLayout_2, 4, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setChecked(false);

        verticalLayout->addWidget(checkBox_2);

        checkBox_5 = new QCheckBox(centralwidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));

        verticalLayout->addWidget(checkBox_5);

        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout->addWidget(checkBox_3);


        gridLayout->addLayout(verticalLayout, 5, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(22);
        label_6->setFont(font);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_2);

        back_button = new QPushButton(centralwidget);
        back_button->setObjectName(QString::fromUtf8("back_button"));

        horizontalLayout->addWidget(back_button);

        forward_button = new QPushButton(centralwidget);
        forward_button->setObjectName(QString::fromUtf8("forward_button"));

        horizontalLayout->addWidget(forward_button);


        gridLayout->addLayout(horizontalLayout, 6, 0, 1, 1);

        FirstYearI->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(FirstYearI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        FirstYearI->setStatusBar(statusbar);

        retranslateUi(FirstYearI);
        QObject::connect(forward_button, SIGNAL(clicked()), FirstYearI, SLOT(forward_button_clicked()));

        QMetaObject::connectSlotsByName(FirstYearI);
    } // setupUi

    void retranslateUi(QMainWindow *FirstYearI)
    {
        FirstYearI->setWindowTitle(QCoreApplication::translate("FirstYearI", "MainWindow", nullptr));
        checkBox_6->setText(QCoreApplication::translate("FirstYearI", "Programiranje 2", nullptr));
        checkBox_7->setText(QCoreApplication::translate("FirstYearI", "Uvod u organizaciju i arhitekturu racunara 2", nullptr));
        checkBox_8->setText(QCoreApplication::translate("FirstYearI", "Diskretne strukture 2", nullptr));
        checkBox_9->setText(QCoreApplication::translate("FirstYearI", "Analiza 1", nullptr));
        checkBox_2->setText(QCoreApplication::translate("FirstYearI", "Programiranje 1", nullptr));
        checkBox_5->setText(QCoreApplication::translate("FirstYearI", "Uvod u organizaciju i arhitekturu racunara 1", nullptr));
        checkBox_4->setText(QCoreApplication::translate("FirstYearI", "Diskretne strukture 1", nullptr));
        checkBox_3->setText(QCoreApplication::translate("FirstYearI", "Linearna algebra i analiticka geometrija", nullptr));
        label_6->setText(QCoreApplication::translate("FirstYearI", "Prva godina - informatika", nullptr));
        back_button->setText(QCoreApplication::translate("FirstYearI", "nazad", nullptr));
        forward_button->setText(QCoreApplication::translate("FirstYearI", "dalje", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FirstYearI: public Ui_FirstYearI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRSTYEARI_H
