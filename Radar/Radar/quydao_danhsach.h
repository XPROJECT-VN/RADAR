#ifndef QUYDAO_DANHSACH_H
#define QUYDAO_DANHSACH_H

#include <QWidget>

namespace Ui {
    class QuyDao_DanhSach_Form;
}

class QuyDao_DanhSach : public QWidget
{
    Q_OBJECT

public:
    explicit QuyDao_DanhSach(QWidget *parent = nullptr);
    ~QuyDao_DanhSach();

private:
    Ui::QuyDao_DanhSach_Form *ui;
};

#endif // QUYDAO_DANHSACH_H
