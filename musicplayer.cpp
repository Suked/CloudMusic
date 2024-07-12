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
    });

    musicLyric = new MusicLyric(this);

    musicAlbum = new MusicAlbum(this);
    // 歌词捕获
    connect(musicLyric,&MusicLyric::lyricReady,this,[this](){
        emit musicLyricReady(musicLyric->getMusicLyricText());
        this->lyricTimeMap = musicLyric->getLyricTimeMap();
    });

    // 发送当前歌词行号信息
    connect(this,&MusicPlayer::positionChanged,this,&MusicPlayer::queryPlayLyricLineByTime);

    // 专辑图片信号发送
    connect(musicAlbum, &MusicAlbum::musicAlbumReady,this,&MusicPlayer::musicAlbumReady);
    // 通知间隔
    this->setNotifyInterval(200);
}

// 歌曲播放
void MusicPlayer::playMusic(const QStringList &urlList)
{
    QString mp3Url = urlList[0];
    QString lyricUrl = urlList[1];
    QString albumUrl = urlList[2];

    // 下载歌词
    musicLyric->download(lyricUrl);
    // 下载图片
    musicAlbum->download(albumUrl);

    qDebug() << "--------------------------------------------";
    qDebug() << "playMusic:mp3Url:" << mp3Url;
    qDebug() << "playMusic:lyricUrl:" << lyricUrl;
    qDebug() << "playMusic:albumUrl:" << albumUrl;
    qDebug() << "--------------------------------------------";
    this->setMedia(QUrl(mp3Url));
    this->setVolume(100);
    this->play();
}

void MusicPlayer::searchMusic(const QString &music)
{
    musicSearch->search(music);
}

void MusicPlayer::queryPlayLyricLineByTime(qint64 time)
{
    auto it = lyricTimeMap.lowerBound(time);
    if(it != lyricTimeMap.end()){
        int line = it.key() > time ? it.value() - 1 : it.value();
        emit playLyricLineChanged(line);
        //qDebug() << "line: " << line;
    }
}
