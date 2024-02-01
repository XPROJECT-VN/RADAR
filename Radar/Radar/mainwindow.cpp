#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <qmath.h>

#include "newtarget_form.h"

#define AIRPORT_IMG_SCALE   0.04

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->rightFrame = new RightFrame();

    this->connect(this->rightFrame->dieukhien_chiendau_form, &DieuKhien_ChienDau_Form::refreshRadar_signal, this, [this](int cheDo, int cheDoPhat){
        const double scanRadius[] = {100, 160, 100, 100, 50};
        const QString topoShow[] = {":/topoez100.png", ":/topoez.png", ":/topoez100.png", ":/topoez100.png", ":/topoez50.png"};
        this->radarView->radar->setScanRadius(scanRadius[cheDo]);
        if(cheDoPhat == 0) {
            this->radarView->radar->setVisibleGeo(false);
            this->radarView->setPower(false);
        }
        else {
            this->radarView->radar->setVisibleGeo(true);
            this->radarView->setPower(true);
            *this->radarView->radar->topoImage = QImage(topoShow[cheDo]);
        }
        this->radarView->radar->update();
    });
    this->connect(this->rightFrame->dieukhien_chiendau_form, &DieuKhien_ChienDau_Form::controlRadar, this, [this](bool running){
        this->radarView->setRadarRunning(running);
    });
    this->connect(this->rightFrame->dieukhien_chiendau_form, &DieuKhien_ChienDau_Form::setRadarRpm, this, [this](int rpm){
        QByteArray conv;
        conv.setNum(rpm);
        this->radarView->setRpm(rpm);
        this->serialPort->write(conv + '\n');
    });
    this->connect(this->rightFrame, &RightFrame::closeApp, this, [this](){
        this->close();
    });

    /* Tạo vùng hiển thị Radar */
    radarView = new RadarView(this);
    radarView->setObjectName(QString::fromUtf8("radarView"));
    this->setCentralWidget(radarView);

    this->radarView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->radarView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    this->radarView->verticalScrollBar();
    this->radarView->scale(1, 1);
    this->radarView->radar->setScanRadius(100);
    this->radarView->setSceneRect(0, 0, 1920, 1080);
    this->radarView->centerOn(1920 / 2, 1080 / 2);

    this->targetInfo.move(0, 1080 - 300);
    this->radarView->scene->addWidget(&this->targetInfo);
    /* Tạo đường tròn cự ly */
    for(int disCir = 10; disCir <= 160; disCir += 10) {
        RadarCircleDistance *circleDis = new RadarCircleDistance();
        circleDis->distance = disCir;
        if((int)(circleDis->distance) % 50) {
            circleDis->color = QColor::fromRgb(255, 255, 255, 20);
            circleDis->width = 1;
        }
        else {
            circleDis->color = QColor::fromRgb(255, 255, 255, 150);
            circleDis->width = 1;
        }
        this->radarView->radar->addCircleDistance(circleDis);
    }
    /* Tạo sân bay */
    kienan_AirPort = new AirPort();
    kienan_AirPort->setX(3200 - (500 * AIRPORT_IMG_SCALE / 2));
    kienan_AirPort->setY(1840 - (500 * AIRPORT_IMG_SCALE / 2));
    kienan_AirPort->setRotate(45);
    kienan_AirPort->text = "Kiến An";
    catbi_AirPort = new AirPort();
    catbi_AirPort->setX(3285 - (500 * AIRPORT_IMG_SCALE / 2));
    catbi_AirPort->setY(1833 - (500 * AIRPORT_IMG_SCALE / 2));
    catbi_AirPort->setRotate(60);
    catbi_AirPort->text = "Cát Bi";
    kep_AirPort = new AirPort();
    kep_AirPort->setX(2993 - (500 * AIRPORT_IMG_SCALE / 2));
    kep_AirPort->setY(1427 - (500 * AIRPORT_IMG_SCALE / 2));
    kep_AirPort->setRotate(60);
    kep_AirPort->text = "Kép";
    noibai_AirPort = new AirPort();
    noibai_AirPort->setX(2670 - (500 * AIRPORT_IMG_SCALE / 2));
    noibai_AirPort->setY(1570 - (500 * AIRPORT_IMG_SCALE / 2));
    noibai_AirPort->setRotate(100);
    noibai_AirPort->text = "Nội Bài";
    gialam_AirPort = new AirPort();
    gialam_AirPort->setX(2711 - (500 * AIRPORT_IMG_SCALE / 2));
    gialam_AirPort->setY(1668 - (500 * AIRPORT_IMG_SCALE / 2));
    gialam_AirPort->setRotate(10);
    gialam_AirPort->text = "Gia Lâm";
    bachmai_AirPort = new AirPort();
    bachmai_AirPort->setX(2619 - (500 * AIRPORT_IMG_SCALE / 2));
    bachmai_AirPort->setY(1729 - (500 * AIRPORT_IMG_SCALE / 2));
    bachmai_AirPort->text = "Bạch Mai";
    hoalac_AirPort = new AirPort();
    hoalac_AirPort->setX(2447 - (500 * AIRPORT_IMG_SCALE / 2));
    hoalac_AirPort->setY(1704 - (500 * AIRPORT_IMG_SCALE / 2));
    hoalac_AirPort->setRotate(310);
    hoalac_AirPort->text = "Hòa Lạc";

    this->radarView->addAirPort(kienan_AirPort);
    this->radarView->addAirPort(catbi_AirPort);
    this->radarView->addAirPort(kep_AirPort);
    this->radarView->addAirPort(noibai_AirPort);
    this->radarView->addAirPort(gialam_AirPort);
    this->radarView->addAirPort(bachmai_AirPort);
    this->radarView->addAirPort(hoalac_AirPort);

    /* Tạo đối tượng bay */
    this->target[0].setPos1(2345, 1355);
    this->target[0].setSpeed(800); // km/h
    this->target[0].topNumber = 1003;
    this->target[0].height = 7850;
    this->target[0].azimuth = 15;
    this->target[0].movingForm = [](Target *target) {
        target->setPos1(target->getPos1().x() + 1, target->getPos1().y());
    };
    this->radarView->addTarget(&target[0], QColor::fromRgb(255, 0, 0));

    this->target[1].setPos1(2359, 2259);
    this->target[1].setSpeed(800); // km/h
    this->target[1].topNumber = 1002;
    this->target[1].height = 3200;
    this->target[1].azimuth = 15;
    this->target[1].movingForm = [](Target *target) {
        target->setPos1(target->getPos1().x(), target->getPos1().y() - 1);
    };
    this->radarView->addTarget(&target[1], QColor::fromRgb(255, 0, 0));

    this->target[2].setPos1(3059, 1343);
    this->target[2].setSpeed(625); // km/h
    this->target[2].topNumber = 1001;
    this->target[2].height = 4885;
    this->target[2].azimuth = 15;
    this->target[2].movingForm = [](Target *target) {
        target->setPos1(target->getPos1().x() - 1, target->getPos1().y() + 1);
    };
    this->radarView->addTarget(&target[2], QColor::fromRgb(0, 0, 255));

    this->target[3].setPos1(2515, 1775);
    this->target[3].setSpeed(135); // km/h
    this->target[3].topNumber = 1004;
    this->target[3].height = 4885;
    this->target[3].azimuth = 15;
    this->target[3].movingForm = [](Target *target) {
        target->setPos1(target->getPos1().x() + 1, target->getPos1().y() + 2);
    };
    this->radarView->addTarget(&target[3], QColor::fromRgb(0, 0, 255));

    this->target[4].setPos1(2854, 1680);
    this->target[4].setSpeed(120); // km/h
    this->target[4].topNumber = 1005;
    this->target[4].height = 4885;
    this->target[4].azimuth = 15;
    this->target[4].movingForm = [](Target *target) {
        target->setPos1(target->getPos1().x() - 2, target->getPos1().y() + 1);
    };
    this->radarView->addTarget(&target[4], QColor::fromRgb(0, 0, 255));

    this->target[5].setPos1(2738, 2106);
    this->target[5].setSpeed(142); // km/h
    this->target[5].topNumber = 1006;
    this->target[5].height = 4885;
    this->target[5].azimuth = 15;
    this->target[5].movingForm = [](Target *target) {
        target->setPos1(target->getPos1().x() - 1, target->getPos1().y() - 1);
    };
    this->radarView->addTarget(&target[5], QColor::fromRgb(255, 255, 0));

    this->rightFrame->setGeometry(1920 - 640, 0, 640, 1080);
    this->radarView->scene->addWidget(this->rightFrame);

    /* Kết nối COM */
    serialPort = new QSerialPort();
    serialPort->setPortName("COM3");
    serialPort->open(QIODevice::ReadWrite);
    serialPort->setBaudRate(QSerialPort::Baud9600);
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setParity(QSerialPort::NoParity);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setFlowControl(QSerialPort::NoFlowControl);

    if (serialPort->isOpen()) {
        QObject::connect(serialPort, &QSerialPort::readyRead, this, [this]() {
            QByteArray data = serialPort->readAll();
            this->radarView->setDegree(data.toFloat());
//            qDebug() << "Data received: " << data.toFloat();
        });
    }

    /* Create new target form */
   QHBoxLayout *hboxLayout = new QHBoxLayout;
   newTargetFormFull.setLayout(hboxLayout);
   for(uint8_t indexForm = 0; indexForm < 8; indexForm++){
       newTargetForm = new NewTargetForm;
       hboxLayout->addWidget(newTargetForm);
       this->connect(newTargetForm, &NewTargetForm::createTarget, this, [this](QPoint pos, int dir, int height, int velocity, int topNum){
           Target *newTarget = new Target;
           newTarget->setPos1(pos.rx(), pos.ry());
           newTarget->setSpeed(velocity);
           newTarget->topNumber = topNum;
           newTarget->height = height;
           newTarget->azimuth = 15;
           newTarget->dir = true;
           newTarget->movingForm = [](Target *target) {
               target->setPos1(target->getPos1().x() - 1, target->getPos1().y() - 1);
           };
           this->newTargetForm->targetInstance = newTarget;
           this->radarView->addTarget(newTarget, QColor::fromRgb(255, 0, 0));
       });
       this->connect(newTargetForm, &NewTargetForm::removeTarget, this, [this](Target *target){
           this->radarView->removeTarget(target);
       });
   }
   newTargetFormFull.show();
   this->radarView->radarGroupItem.setScale(1920.0 / 4608.0);
   this->radarView->setRadarRunning(true);
}

MainWindow::~MainWindow()
{
    newTargetFormFull.close();
    delete ui;
}
