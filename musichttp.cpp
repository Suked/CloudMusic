#include "musichttp.h"
#include <QUrl>
#include <QFile>
#include <QDebug>

MusicHttp::MusicHttp(const QString &filename, QObject *parent) : QObject(parent),filename(filename)
{
    networkAccessManager = new QNetworkAccessManager(this);
    state = MusicHttp::MusicHttpSucessState;

}

void MusicHttp::get(const QString &httpUrl)
{
    if(QFile::exists(filename)){
        QFile::remove(filename);
    }

    state = MusicHttp::MusicHttpSucessState;
    QUrl url(httpUrl);
    QNetworkRequest request(url);
    QNetworkReply *reply = networkAccessManager->get(request);
    connect(reply, &QNetworkReply::readyRead, this, &MusicHttp::readData);
    connect(reply, &QNetworkReply::finished,this,&MusicHttp::handleFinished);
    connect(reply, SIGNAL(error(QNetworkReply::NetworkError)),this,SLOT(handleError(QNetworkReply::NetworkError)));
}

bool MusicHttp::isError()
{
    return state == MusicHttpState::MusicHttpSucessState ? false : true;
}

QByteArray MusicHttp::readAll()
{
    QFile file(filename);
    bool ok = file.open(QFile::ReadOnly);
    if(!ok){
        qDebug() << "fail to open for read:" << filename << ",err is " << file.errorString();
        return QByteArray();
    }
    QByteArray data = file.readAll();
    file.close();
    return data;
}

// 读取数据并写入
void MusicHttp::readData()
{
    QNetworkReply *reply = (QNetworkReply *)this->sender();
    QByteArray data = reply->readAll();
    QFile file(filename);
    bool ok = file.open(QFile::Append | QFile::WriteOnly);
    if(!ok){
        qDebug() << "fail to open for write:" << filename << ",err is " << file.errorString();
        return;
    }
    file.write(data);
    file.close();
}

// 判断请求是否发生错误
void MusicHttp::handleFinished()
{
    QNetworkReply *reply = (QNetworkReply *)this->sender();
    if(reply->error() == QNetworkReply::NoError){
        emit readyRead();
    }
    reply->deleteLater();
}

// 处理网络错误请求
void MusicHttp::handleError(QNetworkReply::NetworkError code)
{
    qDebug() << "NetWorkErro, code: " << code;
    state = MusicHttp::MusicHttpErrorState;
}
