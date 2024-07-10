#ifndef MUSICALBUM_H
#define MUSICALBUM_H

#include <QObject>

class MusicAlbum : public QObject
{
    Q_OBJECT
public:
    explicit MusicAlbum(QObject *parent = nullptr);

signals:

};

#endif // MUSICALBUM_H
