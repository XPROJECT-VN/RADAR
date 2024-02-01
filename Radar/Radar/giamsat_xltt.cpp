#include "giamsat_xltt.h"
#include "ui_giamsat_xltt.h"

GiamSat_Xltt::GiamSat_Xltt(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GiamSat_XLTT_Form)
{
    ui->setupUi(this);
}

GiamSat_Xltt::~GiamSat_Xltt()
{
    delete ui;
}
