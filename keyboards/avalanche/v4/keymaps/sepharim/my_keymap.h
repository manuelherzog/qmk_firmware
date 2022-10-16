#include QMK_KEYBOARD_H

#include "keymap_german_mac_iso.h"

#define xxxxxxx KC_NO
#define xxx KC_NO
#define MY_LAYOUT(\
        l11, l12, l13, l14, l15,     r15, r14, r13, r12, r11,\
        l21, l22, l23, l24, l25,     r25, r24, r23, r22, r21,\
        l31, l32, l33, l34, l35,     r35, r34, r33, r32, r31,\
                       l51, l52,     r52, r51)\
        MY_LAYOUT6(\
        xxx, l11, l12, l13, l14, l15,     r15, r14, r13, r12, r11, xxx,\
        xxx, l21, l22, l23, l24, l25,     r25, r24, r23, r22, r21, xxx,\
        xxx, l31, l32, l33, l34, l35,     r35, r34, r33, r32, r31, xxx,\
                            l51, l52,     r52, r51)
#define MY_LAYOUT6(\
        l10, l11, l12, l13, l14, l15,     r15, r14, r13, r12, r11, r10,\
        l20, l21, l22, l23, l24, l25,     r25, r24, r23, r22, r21, r20,\
        l30, l31, l32, l33, l34, l35,     r35, r34, r33, r32, r31, r30,\
                            l51, l52,     r52, r51)\
        LAYOUT(\
            xxx, xxx, xxx, xxx, xxx, xxx,                          xxx, xxx, xxx, xxx, xxx, xxx,\
            l10, l11, l12, l13, l14, l15,                          r15, r14, r13, r12, r11, r10,\
      RESET,l20, l21, l22, l23, l24, l25,                          r25, r24, r23, r22, r21, r20,RGB_MOD,\
            l30, l31, l32, l33, l34, l35, xxx, xxx,      xxx, xxx, r35, r34, r33, r32, r31, r30,\
                       KC_MUTE, xxx, xxx, l51, l52,      r52, r51, xxx, xxx, KC_BTN1)


#define NAV_ENT LT(_NAV, KC_ENT)
#define FN      TT(_FN)
#define SGN_SPC LT(_SGN, KC_SPC)
#define MY_E    MT(MOD_LSFT, KC_E)
#define MY_A    MT(MOD_LGUI, KC_A)
#define MY_I    MT(MOD_LALT, KC_I)
#define MY_U    MT(MOD_LCTL, KC_U)
#define MY_N    MT(MOD_LSFT, KC_N)
#define MY_R    MT(MOD_RGUI, KC_R)
#define MY_T    MT(MOD_RALT, KC_T)
#define MY_D    MT(MOD_RCTL, KC_D)
#define MY_4    MT(MOD_LSFT, KC_4)
#define MY_5    MT(MOD_RGUI, KC_5)
#define MY_6    MT(MOD_RALT, KC_6)
#define MY_Nxxx MT(MOD_RCTL, KC_NO)