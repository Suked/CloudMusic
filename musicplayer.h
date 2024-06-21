#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMediaPlayer>
#include "musicsearch.h"
#include "musiclyric.h"

class MusicPlayer : public QMediaPlayer
{
    Q_OBJECT
public:
    explicit MusicPlayer(QObject *parent = nullptr);
    void playMusic(const QStringList &urlList);


signals:
    void musicInformationReady(const MusicInformation &musicInfomation);
    void musicLyricReady(const QString &musicLyricText);

private:
    MusicSearch *musicSearch;
    MusicLyric *musicLyric;
    QMap<qint64,qint32> LyricTimeMap;


public slots:
    void searchMusic(const QString &music);

};

#endif // MUSICPLAYER_H
