#include "musicsearch.h"
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonArray>
#include "musichttpurl.h"

MusicSearch::MusicSearch(QObject *parent) : QObject(parent)
{
    http = new MusicHttp("music.json",this);
    connect(http,&MusicHttp::readyRead,this,&MusicSearch::handleData);
}

void MusicSearch::search(const QString &music)
{
    QString httpUrl = MusicHttpUrl::getMusicHttpUrlObject()->getMusicSearchUrl(music);
    qDebug() << httpUrl;
    http->get(httpUrl);
}

void MusicSearch::handleData()
{
    QByteArray data = http->readAll();
    musicInfoList = parseMusicJsonData(data);
    if(musicInfoList.isEmpty()){
        return;
    }
    emit musicDataReady();
    //qDebug() << data;
}

QList<MusicInformation> MusicSearch::parseMusicJsonData(const QByteArray &jsonData)
{
    QList<MusicInformation> musicInfoList;
    QJsonParseError jsonParseError;
    QJsonDocument musicDocument= QJsonDocument::fromJson(jsonData,&jsonParseError);
    if(musicDocument.isEmpty()){
    qDebug() << "Fail to parse json data:" << jsonParseError.errorString();
    return musicInfoList;
    }
    QJsonObject musicObject = musicDocument.object();
    QJsonArray musicArray = musicObject["list"].toArray();
    for(int i = 0; i < musicArray.size(); i++){
        QJsonObject object = musicArray[i].toObject();
        QString musicName = object["musicName"].toString();
        QString albumName= object["albumName"].toString() ;
        qint32 musicDuration = object["duration"].toInt();
        QString musicPath= object["path"].toString();
        QString musicMp3= object["mp3"].toString();
        QString musicLyric= object["lyric"].toString();
        QString albumImage= object["img"].toString();

        MusicInformation musicInfo;
        musicInfo.setMusicName(musicName);
        musicInfo.setAlbumName(albumName);
        musicInfo.setMusicDuration(musicDuration);
        musicInfo.setMusicPath(musicPath);
        musicInfo.setMusicMp3(musicMp3);
        musicInfo.setMusicLyric(musicLyric);
        musicInfo.setAlbumImage(albumImage);

        musicInfoList << musicInfo;

        qDebug() << "musicName : " << musicName;
        qDebug() << "albumName : " << albumName;
        qDebug() << "musicDuration: " << musicDuration;
        qDebug() << "musicPath : " << musicPath;
        qDebug() << "musicMp3 : " << musicMp3;
        qDebug() << "musicLyric : " << musicLyric;
        qDebug() << "albumImage : " << albumImage;
        qDebug() << "--------------------";
    }
}

QList<MusicInformation> MusicSearch::readMusicData()
{
    return musicInfoList;
}
