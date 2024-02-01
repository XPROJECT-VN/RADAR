#ifndef TARGETINFO_H
#define TARGETINFO_H

#include <QFrame>

namespace Ui {
    class TargetInfo;
}

class TargetInfo : public QFrame
{
    Q_OBJECT

public:
    explicit TargetInfo(QWidget *parent = nullptr);
    ~TargetInfo();

private:
    Ui::TargetInfo *ui;
};

#endif // TARGETINFO_H
