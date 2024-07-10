#ifndef MUSICSENCE_H
#define MUSICSENCE_H

#include <QObject>

class MusicSence : public QObject
{
    Q_OBJECT
public:
    explicit MusicSence(QObject *parent = nullptr);

signals:

};

#endif // MUSICSENCE_H
