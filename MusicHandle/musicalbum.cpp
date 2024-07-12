#include "musicalbum.h"


MusicAlbum::MusicAlbum(QObject *parent) : QObject(parent)
{
    http = new MusicHttp("music-album.jpg",this);
    connect(http,&MusicHttp::readyRead,this,&MusicAlbum::handleData);
}

void MusicAlbum::download(const QString &httpUrl)
{
    http->get(httpUrl);
}

QImage MusicAlbum::changeImageToARGB32(const QImage &image)
{
    QImage circleImage(":/images/default.png");
    QImage albumImage = image.scaled(circleImage.size(),Qt::KeepAspectRatio);
    //空图片
    QImage fixedImage(circleImage.size(), QImage::Format_ARGB32_Premultiplied);

    //画家把空图片作为画板
    QPainter painter(&fixedImage);
    painter.setCompositionMode(QPainter::CompositionMode_Source);
    painter.fillRect(fixedImage.rect(), Qt::transparent);//填充为透明
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    painter.drawImage(fixedImage.rect(), albumImage);
    painter.end();

    return fixedImage;
}

QImage MusicAlbum::makeCircleImage(const QImage &image)
{
    QImage destImage = image;
    QImage srcImage(":/images/default.png");
    QPainter painter(&destImage);
    painter.setCompositionMode(QPainter::CompositionMode_DestinationIn);
    painter.drawImage(destImage.rect(),srcImage);
    painter.end();

    return destImage;
}


QImage MusicAlbum::makeDiskImage(const QImage &image)
{
    QImage imageARGB32 = changeImageToARGB32(image);
    QImage circleImage = makeCircleImage(imageARGB32);
    QImage diskImage(":/images/disk-background.png");
    QPainter painter(&diskImage);
    painter.setCompositionMode(QPainter::CompositionMode_SourceOver);
    QRect rect   = circleImage.rect();
    QPoint point = diskImage.rect().center();
    rect.moveCenter(point);
    painter.drawImage(rect,circleImage);

    return diskImage;
}

void MusicAlbum::handleData()
{
    QImage albumImage = makeDiskImage(QImage("music-album.jpg"));
    emit musicAlbumReady(albumImage);
}
