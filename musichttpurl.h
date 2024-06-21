#ifndef MUSICHTTPURL_H
#define MUSICHTTPURL_H

#include <QObject>
#include <musicinformation.h>

class MusicHttpUrl : public QObject
{
    Q_OBJECT
private:
    explicit MusicHttpUrl(QObject *parent = nullptr);

public:
    void setServerAdress(const QString ip, const QString port);
    static MusicHttpUrl *getMusicHttpUrlObject(void);
    QString getMusicSearchUrl(const QString &music);
    QString getMusicMp3Url(const MusicInformation &musicInformation);
    QString getMusicAlbumUrl(const MusicInformation &musicInformation);

    QString getMusicLyricUrl(const MusicInformation &musicInformation);
signals:

private:
    static MusicHttpUrl *musicHttpUrl;
    QString baseHttpUrl;

};

#endif // MUSICHTTPURL_H
