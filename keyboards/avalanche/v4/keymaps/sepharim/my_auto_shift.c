#include "my_auto_shift.h"
#include "my_keymap.h"

#ifdef AUTO_SHIFT_ENABLE
bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case KC_A ... KC_Z:
        //German Umlauts
        case DE_UDIA:
        case DE_ODIA:
        case DE_ADIA:
        //ModTap Keys
        case MY_E:
        case MY_A:
        case MY_I:
        case MY_U:
        case MY_N:
        case MY_R:
        case MY_T:
        case MY_D:
            return true;
        //MouseKeys on Numpad
    }
    return false;
}
void layer_state_set_user_auto_shift(layer_state_t state)
{
    if (get_autoshift_state() && (state & (1<<_FN) || state & (1<<_SGN) || state & (1<<_NAV))) {
        autoshift_disable();
    } else {
        autoshift_enable();
    }
}
#endif