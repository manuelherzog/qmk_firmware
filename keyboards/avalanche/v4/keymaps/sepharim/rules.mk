RGBLIGHT_ENABLE = yes
AUTO_SHIFT_ENABLE = no
OLED_ENABLE = yes
CAPS_WORD_ENABLE = yes
RGB_MATRIX_ENABLE = no
RGB_MATRIX_DRIVER = WS2812


LTO_ENABLE = yes # link time optimisation
MOUSEKEY_ENABLE = yes
VIA_ENABLE = no
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
WEBUSB_ENABLE = no # might just be for Oryx
EXTRAKEY_ENABLE = yes # media/volume keys
SPACE_CADET_ENABLE = no # parentheses when tapping left/right mods
GRAVE_ESC_ENABLE = no # superimpose the grave (`) and Escape keys
MAGIC_ENABLE = no # NKRO toggling, mod swapping, etc
MUSIC_ENABLE = no
#RGBLIGHT_ENABLE = no
#RGB_MATRIX_ENABLE = no # yes for per-key/layer RGB
TAP_DANCE_ENABLE = no
COMBO_ENABLE = no

#SRC += oneshot.c

SRC += my_rgb_matrix.c
SRC += my_auto_shift.c