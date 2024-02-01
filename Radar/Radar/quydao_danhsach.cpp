#include "quydao_danhsach.h"
#include "ui_quydao_danhsach.h"

QuyDao_DanhSach::QuyDao_DanhSach(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuyDao_DanhSach_Form)
{
    ui->setupUi(this);
}

QuyDao_DanhSach::~QuyDao_DanhSach()
{
    delete ui;
}
