#include "caidat_nangcao_form.h"
#include "ui_caidat_nangcao_form.h"

CaiDat_NangCao_Form::CaiDat_NangCao_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Caidat_Nangcao_Form)
{
    ui->setupUi(this);
}

CaiDat_NangCao_Form::~CaiDat_NangCao_Form()
{
    delete ui;
}
