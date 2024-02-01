#include "caidat_ketnoi_form.h"
#include "ui_caidat_ketnoi_form.h"

CaiDat_KetNoi_Form::CaiDat_KetNoi_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Caidat_Ketnoi_Form)
{
    ui->setupUi(this);
}

CaiDat_KetNoi_Form::~CaiDat_KetNoi_Form()
{
    delete ui;
}
