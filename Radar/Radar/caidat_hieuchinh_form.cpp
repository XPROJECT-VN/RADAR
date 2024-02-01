#include "caidat_hieuchinh_form.h"
#include "ui_caidat_hieuchinh_form.h"

CaiDat_HieuChinh_Form::CaiDat_HieuChinh_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Caidat_Hieuchinh_Form)
{
    ui->setupUi(this);
}

CaiDat_HieuChinh_Form::~CaiDat_HieuChinh_Form()
{
    delete ui;
}
