/********************************************************************************
** Form generated from reading UI file 'newtarget_form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWTARGET_FORM_H
#define UI_NEWTARGET_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewTargetForm
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QSpinBox *posX_val;
    QSpinBox *posY_val;
    QComboBox *direection_list;
    QSpinBox *heigth;
    QSpinBox *velocity;
    QSpinBox *top_number;
    QPushButton *pushButton_2;

    void setupUi(QWidget *NewTargetForm)
    {
        if (NewTargetForm->objectName().isEmpty())
            NewTargetForm->setObjectName(QString::fromUtf8("NewTargetForm"));
        NewTargetForm->resize(343, 269);
        NewTargetForm->setStyleSheet(QString::fromUtf8("QWidget#NewTargetForm {\n"
"border: 1px;\n"
"border-style: solid;\n"
"border-color: black;\n"
"}"));
        gridLayout_2 = new QGridLayout(NewTargetForm);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 6);
        label = new QLabel(NewTargetForm);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(NewTargetForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(NewTargetForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(NewTargetForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(NewTargetForm);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(NewTargetForm);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        posX_val = new QSpinBox(NewTargetForm);
        posX_val->setObjectName(QString::fromUtf8("posX_val"));
        posX_val->setMaximum(9999999);

        verticalLayout_2->addWidget(posX_val);

        posY_val = new QSpinBox(NewTargetForm);
        posY_val->setObjectName(QString::fromUtf8("posY_val"));
        posY_val->setMaximum(9999999);

        verticalLayout_2->addWidget(posY_val);

        direection_list = new QComboBox(NewTargetForm);
        direection_list->addItem(QString());
        direection_list->addItem(QString());
        direection_list->addItem(QString());
        direection_list->addItem(QString());
        direection_list->addItem(QString());
        direection_list->setObjectName(QString::fromUtf8("direection_list"));

        verticalLayout_2->addWidget(direection_list);

        heigth = new QSpinBox(NewTargetForm);
        heigth->setObjectName(QString::fromUtf8("heigth"));
        heigth->setMaximum(9999999);

        verticalLayout_2->addWidget(heigth);

        velocity = new QSpinBox(NewTargetForm);
        velocity->setObjectName(QString::fromUtf8("velocity"));
        velocity->setMaximum(9999999);

        verticalLayout_2->addWidget(velocity);

        top_number = new QSpinBox(NewTargetForm);
        top_number->setObjectName(QString::fromUtf8("top_number"));
        top_number->setMaximum(9999999);

        verticalLayout_2->addWidget(top_number);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout_2->addLayout(horizontalLayout, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(NewTargetForm);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 1, 2, 1, 1);


        retranslateUi(NewTargetForm);

        QMetaObject::connectSlotsByName(NewTargetForm);
    } // setupUi

    void retranslateUi(QWidget *NewTargetForm)
    {
        NewTargetForm->setWindowTitle(QCoreApplication::translate("NewTargetForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("NewTargetForm", "V\341\273\213 tr\303\255 X", nullptr));
        label_2->setText(QCoreApplication::translate("NewTargetForm", "V\341\273\213 tr\303\255 Y", nullptr));
        label_3->setText(QCoreApplication::translate("NewTargetForm", "H\306\260\341\273\233ng di chuy\341\273\203n", nullptr));
        label_4->setText(QCoreApplication::translate("NewTargetForm", "\304\220\341\273\231 cao", nullptr));
        label_5->setText(QCoreApplication::translate("NewTargetForm", "V\341\272\255n t\341\273\221c", nullptr));
        label_6->setText(QCoreApplication::translate("NewTargetForm", "S\341\273\221 t\341\273\221p", nullptr));
        direection_list->setItemText(0, QCoreApplication::translate("NewTargetForm", "Tr\303\241i sang ph\341\272\243i", nullptr));
        direection_list->setItemText(1, QCoreApplication::translate("NewTargetForm", "Ph\341\272\243i sang tr\303\241i", nullptr));
        direection_list->setItemText(2, QCoreApplication::translate("NewTargetForm", "Tr\303\252n xu\341\273\221ng d\306\260\341\273\233i", nullptr));
        direection_list->setItemText(3, QCoreApplication::translate("NewTargetForm", "D\306\260\341\273\233i l\303\252n tr\303\252n", nullptr));
        direection_list->setItemText(4, QCoreApplication::translate("NewTargetForm", "TL ->BR", nullptr));

        pushButton_2->setText(QCoreApplication::translate("NewTargetForm", "Th\303\252m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NewTargetForm: public Ui_NewTargetForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWTARGET_FORM_H
