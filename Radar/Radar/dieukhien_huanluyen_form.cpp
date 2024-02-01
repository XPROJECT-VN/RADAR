#include "dieukhien_huanluyen_form.h"
#include "ui_dieukhien_huanluyen_form.h"

DieuKhien_HuanLuyen_Form::DieuKhien_HuanLuyen_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dieukhien_Huanluyen_Form)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color:  rgb(120, 120, 120); }");
}

DieuKhien_HuanLuyen_Form::~DieuKhien_HuanLuyen_Form()
{
    delete ui;
}
