#include "giamsat_trx.h"
#include "ui_giamsat_trx.h"

GiamSat_Trx::GiamSat_Trx(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GiamSat_TRX_Form)
{
    ui->setupUi(this);
}

GiamSat_Trx::~GiamSat_Trx()
{
    delete ui;
}
