#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner4171839283_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4171839283_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner4171839283_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4171839283_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4171839283_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4171839283_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner4171839283_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_r;  // r

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // r = clos inner4171839283
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4171839283_, RHO, CCP);
  // st mime_canonical_encoding = r
  Rsh_Fir_store(Rsh_const(CCP, 0), Rsh_Fir_reg_r, RHO);
  (void)(Rsh_Fir_reg_r);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r
  return Rsh_Fir_reg_r;
}
SEXP Rsh_Fir_user_function_inner4171839283_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4171839283 dynamic dispatch ([encoding])

  return Rsh_Fir_user_version_inner4171839283_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4171839283_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4171839283 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner4171839283/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_encoding;  // encoding
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_encoding1_;  // encoding1
  SEXP Rsh_Fir_reg_encoding2_;  // encoding2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_tolower;  // tolower
  SEXP Rsh_Fir_reg_encoding3_;  // encoding3
  SEXP Rsh_Fir_reg_encoding4_;  // encoding4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_encoding5_;  // encoding5
  SEXP Rsh_Fir_reg_encoding6_;  // encoding6
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sub1_;  // sub1
  SEXP Rsh_Fir_reg_encoding7_;  // encoding7
  SEXP Rsh_Fir_reg_encoding8_;  // encoding8
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_encoding9_;  // encoding9
  SEXP Rsh_Fir_reg_encoding10_;  // encoding10
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_encoding11_;  // encoding11
  SEXP Rsh_Fir_reg_encoding12_;  // encoding12
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_encoding13_;  // encoding13
  SEXP Rsh_Fir_reg_encoding14_;  // encoding14
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg____3_;  // ___3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_l14_;  // l14
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_encoding15_;  // encoding15
  SEXP Rsh_Fir_reg_encoding16_;  // encoding16
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg____4_;  // ___4
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_encoding17_;  // encoding17
  SEXP Rsh_Fir_reg_encoding18_;  // encoding18
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg____5_;  // ___5
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_l18_;  // l18
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_encoding19_;  // encoding19
  SEXP Rsh_Fir_reg_encoding20_;  // encoding20
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg____6_;  // ___6
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_l21_;  // l21
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_encoding21_;  // encoding21
  SEXP Rsh_Fir_reg_encoding22_;  // encoding22
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg____7_;  // ___7
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_encoding23_;  // encoding23
  SEXP Rsh_Fir_reg_encoding24_;  // encoding24
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg____8_;  // ___8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_l27_;  // l27
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_l29_;  // l29
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_encoding25_;  // encoding25
  SEXP Rsh_Fir_reg_encoding26_;  // encoding26
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg____9_;  // ___9
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_l30_;  // l30
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_l32_;  // l32
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_encoding27_;  // encoding27
  SEXP Rsh_Fir_reg_encoding28_;  // encoding28
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg____10_;  // ___10
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_l33_;  // l33
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_l35_;  // l35
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_encoding29_;  // encoding29
  SEXP Rsh_Fir_reg_encoding30_;  // encoding30
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg____11_;  // ___11
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_l36_;  // l36
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_l38_;  // l38
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_encoding31_;  // encoding31
  SEXP Rsh_Fir_reg_encoding32_;  // encoding32
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg____12_;  // ___12
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_l39_;  // l39
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r92_;  // r92
  SEXP Rsh_Fir_reg_l41_;  // l41
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_encoding33_;  // encoding33
  SEXP Rsh_Fir_reg_encoding34_;  // encoding34
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg____13_;  // ___13
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_l42_;  // l42
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_l44_;  // l44
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_encoding35_;  // encoding35
  SEXP Rsh_Fir_reg_encoding36_;  // encoding36
  SEXP Rsh_Fir_reg_r101_;  // r101
  SEXP Rsh_Fir_reg____14_;  // ___14
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_l45_;  // l45
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_l47_;  // l47
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_encoding37_;  // encoding37
  SEXP Rsh_Fir_reg_encoding38_;  // encoding38
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg____15_;  // ___15
  SEXP Rsh_Fir_reg_r108_;  // r108
  SEXP Rsh_Fir_reg_encoding39_;  // encoding39
  SEXP Rsh_Fir_reg_encoding40_;  // encoding40

  // Bind parameters
  Rsh_Fir_reg_encoding = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st encoding = encoding
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_encoding, RHO);
  (void)(Rsh_Fir_reg_encoding);
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L0_:;
  // l = ld encoding
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // if c1 then L23() else L24(dx1, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L23()
    goto L23_;
  } else {
  // L24(dx1, l)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L24_;
  }

L1_:;
  // st encoding = dx7
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // tolower = ldf tolower
  Rsh_Fir_reg_tolower = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L2_:;
  // st encoding = dx9
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // l6 = ld encoding
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c4 = `is.object`(l6)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L39("iso-8859-2", l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L39("iso-8859-2", l6)
    Rsh_Fir_reg_r26_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L39_;
  }

L3_:;
  // st encoding = dx11
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // l9 = ld encoding
  Rsh_Fir_reg_l9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c5 = `is.object`(l9)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c5 then L42() else L43("iso-8859-3", l9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L42()
    goto L42_;
  } else {
  // L43("iso-8859-3", l9)
    Rsh_Fir_reg_r32_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    goto L43_;
  }

L4_:;
  // st encoding = dx13
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // l12 = ld encoding
  Rsh_Fir_reg_l12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c6 = `is.object`(l12)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c6 then L46() else L47("iso-8859-4", l12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L46()
    goto L46_;
  } else {
  // L47("iso-8859-4", l12)
    Rsh_Fir_reg_r38_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_l12_;
    goto L47_;
  }

L5_:;
  // st encoding = dx15
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // l15 = ld encoding
  Rsh_Fir_reg_l15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c7 = `is.object`(l15)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c7 then L50() else L51("iso-8859-5", l15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L50()
    goto L50_;
  } else {
  // L51("iso-8859-5", l15)
    Rsh_Fir_reg_r44_ = Rsh_const(CCP, 7);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
    goto L51_;
  }

L6_:;
  // st encoding = dx17
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx17_, RHO);
  (void)(Rsh_Fir_reg_dx17_);
  // l18 = ld encoding
  Rsh_Fir_reg_l18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c8 = `is.object`(l18)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l18_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c8 then L54() else L55("iso-8859-6", l18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L54()
    goto L54_;
  } else {
  // L55("iso-8859-6", l18)
    Rsh_Fir_reg_r50_ = Rsh_const(CCP, 8);
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_l18_;
    goto L55_;
  }

L7_:;
  // st encoding = dx19
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx19_, RHO);
  (void)(Rsh_Fir_reg_dx19_);
  // l21 = ld encoding
  Rsh_Fir_reg_l21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c9 = `is.object`(l21)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l21_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c9 then L58() else L59("iso-8859-7", l21)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L58()
    goto L58_;
  } else {
  // L59("iso-8859-7", l21)
    Rsh_Fir_reg_r56_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l21_;
    goto L59_;
  }

L8_:;
  // st encoding = dx21
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx21_, RHO);
  (void)(Rsh_Fir_reg_dx21_);
  // l24 = ld encoding
  Rsh_Fir_reg_l24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c10 = `is.object`(l24)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c10 then L62() else L63("iso-8859-8", l24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L62()
    goto L62_;
  } else {
  // L63("iso-8859-8", l24)
    Rsh_Fir_reg_r62_ = Rsh_const(CCP, 10);
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l24_;
    goto L63_;
  }

L9_:;
  // st encoding = dx23
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // l27 = ld encoding
  Rsh_Fir_reg_l27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c11 = `is.object`(l27)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l27_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c11 then L66() else L67("iso-8859-9", l27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L66()
    goto L66_;
  } else {
  // L67("iso-8859-9", l27)
    Rsh_Fir_reg_r68_ = Rsh_const(CCP, 11);
    Rsh_Fir_reg_l29_ = Rsh_Fir_reg_l27_;
    goto L67_;
  }

L10_:;
  // st encoding = dx25
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // l30 = ld encoding
  Rsh_Fir_reg_l30_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c12 = `is.object`(l30)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l30_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c12 then L70() else L71("iso-8859-10", l30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L70()
    goto L70_;
  } else {
  // L71("iso-8859-10", l30)
    Rsh_Fir_reg_r74_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l32_ = Rsh_Fir_reg_l30_;
    goto L71_;
  }

L11_:;
  // st encoding = dx27
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx27_, RHO);
  (void)(Rsh_Fir_reg_dx27_);
  // l33 = ld encoding
  Rsh_Fir_reg_l33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c13 = `is.object`(l33)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l33_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c13 then L74() else L75("iso-8859-14", l33)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L74()
    goto L74_;
  } else {
  // L75("iso-8859-14", l33)
    Rsh_Fir_reg_r80_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_l33_;
    goto L75_;
  }

L12_:;
  // st encoding = dx29
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx29_, RHO);
  (void)(Rsh_Fir_reg_dx29_);
  // l36 = ld encoding
  Rsh_Fir_reg_l36_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c14 = `is.object`(l36)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l36_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c14 then L78() else L79("iso-8859-15", l36)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L78()
    goto L78_;
  } else {
  // L79("iso-8859-15", l36)
    Rsh_Fir_reg_r86_ = Rsh_const(CCP, 14);
    Rsh_Fir_reg_l38_ = Rsh_Fir_reg_l36_;
    goto L79_;
  }

L13_:;
  // st encoding = dx31
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx31_, RHO);
  (void)(Rsh_Fir_reg_dx31_);
  // l39 = ld encoding
  Rsh_Fir_reg_l39_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c15 = `is.object`(l39)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_l39_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c15 then L82() else L83("iso-8859-16", l39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L82()
    goto L82_;
  } else {
  // L83("iso-8859-16", l39)
    Rsh_Fir_reg_r92_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l41_ = Rsh_Fir_reg_l39_;
    goto L83_;
  }

L14_:;
  // st encoding = dx33
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // l42 = ld encoding
  Rsh_Fir_reg_l42_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c16 = `is.object`(l42)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_l42_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c16 then L86() else L87("utf-8", l42)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L86()
    goto L86_;
  } else {
  // L87("utf-8", l42)
    Rsh_Fir_reg_r98_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_l44_ = Rsh_Fir_reg_l42_;
    goto L87_;
  }

L15_:;
  // st encoding = dx35
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx35_, RHO);
  (void)(Rsh_Fir_reg_dx35_);
  // l45 = ld encoding
  Rsh_Fir_reg_l45_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c17 = `is.object`(l45)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l45_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c17 then L90() else L91("us-ascii", l45)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L90()
    goto L90_;
  } else {
  // L91("us-ascii", l45)
    Rsh_Fir_reg_r104_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l47_ = Rsh_Fir_reg_l45_;
    goto L91_;
  }

L16_:;
  // st encoding = dx37
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // encoding39 = ld encoding
  Rsh_Fir_reg_encoding39_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L94() else D26()
  // L94()
  goto L94_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // r = dyn __("utils", "localeToCharset")
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args15[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // checkFun.0(r)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args16));
  // r1 = r as cls
  Rsh_Fir_reg_r1_ = Rsh_Fir_cast(Rsh_Fir_reg_r1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r2 = dyn r1()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r1_, 0, NULL, NULL, CCP, RHO);
  // check L19() else D2()
  // L19()
  goto L19_;

D2_:;
  // deopt 6 [r2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L19_:;
  // c = `is.object`(r2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L20() else L21(r2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L20()
    goto L20_;
  } else {
  // L21(r2)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r2_;
    goto L21_;
  }

L20_:;
  // dr = tryDispatchBuiltin.1("[", r2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L22() else L21(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L22()
    goto L22_;
  } else {
  // L21(dr)
    Rsh_Fir_reg_r4_ = Rsh_Fir_reg_dr;
    goto L21_;
  }

L21_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r5 = dyn __1(r4, 1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L22_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

L23_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, dx1)
  SEXP Rsh_Fir_array_args22[3];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args22[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args22);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if dc1 then L25() else L24(dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L25()
    goto L25_;
  } else {
  // L24(dx1, dr2)
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L24_;
  }

L24_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L26() else D3()
  // L26()
  goto L26_;

L25_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L1(dx5)
  // L1(dx5)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L1_;

D3_:;
  // deopt 12 [dx3, l2, dx1]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(12, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // p = prom<V +>{
  //   encoding1 = ld encoding;
  //   encoding2 = force? encoding1;
  //   checkMissing(encoding2);
  //   return encoding2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4171839283_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r8):
  //   return r8;
  // L1():
  //   c2 = ldf c in base;
  //   r9 = dyn c2("", "unknown");
  //   goto L0(r9);
  // L2():
  //   r7 = dyn base("", "unknown");
  //   goto L0(r7);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4171839283_1, CCP, RHO);
  // r11 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

D4_:;
  // deopt 15 [dx3, l2, dx1, r11]
  SEXP Rsh_Fir_array_deopt_stack3[4];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack3[3] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(15, 4, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L27_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r12 = dyn ___(l2, dx1, r11)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r12_;
  goto L1_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L28_:;
  // p2 = prom<V +>{
  //   encoding3 = ld encoding;
  //   encoding4 = force? encoding3;
  //   checkMissing(encoding4);
  //   return encoding4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4171839283_2, CCP, RHO);
  // r14 = dyn tolower(p2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_tolower, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

D6_:;
  // deopt 21 [r14]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L29_:;
  // st encoding = r14
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r14_, RHO);
  (void)(Rsh_Fir_reg_r14_);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L30() else D7()
  // L30()
  goto L30_;

D7_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L30_:;
  // p3 = prom<V +>{
  //   encoding5 = ld encoding;
  //   encoding6 = force? encoding5;
  //   checkMissing(encoding6);
  //   return encoding6;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4171839283_3, CCP, RHO);
  // r16 = dyn sub("iso_8859-([0-9]+)", "iso-8859-\\1", p3)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L31() else D8()
  // L31()
  goto L31_;

D8_:;
  // deopt 28 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L31_:;
  // st encoding = r16
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sub1 = ldf sub
  Rsh_Fir_reg_sub1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // check L32() else D9()
  // L32()
  goto L32_;

D9_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p4 = prom<V +>{
  //   encoding7 = ld encoding;
  //   encoding8 = force? encoding7;
  //   checkMissing(encoding8);
  //   return encoding8;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner4171839283_4, CCP, RHO);
  // r18 = dyn sub1("iso8859-([0-9]+)", "iso-8859-\\1", p4)
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args36[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub1_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L33() else D10()
  // L33()
  goto L33_;

D10_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L33_:;
  // st encoding = r18
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // l3 = ld encoding
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c3 = `is.object`(l3)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // if c3 then L34() else L35("iso-8859-1", l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L34()
    goto L34_;
  } else {
  // L35("iso-8859-1", l3)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 33);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L35_;
  }

L34_:;
  // dr4 = tryDispatchBuiltin.0("[<-", l3, "iso-8859-1")
  SEXP Rsh_Fir_array_args38[3];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args38[2] = Rsh_const(CCP, 33);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args38);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc2 then L36() else L35("iso-8859-1", dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L36()
    goto L36_;
  } else {
  // L35("iso-8859-1", dr4)
    Rsh_Fir_reg_r20_ = Rsh_const(CCP, 33);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr4_;
    goto L35_;
  }

L35_:;
  // encoding9 = ld encoding
  Rsh_Fir_reg_encoding9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D11()
  // L37()
  goto L37_;

L36_:;
  // dx8 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L2(dx8)
  // L2(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L2_;

D11_:;
  // deopt 40 [r20, l5, "iso-8859-1", encoding9]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r20_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_const(CCP, 33);
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_encoding9_;
  Rsh_Fir_deopt(40, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L37_:;
  // encoding10 = force? encoding9
  Rsh_Fir_reg_encoding10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding9_);
  // checkMissing(encoding10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_encoding10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // r23 = `==`(encoding10, "latin1")
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_encoding10_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 34);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r24 = dyn ___1(l5, "iso-8859-1", r23)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L2(r24)
  // L2(r24)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r24_;
  goto L2_;

L38_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l6, "iso-8859-2")
  SEXP Rsh_Fir_array_args44[3];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args44[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args44);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if dc3 then L40() else L39("iso-8859-2", dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L40()
    goto L40_;
  } else {
  // L39("iso-8859-2", dr6)
    Rsh_Fir_reg_r26_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr6_;
    goto L39_;
  }

L39_:;
  // encoding11 = ld encoding
  Rsh_Fir_reg_encoding11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D12()
  // L41()
  goto L41_;

L40_:;
  // dx10 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L3(dx10)
  // L3(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L3_;

D12_:;
  // deopt 49 [r26, l8, "iso-8859-2", encoding11]
  SEXP Rsh_Fir_array_deopt_stack8[4];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_const(CCP, 4);
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_encoding11_;
  Rsh_Fir_deopt(49, 4, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L41_:;
  // encoding12 = force? encoding11
  Rsh_Fir_reg_encoding12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding11_);
  // checkMissing(encoding12)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_encoding12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // r29 = `==`(encoding12, "latin2")
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_encoding12_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r30 = dyn ___2(l8, "iso-8859-2", r29)
  SEXP Rsh_Fir_array_args49[3];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args49[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args49[2] = Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r30)
  // L3(r30)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r30_;
  goto L3_;

L42_:;
  // dr8 = tryDispatchBuiltin.0("[<-", l9, "iso-8859-3")
  SEXP Rsh_Fir_array_args50[3];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_l9_;
  Rsh_Fir_array_args50[2] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args50);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc4 then L44() else L43("iso-8859-3", dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L44()
    goto L44_;
  } else {
  // L43("iso-8859-3", dr8)
    Rsh_Fir_reg_r32_ = Rsh_const(CCP, 5);
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_dr8_;
    goto L43_;
  }

L43_:;
  // encoding13 = ld encoding
  Rsh_Fir_reg_encoding13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D13()
  // L45()
  goto L45_;

L44_:;
  // dx12 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L4(dx12)
  // L4(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L4_;

D13_:;
  // deopt 58 [r32, l11, "iso-8859-3", encoding13]
  SEXP Rsh_Fir_array_deopt_stack9[4];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_const(CCP, 5);
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_encoding13_;
  Rsh_Fir_deopt(58, 4, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L45_:;
  // encoding14 = force? encoding13
  Rsh_Fir_reg_encoding14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding13_);
  // checkMissing(encoding14)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_encoding14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // r35 = `==`(encoding14, "latin3")
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_encoding14_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // ___3 = ldf `[<-` in base
  Rsh_Fir_reg____3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r36 = dyn ___3(l11, "iso-8859-3", r35)
  SEXP Rsh_Fir_array_args55[3];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args55[2] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names11[3];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____3_, 3, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L4(r36)
  // L4(r36)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r36_;
  goto L4_;

L46_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l12, "iso-8859-4")
  SEXP Rsh_Fir_array_args56[3];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args56[1] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args56);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if dc5 then L48() else L47("iso-8859-4", dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L48()
    goto L48_;
  } else {
  // L47("iso-8859-4", dr10)
    Rsh_Fir_reg_r38_ = Rsh_const(CCP, 6);
    Rsh_Fir_reg_l14_ = Rsh_Fir_reg_dr10_;
    goto L47_;
  }

L47_:;
  // encoding15 = ld encoding
  Rsh_Fir_reg_encoding15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L49() else D14()
  // L49()
  goto L49_;

L48_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L5(dx14)
  // L5(dx14)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L5_;

D14_:;
  // deopt 67 [r38, l14, "iso-8859-4", encoding15]
  SEXP Rsh_Fir_array_deopt_stack10[4];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_deopt_stack10[3] = Rsh_Fir_reg_encoding15_;
  Rsh_Fir_deopt(67, 4, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // encoding16 = force? encoding15
  Rsh_Fir_reg_encoding16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding15_);
  // checkMissing(encoding16)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_encoding16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty()));
  // r41 = `==`(encoding16, "latin4")
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_encoding16_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // ___4 = ldf `[<-` in base
  Rsh_Fir_reg____4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r42 = dyn ___4(l14, "iso-8859-4", r41)
  SEXP Rsh_Fir_array_args61[3];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_l14_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____4_, 3, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(r42)
  // L5(r42)
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r42_;
  goto L5_;

L50_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l15, "iso-8859-5")
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_l15_;
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args62);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc6 then L52() else L51("iso-8859-5", dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L52()
    goto L52_;
  } else {
  // L51("iso-8859-5", dr12)
    Rsh_Fir_reg_r44_ = Rsh_const(CCP, 7);
    Rsh_Fir_reg_l17_ = Rsh_Fir_reg_dr12_;
    goto L51_;
  }

L51_:;
  // encoding17 = ld encoding
  Rsh_Fir_reg_encoding17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D15()
  // L53()
  goto L53_;

L52_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L6(dx16)
  // L6(dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L6_;

D15_:;
  // deopt 76 [r44, l17, "iso-8859-5", encoding17]
  SEXP Rsh_Fir_array_deopt_stack11[4];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_const(CCP, 7);
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_encoding17_;
  Rsh_Fir_deopt(76, 4, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L53_:;
  // encoding18 = force? encoding17
  Rsh_Fir_reg_encoding18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding17_);
  // checkMissing(encoding18)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_encoding18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r47 = `==`(encoding18, "cyrillic")
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_encoding18_;
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 38);
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // ___5 = ldf `[<-` in base
  Rsh_Fir_reg____5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r48 = dyn ___5(l17, "iso-8859-5", r47)
  SEXP Rsh_Fir_array_args67[3];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args67[2] = Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____5_, 3, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(r48)
  // L6(r48)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r48_;
  goto L6_;

L54_:;
  // dr14 = tryDispatchBuiltin.0("[<-", l18, "iso-8859-6")
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_l18_;
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args68);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc7 then L56() else L55("iso-8859-6", dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L56()
    goto L56_;
  } else {
  // L55("iso-8859-6", dr14)
    Rsh_Fir_reg_r50_ = Rsh_const(CCP, 8);
    Rsh_Fir_reg_l20_ = Rsh_Fir_reg_dr14_;
    goto L55_;
  }

L55_:;
  // encoding19 = ld encoding
  Rsh_Fir_reg_encoding19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L57() else D16()
  // L57()
  goto L57_;

L56_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L7(dx18)
  // L7(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L7_;

D16_:;
  // deopt 85 [r50, l20, "iso-8859-6", encoding19]
  SEXP Rsh_Fir_array_deopt_stack12[4];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_const(CCP, 8);
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_encoding19_;
  Rsh_Fir_deopt(85, 4, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L57_:;
  // encoding20 = force? encoding19
  Rsh_Fir_reg_encoding20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding19_);
  // checkMissing(encoding20)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_encoding20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r53 = `==`(encoding20, "arabic")
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_encoding20_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // ___6 = ldf `[<-` in base
  Rsh_Fir_reg____6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r54 = dyn ___6(l20, "iso-8859-6", r53)
  SEXP Rsh_Fir_array_args73[3];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args73[2] = Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_array_arg_names14[3];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____6_, 3, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7(r54)
  // L7(r54)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r54_;
  goto L7_;

L58_:;
  // dr16 = tryDispatchBuiltin.0("[<-", l21, "iso-8859-7")
  SEXP Rsh_Fir_array_args74[3];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_l21_;
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args74);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc8 then L60() else L59("iso-8859-7", dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L60()
    goto L60_;
  } else {
  // L59("iso-8859-7", dr16)
    Rsh_Fir_reg_r56_ = Rsh_const(CCP, 9);
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_dr16_;
    goto L59_;
  }

L59_:;
  // encoding21 = ld encoding
  Rsh_Fir_reg_encoding21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L61() else D17()
  // L61()
  goto L61_;

L60_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L8(dx20)
  // L8(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L8_;

D17_:;
  // deopt 94 [r56, l23, "iso-8859-7", encoding21]
  SEXP Rsh_Fir_array_deopt_stack13[4];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_encoding21_;
  Rsh_Fir_deopt(94, 4, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L61_:;
  // encoding22 = force? encoding21
  Rsh_Fir_reg_encoding22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding21_);
  // checkMissing(encoding22)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_encoding22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // r59 = `==`(encoding22, "greek")
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_encoding22_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 40);
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // ___7 = ldf `[<-` in base
  Rsh_Fir_reg____7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r60 = dyn ___7(l23, "iso-8859-7", r59)
  SEXP Rsh_Fir_array_args79[3];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_l23_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args79[2] = Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____7_, 3, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L8(r60)
  // L8(r60)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r60_;
  goto L8_;

L62_:;
  // dr18 = tryDispatchBuiltin.0("[<-", l24, "iso-8859-8")
  SEXP Rsh_Fir_array_args80[3];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args80[2] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args80);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc9 then L64() else L63("iso-8859-8", dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L64()
    goto L64_;
  } else {
  // L63("iso-8859-8", dr18)
    Rsh_Fir_reg_r62_ = Rsh_const(CCP, 10);
    Rsh_Fir_reg_l26_ = Rsh_Fir_reg_dr18_;
    goto L63_;
  }

L63_:;
  // encoding23 = ld encoding
  Rsh_Fir_reg_encoding23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

L64_:;
  // dx22 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // goto L9(dx22)
  // L9(dx22)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L9_;

D18_:;
  // deopt 103 [r62, l26, "iso-8859-8", encoding23]
  SEXP Rsh_Fir_array_deopt_stack14[4];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_const(CCP, 10);
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_encoding23_;
  Rsh_Fir_deopt(103, 4, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L65_:;
  // encoding24 = force? encoding23
  Rsh_Fir_reg_encoding24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding23_);
  // checkMissing(encoding24)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_encoding24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r65 = `==`(encoding24, "hebrew")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_encoding24_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // ___8 = ldf `[<-` in base
  Rsh_Fir_reg____8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r66 = dyn ___8(l26, "iso-8859-8", r65)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_l26_;
  Rsh_Fir_array_args85[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args85[2] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names16[3];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_array_arg_names16[2] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____8_, 3, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r66)
  // L9(r66)
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r66_;
  goto L9_;

L66_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l27, "iso-8859-9")
  SEXP Rsh_Fir_array_args86[3];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_l27_;
  Rsh_Fir_array_args86[2] = Rsh_const(CCP, 11);
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args86);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc10 then L68() else L67("iso-8859-9", dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L68()
    goto L68_;
  } else {
  // L67("iso-8859-9", dr20)
    Rsh_Fir_reg_r68_ = Rsh_const(CCP, 11);
    Rsh_Fir_reg_l29_ = Rsh_Fir_reg_dr20_;
    goto L67_;
  }

L67_:;
  // encoding25 = ld encoding
  Rsh_Fir_reg_encoding25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L69() else D19()
  // L69()
  goto L69_;

L68_:;
  // dx24 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // goto L10(dx24)
  // L10(dx24)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L10_;

D19_:;
  // deopt 112 [r68, l29, "iso-8859-9", encoding25]
  SEXP Rsh_Fir_array_deopt_stack15[4];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_deopt_stack15[3] = Rsh_Fir_reg_encoding25_;
  Rsh_Fir_deopt(112, 4, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L69_:;
  // encoding26 = force? encoding25
  Rsh_Fir_reg_encoding26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding25_);
  // checkMissing(encoding26)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_encoding26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // r71 = `==`(encoding26, "latin5")
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_encoding26_;
  Rsh_Fir_array_args90[1] = Rsh_const(CCP, 42);
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // ___9 = ldf `[<-` in base
  Rsh_Fir_reg____9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r72 = dyn ___9(l29, "iso-8859-9", r71)
  SEXP Rsh_Fir_array_args91[3];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_l29_;
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_array_arg_names17[3];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____9_, 3, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L10(r72)
  // L10(r72)
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r72_;
  goto L10_;

L70_:;
  // dr22 = tryDispatchBuiltin.0("[<-", l30, "iso-8859-10")
  SEXP Rsh_Fir_array_args92[3];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args92);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc11 then L72() else L71("iso-8859-10", dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L72()
    goto L72_;
  } else {
  // L71("iso-8859-10", dr22)
    Rsh_Fir_reg_r74_ = Rsh_const(CCP, 12);
    Rsh_Fir_reg_l32_ = Rsh_Fir_reg_dr22_;
    goto L71_;
  }

L71_:;
  // encoding27 = ld encoding
  Rsh_Fir_reg_encoding27_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L73() else D20()
  // L73()
  goto L73_;

L72_:;
  // dx26 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L11(dx26)
  // L11(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L11_;

D20_:;
  // deopt 121 [r74, l32, "iso-8859-10", encoding27]
  SEXP Rsh_Fir_array_deopt_stack16[4];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_l32_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_deopt_stack16[3] = Rsh_Fir_reg_encoding27_;
  Rsh_Fir_deopt(121, 4, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L73_:;
  // encoding28 = force? encoding27
  Rsh_Fir_reg_encoding28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding27_);
  // checkMissing(encoding28)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_encoding28_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // r77 = `==`(encoding28, "latin6")
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_encoding28_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // ___10 = ldf `[<-` in base
  Rsh_Fir_reg____10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r78 = dyn ___10(l32, "iso-8859-10", r77)
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_l32_;
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_r77_;
  SEXP Rsh_Fir_array_arg_names18[3];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____10_, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L11(r78)
  // L11(r78)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r78_;
  goto L11_;

L74_:;
  // dr24 = tryDispatchBuiltin.0("[<-", l33, "iso-8859-14")
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_l33_;
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args98);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if dc12 then L76() else L75("iso-8859-14", dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L76()
    goto L76_;
  } else {
  // L75("iso-8859-14", dr24)
    Rsh_Fir_reg_r80_ = Rsh_const(CCP, 13);
    Rsh_Fir_reg_l35_ = Rsh_Fir_reg_dr24_;
    goto L75_;
  }

L75_:;
  // encoding29 = ld encoding
  Rsh_Fir_reg_encoding29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D21()
  // L77()
  goto L77_;

L76_:;
  // dx28 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // goto L12(dx28)
  // L12(dx28)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx28_;
  goto L12_;

D21_:;
  // deopt 130 [r80, l35, "iso-8859-14", encoding29]
  SEXP Rsh_Fir_array_deopt_stack17[4];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r80_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_encoding29_;
  Rsh_Fir_deopt(130, 4, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // encoding30 = force? encoding29
  Rsh_Fir_reg_encoding30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding29_);
  // checkMissing(encoding30)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_encoding30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // r83 = `==`(encoding30, "latin8")
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_encoding30_;
  Rsh_Fir_array_args102[1] = Rsh_const(CCP, 44);
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // ___11 = ldf `[<-` in base
  Rsh_Fir_reg____11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r84 = dyn ___11(l35, "iso-8859-14", r83)
  SEXP Rsh_Fir_array_args103[3];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_l35_;
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args103[2] = Rsh_Fir_reg_r83_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____11_, 3, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L12(r84)
  // L12(r84)
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r84_;
  goto L12_;

L78_:;
  // dr26 = tryDispatchBuiltin.0("[<-", l36, "iso-8859-15")
  SEXP Rsh_Fir_array_args104[3];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_l36_;
  Rsh_Fir_array_args104[2] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args104);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // if dc13 then L80() else L79("iso-8859-15", dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L80()
    goto L80_;
  } else {
  // L79("iso-8859-15", dr26)
    Rsh_Fir_reg_r86_ = Rsh_const(CCP, 14);
    Rsh_Fir_reg_l38_ = Rsh_Fir_reg_dr26_;
    goto L79_;
  }

L79_:;
  // encoding31 = ld encoding
  Rsh_Fir_reg_encoding31_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L81() else D22()
  // L81()
  goto L81_;

L80_:;
  // dx30 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty());
  // goto L13(dx30)
  // L13(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L13_;

D22_:;
  // deopt 139 [r86, l38, "iso-8859-15", encoding31]
  SEXP Rsh_Fir_array_deopt_stack18[4];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_l38_;
  Rsh_Fir_array_deopt_stack18[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_deopt_stack18[3] = Rsh_Fir_reg_encoding31_;
  Rsh_Fir_deopt(139, 4, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L81_:;
  // encoding32 = force? encoding31
  Rsh_Fir_reg_encoding32_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding31_);
  // checkMissing(encoding32)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_encoding32_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty()));
  // r89 = `==`(encoding32, "latin-9")
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_encoding32_;
  Rsh_Fir_array_args108[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // ___12 = ldf `[<-` in base
  Rsh_Fir_reg____12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r90 = dyn ___12(l38, "iso-8859-15", r89)
  SEXP Rsh_Fir_array_args109[3];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_l38_;
  Rsh_Fir_array_args109[1] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args109[2] = Rsh_Fir_reg_r89_;
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____12_, 3, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L13(r90)
  // L13(r90)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r90_;
  goto L13_;

L82_:;
  // dr28 = tryDispatchBuiltin.0("[<-", l39, "iso-8859-16")
  SEXP Rsh_Fir_array_args110[3];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_l39_;
  Rsh_Fir_array_args110[2] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args110);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc14 then L84() else L83("iso-8859-16", dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L84()
    goto L84_;
  } else {
  // L83("iso-8859-16", dr28)
    Rsh_Fir_reg_r92_ = Rsh_const(CCP, 15);
    Rsh_Fir_reg_l41_ = Rsh_Fir_reg_dr28_;
    goto L83_;
  }

L83_:;
  // encoding33 = ld encoding
  Rsh_Fir_reg_encoding33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L85() else D23()
  // L85()
  goto L85_;

L84_:;
  // dx32 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L14(dx32)
  // L14(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L14_;

D23_:;
  // deopt 148 [r92, l41, "iso-8859-16", encoding33]
  SEXP Rsh_Fir_array_deopt_stack19[4];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r92_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_l41_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_const(CCP, 15);
  Rsh_Fir_array_deopt_stack19[3] = Rsh_Fir_reg_encoding33_;
  Rsh_Fir_deopt(148, 4, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // encoding34 = force? encoding33
  Rsh_Fir_reg_encoding34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding33_);
  // checkMissing(encoding34)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_encoding34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // r95 = `==`(encoding34, "latin10")
  SEXP Rsh_Fir_array_args114[2];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_encoding34_;
  Rsh_Fir_array_args114[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // ___13 = ldf `[<-` in base
  Rsh_Fir_reg____13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r96 = dyn ___13(l41, "iso-8859-16", r95)
  SEXP Rsh_Fir_array_args115[3];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_l41_;
  Rsh_Fir_array_args115[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args115[2] = Rsh_Fir_reg_r95_;
  SEXP Rsh_Fir_array_arg_names21[3];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_reg_r96_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____13_, 3, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L14(r96)
  // L14(r96)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r96_;
  goto L14_;

L86_:;
  // dr30 = tryDispatchBuiltin.0("[<-", l42, "utf-8")
  SEXP Rsh_Fir_array_args116[3];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_l42_;
  Rsh_Fir_array_args116[2] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args116);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc15 then L88() else L87("utf-8", dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L88()
    goto L88_;
  } else {
  // L87("utf-8", dr30)
    Rsh_Fir_reg_r98_ = Rsh_const(CCP, 16);
    Rsh_Fir_reg_l44_ = Rsh_Fir_reg_dr30_;
    goto L87_;
  }

L87_:;
  // encoding35 = ld encoding
  Rsh_Fir_reg_encoding35_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L89() else D24()
  // L89()
  goto L89_;

L88_:;
  // dx34 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L15(dx34)
  // L15(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L15_;

D24_:;
  // deopt 157 [r98, l44, "utf-8", encoding35]
  SEXP Rsh_Fir_array_deopt_stack20[4];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_l44_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_encoding35_;
  Rsh_Fir_deopt(157, 4, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L89_:;
  // encoding36 = force? encoding35
  Rsh_Fir_reg_encoding36_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding35_);
  // checkMissing(encoding36)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_encoding36_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty()));
  // r101 = `==`(encoding36, "utf8")
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_encoding36_;
  Rsh_Fir_array_args120[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r101_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // ___14 = ldf `[<-` in base
  Rsh_Fir_reg____14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r102 = dyn ___14(l44, "utf-8", r101)
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_l44_;
  Rsh_Fir_array_args121[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg_r101_;
  SEXP Rsh_Fir_array_arg_names22[3];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____14_, 3, Rsh_Fir_array_args121, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L15(r102)
  // L15(r102)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r102_;
  goto L15_;

L90_:;
  // dr32 = tryDispatchBuiltin.0("[<-", l45, "us-ascii")
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_l45_;
  Rsh_Fir_array_args122[2] = Rsh_const(CCP, 17);
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args122);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if dc16 then L92() else L91("us-ascii", dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L92()
    goto L92_;
  } else {
  // L91("us-ascii", dr32)
    Rsh_Fir_reg_r104_ = Rsh_const(CCP, 17);
    Rsh_Fir_reg_l47_ = Rsh_Fir_reg_dr32_;
    goto L91_;
  }

L91_:;
  // encoding37 = ld encoding
  Rsh_Fir_reg_encoding37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L93() else D25()
  // L93()
  goto L93_;

L92_:;
  // dx36 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L16(dx36)
  // L16(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L16_;

D25_:;
  // deopt 166 [r104, l47, "us-ascii", encoding37]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r104_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_l47_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_const(CCP, 17);
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_encoding37_;
  Rsh_Fir_deopt(166, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L93_:;
  // encoding38 = force? encoding37
  Rsh_Fir_reg_encoding38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding37_);
  // checkMissing(encoding38)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_encoding38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // r107 = `==`(encoding38, "ascii")
  SEXP Rsh_Fir_array_args126[2];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_encoding38_;
  Rsh_Fir_array_args126[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty());
  // ___15 = ldf `[<-` in base
  Rsh_Fir_reg____15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r108 = dyn ___15(l47, "us-ascii", r107)
  SEXP Rsh_Fir_array_args127[3];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_l47_;
  Rsh_Fir_array_args127[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args127[2] = Rsh_Fir_reg_r107_;
  SEXP Rsh_Fir_array_arg_names23[3];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_array_arg_names23[2] = R_MissingArg;
  Rsh_Fir_reg_r108_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____15_, 3, Rsh_Fir_array_args127, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L16(r108)
  // L16(r108)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r108_;
  goto L16_;

D26_:;
  // deopt 172 [encoding39]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_encoding39_;
  Rsh_Fir_deopt(172, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L94_:;
  // encoding40 = force? encoding39
  Rsh_Fir_reg_encoding40_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding39_);
  // checkMissing(encoding40)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_encoding40_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return encoding40
  return Rsh_Fir_reg_encoding40_;
}
SEXP Rsh_Fir_user_promise_inner4171839283_(SEXP CCP, SEXP RHO) {
  // encoding1 = ld encoding
  Rsh_Fir_reg_encoding1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // encoding2 = force? encoding1
  Rsh_Fir_reg_encoding2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding1_);
  // checkMissing(encoding2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_encoding2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return encoding2
  return Rsh_Fir_reg_encoding2_;
}
SEXP Rsh_Fir_user_promise_inner4171839283_1(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r8
  return Rsh_Fir_reg_r8_;

L1_:;
  // c2 = ldf c in base
  Rsh_Fir_reg_c2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r9 = dyn c2("", "unknown")
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c2_, 2, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L0_;

L2_:;
  // r7 = dyn base("", "unknown")
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 26);
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner4171839283_2(SEXP CCP, SEXP RHO) {
  // encoding3 = ld encoding
  Rsh_Fir_reg_encoding3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // encoding4 = force? encoding3
  Rsh_Fir_reg_encoding4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding3_);
  // checkMissing(encoding4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_encoding4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // return encoding4
  return Rsh_Fir_reg_encoding4_;
}
SEXP Rsh_Fir_user_promise_inner4171839283_3(SEXP CCP, SEXP RHO) {
  // encoding5 = ld encoding
  Rsh_Fir_reg_encoding5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // encoding6 = force? encoding5
  Rsh_Fir_reg_encoding6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding5_);
  // checkMissing(encoding6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_encoding6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return encoding6
  return Rsh_Fir_reg_encoding6_;
}
SEXP Rsh_Fir_user_promise_inner4171839283_4(SEXP CCP, SEXP RHO) {
  // encoding7 = ld encoding
  Rsh_Fir_reg_encoding7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // encoding8 = force? encoding7
  Rsh_Fir_reg_encoding8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_encoding7_);
  // checkMissing(encoding8)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_encoding8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return encoding8
  return Rsh_Fir_reg_encoding8_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
