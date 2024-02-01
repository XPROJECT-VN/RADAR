/********************************************************************************
** Form generated from reading UI file 'giamsat_pwr.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAMSAT_PWR_H
#define UI_GIAMSAT_PWR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GiamSat_PWR_Form
{
public:
    QFrame *frame;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QTableWidget *tableWidget;
    QLabel *label_17;

    void setupUi(QWidget *GiamSat_PWR_Form)
    {
        if (GiamSat_PWR_Form->objectName().isEmpty())
            GiamSat_PWR_Form->setObjectName(QString::fromUtf8("GiamSat_PWR_Form"));
        GiamSat_PWR_Form->resize(638, 444);
        GiamSat_PWR_Form->setMinimumSize(QSize(638, 444));
        GiamSat_PWR_Form->setMaximumSize(QSize(638, 444));
        GiamSat_PWR_Form->setStyleSheet(QString::fromUtf8("QWidget#GiamSat_PWR_Form {\n"
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
        frame = new QFrame(GiamSat_PWR_Form);
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
"}\n"
"*{\n"
"background-color: rgb(120, 120, 120);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 300, 602, 91));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 16, 291, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 32, 291, 16));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 64, 291, 16));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 48, 638, 16));
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setMaximumSize(QSize(638, 444));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(320, 64, 291, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(320, 16, 291, 16));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(320, 32, 291, 16));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(320, 48, 291, 16));
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setBackground(QColor(255, 255, 255));
        __qtablewidgetitem->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setBackground(QColor(120, 120, 120, 0));
        __qtablewidgetitem1->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setBackground(QColor(120, 120, 120, 0));
        __qtablewidgetitem2->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setBackground(QColor(120, 120, 120, 0));
        __qtablewidgetitem3->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setBackground(QColor(120, 120, 120, 0));
        __qtablewidgetitem4->setForeground(brush);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 10)
            tableWidget->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem14);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(6, 6, 608, 291));
        tableWidget->setAutoFillBackground(false);
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget { \n"
"	background-color: rgba(120, 120, 120, 255);\n"
"}\n"
"QHeaderView::section {\n"
"background-color: rgba(120, 120, 120, 255);\n"
"selection-color:  rgba(120, 120, 120, 255);\n"
"}\n"
""));
        label_17 = new QLabel(GiamSat_PWR_Form);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 10, 620, 23));
        label_17->setMaximumSize(QSize(100000, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("padding-left: 30;\n"
"color: white;"));
        label_17->setText(QString::fromUtf8("GI\303\201M S\303\201T NGU\341\273\222N"));
        label_17->setTextFormat(Qt::AutoText);

        retranslateUi(GiamSat_PWR_Form);

        QMetaObject::connectSlotsByName(GiamSat_PWR_Form);
    } // setupUi

    void retranslateUi(QWidget *GiamSat_PWR_Form)
    {
        GiamSat_PWR_Form->setWindowTitle(QCoreApplication::translate("GiamSat_PWR_Form", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("GiamSat_PWR_Form", "Ch\303\272 th\303\255ch", nullptr));
        label_2->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 0: \304\220i\341\273\207n \303\241p ra qu\303\241 cao", nullptr));
        label_3->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 1: \304\220i\341\273\207n \303\241p ra qu\303\241 th\341\272\245p", nullptr));
        label_4->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 3: \304\220i\341\273\207n \303\241p v\303\240o qu\303\241 th\341\272\245p", nullptr));
        label_5->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 2: \304\220i\341\273\207n \303\241p v\303\240o qu\303\241 cao", nullptr));
        label_6->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 7: L\341\273\227i ph\341\272\247n c\341\273\251ng", nullptr));
        label_7->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 4: D\303\262ng \304\221i\341\273\207n ra qu\303\241 cao", nullptr));
        label_8->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 5: Nhi\341\273\207t \304\221\341\273\231 qu\303\241 cao", nullptr));
        label_9->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 6: L\341\273\227i chia t\341\272\243i", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GiamSat_PWR_Form", "50VDC_RF1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GiamSat_PWR_Form", "50VDC_RF2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GiamSat_PWR_Form", "48VDC_FAN1", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GiamSat_PWR_Form", "24VDC_01", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("GiamSat_PWR_Form", "24VDC_02", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("GiamSat_PWR_Form", "\304\220i\341\273\207n \303\241p (V)", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("GiamSat_PWR_Form", "D\303\262ng \304\221i\341\273\207n (A)", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("GiamSat_PWR_Form", "Nhi\341\273\207t \304\221\341\273\231 (\302\260C)", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 0", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 3", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 4", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 5", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("GiamSat_PWR_Form", "L\341\273\227i 7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GiamSat_PWR_Form: public Ui_GiamSat_PWR_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAMSAT_PWR_H
