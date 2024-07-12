#ifndef MUSICITEM_H
#define MUSICITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QImage>
#include <QPainter>
#include <QPropertyAnimation>

class MusicItem :  public QObject,public QGraphicsItem
{
    Q_OBJECT
    Q_PROPERTY(qreal angle READ rotation WRITE setRotation)
public:
    explicit MusicItem(const QString &filename,QObject *parent = nullptr);
    void updateImage(const QImage &image);

    //绘制图元的函数
    virtual void paint(
                           QPainter *painter,
                           const QStyleOptionGraphicsItem *option,
                           QWidget *widget = Q_NULLPTR
                       );

    //返回图元自己坐标系中，图元所在的矩形
    QRectF boundingRect() const;
    void setRotationPoint(int x, int y);

    int width();
    int height();
    // 开启动画
    void startAnimation(int duration, int start, int end, int loopCount = -1);
    // 停止动画
    void pauseAnimation(void);
    void resumeAnimation(void);

signals:

private:
    QImage image;
    QPropertyAnimation *animation;

};


#endif // MUSICITEM_H
