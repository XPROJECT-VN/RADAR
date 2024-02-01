#include "giamsat_pwr.h"
#include "ui_giamsat_pwr.h"

GiamSat_Pwr::GiamSat_Pwr(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GiamSat_PWR_Form)
{
    ui->setupUi(this);
}

GiamSat_Pwr::~GiamSat_Pwr()
{
    delete ui;
}
