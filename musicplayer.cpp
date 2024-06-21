#include "musicplayer.h"
#include "musicsearch.h"
#include <QDebug>


MusicPlayer::MusicPlayer(QObject *parent) : QMediaPlayer(parent)
{
    musicSearch = new MusicSearch(this);
    // 歌曲数据准备好
    connect(musicSearch,&MusicSearch::musicDataReady,this,[this](){
        QList<MusicInformation> musicInfoList = musicSearch->readMusicData();
        for(MusicInformation musicinfo : musicInfoList){
            qDebug() << "duration:" << musicinfo.getMusicDuration();
            emit musicInformationReady(musicinfo);

        }
        musicLyric = new MusicLyric(this);

        // 歌词捕获
        connect(musicLyric,&MusicLyric::lyricReady,this,[this](){
            emit musicLyricReady(musicLyric->getMusicLyricText());
            this->LyricTimeMap = musicLyric->getLyricTimeMap();
        });
//        MusicInformation music = musicInfoList[0];
//        qDebug() << MusicHttpUrl::getMusicHttpUrlObject()->getMusicMp3Url(music);
//        qDebug() << MusicHttpUrl::getMusicHttpUrlObject()->getMusicAlbumUrl(music);
//        qDebug() << MusicHttpUrl::getMusicHttpUrlObject()->getMusicLyricUrl(music);
    });
}

// 歌曲播放
void MusicPlayer::playMusic(const QStringList &urlList)
{
    QString mp3Url = urlList[0];
    QString lyricUrl = urlList[1];
    QString albumUrl = urlList[2];

    // 下载歌词
    musicLyric->download(lyricUrl);

    qDebug() << "--------------------------------------------";
//    qDebug() << "playMusic:mp3Url:" << mp3Url;
    qDebug() << "playMusic:lyricUrl:" << lyricUrl;
//    qDebug() << "playMusic:albumUrl:" << albumUrl;
    qDebug() << "--------------------------------------------";
    this->setMedia(QUrl(mp3Url));
    this->setVolume(100);
    this->play();
}

void MusicPlayer::searchMusic(const QString &music)
{
    musicSearch->search(music);
}
