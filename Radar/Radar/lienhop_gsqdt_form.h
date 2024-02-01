#ifndef LIENHOP_GSQDT_FORM_H
#define LIENHOP_GSQDT_FORM_H

#include <QWidget>

namespace Ui {
class Lienhop_GSqdt_Form;
}

class LienHop_GSqdt_Form : public QWidget
{
    Q_OBJECT

public:
    explicit LienHop_GSqdt_Form(QWidget *parent = nullptr);
    ~LienHop_GSqdt_Form();

private:
    Ui::Lienhop_GSqdt_Form *ui;
};

#endif // LIENHOP_GSQDT_FORM_H
