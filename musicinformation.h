#ifndef MUSICINFO_H
#define MUSICINFO_H
#include <QString>

class MusicInformation
{
public:
    MusicInformation();

    QString getMusicName() const;
    void setMusicName(const QString &value);

    QString getAlbumName() const;
    void setAlbumName(const QString &value);

    qint32 getMusicDuration() const;
    void setMusicDuration(const qint32 &value);

    QString getMusicPath() const;
    void setMusicPath(const QString &value);

    QString getMusicMp3() const;
    void setMusicMp3(const QString &value);

    QString getMusicLyric() const;
    void setMusicLyric(const QString &value);

    QString getAlbumImage() const;
    void setAlbumImage(const QString &value);

private:
    QString musicName;
    QString albumName;
    qint32 musicDuration;
    QString musicPath;
    QString musicMp3;
    QString musicLyric;
    QString albumImage;
};

#endif // MUSICINFO_H
