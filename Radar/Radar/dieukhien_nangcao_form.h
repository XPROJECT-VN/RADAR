#ifndef DIEUKHIEN_NANGCAO_FORM
#define DIEUKHIEN_NANGCAO_FORM

#include <QWidget>

namespace Ui {
    class Dieukhien_Nangcao_Form;
}

class DieuKhien_NangCao_Form : public QWidget
{
    Q_OBJECT

public:
    explicit DieuKhien_NangCao_Form(QWidget *parent = nullptr);
    ~DieuKhien_NangCao_Form();

private:
    Ui::Dieukhien_Nangcao_Form *ui;
};

#endif // DIEUKHIEN_CHIENDAU_FORM
