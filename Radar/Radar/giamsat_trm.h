#ifndef GIAMSAT_TRM_H
#define GIAMSAT_TRM_H

#include <QWidget>

namespace Ui {
    class GiamSat_TRM_Form;
}

class GiamSat_Trm : public QWidget
{
    Q_OBJECT

public:
    explicit GiamSat_Trm(QWidget *parent = nullptr);
    ~GiamSat_Trm();

private:
    Ui::GiamSat_TRM_Form *ui;
};

#endif // GIAMSAT_TRM_H
