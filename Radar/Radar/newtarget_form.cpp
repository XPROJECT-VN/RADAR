#include "newtarget_form.h"
#include "ui_newtarget_form.h"

NewTargetForm::NewTargetForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NewTargetForm)
{
    ui->setupUi(this);
}

NewTargetForm::~NewTargetForm()
{
    if(this->targetInstance != 0) {
        emit removeTarget(this->targetInstance);
    }
    delete ui;
}

void NewTargetForm::on_pushButton_2_clicked()
{
    if(this->ui->pushButton_2->text() == "Thêm") {
        emit createTarget(QPoint(this->ui->posX_val->value(), this->ui->posY_val->value()), this->ui->direection_list->currentIndex(), this->ui->heigth->value(), this->ui->velocity->value(), this->ui->top_number->value());
        this->ui->pushButton_2->setText("Xóa");
    }
    else {
        emit removeTarget(this->targetInstance);
        this->targetInstance = 0;
        this->ui->pushButton_2->setText("Thêm");
    }
}
