#ifndef CAIDAT_NANGCAO_FORM_H
#define CAIDAT_NANGCAO_FORM_H

#include <QWidget>

namespace Ui {
class Caidat_Nangcao_Form;
}

class CaiDat_NangCao_Form : public QWidget
{
    Q_OBJECT

public:
    explicit CaiDat_NangCao_Form(QWidget *parent = nullptr);
    ~CaiDat_NangCao_Form();

private:
    Ui::Caidat_Nangcao_Form *ui;
};

#endif // CAIDAT_NANGCAO_FORM_H
