#ifndef GIAMSAT_XLTT_H
#define GIAMSAT_XLTT_H

#include <QWidget>

namespace Ui {
    class GiamSat_XLTT_Form;
}

class GiamSat_Xltt : public QWidget
{
    Q_OBJECT

public:
    explicit GiamSat_Xltt(QWidget *parent = nullptr);
    ~GiamSat_Xltt();

private:
    Ui::GiamSat_XLTT_Form *ui;
};

#endif // GIAMSAT_XLTT_H
