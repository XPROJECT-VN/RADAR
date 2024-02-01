#include "dieukhien_chiendau_form.h"
#include "ui_dieukhien_chiendau_form.h"

DieuKhien_ChienDau_Form::DieuKhien_ChienDau_Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dieukhien_Chiendau_Form)
{
    ui->setupUi(this);
    ui->pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0)"));
}

DieuKhien_ChienDau_Form::~DieuKhien_ChienDau_Form()
{
    delete ui;
}

void DieuKhien_ChienDau_Form::updateToRadar()
{
    emit refreshRadar_signal(ui->comboBox_2->currentIndex(), ui->comboBox_3->currentIndex());
}

void DieuKhien_ChienDau_Form::on_pushButton_25_clicked()
{
    const QString power[] = {"0kW", "2.5kW", "10kW"};
    QString string = ui->comboBox_3->currentText();
    ui->label_7->setText(string);
    ui->label_4->setText(power[ui->comboBox_3->currentIndex()]);
    emit refreshRadar_signal(ui->comboBox_2->currentIndex(), ui->comboBox_3->currentIndex());
}

void DieuKhien_ChienDau_Form::on_pushButton_11_clicked()
{
    ui->pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0)"));
    ui->pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->label_3->setText(ui->pushButton_11->text());
    emit controlRadar(false);
    emit setRadarRpm(0);
}

void DieuKhien_ChienDau_Form::on_pushButton_12_clicked()
{
    ui->pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0)"));
    ui->pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->label_3->setText(ui->pushButton_12->text());
    emit controlRadar(true);
    emit setRadarRpm(2);
}

void DieuKhien_ChienDau_Form::on_pushButton_13_clicked()
{
    ui->pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0)"));
    ui->pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->label_3->setText(ui->pushButton_13->text());
    emit controlRadar(true);
    emit setRadarRpm(6);
}

void DieuKhien_ChienDau_Form::on_pushButton_14_clicked()
{
    ui->pushButton_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0)"));
    ui->pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->pushButton_11->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0)"));
    ui->label_3->setText(ui->pushButton_14->text());
    emit controlRadar(true);
    emit setRadarRpm(12);
}

void DieuKhien_ChienDau_Form::on_pushButton_21_clicked()
{

}

void DieuKhien_ChienDau_Form::on_checkBox_stateChanged(int arg1)
{
    if(arg1){
        ui->label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0)"));
    }
    else{
        ui->label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
    }
}

void DieuKhien_ChienDau_Form::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1){
        ui->label_16->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0)"));
    }
    else{
        ui->label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
    }
}

void DieuKhien_ChienDau_Form::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1){
        ui->label_17->setStyleSheet(QString::fromUtf8("color: rgb(0, 255, 0)"));
    }
    else{
        ui->label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)"));
    }
}

void DieuKhien_ChienDau_Form::on_pushButton_26_clicked()
{
    emit refreshRadar_signal(ui->comboBox_2->currentIndex(), ui->comboBox_3->currentIndex());
}

void DieuKhien_ChienDau_Form::on_pushButton_17_clicked()
{

}

void DieuKhien_ChienDau_Form::on_pushButton_16_clicked()
{

}

void DieuKhien_ChienDau_Form::on_pushButton_15_clicked()
{

}

void DieuKhien_ChienDau_Form::on_pushButton_18_clicked()
{
    if(ui->pushButton_18->styleSheet().contains("background-color: rgb(0, 0, 0);")) {
        ui->pushButton_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);"
                                                           "border: none;"
                                                           "border-radius: 5px;"));
        this->ui->label_8->setEnabled(false);
        this->ui->pushButton_19->setEnabled(false);
    }
    else {
        ui->pushButton_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"
                                                           "border: none;"
                                                           "border-radius: 5px;"));
        this->ui->label_8->setEnabled(true);
        this->ui->pushButton_19->setEnabled(true);
    }
}

void DieuKhien_ChienDau_Form::on_pushButton_19_clicked()
{
    this->ui->label_8->setText(QString::number(this->ui->spinBox->value()) + "Mhz");
}

void DieuKhien_ChienDau_Form::on_pushButton_20_clicked()
{
}
