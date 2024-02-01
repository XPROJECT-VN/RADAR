#include "targetinfo.h"
#include "ui_targetinfo.h"

TargetInfo::TargetInfo(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::TargetInfo)
{
    ui->setupUi(this);
}

TargetInfo::~TargetInfo()
{
    delete ui;
}
