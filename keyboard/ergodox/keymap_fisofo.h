static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
		See SVG file
     */

    KEYMAP(  // layout: layer 0: qwerty
        // left hand
        ESC,    1,   2,   3,   4,   5,   GRV,
        TAB,    Q,   W,   E,   R,   T,   FN1,
        LGUI,   A,   S,   D,   F,   G,
        FN11,   Z,   X,   C,   V,   B,   ENT,
        LCTL,LALT, APP,LALT,LCTL,
								     VOLU,VOLD,
										  PSCR,
                                 FN3, FN7, INS,
        // right hand
             EQL, 6,   7,   8,   9,   0,   MINS,
			 FN2, Y,   U,   I,   O,   P,   BSLS,
                  H,   J,   K,   L,   SCLN,QUOT,
			BSPC, N,   M,   COMM,DOT, SLSH,FN12,
                       SPC, FN4,  APP,RALT,RCTL,
        FN13,FN14,
        FN15,
         DEL, FN9,FN10
    ),


	KEYMAP(  // layout: layer 1: colemak
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,   F,   P,   G, FN5,
        TRNS,TRNS,   A,   R,   S,   D,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,   J,   L,   U,   Y,SCLN,TRNS,
			      TRNS,   N,   E,   I,   O,TRNS,
             TRNS,   K,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

	KEYMAP(  // layout: layer 2: gaming
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

    KEYMAP(  // layout: layer 3: F-keys instead of numbers
        // left hand
        FN16,  F1,  F2,  F3,  F4,  F5, F12,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                   NO,TRNS,TRNS,
        // right hand
		   FN19,  F6,  F7,  F8,  F9, F10, F11,
             NO,  NO,HOME,  UP, END,  NO,TRNS,
                  NO,LEFT,DOWN,RGHT,  NO,TRNS,
           TRNS,  NO,PGUP,  NO,PGDN,  NO,TRNS,
                     TRNS,  NO,TRNS,TRNS,TRNS,
        FN17,FN18,
        TRNS,
        TRNS,TRNS,NO
    ),

    KEYMAP(  // layout: layer 4: mouse + numpad
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,BTN1,MS_U,BTN2,WH_U,TRNS,
        TRNS,TRNS,MS_L,MS_D,MS_R,WH_D,
        TRNS,TRNS,WH_L,BTN3,WH_R,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,  NO,TRNS,
        // right hand
             TRNS,  NO,NLCK,PSLS,PAST,PMNS,TRNS,
             TRNS, ESC,  P7,  P8,  P9,PPLS,TRNS,
                  CALC,  P4,  P5,  P6,PPLS,TRNS,
             TRNS,  NO,  P1,  P2,  P3,PENT,TRNS,
                         P0, FN8,PDOT,PENT,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,  NO,TRNS
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
    ACTION_LAYER_SET(0, ON_BOTH),     		     	// FN0  - Set to  layer 0|Qwerty; unused
    ACTION_LAYER_ON(1, ON_PRESS),					// FN1  - turn on layer 1|Colemak
    ACTION_LAYER_ON(2, ON_PRESS),	       			// FN2  - turn on Layer 2|Gaming
    ACTION_LAYER_TAP_KEY(3, KC_BSPC),				// FN3  - Tap = BackSpace / Hold = Layer 3|Navigation+F-keys
	ACTION_LAYER_ON(4, ON_PRESS),   				// FN4  - turn on Layer 4|Numpad+Mouse

	ACTION_LAYER_OFF(1, ON_PRESS),					// FN5  - turn off layer 1|Colemak
	ACTION_LAYER_OFF(2, ON_PRESS),		       		// FN6  - turn off Layer 2|Gaming
	ACTION_LAYER_TAP_KEY(4, KC_DEL),				// FN7  - Tap = Delete / Hold = Layer 4|Numbpad+Mouse
	ACTION_LAYER_OFF(4, ON_PRESS),      			// FN8  - turn off Layer 4|Numbpad+Mouse

	ACTION_LAYER_TAP_KEY(4, KC_INS),				// FN9  - Tap = Insert / Hold = Layer 4|Numbpad+Mouse
	ACTION_LAYER_TAP_KEY(3, KC_ENT),				// FN10 - Tap = Enter / Hold = Layer 3|Navigation+F-keys

	ACTION_MODS_TAP_KEY(MOD_LSFT, KC_LBRC),         // FN11 - Tap = [ { / Hold = LShift
	ACTION_MODS_TAP_KEY(MOD_RSFT, KC_RBRC),         // FN12 - Tap = ] } / Hold = RShift

    ACTION_MODS_KEY(MOD_LGUI, KC_LEFT),				// FN13 - Win+Left
	ACTION_MODS_KEY(MOD_LGUI, KC_RGHT),				// FN14 - Win+Right
    ACTION_MODS_KEY(MOD_LGUI, KC_UP),				// FN15 - Win+Up
    ACTION_MODS_KEY(MOD_LALT, KC_F4),				// FN16 - Alt+F4
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_DEL),	// FN17 - Ctrl+Alt+Del
    ACTION_MODS_KEY(MOD_LCTL | MOD_LALT, KC_END),	// FN18 - Ctrl+Alt+End
	ACTION_FUNCTION(TEENSY_KEY),                    // FN19 - Teensy key

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

