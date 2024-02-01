#ifndef QUYDAO_DOCAO_H
#define QUYDAO_DOCAO_H

#include <QWidget>

namespace Ui {
    class QuyDao_DoCao_Form;
}

class QuyDao_DoCao : public QWidget
{
    Q_OBJECT

public:
    explicit QuyDao_DoCao(QWidget *parent = nullptr);
    ~QuyDao_DoCao();

private:
    Ui::QuyDao_DoCao_Form *ui;
};

#endif // QUYDAO_DOCAO_H
