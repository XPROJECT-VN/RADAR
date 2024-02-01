#include "lienhop_dkqdt_form.h"
#include "ui_lienhop_dkqdt_form.h"

LienHop_DKqdt_Form::LienHop_DKqdt_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lienhop_DKqdt_Form)
{
    ui->setupUi(this);
}

LienHop_DKqdt_Form::~LienHop_DKqdt_Form()
{
    delete ui;
}
