/****************************************************************************
** Meta object code from reading C++ file 'cloudmusicwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../cloudmusicwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cloudmusicwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CloudMusicWindow_t {
    QByteArrayData data[23];
    char stringdata0[415];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CloudMusicWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CloudMusicWindow_t qt_meta_stringdata_CloudMusicWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CloudMusicWindow"
QT_MOC_LITERAL(1, 17, 11), // "searchMusic"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "music"
QT_MOC_LITERAL(4, 36, 18), // "handleMPlayerState"
QT_MOC_LITERAL(5, 55, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(6, 75, 6), // "status"
QT_MOC_LITERAL(7, 82, 31), // "on_searchLineEdit_returnPressed"
QT_MOC_LITERAL(8, 114, 38), // "on_networkMusicTable_cellDoub..."
QT_MOC_LITERAL(9, 153, 3), // "row"
QT_MOC_LITERAL(10, 157, 6), // "column"
QT_MOC_LITERAL(11, 164, 28), // "updateMusicDisplayerDuration"
QT_MOC_LITERAL(12, 193, 8), // "duration"
QT_MOC_LITERAL(13, 202, 22), // "updateMusicSliderRange"
QT_MOC_LITERAL(14, 225, 22), // "updateMusicPlayPostion"
QT_MOC_LITERAL(15, 248, 8), // "position"
QT_MOC_LITERAL(16, 257, 30), // "on_musicPlaySlider_sliderMoved"
QT_MOC_LITERAL(17, 288, 23), // "updateMusicDisplayLyric"
QT_MOC_LITERAL(18, 312, 14), // "musicLyricText"
QT_MOC_LITERAL(19, 327, 32), // "on_musicLyricTableButton_clicked"
QT_MOC_LITERAL(20, 360, 21), // "selectPlayLyricByLine"
QT_MOC_LITERAL(21, 382, 4), // "line"
QT_MOC_LITERAL(22, 387, 27) // "on_musicPauseOrPlay_clicked"

    },
    "CloudMusicWindow\0searchMusic\0\0music\0"
    "handleMPlayerState\0QMediaPlayer::State\0"
    "status\0on_searchLineEdit_returnPressed\0"
    "on_networkMusicTable_cellDoubleClicked\0"
    "row\0column\0updateMusicDisplayerDuration\0"
    "duration\0updateMusicSliderRange\0"
    "updateMusicPlayPostion\0position\0"
    "on_musicPlaySlider_sliderMoved\0"
    "updateMusicDisplayLyric\0musicLyricText\0"
    "on_musicLyricTableButton_clicked\0"
    "selectPlayLyricByLine\0line\0"
    "on_musicPauseOrPlay_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CloudMusicWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   77,    2, 0x08 /* Private */,
       7,    0,   80,    2, 0x08 /* Private */,
       8,    2,   81,    2, 0x08 /* Private */,
      11,    1,   86,    2, 0x08 /* Private */,
      13,    1,   89,    2, 0x08 /* Private */,
      14,    1,   92,    2, 0x08 /* Private */,
      16,    1,   95,    2, 0x08 /* Private */,
      17,    1,   98,    2, 0x08 /* Private */,
      19,    0,  101,    2, 0x08 /* Private */,
      20,    1,  102,    2, 0x08 /* Private */,
      22,    0,  105,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void, QMetaType::LongLong,   12,
    QMetaType::Void, QMetaType::LongLong,   15,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

       0        // eod
};

void CloudMusicWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CloudMusicWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->handleMPlayerState((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 2: _t->on_searchLineEdit_returnPressed(); break;
        case 3: _t->on_networkMusicTable_cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->updateMusicDisplayerDuration((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->updateMusicSliderRange((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 6: _t->updateMusicPlayPostion((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->on_musicPlaySlider_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateMusicDisplayLyric((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_musicLyricTableButton_clicked(); break;
        case 10: _t->selectPlayLyricByLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_musicPauseOrPlay_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CloudMusicWindow::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CloudMusicWindow::searchMusic)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CloudMusicWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CloudMusicWindow.data,
    qt_meta_data_CloudMusicWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CloudMusicWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CloudMusicWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CloudMusicWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CloudMusicWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void CloudMusicWindow::searchMusic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
