#ifndef DIEUKHIEN_HUANLUYEN_FORM
#define DIEUKHIEN_HUANLUYEN_FORM

#include <QWidget>

namespace Ui {
    class Dieukhien_Huanluyen_Form;
}

class DieuKhien_HuanLuyen_Form : public QWidget
{
    Q_OBJECT

public:
    explicit DieuKhien_HuanLuyen_Form(QWidget *parent = nullptr);
    ~DieuKhien_HuanLuyen_Form();

private:
    Ui::Dieukhien_Huanluyen_Form *ui;
};

#endif // DIEUKHIEN_CHIENDAU_FORM
