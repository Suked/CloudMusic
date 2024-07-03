#ifndef MUSICSEARCH_H
#define MUSICSEARCH_H

#include <QObject>
#include "musichttp.h"
#include <QList>
#include "musicinformation.h"

class MusicSearch : public QObject
{
    Q_OBJECT
public:
    explicit MusicSearch(QObject *parent = nullptr);
    void search(const QString &music);

public:
    void handleData(void);
    QList<MusicInformation> parseMusicJsonData(const QByteArray &jsonData);
    QList<MusicInformation> readMusicData(void);

signals:
    void musicDataReady(void);


private:
    MusicHttp *http;
    QList<MusicInformation> musicInfoList;

};

#endif // MUSICSEARCH_H
