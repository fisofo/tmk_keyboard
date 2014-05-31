#include <action_layer.h>
#include <action_util.h>

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
        See SVG file, doc/keymap_fisofo.svg
     */

    KEYMAP(  // BLACK layout: layer 0: colemak
        // left hand
        ESC,    1,   2,   3,   4,   5,   GRV,
        TAB,    Q,   W,   F,   P,   G,   F16,
        LGUI,FN26,FN27,FN28,FN29,   D,
        FN14,   Z,   X,   C,   V,   B,   FN12,
        LBRC,RBRC,CAPS,LALT,LCTL,
                                     VOLD,VOLU,
                                          PSCR,
                                BSPC, FN6,FN13,
        // right hand
             EQL, 6,   7,   8,   9,   0,   MINS,
             INS, J,   L,   U,   Y,SCLN,   BSLS,
                  H,   N,   E,   I,   O,   QUOT,
            BSPC, K,   M,   COMM,DOT, SLSH,FN15,
                       SPC, FN2, EQL, FN25,RCTL,
        FN7,FN8,
        FN9,
        FN13, FN3,ENT
    ),


    KEYMAP(  // layout: layer 1: Gaming
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,  F6,  F9,
        TRNS,   Q,   W,   E,   R,   T, FN4,
        TRNS,   A,   S,   D,   F,   G,
        TRNS,   Z,   X,   C,   V,   B,TRNS,
        LALT,LCTL,TRNS, GRV, SPC,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,   Y,   U,   I,   O,   P,TRNS,
                     H,   J,   K,   L,SCLN,TRNS,
             TRNS,   N,   M,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // BLUE layout: layer 2: mouse + numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,BTN1,MS_U,WH_U,TRNS,TRNS,
        TRNS,TRNS,MS_L,MS_D,MS_R,TRNS,
        TRNS,TRNS,WH_L,WH_R,WH_D,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,  NO,NLCK,PSLS,PAST,PMNS,PMNS,
             TRNS, ESC,  P7,  P8,  P9,TRNS,FN16,
                  CALC,  P4,  P5,  P6,PPLS,TRNS,
             TRNS, SPC,  P1,  P2,  P3, EQL,TRNS,
                         P0, FN5,PDOT,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // RED layout: layer 3: F-keys instead of numbers
        // left hand
        TRNS,  F1,  F2,  F3,  F4,  F5, F12,
        TRNS,TRNS,BTN1,BTN2,WH_U,TRNS, FN1,
        TRNS,FN26,FN27,FN28,FN29,TRNS,
        TRNS,TRNS,WH_L,WH_R,WH_D,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           PAUS,
                                 TRNS,TRNS,TRNS,
        // right hand
            FN0,  F6,  F7,  F8,  F9, F10, F11,
           TRNS,  NO,HOME,  UP, END,FN17,TRNS,
                 INS,LEFT,DOWN,RGHT,FN18,TRNS,
           TRNS,FN22,PGUP,FN21,PGDN,FN19,TRNS,
                     FN24,TRNS,TRNS,TRNS,TRNS,
        FN10,FN11,
        RSFT,
        TRNS,TRNS,FN23
    ),

/*
    // templates to copy from

    KEYMAP(  // layout: layer N: transparent on edges, all others are empty
        // left hand
        TRNS,NO,  NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO,  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
    RGUI_A,
    LALT_R,
    LSHIFT_S,
    LCTRL_T,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0 - Teensy key

    ACTION_LAYER_ON(1, ON_PRESS),                   // FN1  - turn on layer 1|Gaming
    ACTION_LAYER_ON(2, ON_PRESS),                   // FN2  - turn on Layer 2|Numpad+Mouse
    ACTION_LAYER_TAP_TOGGLE(3),                     // FN3  - Momentary/Tap Twice for Layer 3|Navigation+F-key
    // ACTION_LAYER_TAP_KEY(3, KC_INS),             // FN3  - Tap = Insert / Hold = Layer 3|Navigation+F-key

    ACTION_LAYER_OFF(1, ON_PRESS),                  // FN4  - turn off layer 1|Gaming
    ACTION_LAYER_OFF(2, ON_PRESS),                  // FN5  - turn off Layer 2|Numbpad+Mouse
    ACTION_LAYER_MOMENTARY(3),                      // FN6  - Layer 3|Navigation+F-key

    ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),             // FN7 - Win+Left
    ACTION_MODS_KEY(MOD_LGUI, KC_RGHT),             // FN8 - Win+Right
    ACTION_MODS_KEY(MOD_LGUI, KC_UP),               // FN9 - Win+Up
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_DEL),   // FN10 - Ctrl+Alt+Del
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_END),   // FN11 - Ctrl+Alt+End
    ACTION_MODS_KEY(MOD_LALT, KC_F4),               // FN12 - Alt+F4

    ACTION_MODS_TAP_KEY(MOD_RCTL, KC_DEL),          // FN13 - Tap = Del / Hold = RCtrl

    ACTION_MODS_ONESHOT(MOD_LSFT),                  // FN14 - Tap = Next key modified / Hold = Shift
    ACTION_MODS_ONESHOT(MOD_RSFT),                  // FN15 - Tap = Next key modified / Hold = Shift

    ACTION_MODS_KEY(MOD_LSFT, KC_1),                // FN16 - !
    ACTION_MODS_KEY(MOD_RCTL, KC_X),                // FN17 - Ctrl+X
    ACTION_MODS_KEY(MOD_RCTL, KC_C),                // FN18 - Ctrl+C
    ACTION_MODS_KEY(MOD_RCTL, KC_V),                // FN19 - Ctrl+V

    ACTION_LAYER_ON(3, ON_PRESS),                   // FN20 - turn on layer 3|Navigation+F-key
    ACTION_LAYER_OFF(3, ON_PRESS),                  // FN21 - turn off layer 3|Navigation+F-key

    ACTION_MODS_KEY(MOD_RSFT, KC_RCTL),             // FN22 - Shift+Ctrl
    ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),          // FN23 - Tap = Enter / Hold = Shift
    ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),          // FN24 - Tap = Space / Hold = Ctrl

    ACTION_MODS_TAP_KEY(MOD_RALT, KC_APP),          // FN25 - Tap = App / Hold = Alt

    ACTION_FUNCTION(RGUI_A),                        // FN26 - Win/A
    ACTION_FUNCTION(LALT_R),                        // FN27 - Alt/R
    ACTION_FUNCTION(LSHIFT_S),                      // FN28 - Shift/S
    ACTION_FUNCTION(LCTRL_T),                       // FN29 - Ctrl/T


};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt) {
  extern uint32_t layer_state;

  switch (id) {
    case TEENSY_KEY:
      if (!event->event.pressed) return;

      clear_keyboard();
      print("\n\nJump to bootloader... ");
      _delay_ms(250);
      bootloader_jump(); // should not return
      print("not supported.\n");
      break;

    case RGUI_A:
      if (event->event.pressed) {
        if (biton32(layer_state) == 0) {
          add_key(KC_A);
        } else {
          add_mods(MOD_BIT(KC_RGUI));
        }
      } else {
        del_key(KC_A);
        del_mods(MOD_BIT(KC_RGUI));
      }
      send_keyboard_report();
      break;

    case LALT_R:
      if (event->event.pressed) {
        if (biton32(layer_state) == 0) {
          add_key(KC_R);
        } else {
          add_mods(MOD_BIT(KC_LALT));
        }
      } else {
        del_key(KC_R);
        del_mods(MOD_BIT(KC_LALT));
      }
      send_keyboard_report();
      break;

    case LSHIFT_S:
      if (event->event.pressed) {
        if (biton32(layer_state) == 0) {
          add_key(KC_S);
        } else {
          add_mods(MOD_BIT(KC_LSHIFT));
        }
      } else {
        del_key(KC_S);
        del_mods(MOD_BIT(KC_LSHIFT));
      }
      send_keyboard_report();
      break;

    case LCTRL_T:
      if (event->event.pressed) {
        if (biton32(layer_state) == 0) {
          add_key(KC_T);
        } else {
          add_mods(MOD_BIT(KC_LCTRL));
        }
      } else {
        del_key(KC_T);
        del_mods(MOD_BIT(KC_LCTRL));
      }
      send_keyboard_report();
      break;

    }
}
