#ifndef RADAR_H
#define RADAR_H

#include <QGraphicsItem>
#include <QGraphicsWidget>
#include <QPainter>
#include <QTimer>
#include <QCursor>
#include <QDebug>

#define PIXEL_PER_KM    6.6

class AirPort : public QGraphicsItem {
public:
    double angleRotation;
    QString text;

    AirPort() {

    }
    ~AirPort() {

    }
    void setRotate(double angle) {
        angleRotation = angle;
    }
private:
    QRectF boundingRect() const override {
        return QRectF(0, 0, 0, 0);
    }
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget * = nullptr) override {
        QImage iconAirPort = QImage(":/block.png");
        QMatrix rm;
        rm.rotate(this->angleRotation);
        rm.scale(0.03, 0.03);
        iconAirPort = iconAirPort.transformed(rm);
        painter->drawImage(0, 0, iconAirPort);
        painter->setPen(QColor::fromRgb(255, 255, 255));
        painter->setFont(QFont("Arial", 14));
        painter->drawText(- text.size() * text.count() / 2, iconAirPort.height() * 2, text);
    }
};

class RadarCircleDistance
{
public:
    RadarCircleDistance() {
    }
    double distance = 0;
    QColor color;
    int width = 1;
    bool enable = true;
};

class Radar : public QGraphicsItem
{
public:
    QList<RadarCircleDistance *> circleDistance;
    QImage *topoImage;

    Radar();
    void setDegree(double degree);
    double getDegree();
    void setVisibleRadius(double radiusInKm);
    void setScanRadius(double radiusInKm);
    void setVisibleGeo(bool visible);
    void setOffsetCenter(double disX, double disY);
    QPointF offsetCenter();
    QLineF getScanLine();
    void addCircleDistance(RadarCircleDistance *circleDistance);

    void addAirPort(AirPort *airPort);
private:
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

    QPointF rotatePoint(QPointF center, QPointF refPoint, double angle);

    QImage *image;

    double degreeScan;
    QTransform matrix;
    double offsetX, offsetY;
    double xScanLine, yScanLine;
    double scanRadius;
    double visibleRadius;
    bool visibleGeo;
    QTimer *timerScan;
    void mousePressEvent(QGraphicsSceneMouseEvent *);
};

#endif // RADAR_H
