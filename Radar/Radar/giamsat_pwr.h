#ifndef GIAMSAT_PWR_H
#define GIAMSAT_PWR_H

#include <QWidget>

namespace Ui {
    class GiamSat_PWR_Form;
}

class GiamSat_Pwr : public QWidget
{
    Q_OBJECT

public:
    explicit GiamSat_Pwr(QWidget *parent = nullptr);
    ~GiamSat_Pwr();

private:
    Ui::GiamSat_PWR_Form *ui;
};

#endif // GIAMSAT_PWR_H
