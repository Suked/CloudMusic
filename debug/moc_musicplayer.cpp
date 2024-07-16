/****************************************************************************
** Meta object code from reading C++ file 'musicplayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../musicplayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MusicPlayer_t {
    QByteArrayData data[15];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MusicPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MusicPlayer_t qt_meta_stringdata_MusicPlayer = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MusicPlayer"
QT_MOC_LITERAL(1, 12, 21), // "musicInformationReady"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 16), // "MusicInformation"
QT_MOC_LITERAL(4, 52, 15), // "musicInfomation"
QT_MOC_LITERAL(5, 68, 15), // "musicLyricReady"
QT_MOC_LITERAL(6, 84, 14), // "musicLyricText"
QT_MOC_LITERAL(7, 99, 20), // "playLyricLineChanged"
QT_MOC_LITERAL(8, 120, 4), // "line"
QT_MOC_LITERAL(9, 125, 15), // "musicAlbumReady"
QT_MOC_LITERAL(10, 141, 10), // "albumImage"
QT_MOC_LITERAL(11, 152, 11), // "searchMusic"
QT_MOC_LITERAL(12, 164, 5), // "music"
QT_MOC_LITERAL(13, 170, 24), // "queryPlayLyricLineByTime"
QT_MOC_LITERAL(14, 195, 4) // "time"

    },
    "MusicPlayer\0musicInformationReady\0\0"
    "MusicInformation\0musicInfomation\0"
    "musicLyricReady\0musicLyricText\0"
    "playLyricLineChanged\0line\0musicAlbumReady\0"
    "albumImage\0searchMusic\0music\0"
    "queryPlayLyricLineByTime\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MusicPlayer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   56,    2, 0x0a /* Public */,
      13,    1,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QImage,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::LongLong,   14,

       0        // eod
};

void MusicPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MusicPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->musicInformationReady((*reinterpret_cast< const MusicInformation(*)>(_a[1]))); break;
        case 1: _t->musicLyricReady((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->playLyricLineChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->musicAlbumReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 4: _t->searchMusic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->queryPlayLyricLineByTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MusicPlayer::*)(const MusicInformation & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MusicPlayer::musicInformationReady)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MusicPlayer::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MusicPlayer::musicLyricReady)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MusicPlayer::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MusicPlayer::playLyricLineChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MusicPlayer::*)(const QImage & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MusicPlayer::musicAlbumReady)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MusicPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QMediaPlayer::staticMetaObject>(),
    qt_meta_stringdata_MusicPlayer.data,
    qt_meta_data_MusicPlayer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MusicPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MusicPlayer.stringdata0))
        return static_cast<void*>(this);
    return QMediaPlayer::qt_metacast(_clname);
}

int MusicPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMediaPlayer::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void MusicPlayer::musicInformationReady(const MusicInformation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MusicPlayer::musicLyricReady(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MusicPlayer::playLyricLineChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MusicPlayer::musicAlbumReady(const QImage & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
