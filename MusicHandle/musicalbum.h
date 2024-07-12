#ifndef MUSICALBUM_H
#define MUSICALBUM_H

#include <QObject>
#include "musichttp.h"
#include <QImage>
#include <QPainter>

class MusicAlbum : public QObject
{
    Q_OBJECT
public:
    explicit MusicAlbum(QObject *parent = nullptr);
    void download(const QString &httpUrl);
    QImage changeImageToARGB32(const QImage &image);
    QImage makeCircleImage(const QImage &image);
    QImage makeDiskImage(const QImage &image);

signals:
    void musicAlbumReady(const QImage &image);

public slots:
    void handleData(void);


private:
    MusicHttp *http;

};

#endif // MUSICALBUM_H
