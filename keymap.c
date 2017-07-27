#include "gh60.h"
#include "action_layer.h"


enum {
	TD_ESC_CAPS = 0,
	TD_COPY,
	TD_PASTE,
	TD_UNDO,
	TD_PS,
	TD_TILD,
	TD_LESS,
	TD_GRT,
	TD_Q,
	TD_SEMI,
	TD_QUOT,
	TD_BRO,
	TD_BRC,
	TD_BSL,
	TD_UND,
	TD_PLUS,
	TD_A,
	TD_SAVE,
	TD_PRNT,
};





const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   /*
   *  Base layer, pretty standard ANSI layout.  Tap dance keys defined below.
   * ,-----------------------------------------------------------.
   * |ESC| 1|  2|  3|  4|  5|  6|  7|  8|  9|  0| -| =|Bcksp/Undo|
   * |-----------------------------------------------------------|
   * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
   * |-----------------------------------------------------------|
   * |Caps/Fn|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return |
   * |-----------------------------------------------------------|
   * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift     |
   * |-----------------------------------------------------------|
   * |Ctrl|Gui |Alt |    Space     |Alt_COPY|Fn  |Menu|Ctrl_PASTE|
   * `-----------------------------------------------------------'
   */
	KEYMAP(
        TD(TD_UNDO),KC_1,KC_2,KC_3,KC_4,KC_5,KC_6,KC_7,KC_8,KC_9,KC_0,TD(TD_UND),TD(TD_PLUS),KC_BSPC, \
	KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_Y,KC_U,KC_I,KC_O,KC_P,TD(TD_BRO),TD(TD_BRC),TD(TD_BSL), \
        LT(2, KC_CAPS),KC_A,KC_S,KC_D,KC_F,KC_G,KC_H,KC_J,KC_K,KC_L,TD(TD_SEMI),TD(TD_QUOT),KC_NO,KC_ENTER,  \
        KC_LSPO,KC_NO,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_N,KC_M,TD(TD_LESS),TD(TD_GRT),TD(TD_Q),KC_NO,KC_RSPC, \
        TD(TD_SAVE),TD(TD_PS),KC_LALT,        KC_SPC,      KC_NO,TD(TD_COPY),MO(1),TD(TD_PRNT),TD(TD_PASTE)),
   /*
   * Primary function layer, mostly the same as the traditional Pok3r layout.
   * ,-------------------------------------------------------------.
   * |`~ | F1| F2| F3| F4| F5| F6| F7| F8| F9| F10| F11| F12|DEL   |
   * |-------------------------------------------------------------|
   * |    |   | Up|   |  |  |Calc|PgUp|Up|PgDn|Ptscn|Srlck|Pause|  |
   * |-------------------------------------------------------------|
   * |    |LEFT|DOWN|RIGHT|   |   |Home|Left|Down|Rght|Ins|  |     |
   * |-------------------------------------------------------------|
   * |        |   |   |   |   |   |   |    |    |    |   |         |
   * |-------------------------------------------------------------|
   * |RESET|    |    |                          |    |    |    |   |
   * `-------------------------------------------------------------'
   */
	KEYMAP(
        TD(TD_TILD),KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F6,KC_F7,KC_F8,KC_F9,KC_F10,KC_F11,KC_F12,KC_DELETE, \
        KC_TRNS,KC_TRNS,KC_UP,KC_TRNS,KC_TRNS,KC_TRNS,KC_CALC,KC_PGUP,KC_UP,KC_PGDN,KC_PSCR,KC_SLCK,KC_PAUS,KC_TRNS, \
        KC_TRNS,KC_LEFT,KC_DOWN,KC_RGHT,KC_TRNS,KC_TRNS,KC_HOME,KC_LEFT,KC_DOWN,KC_RGHT,KC_INS,KC_TRNS,KC_TRNS,KC_TRNS, \
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_END,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
        RESET,KC_TRNS,KC_TRNS,          KC_TRNS,               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),	
	  /*
   * Macro layer, mostly React for now.  Fully defined below.
   * ,-------------------------------------------------------------.
   * |   |   |   |   |   |   |   |   |   |   |   |    |    |       |
   * |-------------------------------------------------------------|
   * |    |   |   |   |   |   |   |   |   |   |   |   |  |         |
   * |-------------------------------------------------------------|
   * |       |   | 4 | 6 | 2 |   |   |   |   |   |   |   |         |
   * |-------------------------------------------------------------|
   * |        |   |   | 0 | 1 | 5 | 3 |    |    |    |   |         |
   * |-------------------------------------------------------------|
   * |   |    |    |                          |    |    |    |     |
   * `-------------------------------------------------------------'
   */
	KEYMAP(
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
        KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
        KC_TRNS,KC_TRNS,M(4),M(6),M(2),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
        KC_TRNS,KC_TRNS,KC_TRNS,M(0),M(1),M(5),M(3),KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS, \
        RESET,KC_TRNS,KC_TRNS,          KC_TRNS,               KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS),

};


void grave(qk_tap_dance_state_t *state, void *user_data) {

  	switch (state->count) {
  		case 1:
    		register_code(KC_ESC);
    		break;
  		case 2:
    		register_code(KC_GRAVE);
   			break;
  		case 3:
    		register_code(KC_LSFT);
			register_code(KC_GRAVE);
			unregister_code(KC_LSFT);
	}
};

void caps_a(qk_tap_dance_state_t *state, void *user_data) {

  	switch (state->count) {
  		case 1:
    		register_code(KC_A);
    		break;
  		case 2:
    		register_code(KC_A);
			register_code(KC_A);
   			break;
  		case 3:
    		register_code(KC_LSFT);
			register_code(KC_A);
			unregister_code(KC_LSFT);
			break;
	}
};

qk_tap_dance_action_t tap_dance_actions[] = {
	[TD_ESC_CAPS]  = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),//    not currently used
	[TD_COPY] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_C), KC_RALT),//     single tap right alt to copy
	[TD_PASTE] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_V), KC_RCTL),//    single tap right control to paste
	[TD_UNDO] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, LCTL(KC_Z)),//      double tap ESCAPE to undo
	[TD_PS] = ACTION_TAP_DANCE_DOUBLE(KC_LGUI, LALT(KC_PSCR)),//    double tap GUI or OS key to alt(printscreen)
	[TD_TILD] = ACTION_TAP_DANCE_DOUBLE(KC_GRAVE, LSFT(KC_GRAVE)),//trying to single esc double grave triple tilde, not going great
	[TD_LESS] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, LSFT(KC_COMM)),//  double tap less than
	[TD_GRT] = ACTION_TAP_DANCE_DOUBLE(KC_DOT, LSFT(KC_DOT)),//     double tap greater than
	[TD_Q] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, LSFT(KC_SLSH)),//     double tap question mark
	[TD_SEMI] = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, LSFT(KC_SCLN)),//  double tap colon
	[TD_QUOT] = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, LSFT(KC_QUOT)),//  double tap double quotes
	[TD_BRO] = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, LSFT(KC_LBRC)),//   double tap left bracket
	[TD_BRC] = ACTION_TAP_DANCE_DOUBLE(KC_RBRC, LSFT(KC_RBRC)),//   double tap right bracket
	[TD_BSL] = ACTION_TAP_DANCE_DOUBLE(KC_BSLS, LSFT(KC_BSLS)),//   double tap for pipe
	[TD_UND] = ACTION_TAP_DANCE_DOUBLE(KC_MINS, LSFT(KC_MINS)),//   double tap underscore
	[TD_PLUS] = ACTION_TAP_DANCE_DOUBLE(KC_EQL, LSFT(KC_EQL)),//    double tap plus
	[TD_A] = ACTION_TAP_DANCE_FN(caps_a),//                         messing around with capitalization
	[TD_SAVE] = ACTION_TAP_DANCE_DOUBLE(KC_LCTL, LCTL(KC_S)),//     double tap left control to save
	[TD_PRNT] = ACTION_TAP_DANCE_DOUBLE(KC_APP, LCTL(KC_P)),//      double tap menu to print
};


const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch(id) {
            case 0:
                return MACRO(T(C),T(O),T(N),T(S),T(O),T(L),T(E),T(DOT),T(L),T(O),T(G),D(LSFT),T(9),T(0),U(LSFT),T(LEFT),END);
				//"console.log()" cursor in parentheses.
	    	case 1:
				return MACRO(T(C),T(L),T(A),T(S),T(S),T(SPC),D(LSFT),T(T),T(O),T(D),T(O),T(SCLN),U(LSFT),T(N),T(A),T(M),T(E),T(SPC),T(SPC),T(E),T(X),T(T),T(E),\
				T(N),T(D),T(S),T(SPC),D(LSFT),T(R),U(LSFT),T(E),T(A),T(C),T(T),T(DOT),D(LSFT),T(C),U(LSFT),T(O),T(M),T(P),T(O),T(N),T(E),T(N),T(T),END);
				//"class TODO:name extends React.Component"
			case 2:
				return MACRO(T(F),T(U),T(N),T(C),T(T),T(I),T(O),T(N),T(SPC),D(LSFT),T(T),T(O),T(D),T(O),T(SCLN),U(LSFT),T(N),T(A),T(M),T(E),T(SPC),D(LSFT),T(9),\
				U(LSFT),T(P),T(R),T(O),T(P),T(S),D(LSFT),T(0),U(LSFT),END);
				//"function TODO:name (props)"
			case 3:
				SEND_STRING("constructor(props)");
				return false;
			case 4:
				SEND_STRING("super(props)");
				return false;
			case 5:
				return MACRO(T(T),T(H),T(I),T(S),T(DOT),T(S),T(E),T(T),D(LSFT),T(S),U(LSFT),T(T),T(A),T(T),T(E),D(LSFT),T(9),T(LBRC),T(RBRC),T(0),U(LSFT),T(LEFT),T(LEFT),END);
				//"this.setState({})" cursor inside brackets.
			case 6:
				return MACRO(T(D),T(O),T(C),T(U),T(M),T(E),T(N),T(T),T(DOT),T(G),T(E),T(T),D(LSFT),T(E),U(LSFT),T(L),T(E),T(M),T(E),T(N),T(T),D(LSFT),T(B),U(LSFT),\
				T(Y),D(LSFT),T(I),U(LSFT),T(D),D(LSFT),T(9),T(0),U(LSFT),T(LEFT),T(QUOT),T(QUOT),T(LEFT),END);
				//"document.getElementById('')" cursor inside quotes.
			case 7:
				return MACRO(T(D),T(O),T(C),T(U),T(M),T(E),T(N),T(T),T(DOT),T(G),T(E),T(T),D(LSFT),T(E),U(LSFT),T(L),T(E),T(M),T(E),T(N),T(T),T(S),D(LSFT),T(B),U(LSFT),\
				T(Y),D(LSFT),T(T),U(LSFT),T(A),T(G),D(LSFT),T(N),U(LSFT),T(A),T(M),T(E),D(LSFT),T(9),T(0),U(LSFT),T(LEFT),T(QUOT),T(QUOT),T(LEFT),END);
				//"document.getElementsByTagName('')" cursor inside quotes.
        }
    }
    return MACRO_NONE;
};

