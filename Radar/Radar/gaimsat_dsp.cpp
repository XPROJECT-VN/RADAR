#include "gaimsat_dsp.h"
#include "ui_gaimsat_dsp.h"

GiamSat_Dsp::GiamSat_Dsp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GiamSat_DSP_Form)
{
    ui->setupUi(this);
}

GiamSat_Dsp::~GiamSat_Dsp()
{
    delete ui;
}
