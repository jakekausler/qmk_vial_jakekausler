
#include QMK_KEYBOARD_H
#include "3x5_mini_3_track.h"
#include "print.h"

// LAYERS
#define _ALP 0
#define _MOU 1
#define _NUM 2
#define _SYM 3
#define _KOM 4
#define _FUN 5
#define _NAV 6

// LAYER CODES
#define ALP MO(_ALP)
#define MOU MO(_MOU)
#define NUM MO(_NUM)
#define SYM MO(_SYM)
#define KOM MO(_KOM)
#define FUN MO(_FUN)
#define NAV MO(_NAV)

enum custom_keycodes {
    WYLD_AUTO_MS_TOG = SAFE_RANGE,
    // MOD_LCBR,
    // MOD_LPAR,
    // DRAG_SCROLL,
    // DRAG_SLOW,
    // DRAG_NAV,
};

// enum tap_dance_enums {
//     TD_ALBP,
//     TD_ALBR,
//     TD_ALBM,
//     TD_ALBI,
//     TD_ARBI,
//     TD_ARBM,
//     TD_ARBR,
//     TD_ARBP,
//     TD_NLBP,
//     TD_NLBR,
//     TD_NLBM,
//     TD_NLBI,
//     TD_NRBI,
//     TD_NRBM,
//     TD_NRBR,
//     TD_NRBP,
//     TD_SLBP,
//     TD_SLBR,
//     TD_SLBM,
//     TD_SLBI,
//     TD_SRBI,
//     TD_SRBM,
//     TD_SRBR,
//     TD_SRBP,
//     TD_FLBP,
//     TD_FLBR,
//     TD_FLBM,
//     TD_FLBI,
//     TD_FRBI,
//     TD_FRBM,
//     TD_FRBR,
//     TD_FRBP,
//     TD_VLBP,
//     TD_VLBR,
//     TD_VLBM,
//     TD_VLBI,
//     TD_VRBI,
//     TD_VRBM,
//     TD_VRBR,
//     TD_VRBP,
// };

// Alp
#define Altp KC_QUOT
#define Altr KC_G
#define Altm KC_M
#define Alti KC_P
#define Altn KC_PIPE
#define Artn KC_EXLM
#define Arti KC_B
#define Artm KC_W
#define Artr KC_V
#define Artp KC_DQT
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
#define Albp TD(0)
#define Albr TD(1)
#define Albm TD(2)
#define Albi TD(3)
#define Albn KC_AMPR
#define Arbn KC_QUES
#define Arbi TD(4)
#define Arbm TD(5)
#define Arbr TD(6)
#define Arbp TD(7)
#define Alt0 LT(_FUN, KC_ENT)
#define Alt1 LT(_NUM, KC_T)
#define Alt2 SNIPING_MODE_TOGGLE
// #define Alt2 SNP_TOG
#define Art0 LT(_KOM, KC_BSPC)
#define Art1 LT(_SYM, KC_SPC)
#define Art2 LT(_NAV, KC_DEL)
#define Alt3 DRAGSCROLL_MODE_TOGGLE
// #define Alt3 DRG_TOG
#define Alt4 KC_NO
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
// Num
#define Nltp KC_AT
#define Nltr KC_HASH
#define Nltm KC_AMPR
#define Nlti KC_PIPE
#define Nltn KC_CIRC
#define Nrtn KC_DLR
#define Nrti KC_7
#define Nrtm KC_8
#define Nrtr KC_9
#define Nrtp KC_EQUAL
#define Nlmp WYLD_AUTO_MS_TOG
#define Nlmr KC_BTN3
#define Nlmm KC_BTN1
#define Nlmi KC_BTN2
#define Nlmn KC_DLR
#define Nrmn KC_PLUS
#define Nrmi KC_4
#define Nrmm KC_5
#define Nrmr KC_6
#define Nrmp KC_ASTR
#define Nlbp MT(MOD_LGUI, KC_SCLN)
#define Nlbr TD(8)
#define Nlbm TD(9)
#define Nlbi TD(10)
#define Nlbn KC_PERC
#define Nrbn KC_MINUS
#define Nrbi MT(MOD_LCTL, KC_1)
#define Nrbm MT(MOD_LSFT, KC_2)
#define Nrbr MT(MOD_LALT, KC_3)
#define Nrbp MT(MOD_LGUI, KC_SLSH)
#define Nlt0 _______
#define Nlt1 _______
#define Nlt2 _______
#define Nrt0 LT(_KOM, KC_BSPC)
#define Nrt1 LT(_SYM, KC_0)
#define Nrt2 LT(_NAV, KC_DOT)
#define Nlt3 _______
#define Nlt4 _______
#define Nlec _______
#define NleP _______
#define NleC _______
#define Nrec C(KC_EQUAL)
#define NreP _______
#define NreC C(KC_MINUS)
// Sym
#define Sltp KC_AT
#define Sltr KC_HASH
#define Sltm KC_AMPR
#define Slti KC_PIPE
#define Sltn KC_CIRC
#define Srtn KC_DLR
#define Srti KC_7
#define Srtm KC_8
#define Srtr KC_9
#define Srtp KC_EQUAL
#define Slmp KC_EXLM
#define Slmr KC_LT
#define Slmm KC_EQUAL
#define Slmi KC_GT
#define Slmn KC_DLR
#define Srmn KC_PLUS
#define Srmi KC_4
#define Srmm KC_5
#define Srmr KC_6
#define Srmp KC_ASTR
#define Slbp MT(MOD_LGUI, KC_SCLN)
#define Slbr TD(8)
#define Slbm TD(9)
#define Slbi TD(10)
#define Slbn KC_PERC
#define Srbn KC_MINUS
#define Srbi MT(MOD_LCTL, KC_1)
#define Srbm MT(MOD_LSFT, KC_2)
#define Srbr MT(MOD_LALT, KC_3)
#define Srbp MT(MOD_LGUI, KC_SLSH)
#define Slt0 LT(_FUN, KC_MINUS)
#define Slt1 KC_UNDS
#define Slt2 KC_SLSH
#define Srt0 _______
#define Srt1 _______
#define Srt2 _______
#define Slt3 KC_ESC
#define Slt4 KC_BSLS
#define Slec _______
#define SleP _______
#define SleC _______
#define Srec _______
#define SreP _______
#define SreC _______
// Kom
#define Kltp G(KC_QUOT)
#define Kltr G(KC_G)
#define Kltm G(KC_M)
#define Klti G(KC_P)
#define Kltn _______
#define Krtn _______
#define Krti _______
#define Krtm _______
#define Krtr _______
#define Krtp _______
#define Klmp G(KC_R)
#define Klmr G(KC_S)
#define Klmm G(KC_N)
#define Klmi G(KC_D)
#define Klmn _______
#define Krmn _______
#define Krmi _______
#define Krmm _______
#define Krmr _______
#define Krmp _______
#define Klbp G(KC_SCLN)
#define Klbr G(KC_F)
#define Klbm G(KC_L)
#define Klbi G(KC_C)
#define Klbn _______
#define Krbn _______
#define Krbi _______
#define Krbm _______
#define Krbr _______
#define Krbp _______
#define Klt0 _______
#define Klt1 _______
#define Klt2 _______
#define Krt0 _______
#define Krt1 _______
#define Krt2 _______
#define Klt3 _______
#define Klt4 _______
#define Klec _______
#define KleP _______
#define KleC _______
#define Krec _______
#define KreP _______
#define KreC _______
// Fun
#define Fltp KC_F19
#define Fltr KC_F20
#define Fltm KC_F21
#define Flti KC_F22
#define Fltn KC_F23
#define Frtn KC_F12
#define Frti KC_F7
#define Frtm KC_F8
#define Frtr KC_F9
#define Frtp KC_F15
#define Flmp KC_LEFT
#define Flmr KC_DOWN
#define Flmm KC_UP
#define Flmi KC_RIGHT
#define Flmn KC_F24
#define Frmn KC_F11
#define Frmi KC_F4
#define Frmm KC_F5
#define Frmr KC_F6
#define Frmp KC_F14
#define Flbp MT(MOD_LGUI, KC_HOME)
#define Flbr MT(MOD_LALT, KC_PGDN)
#define Flbm MT(MOD_LSFT, KC_PGUP)
#define Flbi MT(MOD_LCTL, KC_END)
#define Flbn KC_INS
#define Frbn KC_F10
#define Frbi MT(MOD_LCTL, KC_F1)
#define Frbm MT(MOD_LSFT, KC_F2)
#define Frbr MT(MOD_LALT, KC_F3)
#define Frbp MT(MOD_LGUI, KC_F13)
#define Flt0 _______
#define Flt1 _______
#define Flt2 _______
#define Frt0 LT(_KOM, KC_F16)
#define Frt1 LT(_SYM, KC_F17)
#define Frt2 LT(_NAV, KC_F18)
#define Flt3 _______
#define Flt4 _______
#define Flec _______
#define FleP QK_BOOT
#define FleC _______
#define Frec C(A(G(KC_DOT)))
#define FreP C(A(G(KC_M)))
#define FreC C(A(G(KC_COMM)))
// Nav
#define Vltp KC_F19
#define Vltr KC_F20
#define Vltm KC_F21
#define Vlti KC_F22
#define Vltn KC_F23
#define Vrtn KC_F12
#define Vrti KC_F7
#define Vrtm KC_F8
#define Vrtr KC_F9
#define Vrtp KC_F15
#define Vlmp KC_LEFT
#define Vlmr KC_DOWN
#define Vlmm KC_UP
#define Vlmi KC_RIGHT
#define Vlmn KC_F24
#define Vrmn KC_F11
#define Vrmi KC_F4
#define Vrmm KC_F5
#define Vrmr KC_F6
#define Vrmp KC_F14
#define Vlbp MT(MOD_LGUI, KC_HOME)
#define Vlbr MT(MOD_LALT, KC_PGDN)
#define Vlbm MT(MOD_LSFT, KC_PGUP)
#define Vlbi MT(MOD_LCTL, KC_END)
#define Vlbn KC_INS
#define Vrbn KC_F10
#define Vrbi MT(MOD_LCTL, KC_F1)
#define Vrbm MT(MOD_LSFT, KC_F2)
#define Vrbr MT(MOD_LALT, KC_F3)
#define Vrbp MT(MOD_LGUI, KC_F13)
#define Vlt0 LT(_FUN, KC_SPC)
#define Vlt1 LT(_NUM, KC_ENT)
#define Vlt2 KC_TAB
#define Vrt0 _______
#define Vrt1 _______
#define Vrt2 _______
#define Vlt3 KC_ESC
#define Vlt4 KC_NO
#define Vlec C(G(KC_LEFT))
#define VleP C(G(KC_D))
#define VleC C(G(KC_RIGHT))
#define Vrec _______
#define VreP QK_BOOT
#define VreC _______

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

	[_KOM] = LAYOUT_split_3x5_3(
			 // ┌──00──┬──01──┬──02──┬──03──┬──04──┐                           ┌──05──┬──06──┬──07──┬──08──┬──09──┐
			      Kltp , Kltr , Kltm , Klti , Kltn ,                             Krtn , Krti , Krtm , Krtr , Krtp ,
			 // ├──10──┼──11──┼──12──┼──13──┼──14──┼──15──┤             ├──16──┼──17──┼──18──┼──19──┼──20──┼──21──┤
			      Klmp , Klmr , Klmm , Klmi , Klmn , KleP ,               KreP , Krmn , Krmi , Krmm , Krmr , Krmp ,
			 // ├──22──┼──23──┼──24──┼──25──┼──26──┤                           ├──27──┼──28──┼──29──┼──30──┼──31──┤
			      Klbp , Klbr , Klbm , Klbi , Klbn ,                             Krbn , Krbi , Krbm , Krbr , Krbp ,
			 // ├──32──┼──33──┼──34──┤                                                       ├──35──┼──36──┼──37──┤
			      Klt0 , Klt1 , Klt2 ,                                                         Krt0 , Krt1 , Krt2 ,
			 // └──38──┴──39──┘                                                                     ┘
			      Klt3 , Klt4
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
	)
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
		case KC_DEL:
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
        prior_keycode = keycode;
        set_mods(saved_mods);
    } else {
        prior_keycode = KC_NO;
    }
    return return_state;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // Adaptive Keys
    if (!process_adaptive_key(&keycode, record)) {
        return false;
    }
    // static uint16_t mod_lcbr_timer;
    // static uint16_t mod_lpar_timer;
    switch (keycode) {
        #ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
        case WYLD_AUTO_MS_TOG:
            if (record->event.pressed) {
                set_auto_mouse_enable(!get_auto_mouse_enable());
            }
            return false; // Skip all further processing of this key
        #endif
        // case MOD_LCBR:
        //     if (record->event.pressed) {
        //         mod_lcbr_timer = timer_read();
        //         print("MOD_LCBR pressed\n");
        //         register_code(KC_LSFT);
        //     } else {
        //         unregister_code(KC_LSFT);
        //         if (timer_elapsed(mod_lcbr_timer) < TAPPING_TERM) {
        //             SEND_STRING("{");
        //             print("Sent string {\n");
        //         }
        //     }
        //     return false;
        // case MOD_LPAR:
        //     if (record->event.pressed) {
        //         mod_lpar_timer = timer_read();
        //         print("MOD_LPAR pressed\n");
        //         register_code(KC_LCTL);
        //     } else {
        //         unregister_code(KC_LCTL);
        //         if (timer_elapsed(mod_lpar_timer) < TAPPING_TERM) {
        //             SEND_STRING("(");
        //             print("Sent string (\n");
        //         }
        //     }
        //     return false;
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
            "  NUM\n",
            "  SYM\n",
            "  KOM\n",
            "  FUN\n",
            "  NAV\n"
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
	[_NUM] = { ENCODER_CCW_CW(Nlec, NleC), ENCODER_CCW_CW(Nrec, NreC) },
	[_SYM] = { ENCODER_CCW_CW(Slec, SleC), ENCODER_CCW_CW(Srec, SreC) },
	[_KOM] = { ENCODER_CCW_CW(Klec, KleC), ENCODER_CCW_CW(Krec, KreC) },
	[_FUN] = { ENCODER_CCW_CW(Flec, FleC), ENCODER_CCW_CW(Frec, FreC) },
	[_NAV] = { ENCODER_CCW_CW(Vlec, VleC), ENCODER_CCW_CW(Vrec, VreC) },
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

