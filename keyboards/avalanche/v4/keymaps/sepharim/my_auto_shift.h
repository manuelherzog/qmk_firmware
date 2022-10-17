#include QMK_KEYBOARD_H


#ifdef AUTO_SHIFT_ENABLE
bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record);
void layer_state_set_user_auto_shift(layer_state_t state);
#endif