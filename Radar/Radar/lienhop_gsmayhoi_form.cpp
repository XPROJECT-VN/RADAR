#include "lienhop_gsmayhoi_form.h"
#include "ui_lienhop_gsmayhoi_form.h"

LienHop_GSMayHoi_Form::LienHop_GSMayHoi_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lienhop_GSmayhoi_Form)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color:  rgb(120, 120, 120); }");
    ui->tableWidget_2->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color:  rgb(120, 120, 120); }");
}

LienHop_GSMayHoi_Form::~LienHop_GSMayHoi_Form()
{
    delete ui;
}
