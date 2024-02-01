#include "lienhop_videoqdt_form.h"
#include "ui_lienhop_videoqdt_form.h"

LienHop_VideoQdt_Form::LienHop_VideoQdt_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Lienhop_Videoqdt_Form)
{
    ui->setupUi(this);
}

LienHop_VideoQdt_Form::~LienHop_VideoQdt_Form()
{
    delete ui;
}
