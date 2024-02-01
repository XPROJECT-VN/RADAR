#ifndef LIENHOP_DKQDT_FORM_H
#define LIENHOP_DKQDT_FORM_H

#include <QWidget>

namespace Ui {
class Lienhop_DKqdt_Form;
}

class LienHop_DKqdt_Form : public QWidget
{
    Q_OBJECT

public:
    explicit LienHop_DKqdt_Form(QWidget *parent = nullptr);
    ~LienHop_DKqdt_Form();

private:
    Ui::Lienhop_DKqdt_Form *ui;
};

#endif // LIENHOP_DKQDT_FORM_H
