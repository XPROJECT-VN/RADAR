#ifndef CAIDAT_KETNOI_FORM_H
#define CAIDAT_KETNOI_FORM_H

#include <QWidget>

namespace Ui {
class Caidat_Ketnoi_Form;
}

class CaiDat_KetNoi_Form : public QWidget
{
    Q_OBJECT

public:
    explicit CaiDat_KetNoi_Form(QWidget *parent = nullptr);
    ~CaiDat_KetNoi_Form();

private:
    Ui::Caidat_Ketnoi_Form *ui;
};

#endif // CAIDAT_KETNOI_FORM_H
