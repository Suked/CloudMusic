#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMediaPlayer>
#include "musicsearch.h"
#include "musiclyric.h"
#include "musicalbum.h"

class MusicPlayer : public QMediaPlayer
{
    Q_OBJECT
public:
    explicit MusicPlayer(QObject *parent = nullptr);
    void playMusic(const QStringList &urlList);


signals:
    void musicInformationReady(const MusicInformation &musicInfomation);
    void musicLyricReady(const QString &musicLyricText);
    void playLyricLineChanged(int line);
    void musicAlbumReady(const QImage &albumImage);

private:
    MusicSearch *musicSearch;
    MusicLyric *musicLyric;
    QMap<qint64,qint32> lyricTimeMap;
    MusicAlbum *musicAlbum;


public slots:
    // 查询歌曲
    void searchMusic(const QString &music);

    // 查询行号
    void queryPlayLyricLineByTime(qint64 time);
};

#endif // MUSICPLAYER_H
