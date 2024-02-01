#include "caidat_hienthi_form.h"
#include "ui_caidat_hienthi_form.h"

CaiDat_HienThi_Form::CaiDat_HienThi_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Caidat_Hienthi_Form)
{
    ui->setupUi(this);
}

CaiDat_HienThi_Form::~CaiDat_HienThi_Form()
{
    delete ui;
}
