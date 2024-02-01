/********************************************************************************
** Form generated from reading UI file 'giamsat_trx.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAMSAT_TRX_H
#define UI_GIAMSAT_TRX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GiamSat_TRX_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QFrame *frame;
    QGroupBox *groupBox_2;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *GiamSat_TRX_Form)
    {
        if (GiamSat_TRX_Form->objectName().isEmpty())
            GiamSat_TRX_Form->setObjectName(QString::fromUtf8("GiamSat_TRX_Form"));
        GiamSat_TRX_Form->resize(638, 444);
        GiamSat_TRX_Form->setMinimumSize(QSize(638, 444));
        GiamSat_TRX_Form->setMaximumSize(QSize(638, 444));
        GiamSat_TRX_Form->setStyleSheet(QString::fromUtf8("QWidget#GiamSat_TRX_Form {\n"
"background-color: rgb(80, 80, 80);\n"
"border-radius: 10px;\n"
"border-width: 2;\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"}\n"
"QGroupBox {\n"
"border-radius: 5px;\n"
"border-width: 2;\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"}\n"
"* {\n"
"color: white;\n"
"font-weight: bold;\n"
"}"));
        verticalLayout = new QVBoxLayout(GiamSat_TRX_Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_17 = new QLabel(GiamSat_TRX_Form);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(100000, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("padding-left: 30;\n"
"color: white;"));
        label_17->setText(QString::fromUtf8("GI\303\201M S\303\201T TRX"));
        label_17->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(label_17);

        frame = new QFrame(GiamSat_TRX_Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"background-color: rgb(120, 120, 120);\n"
"border-radius: 5px;\n"
"border-width: 0;\n"
"}\n"
"QGroupBox {\n"
"margin-top: 7;\n"
"}\n"
"QGroupBox::title {\n"
"top: -8;\n"
"left: 24;\n"
"padding-left: 10px;\n"
"padding-right: 10px;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox_2 = new QGroupBox(frame);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 150, 601, 131));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 30, 111, 16));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(160, 60, 111, 16));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(160, 30, 111, 16));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(30, 60, 111, 16));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(30, 90, 111, 16));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(160, 90, 111, 16));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 601, 131));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 30, 111, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(160, 30, 111, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 60, 111, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(160, 60, 111, 16));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 90, 111, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(160, 90, 111, 16));

        verticalLayout->addWidget(frame);


        retranslateUi(GiamSat_TRX_Form);

        QMetaObject::connectSlotsByName(GiamSat_TRX_Form);
    } // setupUi

    void retranslateUi(QWidget *GiamSat_TRX_Form)
    {
        GiamSat_TRX_Form->setWindowTitle(QCoreApplication::translate("GiamSat_TRX_Form", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("GiamSat_TRX_Form", "TRC", nullptr));
        label_8->setText(QCoreApplication::translate("GiamSat_TRX_Form", "\304\220i\341\273\207n \303\241p 6V", nullptr));
        label_9->setText(QCoreApplication::translate("GiamSat_TRX_Form", "4V", nullptr));
        label_10->setText(QCoreApplication::translate("GiamSat_TRX_Form", "6V", nullptr));
        label_11->setText(QCoreApplication::translate("GiamSat_TRX_Form", "\304\220i\341\273\207n \303\241p 4V", nullptr));
        label_12->setText(QCoreApplication::translate("GiamSat_TRX_Form", "Nhi\341\273\207t \304\221\341\273\231", nullptr));
        label_13->setText(QCoreApplication::translate("GiamSat_TRX_Form", "49\302\260C", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GiamSat_TRX_Form", "LOC", nullptr));
        label_2->setText(QCoreApplication::translate("GiamSat_TRX_Form", "\304\220i\341\273\207n \303\241p 6V", nullptr));
        label_3->setText(QCoreApplication::translate("GiamSat_TRX_Form", "6V", nullptr));
        label_4->setText(QCoreApplication::translate("GiamSat_TRX_Form", "\304\220i\341\273\207n \303\241p 4V", nullptr));
        label_5->setText(QCoreApplication::translate("GiamSat_TRX_Form", "4V", nullptr));
        label_6->setText(QCoreApplication::translate("GiamSat_TRX_Form", "Nhi\341\273\207t \304\221\341\273\231", nullptr));
        label_7->setText(QCoreApplication::translate("GiamSat_TRX_Form", "56\302\260C", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GiamSat_TRX_Form: public Ui_GiamSat_TRX_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAMSAT_TRX_H
