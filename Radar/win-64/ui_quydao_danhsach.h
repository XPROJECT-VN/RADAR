/********************************************************************************
** Form generated from reading UI file 'quydao_danhsach.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUYDAO_DANHSACH_H
#define UI_QUYDAO_DANHSACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuyDao_DanhSach_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QFrame *frame;
    QGroupBox *groupBox;
    QTableWidget *tableWidget;

    void setupUi(QWidget *QuyDao_DanhSach_Form)
    {
        if (QuyDao_DanhSach_Form->objectName().isEmpty())
            QuyDao_DanhSach_Form->setObjectName(QString::fromUtf8("QuyDao_DanhSach_Form"));
        QuyDao_DanhSach_Form->resize(638, 444);
        QuyDao_DanhSach_Form->setMinimumSize(QSize(638, 444));
        QuyDao_DanhSach_Form->setMaximumSize(QSize(638, 444));
        QuyDao_DanhSach_Form->setStyleSheet(QString::fromUtf8("QWidget#QuyDao_DanhSach_Form {\n"
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
        verticalLayout = new QVBoxLayout(QuyDao_DanhSach_Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_17 = new QLabel(QuyDao_DanhSach_Form);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(100000, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("padding-left: 30;\n"
"color: white;"));
        label_17->setText(QString::fromUtf8("DANH S\303\201CH QU\341\273\270 \304\220\341\272\240O"));
        label_17->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(label_17);

        frame = new QFrame(QuyDao_DanhSach_Form);
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
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 600, 381));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem11);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 20, 581, 351));

        verticalLayout->addWidget(frame);


        retranslateUi(QuyDao_DanhSach_Form);

        QMetaObject::connectSlotsByName(QuyDao_DanhSach_Form);
    } // setupUi

    void retranslateUi(QWidget *QuyDao_DanhSach_Form)
    {
        QuyDao_DanhSach_Form->setWindowTitle(QCoreApplication::translate("QuyDao_DanhSach_Form", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("QuyDao_DanhSach_Form", "B\341\272\243ng th\303\264ng tin m\341\273\245c ti\303\252u", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("QuyDao_DanhSach_Form", "S\341\273\221 hi\341\273\207u", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("QuyDao_DanhSach_Form", "T\303\252n g\341\273\215i", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("QuyDao_DanhSach_Form", "Ngu\341\273\223n", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("QuyDao_DanhSach_Form", "C\341\273\261 ly (km)", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("QuyDao_DanhSach_Form", "Ph\306\260\306\241ng v\341\273\213 (\302\260)", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("QuyDao_DanhSach_Form", "G\303\263c t\303\240 (\302\260)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuyDao_DanhSach_Form: public Ui_QuyDao_DanhSach_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUYDAO_DANHSACH_H
