#ifndef LIENHOP_GSMAYHOI_FORM_H
#define LIENHOP_GSMAYHOI_FORM_H

#include <QWidget>

namespace Ui {
class Lienhop_GSmayhoi_Form;
}

class LienHop_GSMayHoi_Form : public QWidget
{
    Q_OBJECT

public:
    explicit LienHop_GSMayHoi_Form(QWidget *parent = nullptr);
    ~LienHop_GSMayHoi_Form();

private:
    Ui::Lienhop_GSmayhoi_Form *ui;
};

#endif // LIENHOP_GSMAYHOI_FORM_H
