/********************************************************************************
** Form generated from reading UI file 'giamsat_canhbao.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GIAMSAT_CANHBAO_H
#define UI_GIAMSAT_CANHBAO_H

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

class Ui_GiamSat_CanhBao_Form
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_17;
    QFrame *frame;
    QTableWidget *tableWidget;
    QGroupBox *groupBox;

    void setupUi(QWidget *GiamSat_CanhBao_Form)
    {
        if (GiamSat_CanhBao_Form->objectName().isEmpty())
            GiamSat_CanhBao_Form->setObjectName(QString::fromUtf8("GiamSat_CanhBao_Form"));
        GiamSat_CanhBao_Form->resize(638, 444);
        GiamSat_CanhBao_Form->setMinimumSize(QSize(638, 444));
        GiamSat_CanhBao_Form->setMaximumSize(QSize(638, 444));
        GiamSat_CanhBao_Form->setStyleSheet(QString::fromUtf8("QWidget#GiamSat_CanhBao_Form {\n"
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
        verticalLayout = new QVBoxLayout(GiamSat_CanhBao_Form);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_17 = new QLabel(GiamSat_CanhBao_Form);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMaximumSize(QSize(100000, 23));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_17->setFont(font);
        label_17->setStyleSheet(QString::fromUtf8("padding-left: 30;\n"
"color: white;"));
        label_17->setText(QString::fromUtf8("GI\303\201M S\303\201T C\341\272\242NH B\303\201O"));
        label_17->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(label_17);

        frame = new QFrame(GiamSat_CanhBao_Form);
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
        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setForeground(brush);
        tableWidget->setItem(0, 0, __qtablewidgetitem9);
        QBrush brush1(QColor(255, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setBackground(brush2);
        __qtablewidgetitem10->setForeground(brush1);
        tableWidget->setItem(0, 1, __qtablewidgetitem10);
        QBrush brush3(QColor(255, 0, 0, 255));
        brush3.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setForeground(brush3);
        tableWidget->setItem(0, 2, __qtablewidgetitem11);
        QBrush brush4(QColor(255, 183, 0, 255));
        brush4.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setForeground(brush4);
        tableWidget->setItem(1, 0, __qtablewidgetitem12);
        QBrush brush5(QColor(255, 183, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setForeground(brush5);
        tableWidget->setItem(1, 1, __qtablewidgetitem13);
        QBrush brush6(QColor(255, 183, 0, 255));
        brush6.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setForeground(brush6);
        tableWidget->setItem(1, 2, __qtablewidgetitem14);
        QBrush brush7(QColor(255, 183, 0, 255));
        brush7.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setForeground(brush7);
        tableWidget->setItem(2, 0, __qtablewidgetitem15);
        QBrush brush8(QColor(255, 183, 0, 255));
        brush8.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setForeground(brush8);
        tableWidget->setItem(2, 1, __qtablewidgetitem16);
        QBrush brush9(QColor(255, 183, 0, 255));
        brush9.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setForeground(brush9);
        tableWidget->setItem(2, 2, __qtablewidgetitem17);
        QBrush brush10(QColor(255, 183, 0, 255));
        brush10.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setForeground(brush10);
        tableWidget->setItem(3, 0, __qtablewidgetitem18);
        QBrush brush11(QColor(255, 183, 0, 255));
        brush11.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setForeground(brush11);
        tableWidget->setItem(3, 1, __qtablewidgetitem19);
        QBrush brush12(QColor(255, 183, 0, 255));
        brush12.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setForeground(brush12);
        tableWidget->setItem(3, 2, __qtablewidgetitem20);
        QBrush brush13(QColor(255, 183, 0, 255));
        brush13.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setForeground(brush13);
        tableWidget->setItem(4, 0, __qtablewidgetitem21);
        QBrush brush14(QColor(255, 183, 0, 255));
        brush14.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setForeground(brush14);
        tableWidget->setItem(4, 1, __qtablewidgetitem22);
        QBrush brush15(QColor(255, 183, 0, 255));
        brush15.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setForeground(brush15);
        tableWidget->setItem(4, 2, __qtablewidgetitem23);
        QBrush brush16(QColor(255, 183, 0, 255));
        brush16.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setForeground(brush16);
        tableWidget->setItem(5, 0, __qtablewidgetitem24);
        QBrush brush17(QColor(255, 183, 0, 255));
        brush17.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setForeground(brush17);
        tableWidget->setItem(5, 1, __qtablewidgetitem25);
        QBrush brush18(QColor(255, 183, 0, 255));
        brush18.setStyle(Qt::NoBrush);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setForeground(brush18);
        tableWidget->setItem(5, 2, __qtablewidgetitem26);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 140, 601, 261));
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        tableWidget->setTextElideMode(Qt::ElideLeft);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(true);
        tableWidget->verticalHeader()->setStretchLastSection(false);
        groupBox = new QGroupBox(frame);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 601, 121));

        verticalLayout->addWidget(frame);


        retranslateUi(GiamSat_CanhBao_Form);

        QMetaObject::connectSlotsByName(GiamSat_CanhBao_Form);
    } // setupUi

    void retranslateUi(QWidget *GiamSat_CanhBao_Form)
    {
        GiamSat_CanhBao_Form->setWindowTitle(QCoreApplication::translate("GiamSat_CanhBao_Form", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "M\341\273\251c \304\221\341\273\231", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "N\341\273\231i dung", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(0, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "1092", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(0, 1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "Nghi\303\252m tr\341\273\215ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(0, 2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "TRM12: D\303\262ng ti\303\252u th\341\273\245 qu\303\241 th\341\272\245p", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(1, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "1109", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(1, 1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "C\341\272\243nh b\303\241o", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(1, 2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "TRM5: C\303\264ng su\341\272\245t cao t\341\272\247n ra th\341\272\245p", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(2, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "1112", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(2, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "C\341\272\243nh b\303\241o", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(2, 2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "TRM8: C\303\264ng su\341\272\245t cao t\341\272\247n ra th\341\272\245p", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(3, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "1116", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(3, 1);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "C\341\272\243nh b\303\241o", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(3, 2);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "TRM12: C\303\264ng su\341\272\245t cao t\341\272\247n ra th\341\272\245p", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(4, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "3007", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(4, 1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "C\341\272\243nh b\303\241o", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(4, 2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "IFF: M\341\272\245t k\341\272\277t n\341\273\221i m\341\272\241ng", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(5, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "3008", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(5, 1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "C\341\272\243nh b\303\241o", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(5, 2);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("GiamSat_CanhBao_Form", "OES: M\341\272\245t k\341\272\277t n\341\273\221i m\341\272\241ng", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        groupBox->setTitle(QCoreApplication::translate("GiamSat_CanhBao_Form", "Chi ti\341\272\277t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GiamSat_CanhBao_Form: public Ui_GiamSat_CanhBao_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GIAMSAT_CANHBAO_H
