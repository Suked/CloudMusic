#include "musichttpurl.h"
#include <QDebug>

MusicHttpUrl *MusicHttpUrl::musicHttpUrl = nullptr;

MusicHttpUrl::MusicHttpUrl(QObject *parent) : QObject(parent)
{
    baseHttpUrl = "http://localhost:8080";
}

void MusicHttpUrl::setServerAdress(const QString ip, const QString port)
{
    baseHttpUrl = QString("http://%1:%2").arg(ip).arg(port);
}

MusicHttpUrl *MusicHttpUrl::getMusicHttpUrlObject()
{
    if(!musicHttpUrl){
        musicHttpUrl = new MusicHttpUrl;
    }
    return musicHttpUrl;
}

QString MusicHttpUrl::getMusicSearchUrl(const QString &music)
{
    QString httpUrl = QString("%1/歌曲/%2/music.json").arg(baseHttpUrl).arg(music);
//    QString httpUrl = QString("http://localhost:8080/歌曲/%1/music.json").arg(music);

    qDebug() << "getMusicSearchUrl: " << httpUrl;
    return httpUrl;
}

// 获取MP3地址
QString MusicHttpUrl::getMusicMp3Url(const MusicInformation &musicInformation)
{
    QString httpUrl = QString("%1%2/%3")
            .arg(baseHttpUrl)
            .arg(musicInformation.getMusicPath())
            .arg(musicInformation.getMusicMp3());
    qDebug() << "getMusicMp3Url: " << httpUrl;
    return httpUrl;
}

// 获取歌曲图片
QString MusicHttpUrl::getMusicAlbumUrl(const MusicInformation &musicInformation)
{
    QString httpUrl = QString("%1%2/%3")
            .arg(baseHttpUrl)
            .arg(musicInformation.getMusicPath())
            .arg(musicInformation.getAlbumImage());
    qDebug() << "getMusicAlbumUrl" << httpUrl;
    return httpUrl;
}

// 获取歌词
QString MusicHttpUrl::getMusicLyricUrl(const MusicInformation &musicInformation)
{
    QString httpUrl = QString("%1%2/%3")
            .arg(baseHttpUrl)
            .arg(musicInformation.getMusicPath())
            .arg(musicInformation.getMusicLyric());
    qDebug() << "getMusicLyricUrl: " << httpUrl;
    return httpUrl;
}
