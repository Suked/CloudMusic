#include "cloudmusicwindow.h"
#include "ui_cloudmusicwindow.h"
#include "musichttp.h"
#include "musicsearch.h"
#include "musichttpurl.h"
#include <QTime>

void CloudMusicWindow::insertNetworkMusicTable(const MusicInformation &musicInformation)
{
    // 获取当前行
    int lineNumber = ui->networkMusicTable->rowCount();
    // 插入一个空白行
    ui->networkMusicTable->insertRow(lineNumber);
    // 在第一行0插入mp3Url,以此类推
    QString mp3Url = MusicHttpUrl::getMusicHttpUrlObject()->getMusicMp3Url(musicInformation);
    ui->networkMusicTable->setItem(lineNumber,0,new QTableWidgetItem(mp3Url));
    QString lyricUrl = MusicHttpUrl::getMusicHttpUrlObject()->getMusicLyricUrl(musicInformation);
    ui->networkMusicTable->setItem(lineNumber,1,new QTableWidgetItem(lyricUrl));
    QString albumUrl = MusicHttpUrl::getMusicHttpUrlObject()->getMusicAlbumUrl(musicInformation);
    ui->networkMusicTable->setItem(lineNumber,2,new QTableWidgetItem(albumUrl));
    ui->networkMusicTable->setItem(lineNumber,3,new QTableWidgetItem(musicInformation.getMusicName()));
    ui->networkMusicTable->setItem(lineNumber,4,new QTableWidgetItem(musicInformation.getAlbumName()));
    // 毫秒转成分钟秒形式
    qint32 musicDuration = musicInformation.getMusicDuration();
    QTime time = QTime::fromMSecsSinceStartOfDay(musicDuration * 1000);
    ui->networkMusicTable->setItem(lineNumber,5,new QTableWidgetItem(time.toString("mm:ss")));
}

// 搜索初始化歌曲列表
void CloudMusicWindow::initMusicTable(QTableWidget *tableWidget)
{
    tableWidget->hideColumn(0);
    tableWidget->hideColumn(1);
    tableWidget->hideColumn(2);
    // 设置高度
    tableWidget->horizontalHeader()->setFixedHeight(50);
    // 每次选择一行
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    // 设置表格不可编辑
    tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // 窗体自适应
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

// 音乐播放
void CloudMusicWindow::playMusic(const QStringList &urlList)
{
    musicPlayer->playMusic(urlList);
}

// 构造函数
CloudMusicWindow::CloudMusicWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CloudMusicWindow)
{
    ui->setupUi(this);

    musicPlayer = new MusicPlayer(this);
    // 搜索歌曲信息
    connect(this,&CloudMusicWindow::searchMusic,musicPlayer,&MusicPlayer::searchMusic);
    // 初始化表格
    initMusicTable(ui->networkMusicTable);
    // 添加歌曲名到表格
    connect(musicPlayer, &MusicPlayer::musicInformationReady,this,&CloudMusicWindow::insertNetworkMusicTable);
    // 设置歌曲时间
    connect(musicPlayer, &MusicPlayer::durationChanged,this,&CloudMusicWindow::updateMusicDisplayerDuration);
    // 设置进度条时间范围
    connect(musicPlayer, &MusicPlayer::durationChanged,this,&CloudMusicWindow::updateMusicSliderRange);
    // 更新进度条位置
    connect(musicPlayer, &MusicPlayer::positionChanged,this,&CloudMusicWindow::updateMusicPlayPostion);
    // 歌词解析完毕
    connect(musicPlayer, &MusicPlayer::musicLyricReady,this,&CloudMusicWindow::updateMusicDisplayLyric);
}

CloudMusicWindow::~CloudMusicWindow()
{
    delete ui;
}


void CloudMusicWindow::on_searchLineEdit_returnPressed()
{
    QString music = ui->searchLineEdit->text();
    if(music.isEmpty()){
        return;
    }
    ui->networkMusicTable->setRowCount(0);
    ui->networkMusicTable->clearContents();
    emit searchMusic(music);
}

// 双击歌曲名开始播放
void CloudMusicWindow::on_networkMusicTable_cellDoubleClicked(int row, int column)
{
    QString mp3Url = ui->networkMusicTable->item(row,0)->text();
    QString lyricUrl = ui->networkMusicTable->item(row,1)->text();
    QString albumUrl = ui->networkMusicTable->item(row,2)->text();
    QStringList urlList;
    urlList << mp3Url << lyricUrl << albumUrl;
    playMusic(urlList);
    for(QString item : urlList){
        qDebug() << "item: " << item;
    }
//    qDebug() << "mp3Url: " << mp3Url;
//    qDebug() << "lyricUrl: " << lyricUrl;
//    qDebug() << "albumUrl: " << albumUrl;
}

// 歌曲更新
void CloudMusicWindow::updateMusicDisplayerDuration(qint64 duration)
{
    QTime time = QTime::fromMSecsSinceStartOfDay(duration);
    ui->musicDurationLabel->setText(time.toString("mm:ss"));
}

// 歌曲进度条更新
void CloudMusicWindow::updateMusicSliderRange(qint64 duration)
{
    ui->musicPlaySlider->setMinimum(0);
    ui->musicPlaySlider->setMaximum(duration);
}

// 歌曲进度条定位
void CloudMusicWindow::updateMusicPlayPostion(qint64 position)
{
    ui->musicPlaySlider->setValue(position);
    QTime time = QTime::fromMSecsSinceStartOfDay(position);
    ui->playTimeLabel->setText(time.toString("mm:ss"));
}

// 进度条移动时歌曲定位
void CloudMusicWindow::on_musicPlaySlider_sliderMoved(int position)
{
    musicPlayer->setPosition(position);
}

// 歌词显示
void CloudMusicWindow::updateMusicDisplayLyric(const QString &musicLyricText)
{
    ui->lyricTextEdit->setText(musicLyricText);
}

void CloudMusicWindow::on_musicLyricTableButton_clicked()
{
    int currentIndex = ui->stackedWidget->currentIndex();
    ui->stackedWidget->setCurrentIndex(!currentIndex);
    if(ui->stackedWidget->currentIndex() == 0){
        ui->musicLyricTableButton->setProperty("displayMode", "musicTableMode");
    }else{
        ui->musicLyricTableButton->setProperty("displayMode", "musicLyricMode");
    }
    // 清除样式
    ui->musicLyricTableButton->style()->unpolish(ui->musicLyricTableButton);
    ui->musicLyricTableButton->style()->polish(ui->musicLyricTableButton);
    // 更新样式
    ui->musicLyricTableButton->update();

    return;
}
