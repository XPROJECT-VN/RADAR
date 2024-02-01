#include "giamsat_trm.h"
#include "ui_giamsat_trm.h"

GiamSat_Trm::GiamSat_Trm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GiamSat_TRM_Form)
{
    ui->setupUi(this);
}

GiamSat_Trm::~GiamSat_Trm()
{
    delete ui;
}
