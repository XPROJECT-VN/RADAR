#include "lienhop_gsqdt_form.h"
#include "ui_lienhop_gsqdt_form.h"

LienHop_GSqdt_Form::LienHop_GSqdt_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lienhop_GSqdt_Form)
{
    ui->setupUi(this);
}

LienHop_GSqdt_Form::~LienHop_GSqdt_Form()
{
    delete ui;
}
