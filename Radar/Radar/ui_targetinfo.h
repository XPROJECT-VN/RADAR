/********************************************************************************
** Form generated from reading UI file 'targetinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TARGETINFO_H
#define UI_TARGETINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TargetInfo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;

    void setupUi(QFrame *TargetInfo)
    {
        if (TargetInfo->objectName().isEmpty())
            TargetInfo->setObjectName(QString::fromUtf8("TargetInfo"));
        TargetInfo->resize(270, 300);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        TargetInfo->setFont(font);
        TargetInfo->setStyleSheet(QString::fromUtf8("QFrame#TargetInfo {\n"
"background-color: rgb(255, 255, 255, 80);\n"
"}\n"
"* {\n"
"color: white;\n"
"}"));
        verticalLayout = new QVBoxLayout(TargetInfo);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(TargetInfo);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(16777215, 25));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel#label {\n"
"padding-left: 20\n"
"}"));
        label->setMargin(0);

        verticalLayout->addWidget(label);

        frame = new QFrame(TargetInfo);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"border-top: 1px;\n"
"border-style: solid;\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 20, 151, 21));
        QFont font2;
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 50, 151, 21));
        label_3->setFont(font2);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 110, 151, 21));
        label_4->setFont(font2);
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 80, 151, 21));
        label_5->setFont(font2);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 140, 151, 21));
        label_6->setFont(font2);
        label_7 = new QLabel(frame);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 230, 151, 21));
        label_7->setFont(font2);
        label_8 = new QLabel(frame);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 200, 151, 21));
        label_8->setFont(font2);
        label_9 = new QLabel(frame);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 170, 151, 21));
        label_9->setFont(font2);
        label_10 = new QLabel(frame);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(200, 200, 21, 21));
        QFont font3;
        font3.setPointSize(11);
        label_10->setFont(font3);
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/block.png")));
        label_10->setScaledContents(true);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(200, 20, 21, 21));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/xanh_duong-removebg-preview.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(200, 50, 21, 21));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/xanh_duong-removebg-preview (1).png")));
        label_12->setScaledContents(true);
        label_13 = new QLabel(frame);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(200, 80, 21, 21));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/xanh_duong-removebg-preview (2).png")));
        label_13->setScaledContents(true);
        label_14 = new QLabel(frame);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(200, 110, 21, 21));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/xanh_duong-removebg-preview (3).png")));
        label_14->setScaledContents(true);
        label_15 = new QLabel(frame);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(200, 140, 21, 21));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/xanh_duong-removebg-preview (4).png")));
        label_15->setScaledContents(true);
        label_16 = new QLabel(frame);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(200, 170, 21, 21));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/xanh_duong-removebg-preview (5).png")));
        label_16->setScaledContents(true);
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(200, 230, 21, 21));
        label_17->setPixmap(QPixmap(QString::fromUtf8(":/xanh_duong-removebg-preview (6).png")));
        label_17->setScaledContents(true);

        verticalLayout->addWidget(frame);


        retranslateUi(TargetInfo);

        QMetaObject::connectSlotsByName(TargetInfo);
    } // setupUi

    void retranslateUi(QFrame *TargetInfo)
    {
        TargetInfo->setWindowTitle(QCoreApplication::translate("TargetInfo", "Frame", nullptr));
        label->setText(QCoreApplication::translate("TargetInfo", "M\341\273\244C TI\303\212U", nullptr));
        label_2->setText(QCoreApplication::translate("TargetInfo", "1. \304\220\341\273\213ch", nullptr));
        label_3->setText(QCoreApplication::translate("TargetInfo", "2. Ta", nullptr));
        label_4->setText(QCoreApplication::translate("TargetInfo", "4. B\303\241o n\341\272\241n 1", nullptr));
        label_5->setText(QCoreApplication::translate("TargetInfo", "3. Kh\303\264ng x\303\241c \304\221\341\273\213nh", nullptr));
        label_6->setText(QCoreApplication::translate("TargetInfo", "5. B\303\241o n\341\272\241n 2", nullptr));
        label_7->setText(QCoreApplication::translate("TargetInfo", "8. Tr\341\272\241m Ra-\304\221a", nullptr));
        label_8->setText(QCoreApplication::translate("TargetInfo", "7. S\303\242n bay", nullptr));
        label_9->setText(QCoreApplication::translate("TargetInfo", "6. B\303\241o \304\221\341\273\231ng", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TargetInfo: public Ui_TargetInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TARGETINFO_H
