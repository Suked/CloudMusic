#include "musicscene.h"

MusicScene::MusicScene(QObject *parent) : QObject(parent)
{
    timer = new QTimer(this);
    // 设置只超时一次
    timer->setSingleShot(true);
    connect(timer, &QTimer::timeout,this,[this](){
        // 光盘
        diskItem->startAnimation(60*1000,0,360);
    });

    scene = new QGraphicsScene(this);
    diskItem = new MusicItem(":/images/disk.png",this);
    needleItem = new MusicItem(":/images/magnetNeedle.png");

    // 设置右上角磁条指向
    qreal x = -3.0/7 * needleItem->width();
    qreal y = -needleItem->height()/2;
    needleItem->setRotationPoint(x,y);

    scene->addItem(diskItem);
    scene->addItem(needleItem);
}

QGraphicsScene *MusicScene::getScene() const
{
    return scene;
}

void MusicScene::setMusicSceneRect(const QRectF &rect)
{
    qreal width = rect.width();
    qreal height = rect.height();
    QRect sceneRect(-width/2, -height/2, width, height);

    scene->setSceneRect(sceneRect);
    diskItem->setPos(0, 0);

    qreal needlePosX = -width/2 + needleItem->width()/2;
    qreal needlePosY = -height/2 + needleItem->height()/2;
    needleItem->setPos(needlePosX + 10, needlePosY + 10);
}

// 设置动画旋转时间等
void MusicScene::startAnimation()
{
    diskItem->pauseAnimation();
    // 磁条
    needleItem->startAnimation(2*1000,0,25,1);
    timer->start(2 * 1000);
}

void MusicScene::pauseAnimation()
{
    diskItem->pauseAnimation();
    needleItem->pauseAnimation();
}

void MusicScene::resumeAnimation()
{
    diskItem->resumeAnimation();
    needleItem->resumeAnimation();
}

void MusicScene::updateDiskImage(const QImage &image)
{
    diskItem->updateImage(image);
}
