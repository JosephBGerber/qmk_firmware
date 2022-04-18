#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_portuguese.h"
// #include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"
#include <stdbool.h>

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MA C ALGR(KC_6)

enum custom_keycodes {
    MIDI_1 = EZ_SAFE_RANGE,
    MIDI_2,
    MIDI_3,
    MIDI_4, // Do
    MIDI_5,
    MIDI_6,
    MIDI_7,
    MIDI_8,
    MIDI_9,
    MIDI_10,
    MIDI_11,
    MIDI_12,
    MIDI_13,
    MIDI_14,
    MIDI_15,
};

// clang-format off




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


    /*
     * ,--------------------------------------------------.    ,--------------------------------------------------.
     * |    0   |   1  |   2  |   3  |   4  |   5  |  6   |    |  38  |  39  |  40  |  41  |  42  |  43  |   44   |
     * |--------+------+------+------+------+------+------|    |------+------+------+------+------+------+--------|
     * |    7   |   8  |   9  |  10  |  11  |  12  |  13  |    |  45  |  46  |  47  |  48  |  49  |  50  |   51   |
     * |--------+------+------+------+------+------|      |    |      |------+------+------+------+------+--------|
     * |   14   |  15  |  16  |  17  |  18  |  19  |------|    |------|  52  |  53  |  54  |  55  |  56  |   57   |
     * |--------+------+------+------+------+------|  26  |    |  58  |------+------+------+------+------+--------|
     * |   20   |  21  |  22  |  23  |  24  |  25  |      |    |      |  59  |  60  |  61  |  62  |  63  |   64   |
     * `--------+------+------+------+------+-------------'    `-------------+------+------+------+------+--------'
     *   |  27  |  28  |  29  |  30  |  31  |                                |  65  |  66  |  67  |  68  |  69  |
     *   `----------------------------------'                                `----------------------------------'
     *                                       ,-------------.  ,-------------.
     *                                       |  32  |  33  |  |  70  |  71  |
     *                                ,------+------+------|  |------+------+------.
     *                                |      |      |  34  |  |  72  |      |      |
     *                                |  35  |  36  |------|  |------|  74  |  75  |
     *                                |      |      |  37  |  |  73  |      |      |
     *                                `--------------------'  `--------------------'
     */

[0] = LAYOUT_ergodox_pretty(
             KC_EQUAL,       KC_1,            KC_2,    KC_3,     KC_4,      KC_5,     TG(2),      TG(3)    , KC_6     , KC_7    , KC_8    , KC_9       , KC_0           , KC_MINUS             ,
                MO(2),       KC_Q,            KC_W,    KC_E,     KC_R,      KC_T,   _______,      _______  , KC_Y     , KC_U    , KC_I    , KC_O       , KC_P           , LT(2,KC_BSLASH)      ,
            KC_LSHIFT,       KC_A,            KC_S,    KC_D,     KC_F,      KC_G,                            KC_H     , KC_J    , KC_K    , KC_L       , LT(2,KC_SCOLON), MT(MOD_RSFT,KC_QUOTE),
                MO(1), LT(2,KC_Z),            KC_X,    KC_C,     KC_V,      KC_B,   _______,      _______  , KC_N     , KC_M    , KC_COMMA, KC_DOT     , LT(2,KC_SLASH) , MO(1)                ,
MT(MOD_LCTL,KC_GRAVE),    KC_LGUI, LALT(KC_LSHIFT), KC_LEFT, KC_RIGHT,                                                  KC_UP   , KC_DOWN , KC_LBRACKET, KC_RBRACKET    , KC_RCTRL             ,

                                                                         KC_HOME,    KC_END,      KC_PGUP  , KC_PGDOWN,
                                                                                  KC_DELETE,      XXXXXXX  ,
                                                             KC_SPACE, KC_BSPACE,   KC_LGUI,      KC_ESCAPE, KC_TAB   , KC_ENTER
),

[1] = LAYOUT_ergodox_pretty(
KC_ESCAPE,    KC_F1,   KC_F2,       KC_F3,       KC_F4,    KC_F5, _______,      _______      , KC_F6          , KC_F7            , KC_F8 , KC_F9  , KC_F10    , KC_F11 ,
  _______,  KC_EXLM,   KC_AT,     KC_LCBR,     KC_RCBR,  KC_PIPE, _______,      _______      , KC_MINUS       , KC_7             , KC_8  , KC_9   , KC_ASTR   , _______,
  _______,  KC_HASH,  KC_DLR,     KC_LPRN,     KC_RPRN, KC_GRAVE,                              KC_EQUAL       , KC_4             , KC_5  , KC_6   , KC_KP_PLUS, _______,
  _______,  _______, KC_CIRC, KC_LBRACKET, KC_RBRACKET,  KC_TILD, _______,      _______      , KC_AMPR        , KC_1             , KC_2  , KC_3   , KC_SLASH  , _______,
  _______, KC_EQUAL, _______,     _______,     _______,                                                         KC_0             , KC_DOT, _______, KC_EQUAL  , _______,

                                                         _______, _______,      _______      , _______        ,
                                                                   MI_C_4,      _______      ,
                                               _______,  _______,  MI_TOG,      KC_AUDIO_MUTE, KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN
),

[2] = LAYOUT_ergodox_pretty(
_______,     _______,    _______,       _______,        _______,        _______,      TG(2),      TG(2)  , _______, _______    , _______      , _______, _______, RESET              ,
_______,     XXXXXXX,    XXXXXXX,      KC_MS_UP,        XXXXXXX,    KC_MS_WH_UP,    _______,      _______, _______, _______    , XXXXXXX      , XXXXXXX, XXXXXXX, _______            ,
_______,     XXXXXXX, KC_MS_LEFT,    KC_MS_DOWN,    KC_MS_RIGHT,  KC_MS_WH_DOWN,                           _______, _______    , XXXXXXX      , XXXXXXX, XXXXXXX, KC_MEDIA_PLAY_PAUSE,
_______,     XXXXXXX,    XXXXXXX,       XXXXXXX,  KC_MS_WH_LEFT, KC_MS_WH_RIGHT,    _______,      _______, _______, _______    , XXXXXXX      , XXXXXXX, XXXXXXX, _______            ,
_______, WEBUSB_PAIR,    _______, KC_MS_WH_LEFT, KC_MS_WH_RIGHT,                                                    KC_MS_WH_UP, KC_MS_WH_DOWN, XXXXXXX, XXXXXXX, _______            ,

                                                                        _______,    _______,      _______, _______,
                                                                                    _______,      _______,
                                                     KC_MS_BTN1,     KC_MS_BTN2, KC_MS_BTN3,      _______, _______, KC_LGUI
),

[3] = LAYOUT_ergodox_pretty(
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   TG(3),      TG(3)  , XXXXXXX, MIDI_13, MIDI_14, MIDI_15, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, MIDI_10, MIDI_11, MIDI_12, XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, MIDI_7 , MIDI_8 , MIDI_9 , XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, MIDI_4 , MIDI_5 , MIDI_6 , XXXXXXX, XXXXXXX,
XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                                          MIDI_1 , MIDI_2 , MIDI_3 , XXXXXXX, XXXXXXX,

                                             XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX,
                                                      XXXXXXX,      XXXXXXX,
                                    XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX
)
};



// clang-format on

extern MidiDevice midi_device;

// MIDI CC codes for generic on/off switches (80, 81, 82, 83)
// Off: 0-63
// On:  64-127

#define MIDI_CC_OFF 0
#define MIDI_CC_ON 127

typedef struct {
    bool keys[127];
} State;

static State state = {.keys = {0}};

void press_key(uint8_t cc) {
    if (!state.keys[cc]) {
        midi_send_noteon(&midi_device, 0, cc, 64);
    }

    state.keys[cc] = true;
}

void release_key(uint8_t cc) {
    if (state.keys[cc]) {
        midi_send_noteoff(&midi_device, 0, cc, 0);
    }

    state.keys[cc] = false;
}

const uint8_t BASE = 60;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (keycode >= MIDI_1 && keycode <= MIDI_15) {
        uint8_t cc;
        switch (keycode) {
            case MIDI_1:
                cc = BASE - 5;
                break;
            case MIDI_2:
                cc = BASE - 3;
                break;
            case MIDI_3:
                cc = BASE - 1;
                break;
            case MIDI_4:
                cc = BASE;
                break;
            case MIDI_5:
                cc = BASE + 2;
                break;
            case MIDI_6:
                cc = BASE + 4;
                break;
            case MIDI_7:
                cc = BASE + 5;
                break;
            case MIDI_8:
                cc = BASE + 7;
                break;
            case MIDI_9:
                cc = BASE + 9;
                break;
            case MIDI_10:
                cc = BASE + 11;
                break;
            case MIDI_11:
                cc = BASE + 12;
                break;
            case MIDI_12:
                cc = BASE + 14;
                break;
            case MIDI_13:
                cc = BASE + 16;
                break;
            case MIDI_14:
                cc = BASE + 17;
                break;
            case MIDI_15:
                cc = BASE + 19;
                break;
        }

        if (record->event.pressed) {
            press_key(cc);
        } else {
            release_key(cc);
        }
    }
    return true;
}

uint32_t layer_state_set_user(uint32_t state) {
    uint8_t layer = biton32(state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        default:
            break;
    }
    return state;
};
