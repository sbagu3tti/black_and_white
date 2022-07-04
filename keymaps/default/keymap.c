#include QMK_KEYBOARD_H


#define _ALPHABET 0
#define _PUNCTUATION 1
#define _NUMBERS 2
#define _FUNCTION 3

#define RAISE MO(_NUMBERS)
#define LOWER MO(_PUNCTUATION)

#define ONE_GRV LT(1,KC_GRAVE)
#define CTL_Z LCTL_T(KC_Z)
#define ALT_SHFT LALT(KC_LSFT)
#define ALT_MENU LALT_T(KC_MENU)
#define LG_QUOT LGUI_T(KC_QUOT)
#define CTL_ESC LCTL_T(KC_ESC)
#define CTL_SLS LCTL_T(KC_SLSH)
#define LT2_COL LT(_NUMBERS, KC_SCLN)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHABET] = LAYOUT(
        KC_ESC,  KC_Y ,KC_H   , KC_U  , KC_Z  ,                               KC_Q   , KC_D  , KC_L  , KC_M  , KC_APP,
        KC_S  ,  KC_N  ,KC_O   , KC_T  , KC_J  ,                              KC_B   , KC_E  , KC_I  , KC_A  , KC_R  ,
        KC_G   , KC_C  ,KC_X   , KC_V  ,                                               KC_P  , KC_F  , KC_K  , KC_W,
                KC_LCTL,KC_LSFT, KC_BSPC, KC_LALT,                            KC_TAB , KC_SPC,LT(_PUNCTUATION,DF(_ALPHABET)),DF(_NUMBERS)
    ),
    [_PUNCTUATION] = LAYOUT(
        KC_LABK ,KC_LBRC,KC_EXLM,KC_COLN,KC_LCBR,                            KC_RCBR, KC_DQUO,KC_QUES,KC_RBRC,KC_RABK,
        KC_MINS,KC_LPRN,KC_SLSH,KC_COMM,KC_SCLN,                             KC_AT  ,KC_DOT ,KC_QUOT,KC_RPRN,KC_ENT,
        KC_PERC,KC_AMPR,KC_BSLS,KC_NUHS,                                             KC_RGHT,KC_UP  ,KC_DOWN,KC_RGHT,
                KC_TRNS,KC_END ,KC_DEL ,KC_HOME,                             KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS
    ),
    [_NUMBERS] = LAYOUT(
        KC_TRNS,KC_1   ,KC_2   ,KC_3   ,KC_TRNS,                             KC_TRNS,KC_COMM,KC_PDOT,KC_QUOT,KC_TRNS,
        KC_0   ,KC_4   ,KC_5   ,KC_6   ,KC_TRNS,                             KC_PEQL,KC_PPLS,KC_PMNS,KC_PAST,KC_PSLS,
        KC_TRNS,KC_7   ,KC_8   ,KC_9   ,                                             KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                             KC_TRNS,KC_TRNS,KC_TRNS,DF(_FUNCTION)
    ),
    [_FUNCTION] = LAYOUT(
        KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_TRNS,                             KC_TRNS,KC_MUTE,KC_VOLD,KC_VOLU,KC_TRNS,
        KC_F5  ,KC_F6  ,KC_F7  ,KC_F8  ,KC_TRNS,                             KC_TRNS,KC_BRID,KC_BRIU,KC_TRNS,KC_TRNS,
        KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,                                             KC_MPRV,KC_MPLY,KC_MNXT,KC_TRNS,
                KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,                             KC_TRNS,KC_TRNS,KC_TRNS,DF(_ALPHABET)
    )
};
