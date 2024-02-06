#include "radarview.h"
#include <qmath.h>
#include <QtOpenGL>
#include <iostream>

RadarView::RadarView(QWidget *parrent) : QGraphicsView(parrent){
//    refreshSizeRadar();
    this->scene = new QGraphicsScene(parrent);
    this->scene->addItem(&radarGroupItem);

    this->setScene(this->scene);
    this->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
//    this->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);
//    this->setOptimizationFlags(QGraphicsView::DontSavePainterState);
    this->setViewportUpdateMode(QGraphicsView::SmartViewportUpdate);
    this->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    this->setDragMode(NoDrag);
//    this->setViewport(new QGLWidget(QGLFormat(QGL::DoubleBuffer)));

    this->setCacheMode(QGraphicsView::CacheBackground);
//    this->scene->setItemIndexMethod(QGraphicsScene::NoIndex);

//    this->radarView->fitInView(radar, Qt::KeepAspectRatioByExpanding);
    this->setSceneRect(this->sceneRect());
    this->setBackgroundBrush(QColor::fromRgb(25, 68, 11));

    /* Tạo radar */
    this->radar = new Radar();
    this->radar->setScanRadius(160);
    this->radar->setVisibleRadius(160);
    this->radar->setOffsetCenter(2715, 1859);

    this->radarGroupItem.addToGroup(this->radar);

    /* Timer quét Radar */
    this->timerScan = new QTimer();
    this->timerScan->setInterval(1);
    this->connect(this->timerScan, &QTimer::timeout, this, &RadarView::timerRadarScan_Callback, Qt::AutoConnection);
//    this->timerScan->start();

    /* Timer lấy tin Target */
    this->timerGetTargetNews = new QTimer();
    this->timerGetTargetNews->setInterval(2000);
    this->connect(this->timerGetTargetNews, &QTimer::timeout, this, &RadarView::timerGetTargetNews_handler);
    this->timerGetTargetNews->start();
}

void RadarView::setRadarRunning(bool running)
{
    if(running == true){
//        this->timerScan->start();
    }
    else {
//        this->timerScan->stop();
    }
}

void RadarView::addAirPort(AirPort *airPort) {
    this->airPortList.append(airPort);
    this->radarGroupItem.addToGroup(airPort);
}
void RadarView::addTarget(Target *target, QColor color) {
    TargetNews *targetNews = new TargetNews(target);
    targetNews->targetColor = color;
    targetNews->centerPoint = this->radar->offsetCenter();
    this->targetList.push_back(targetNews);
    this->radarGroupItem.addToGroup(targetNews);
}

void RadarView::removeTarget(Target *target)
{
    for(uint8_t indexTarget = 0; indexTarget < this->targetList.count(); indexTarget++) {
        if(this->targetList.at(indexTarget)->target == target) {
            delete this->targetList.at(indexTarget)->target;
            this->radarGroupItem.removeFromGroup(this->targetList.at(indexTarget));
            delete this->targetList.at(indexTarget);
            this->targetList.removeAt(indexTarget);
            break;
        }
    }
}
void RadarView::resizeEvent(QResizeEvent *event)
{
    QGraphicsView::resizeEvent(event);
    //    this->fitInView(this->sceneRect(), Qt::KeepAspectRatioByExpanding);
}

void RadarView::mousePressEvent(QMouseEvent *event)
{
    QGraphicsView::mousePressEvent(event);
    QPointF pos = radar->mapFromScene(QCursor::pos());
    emit mousePressed(pos.x(), pos.y());
}

void RadarView::mouseMoveEvent(QMouseEvent *event)
{
    QGraphicsView::mouseMoveEvent(event);
}

void RadarView::wheelEvent(QWheelEvent *event)
{
    if(this->sceneRect().contains(event->pos())) {
        if (event->delta() > 0) {
            this->zoomIn(5, event->pos());
        }
        else {
            this->zoomOut(5, event->pos());
        }
        event->accept();
        QPointF posText = this->mapToScene(0, 0);
        posText.setY(posText.ry() + 25);
    } else {
        QGraphicsView::wheelEvent(event);
    }
}

void RadarView::zoomIn(int level, QPointF mousePos)
{
    if((((int)scaleVal) + level) < RADARVIEW_MAX_SCALE) {
        scaleVal += level;
    }
    else {
        scaleVal = RADARVIEW_MAX_SCALE;
    }
    refreshSizeRadar(mousePos);
}

void RadarView::zoomOut(int level, QPointF mousePos)
{
    if((((int)this->scaleVal) - level) >= RADARVIEW_MIN_SCALE) {
        scaleVal -= level;
    }
    else {
        scaleVal = RADARVIEW_MIN_SCALE;
    }
    refreshSizeRadar(mousePos);
}

void RadarView::refreshSizeRadar(QPointF mousePos)
{
    /* Lấy vị trí của chuột trên radar */
    QPointF oldPos = this->radarGroupItem.mapFromScene(mousePos);
//    qDebug() << "old" << oldPos;
    qreal scale = qPow(qreal(2), scaleVal / qreal(50));
    QTransform matrix;
    matrix.scale(scale, scale);
    this->radarGroupItem.setTransform(matrix);
    QPointF newPos = this->radarGroupItem.mapFromScene(mousePos);
//    qDebug() << "new" << newPos;
    this->radarGroupItem.moveBy((newPos.rx() - oldPos.rx()), (newPos.ry() - oldPos.ry()));
}

bool RadarView::checkLineContaintTarget(QPointF targetPos, QLineF line)
{
#define min_compare(m, n) ((m > n) ? n : m)
#define max_compare(m, n) ((m > n) ? m : n)
    QLineF targetToCenter(QPointF(line.x1(), line.y1()), targetPos);
    if( targetPos.rx() < min_compare(line.x1(), line.x2()) ||
        targetPos.rx() > max_compare(line.x1(), line.x2()) ||
        targetPos.ry() < min_compare(line.y1(), line.y2()) ||
        targetPos.ry() > max_compare(line.y1(), line.y2())){
        return false;
    }
    else {
        double tan1 = std::abs(line.dy() / line.dx());
        double tan2 = std::abs((targetPos.ry() - line.y1())/(targetPos.rx() - line.x1()));
        double diff = std::abs(tan1 - tan2);
        double length = targetToCenter.length();
        double over = (1056 * 1.0) / length / 10.0;
        if(diff < 0.8) {
            return true;
        }
        else {
            return false;
        }
    }
    return false;
}

void RadarView::setDegree(double degree)
{
    this->desDegree = degree;
}

void RadarView::setRpm(int rpm)
{
    qDebug() << rpm;
    if(rpm == 0) {
        this->timerScan->stop();
    }
    else {
        this->timerScan->stop();
        int interval = ((1000.0 * 60.0)/ ((double)(rpm) * 360.0));
        qDebug() << "int" << interval;
        this->timerScan->setInterval(interval);
        this->timerScan->start();
    }
}

void RadarView::setPower(bool onOff)
{
    this->power = onOff;
}

void RadarView::timerRadarScan_Callback()
{
//    if(this->desDegree != this->radar->getDegree()) {
        this->radar->setDegree(this->radar->getDegree() + 1.0);
//    }
    /* Kiểm tra các đối tượng nằm trên đường thẳng */
    for(int indexTarget = 0; indexTarget < this->targetList.count(); indexTarget++) {
        this->targetList.at(indexTarget)->setVisible = this->power;
        if(this->power) {
            if(this->checkLineContaintTarget(this->targetList.at(indexTarget)->target->getPos1(), this->radar->getScanLine()) == true) {
                this->targetList.at(indexTarget)->historyPos.push_back(QPointF((this->targetList.at(indexTarget)->target->getPos1().rx() - this->targetList.at(indexTarget)->pos().rx()),
                                                                               (this->targetList.at(indexTarget)->target->getPos1().ry() - this->targetList.at(indexTarget)->pos().ry())));
            }
        }
    }
}

void RadarView::timerGetTargetNews_handler()
{
//    for(int indexTarget = 0; indexTarget < this->targetList.count(); indexTarget++) {
//        this->targetList.at(indexTarget)->historyPos.push_back(QPointF((this->targetList.at(indexTarget)->target.pos().rx() - this->targetList.at(indexTarget)->pos().rx()), (this->targetList.at(indexTarget)->target.pos().ry() - this->targetList.at(indexTarget)->pos().ry())));
//    }
}
