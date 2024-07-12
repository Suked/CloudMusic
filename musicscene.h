#ifndef MUSICSENCE_H
#define MUSICSENCE_H

#include <QObject>
#include <QGraphicsScene>
#include "musicitem.h"
#include <QTimer>

class MusicScene : public QObject
{
    Q_OBJECT
public:
    explicit MusicScene(QObject *parent = nullptr);
    QGraphicsScene *getScene() const;
    void setMusicSceneRect(const QRectF &rect);
    void startAnimation(void);
    void pauseAnimation(void);
    void resumeAnimation(void);

public slots:
    void updateDiskImage(const QImage &image);

signals:

private:
    QTimer *timer;
    QGraphicsScene *scene;
    MusicItem *diskItem;
    MusicItem *needleItem;

};

#endif // MUSICSENCE_H
