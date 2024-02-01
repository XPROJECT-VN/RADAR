#ifndef CAIDAT_HIEUCHINH_FORM_H
#define CAIDAT_HIEUCHINH_FORM_H

#include <QWidget>

namespace Ui {
class Caidat_Hieuchinh_Form;
}

class CaiDat_HieuChinh_Form : public QWidget
{
    Q_OBJECT

public:
    explicit CaiDat_HieuChinh_Form(QWidget *parent = nullptr);
    ~CaiDat_HieuChinh_Form();

private:
    Ui::Caidat_Hieuchinh_Form *ui;
};

#endif // CAIDAT_HIEUCHINH_FORM_H
