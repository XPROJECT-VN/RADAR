#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QTimer>

#include "radarview.h"
#include "radar.h"

#include <QSerialPort>
#include <QSerialPortInfo>

#include "rightframe.h"
#include "targetinfo.h"

#include "newtarget_form.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void refreshRadar();

private:
    Ui::MainWindow *ui;
    RadarView *radarView;
    QVBoxLayout *verticalLayoutRadarView;

    RightFrame *rightFrame;
    TargetInfo targetInfo;

    AirPort *kienan_AirPort;
    AirPort *catbi_AirPort;
    AirPort *kep_AirPort;
    AirPort *noibai_AirPort;
    AirPort *gialam_AirPort;
    AirPort *bachmai_AirPort;
    AirPort *hoalac_AirPort;

    Target target[6];
    QThread *recv_Thread;
    QSerialPort *serialPort;

    QWidget newTargetFormFull;
    NewTargetForm *newTargetForm;
};
#endif // MAINWINDOW_H
