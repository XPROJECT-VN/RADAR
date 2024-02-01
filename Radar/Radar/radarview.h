#ifndef RADARVIEW_H
#define RADARVIEW_H

#include <QGraphicsView>
#include <QtWidgets>

#include "radar.h"

#define RADARVIEW_MAX_SCALE     100
#define RADARVIEW_MIN_SCALE     -80

class Target : public QWidget {
public:
    bool moving = false;
    int topNumber = 0;
    double azimuth = 0.0;
    double radius = 0.0;
    int height = 0;
    int speed = 0;
    bool dir = false;

    enum {
        leftToRight,
        rightToLeft,
        topToBot,
        botToTop,

    } direction;

    Target() {
        this->timerMoving = new QTimer;
        this->timerMoving->setInterval(10000);
        this->connect(this->timerMoving, &QTimer::timeout, this, &Target::timerMoving_handler);
//        this->timerMoving->stop();
        this->timerMoving->start();
    }
    ~Target() {

    }
    void setPos1(QPointF pos) {
        this->pos = pos;
    }
    void setPos1(qreal rx, qreal ry) {
        this->pos.setX(rx);
        this->pos.setY(ry);
    }
    QPointF getPos1() {
        return this->pos;
    }
    void setMoving(bool isMoving) {
        if(isMoving == true) {
            this->timerMoving->start();
        }
        else {
            this->timerMoving->stop();
        }
    }
    void setSpeed(int kmPerHour) {
        bool isMoving = this->timerMoving->isActive();
        this->speed = kmPerHour;
        if(isMoving) {
            this->timerMoving->stop();
        }
        int ms__ = 3600000.0 / ((double)(kmPerHour) * PIXEL_PER_KM);
        this->timerMoving->setInterval(ms__);
        if(isMoving) {
            this->timerMoving->start();
        }
    }
    void (*movingForm)(Target *target);
private:
    QTimer *timerMoving;
    QPointF pos;
public slots:
    void timerMoving_handler() {
        if(movingForm != nullptr) {
            // movingForm(this);
        }
    }
};

#define TARGET_SIZE     10

class TargetNews : public QGraphicsItem {
public:
    Target *target;
    QVector<QPointF> historyPos; // Vị trí radar đã phát hiện
    bool selected = false;
    QPointF centerPoint;
    bool setVisible = false;
    QColor targetColor;

    TargetNews(Target *target) {
        this->target = target;
        QCursor curs(Qt::CursorShape::ArrowCursor);
        this->setCursor(curs);
        this->setFlags(QGraphicsItem::ItemIsMovable);
        this->setZValue(1);
    }
    void setTarget(Target *target) {
        this->target = target;
    }

    bool isSelected() {
        return selected;
    }
    void setSelect(bool isSelect) {
        this->selected = isSelect;
    }
private:
    QRectF boundingRect() const override {
        /* Thay đổi vùng select khả dụng theo vị trí cuối cùng radar phát hiện */
        if(this->historyPos.count() > 0) {
            return QRectF(this->historyPos.last().x() - (TARGET_SIZE), this->historyPos.last().y() - (TARGET_SIZE), TARGET_SIZE * 2, TARGET_SIZE * 2);
        }
        return QRectF(0, 0, 0, 0);
    }
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget * = nullptr) override {
        if(setVisible) {
            QPen pen(QColor::fromRgb(255, 255, 255, 0));
            painter->setPen(pen);
            painter->setBrush(this->targetColor);
            /* In ra lịch sử các điểm đã phát hiện */
            for(int indexPoint = 0; indexPoint < historyPos.count(); indexPoint++) {
                painter->drawEllipse(historyPos.at(indexPoint), TARGET_SIZE / 3, TARGET_SIZE / 3);
            }
            /* In ra thông tin Target khi được chọn
                hiện thông tin Target ở điểm cuối cùng trong History
            */
            if(this->selected == true) {
                QPointF offset;
                if(this->historyPos.count() > 0) {
                    offset = this->historyPos.last();
                }
                /* Tính bán kính */
                QLineF line(offset, this->centerPoint);
                double trueLength = std::sqrt(std::pow(line.dx(), 2) + std::pow(line.dy(), 2));
                this->target->radius = trueLength / PIXEL_PER_KM;

                pen.setColor(QColor::fromRgb(255, 255, 255, 255));
                pen.setWidth(1);
                painter->setPen(pen);
                painter->setBrush(QColor::fromRgb(255, 255, 255, 0));
                painter->drawRect(boundingRect());
                painter->drawLine(offset.rx() + TARGET_SIZE, offset.ry() - TARGET_SIZE, offset.rx() + 30, offset.ry() + -30);
                painter->drawLine(offset.rx() + 30, offset.ry() + -30, offset.rx() + 100, offset.ry() + -30);
                painter->setFont(QFont("Arial", 13));
                painter->drawText(offset.rx() + 30, offset.ry() + -30 - 5, QString::number(this->target->topNumber));
                painter->drawText(offset.rx() + 30, offset.ry() + -30 + 13 + 5, QString::number(this->target->azimuth) + "°" + " " + QString::number(this->target->radius) + "km");
                painter->drawText(offset.rx() + 30, offset.ry() + -30 + 13 * 2 + 8, QString::number(this->target->height) + "m" + " " + QString::number(this->target->speed) + "km/h");
            }
        }
    }
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override {
        qDebug() << "hello";
        QGraphicsItem::hoverMoveEvent(event);
    }
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override {
        qDebug() << "hello";
        if(this->selected == false) {
            this->selected = true;
        }
        else {
            this->selected = false;
        }
        QGraphicsItem::mousePressEvent(event);
    }
};

class RadarGroupItem : public QGraphicsItemGroup {
public:
    RadarGroupItem () {
        this->setFlags(QGraphicsItem::ItemIsMovable);
        QCursor curs(Qt::CursorShape::OpenHandCursor);
        this->setCursor(curs);
        qDebug() << "Group: " << this->zValue();
    }
private:
//    QRectF boundingRect() const override {
//        return QRectF(0, 0, 4000, 3800);
//    }
    // void mousePressEvent(QGraphicsSceneMouseEvent *event) override {
//        event->setAccepted(false);
        // QGraphicsItemGroup::mousePressEvent(event);
    // }
    // void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override {
        // QGraphicsItemGroup::mouseMoveEvent(event);
//        event->setAccepted(false);
    // }
};

class RadarView : public QGraphicsView
{
public:
    Radar *radar;
    RadarGroupItem radarGroupItem;
    QTimer *timerScan;
    QGraphicsScene *scene;
    bool power = false;

    RadarView(QWidget *parrent);

    void addAirPort(AirPort *airPort);
    void addTarget(Target *target, QColor color);
    void removeTarget(Target *target);
    void setRadarRunning(bool running);
    void setDegree(double degree);
    void setRpm(int rpm);
    void setPower(bool onOff);
private:
    int scaleVal = 0;
    QList<AirPort *> airPortList;
    QList<TargetNews *> targetList;
    double desDegree = 0;

    QTimer *timerGetTargetNews;

    QPoint m_dragStart;

    void zoomIn(int level, QPointF mousePos);
    void zoomOut(int level, QPointF mousePos);
    void refreshSizeRadar(QPointF mousePos);
    bool checkLineContaintTarget(QPointF targetPos, QLineF line);
protected:
    void wheelEvent(QWheelEvent *event) override;
    void resizeEvent(QResizeEvent *) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
public slots:
    void timerRadarScan_Callback();
    void timerGetTargetNews_handler();
};

#endif // RADARVIEW_H
