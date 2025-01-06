
#include QMK_KEYBOARD_H
#include "3x5_mini_3_track.h"
#include "print.h"

// LAYERS
#define _ALP 0 // Base
#define _MOU 1 // Mouse
#define _SYM 2 // Symbol
#define _SYR 3 // Symbol Raised
#define _NUM 4 // Number
#define _NAV 5 // Navigation
#define _NAI 6 // Navigation VIM
#define _NAR 7 // Navigation Raised
#define _NAS 8 // Navigation Raised VIM
#define _FUN 9 // Function
#define _FUR 10 // Function Raised
#define _QWE 11 // Qwerty

// // LAYER CODES
// #define ALP MO(_ALP)
// #define MOU MO(_MOU)
// #define SYM MO(_SYM)
// #define SYR MO(_SYR)
// #define NUM MO(_NUM)
// #define NAV MO(_NAV)
// #define NAI MO(_NAI)
// #define NAR MO(_NAR)
// #define NAS MO(_NAS)
// #define FUN MO(_FUN)
// #define FUR MO(_FUR)
// #define QWE MO(_QWE)

enum custom_keycodes {
    WYLD_AUTO_MS_TOG = SAFE_RANGE,
    // MOD_LCBR,
    // MOD_LPAR,
    // DRAG_SCROLL,
    // DRAG_SLOW,
    // DRAG_NAV,

    // // Base Home Row Mods
    // TD_ALMP, // R
    // TD_ALMR, // S
    // TD_ALMM, // N
    // TD_ALMI, // D
    // TD_ARMI, // A
    // TD_ARMM, // E
    // TD_ARMR, // I
    // TD_ARMP, // H
    // // Symbol Home Row Mods
    // TD_SLMP, // <
    // TD_SLMR, // {
    // TD_SLMM, // [
    // TD_SLMI, // (
    // TD_SRMI, // )
    // TD_SRMM, // ]
    // TD_SRMR, // }
    // TD_SRMP, // >
    // // Symbol Raised Home Row Mods
    // TD_TLMP, // $
    // TD_TLMR, // ?
    // TD_TLMM, // &
    // TD_TLMI, // :
    // TD_TRMI, // ;
    // TD_TRMM, // |
    // TD_TRMR, // !
    // TD_TRMP, // /
    // // Number Home Row Mods
    // TD_NLMP, // ,
    // TD_NLMR, // -
    // TD_NLMM, // +
    // TD_NLMI, // =
    // TD_NRMI, // 4
    // TD_NRMM, // 5
    // TD_NRMR, // 6
    // TD_NRMP, // .
    // // Navigation Home Row Mods
    // TD_VLMP, // _______
    // TD_VLMR, // _______
    // TD_VLMM, // _______
    // TD_VLMI, // _______
    // // Navigation VIM Home Row Mods
    // TD_ILMP, // _______
    // TD_ILMR, // _______
    // TD_ILMM, // _______
    // TD_ILMI, // _______
    // // Navigation Raised Home Row Mods
    // TD_WLMP, // _______
    // TD_WLMR, // _______
    // TD_WLMM, // _______
    // TD_WLMI, // _______
    // // Navigation Raised VIM Home Row Mods
    // TD_JLMP, // _______
    // TD_JLMR, // _______
    // TD_JLMM, // _______
    // TD_JLMI, // _______
    // // Function Home Row Mods
    // TD_FLMP, // Redo
    // TD_FLMR, // Paste
    // TD_FLMM, // Cut
    // TD_FLMI, // Copy
    // TD_FRMI, // F4
    // TD_FRMM, // F5
    // TD_FRMR, // F6
    // TD_FRMP, // F11
    // // Function Raised Home Row Mods
    // TD_GLMP, // F20
    // TD_GLMR, // F19
    // TD_GLMM, // F18
    // TD_GLMI, // F17
    // TD_GRMI, // F21
    // TD_GRMM, // F22
    // TD_GRMR, // F23
    // TD_GRMP, // F24
    // // Qwerty Home Row Mods
    // TD_QLMP, // KC_A
    // TD_QLMR, // KC_S
    // TD_QLMM, // KC_D
    // TD_QLMI, // KC_F
    // TD_QRMI, // KC_J
    // TD_QRMM, // KC_K
    // TD_QRMR, // KC_L
    // TD_QRMP, // KC_SCLN
};

// Alp
#define Altp KC_NO
#define Altr KC_G
#define Altm KC_M
#define Alti KC_P
#define Altn KC_NO
#define Artn KC_NO
#define Arti KC_B
#define Artm KC_W
#define Artr KC_V
#define Artp KC_NO
#define Almp KC_R
#define Almr KC_S
#define Almm KC_N
#define Almi KC_D
#define Almn KC_COMM
#define Armn KC_DOT
#define Armi KC_A
#define Armm KC_E
#define Armr KC_I
#define Armp KC_H
#define Albp KC_QUOT
#define Albr KC_F
#define Albm KC_L
#define Albi KC_C
#define Albn KC_NO
#define Arbn KC_NO
#define Arbi KC_U
#define Arbm KC_O
#define Arbr KC_Y
#define Arbp KC_DQT
#define Alt0 LT(_NAV, CAPS_WORD)
#define Alt1 LT(_NUM, KC_T)
#define Alt2 SNIPING_MODE_TOGGLE
#define Art0 LT(_FUN, KC_BSPC)
#define Art1 LT(_SYM, KC_SPC)
#define Art2 LT(_NAV, MAGIC)
#define Alt3 DRAGSCROLL_MODE_TOGGLE
#define Alt4 QWERTY_MODE_TOGGLE
#define Alec S(A(KC_ESC))
#define AleP G(KC_C)
#define AleC A(KC_ESC)
#define Arec C(KC_PGDN)
#define AreP C(KC_TAB)
#define AreC C(KC_PGUP)
// Mou
#define Mltp _______
#define Mltr _______
#define Mltm _______
#define Mlti _______
#define Mltn _______
#define Mrtn _______
#define Mrti _______
#define Mrtm _______
#define Mrtr _______
#define Mrtp _______
#define Mlmp _______
#define Mlmr _______
#define Mlmm _______
#define Mlmi _______
#define Mlmn _______
#define Mrmn _______
#define Mrmi _______
#define Mrmm _______
#define Mrmr _______
#define Mrmp _______
#define Mlbp _______
#define Mlbr _______
#define Mlbm _______
#define Mlbi _______
#define Mlbn _______
#define Mrbn _______
#define Mrbi _______
#define Mrbm _______
#define Mrbr _______
#define Mrbp _______
#define Mlt0 KC_BTN2
#define Mlt1 KC_BTN1
#define Mlt2 _______
#define Mrt0 _______
#define Mrt1 _______
#define Mrt2 _______
#define Mlt3 KC_BTN3
#define Mlt4 _______
#define Mlec _______
#define MleP _______
#define MleC _______
#define Mrec _______
#define MreP _______
#define MreC _______
// Sym
#define Sltp _______
#define Sltr _______
#define Sltm _______
#define Slti _______
#define Sltn _______
#define Srtn _______
#define Srti _______
#define Srtm _______
#define Srtr _______
#define Srtp _______
#define Slmp KC_LT
#define Slmr KC_LCBR
#define Slmm KC_LBRC
#define Slmi KC_LPRN
#define Slmn _______
#define Srmn _______
#define Srmi KC_RPRN
#define Srmm KC_RBRC
#define Srmr KC_RPAR
#define Srmp KC_GT
#define Slbp _______
#define Slbr KC_AT
#define Slbm KC_BSLS
#define Slbi KC_SLSH
#define Slbn _______
#define Srbn _______
#define Srbi KC_GRV
#define Srbm KC_TILD
#define Srbr KC_HASH
#define Srbp _______
#define Slt0 _______
#define Slt1 _______
#define Slt2 _______
#define Srt0 LT(_NAR, KC_NO)
#define Srt1 LT(SYR, KC_UNDS)
#define Srt2 _______
#define Slt3 _______
#define Slt4 _______
#define Slec _______
#define SleP _______
#define SleC _______
#define Srec _______
#define SreP _______
#define SreC _______
// Sym Raised
#define Tltp _______
#define Tltr _______
#define Tltm _______
#define Tlti _______
#define Tltn _______
#define Trtn _______
#define Trti _______
#define Trtm _______
#define Trtr _______
#define Trtp _______
#define Tlmp KC_DLR
#define Tlmr KC_QUES
#define Tlmm KC_AMPR
#define Tlmi KC_COLN
#define Tlmn _______
#define Trmn _______
#define Trmi KC_SCLN
#define Trmm KC_PIPE
#define Trmr KC_EXLM
#define Trmp KC_SLSH
#define Tlbp _______
#define Tlbr _______
#define Tlbm _______
#define Tlbi _______
#define Tlbn _______
#define Trbn _______
#define Trbi _______
#define Trbm _______
#define Trbr _______
#define Trbp _______
#define Tlt0 _______
#define Tlt1 _______
#define Tlt2 _______
#define Trt0 _______
#define Trt1 _______
#define Trt2 _______
#define Tlt3 _______
#define Tlt4 _______
#define Tlec _______
#define TleP _______
#define TleC _______
#define Trec _______
#define TreP _______
#define TreC _______
// Num
#define Nltp _______
#define Nltr _______
#define Nltm _______
#define Nlti _______
#define Nltn _______
#define Nrtn _______
#define Nrti KC_7
#define Nrtm KC_8
#define Nrtr KC_9
#define Nrtp _______
#define Nlmp KC_COMM
#define Nlmr KC_MINS
#define Nlmm KC_PLUS
#define Nlmi KC_EQL
#define Nlmn _______
#define Nrmn _______
#define Nrmi KC_4
#define Nrmm KC_5
#define Nrmr KC_6
#define Nrmp KC_DOT
#define Nlbp _______
#define Nlbr KC_CIRC
#define Nlbm KC_ASTR
#define Nlbi KC_PERC
#define Nlbn _______
#define Nrbn _______
#define Nrbi KC_1
#define Nrbm KC_2
#define Nrbr KC_3
#define Nrbp _______
#define Nlt0 _______
#define Nlt1 _______
#define Nlt2 _______
#define Nrt0 LT(_FUR, KC_NO)
#define Nrt1 LT(_SYR, KC_0)
#define Nrt2 _______
#define Nlt3 _______
#define Nlt4 _______
#define Nlec _______
#define NleP _______
#define NleC _______
#define Nrec _______
#define NreP _______
#define NreC _______
// Nav
#define Vltp _______
#define Vltr _______
#define Vltm _______
#define Vlti _______
#define Vltn _______
#define Vrtn _______
#define Vrti WINDOW_LEFT
#define Vrtm WINDOW_DOWN
#define Vrtr WINDOW_UP
#define Vrtp WINDOW_RIGHT
#define Vlmp _______
#define Vlmr _______
#define Vlmm _______
#define Vlmi _______
#define Vlmn _______
#define Vrmn _______
#define Vrmi KC_LEFT
#define Vrmm KC_DOWN
#define Vrmr KC_UP
#define Vrmp KC_RGHT
#define Vlbp _______
#define Vlbr _______
#define Vlbm _______
#define Vlbi _______
#define Vlbn _______
#define Vrbn _______
#define Vrbi _______
#define Vrbm TAB_PREV
#define Vrbr TAB_NEXT
#define Vrbp _______
#define Vlt0 _______
#define Vlt1 _______
#define Vlt2 _______
#define Vrt0 _______
#define Vrt1 LT(_NAR, KC_NO)
#define Vrt2 _______
#define Vlt3 _______
#define Vlt4 _______
#define Vlec _______
#define VleP QK_BOOT
#define VleC _______
#define Vrec _______
#define VreP _______
#define VreC _______
// Nav VIM
#define Iltp _______
#define Iltr _______
#define Iltm _______
#define Ilti _______
#define Iltn _______
#define Irtn _______
#define Irti WINDOW_LEFT
#define Irtm WINDOW_DOWN
#define Irtr WINDOW_UP
#define Irtp WINDOW_RIGHT
#define Ilmp _______
#define Ilmr _______
#define Ilmm _______
#define Ilmi _______
#define Ilmn _______
#define Irmn _______
#define Irmi KC_H
#define Irmm KC_J
#define Irmr KC_K
#define Irmp KC_L
#define Ilbp _______
#define Ilbr _______
#define Ilbm _______
#define Ilbi _______
#define Ilbn _______
#define Irbn _______
#define Irbi KC_B
#define Irbm TAB_PREV
#define Irbr TAB_NEXT
#define Irbp KC_E
#define Ilt0 _______
#define Ilt1 _______
#define Ilt2 _______
#define Irt0 _______
#define Irt1 _______
#define Irt2 _______
#define Ilt3 _______
#define Ilt4 _______
#define Ilec _______
#define IleP QK_BOOT
#define IleC _______
#define Irec _______
#define IreP _______
#define IreC _______
// Nav Raised
#define Wltp _______
#define Wltr _______
#define Wltm _______
#define Wlti _______
#define Wltn _______
#define Wrtn _______
#define Wrti MOVE_WINDOW_LEFT
#define Wrtm MOVE_WINDOW_DOWN
#define Wrtr MOVE_WINDOW_UP
#define Wrtp MOVE_WINDOW_RIGHT
#define Wlmp _______
#define Wlmr _______
#define Wlmm _______
#define Wlmi _______
#define Wlmn _______
#define Wrmn _______
#define Wrmi KC_HOME
#define Wrmm KC_PGDN
#define Wrmr KC_PGUP
#define Wrmp KC_END
#define Wlbp _______
#define Wlbr _______
#define Wlbm _______
#define Wlbi _______
#define Wlbn _______
#define Wrbn _______
#define Wrbi ADJUST_WINDOW_LEFT
#define Wrbm WINDOW_FORWARD
#define Wrbr WINDOW_BACK
#define Wrbp ADJUST_WINDOW_RIGHT
#define Wlt0 _______
#define Wlt1 _______
#define Wlt2 _______
#define Wrt0 _______
#define Wrt1 _______
#define Wrt2 _______
#define Wlt3 _______
#define Wlt4 _______
#define Wlec _______
#define WleP _______
#define WleC _______
#define Wrec _______
#define WreP _______
#define WreC _______
// Nav VIM Raised
#define Jltp _______
#define Jltr _______
#define Jltm _______
#define Jlti _______
#define Jltn _______
#define Jrtn _______
#define Jrti MOVE_WINDOW_LEFT
#define Jrtm MOVE_WINDOW_DOWN
#define Jrtr MOVE_WINDOW_UP
#define Jrtp MOVE_WINDOW_RIGHT
#define Jlmp _______
#define Jlmr _______
#define Jlmm _______
#define Jlmi _______
#define Jlmn _______
#define Jrmn _______
#define Jrmi VIM_0
#define Jrmm C(KC_D)
#define Jrmr C(KC_B)
#define Jrmp DLR
#define Jlbp _______
#define Jlbr _______
#define Jlbm _______
#define Jlbi _______
#define Jlbn _______
#define Jrbn _______
#define Jrbi ADJUST_WINDOW_LEFT
#define Jrbm WINDOW_FORWARD
#define Jrbr WINDOW_BACK
#define Jrbp ADJUST_WINDOW_RIGHT
#define Jlt0 _______
#define Jlt1 _______
#define Jlt2 _______
#define Jrt0 _______
#define Jrt1 _______
#define Jrt2 _______
#define Jlt3 _______
#define Jlt4 _______
#define Jlec _______
#define JleP _______
#define JleC _______
#define Jrec _______
#define JreP _______
#define JreC _______
// Fun
#define Fltp MUTE
#define Fltr VOL_UP
#define Fltm VOL_DN
#define Flti MIC_MUTE
#define Fltn _______
#define Frtn ______
#define Frti KC_F7
#define Frtm KC_F8
#define Frtr KC_F9
#define Frtp KC_F12
#define Flmp KC_F16
#define Flmr KC_F15
#define Flmm KC_F14
#define Flmi KC_F13
#define Flmn _______
#define Frmn _______
#define Frmi KC_F4
#define Frmm KC_F5
#define Frmr KC_F6
#define Frmp KC_F11
#define Flbp KC_F16
#define Flbr KC_F15
#define Flbm KC_F14
#define Flbi KC_F13
#define Flbn _______
#define Frbn _______
#define Frbi KC_F1
#define Frbm KC_F2
#define Frbr KC_F3
#define Frbp KC_F4
#define Flt0 _______
#define Flt1 LT(_FUR, C(KC_Z))
#define Flt2 _______
#define Frt0 _______
#define Frt1 _______
#define Frt2 _______
#define Flt3 _______
#define Flt4 _______
#define Flec _______
#define FleP _______
#define FleC _______
#define Frec _______
#define FreP QK_BOOT
#define FreC _______
// Fun Raised
#define Gltp _______
#define Gltr _______
#define Gltm _______
#define Glti _______
#define Gltn _______
#define Grtn _______
#define Grti _______
#define Grtm _______
#define Grtr _______
#define Grtp _______
#define Glmp KC_F20
#define Glmr KC_F19
#define Glmm KC_F18
#define Glmi KC_F17
#define Glmn _______
#define Grmn _______
#define Grmi KC_F21
#define Grmm KC_F22
#define Grmr KC_F23
#define Grmp KC_F24
#define Glbp _______
#define Glbr _______
#define Glbm _______
#define Glbi _______
#define Glbn _______
#define Grbn _______
#define Grbi _______
#define Grbm _______
#define Grbr _______
#define Grbp _______
#define Glt0 _______
#define Glt1 _______
#define Glt2 _______
#define Grt0 _______
#define Grt1 _______
#define Grt2 _______
#define Glt3 _______
#define Glt4 _______
#define Glec _______
#define GleP _______
#define GleC _______
#define Grec _______
#define GreP _______
#define GreC _______
// Qwerty
#define Qltp KC_Q
#define Qltr KC_W
#define Qltm KC_E
#define Qlti KC_R
#define Qltn KC_T
#define Qrtn KC_Y
#define Qrti KC_U
#define Qrtm KC_I
#define Qrtr KC_O
#define Qrtp KC_P
#define Qlmp KC_A
#define Qlmr KC_S
#define Qlmm KC_D
#define Qlmi KC_F
#define Qlmn KC_G
#define Qrmn KC_H
#define Qrmi KC_J
#define Qrmm KC_K
#define Qrmr KC_L
#define Qrmp KC_SCLN
#define Qlbp KC_Z
#define Qlbr KC_X
#define Qlbm KC_C
#define Qlbi KC_V
#define Qlbn KC_B
#define Qrbn KC_N
#define Qrbi KC_M
#define Qrbm KC_COMM
#define Qrbr KC_DOT
#define Qrbp KC_SLSH
#define Qlt0 _______
#define Qlt1 _______
#define Qlt2 _______
#define Qrt0 _______
#define Qrt1 _______
#define Qrt2 _______
#define Qlt3 _______
#define Qlt4 _______
#define Qlec _______
#define QleP _______
#define QleC _______
#define Qrec _______
#define QreP _______
#define QreC _______

// KEYMAPS
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_ALP] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Altp , Altr , Altm , Alti , Altn ,                             Artn , Arti , Artm , Artr , Artp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Almp , Almr , Almm , Almi , Almn , AleP ,               AreP , Armn , Armi , Armm , Armr , Armp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Albp , Albr , Albm , Albi , Albn ,                             Arbn , Arbi , Arbm , Arbr , Arbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Alt0 , Alt1 , Alt2 ,                                                         Art0 , Art1 , Art2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Alt3 , Alt4
	),

	[_MOU] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Mltp , Mltr , Mltm , Mlti , Mltn ,                             Mrtn , Mrti , Mrtm , Mrtr , Mrtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Mlmp , Mlmr , Mlmm , Mlmi , Mlmn , MleP ,               MreP , Mrmn , Mrmi , Mrmm , Mrmr , Mrmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Mlbp , Mlbr , Mlbm , Mlbi , Mlbn ,                             Mrbn , Mrbi , Mrbm , Mrbr , Mrbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Mlt0 , Mlt1 , Mlt2 ,                                                         Mrt0 , Mrt1 , Mrt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Mlt3 , Mlt4
	),

	[_SYM] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Sltp , Sltr , Sltm , Slti , Sltn ,                             Srtn , Srti , Srtm , Srtr , Srtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Slmp , Slmr , Slmm , Slmi , Slmn , SleP ,               SreP , Srmn , Srmi , Srmm , Srmr , Srmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Slbp , Slbr , Slbm , Slbi , Slbn ,                             Srbn , Srbi , Srbm , Srbr , Srbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Slt0 , Slt1 , Slt2 ,                                                         Srt0 , Srt1 , Srt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Slt3 , Slt4
	),

	[_SYR] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Tltp , Tltr , Tltm , Tlti , Tltn ,                             Trtn , Trti , Trtm , Trtr , Trtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Tlmp , Tlmr , Tlmm , Tlmi , Tlmn , TleP ,               TreP , Trmn , Trmi , Trmm , Trmr , Trmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Tlbp , Tlbr , Tlbm , Tlbi , Tlbn ,                             Trbn , Trbi , Trbm , Trbr , Trbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Tlt0 , Tlt1 , Tlt2 ,                                                         Trt0 , Trt1 , Trt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Tlt3 , Tlt4
	),

	[_NUM] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Nltp , Nltr , Nltm , Nlti , Nltn ,                             Nrtn , Nrti , Nrtm , Nrtr , Nrtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Nlmp , Nlmr , Nlmm , Nlmi , Nlmn , NleP ,               NreP , Nrmn , Nrmi , Nrmm , Nrmr , Nrmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Nlbp , Nlbr , Nlbm , Nlbi , Nlbn ,                             Nrbn , Nrbi , Nrbm , Nrbr , Nrbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Nlt0 , Nlt1 , Nlt2 ,                                                         Nrt0 , Nrt1 , Nrt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Nlt3 , Nlt4
	),

	[_NAV] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Vltp , Vltr , Vltm , Vlti , Vltn ,                             Vrtn , Vrti , Vrtm , Vrtr , Vrtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Vlmp , Vlmr , Vlmm , Vlmi , Vlmn , VleP ,               VreP , Vrmn , Vrmi , Vrmm , Vrmr , Vrmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Vlbp , Vlbr , Vlbm , Vlbi , Vlbn ,                             Vrbn , Vrbi , Vrbm , Vrbr , Vrbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Vlt0 , Vlt1 , Vlt2 ,                                                         Vrt0 , Vrt1 , Vrt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Vlt3 , Vlt4
	),

	[_NAI] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Iltp , Iltr , Iltm , Ilti , Iltn ,                             Irtn , Irti , Irtm , Irtr , Irtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Ilmp , Ilmr , Ilmm , Ilmi , Ilmn , IleP ,               IreP , Irmn , Irmi , Irmm , Irmr , Irmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Ilbp , Ilbr , Ilbm , Ilbi , Ilbn ,                             Irbn , Irbi , Irbm , Irbr , Irbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Ilt0 , Ilt1 , Ilt2 ,                                                         Irt0 , Irt1 , Irt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Ilt3 , Ilt4
	),

	[_NAR] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Wltp , Wltr , Wltm , Wlti , Wltn ,                             Wrtn , Wrti , Wrtm , Wrtr , Wrtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Wlmp , Wlmr , Wlmm , Wlmi , Wlmn , WleP ,               WreP , Wrmn , Wrmi , Wrmm , Wrmr , Wrmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Wlbp , Wlbr , Wlbm , Wlbi , Wlbn ,                             Wrbn , Wrbi , Wrbm , Wrbr , Wrbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Wlt0 , Wlt1 , Wlt2 ,                                                         Wrt0 , Wrt1 , Wrt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Wlt3 , Wlt4
	),

	[_NAS] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Jltp , Jltr , Jltm , Jlti , Jltn ,                             Jrtn , Jrti , Jrtm , Jrtr , Jrtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Jlmp , Jlmr , Jlmm , Jlmi , Jlmn , JleP ,               JreP , Jrmn , Jrmi , Jrmm , Jrmr , Jrmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Jlbp , Jlbr , Jlbm , Jlbi , Jlbn ,                             Jrbn , Jrbi , Jrbm , Jrbr , Jrbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Jlt0 , Jlt1 , Jlt2 ,                                                         Jrt0 , Jrt1 , Jrt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Jlt3 , Jlt4
	),

	[_FUN] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Fltp , Fltr , Fltm , Flti , Fltn ,                             Frtn , Frti , Frtm , Frtr , Frtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Flmp , Flmr , Flmm , Flmi , Flmn , FleP ,               FreP , Frmn , Frmi , Frmm , Frmr , Frmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Flbp , Flbr , Flbm , Flbi , Flbn ,                             Frbn , Frbi , Frbm , Frbr , Frbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Flt0 , Flt1 , Flt2 ,                                                         Frt0 , Frt1 , Frt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Flt3 , Flt4
	),

	[_FUR] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Gltp , Gltr , Gltm , Glti , Gltn ,                             Grtn , Grti , Grtm , Grtr , Grtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Glmp , Glmr , Glmm , Glmi , Glmn , GleP ,               GreP , Grmn , Grmi , Grmm , Grmr , Grmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Glbp , Glbr , Glbm , Glbi , Glbn ,                             Grbn , Grbi , Grbm , Grbr , Grbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Glt0 , Glt1 , Glt2 ,                                                         Grt0 , Grt1 , Grt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Glt3 , Glt4
	),
};

#ifdef POINTING_DEVICE_COMBINED

// static void check_drag(report_mouse_t* mouse_report) {
//     static int16_t scroll_buffer_x = 0;
//     static int16_t scroll_buffer_y = 0;

// #    ifdef CHARYBDIS_DRAGSCROLL_REVERSE_X
//     scroll_buffer_x -= mouse_report->x;
// #    else
//     scroll_buffer_x += mouse_report->x;
// #    endif  // CHARYBDIS_DRAGSCROLL_REVERSE_X
// #    ifdef CHARYBDIS_DRAGSCROLL_REVERSE_Y
//     scroll_buffer_y -= mouse_report->y;
// #    else
//     scroll_buffer_y += mouse_report->y;
// #    endif  // CHARYBDIS_DRAGSCROLL_REVERSE_Y
//     mouse_report->x = 0;
//     mouse_report->y = 0;
//     if (abs(scroll_buffer_x) > 6) {
//         mouse_report->h = scroll_buffer_x > 0 ? 1 : -1;
//         scroll_buffer_x = 0;
//     }
//     if (abs(scroll_buffer_y) > 6) {
//         mouse_report->v = scroll_buffer_y > 0 ? 1 : -1;
//         scroll_buffer_y = 0;
//     }
// }

// report_mouse_t pointing_device_task_combined_user(report_mouse_t left_report, report_mouse_t right_report) {
//     check_drag(&left_report); // updated in trackball.c
//     return pointing_device_combine_reports(left_report, right_report);
// }
#endif

void pointing_device_init_user(void) {
#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
    set_auto_mouse_enable(true);
    pointing_device_set_cpi(1600);
#endif
#ifdef POINTING_DEVICE_COMBINED
    pointing_device_set_cpi_on_side(true, CHARYBDIS_DRAGSCROLL_DPI); // LEFT
    pointing_device_set_cpi_on_side(false, 2000);  // RIGHT
#endif// always required before the auto mouse feature will work
}

uint16_t prior_keycode = KC_NO;
uint16_t ADAPTIVE_TERM = 250; // 100ms

bool process_adaptive_key(uint16_t *calling_keycode, const keyrecord_t *record) {

    bool return_state = true; // assume we don't do anything.
    uint16_t keycode = *calling_keycode;

    // K, this could be adaptive, so process.
    uint8_t saved_mods = get_mods();

    if (!is_caps_word_on()) { // turn off shift, (first-words & Proper nouns)
        unregister_mods(MOD_MASK_SHIFT);  //CAPS_WORD/LOCK won't be affected.
    } // may want more granular control than this…

    switch (keycode & QK_BASIC_MAX) { // process ignoring multi-function keys
		case KC_E:
			switch (prior_keycode) {
				case KC_A:
					tap_code16(KC_U);
					return_state = false;
					break;
			}
			break;
		case MAGIC:
			switch (prior_keycode) {
				case KC_A:
					tap_code16(KC_Y);
					return_state = false;
					break;
				case KC_B:
					tap_code16(KC_U);
					return_state = false;
					break;
				case KC_G:
					tap_code16(KC_H);
					return_state = false;
					break;
				case KC_M:
					tap_code16(KC_S);
					return_state = false;
					break;
				case KC_P:
					tap_code16(KC_H);
					return_state = false;
					break;
				case KC_V:
					tap_code16(KC_E);
					return_state = false;
					break;
				case KC_W:
					tap_code16(KC_O);
					return_state = false;
					break;
				case TD(3):
					tap_code16(KC_H);
					return_state = false;
					break;
				case TD(5):
					tap_code16(KC_W);
					return_state = false;
					break;
				case KC_E:
					tap_code16(KC_X);
					return_state = false;
					break;
				case TD(4):
					tap_code(KC_BSPC);
					tap_code16(KC_Q);
					tap_code16(KC_U);
					return_state = false;
					break;
				case KC_S:
					tap_code(KC_H);
					return_state = false;
					break;
				case KC_T:
					tap_code(KC_H);
					return_state = false;
					break;
				case KC_Q:
					tap_code(KC_BSPC);
					tap_code16(KC_J);
					tap_code16(KC_A);
					tap_code16(KC_K);
					tap_code16(KC_E);
					tap_code16(KC_K);
					tap_code16(KC_A);
					tap_code16(KC_U);
					tap_code16(KC_S);
					tap_code16(KC_L);
					tap_code16(KC_E);
					tap_code16(KC_R);
					tap_code16(KC_AT);
					tap_code16(KC_G);
					tap_code16(KC_M);
					tap_code16(KC_A);
					tap_code16(KC_I);
					tap_code16(KC_L);
					tap_code16(KC_DOT);
					tap_code16(KC_C);
					tap_code16(KC_O);
					tap_code16(KC_M);
					return_state = false;
					break;
				case KC_Z:
					tap_code(KC_BSPC);
					tap_code16(KC_J);
					tap_code16(KC_A);
					tap_code16(KC_K);
					tap_code16(KC_E);
					tap_code16(KC_K);
					tap_code16(KC_A);
					tap_code16(KC_U);
					tap_code16(KC_S);
					tap_code16(KC_L);
					tap_code16(KC_E);
					tap_code16(KC_R);
					return_state = false;
					break;
				case KC_X:
					tap_code(KC_BSPC);
					tap_code16(S(KC_J));
					tap_code16(KC_0);
					tap_code16(KC_2);
					tap_code16(KC_1);
					tap_code16(KC_F);
					tap_code16(KC_2);
					tap_code16(KC_F);
					tap_code16(KC_1);
					tap_code16(KC_EXLM);
					return_state = false;
					break;
				case KC_J:
					tap_code(KC_BSPC);
					tap_code16(S(KC_J));
					tap_code16(KC_A);
					tap_code16(KC_K);
					tap_code16(KC_E);
					tap_code16(KC_0);
					tap_code16(KC_2);
					tap_code16(KC_1);
					tap_code16(KC_F);
					tap_code16(KC_2);
					tap_code16(KC_F);
					tap_code16(KC_1);
					tap_code16(KC_EXLM);
					return_state = false;
					break;
				case KC_I:
					tap_code16(KC_O);
					return_state = false;
					break;
				case KC_H:
					tap_code16(KC_O);
					return_state = false;
					break;
				case KC_R:
					tap_code16(KC_R);
					return_state = false;
					break;
				case TD(6):
					tap_code16(KC_E);
					return_state = false;
					break;
				case TD(2):
					tap_code(KC_BSPC);
					tap_code16(KC_K);
					tap_code16(KC_E);
					return_state = false;
					break;
				case TD(1):
					tap_code(KC_BSPC);
					tap_code16(KC_C);
					tap_code16(KC_K);
					return_state = false;
					break;
			}
			break;
		case KC_V:
			switch (prior_keycode) {
				case KC_B:
					tap_code16(KC_A);
					return_state = false;
					break;
				case KC_W:
					tap_code(KC_BSPC);
					tap_code16(KC_I);
					tap_code16(KC_V);
					return_state = false;
					break;
			}
			break;
		case KC_W:
			switch (prior_keycode) {
				case KC_B:
					tap_code(KC_BSPC);
					tap_code16(KC_E);
					tap_code16(KC_W);
					return_state = false;
					break;
				case KC_V:
					tap_code16(KC_I);
					return_state = false;
					break;
			}
			break;
		case KC_M:
			switch (prior_keycode) {
				case KC_G:
					tap_code16(KC_L);
					return_state = false;
					break;
				case KC_P:
					tap_code16(KC_L);
					return_state = false;
					break;
			}
			break;
		case KC_G:
			switch (prior_keycode) {
				case KC_M:
					tap_code(KC_BSPC);
					tap_code16(KC_N);
					tap_code16(KC_G);
					return_state = false;
					break;
			}
			break;
		case KC_B:
			switch (prior_keycode) {
				case KC_V:
					tap_code(KC_BSPC);
					tap_code16(KC_A);
					tap_code16(KC_B);
					return_state = false;
					break;
				case KC_W:
					tap_code16(KC_E);
					return_state = false;
					break;
			}
			break;
		case KC_N:
			switch (prior_keycode) {
				case TD(1):
					tap_code(KC_BSPC);
					tap_code16(KC_N);
					tap_code16(KC_K);
					return_state = false;
					break;
			}
			break;
        case KC_F:
            switch (prior_keycode) {
                case KC_C:
                    tap_code16(KC_K);
                    return_state = false;
                    break;
            }
        case KC_C:
            switch (prior_keycode) {
                case KC_F:
                tap_code(KC_BSPC);
                    tap_code16(KC_K);
                    tap_code16(KC_E);
                    return_state = false;
                    break;
            }
            break;
        case KC_SLSH:
            switch (prior_keycode) {
                case TD(8):
                    tap_code16(KC_BSPC);
                    tap_code16(KC_RBRC);
                    return_state = false;
                    break;
                case TD(9):
                    tap_code16(KC_BSPC);
                    tap_code16(KC_RCBR);
                    return_state = false;
                    break;
                case TD(10):
                    tap_code16(KC_BSPC);
                    tap_code16(KC_RPRN);
                    return_state = false;
                    break;
            }
            break;
    }
    printf("Prior: %d, Current: %d, Return: %d\n", prior_keycode, keycode, return_state);
    if (return_state) { // no adaptive processed, cancel state and pass it on.
        set_mods(saved_mods);
    }
    return return_state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Adaptive Keys
    if (!process_adaptive_key(&keycode, record)) {
        // If an adaptive key was processed, we're done.
        prior_keycode = KC_NO;
        return false;
    } else {
        // If not, we need to store the base keycode for the next keypress.
        prior_keycode = keycode & QK_BASIC_MAX;
    }
    switch (keycode) {
        #ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
        case WYLD_AUTO_MS_TOG:
            if (record->event.pressed) {
                set_auto_mouse_enable(!get_auto_mouse_enable());
            }
            return false; // Skip all further processing of this key
        #endif
    }
    return true;
}

#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_left()) {
        return OLED_ROTATION_270;
    }
#ifdef POINTING_DEVICE_ENABLE
    return OLED_ROTATION_270;
#else
    return OLED_ROTATION_0;
#endif
}

#ifndef POINTING_DEVICE_ENABLE
static const char PROGMEM wylderbuilds[] = {
    // 'dark wylderbuilds_oled_name', 128x32
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x40,
    0x40, 0x60, 0x20, 0x20, 0x30, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x30, 0x20, 0x60,
    0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0x40, 0x40, 0x60, 0x60,
    0x40, 0x40, 0x40, 0x40, 0xc0, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xf0,
    0x00, 0x00, 0xc1, 0xc1, 0x01, 0x01, 0xf1, 0x11, 0x01, 0x01, 0x01, 0x31, 0x60, 0xc0, 0x80, 0xc0,
    0xf0, 0x10, 0x00, 0x00, 0x00, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xc0,
    0x00, 0x01, 0x03, 0x9e, 0xf8, 0x00, 0x00, 0x20, 0xe0, 0xf0, 0x10, 0x30, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x20, 0xf0, 0x30, 0xa0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0x98, 0xf0, 0x70,
    0x00, 0x00, 0x00, 0x00, 0xf0, 0x80, 0x00, 0x70, 0xfe, 0x03, 0x00, 0x00, 0xe0, 0xf0, 0x00, 0x00,
    0x00, 0xe0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x11, 0xf1, 0x11, 0x33, 0x63, 0xc3,
    0x83, 0x01, 0x01, 0xc1, 0xe1, 0x31, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x1f, 0x7c, 0xff, 0x07, 0x7c, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0xc0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x7f, 0xff,
    0x60, 0x30, 0x18, 0x0f, 0x03, 0x00, 0x00, 0x00, 0x01, 0x7f, 0xf2, 0x82, 0x02, 0x80, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x7f, 0x0e, 0x1b, 0x70, 0xc0, 0x00, 0x00, 0x00, 0x01, 0xff, 0x81, 0xc1, 0x63,
    0x3e, 0x00, 0x00, 0x00, 0x1f, 0x7f, 0x40, 0x40, 0x7f, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x00, 0x00,
    0x00, 0x1f, 0xff, 0x80, 0xc0, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xc0, 0x60, 0x30, 0x1f,
    0x07, 0x00, 0x00, 0x01, 0x43, 0x44, 0x7c, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static void render_wylderbuilds(void) {
    oled_write_raw_P(wylderbuilds, sizeof(wylderbuilds));
}

#endif

static char layer_names[7][8] = {
            "  ALP\n",
            "  MOU\n",
            "  SYM\n",
						"  SYR\n",
            "  NUM\n",
            "  NAV\n",
						"  NAI\n",
						"  NAR\n",
						"  NAS\n",
            "  FUN\n",
						"  FUR\n",
						"  QWE\n"
            };

bool oled_task_user(void) {
    char* layer_name = layer_names[get_highest_layer(layer_state)];

    if (is_keyboard_left()) {
        //        oled_write_P(PSTR("Layer\n"), false);
        oled_set_cursor(0, 3);
        oled_write_P(PSTR(layer_name), false);

        oled_set_cursor(2, 6);
        oled_write_P(PSTR("WPM "), false);
        oled_set_cursor(2, 7);
        oled_write(get_u8_str(get_current_wpm(), ' '), false);
        // Host Keyboard LED Status

        oled_set_cursor(0, 9);
        led_t led_state = host_keyboard_led_state();

        oled_write_P(led_state.num_lock ? PSTR("NUMLK \n") : PSTR("    \n"), false);
        oled_write_P(led_state.caps_lock ? PSTR("CAPLK \n") : PSTR("    \n"), false);
        oled_write_P(led_state.scroll_lock ? PSTR("SCRLK \n") : PSTR("    \n"), false);
    } else {
        // write WPM to right OLED
#ifdef POINTING_DEVICE_ENABLE
        char* mode = get_mouse_mode_string();
        uint16_t dpi = get_current_dpi();
        oled_set_cursor(2, 3);
        oled_write_P(PSTR("DPI "), false);
        oled_set_cursor(0, 5);
        oled_write_P(PSTR(get_u16_str(dpi, ' ')), false);
        oled_set_cursor(0, 9);
        oled_write(PSTR(mode), false);
#else
        oled_set_cursor(0, 0);
        render_wylderbuilds();
        oled_scroll_left();
#endif
    }

    return false;
}
#endif

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
	[_ALP] = { ENCODER_CCW_CW(Alec, AleC), ENCODER_CCW_CW(Arec, AreC) },
	[_MOU] = { ENCODER_CCW_CW(Mlec, MleC), ENCODER_CCW_CW(Mrec, MreC) },
	[_SYM] = { ENCODER_CCW_CW(Slec, SleC), ENCODER_CCW_CW(Srec, SreC) },
	[_SYR] = { ENCODER_CCW_CW(Slec, SleC), ENCODER_CCW_CW(Srec, SreC) },
	[_NUM] = { ENCODER_CCW_CW(Nlec, NleC), ENCODER_CCW_CW(Nrec, NreC) },
	[_NAV] = { ENCODER_CCW_CW(Klec, KleC), ENCODER_CCW_CW(Krec, KreC) },
	[_NAI] = { ENCODER_CCW_CW(Flec, FleC), ENCODER_CCW_CW(Frec, FreC) },
	[_NAR] = { ENCODER_CCW_CW(Vlec, VleC), ENCODER_CCW_CW(Vrec, VreC) },
	[_NAS] = { ENCODER_CCW_CW(Vlec, VleC), ENCODER_CCW_CW(Vrec, VreC) },
	[_FUN] = { ENCODER_CCW_CW(Vlec, VleC), ENCODER_CCW_CW(Vrec, VreC) },
	[_FUR] = { ENCODER_CCW_CW(Vlec, VleC), ENCODER_CCW_CW(Vrec, VreC) },
	[_QWE] = { ENCODER_CCW_CW(Vlec, VleC), ENCODER_CCW_CW(Vrec, VreC) },
};
#endif

#ifdef RGBLIGHT_ENABLE
const rgblight_segment_t PROGMEM querty_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {12, 3, HSV_RED},       // Light 4 LEDs, starting with LED 6
    {21, 3, HSV_RED}      // Light 4 LEDs, starting with LED 6
);
const rgblight_segment_t PROGMEM lower_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {12, 3, HSV_BLUE},
    {21, 3, HSV_BLUE}
);
const rgblight_segment_t PROGMEM raise_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {12, 3, HSV_YELLOW},
    {21, 3, HSV_YELLOW}
);

const rgblight_segment_t PROGMEM mouse_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {12, 3, HSV_GREEN},
    {21, 3, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    querty_layer,    // Overrides caps lock layer
    lower_layer,    // Overrides other layers
    raise_layer,     // Overrides other layers
    mouse_layer      // Overrides other layers
);

//bool led_update_user(led_t led_state) {
//    rgblight_set_layer_state(0, led_state.caps_lock);
//    return true;
//}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _QWERTY));
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(1, layer_state_cmp(state, _LOWER));
    rgblight_set_layer_state(2, layer_state_cmp(state, _RAISE));
    return state;
}


#endif

//    rgblight_enable();


void keyboard_post_init_user(void) {
#ifdef RGBLIGHT_ENABLE
    rgblight_layers = my_rgb_layers;
//    rgblight_layers = my_rgb_layers;
//    rgblight_enable_noeeprom(); // Enables RGB, without saving settings
//    rgblight_sethsv_noeeprom_cyan();
//    rgblight_mode_noeeprom(RGBLIGHT_MODE_STATIC_LIGHT);
#endif

#ifdef CONSOLE_ENABLE
    debug_enable=true;
    // debug_matrix=true;
    // debug_keyboard=true;
    // debug_mouse=true;
    debug_matrix=false;
    debug_keyboard=false;
    debug_mouse=false;
#else
    debug_enable=false;
    debug_matrix=false;
    debug_keyboard=false;
    debug_mouse=false;
#endif
}

