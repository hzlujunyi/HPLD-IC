/****************************************************************************
** Meta object code from reading C++ file 'streamingpreferences.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.0.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../moonlight-qt/app/settings/streamingpreferences.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streamingpreferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.0.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StreamingPreferences_t {
    const uint offsetsAndSize[204];
    char stringdata0[1618];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_StreamingPreferences_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_StreamingPreferences_t qt_meta_stringdata_StreamingPreferences = {
    {
QT_MOC_LITERAL(0, 20), // "StreamingPreferences"
QT_MOC_LITERAL(21, 18), // "displayModeChanged"
QT_MOC_LITERAL(40, 0), // ""
QT_MOC_LITERAL(41, 14), // "bitrateChanged"
QT_MOC_LITERAL(56, 18), // "enableVsyncChanged"
QT_MOC_LITERAL(75, 24), // "gameOptimizationsChanged"
QT_MOC_LITERAL(100, 22), // "playAudioOnHostChanged"
QT_MOC_LITERAL(123, 22), // "multiControllerChanged"
QT_MOC_LITERAL(146, 21), // "unsupportedFpsChanged"
QT_MOC_LITERAL(168, 17), // "enableMdnsChanged"
QT_MOC_LITERAL(186, 19), // "quitAppAfterChanged"
QT_MOC_LITERAL(206, 24), // "absoluteMouseModeChanged"
QT_MOC_LITERAL(231, 24), // "absoluteTouchModeChanged"
QT_MOC_LITERAL(256, 18), // "audioConfigChanged"
QT_MOC_LITERAL(275, 23), // "videoCodecConfigChanged"
QT_MOC_LITERAL(299, 28), // "videoDecoderSelectionChanged"
QT_MOC_LITERAL(328, 20), // "uiDisplayModeChanged"
QT_MOC_LITERAL(349, 17), // "windowModeChanged"
QT_MOC_LITERAL(367, 18), // "framePacingChanged"
QT_MOC_LITERAL(386, 25), // "connectionWarningsChanged"
QT_MOC_LITERAL(412, 19), // "richPresenceChanged"
QT_MOC_LITERAL(432, 19), // "gamepadMouseChanged"
QT_MOC_LITERAL(452, 28), // "detectNetworkBlockingChanged"
QT_MOC_LITERAL(481, 19), // "mouseButtonsChanged"
QT_MOC_LITERAL(501, 22), // "muteOnFocusLossChanged"
QT_MOC_LITERAL(524, 24), // "backgroundGamepadChanged"
QT_MOC_LITERAL(549, 29), // "reverseScrollDirectionChanged"
QT_MOC_LITERAL(579, 22), // "swapFaceButtonsChanged"
QT_MOC_LITERAL(602, 25), // "captureSysKeysModeChanged"
QT_MOC_LITERAL(628, 15), // "languageChanged"
QT_MOC_LITERAL(644, 17), // "getDefaultBitrate"
QT_MOC_LITERAL(662, 5), // "width"
QT_MOC_LITERAL(668, 6), // "height"
QT_MOC_LITERAL(675, 3), // "fps"
QT_MOC_LITERAL(679, 4), // "save"
QT_MOC_LITERAL(684, 11), // "retranslate"
QT_MOC_LITERAL(696, 11), // "bitrateKbps"
QT_MOC_LITERAL(708, 11), // "enableVsync"
QT_MOC_LITERAL(720, 17), // "gameOptimizations"
QT_MOC_LITERAL(738, 15), // "playAudioOnHost"
QT_MOC_LITERAL(754, 15), // "multiController"
QT_MOC_LITERAL(770, 14), // "unsupportedFps"
QT_MOC_LITERAL(785, 10), // "enableMdns"
QT_MOC_LITERAL(796, 12), // "quitAppAfter"
QT_MOC_LITERAL(809, 17), // "absoluteMouseMode"
QT_MOC_LITERAL(827, 17), // "absoluteTouchMode"
QT_MOC_LITERAL(845, 11), // "framePacing"
QT_MOC_LITERAL(857, 18), // "connectionWarnings"
QT_MOC_LITERAL(876, 12), // "richPresence"
QT_MOC_LITERAL(889, 12), // "gamepadMouse"
QT_MOC_LITERAL(902, 21), // "detectNetworkBlocking"
QT_MOC_LITERAL(924, 11), // "audioConfig"
QT_MOC_LITERAL(936, 11), // "AudioConfig"
QT_MOC_LITERAL(948, 16), // "videoCodecConfig"
QT_MOC_LITERAL(965, 16), // "VideoCodecConfig"
QT_MOC_LITERAL(982, 21), // "videoDecoderSelection"
QT_MOC_LITERAL(1004, 21), // "VideoDecoderSelection"
QT_MOC_LITERAL(1026, 10), // "windowMode"
QT_MOC_LITERAL(1037, 10), // "WindowMode"
QT_MOC_LITERAL(1048, 25), // "recommendedFullScreenMode"
QT_MOC_LITERAL(1074, 13), // "uiDisplayMode"
QT_MOC_LITERAL(1088, 13), // "UIDisplayMode"
QT_MOC_LITERAL(1102, 16), // "swapMouseButtons"
QT_MOC_LITERAL(1119, 15), // "muteOnFocusLoss"
QT_MOC_LITERAL(1135, 17), // "backgroundGamepad"
QT_MOC_LITERAL(1153, 22), // "reverseScrollDirection"
QT_MOC_LITERAL(1176, 15), // "swapFaceButtons"
QT_MOC_LITERAL(1192, 18), // "captureSysKeysMode"
QT_MOC_LITERAL(1211, 18), // "CaptureSysKeysMode"
QT_MOC_LITERAL(1230, 8), // "language"
QT_MOC_LITERAL(1239, 8), // "Language"
QT_MOC_LITERAL(1248, 9), // "AC_STEREO"
QT_MOC_LITERAL(1258, 14), // "AC_51_SURROUND"
QT_MOC_LITERAL(1273, 14), // "AC_71_SURROUND"
QT_MOC_LITERAL(1288, 8), // "VCC_AUTO"
QT_MOC_LITERAL(1297, 14), // "VCC_FORCE_H264"
QT_MOC_LITERAL(1312, 14), // "VCC_FORCE_HEVC"
QT_MOC_LITERAL(1327, 18), // "VCC_FORCE_HEVC_HDR"
QT_MOC_LITERAL(1346, 8), // "VDS_AUTO"
QT_MOC_LITERAL(1355, 18), // "VDS_FORCE_HARDWARE"
QT_MOC_LITERAL(1374, 18), // "VDS_FORCE_SOFTWARE"
QT_MOC_LITERAL(1393, 13), // "WM_FULLSCREEN"
QT_MOC_LITERAL(1407, 21), // "WM_FULLSCREEN_DESKTOP"
QT_MOC_LITERAL(1429, 11), // "WM_WINDOWED"
QT_MOC_LITERAL(1441, 11), // "UI_WINDOWED"
QT_MOC_LITERAL(1453, 12), // "UI_MAXIMIZED"
QT_MOC_LITERAL(1466, 13), // "UI_FULLSCREEN"
QT_MOC_LITERAL(1480, 9), // "LANG_AUTO"
QT_MOC_LITERAL(1490, 7), // "LANG_EN"
QT_MOC_LITERAL(1498, 7), // "LANG_FR"
QT_MOC_LITERAL(1506, 10), // "LANG_ZH_CN"
QT_MOC_LITERAL(1517, 7), // "LANG_DE"
QT_MOC_LITERAL(1525, 10), // "LANG_NB_NO"
QT_MOC_LITERAL(1536, 7), // "LANG_RU"
QT_MOC_LITERAL(1544, 7), // "LANG_ES"
QT_MOC_LITERAL(1552, 7), // "LANG_JA"
QT_MOC_LITERAL(1560, 7), // "LANG_VI"
QT_MOC_LITERAL(1568, 7), // "LANG_TH"
QT_MOC_LITERAL(1576, 7), // "LANG_KO"
QT_MOC_LITERAL(1584, 7), // "CSK_OFF"
QT_MOC_LITERAL(1592, 14), // "CSK_FULLSCREEN"
QT_MOC_LITERAL(1607, 10) // "CSK_ALWAYS"

    },
    "StreamingPreferences\0displayModeChanged\0"
    "\0bitrateChanged\0enableVsyncChanged\0"
    "gameOptimizationsChanged\0"
    "playAudioOnHostChanged\0multiControllerChanged\0"
    "unsupportedFpsChanged\0enableMdnsChanged\0"
    "quitAppAfterChanged\0absoluteMouseModeChanged\0"
    "absoluteTouchModeChanged\0audioConfigChanged\0"
    "videoCodecConfigChanged\0"
    "videoDecoderSelectionChanged\0"
    "uiDisplayModeChanged\0windowModeChanged\0"
    "framePacingChanged\0connectionWarningsChanged\0"
    "richPresenceChanged\0gamepadMouseChanged\0"
    "detectNetworkBlockingChanged\0"
    "mouseButtonsChanged\0muteOnFocusLossChanged\0"
    "backgroundGamepadChanged\0"
    "reverseScrollDirectionChanged\0"
    "swapFaceButtonsChanged\0captureSysKeysModeChanged\0"
    "languageChanged\0getDefaultBitrate\0"
    "width\0height\0fps\0save\0retranslate\0"
    "bitrateKbps\0enableVsync\0gameOptimizations\0"
    "playAudioOnHost\0multiController\0"
    "unsupportedFps\0enableMdns\0quitAppAfter\0"
    "absoluteMouseMode\0absoluteTouchMode\0"
    "framePacing\0connectionWarnings\0"
    "richPresence\0gamepadMouse\0"
    "detectNetworkBlocking\0audioConfig\0"
    "AudioConfig\0videoCodecConfig\0"
    "VideoCodecConfig\0videoDecoderSelection\0"
    "VideoDecoderSelection\0windowMode\0"
    "WindowMode\0recommendedFullScreenMode\0"
    "uiDisplayMode\0UIDisplayMode\0"
    "swapMouseButtons\0muteOnFocusLoss\0"
    "backgroundGamepad\0reverseScrollDirection\0"
    "swapFaceButtons\0captureSysKeysMode\0"
    "CaptureSysKeysMode\0language\0Language\0"
    "AC_STEREO\0AC_51_SURROUND\0AC_71_SURROUND\0"
    "VCC_AUTO\0VCC_FORCE_H264\0VCC_FORCE_HEVC\0"
    "VCC_FORCE_HEVC_HDR\0VDS_AUTO\0"
    "VDS_FORCE_HARDWARE\0VDS_FORCE_SOFTWARE\0"
    "WM_FULLSCREEN\0WM_FULLSCREEN_DESKTOP\0"
    "WM_WINDOWED\0UI_WINDOWED\0UI_MAXIMIZED\0"
    "UI_FULLSCREEN\0LANG_AUTO\0LANG_EN\0LANG_FR\0"
    "LANG_ZH_CN\0LANG_DE\0LANG_NB_NO\0LANG_RU\0"
    "LANG_ES\0LANG_JA\0LANG_VI\0LANG_TH\0LANG_KO\0"
    "CSK_OFF\0CSK_FULLSCREEN\0CSK_ALWAYS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StreamingPreferences[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
      31,  237, // properties
       7,  392, // enums/sets
       0,    0, // constructors
       0,       // flags
      28,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  200,    2, 0x06,   31 /* Public */,
       3,    0,  201,    2, 0x06,   32 /* Public */,
       4,    0,  202,    2, 0x06,   33 /* Public */,
       5,    0,  203,    2, 0x06,   34 /* Public */,
       6,    0,  204,    2, 0x06,   35 /* Public */,
       7,    0,  205,    2, 0x06,   36 /* Public */,
       8,    0,  206,    2, 0x06,   37 /* Public */,
       9,    0,  207,    2, 0x06,   38 /* Public */,
      10,    0,  208,    2, 0x06,   39 /* Public */,
      11,    0,  209,    2, 0x06,   40 /* Public */,
      12,    0,  210,    2, 0x06,   41 /* Public */,
      13,    0,  211,    2, 0x06,   42 /* Public */,
      14,    0,  212,    2, 0x06,   43 /* Public */,
      15,    0,  213,    2, 0x06,   44 /* Public */,
      16,    0,  214,    2, 0x06,   45 /* Public */,
      17,    0,  215,    2, 0x06,   46 /* Public */,
      18,    0,  216,    2, 0x06,   47 /* Public */,
      19,    0,  217,    2, 0x06,   48 /* Public */,
      20,    0,  218,    2, 0x06,   49 /* Public */,
      21,    0,  219,    2, 0x06,   50 /* Public */,
      22,    0,  220,    2, 0x06,   51 /* Public */,
      23,    0,  221,    2, 0x06,   52 /* Public */,
      24,    0,  222,    2, 0x06,   53 /* Public */,
      25,    0,  223,    2, 0x06,   54 /* Public */,
      26,    0,  224,    2, 0x06,   55 /* Public */,
      27,    0,  225,    2, 0x06,   56 /* Public */,
      28,    0,  226,    2, 0x06,   57 /* Public */,
      29,    0,  227,    2, 0x06,   58 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      30,    3,  228,    2, 0x02,   59 /* Public */,
      34,    0,  235,    2, 0x02,   63 /* Public */,
      35,    0,  236,    2, 0x02,   64 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   31,   32,   33,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
      31, QMetaType::Int, 0x00015003, uint(0), 0,
      32, QMetaType::Int, 0x00015003, uint(0), 0,
      33, QMetaType::Int, 0x00015003, uint(0), 0,
      36, QMetaType::Int, 0x00015003, uint(1), 0,
      37, QMetaType::Bool, 0x00015003, uint(2), 0,
      38, QMetaType::Bool, 0x00015003, uint(3), 0,
      39, QMetaType::Bool, 0x00015003, uint(4), 0,
      40, QMetaType::Bool, 0x00015003, uint(5), 0,
      41, QMetaType::Bool, 0x00015003, uint(6), 0,
      42, QMetaType::Bool, 0x00015003, uint(7), 0,
      43, QMetaType::Bool, 0x00015003, uint(8), 0,
      44, QMetaType::Bool, 0x00015003, uint(9), 0,
      45, QMetaType::Bool, 0x00015003, uint(10), 0,
      46, QMetaType::Bool, 0x00015003, uint(16), 0,
      47, QMetaType::Bool, 0x00015003, uint(17), 0,
      48, QMetaType::Bool, 0x00015003, uint(18), 0,
      49, QMetaType::Bool, 0x00015003, uint(19), 0,
      50, QMetaType::Bool, 0x00015003, uint(20), 0,
      51, 0x80000000 | 52, 0x0001500b, uint(11), 0,
      53, 0x80000000 | 54, 0x0001500b, uint(12), 0,
      55, 0x80000000 | 56, 0x0001500b, uint(13), 0,
      57, 0x80000000 | 58, 0x0001500b, uint(15), 0,
      59, 0x80000000 | 58, 0x00015409, uint(-1), 0,
      60, 0x80000000 | 61, 0x0001500b, uint(14), 0,
      62, QMetaType::Bool, 0x00015003, uint(21), 0,
      63, QMetaType::Bool, 0x00015003, uint(22), 0,
      64, QMetaType::Bool, 0x00015003, uint(23), 0,
      65, QMetaType::Bool, 0x00015003, uint(24), 0,
      66, QMetaType::Bool, 0x00015003, uint(25), 0,
      67, 0x80000000 | 68, 0x0001500b, uint(26), 0,
      69, 0x80000000 | 70, 0x0001500b, uint(27), 0,

 // enums: name, alias, flags, count, data
      52,   52, 0x0,    3,  427,
      54,   54, 0x0,    4,  433,
      56,   56, 0x0,    3,  441,
      58,   58, 0x0,    3,  447,
      61,   61, 0x0,    3,  453,
      70,   70, 0x0,   12,  459,
      68,   68, 0x0,    3,  483,

 // enum data: key, value
      71, uint(StreamingPreferences::AC_STEREO),
      72, uint(StreamingPreferences::AC_51_SURROUND),
      73, uint(StreamingPreferences::AC_71_SURROUND),
      74, uint(StreamingPreferences::VCC_AUTO),
      75, uint(StreamingPreferences::VCC_FORCE_H264),
      76, uint(StreamingPreferences::VCC_FORCE_HEVC),
      77, uint(StreamingPreferences::VCC_FORCE_HEVC_HDR),
      78, uint(StreamingPreferences::VDS_AUTO),
      79, uint(StreamingPreferences::VDS_FORCE_HARDWARE),
      80, uint(StreamingPreferences::VDS_FORCE_SOFTWARE),
      81, uint(StreamingPreferences::WM_FULLSCREEN),
      82, uint(StreamingPreferences::WM_FULLSCREEN_DESKTOP),
      83, uint(StreamingPreferences::WM_WINDOWED),
      84, uint(StreamingPreferences::UI_WINDOWED),
      85, uint(StreamingPreferences::UI_MAXIMIZED),
      86, uint(StreamingPreferences::UI_FULLSCREEN),
      87, uint(StreamingPreferences::LANG_AUTO),
      88, uint(StreamingPreferences::LANG_EN),
      89, uint(StreamingPreferences::LANG_FR),
      90, uint(StreamingPreferences::LANG_ZH_CN),
      91, uint(StreamingPreferences::LANG_DE),
      92, uint(StreamingPreferences::LANG_NB_NO),
      93, uint(StreamingPreferences::LANG_RU),
      94, uint(StreamingPreferences::LANG_ES),
      95, uint(StreamingPreferences::LANG_JA),
      96, uint(StreamingPreferences::LANG_VI),
      97, uint(StreamingPreferences::LANG_TH),
      98, uint(StreamingPreferences::LANG_KO),
      99, uint(StreamingPreferences::CSK_OFF),
     100, uint(StreamingPreferences::CSK_FULLSCREEN),
     101, uint(StreamingPreferences::CSK_ALWAYS),

       0        // eod
};

void StreamingPreferences::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StreamingPreferences *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->displayModeChanged(); break;
        case 1: _t->bitrateChanged(); break;
        case 2: _t->enableVsyncChanged(); break;
        case 3: _t->gameOptimizationsChanged(); break;
        case 4: _t->playAudioOnHostChanged(); break;
        case 5: _t->multiControllerChanged(); break;
        case 6: _t->unsupportedFpsChanged(); break;
        case 7: _t->enableMdnsChanged(); break;
        case 8: _t->quitAppAfterChanged(); break;
        case 9: _t->absoluteMouseModeChanged(); break;
        case 10: _t->absoluteTouchModeChanged(); break;
        case 11: _t->audioConfigChanged(); break;
        case 12: _t->videoCodecConfigChanged(); break;
        case 13: _t->videoDecoderSelectionChanged(); break;
        case 14: _t->uiDisplayModeChanged(); break;
        case 15: _t->windowModeChanged(); break;
        case 16: _t->framePacingChanged(); break;
        case 17: _t->connectionWarningsChanged(); break;
        case 18: _t->richPresenceChanged(); break;
        case 19: _t->gamepadMouseChanged(); break;
        case 20: _t->detectNetworkBlockingChanged(); break;
        case 21: _t->mouseButtonsChanged(); break;
        case 22: _t->muteOnFocusLossChanged(); break;
        case 23: _t->backgroundGamepadChanged(); break;
        case 24: _t->reverseScrollDirectionChanged(); break;
        case 25: _t->swapFaceButtonsChanged(); break;
        case 26: _t->captureSysKeysModeChanged(); break;
        case 27: _t->languageChanged(); break;
        case 28: { int _r = _t->getDefaultBitrate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->save(); break;
        case 30: { bool _r = _t->retranslate();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::displayModeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::bitrateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::enableVsyncChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::gameOptimizationsChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::playAudioOnHostChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::multiControllerChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::unsupportedFpsChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::enableMdnsChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::quitAppAfterChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::absoluteMouseModeChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::absoluteTouchModeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::audioConfigChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::videoCodecConfigChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::videoDecoderSelectionChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::uiDisplayModeChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::windowModeChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::framePacingChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::connectionWarningsChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::richPresenceChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::gamepadMouseChanged)) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::detectNetworkBlockingChanged)) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::mouseButtonsChanged)) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::muteOnFocusLossChanged)) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::backgroundGamepadChanged)) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::reverseScrollDirectionChanged)) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::swapFaceButtonsChanged)) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::captureSysKeysModeChanged)) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (StreamingPreferences::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StreamingPreferences::languageChanged)) {
                *result = 27;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<StreamingPreferences *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->width; break;
        case 1: *reinterpret_cast< int*>(_v) = _t->height; break;
        case 2: *reinterpret_cast< int*>(_v) = _t->fps; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->bitrateKbps; break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enableVsync; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->gameOptimizations; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->playAudioOnHost; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->multiController; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->unsupportedFps; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->enableMdns; break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->quitAppAfter; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->absoluteMouseMode; break;
        case 12: *reinterpret_cast< bool*>(_v) = _t->absoluteTouchMode; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->framePacing; break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->connectionWarnings; break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->richPresence; break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->gamepadMouse; break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->detectNetworkBlocking; break;
        case 18: *reinterpret_cast< AudioConfig*>(_v) = _t->audioConfig; break;
        case 19: *reinterpret_cast< VideoCodecConfig*>(_v) = _t->videoCodecConfig; break;
        case 20: *reinterpret_cast< VideoDecoderSelection*>(_v) = _t->videoDecoderSelection; break;
        case 21: *reinterpret_cast< WindowMode*>(_v) = _t->windowMode; break;
        case 22: *reinterpret_cast< WindowMode*>(_v) = _t->recommendedFullScreenMode; break;
        case 23: *reinterpret_cast< UIDisplayMode*>(_v) = _t->uiDisplayMode; break;
        case 24: *reinterpret_cast< bool*>(_v) = _t->swapMouseButtons; break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->muteOnFocusLoss; break;
        case 26: *reinterpret_cast< bool*>(_v) = _t->backgroundGamepad; break;
        case 27: *reinterpret_cast< bool*>(_v) = _t->reverseScrollDirection; break;
        case 28: *reinterpret_cast< bool*>(_v) = _t->swapFaceButtons; break;
        case 29: *reinterpret_cast< CaptureSysKeysMode*>(_v) = _t->captureSysKeysMode; break;
        case 30: *reinterpret_cast< Language*>(_v) = _t->language; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<StreamingPreferences *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->width != *reinterpret_cast< int*>(_v)) {
                _t->width = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->displayModeChanged();
            }
            break;
        case 1:
            if (_t->height != *reinterpret_cast< int*>(_v)) {
                _t->height = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->displayModeChanged();
            }
            break;
        case 2:
            if (_t->fps != *reinterpret_cast< int*>(_v)) {
                _t->fps = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->displayModeChanged();
            }
            break;
        case 3:
            if (_t->bitrateKbps != *reinterpret_cast< int*>(_v)) {
                _t->bitrateKbps = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->bitrateChanged();
            }
            break;
        case 4:
            if (_t->enableVsync != *reinterpret_cast< bool*>(_v)) {
                _t->enableVsync = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->enableVsyncChanged();
            }
            break;
        case 5:
            if (_t->gameOptimizations != *reinterpret_cast< bool*>(_v)) {
                _t->gameOptimizations = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->gameOptimizationsChanged();
            }
            break;
        case 6:
            if (_t->playAudioOnHost != *reinterpret_cast< bool*>(_v)) {
                _t->playAudioOnHost = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->playAudioOnHostChanged();
            }
            break;
        case 7:
            if (_t->multiController != *reinterpret_cast< bool*>(_v)) {
                _t->multiController = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->multiControllerChanged();
            }
            break;
        case 8:
            if (_t->unsupportedFps != *reinterpret_cast< bool*>(_v)) {
                _t->unsupportedFps = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->unsupportedFpsChanged();
            }
            break;
        case 9:
            if (_t->enableMdns != *reinterpret_cast< bool*>(_v)) {
                _t->enableMdns = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->enableMdnsChanged();
            }
            break;
        case 10:
            if (_t->quitAppAfter != *reinterpret_cast< bool*>(_v)) {
                _t->quitAppAfter = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->quitAppAfterChanged();
            }
            break;
        case 11:
            if (_t->absoluteMouseMode != *reinterpret_cast< bool*>(_v)) {
                _t->absoluteMouseMode = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->absoluteMouseModeChanged();
            }
            break;
        case 12:
            if (_t->absoluteTouchMode != *reinterpret_cast< bool*>(_v)) {
                _t->absoluteTouchMode = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->absoluteTouchModeChanged();
            }
            break;
        case 13:
            if (_t->framePacing != *reinterpret_cast< bool*>(_v)) {
                _t->framePacing = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->framePacingChanged();
            }
            break;
        case 14:
            if (_t->connectionWarnings != *reinterpret_cast< bool*>(_v)) {
                _t->connectionWarnings = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->connectionWarningsChanged();
            }
            break;
        case 15:
            if (_t->richPresence != *reinterpret_cast< bool*>(_v)) {
                _t->richPresence = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->richPresenceChanged();
            }
            break;
        case 16:
            if (_t->gamepadMouse != *reinterpret_cast< bool*>(_v)) {
                _t->gamepadMouse = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->gamepadMouseChanged();
            }
            break;
        case 17:
            if (_t->detectNetworkBlocking != *reinterpret_cast< bool*>(_v)) {
                _t->detectNetworkBlocking = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->detectNetworkBlockingChanged();
            }
            break;
        case 18:
            if (_t->audioConfig != *reinterpret_cast< AudioConfig*>(_v)) {
                _t->audioConfig = *reinterpret_cast< AudioConfig*>(_v);
                Q_EMIT _t->audioConfigChanged();
            }
            break;
        case 19:
            if (_t->videoCodecConfig != *reinterpret_cast< VideoCodecConfig*>(_v)) {
                _t->videoCodecConfig = *reinterpret_cast< VideoCodecConfig*>(_v);
                Q_EMIT _t->videoCodecConfigChanged();
            }
            break;
        case 20:
            if (_t->videoDecoderSelection != *reinterpret_cast< VideoDecoderSelection*>(_v)) {
                _t->videoDecoderSelection = *reinterpret_cast< VideoDecoderSelection*>(_v);
                Q_EMIT _t->videoDecoderSelectionChanged();
            }
            break;
        case 21:
            if (_t->windowMode != *reinterpret_cast< WindowMode*>(_v)) {
                _t->windowMode = *reinterpret_cast< WindowMode*>(_v);
                Q_EMIT _t->windowModeChanged();
            }
            break;
        case 23:
            if (_t->uiDisplayMode != *reinterpret_cast< UIDisplayMode*>(_v)) {
                _t->uiDisplayMode = *reinterpret_cast< UIDisplayMode*>(_v);
                Q_EMIT _t->uiDisplayModeChanged();
            }
            break;
        case 24:
            if (_t->swapMouseButtons != *reinterpret_cast< bool*>(_v)) {
                _t->swapMouseButtons = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->mouseButtonsChanged();
            }
            break;
        case 25:
            if (_t->muteOnFocusLoss != *reinterpret_cast< bool*>(_v)) {
                _t->muteOnFocusLoss = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->muteOnFocusLossChanged();
            }
            break;
        case 26:
            if (_t->backgroundGamepad != *reinterpret_cast< bool*>(_v)) {
                _t->backgroundGamepad = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->backgroundGamepadChanged();
            }
            break;
        case 27:
            if (_t->reverseScrollDirection != *reinterpret_cast< bool*>(_v)) {
                _t->reverseScrollDirection = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->reverseScrollDirectionChanged();
            }
            break;
        case 28:
            if (_t->swapFaceButtons != *reinterpret_cast< bool*>(_v)) {
                _t->swapFaceButtons = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->swapFaceButtonsChanged();
            }
            break;
        case 29:
            if (_t->captureSysKeysMode != *reinterpret_cast< CaptureSysKeysMode*>(_v)) {
                _t->captureSysKeysMode = *reinterpret_cast< CaptureSysKeysMode*>(_v);
                Q_EMIT _t->captureSysKeysModeChanged();
            }
            break;
        case 30:
            if (_t->language != *reinterpret_cast< Language*>(_v)) {
                _t->language = *reinterpret_cast< Language*>(_v);
                Q_EMIT _t->languageChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject StreamingPreferences::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_StreamingPreferences.offsetsAndSize,
    qt_meta_data_StreamingPreferences,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_StreamingPreferences_t
, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<int, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<AudioConfig, std::true_type>, QtPrivate::TypeAndForceComplete<VideoCodecConfig, std::true_type>, QtPrivate::TypeAndForceComplete<VideoDecoderSelection, std::true_type>, QtPrivate::TypeAndForceComplete<WindowMode, std::true_type>, QtPrivate::TypeAndForceComplete<WindowMode, std::true_type>, QtPrivate::TypeAndForceComplete<UIDisplayMode, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<bool, std::true_type>, QtPrivate::TypeAndForceComplete<CaptureSysKeysMode, std::true_type>, QtPrivate::TypeAndForceComplete<Language, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>

, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>

>,
    nullptr
} };


const QMetaObject *StreamingPreferences::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StreamingPreferences::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StreamingPreferences.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int StreamingPreferences::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 31;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void StreamingPreferences::displayModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void StreamingPreferences::bitrateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void StreamingPreferences::enableVsyncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void StreamingPreferences::gameOptimizationsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void StreamingPreferences::playAudioOnHostChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void StreamingPreferences::multiControllerChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void StreamingPreferences::unsupportedFpsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void StreamingPreferences::enableMdnsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void StreamingPreferences::quitAppAfterChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void StreamingPreferences::absoluteMouseModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void StreamingPreferences::absoluteTouchModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void StreamingPreferences::audioConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void StreamingPreferences::videoCodecConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void StreamingPreferences::videoDecoderSelectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void StreamingPreferences::uiDisplayModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void StreamingPreferences::windowModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void StreamingPreferences::framePacingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void StreamingPreferences::connectionWarningsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void StreamingPreferences::richPresenceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void StreamingPreferences::gamepadMouseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void StreamingPreferences::detectNetworkBlockingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void StreamingPreferences::mouseButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void StreamingPreferences::muteOnFocusLossChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void StreamingPreferences::backgroundGamepadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void StreamingPreferences::reverseScrollDirectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void StreamingPreferences::swapFaceButtonsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void StreamingPreferences::captureSysKeysModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void StreamingPreferences::languageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
