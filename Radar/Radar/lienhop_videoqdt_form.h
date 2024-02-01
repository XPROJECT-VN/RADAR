#ifndef LIENHOP_VIDEOQDT_FORM_H
#define LIENHOP_VIDEOQDT_FORM_H

#include <QWidget>

namespace Ui {
class Lienhop_Videoqdt_Form;
}

class LienHop_VideoQdt_Form : public QWidget
{
    Q_OBJECT

public:
    explicit LienHop_VideoQdt_Form(QWidget *parent = nullptr);
    ~LienHop_VideoQdt_Form();

private:
    Ui::Lienhop_Videoqdt_Form *ui;
};

#endif // LIENHOP_VIDEOQDT_FORM_H
