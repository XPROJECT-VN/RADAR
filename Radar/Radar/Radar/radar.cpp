#include "radar.h"
#include <cmath>
#include <QConicalGradient>
#include <iostream>

#define M_PI 3.141592

Radar::Radar()
{
    image = new QImage(":/map.png");
    topoImage = new QImage(":/topoez.png");
    this->degreeScan = 0;
    this->visibleGeo = false;
}

void Radar::setDegree(double degree)
{
    while(degree >= 360.0f) {
        degree -= 360.0f;
    }
    this->degreeScan = degree;
    this->update();
}

double Radar::getDegree()
{
    return this->degreeScan;
}

void Radar::setVisibleRadius(double radiusInKm) {
    this->visibleRadius = radiusInKm;
}

void Radar::setScanRadius(double radiusInKm)
{
    this->scanRadius = radiusInKm;
    this->visibleRadius = radiusInKm;
}

void Radar::setVisibleGeo(bool visible)
{
    this->visibleGeo = visible;
}

void Radar::setOffsetCenter(double disX, double disY)
{
    this->offsetX = disX;
    this->offsetY = disY;
}

QPointF Radar::offsetCenter()
{
    return QPointF(this->offsetX, this->offsetY);
}

QLineF Radar::getScanLine()
{
    return QLineF(this->offsetX, this->offsetY, this->xScanLine, this->yScanLine);
}

void Radar::addCircleDistance(RadarCircleDistance *circleDistance) {
    this->circleDistance.append(circleDistance);
}

QRectF Radar::boundingRect() const {
    // outer most edges
    return QRectF(0,0,image->width(),image->height());
}

QPointF Radar::rotatePoint(QPointF center, QPointF refPoint, double angle) {
    QPointF scanPoint;
    double s = sin(angle *  M_PI/ 180.0f);
    double c = cos(angle * M_PI / 180.0f);
    /* Tính điểm Scan Line tạo bởi tâm */
    scanPoint.setX(center.rx() + (refPoint.rx() - center.rx()) * c - (refPoint.ry() - center.ry()) * s);
    scanPoint.setY(center.ry() + (refPoint.rx() - center.rx()) * s + (refPoint.ry() - center.ry()) * c);
    return scanPoint;
}

void Radar::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) {
    painter->drawImage(boundingRect(), *image);
    /**
     * @brief Lấy tọa độ các điểm
     * @param radius bán kính đường tròn lớn nhất
     * @param centerPoint tọa độ điểm giữa
     * @param refPoint điểm tham chiếu góc Alpha
     * @param scanPoint điểm trên đường tròn tạo bởi góc Alpha
     */
    QPointF centerPoint(this->offsetX, this->offsetY);
    QPointF refPoint;
    int radiusInPix = this->visibleRadius * PIXEL_PER_KM;
    refPoint.setX(centerPoint.rx());
    refPoint.setY(centerPoint.ry() - radiusInPix);
    QPointF scanPoint = rotatePoint(centerPoint, refPoint, this->degreeScan);
    this->xScanLine = scanPoint.rx();
    this->yScanLine = scanPoint.ry();
    /* Vẽ vùng quét */
    painter->setBrush(QColor::fromRgb(52, 22, 61, 150));
    painter->drawEllipse(centerPoint, this->scanRadius * PIXEL_PER_KM, this->scanRadius * PIXEL_PER_KM);
    /* Vẽ tia quét */
    QPen penScanLine(QColor::fromRgb(255, 0, 0));
    penScanLine.setWidth(2);
    painter->setPen(penScanLine);
    painter->drawLine(centerPoint, scanPoint);
    /* Vẽ đường phương vị */
    painter->setBrush(QColor::fromRgb(0, 0, 0, 0));
    for(int indexLine = 0; indexLine < 36; indexLine++) {
        QPointF endPoint = rotatePoint(centerPoint, refPoint, indexLine * 10);
        if(indexLine % 3) {
            painter->setPen(QColor::fromRgb(255, 255, 255, 20));
            painter->drawLine(centerPoint, endPoint);
        }
        else {
            painter->setPen(QColor::fromRgb(255, 255, 255, 100));
            painter->drawLine(centerPoint, endPoint);
            if((indexLine >= 9) && (indexLine <= 15)) {
                endPoint.setX(endPoint.rx() + 4);
                endPoint.setY(endPoint.ry() + 7.5);
            }
            if((indexLine > 15) && (indexLine < 18)) {
                endPoint.setX(endPoint.rx() + 4);
                endPoint.setY(endPoint.ry() + 15);
            }
            if(indexLine == 18) {
                endPoint.setX(endPoint.rx() - 20);
                endPoint.setY(endPoint.ry() + 15);
            }
            if((indexLine > 18) && (indexLine <= 24)) {
                endPoint.setY(endPoint.ry() + 9);
                endPoint.setX(endPoint.rx() - 15 * 3);
            }
            if((indexLine > 24) && (indexLine < 36)) {
                endPoint.setX(endPoint.rx() - 15 * 3);
            }
            painter->setFont(QFont("Arial", 15));
            painter->drawText(endPoint, QString::number(indexLine * 10) + "°");
        }
    }
    /* Vẽ đường tròn cự ly */
    for(int indexCircle = 0; indexCircle < this->circleDistance.count(); indexCircle++) {
        QPen pen(this->circleDistance.at(indexCircle)->color);
        pen.setWidth(this->circleDistance.at(indexCircle)->width);
        painter->setPen(pen);
        int circleDis = this->circleDistance.at(indexCircle)->distance * PIXEL_PER_KM;
        painter->drawEllipse(centerPoint, circleDis, circleDis);
    }
    /* Center point */
//    QPen pen(QColor::fromRgb(255, 0, 0));
//    pen.setWidth(5);
//    painter->setPen(pen);
//    painter->drawEllipse(centerPoint, 5, 5);
    /* Gradient */
//    QConicalGradient conicalGrad(centerPoint, -this->degreeScan);
//    conicalGrad.setColorAt(1.0, QColor::fromRgb(0, 0, 0, 0));
//    conicalGrad.setColorAt(0.33, QColor::fromRgb(0, 255, 0, 5));
//    conicalGrad.setColorAt(0.0, QColor::fromRgb(0, 255, 0, 100));
    /* Nón quét */
//    painter->setPen(QColor::fromRgb(0, 0, 0, 0));
//    painter->setBrush(QBrush(conicalGrad));
//    painter->drawPie(centerPoint.rx() - radiusInPix, centerPoint.ry() - radiusInPix, radiusInPix * 2, radiusInPix * 2, -(this->degreeScan + 270) * 16, 30 * 16);
    /* Địa vật */
    if(this->visibleGeo == true) {
        painter->drawImage(centerPoint.rx() - 961, centerPoint.y() - 517, *topoImage);
    }
//    QImage resultImage(QSize(160 * 2 * PIXEL_PER_KM, 160 * 2 * PIXEL_PER_KM), QImage::Format_ARGB32_Premultiplied);
//    QPainter painter2(&resultImage);
//    painter2.fillRect(resultImage.rect(), QColor::fromRgb(0, 0, 0, 0));
//    /* Vẽ 360 đường thẳng từ tâm */
//    painter2.setPen(QColor::fromRgb(0, 0, 0));
//    for(double degree = 180.0; degree < 360.0; degree += 0.1) {
//        QPointF endpointLine = rotatePoint(QPointF(resultImage.width() / 2, resultImage.height() / 2), QPointF(resultImage.width() / 2, 0), degree);
//        painter2.drawLine(resultImage.width() / 2, resultImage.height() / 2, endpointLine.rx(), endpointLine.ry());
//    }
//    painter2.setCompositionMode(QPainter::CompositionMode_SourceIn);
//    painter2.drawImage(0, 0, QImage(":/topo.png")); // source
//    painter2.setCompositionMode(QPainter::CompositionMode_DestinationOver);
//    painter2.end();
//    painter->drawImage(QPoint(centerPoint.rx() - resultImage.width() / 2, centerPoint.ry() - resultImage.height() / 2), resultImage);
}


void Radar::mousePressEvent(QGraphicsSceneMouseEvent *event){
    QGraphicsItem::mousePressEvent(event);
    std::cout << "clicked" << std::endl;
}
