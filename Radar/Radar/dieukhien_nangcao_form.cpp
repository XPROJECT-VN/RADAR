#include "dieukhien_nangcao_form.h"
#include "ui_dieukhien_nangcao_form.h"

DieuKhien_NangCao_Form::DieuKhien_NangCao_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dieukhien_Nangcao_Form)
{
    ui->setupUi(this);
}

DieuKhien_NangCao_Form::~DieuKhien_NangCao_Form()
{
    delete ui;
}
