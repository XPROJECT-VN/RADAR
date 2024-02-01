#ifndef GIAMSAT_CANHBAO_H
#define GIAMSAT_CANHBAO_H

#include <QWidget>

namespace Ui {
    class GiamSat_CanhBao_Form;
}

class GiamSat_CanhBao : public QWidget
{
    Q_OBJECT

public:
    explicit GiamSat_CanhBao(QWidget *parent = nullptr);
    ~GiamSat_CanhBao();

private:
    Ui::GiamSat_CanhBao_Form *ui;
};

#endif // GIAMSAT_CANHBAO_H
