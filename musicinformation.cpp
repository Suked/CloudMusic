#include "musicinformation.h"

MusicInformation::MusicInformation()
{

}

QString MusicInformation::getMusicName() const
{
    return musicName;
}

void MusicInformation::setMusicName(const QString &value)
{
    musicName = value;
}

QString MusicInformation::getAlbumName() const
{
    return albumName;
}

void MusicInformation::setAlbumName(const QString &value)
{
    albumName = value;
}

qint32 MusicInformation::getMusicDuration() const
{
    return musicDuration;
}

void MusicInformation::setMusicDuration(const qint32 &value)
{
    musicDuration = value;
}

QString MusicInformation::getMusicPath() const
{
    return musicPath;
}

void MusicInformation::setMusicPath(const QString &value)
{
    musicPath = value;
}

QString MusicInformation::getMusicMp3() const
{
    return musicMp3;
}

void MusicInformation::setMusicMp3(const QString &value)
{
    musicMp3 = value;
}

QString MusicInformation::getMusicLyric() const
{
    return musicLyric;
}

void MusicInformation::setMusicLyric(const QString &value)
{
    musicLyric = value;
}

QString MusicInformation::getAlbumImage() const
{
    return albumImage;
}

void MusicInformation::setAlbumImage(const QString &value)
{
    albumImage = value;
}
