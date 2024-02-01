#ifndef LIENHOP_DKMAYHOI_FORM_H
#define LIENHOP_DKMAYHOI_FORM_H

#include <QWidget>

namespace Ui {
class Lienhop_DKmayhoi_Form;
}

class LienHop_DKMayHoi_Form : public QWidget
{
    Q_OBJECT

public:
    explicit LienHop_DKMayHoi_Form(QWidget *parent = nullptr);
    ~LienHop_DKMayHoi_Form();

private:
    Ui::Lienhop_DKmayhoi_Form *ui;
};

#endif // LIENHOP_DKMAYHOI_FORM_H
