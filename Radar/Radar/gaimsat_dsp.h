#ifndef GAIMSAT_DSP_H
#define GAIMSAT_DSP_H

#include <QWidget>

namespace Ui {
    class GiamSat_DSP_Form;
}

class GiamSat_Dsp : public QWidget
{
    Q_OBJECT

public:
    explicit GiamSat_Dsp(QWidget *parent = nullptr);
    ~GiamSat_Dsp();

private:
    Ui::GiamSat_DSP_Form *ui;
};

#endif // GAIMSAT_DSP_H
