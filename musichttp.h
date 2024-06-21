#ifndef MUSICHTTP_H
#define MUSICHTTP_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>

class MusicHttp : public QObject
{
    Q_OBJECT
public:
    enum MusicHttpState{
        MusicHttpSucessState,
        MusicHttpErrorState
    };
    explicit MusicHttp(const QString &filename, QObject *parent = nullptr);
    void get(const QString &httpUrl);
    bool isError(void);
    QByteArray readAll(void);


public slots:
    void readData(void);
    void handleFinished(void);
    void handleError(QNetworkReply::NetworkError code);

signals:
    void readyRead();

private:
    enum MusicHttpState state;
    QString filename;
    QNetworkAccessManager *networkAccessManager;

};

#endif // MUSICHTTP_H
