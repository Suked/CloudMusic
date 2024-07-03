#ifndef MUSICLYRIC_H
#define MUSICLYRIC_H

#include <QObject>
#include "musichttp.h"

class MusicLyric : public QObject
{
    Q_OBJECT
public:
    explicit MusicLyric(QObject *parent = nullptr);
    void download(const QString &httpUrl);

    QString getMusicLyricText() const;

    QMap<qint64, qint32> getLyricTimeMap() const;

signals:
    // 发出信号歌词解析完毕
    void lyricReady(void);

private:
    MusicHttp *http;
    QString musicLyricText;
    QMap<qint64,qint32> lyricTimeMap;

public slots:
    // 获取歌词数据
    void paraseLyric(void);
    // 解析每行歌词
    void paraseLineLyric(const QString &lyric, const qint32 &line);

};

#endif // MUSICLYRIC_H
