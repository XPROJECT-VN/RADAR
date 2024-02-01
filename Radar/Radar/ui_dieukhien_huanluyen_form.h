/********************************************************************************
** Form generated from reading UI file 'dieukhien_huanluyen_form.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIEUKHIEN_HUANLUYEN_FORM_H
#define UI_DIEUKHIEN_HUANLUYEN_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dieukhien_Huanluyen_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *frame;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QGroupBox *groupBox;
    QCheckBox *checkBox_21;
    QCheckBox *checkBox_22;
    QCheckBox *checkBox_23;
    QCheckBox *checkBox_24;
    QPushButton *pushButton_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Dieukhien_Huanluyen_Form)
    {
        if (Dieukhien_Huanluyen_Form->objectName().isEmpty())
            Dieukhien_Huanluyen_Form->setObjectName(QString::fromUtf8("Dieukhien_Huanluyen_Form"));
        Dieukhien_Huanluyen_Form->resize(638, 444);
        Dieukhien_Huanluyen_Form->setMinimumSize(QSize(0, 0));
        Dieukhien_Huanluyen_Form->setMaximumSize(QSize(638, 444));
        Dieukhien_Huanluyen_Form->setStyleSheet(QString::fromUtf8("QWidget#Dieukhien_Huanluyen_Form {\n"
"background-color: rgb(80, 80, 80);\n"
"border-radius: 10px;\n"
"border-width: 2;\n"
"border-style: solid;\n"
"border-color: rgb(255, 255, 255);\n"
"}\n"
"QWidget#Dieukhien_Huanluyen_Form::palette {\n"
"background-color: rgb(80, 80, 80);\n"
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
"}\n"
""));
        verticalLayout = new QVBoxLayout(Dieukhien_Huanluyen_Form);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 3, -1, 6);
        label = new QLabel(Dieukhien_Huanluyen_Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 23));
        label->setMaximumSize(QSize(16777215, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("padding-left: 30;\n"
"color: white;"));

        verticalLayout->addWidget(label);

        frame = new QFrame(Dieukhien_Huanluyen_Form);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 380, 100, 23));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0);\n"
"border: none;\n"
"border-radius: 5px;"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(210, 380, 100, 23));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0);\n"
"border: none;\n"
"border-radius: 5px;"));
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 280, 621, 71));
        checkBox_21 = new QCheckBox(groupBox);
        checkBox_21->setObjectName(QString::fromUtf8("checkBox_21"));
        checkBox_21->setGeometry(QRect(10, 20, 161, 17));
        checkBox_22 = new QCheckBox(groupBox);
        checkBox_22->setObjectName(QString::fromUtf8("checkBox_22"));
        checkBox_22->setGeometry(QRect(240, 20, 131, 17));
        checkBox_23 = new QCheckBox(groupBox);
        checkBox_23->setObjectName(QString::fromUtf8("checkBox_23"));
        checkBox_23->setGeometry(QRect(10, 40, 141, 17));
        checkBox_24 = new QCheckBox(groupBox);
        checkBox_24->setObjectName(QString::fromUtf8("checkBox_24"));
        checkBox_24->setGeometry(QRect(240, 40, 141, 17));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 360, 100, 23));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0);\n"
"border: none;\n"
"border-radius: 5px;"));
        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(110, 380, 100, 23));
        pushButton_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0);\n"
"border: none;\n"
"border-radius: 5px;"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 360, 100, 23));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0);\n"
"border: none;\n"
"border-radius: 5px;"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 360, 100, 23));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(0, 0, 0);\n"
"border: none;\n"
"border-radius: 5px;"));
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 621, 271));
        tableWidget->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget {\n"
"background-color: rgb(120, 120, 120);\n"
"color: white;\n"
"font-size: 10px;\n"
"}\n"
"QHeaderView {\n"
"background-color: rgb(120, 120, 120);\n"
"color: white;\n"
"}\n"
"QHeaderView::section {\n"
"background-color: rgb(120, 120, 120);\n"
"color: white;\n"
"height: 23;\n"
"width: 80;\n"
"}"));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableWidget->horizontalHeader()->setMinimumSectionSize(10);
        tableWidget->horizontalHeader()->setDefaultSectionSize(40);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setMinimumSectionSize(5);
        tableWidget->verticalHeader()->setDefaultSectionSize(40);

        verticalLayout->addWidget(frame);


        retranslateUi(Dieukhien_Huanluyen_Form);

        QMetaObject::connectSlotsByName(Dieukhien_Huanluyen_Form);
    } // setupUi

    void retranslateUi(QWidget *Dieukhien_Huanluyen_Form)
    {
        Dieukhien_Huanluyen_Form->setWindowTitle(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "\304\220I\341\273\200U KHI\341\273\202N HU\341\272\244N LUY\341\273\206N", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "Ch\341\272\241y b\303\240i t\341\272\255p", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "X\303\263a b\303\240i t\341\272\255p", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "T\341\272\241o gi\341\272\243 nhi\341\273\205u", nullptr));
        checkBox_21->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "Nhi\341\273\205u kh\303\264ng \304\221\341\273\223ng b\341\273\231", nullptr));
        checkBox_22->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "Nhi\341\273\205u t\341\272\241p t\303\255ch c\341\273\261c", nullptr));
        checkBox_23->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "Nhi\341\273\205u \304\221\341\273\213a v\341\272\255t", nullptr));
        checkBox_24->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "Nhi\341\273\205u d\341\272\243i kim lo\341\272\241i", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "S\341\273\255a b\303\240i t\341\272\255p", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "D\303\271ng b\303\240i t\341\272\255p", nullptr));
        pushButton->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "T\341\272\241o m\341\273\233i", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "T\341\272\241o b\341\272\243n sao", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "Danh s\303\241ch b\303\240i t\341\272\255p", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Dieukhien_Huanluyen_Form", "5", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class Dieukhien_Huanluyen_Form: public Ui_Dieukhien_Huanluyen_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIEUKHIEN_HUANLUYEN_FORM_H
