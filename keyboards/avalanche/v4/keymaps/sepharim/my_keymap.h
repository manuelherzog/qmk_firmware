#include QMK_KEYBOARD_H

#include "keymap_german_mac_iso.h"

#define xxxxxxx KC_NO
#define xxx KC_NO
#define MY_LAYOUT(\
        l10, l11, l12, l13, l14, l15,     r15, r14, r13, r12, r11, r10,\
        l20, l21, l22, l23, l24, l25,     r25, r24, r23, r22, r21, r20,\
        l30, l31, l32, l33, l34, l35,     r35, r34, r33, r32, r31, r30,\
                            l51, l52,     r52, r51,\
             l61, l62, l63, l64, l65,     r65, r64, r63, r62, r61) \
        LAYOUT(\
            xxx, xxx, xxx, xxx, xxx, xxx,                          xxx, xxx, xxx, xxx, xxx, xxx,\
            l10, l11, l12, l13, l14, l15,                          r15, r14, r13, r12, r11, r10,\
        xxx,l20, l21, l22, l23, l24, l25,                          r25, r24, r23, r22, r21, r20,xxx,\
            l30, l31, l32, l33, l34, l35, l51, l52,      r52, r51, r35, r34, r33, r32, r31, r30,\
                           l61, l62, l63, l64, l65,      r65, r64, r63, r62, r61)


#define NAV_ENT LT(_NAV, KC_ENT)
#define FN      TT(_FN)
#define SGN_SPC LT(_SGN, KC_SPC)
#define MY_E    MT(MOD_LSFT, KC_E)
#define MY_A    MT(MOD_LGUI, KC_A)
#define MY_I    MT(MOD_LALT, KC_I)
#define MY_U    MT(MOD_LCTL, KC_U)
#define MY_N    MT(MOD_RSFT, KC_N)
#define MY_R    MT(MOD_RGUI, KC_R)
#define MY_T    MT(MOD_RALT, KC_T)
#define MY_D    MT(MOD_RCTL, KC_D)