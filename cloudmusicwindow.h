#ifndef CLOUDMUSICWINDOW_H
#define CLOUDMUSICWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QTextEdit>
#include "musicscene.h"
#include "musicplayer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class CloudMusicWindow; }
QT_END_NAMESPACE

class CloudMusicWindow : public QMainWindow
{
    Q_OBJECT

public:
    CloudMusicWindow(QWidget *parent = nullptr);
    ~CloudMusicWindow();
    // 插入歌曲，将歌曲插入到表头当中
    void insertNetworkMusicTable(const MusicInformation &musicInformation);
    // 初始化表头
    void initMusicTable(QTableWidget *tableWidget);
    // 播放歌曲
    void playMusic(const QStringList &urlList);
    // 歌词初始化
    void initMusicLyricTextEdit(void);
    // 事件过滤器
    bool eventFilter(QObject *watched, QEvent *event);
    // 播放下一曲
    void playTableMusic(QTableWidget *musicTable, int row);

signals:
    void searchMusic(const QString &music);

private slots:
    // 按下播放暂停按钮
    void handleMPlayerState(QMediaPlayer::State status);
    // 当按下enter键出发槽函数
    void on_searchLineEdit_returnPressed();
    // 双击歌曲名触发事件
    void on_networkMusicTable_cellDoubleClicked(int row, int column);
    // 歌曲时间更新
    void updateMusicDisplayerDuration(qint64 duration);
    // 更新进度条范围
    void updateMusicSliderRange(qint64 duration);
    // 进度条更新位置
    void updateMusicPlayPostion(qint64 position);
    // 实时定位歌曲播放位置
    void on_musicPlaySlider_sliderMoved(int position);
    // 更新歌词显示
    void updateMusicDisplayLyric(const QString &musicLyricText);
    // 切换样式
    void on_musicLyricTableButton_clicked();
    // 通过行号选择歌词
    void selectPlayLyricByLine(int line);

    void on_musicPauseOrPlay_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_nextMusicButton_clicked();

private:
    Ui::CloudMusicWindow *ui;
    MusicPlayer *musicPlayer;
    MusicScene *musicScene;
    QTableWidget *musicTable;
};
#endif // CLOUDMUSICWINDOW_H
