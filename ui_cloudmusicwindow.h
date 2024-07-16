/********************************************************************************
** Form generated from reading UI file 'cloudmusicwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUDMUSICWINDOW_H
#define UI_CLOUDMUSICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloudMusicWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QSpacerItem *verticalSpacer_9;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QPushButton *musicLyricTableButton;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_8;
    QPushButton *musicPauseOrPlay;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_10;
    QHBoxLayout *horizontalLayout;
    QLabel *playTimeLabel;
    QSpacerItem *horizontalSpacer_5;
    QSlider *musicPlaySlider;
    QSpacerItem *horizontalSpacer_6;
    QLabel *musicDurationLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *searchLineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *localMusicTable;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *networkMusicTable;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_5;
    QTextEdit *lyricTextEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CloudMusicWindow)
    {
        if (CloudMusicWindow->objectName().isEmpty())
            CloudMusicWindow->setObjectName(QString::fromUtf8("CloudMusicWindow"));
        CloudMusicWindow->resize(1040, 820);
        centralwidget = new QWidget(CloudMusicWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget {\n"
"background-image: url(:/images/background.png);}"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        verticalLayout->addWidget(graphicsView);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_9);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/images/cycle-play.png);"));

        gridLayout->addWidget(pushButton_5, 2, 0, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 3, 6, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 0, 6, 2, 1);

        verticalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 2, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 2, 5, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 2, 7, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/images/play-next.png);"));

        gridLayout->addWidget(pushButton_3, 2, 6, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 3, 2, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 3, 8, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 3, 0, 1, 1);

        musicLyricTableButton = new QPushButton(centralwidget);
        musicLyricTableButton->setObjectName(QString::fromUtf8("musicLyricTableButton"));
        sizePolicy.setHeightForWidth(musicLyricTableButton->sizePolicy().hasHeightForWidth());
        musicLyricTableButton->setSizePolicy(sizePolicy);
        musicLyricTableButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/images/default-music-list.png);\n"
"}\n"
"QPushButton[displayMode=\"musicTableMode\"]{\n"
"	border-image: url(:/images/default-music-list.png);\n"
"}\n"
"QPushButton[displayMode=\"musicLyricMode\"]{\n"
"	border-image: url(:/images/music-list.png);\n"
"}"));

        gridLayout->addWidget(musicLyricTableButton, 2, 8, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 2, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_8, 0, 8, 1, 1);

        musicPauseOrPlay = new QPushButton(centralwidget);
        musicPauseOrPlay->setObjectName(QString::fromUtf8("musicPauseOrPlay"));
        sizePolicy.setHeightForWidth(musicPauseOrPlay->sizePolicy().hasHeightForWidth());
        musicPauseOrPlay->setSizePolicy(sizePolicy);
        musicPauseOrPlay->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	border-image: url(:/images/pause.png);\n"
"}\n"
"QPushButton[state=\"musicPauseMode\"]{\n"
"	border-image: url(:/images/pause.png);\n"
"}\n"
"QPushButton[state=\"musicPlayMode\"]{\n"
"	border-image: url(:/images/play.png);\n"
"}"));

        gridLayout->addWidget(musicPauseOrPlay, 0, 4, 4, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/images/play-pri.png);"));

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);

        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 1);
        gridLayout->setColumnStretch(2, 2);
        gridLayout->setColumnStretch(3, 1);
        gridLayout->setColumnStretch(4, 4);
        gridLayout->setColumnStretch(5, 1);
        gridLayout->setColumnStretch(6, 2);
        gridLayout->setColumnStretch(7, 1);
        gridLayout->setColumnStretch(8, 2);

        verticalLayout->addLayout(gridLayout);

        verticalSpacer_10 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        playTimeLabel = new QLabel(centralwidget);
        playTimeLabel->setObjectName(QString::fromUtf8("playTimeLabel"));
        playTimeLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(playTimeLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        musicPlaySlider = new QSlider(centralwidget);
        musicPlaySlider->setObjectName(QString::fromUtf8("musicPlaySlider"));
        musicPlaySlider->setStyleSheet(QString::fromUtf8("QSlider\n"
"{\n"
"    border-color: #bcbcbc;\n"
"}\n"
"\n"
"QSlider::groove:horizontal\n"
"{                                \n"
"     border: 1px solid #999999;                             \n"
"     height: 3px;                                           \n"
"     margin: 0px 0;                                         \n"
"     left: 5px; right: 5px; \n"
" }\n"
" \n"
"QSlider::handle:horizontal\n"
"{                               \n"
"     border: 0px ;                           \n"
"     border-image: url(:/images/slider-handle.png);\n"
"     width: 15px;                                           \n"
"     margin: -7px -7px -7px -6px;                  \n"
"} \n"
"\n"
"QSlider::add-page:horizontal\n"
"{\n"
"    background:white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal\n"
"{                               \n"
"     background:red;                \n"
"}\n"
""));
        musicPlaySlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(musicPlaySlider);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        musicDurationLabel = new QLabel(centralwidget);
        musicDurationLabel->setObjectName(QString::fromUtf8("musicDurationLabel"));
        musicDurationLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(musicDurationLabel);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 8);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        verticalLayout->setStretch(0, 10);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 2);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setSpacing(10);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        searchLineEdit = new QLineEdit(page);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        sizePolicy.setHeightForWidth(searchLineEdit->sizePolicy().hasHeightForWidth());
        searchLineEdit->setSizePolicy(sizePolicy);
        searchLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit \n"
"{\n"
"    border: 2px solid gray;\n"
"    border-radius: 10px;\n"
"    padding: 0 8px;\n"
"    background: yellow;\n"
"    selection-background-color: darkgray;\n"
" }\n"
""));

        verticalLayout_4->addWidget(searchLineEdit);

        tabWidget = new QTabWidget(page);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("/* The tab widget frame */\n"
"QTabWidget::pane \n"
"{ \n"
"    border-top: 2px solid #55aaff;\n"
"    position: absolute;\n"
"    top: -0.5em;\n"
" }\n"
"\n"
" QTabWidget::tab-bar\n"
" {\n"
"     alignment: center;\n"
" }\n"
"\n"
"  /* Style the tab using the tab sub-control. Note that it reads\n"
"   QTabBar_not_ QTabWidget */\n"
"  QTabBar::tab\n"
"  {    \n"
"      background-color: rgb(85, 170, 255);\n"
"      border: 2px solid #00ff7f;\n"
"      border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"      border-top-left-radius: 4px;\n"
"      border-top-right-radius: 4px;\n"
"      min-width: 8ex;\n"
"      padding: 2px;\n"
"  }\n"
"\n"
"  QTabBar::tab:hover\n"
"  {  \n"
"      background-color: rgb(255, 0, 255);\n"
"  }\n"
"\n"
"  QTabBar::tab:selected\n"
"  {            \n"
"     background-color: rgb(255, 0, 127);\n"
"     /* same as pane color */\n"
"     border-bottom-color: rgb(85, 170, 255);\n"
"  }\n"
""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        localMusicTable = new QTableWidget(tab);
        localMusicTable->setObjectName(QString::fromUtf8("localMusicTable"));
        localMusicTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    /*\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/    \n"
"    color: rgb(0, 0, 0);\n"
"   \n"
"    /*\350\241\250\346\240\274\344\270\255\347\232\204\347\275\221\346\240\274\347\272\277\346\235\241\351\242\234\350\211\262*/    \n"
"    /*gridline-color:rgb(255, 224, 205);*/\n"
"    \n"
"    background-color: rgb(200, 200, 0);\n"
"    background-color: rgb(255, 170, 0);\n"
"        \n"
"    /*\350\256\276\347\275\256\344\272\244\346\233\277\351\242\234\350\211\262\357\274\214\351\234\200\350\246\201\345\234\250\345\207\275\346\225\260\345\261\236\346\200\247\344\270\255\350\256\276\347\275\256:\n"
"    tableWidget->setAlternatingRowColors(true)\n"
"    */\n"
"    alternate-background-color: rgb(85, 85, 255);\n"
"    selection-color:red;    /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    selection-background-color:ye"
                        "llow;   /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\350\211\262*/\n"
"    border:1px solid gray;  /*\350\276\271\346\241\206\347\272\277\347\232\204\345\256\275\345\272\246\343\200\201\351\242\234\350\211\262*/\n"
"    border:0px;    /*\345\216\273\351\231\244\350\276\271\347\225\214\347\272\277*/\n"
"    /*border-radius:5px;*/\n"
"    /*padding:10px 10px;*/  /*\350\241\250\346\240\274\344\270\216\350\276\271\346\241\206\347\232\204\351\227\264\350\267\235*/\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{               \n"
"     background-color: rgb(85, 255, 0);\n"
"     font-weight  : bold;    \n"
"     color: rgb(255, 0, 0);\n"
"     border: 0px solid;\n"
"}\n"
"\n"
"QTableWidget::Item\n"
"{\n"
"    border:0px solid rgb(255,0,0);\n"
"    border-bottom:1px solid rgb(255,0,0);\n"
"}\n"
""));

        verticalLayout_2->addWidget(localMusicTable);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        networkMusicTable = new QTableWidget(tab_2);
        if (networkMusicTable->columnCount() < 6)
            networkMusicTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        networkMusicTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        networkMusicTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        networkMusicTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        networkMusicTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        networkMusicTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        networkMusicTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        networkMusicTable->setObjectName(QString::fromUtf8("networkMusicTable"));
        networkMusicTable->setFocusPolicy(Qt::NoFocus);
        networkMusicTable->setStyleSheet(QString::fromUtf8("QTableWidget\n"
"{\n"
"    /*\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/    \n"
"    color: rgb(0, 0, 0);\n"
"   \n"
"    /*\350\241\250\346\240\274\344\270\255\347\232\204\347\275\221\346\240\274\347\272\277\346\235\241\351\242\234\350\211\262*/    \n"
"    /*gridline-color:rgb(255, 224, 205);*/\n"
"    \n"
"    background-color: rgb(200, 200, 0);\n"
"    background-color: rgb(255, 170, 0);\n"
"        \n"
"    /*\350\256\276\347\275\256\344\272\244\346\233\277\351\242\234\350\211\262\357\274\214\351\234\200\350\246\201\345\234\250\345\207\275\346\225\260\345\261\236\346\200\247\344\270\255\350\256\276\347\275\256:\n"
"    tableWidget->setAlternatingRowColors(true)\n"
"    */\n"
"    alternate-background-color: rgb(85, 85, 255);\n"
"    selection-color:red;    /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\345\211\215\346\231\257\350\211\262\357\274\232\346\226\207\345\255\227\351\242\234\350\211\262*/\n"
"    selection-background-color:ye"
                        "llow;   /*\351\274\240\346\240\207\351\200\211\344\270\255\346\227\266\350\203\214\346\231\257\350\211\262*/\n"
"    border:1px solid gray;  /*\350\276\271\346\241\206\347\272\277\347\232\204\345\256\275\345\272\246\343\200\201\351\242\234\350\211\262*/\n"
"    border:0px;    /*\345\216\273\351\231\244\350\276\271\347\225\214\347\272\277*/\n"
"    /*border-radius:5px;*/\n"
"    /*padding:10px 10px;*/  /*\350\241\250\346\240\274\344\270\216\350\276\271\346\241\206\347\232\204\351\227\264\350\267\235*/\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{               \n"
"     background-color: rgb(85, 255, 0);\n"
"     font-weight  : bold;    \n"
"     color: rgb(255, 0, 0);\n"
"     border: 0px solid;\n"
"}\n"
"\n"
"QTableWidget::Item\n"
"{\n"
"    border:0px solid rgb(255,0,0);\n"
"    border-bottom:1px solid rgb(255,0,0);\n"
"}\n"
"QTableWidget::Item:selected\n"
"{\n"
"	color: rgb(0, 255, 255);\n"
"    background-color:rgb(0, 0, 127)\n"
"}\n"
"\n"
""));
        networkMusicTable->verticalHeader()->setVisible(false);
        networkMusicTable->verticalHeader()->setHighlightSections(true);

        verticalLayout_3->addWidget(networkMusicTable);

        tabWidget->addTab(tab_2, QString());

        verticalLayout_4->addWidget(tabWidget);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 10);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	\n"
"	background-color: transparent;\n"
"}"));
        verticalLayout_5 = new QVBoxLayout(page_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lyricTextEdit = new QTextEdit(page_2);
        lyricTextEdit->setObjectName(QString::fromUtf8("lyricTextEdit"));
        lyricTextEdit->setStyleSheet(QString::fromUtf8("QTextEdit{	\n"
"	\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: transparent;\n"
"	border-style: outset;\n"
"}\n"
""));
        lyricTextEdit->setReadOnly(true);

        verticalLayout_5->addWidget(lyricTextEdit);

        stackedWidget->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidget);

        CloudMusicWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CloudMusicWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1040, 26));
        CloudMusicWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CloudMusicWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CloudMusicWindow->setStatusBar(statusbar);

        retranslateUi(CloudMusicWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CloudMusicWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CloudMusicWindow)
    {
        CloudMusicWindow->setWindowTitle(QCoreApplication::translate("CloudMusicWindow", "CloudMusicWindow", nullptr));
        pushButton_5->setText(QString());
        pushButton_3->setText(QString());
        musicLyricTableButton->setText(QString());
        musicPauseOrPlay->setText(QString());
        pushButton_2->setText(QString());
        playTimeLabel->setText(QCoreApplication::translate("CloudMusicWindow", "00:00", nullptr));
        musicDurationLabel->setText(QCoreApplication::translate("CloudMusicWindow", "04:00", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("CloudMusicWindow", "\346\234\254\345\234\260\346\255\214\346\233\262", nullptr));
        QTableWidgetItem *___qtablewidgetitem = networkMusicTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CloudMusicWindow", "mp3Url", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = networkMusicTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CloudMusicWindow", "lyricUrl", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = networkMusicTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("CloudMusicWindow", "albumUrl", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = networkMusicTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("CloudMusicWindow", "\346\255\214\346\233\262\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = networkMusicTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("CloudMusicWindow", "\344\270\223\350\276\221\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = networkMusicTable->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("CloudMusicWindow", "\346\227\266\351\225\277", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CloudMusicWindow", "\347\275\221\347\273\234\346\255\214\346\233\262", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloudMusicWindow: public Ui_CloudMusicWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUDMUSICWINDOW_H
