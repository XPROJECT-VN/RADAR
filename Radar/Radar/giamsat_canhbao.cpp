#include "giamsat_canhbao.h"
#include "ui_giamsat_canhbao.h"

GiamSat_CanhBao::GiamSat_CanhBao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GiamSat_CanhBao_Form)
{
    ui->setupUi(this);
    ui->tableWidget->horizontalHeader()->setStyleSheet("QHeaderView::section { background-color:  rgb(120, 120, 120); }");
}

GiamSat_CanhBao::~GiamSat_CanhBao()
{
    delete ui;
}
