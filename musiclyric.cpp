#include "musiclyric.h"
#include <QTextCodec>
#include <QTime>

MusicLyric::MusicLyric(QObject *parent) : QObject(parent)
{
    http = new MusicHttp("music.lyric", this);
    connect(http,&MusicHttp::readyRead,this,&MusicLyric::paraseLyric);
}

void MusicLyric::download(const QString &httpUrl)
{
    http->get(httpUrl);
}

QString MusicLyric::getMusicLyricText() const
{
    return musicLyricText;
}

QMap<qint64, qint32> MusicLyric::getLyricTimeMap() const
{
    return lyricTimeMap;
}

void MusicLyric::paraseLyric()
{
    QByteArray orginData = http->readAll();
    QString data = QString(orginData);

    QStringList lyricList = data.split("\n");

    // 行号
    qint32 line = 0;
    // 更新musicLyricText
    musicLyricText.clear();
    // 更新musicLyricTime
    lyricTimeMap.clear();
    foreach(QString lineLyric, lyricList){
        if(lineLyric.isEmpty()){
            continue;
        }
        paraseLineLyric(lineLyric, line);
        line++;
    }

    qDebug() << lyricList;
}

void MusicLyric::paraseLineLyric(const QString &lyric, const qint32 &line)
{
    // 去除右中括号
    QStringList lyricList = lyric.split(']');
    QString lyrictime = lyricList[0].remove('[');
    QString lyricText = lyricList[1];

    musicLyricText = musicLyricText + lyricText + '\n';

    QTime time = QTime::fromString(lyrictime,"m:s.z");
    qint32 lyricTimeMsec = time.minute()*60*1000+time.second()*1000+time.msec();

    lyricTimeMap.insert(lyricTimeMsec,line);

    if(musicLyricText.isEmpty() || lyricTimeMap.isEmpty()){
        return;
    }

    emit lyricReady();
    return;
}
