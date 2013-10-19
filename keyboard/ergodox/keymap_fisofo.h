static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
		See SVG file, doc/keymap_fisofo.svg
     */

    KEYMAP(  // BLACK layout: layer 0: colemak
        // left hand
        ESC,    1,   2,   3,   4,   5,   GRV,
        TAB,    Q,   W,   F,   P,   G,   F16,
        LGUI,   A,   R,   S,   T,   D,
        FN18,   Z,   X,   C,   V,   B,   F15,
        LCTL,LALT,CAPS,LALT,LCTL,
								     VOLD,VOLU,
										  PSCR,
								BSPC, FN8,FN17,
        // right hand
             EQL, 6,   7,   8,   9,   0,   MINS,
			 FN1, J,   L,   U,   Y,SCLN,   BSLS,
                  H,   N,   E,   I,   O,   QUOT,
			BSPC, K,   M,   COMM,DOT, SLSH,FN19,
                       SPC, FN3,  APP, FN9,FN10,
        FN11,FN12,
        FN13,
		FN17, FN4,ENT
    ),


	KEYMAP(  // layout: layer 1: qwerty
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,   Q,   W,   E,   R,   T,TRNS,
        TRNS,   A,   S,   D,   F,   G,
        TRNS,   Z,   X,   C,   V,   B,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
              FN5,   Y,   U,   I,   O,   P,TRNS,
			         H,   J,   K,   L,SCLN,TRNS,
             TRNS,   N,   M,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

	KEYMAP(  // PINK layout: layer 2: gaming
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,  F5,  F8,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS, GRV, SPC,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
              FN6,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // BLUE layout: layer 3: mouse + numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,BTN1,MS_U,BTN2,WH_U,TRNS,
        TRNS,TRNS,MS_L,MS_D,MS_R,WH_D,
        TRNS,TRNS,WH_L,BTN3,WH_R,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,  NO,NLCK,PSLS,PAST,PMNS,PMNS,
             TRNS, ESC,  P7,  P8,  P9,FN21,TRNS,
                  CALC,  P4,  P5,  P6,PPLS,TRNS,
             TRNS,  NO,  P1,  P2,  P3, EQL,TRNS,
                         P0, FN7,PDOT,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // RED layout: layer 4: F-keys instead of numbers
        // left hand
        TRNS,  F1,  F2,  F3,  F4,  F5, F12,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN16,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, F14,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
								 TRNS,TRNS,TRNS,
        // right hand
		   FN20,  F6,  F7,  F8,  F9, F10, F11,
			FN2,  NO,HOME,  UP, END,FN22,TRNS,
                  NO,LEFT,DOWN,RGHT,FN23,TRNS,
           TRNS,  NO,PGUP,  NO,PGDN,FN24,TRNS,
                     TRNS,  NO,TRNS,TRNS,TRNS,
        FN14,FN15,
        RSFT,
        RCTL,TRNS,TRNS
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
    ACTION_LAYER_SET(0, ON_BOTH),     		     	// UNUSED: FN0  - Set to  layer 0|Colemak
    ACTION_LAYER_ON(1, ON_PRESS),					// FN1  - turn on layer 1|Qwerty
    ACTION_LAYER_ON(2, ON_PRESS),	       			// FN2  - turn on Layer 2|Gaming
	ACTION_LAYER_ON(3, ON_PRESS),   				// FN3  - turn on Layer 3|Numpad+Mouse
	ACTION_LAYER_TAP_KEY(4, KC_INS),				// FN4  - Tap = Insert / Hold = Layer 4|Navigation+F-key

	ACTION_LAYER_OFF(1, ON_PRESS),					// FN5  - turn off layer 1|Qwerty
	ACTION_LAYER_OFF(2, ON_PRESS),		       		// FN6  - turn off Layer 2|Gaming
	ACTION_LAYER_OFF(3, ON_PRESS),      			// FN7  - turn off Layer 3|Numbpad+Mouse

	ACTION_LAYER_MOMENTARY(4),						// FN8  - Layer 3|Numbpad+Mouse

	ACTION_MODS_TAP_KEY(MOD_RALT, KC_LBRC),         // FN9  - Tap = [ { / Hold = RAlt
	ACTION_MODS_TAP_KEY(MOD_RCTL, KC_RBRC),         // FN10 - Tap = ] } / Hold = RCtrl

    ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),				// FN11 - Win+Left
	ACTION_MODS_KEY(MOD_LGUI, KC_RGHT),				// FN12 - Win+Right
    ACTION_MODS_KEY(MOD_LGUI, KC_UP),				// FN13 - Win+Up
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_DEL),	// FN14 - Ctrl+Alt+Del
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_END),	// FN15 - Ctrl+Alt+End
	ACTION_MODS_KEY(MOD_LALT, KC_F4),				// FN16 - Alt+F4

	ACTION_MODS_TAP_KEY(MOD_RCTL, KC_DEL),         	// FN17 - Tap = Ins / Hold = RCtrl

	ACTION_MODS_ONESHOT(MOD_LSFT),         			// FN18 - Tap = Next key modified / Hold = Shift
	ACTION_MODS_ONESHOT(MOD_RSFT),         			// FN19 - Tap = Next key modified / Hold = Shift

	ACTION_FUNCTION(TEENSY_KEY),                    // FN20 - Teensy key

	ACTION_MODS_KEY(MOD_LSFT, KC_1), 				// FN21 - !
	ACTION_MODS_KEY(MOD_RCTL, KC_X), 				// FN22 - Ctrl+X
	ACTION_MODS_KEY(MOD_RCTL, KC_C), 				// FN23 - Ctrl+C
	ACTION_MODS_KEY(MOD_RCTL, KC_V), 				// FN24 - Ctrl+V

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

