#ifndef MUSICITEM_H
#define MUSICITEM_H

#include <QObject>

class MusicItem : public QObject
{
    Q_OBJECT
public:
    explicit MusicItem(QObject *parent = nullptr);

signals:

};

#endif // MUSICITEM_H
