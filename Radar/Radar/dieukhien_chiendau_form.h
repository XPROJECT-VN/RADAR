#ifndef DIEUKHIEN_CHIENDAU_FORM
#define DIEUKHIEN_CHIENDAU_FORM

#include <QWidget>

namespace Ui {
    class Dieukhien_Chiendau_Form;
}

class DieuKhien_ChienDau_Form : public QWidget
{
    Q_OBJECT

public:
    explicit DieuKhien_ChienDau_Form(QWidget *parent = nullptr);
    ~DieuKhien_ChienDau_Form();
    void updateToRadar();
private slots:
    void on_pushButton_25_clicked();
    void on_pushButton_11_clicked();
    void on_pushButton_12_clicked();
    void on_pushButton_13_clicked();
    void on_pushButton_14_clicked();
    void on_pushButton_26_clicked();
    void on_pushButton_21_clicked();
    void on_checkBox_stateChanged(int arg1);
    void on_checkBox_2_stateChanged(int arg1);
    void on_checkBox_3_stateChanged(int arg1);
    void on_pushButton_17_clicked();
    void on_pushButton_16_clicked();
    void on_pushButton_15_clicked();
    void on_pushButton_18_clicked();
    void on_pushButton_19_clicked();
    void on_pushButton_20_clicked();
private:
    Ui::Dieukhien_Chiendau_Form *ui;

signals:
    void refreshRadar_signal(int cheDo, int radius);
    void controlRadar(bool running);
    void setRadarRpm(int rpm);
    void controlRadarGeo(bool visible);
};

#endif // DIEUKHIEN_CHIENDAU_FORM
