#include "lienhop_dkmayhoi_form.h"
#include "ui_lienhop_dkmayhoi_form.h"

LienHop_DKMayHoi_Form::LienHop_DKMayHoi_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lienhop_DKmayhoi_Form)
{
    ui->setupUi(this);
}

LienHop_DKMayHoi_Form::~LienHop_DKMayHoi_Form()
{
    delete ui;
}
