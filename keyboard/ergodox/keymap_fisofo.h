static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
		See SVG file
     */

    KEYMAP(  // layout: layer 0: default
        // left hand
        ESC,    1,   2,   3,   4,   5,   GRV,
        TAB,    Q,   W,   F,   P,   G,   FN3,
        LGUI,   A,   R,   S,   T,   D,
        LSFT,   Z,   X,   C,   V,   B,   F16,
        LCTL,LALT, APP,LALT,LCTL,
								    VOLU, VOLD,
										  PSCR,
                                 FN5, DEL, INS,
        // right hand
             EQL, 6,   7,   8,   9,   0,   MINS,
			LBRC, J,   L,   U,   Y,   SCLN,BSLS,
                  H,   N,   E,   I,   O,   QUOT,
			RBRC, K,   M,   COMM,DOT, SLSH,RSFT,
                       FN4, FN2,  APP,RALT,RCTL,
        FN6,FN7,
        FN8,
        FN9,FN1,ENT
    ),

    KEYMAP(  // layout: layer 1: F-keys instead of numbers
        // left hand
        FN10,F1,  F2,  F3,  F4,  F5,   TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
			FN13, F6, F7,  F8,  F9,  F10,   F11,
             NO,  NO,  HOME,UP,  END, NO,   F12,
                  NO,  LEFT,DOWN,RGHT,EQL,   NO,
             NO,  NO,  PGUP,INS, PGDN,NO,  TRNS,
                       NO  ,TRNS,TRNS,TRNS,TRNS,
        FN11,FN12,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 2: mouse + numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,   F5,  F8,
        TRNS,WH_L,WH_U,WH_D,WH_R, BTN2,TRNS,
        TRNS,MS_L,MS_U,MS_D,MS_R, BTN1,
        TRNS,TRNS,TRNS,TRNS,TRNS, BTN3,TRNS,
        TRNS,TRNS,TRNS,TRNS, SPC,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,NLCK,PSLS,PAST,PAST,PMNS,PMNS,
             TRNS, ESC,P7,  P8,  P9,  PPLS,PPLS,
                  CALC,P4,  P5,  P6,  PPLS,PPLS,
             TRNS,  NO,P1,  P2,  P3,  PENT,PENT,
                       P0,TRNS,PDOT,  PENT,PENT,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 3: qwerty
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,   E,   R,   T,TRNS,
        TRNS,TRNS,   S,   D,   F,   G,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,   Y,   U,   I,   O,   P,TRNS,
			      TRNS,   J,   K,   L,SCLN,TRNS,
             TRNS,   N,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
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
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_LAYER_TOGGLE(0),     		     		// FN0 - switch to Layer0
    ACTION_LAYER_TAP_TOGGLE(1), 					// FN1 - switch to Layer1
    ACTION_LAYER_TOGGLE(2),			          		// FN2 - switch to Layer2
    ACTION_LAYER_TOGGLE(3),          				// FN3 - switch to Layer3
	ACTION_LAYER_TAP_KEY(1, KC_SPC),				// FN4 -layer 1 with tap Space
    ACTION_LAYER_TAP_KEY(1, KC_BSPC),				// FN5 -layer 1 with tap BackSpace

    ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),				// FN6 - Win+Left
	ACTION_MODS_KEY(MOD_LGUI, KC_RGHT),				// FN7 - Win+Right
    ACTION_MODS_KEY(MOD_LGUI, KC_UP),				// FN8 - Win+Up
    ACTION_MODS_KEY(MOD_LGUI, KC_DOWN),				// FN9 - Win+Down
    ACTION_MODS_KEY(MOD_LALT, KC_F4),				// FN10 - Alt+F4
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_DEL),	// FN11 - Ctrl+Alt+Del
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_END),	// FN12 - Ctrl+Alt+End
	ACTION_FUNCTION(TEENSY_KEY),                    // FN13 - Teensy key

	////////////////////////////////////////////////////////

    //~ ACTION_LAYER_SET(0, ON_BOTH),                   // FN0 - switch to Layer0
    //~ ACTION_LAYER_MOMENTARY(1),                      // FN1 - push Layer1
    //~ ACTION_LAYER_SET(2, ON_BOTH),                   // FN2 - switch to Layer2
    //~ ACTION_LAYER_MOMENTARY(3),                      // FN3 - push Layer3
    //~ ACTION_LAYER_MOMENTARY(4),                      // FN4 - push Layer4
    //~ ACTION_LAYER_SET(5, ON_BOTH),                   // FN5 - switch to Layer5
    //~ ACTION_LAYER_MOMENTARY(2),                      // FN6 - push Layer2
    //~ ACTION_FUNCTION(TEENSY_KEY),                    // FN7 - Teensy key

    //~ ACTION_MODS_TAP_KEY(MOD_LCTL, KC_BSPC),         // FN8  = LShift with tap BackSpace
    //~ ACTION_MODS_TAP_KEY(MOD_LSFT, KC_ESC),          // FN9  = LCtrl with tap Escape
    //~ ACTION_MODS_TAP_KEY(MOD_LALT, KC_SPC),          // FN10 = LAlt with tap Space
    //~ ACTION_MODS_TAP_KEY(MOD_RALT, KC_INS),          // FN11 = RAlt with tap Ins
    //~ ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),          // FN12 = RShift with tap Enter
    //~ ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),          // FN13 = RCtrl with tap Space
    //~ ACTION_MODS_TAP_KEY(MOD_RSFT, KC_MINS),         // FN14 = RShift with tap Enter
    //~ ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RBRC),         // FN15 = RCtrl with tap Space

    //~ ACTION_LAYER_TAP_KEY(2, KC_H),                  // FN16 = L2 symbols on J key, to use with Mouse keys

	//~ ACTION_LAYER_TAP_TOGGLE(1),						// FN17 = toggle on tap, pu/po on hold
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

