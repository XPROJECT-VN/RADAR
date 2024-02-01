/********************************************************************************
** Form generated from reading UI file 'lienhop_videoqdt_form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIENHOP_VIDEOQDT_FORM_H
#define UI_LIENHOP_VIDEOQDT_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lienhop_Videoqdt_Form
{
public:
    QLabel *label_17;
    QFrame *frame;

    void setupUi(QWidget *Lienhop_Videoqdt_Form)
    {
        if (Lienhop_Videoqdt_Form->objectName().isEmpty())
            Lienhop_Videoqdt_Form->setObjectName(QString::fromUtf8("Lienhop_Videoqdt_Form"));
        Lienhop_Videoqdt_Form->resize(638, 444);
        Lienhop_Videoqdt_Form->setStyleSheet(QString::fromUtf8("QWidget#Lienhop_Videoqdt_Form {\n"
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
"}"));
        label_17 = new QLabel(Lienhop_Videoqdt_Form);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(10, 11, 620, 23));
        label_17->setMaximumSize(QSize(100000, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("padding-left: 30;\n"
"color: white;"));
        label_17->setText(QString::fromUtf8("VIDEO QUANG \304\220I\341\273\206N T\341\273\254"));
        label_17->setTextFormat(Qt::AutoText);
        frame = new QFrame(Lienhop_Videoqdt_Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 40, 620, 397));
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

        retranslateUi(Lienhop_Videoqdt_Form);

        QMetaObject::connectSlotsByName(Lienhop_Videoqdt_Form);
    } // setupUi

    void retranslateUi(QWidget *Lienhop_Videoqdt_Form)
    {
        Lienhop_Videoqdt_Form->setWindowTitle(QCoreApplication::translate("Lienhop_Videoqdt_Form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lienhop_Videoqdt_Form: public Ui_Lienhop_Videoqdt_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIENHOP_VIDEOQDT_FORM_H
