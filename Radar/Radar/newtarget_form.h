#ifndef CONFIGFORM_H
#define CONFIGFORM_H

#include <QWidget>
#include "radarview.h"

namespace Ui {
    class NewTargetForm;
}

class NewTargetForm : public QWidget
{
    Q_OBJECT

public:
    explicit NewTargetForm(QWidget *parent = nullptr);
    ~NewTargetForm();

    Target *targetInstance;
private slots:
    void on_pushButton_2_clicked();
signals:
    void createTarget(QPoint pos, int dir, int height, int velocity, int topNumber);
    void removeTarget(Target *targetInstance);
private:
    Ui::NewTargetForm *ui;
};

#endif // CONFIGFORM_H
