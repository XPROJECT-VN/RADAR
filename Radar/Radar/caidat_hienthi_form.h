#ifndef CAIDAT_HIENTHI_FORM_H
#define CAIDAT_HIENTHI_FORM_H

#include <QWidget>

namespace Ui {
class Caidat_Hienthi_Form;
}

class CaiDat_HienThi_Form : public QWidget
{
    Q_OBJECT

public:
    explicit CaiDat_HienThi_Form(QWidget *parent = nullptr);
    ~CaiDat_HienThi_Form();

private:
    Ui::Caidat_Hienthi_Form *ui;
};

#endif // CAIDAT_HIENTHI_FORM_H
