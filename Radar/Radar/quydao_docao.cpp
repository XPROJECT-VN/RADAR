#include "quydao_docao.h"
#include "ui_quydao_docao.h"

QuyDao_DoCao::QuyDao_DoCao(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuyDao_DoCao_Form)
{
    ui->setupUi(this);
}

QuyDao_DoCao::~QuyDao_DoCao()
{
    delete ui;
}
