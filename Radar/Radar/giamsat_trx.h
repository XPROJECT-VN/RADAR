#ifndef GIAMSAT_TRX_H
#define GIAMSAT_TRX_H

#include <QWidget>

namespace Ui {
    class GiamSat_TRX_Form;
}

class GiamSat_Trx : public QWidget
{
    Q_OBJECT

public:
    explicit GiamSat_Trx(QWidget *parent = nullptr);
    ~GiamSat_Trx();

private:
    Ui::GiamSat_TRX_Form *ui;
};

#endif // GIAMSAT_TRX_H
