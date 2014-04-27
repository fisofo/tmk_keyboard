static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
		See SVG file, doc/keymap_fisofo.svg
     */

    KEYMAP(  // BLACK layout: layer 0: colemak
        // left hand
        ESC,    1,   2,   3,   4,   5,   GRV,
        TAB,    Q,   W,   F,   P,   G,   F16,
        LGUI,   A,   R,   S,   T,   D,
        FN14,   Z,   X,   C,   V,   B,   FN1,
        LBRC,RBRC,CAPS,LALT,LCTL,
								     VOLD,VOLU,
										  FN20,
								BSPC, FN6,FN13,
        // right hand
             EQL, 6,   7,   8,   9,   0,   MINS,
			FN20, J,   L,   U,   Y,SCLN,   BSLS,
                  H,   N,   E,   I,   O,   QUOT,
			BSPC, K,   M,   COMM,DOT, SLSH,FN15,
                       SPC, FN2,  APP,RALT,RCTL,
        FN7,FN8,
        FN9,
		FN13, FN3,ENT
    ),


	KEYMAP(  // layout: layer 1: Gaming
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,  F6,  F9,
        TRNS,   Q,   W,   E,   R,   T,TRNS,
        TRNS,   A,   S,   D,   F,   G,
        TRNS,   Z,   X,   C,   V,   B, FN4,
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
        TRNS,TRNS,BTN1,MS_U,BTN2,WH_U,TRNS,
        TRNS,TRNS,MS_L,MS_D,MS_R,WH_D,
        TRNS,TRNS,WH_U,BTN3,WH_D,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,  NO,NLCK,PSLS,PAST,PMNS,PMNS,
             TRNS, ESC,  P7,  P8,  P9,TRNS,FN16,
                  CALC,  P4,  P5,  P6,PPLS,TRNS,
             TRNS,  P0,  P1,  P2,  P3, EQL,TRNS,
						SPC, FN5,PDOT,PDOT,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // RED layout: layer 3: F-keys instead of numbers
        // left hand
        TRNS,  F1,  F2,  F3,  F4,  F5, F12,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,FN12,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, F14,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,PSCR,
                                           FN21,
								 TRNS,TRNS,TRNS,
        // right hand
		    FN0,  F6,  F7,  F8,  F9, F10, F11,
		   FN21,  NO,HOME,  UP, END,FN17,TRNS,
                  NO,LEFT,DOWN,RGHT,FN18,TRNS,
           TRNS,FN22,PGUP,  NO,PGDN,FN19,TRNS,
                     FN24,FN21,TRNS,TRNS,TRNS,
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
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_FUNCTION(TEENSY_KEY),                    // FN0 - Teensy key

	ACTION_LAYER_ON(1, ON_PRESS),					// FN1  - turn on layer 1|Gaming
    ACTION_LAYER_ON(2, ON_PRESS),	       			// FN2  - turn on Layer 2|Numpad+Mouse
	ACTION_LAYER_TAP_KEY(3, KC_INS),				// FN3  - Tap = Insert / Hold = Layer 4|Navigation+F-key

	ACTION_LAYER_OFF(1, ON_PRESS),					// FN4  - turn off layer 1|Gaming
	ACTION_LAYER_OFF(2, ON_PRESS),		       		// FN5  - turn off Layer 2|Numbpad+Mouse
	ACTION_LAYER_MOMENTARY(3),						// FN6  - Layer 3|Navigation+F-key

    ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),				// FN7 - Win+Left
	ACTION_MODS_KEY(MOD_LGUI, KC_RGHT),				// FN8 - Win+Right
    ACTION_MODS_KEY(MOD_LGUI, KC_UP),				// FN9 - Win+Up
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_DEL),	// FN10 - Ctrl+Alt+Del
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_END),	// FN11 - Ctrl+Alt+End
	ACTION_MODS_KEY(MOD_LALT, KC_F4),				// FN12 - Alt+F4

	ACTION_MODS_TAP_KEY(MOD_RCTL, KC_DEL),         	// FN13 - Tap = Del / Hold = RCtrl

	ACTION_MODS_ONESHOT(MOD_LSFT),         			// FN14 - Tap = Next key modified / Hold = Shift
	ACTION_MODS_ONESHOT(MOD_RSFT),         			// FN15 - Tap = Next key modified / Hold = Shift

	ACTION_MODS_KEY(MOD_LSFT, KC_1), 				// FN16 - !
	ACTION_MODS_KEY(MOD_RCTL, KC_X), 				// FN17 - Ctrl+X
	ACTION_MODS_KEY(MOD_RCTL, KC_C), 				// FN18 - Ctrl+C
	ACTION_MODS_KEY(MOD_RCTL, KC_V), 				// FN19 - Ctrl+V

	ACTION_LAYER_ON(3, ON_PRESS),					// FN20 - turn on layer 3|Navigation+F-key
	ACTION_LAYER_OFF(3, ON_PRESS),					// FN21 - turn off layer 3|Navigation+F-key

	ACTION_MODS_KEY(MOD_RSFT, KC_RCTL), 			// FN22 - Shift+Ctrl
	ACTION_MODS_TAP_KEY(MOD_RSFT, KC_ENT),        	// FN23 - Tap = Enter / Hold = Shift
	ACTION_MODS_TAP_KEY(MOD_RCTL, KC_SPC),        	// FN24 - Tap = Space / Hold = Ctrl

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

