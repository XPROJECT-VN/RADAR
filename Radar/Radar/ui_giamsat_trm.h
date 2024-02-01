/********************************************************************************
** Form generated from reading UI file 'giamsat_trm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAMSAT_TRM_H
#define UI_GIAMSAT_TRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GiamSat_TRM_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QFrame *frame;

    void setupUi(QWidget *GiamSat_TRM_Form)
    {
        if (GiamSat_TRM_Form->objectName().isEmpty())
            GiamSat_TRM_Form->setObjectName(QString::fromUtf8("GiamSat_TRM_Form"));
        GiamSat_TRM_Form->resize(638, 444);
        GiamSat_TRM_Form->setMinimumSize(QSize(638, 444));
        GiamSat_TRM_Form->setMaximumSize(QSize(638, 444));
        GiamSat_TRM_Form->setStyleSheet(QString::fromUtf8("QWidget#GiamSat_TRM_Form {\n"
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
        verticalLayout = new QVBoxLayout(GiamSat_TRM_Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_17 = new QLabel(GiamSat_TRM_Form);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(100000, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("padding-left: 30;\n"
"color: white;"));
        label_17->setText(QString::fromUtf8("GI\303\201M S\303\201T TRM"));
        label_17->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(label_17);

        frame = new QFrame(GiamSat_TRM_Form);
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

        verticalLayout->addWidget(frame);


        retranslateUi(GiamSat_TRM_Form);

        QMetaObject::connectSlotsByName(GiamSat_TRM_Form);
    } // setupUi

    void retranslateUi(QWidget *GiamSat_TRM_Form)
    {
        GiamSat_TRM_Form->setWindowTitle(QCoreApplication::translate("GiamSat_TRM_Form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GiamSat_TRM_Form: public Ui_GiamSat_TRM_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAMSAT_TRM_H
