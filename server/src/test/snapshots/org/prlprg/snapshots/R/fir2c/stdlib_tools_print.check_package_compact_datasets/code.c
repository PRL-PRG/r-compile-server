#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `print.check_package_compact_datasets` = r
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
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_ngettext;  // ngettext
  SEXP Rsh_Fir_reg_nr;  // nr
  SEXP Rsh_Fir_reg_nr1_;  // nr1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_writeLines;  // writeLines
  SEXP Rsh_Fir_reg_msg;  // msg
  SEXP Rsh_Fir_reg_msg1_;  // msg1
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_reformat;  // reformat
  SEXP Rsh_Fir_reg_rdas;  // rdas
  SEXP Rsh_Fir_reg_rdas1_;  // rdas1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_rdas3_;  // rdas3
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_print;  // print
  SEXP Rsh_Fir_reg_rdas4_;  // rdas4
  SEXP Rsh_Fir_reg_rdas5_;  // rdas5
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_writeLines1_;  // writeLines1
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_s3_;  // s3
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_s4_;  // s4
  SEXP Rsh_Fir_reg_s5_;  // s5
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_s7_;  // s7
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_c29_;  // c29
  SEXP Rsh_Fir_reg_s8_;  // s8
  SEXP Rsh_Fir_reg_s9_;  // s9
  SEXP Rsh_Fir_reg_c30_;  // c30
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_s11_;  // s11
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_s12_;  // s12
  SEXP Rsh_Fir_reg_s13_;  // s13
  SEXP Rsh_Fir_reg_c35_;  // c35
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_s15_;  // s15
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_dx28_;  // dx28
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c40_;  // c40
  SEXP Rsh_Fir_reg_c41_;  // c41
  SEXP Rsh_Fir_reg_c43_;  // c43
  SEXP Rsh_Fir_reg_writeLines2_;  // writeLines2
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c44_;  // c44
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_nrow1_;  // nrow1
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_c45_;  // c45
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c46_;  // c46
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c47_;  // c47
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_reformat1_;  // reformat1
  SEXP Rsh_Fir_reg_improve;  // improve
  SEXP Rsh_Fir_reg_improve1_;  // improve1
  SEXP Rsh_Fir_reg_c48_;  // c48
  SEXP Rsh_Fir_reg_improve3_;  // improve3
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx34_;  // dx34
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c49_;  // c49
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr28_;  // dr28
  SEXP Rsh_Fir_reg_dc14_;  // dc14
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_reformat2_;  // reformat2
  SEXP Rsh_Fir_reg_improve4_;  // improve4
  SEXP Rsh_Fir_reg_improve5_;  // improve5
  SEXP Rsh_Fir_reg_c50_;  // c50
  SEXP Rsh_Fir_reg_improve7_;  // improve7
  SEXP Rsh_Fir_reg_dr30_;  // dr30
  SEXP Rsh_Fir_reg_dc15_;  // dc15
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c51_;  // c51
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr32_;  // dr32
  SEXP Rsh_Fir_reg_dc16_;  // dc16
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_print1_;  // print1
  SEXP Rsh_Fir_reg_improve8_;  // improve8
  SEXP Rsh_Fir_reg_improve9_;  // improve9
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r71_;  // r71

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // r = clos inner2501545716
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2501545716_, RHO, CCP);
  // st reformat = r
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_r1, RHO);
  (void)(Rsh_Fir_reg_r1);
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L17() else D0()
  // L17()
  goto L17_;

L0_:;
  // goto L1()
  // L1()
  goto L1_;

L1_:;
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L2_:;
  // r23 = `!`(r21)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c7 then L45() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L45()
    goto L45_;
  } else {
  // L3()
    goto L3_;
  }

L3_:;
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // sym1 = ldf `is.null`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf `is.null` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L5_:;
  // r31 = `!`(r29)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c11 then L56() else L6(c11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L56()
    goto L56_;
  } else {
  // L6(c11)
    Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c11_;
    goto L6_;
  }

L6_:;
  // c27 = `as.logical`(c13)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_c13_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c27 then L66() else L9(c27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L66()
    goto L66_;
  } else {
  // L9(c27)
    Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c27_;
    goto L9_;
  }

L7_:;
  // s4 = ld s
  Rsh_Fir_reg_s4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L61() else D16()
  // L61()
  goto L61_;

L8_:;
  // r34 = `-`(dx20, dx21)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // r35 = `>`(r34, 100000.0)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c24 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // c25 = `&&`(c23, c24)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_c23_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_c24_;
  Rsh_Fir_reg_c25_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L6(c25)
  // L6(c25)
  Rsh_Fir_reg_c13_ = Rsh_Fir_reg_c25_;
  goto L6_;

L9_:;
  // c43 = `as.logical`(c29)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_c29_;
  Rsh_Fir_reg_c43_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c43 then L76() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c43_)) {
  // L76()
    goto L76_;
  } else {
  // L12()
    goto L12_;
  }

L10_:;
  // s12 = ld s
  Rsh_Fir_reg_s12_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L71() else D18()
  // L71()
  goto L71_;

L11_:;
  // r38 = `/`(dx28, dx29)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dx28_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // r39 = `<`(r38, 0.9)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c40 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c40_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c41 = `&&`(c39, c40)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c39_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c40_;
  Rsh_Fir_reg_c41_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L9(c41)
  // L9(c41)
  Rsh_Fir_reg_c29_ = Rsh_Fir_reg_c41_;
  goto L9_;

L12_:;
  // goto L15()
  // L15()
  goto L15_;

L13_:;
  // goto L14(NULL)
  // L14(NULL)
  Rsh_Fir_reg_r67_ = Rsh_const(CCP, 9);
  goto L14_;

L14_:;
  // goto L15()
  // L15()
  goto L15_;

L15_:;
  // sym3 = ldf invisible
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base3 = ldf invisible in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard3 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L16_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r70
  return Rsh_Fir_reg_r70_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L1() else L2(x2);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("$", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x4):
  //   r1 = `$`(x4, <sym rdas>);
  //   goto L0(r1);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_, CCP, RHO);
  // r3 = dyn nrow(p)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L18() else D1()
  // L18()
  goto L18_;

D1_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L18_:;
  // st nr = r3
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // c1 = `as.logical`(r3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L0()
    goto L0_;
  }

L19_:;
  // ngettext = ldf ngettext
  Rsh_Fir_reg_ngettext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L20() else D2()
  // L20()
  goto L20_;

D2_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p1 = prom<V +>{
  //   nr = ld nr;
  //   nr1 = force? nr;
  //   checkMissing(nr1);
  //   return nr1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_1, CCP, RHO);
  // r5 = dyn ngettext[, , , domain](p1, "Warning: large data file saved inefficiently:", "Warning: large data files saved inefficiently:", NA_LGL)
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names1[4];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_ngettext, 4, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L21() else D3()
  // L21()
  goto L21_;

D3_:;
  // deopt 15 [r5]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L21_:;
  // st msg = r5
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // writeLines = ldf writeLines
  Rsh_Fir_reg_writeLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L22() else D4()
  // L22()
  goto L22_;

D4_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L22_:;
  // p2 = prom<V +>{
  //   msg = ld msg;
  //   msg1 = force? msg;
  //   checkMissing(msg1);
  //   return msg1;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_2, CCP, RHO);
  // r7 = dyn writeLines(p2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 20 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L23_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L24() else D6()
  // L24()
  goto L24_;

D6_:;
  // deopt 21 [x5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L24_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x6)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c2 then L26() else L27(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L26()
    goto L26_;
  } else {
  // L27(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L27_;
  }

L25_:;
  // st rdas = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // reformat = ldf reformat
  Rsh_Fir_reg_reformat = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L29() else D7()
  // L29()
  goto L29_;

L26_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc1 then L28() else L27(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L28()
    goto L28_;
  } else {
  // L27(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L27_;
  }

L27_:;
  // r8 = `$`(x8, <sym rdas>)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args33[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L25(r8)
  // L25(r8)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r8_;
  goto L25_;

L28_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L25(dx2)
  // L25(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L25_;

D7_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L29_:;
  // p3 = prom<V +>{
  //   rdas = ld rdas;
  //   rdas1 = force? rdas;
  //   checkMissing(rdas1);
  //   c3 = `is.object`(rdas1);
  //   if c3 then L1() else L2(rdas1);
  // L0(dx5):
  //   return dx5;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("$", rdas1);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(rdas3):
  //   r9 = `$`(rdas3, <sym size>);
  //   goto L0(r9);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_3, CCP, RHO);
  // r11 = dyn reformat(p3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reformat, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L30() else D8()
  // L30()
  goto L30_;

D8_:;
  // deopt 28 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L30_:;
  // l = ld rdas
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if c4 then L32() else L33(r11, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L32()
    goto L32_;
  } else {
  // L33(r11, l)
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r11_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L33_;
  }

L31_:;
  // st rdas = dx7
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L35() else D9()
  // L35()
  goto L35_;

L32_:;
  // dr6 = tryDispatchBuiltin.0("$<-", l, r11)
  SEXP Rsh_Fir_array_args43[3];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args43[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args43[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args43);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if dc3 then L34() else L33(r11, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L34()
    goto L34_;
  } else {
  // L33(r11, dr6)
    Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r11_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr6_;
    goto L33_;
  }

L33_:;
  // r16 = `$<-`(l2, <sym size>, r11)
  SEXP Rsh_Fir_array_args45[3];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args45[1] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args45[2] = Rsh_Fir_reg_r11_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L31(r16)
  // L31(r16)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r16_;
  goto L31_;

L34_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // goto L31(dx6)
  // L31(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L31_;

D9_:;
  // deopt 33 []
  Rsh_Fir_deopt(33, 0, NULL, CCP, RHO);
  return R_NilValue;

L35_:;
  // p4 = prom<V +>{
  //   rdas4 = ld rdas;
  //   rdas5 = force? rdas4;
  //   checkMissing(rdas5);
  //   return rdas5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_4, CCP, RHO);
  // r18 = dyn print(p4)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L36() else D10()
  // L36()
  goto L36_;

D10_:;
  // deopt 35 [r18]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L1()
  // L1()
  goto L1_;

L38_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D11()
  // L40()
  goto L40_;

L39_:;
  // r20 = dyn base(<lang `$`(x, msg)>)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L2(r20)
  // L2(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L2_;

D11_:;
  // deopt 39 [x9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L40_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c5 then L42() else L43(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L42()
    goto L42_;
  } else {
  // L43(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L43_;
  }

L41_:;
  // c6 = `==`(dx9, NULL)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L2(c6)
  // L2(c6)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_c6_;
  goto L2_;

L42_:;
  // dr8 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args53);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty());
  // if dc4 then L44() else L43(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L44()
    goto L44_;
  } else {
  // L43(dr8)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr8_;
    goto L43_;
  }

L43_:;
  // r22 = `$`(x12, <sym msg>)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L41(r22)
  // L41(r22)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r22_;
  goto L41_;

L44_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L41(dx8)
  // L41(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L41_;

L45_:;
  // writeLines1 = ldf writeLines
  Rsh_Fir_reg_writeLines1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L46() else D12()
  // L46()
  goto L46_;

D12_:;
  // deopt 45 []
  Rsh_Fir_deopt(45, 0, NULL, CCP, RHO);
  return R_NilValue;

L46_:;
  // p5 = prom<V +>{
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   c8 = `is.object`(x14);
  //   if c8 then L1() else L2(x14);
  // L0(dx11):
  //   return dx11;
  // L1():
  //   dr10 = tryDispatchBuiltin.1("$", x14);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L3() else L2(dr10);
  // L2(x16):
  //   r24 = `$`(x16, <sym msg>);
  //   goto L0(r24);
  // L3():
  //   dx10 = getTryDispatchBuiltinValue(dr10);
  //   goto L0(dx10);
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_5, CCP, RHO);
  // r26 = dyn writeLines1(p5)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines1_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L47() else D13()
  // L47()
  goto L47_;

D13_:;
  // deopt 47 [r26]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L4()
  // L4()
  goto L4_;

L49_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L51() else D14()
  // L51()
  goto L51_;

L50_:;
  // r28 = dyn base1(<lang `<-`(s, `$`(x, sizes))>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(r28)
  // L5(r28)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_r28_;
  goto L5_;

D14_:;
  // deopt 51 [x17]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L51_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(x18)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if c9 then L53() else L54(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L53()
    goto L53_;
  } else {
  // L54(x18)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L54_;
  }

L52_:;
  // st s = dx13
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx13_, RHO);
  (void)(Rsh_Fir_reg_dx13_);
  // c10 = `==`(dx13, NULL)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L5(c10)
  // L5(c10)
  Rsh_Fir_reg_r29_ = Rsh_Fir_reg_c10_;
  goto L5_;

L53_:;
  // dr12 = tryDispatchBuiltin.1("$", x18)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc6 then L55() else L54(dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L55()
    goto L55_;
  } else {
  // L54(dr12)
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr12_;
    goto L54_;
  }

L54_:;
  // r30 = `$`(x20, <sym sizes>)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // goto L52(r30)
  // L52(r30)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r30_;
  goto L52_;

L55_:;
  // dx12 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L52(dx12)
  // L52(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L52_;

L56_:;
  // s = ld s
  Rsh_Fir_reg_s = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L57() else D15()
  // L57()
  goto L57_;

D15_:;
  // deopt 57 [c11, s]
  SEXP Rsh_Fir_array_deopt_stack9[2];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_c11_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_s;
  Rsh_Fir_deopt(57, 2, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L57_:;
  // s1 = force? s
  Rsh_Fir_reg_s1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s);
  // checkMissing(s1)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_s1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(s1)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty());
  // if c14 then L58() else L59(c11, s1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L58()
    goto L58_;
  } else {
  // L59(c11, s1)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_s1_;
    goto L59_;
  }

L58_:;
  // dr14 = tryDispatchBuiltin.1("[", s1)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_s1_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args74);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if dc7 then L60() else L59(c11, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L60()
    goto L60_;
  } else {
  // L59(c11, dr14)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c11_;
    Rsh_Fir_reg_s3_ = Rsh_Fir_reg_dr14_;
    goto L59_;
  }

L59_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r32 = dyn __(s3, 1)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_s3_;
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(c16, r32)
  // L7(c16, r32)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r32_;
  goto L7_;

L60_:;
  // dx14 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L7(c11, dx14)
  // L7(c11, dx14)
  Rsh_Fir_reg_c18_ = Rsh_Fir_reg_c11_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L7_;

D16_:;
  // deopt 61 [c18, dx15, s4]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_c18_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_s4_;
  Rsh_Fir_deopt(61, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L61_:;
  // s5 = force? s4
  Rsh_Fir_reg_s5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s4_);
  // checkMissing(s5)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_s5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(s5)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_s5_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if c19 then L62() else L63(c18, dx15, s5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L62()
    goto L62_;
  } else {
  // L63(c18, dx15, s5)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c18_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_s7_ = Rsh_Fir_reg_s5_;
    goto L63_;
  }

L62_:;
  // dr16 = tryDispatchBuiltin.1("[", s5)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_s5_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args80);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // if dc8 then L64() else L63(c18, dx15, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L64()
    goto L64_;
  } else {
  // L63(c18, dx15, dr16)
    Rsh_Fir_reg_c21_ = Rsh_Fir_reg_c18_;
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx15_;
    Rsh_Fir_reg_s7_ = Rsh_Fir_reg_dr16_;
    goto L63_;
  }

L63_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r33 = dyn __1(s7, 2)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_s7_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(c21, dx17, r33)
  // L8(c21, dx17, r33)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c21_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r33_;
  goto L8_;

L64_:;
  // dx19 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // goto L8(c18, dx15, dx19)
  // L8(c18, dx15, dx19)
  Rsh_Fir_reg_c23_ = Rsh_Fir_reg_c18_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx19_;
  goto L8_;

L66_:;
  // s8 = ld s
  Rsh_Fir_reg_s8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L67() else D17()
  // L67()
  goto L67_;

D17_:;
  // deopt 70 [c27, s8]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_c27_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_s8_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L67_:;
  // s9 = force? s8
  Rsh_Fir_reg_s9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s8_);
  // checkMissing(s9)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_s9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // c30 = `is.object`(s9)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_s9_;
  Rsh_Fir_reg_c30_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c30 then L68() else L69(c27, s9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c30_)) {
  // L68()
    goto L68_;
  } else {
  // L69(c27, s9)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c27_;
    Rsh_Fir_reg_s11_ = Rsh_Fir_reg_s9_;
    goto L69_;
  }

L68_:;
  // dr18 = tryDispatchBuiltin.1("[", s9)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_s9_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args86);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // if dc9 then L70() else L69(c27, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L70()
    goto L70_;
  } else {
  // L69(c27, dr18)
    Rsh_Fir_reg_c32_ = Rsh_Fir_reg_c27_;
    Rsh_Fir_reg_s11_ = Rsh_Fir_reg_dr18_;
    goto L69_;
  }

L69_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r36 = dyn __2(s11, 2)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_s11_;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L10(c32, r36)
  // L10(c32, r36)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c32_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r36_;
  goto L10_;

L70_:;
  // dx22 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L10(c27, dx22)
  // L10(c27, dx22)
  Rsh_Fir_reg_c34_ = Rsh_Fir_reg_c27_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L10_;

D18_:;
  // deopt 74 [c34, dx23, s12]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_c34_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_s12_;
  Rsh_Fir_deopt(74, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L71_:;
  // s13 = force? s12
  Rsh_Fir_reg_s13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s12_);
  // checkMissing(s13)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_s13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c35 = `is.object`(s13)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_s13_;
  Rsh_Fir_reg_c35_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c35 then L72() else L73(c34, dx23, s13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c35_)) {
  // L72()
    goto L72_;
  } else {
  // L73(c34, dx23, s13)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c34_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_s15_ = Rsh_Fir_reg_s13_;
    goto L73_;
  }

L72_:;
  // dr20 = tryDispatchBuiltin.1("[", s13)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_s13_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc10 then L74() else L73(c34, dx23, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L74()
    goto L74_;
  } else {
  // L73(c34, dx23, dr20)
    Rsh_Fir_reg_c37_ = Rsh_Fir_reg_c34_;
    Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_s15_ = Rsh_Fir_reg_dr20_;
    goto L73_;
  }

L73_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r37 = dyn __3(s15, 1)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_s15_;
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L11(c37, dx25, r37)
  // L11(c37, dx25, r37)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c37_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx25_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_r37_;
  goto L11_;

L74_:;
  // dx27 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // goto L11(c34, dx23, dx27)
  // L11(c34, dx23, dx27)
  Rsh_Fir_reg_c39_ = Rsh_Fir_reg_c34_;
  Rsh_Fir_reg_dx28_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
  goto L11_;

L76_:;
  // writeLines2 = ldf writeLines
  Rsh_Fir_reg_writeLines2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L77() else D19()
  // L77()
  goto L77_;

D19_:;
  // deopt 84 []
  Rsh_Fir_deopt(84, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p6 = prom<V +>{
  //   sym2 = ldf c;
  //   base2 = ldf c in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r41):
  //   return r41;
  // L1():
  //   c44 = ldf c in base;
  //   r42 = dyn c44("", "Note: significantly better compression could be obtained", "      by using R CMD build --resave-data");
  //   goto L0(r42);
  // L2():
  //   r40 = dyn base2("", "Note: significantly better compression could be obtained", "      by using R CMD build --resave-data");
  //   goto L0(r40);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_6, CCP, RHO);
  // r44 = dyn writeLines2(p6)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_writeLines2_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L78() else D20()
  // L78()
  goto L78_;

D20_:;
  // deopt 86 [r44]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L78_:;
  // nrow1 = ldf nrow
  Rsh_Fir_reg_nrow1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // check L79() else D21()
  // L79()
  goto L79_;

D21_:;
  // deopt 88 []
  Rsh_Fir_deopt(88, 0, NULL, CCP, RHO);
  return R_NilValue;

L79_:;
  // p7 = prom<V +>{
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   c45 = `is.object`(x22);
  //   if c45 then L1() else L2(x22);
  // L0(dx31):
  //   return dx31;
  // L1():
  //   dr22 = tryDispatchBuiltin.1("$", x22);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L3() else L2(dr22);
  // L2(x24):
  //   r45 = `$`(x24, <sym improve>);
  //   goto L0(r45);
  // L3():
  //   dx30 = getTryDispatchBuiltinValue(dr22);
  //   goto L0(dx30);
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_7, CCP, RHO);
  // r47 = dyn nrow1(p7)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow1_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L80() else D22()
  // L80()
  goto L80_;

D22_:;
  // deopt 90 [r47]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L80_:;
  // c46 = `as.logical`(r47)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_c46_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if c46 then L81() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c46_)) {
  // L81()
    goto L81_;
  } else {
  // L13()
    goto L13_;
  }

L81_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L82() else D23()
  // L82()
  goto L82_;

D23_:;
  // deopt 91 [x25]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L82_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // c47 = `is.object`(x26)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c47_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if c47 then L84() else L85(x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c47_)) {
  // L84()
    goto L84_;
  } else {
  // L85(x26)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L85_;
  }

L83_:;
  // st improve = dx33
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_dx33_, RHO);
  (void)(Rsh_Fir_reg_dx33_);
  // reformat1 = ldf reformat
  Rsh_Fir_reg_reformat1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L87() else D24()
  // L87()
  goto L87_;

L84_:;
  // dr24 = tryDispatchBuiltin.1("$", x26)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args110);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // if dc12 then L86() else L85(dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L86()
    goto L86_;
  } else {
  // L85(dr24)
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr24_;
    goto L85_;
  }

L85_:;
  // r48 = `$`(x28, <sym improve>)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // goto L83(r48)
  // L83(r48)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_r48_;
  goto L83_;

L86_:;
  // dx32 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx32_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L83(dx32)
  // L83(dx32)
  Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx32_;
  goto L83_;

D24_:;
  // deopt 96 []
  Rsh_Fir_deopt(96, 0, NULL, CCP, RHO);
  return R_NilValue;

L87_:;
  // p8 = prom<V +>{
  //   improve = ld improve;
  //   improve1 = force? improve;
  //   checkMissing(improve1);
  //   c48 = `is.object`(improve1);
  //   if c48 then L1() else L2(improve1);
  // L0(dx35):
  //   return dx35;
  // L1():
  //   dr26 = tryDispatchBuiltin.1("$", improve1);
  //   dc13 = getTryDispatchBuiltinDispatched(dr26);
  //   if dc13 then L3() else L2(dr26);
  // L2(improve3):
  //   r49 = `$`(improve3, <sym old_size>);
  //   goto L0(r49);
  // L3():
  //   dx34 = getTryDispatchBuiltinValue(dr26);
  //   goto L0(dx34);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_8, CCP, RHO);
  // r51 = dyn reformat1(p8)
  SEXP Rsh_Fir_array_args120[1];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reformat1_, 1, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L88() else D25()
  // L88()
  goto L88_;

D25_:;
  // deopt 98 [r51]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L88_:;
  // l3 = ld improve
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // c49 = `is.object`(l3)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c49_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c49 then L90() else L91(r51, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c49_)) {
  // L90()
    goto L90_;
  } else {
  // L91(r51, l3)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L91_;
  }

L89_:;
  // st improve = dx37
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_dx37_, RHO);
  (void)(Rsh_Fir_reg_dx37_);
  // reformat2 = ldf reformat
  Rsh_Fir_reg_reformat2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L93() else D26()
  // L93()
  goto L93_;

L90_:;
  // dr28 = tryDispatchBuiltin.0("$<-", l3, r51)
  SEXP Rsh_Fir_array_args122[3];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args122[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args122[2] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_dr28_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args122);
  // dc14 = getTryDispatchBuiltinDispatched(dr28)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dc14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // if dc14 then L92() else L91(r51, dr28)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc14_)) {
  // L92()
    goto L92_;
  } else {
  // L91(r51, dr28)
    Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr28_;
    goto L91_;
  }

L91_:;
  // r56 = `$<-`(l5, <sym old_size>, r51)
  SEXP Rsh_Fir_array_args124[3];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args124[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args124[2] = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty());
  // goto L89(r56)
  // L89(r56)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r56_;
  goto L89_;

L92_:;
  // dx36 = getTryDispatchBuiltinValue(dr28)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_dr28_;
  Rsh_Fir_reg_dx36_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty());
  // goto L89(dx36)
  // L89(dx36)
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx36_;
  goto L89_;

D26_:;
  // deopt 103 []
  Rsh_Fir_deopt(103, 0, NULL, CCP, RHO);
  return R_NilValue;

L93_:;
  // p9 = prom<V +>{
  //   improve4 = ld improve;
  //   improve5 = force? improve4;
  //   checkMissing(improve5);
  //   c50 = `is.object`(improve5);
  //   if c50 then L1() else L2(improve5);
  // L0(dx39):
  //   return dx39;
  // L1():
  //   dr30 = tryDispatchBuiltin.1("$", improve5);
  //   dc15 = getTryDispatchBuiltinDispatched(dr30);
  //   if dc15 then L3() else L2(dr30);
  // L2(improve7):
  //   r57 = `$`(improve7, <sym new_size>);
  //   goto L0(r57);
  // L3():
  //   dx38 = getTryDispatchBuiltinValue(dr30);
  //   goto L0(dx38);
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_9, CCP, RHO);
  // r59 = dyn reformat2(p9)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_reformat2_, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L94() else D27()
  // L94()
  goto L94_;

D27_:;
  // deopt 105 [r59]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r59_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L94_:;
  // l6 = ld improve
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // c51 = `is.object`(l6)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c51_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty());
  // if c51 then L96() else L97(r59, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c51_)) {
  // L96()
    goto L96_;
  } else {
  // L97(r59, l6)
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r59_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L97_;
  }

L95_:;
  // st improve = dx41
  Rsh_Fir_store(Rsh_const(CCP, 35), Rsh_Fir_reg_dx41_, RHO);
  (void)(Rsh_Fir_reg_dx41_);
  // print1 = ldf print
  Rsh_Fir_reg_print1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L99() else D28()
  // L99()
  goto L99_;

L96_:;
  // dr32 = tryDispatchBuiltin.0("$<-", l6, r59)
  SEXP Rsh_Fir_array_args134[3];
  Rsh_Fir_array_args134[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args134[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args134[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dr32_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args134);
  // dc16 = getTryDispatchBuiltinDispatched(dr32)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dc16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if dc16 then L98() else L97(r59, dr32)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc16_)) {
  // L98()
    goto L98_;
  } else {
  // L97(r59, dr32)
    Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r59_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr32_;
    goto L97_;
  }

L97_:;
  // r64 = `$<-`(l8, <sym new_size>, r59)
  SEXP Rsh_Fir_array_args136[3];
  Rsh_Fir_array_args136[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args136[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args136[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args136, Rsh_Fir_param_types_empty());
  // goto L95(r64)
  // L95(r64)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r64_;
  goto L95_;

L98_:;
  // dx40 = getTryDispatchBuiltinValue(dr32)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr32_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // goto L95(dx40)
  // L95(dx40)
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx40_;
  goto L95_;

D28_:;
  // deopt 110 []
  Rsh_Fir_deopt(110, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // p10 = prom<V +>{
  //   improve8 = ld improve;
  //   improve9 = force? improve8;
  //   checkMissing(improve9);
  //   return improve9;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_10, CCP, RHO);
  // r66 = dyn print1(p10)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print1_, 1, Rsh_Fir_array_args139, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L100() else D29()
  // L100()
  goto L100_;

D29_:;
  // deopt 112 [r66]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(112, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L14(r66)
  // L14(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L14_;

L103_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L105() else D30()
  // L105()
  goto L105_;

L104_:;
  // r69 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args140[1];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args140, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L16(r69)
  // L16(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L16_;

D30_:;
  // deopt 119 [x29]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L105_:;
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r71 = dyn invisible(x30)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args142, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L106() else D31()
  // L106()
  goto L106_;

D31_:;
  // deopt 122 [r71]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L16(r71)
  // L16(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L16_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L1()
    goto L1_;
  } else {
  // L2(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args19);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // r1 = `$`(x4, <sym rdas>)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args21[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L0(r1)
  // L0(r1)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO) {
  // nr = ld nr
  Rsh_Fir_reg_nr = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // nr1 = force? nr
  Rsh_Fir_reg_nr1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_nr);
  // checkMissing(nr1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_nr1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // return nr1
  return Rsh_Fir_reg_nr1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_2(SEXP CCP, SEXP RHO) {
  // msg = ld msg
  Rsh_Fir_reg_msg = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // msg1 = force? msg
  Rsh_Fir_reg_msg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_msg);
  // checkMissing(msg1)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_msg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // return msg1
  return Rsh_Fir_reg_msg1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_3(SEXP CCP, SEXP RHO) {
  // rdas = ld rdas
  Rsh_Fir_reg_rdas = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // rdas1 = force? rdas
  Rsh_Fir_reg_rdas1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rdas);
  // checkMissing(rdas1)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_rdas1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(rdas1)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_rdas1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c3 then L1() else L2(rdas1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L1()
    goto L1_;
  } else {
  // L2(rdas1)
    Rsh_Fir_reg_rdas3_ = Rsh_Fir_reg_rdas1_;
    goto L2_;
  }

L0_:;
  // return dx5
  return Rsh_Fir_reg_dx5_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("$", rdas1)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_rdas1_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_rdas3_ = Rsh_Fir_reg_dr4_;
    goto L2_;
  }

L2_:;
  // r9 = `$`(rdas3, <sym size>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_rdas3_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L0(r9)
  // L0(r9)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r9_;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_4(SEXP CCP, SEXP RHO) {
  // rdas4 = ld rdas
  Rsh_Fir_reg_rdas4_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // rdas5 = force? rdas4
  Rsh_Fir_reg_rdas5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rdas4_);
  // checkMissing(rdas5)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_rdas5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // return rdas5
  return Rsh_Fir_reg_rdas5_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_5(SEXP CCP, SEXP RHO) {
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x14)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c8 then L1() else L2(x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x14)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L2_;
  }

L0_:;
  // return dx11
  return Rsh_Fir_reg_dx11_;

L1_:;
  // dr10 = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc5 then L3() else L2(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr10)
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr10_;
    goto L2_;
  }

L2_:;
  // r24 = `$`(x16, <sym msg>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L0(r24)
  // L0(r24)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r24_;
  goto L0_;

L3_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L0(dx10)
  // L0(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_6(SEXP CCP, SEXP RHO) {
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args96[2];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args96[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args96);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r41
  return Rsh_Fir_reg_r41_;

L1_:;
  // c44 = ldf c in base
  Rsh_Fir_reg_c44_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r42 = dyn c44("", "Note: significantly better compression could be obtained", "      by using R CMD build --resave-data")
  SEXP Rsh_Fir_array_args97[3];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args97[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args97[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c44_, 3, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r42)
  // L0(r42)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r42_;
  goto L0_;

L2_:;
  // r40 = dyn base2("", "Note: significantly better compression could be obtained", "      by using R CMD build --resave-data")
  SEXP Rsh_Fir_array_args98[3];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args98[2] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 3, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r40)
  // L0(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_7(SEXP CCP, SEXP RHO) {
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // c45 = `is.object`(x22)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c45_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty());
  // if c45 then L1() else L2(x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c45_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L2_;
  }

L0_:;
  // return dx31
  return Rsh_Fir_reg_dx31_;

L1_:;
  // dr22 = tryDispatchBuiltin.1("$", x22)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args102);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // if dc11 then L3() else L2(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr22_;
    goto L2_;
  }

L2_:;
  // r45 = `$`(x24, <sym improve>)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty());
  // goto L0(r45)
  // L0(r45)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r45_;
  goto L0_;

L3_:;
  // dx30 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty());
  // goto L0(dx30)
  // L0(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_8(SEXP CCP, SEXP RHO) {
  // improve = ld improve
  Rsh_Fir_reg_improve = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // improve1 = force? improve
  Rsh_Fir_reg_improve1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_improve);
  // checkMissing(improve1)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_improve1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // c48 = `is.object`(improve1)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_improve1_;
  Rsh_Fir_reg_c48_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // if c48 then L1() else L2(improve1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c48_)) {
  // L1()
    goto L1_;
  } else {
  // L2(improve1)
    Rsh_Fir_reg_improve3_ = Rsh_Fir_reg_improve1_;
    goto L2_;
  }

L0_:;
  // return dx35
  return Rsh_Fir_reg_dx35_;

L1_:;
  // dr26 = tryDispatchBuiltin.1("$", improve1)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_improve1_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args116);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc13 then L3() else L2(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr26)
    Rsh_Fir_reg_improve3_ = Rsh_Fir_reg_dr26_;
    goto L2_;
  }

L2_:;
  // r49 = `$`(improve3, <sym old_size>)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_improve3_;
  Rsh_Fir_array_args118[1] = Rsh_const(CCP, 36);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // goto L0(r49)
  // L0(r49)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_r49_;
  goto L0_;

L3_:;
  // dx34 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx34_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L0(dx34)
  // L0(dx34)
  Rsh_Fir_reg_dx35_ = Rsh_Fir_reg_dx34_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_9(SEXP CCP, SEXP RHO) {
  // improve4 = ld improve
  Rsh_Fir_reg_improve4_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // improve5 = force? improve4
  Rsh_Fir_reg_improve5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_improve4_);
  // checkMissing(improve5)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_improve5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args126, Rsh_Fir_param_types_empty()));
  // c50 = `is.object`(improve5)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_improve5_;
  Rsh_Fir_reg_c50_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty());
  // if c50 then L1() else L2(improve5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c50_)) {
  // L1()
    goto L1_;
  } else {
  // L2(improve5)
    Rsh_Fir_reg_improve7_ = Rsh_Fir_reg_improve5_;
    goto L2_;
  }

L0_:;
  // return dx39
  return Rsh_Fir_reg_dx39_;

L1_:;
  // dr30 = tryDispatchBuiltin.1("$", improve5)
  SEXP Rsh_Fir_array_args128[2];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args128[1] = Rsh_Fir_reg_improve5_;
  Rsh_Fir_reg_dr30_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args128);
  // dc15 = getTryDispatchBuiltinDispatched(dr30)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dc15_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty());
  // if dc15 then L3() else L2(dr30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc15_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr30)
    Rsh_Fir_reg_improve7_ = Rsh_Fir_reg_dr30_;
    goto L2_;
  }

L2_:;
  // r57 = `$`(improve7, <sym new_size>)
  SEXP Rsh_Fir_array_args130[2];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_improve7_;
  Rsh_Fir_array_args130[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args130, Rsh_Fir_param_types_empty());
  // goto L0(r57)
  // L0(r57)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r57_;
  goto L0_;

L3_:;
  // dx38 = getTryDispatchBuiltinValue(dr30)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_dr30_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty());
  // goto L0(dx38)
  // L0(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_10(SEXP CCP, SEXP RHO) {
  // improve8 = ld improve
  Rsh_Fir_reg_improve8_ = Rsh_Fir_load(Rsh_const(CCP, 35), RHO);
  // improve9 = force? improve8
  Rsh_Fir_reg_improve9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_improve8_);
  // checkMissing(improve9)
  SEXP Rsh_Fir_array_args138[1];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_improve9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty()));
  // return improve9
  return Rsh_Fir_reg_improve9_;
}
SEXP Rsh_Fir_user_function_inner2501545716_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2501545716 dynamic dispatch ([x])

  return Rsh_Fir_user_version_inner2501545716_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2501545716_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2501545716 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner2501545716/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x1;  // x
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_x1_1;  // x1
  SEXP Rsh_Fir_reg_x2_1;  // x2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_1;  // x4
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sprintf;  // sprintf
  SEXP Rsh_Fir_reg_x5_1;  // x5
  SEXP Rsh_Fir_reg_x6_1;  // x6
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_x8_1;  // x8
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p1_1;  // p1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_l1;  // l
  SEXP Rsh_Fir_reg_c1_1;  // c1
  SEXP Rsh_Fir_reg_r8_1;  // r8
  SEXP Rsh_Fir_reg_l2_1;  // l2
  SEXP Rsh_Fir_reg_dr2_1;  // dr2
  SEXP Rsh_Fir_reg_dc1_1;  // dc1
  SEXP Rsh_Fir_reg_dx2_1;  // dx2
  SEXP Rsh_Fir_reg_dx3_1;  // dx3
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_x9_1;  // x9
  SEXP Rsh_Fir_reg_x10_1;  // x10
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_sprintf1_;  // sprintf1
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_x12_1;  // x12
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_x14_1;  // x14
  SEXP Rsh_Fir_reg_dr4_1;  // dr4
  SEXP Rsh_Fir_reg_dc2_1;  // dc2
  SEXP Rsh_Fir_reg_dx4_1;  // dx4
  SEXP Rsh_Fir_reg_dx5_1;  // dx5
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg_ind6_;  // ind6
  SEXP Rsh_Fir_reg___1_1;  // __1
  SEXP Rsh_Fir_reg_r13_1;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p2_1;  // p2
  SEXP Rsh_Fir_reg_r16_1;  // r16
  SEXP Rsh_Fir_reg_l3_1;  // l3
  SEXP Rsh_Fir_reg_c3_1;  // c3
  SEXP Rsh_Fir_reg_r18_1;  // r18
  SEXP Rsh_Fir_reg_l5_1;  // l5
  SEXP Rsh_Fir_reg_dr6_1;  // dr6
  SEXP Rsh_Fir_reg_dc3_1;  // dc3
  SEXP Rsh_Fir_reg_dx6_1;  // dx6
  SEXP Rsh_Fir_reg_dx7_1;  // dx7
  SEXP Rsh_Fir_reg_ind7_;  // ind7
  SEXP Rsh_Fir_reg_ind8_;  // ind8
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r21_1;  // r21
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_1;  // x16
  SEXP Rsh_Fir_reg_r22_1;  // r22
  SEXP Rsh_Fir_reg_sprintf2_;  // sprintf2
  SEXP Rsh_Fir_reg_x17_1;  // x17
  SEXP Rsh_Fir_reg_x18_1;  // x18
  SEXP Rsh_Fir_reg_c4_1;  // c4
  SEXP Rsh_Fir_reg_x20_1;  // x20
  SEXP Rsh_Fir_reg_dr8_1;  // dr8
  SEXP Rsh_Fir_reg_dc4_1;  // dc4
  SEXP Rsh_Fir_reg_dx8_1;  // dx8
  SEXP Rsh_Fir_reg_dx9_1;  // dx9
  SEXP Rsh_Fir_reg_ind9_;  // ind9
  SEXP Rsh_Fir_reg_ind10_;  // ind10
  SEXP Rsh_Fir_reg___2_1;  // __2
  SEXP Rsh_Fir_reg_r23_1;  // r23
  SEXP Rsh_Fir_reg_r24_1;  // r24
  SEXP Rsh_Fir_reg_p3_1;  // p3
  SEXP Rsh_Fir_reg_r26_1;  // r26
  SEXP Rsh_Fir_reg_l6_1;  // l6
  SEXP Rsh_Fir_reg_c5_1;  // c5
  SEXP Rsh_Fir_reg_r28_1;  // r28
  SEXP Rsh_Fir_reg_l8_1;  // l8
  SEXP Rsh_Fir_reg_dr10_1;  // dr10
  SEXP Rsh_Fir_reg_dc5_1;  // dc5
  SEXP Rsh_Fir_reg_dx10_1;  // dx10
  SEXP Rsh_Fir_reg_dx11_1;  // dx11
  SEXP Rsh_Fir_reg_ind11_;  // ind11
  SEXP Rsh_Fir_reg_ind12_;  // ind12
  SEXP Rsh_Fir_reg____2_;  // ___2
  SEXP Rsh_Fir_reg_r31_1;  // r31
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1

  // Bind parameters
  Rsh_Fir_reg_x1 = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x1, RHO);
  (void)(Rsh_Fir_reg_x1);
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L0_:;
  // st xx = dx3
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_dx3_1, RHO);
  (void)(Rsh_Fir_reg_dx3_1);
  // x9 = ld x
  Rsh_Fir_reg_x9_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L12() else D6()
  // L12()
  goto L12_;

L1_:;
  // st xx = dx7
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_dx7_1, RHO);
  (void)(Rsh_Fir_reg_dx7_1);
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L19() else D10()
  // L19()
  goto L19_;

L2_:;
  // st xx = dx11
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_dx11_1, RHO);
  (void)(Rsh_Fir_reg_dx11_1);
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // check L26() else D14()
  // L26()
  goto L26_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_, CCP, RHO);
  // r1 = dyn paste0(p, "b")
  SEXP Rsh_Fir_array_args144[2];
  Rsh_Fir_array_args144[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args144[1] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r1_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args144, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L4() else D1()
  // L4()
  goto L4_;

D1_:;
  // deopt 4 [r1]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L4_:;
  // st xx = r1
  Rsh_Fir_store(Rsh_const(CCP, 39), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L5() else D2()
  // L5()
  goto L5_;

D2_:;
  // deopt 6 [x3]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L5_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_x4_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty()));
  // r2 = `>=`(x4, 1024.0)
  SEXP Rsh_Fir_array_args146[2];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_x4_1;
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // st ind1 = r2
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_r2_, RHO);
  (void)(Rsh_Fir_reg_r2_);
  // sprintf = ldf sprintf
  Rsh_Fir_reg_sprintf = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L6() else D3()
  // L6()
  goto L6_;

D3_:;
  // deopt 12 []
  Rsh_Fir_deopt(12, 0, NULL, CCP, RHO);
  return R_NilValue;

L6_:;
  // p1 = prom<V +>{
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c = `is.object`(x6);
  //   if c then L1() else L2(x6);
  // L0(dx1):
  //   r4 = `/`(dx1, 1024.0);
  //   return r4;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", x6);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x8):
  //   ind1 = ld ind1;
  //   ind2 = force? ind1;
  //   __ = ldf `[` in base;
  //   r3 = dyn __(x8, ind2);
  //   goto L0(r3);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_1, CCP, RHO);
  // r6 = dyn sprintf("%.0fKb", p1)
  SEXP Rsh_Fir_array_args154[2];
  Rsh_Fir_array_args154[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args154[1] = Rsh_Fir_reg_p1_1;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf, 2, Rsh_Fir_array_args154, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L7() else D4()
  // L7()
  goto L7_;

D4_:;
  // deopt 15 [r6]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L7_:;
  // l = ld xx
  Rsh_Fir_reg_l1 = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args155[1];
  Rsh_Fir_array_args155[0] = Rsh_Fir_reg_l1;
  Rsh_Fir_reg_c1_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args155, Rsh_Fir_param_types_empty());
  // if c1 then L8() else L9(r6, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_1)) {
  // L8()
    goto L8_;
  } else {
  // L9(r6, l)
    Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_1 = Rsh_Fir_reg_l1;
    goto L9_;
  }

L8_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r6)
  SEXP Rsh_Fir_array_args156[3];
  Rsh_Fir_array_args156[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args156[1] = Rsh_Fir_reg_l1;
  Rsh_Fir_array_args156[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr2_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args156);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args157[1];
  Rsh_Fir_array_args157[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dc1_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args157, Rsh_Fir_param_types_empty());
  // if dc1 then L10() else L9(r6, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_1)) {
  // L10()
    goto L10_;
  } else {
  // L9(r6, dr2)
    Rsh_Fir_reg_r8_1 = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_1 = Rsh_Fir_reg_dr2_1;
    goto L9_;
  }

L9_:;
  // ind3 = ld ind1
  Rsh_Fir_reg_ind3_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L11() else D5()
  // L11()
  goto L11_;

L10_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args158[1];
  Rsh_Fir_array_args158[0] = Rsh_Fir_reg_dr2_1;
  Rsh_Fir_reg_dx2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args158, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_dx2_1;
  goto L0_;

D5_:;
  // deopt 17 [r8, l2, r6, ind3]
  SEXP Rsh_Fir_array_deopt_stack24[4];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r8_1;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l2_1;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_ind3_;
  Rsh_Fir_deopt(17, 4, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L11_:;
  // ind4 = force? ind3
  Rsh_Fir_reg_ind4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind3_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r11 = dyn ___(l2, r6, ind4)
  SEXP Rsh_Fir_array_args159[3];
  Rsh_Fir_array_args159[0] = Rsh_Fir_reg_l2_1;
  Rsh_Fir_array_args159[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args159[2] = Rsh_Fir_reg_ind4_;
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args159, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_dx3_1 = Rsh_Fir_reg_r11_1;
  goto L0_;

D6_:;
  // deopt 21 [x9]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_x9_1;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L12_:;
  // x10 = force? x9
  Rsh_Fir_reg_x10_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_1);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args160[1];
  Rsh_Fir_array_args160[0] = Rsh_Fir_reg_x10_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args160, Rsh_Fir_param_types_empty()));
  // r12 = `>=`(x10, 1048576.0)
  SEXP Rsh_Fir_array_args161[2];
  Rsh_Fir_array_args161[0] = Rsh_Fir_reg_x10_1;
  Rsh_Fir_array_args161[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args161, Rsh_Fir_param_types_empty());
  // st ind2 = r12
  Rsh_Fir_store(Rsh_const(CCP, 48), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // sprintf1 = ldf sprintf
  Rsh_Fir_reg_sprintf1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L13() else D7()
  // L13()
  goto L13_;

D7_:;
  // deopt 27 []
  Rsh_Fir_deopt(27, 0, NULL, CCP, RHO);
  return R_NilValue;

L13_:;
  // p2 = prom<V +>{
  //   x11 = ld x;
  //   x12 = force? x11;
  //   checkMissing(x12);
  //   c2 = `is.object`(x12);
  //   if c2 then L1() else L2(x12);
  // L0(dx5):
  //   r14 = `/`(dx5, 1048576.0);
  //   return r14;
  // L1():
  //   dr4 = tryDispatchBuiltin.1("[", x12);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L3() else L2(dr4);
  // L2(x14):
  //   ind5 = ld ind2;
  //   ind6 = force? ind5;
  //   __1 = ldf `[` in base;
  //   r13 = dyn __1(x14, ind6);
  //   goto L0(r13);
  // L3():
  //   dx4 = getTryDispatchBuiltinValue(dr4);
  //   goto L0(dx4);
  // }
  Rsh_Fir_reg_p2_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_2, CCP, RHO);
  // r16 = dyn sprintf1("%.1fMb", p2)
  SEXP Rsh_Fir_array_args169[2];
  Rsh_Fir_array_args169[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args169[1] = Rsh_Fir_reg_p2_1;
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r16_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf1_, 2, Rsh_Fir_array_args169, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L14() else D8()
  // L14()
  goto L14_;

D8_:;
  // deopt 30 [r16]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L14_:;
  // l3 = ld xx
  Rsh_Fir_reg_l3_1 = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // c3 = `is.object`(l3)
  SEXP Rsh_Fir_array_args170[1];
  Rsh_Fir_array_args170[0] = Rsh_Fir_reg_l3_1;
  Rsh_Fir_reg_c3_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args170, Rsh_Fir_param_types_empty());
  // if c3 then L15() else L16(r16, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_1)) {
  // L15()
    goto L15_;
  } else {
  // L16(r16, l3)
    Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r16_1;
    Rsh_Fir_reg_l5_1 = Rsh_Fir_reg_l3_1;
    goto L16_;
  }

L15_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l3, r16)
  SEXP Rsh_Fir_array_args171[3];
  Rsh_Fir_array_args171[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args171[1] = Rsh_Fir_reg_l3_1;
  Rsh_Fir_array_args171[2] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_reg_dr6_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args171);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args172[1];
  Rsh_Fir_array_args172[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dc3_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args172, Rsh_Fir_param_types_empty());
  // if dc3 then L17() else L16(r16, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_1)) {
  // L17()
    goto L17_;
  } else {
  // L16(r16, dr6)
    Rsh_Fir_reg_r18_1 = Rsh_Fir_reg_r16_1;
    Rsh_Fir_reg_l5_1 = Rsh_Fir_reg_dr6_1;
    goto L16_;
  }

L16_:;
  // ind7 = ld ind2
  Rsh_Fir_reg_ind7_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // check L18() else D9()
  // L18()
  goto L18_;

L17_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args173[1];
  Rsh_Fir_array_args173[0] = Rsh_Fir_reg_dr6_1;
  Rsh_Fir_reg_dx6_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args173, Rsh_Fir_param_types_empty());
  // goto L1(dx6)
  // L1(dx6)
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_dx6_1;
  goto L1_;

D9_:;
  // deopt 32 [r18, l5, r16, ind7]
  SEXP Rsh_Fir_array_deopt_stack27[4];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r18_1;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l5_1;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_ind7_;
  Rsh_Fir_deopt(32, 4, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L18_:;
  // ind8 = force? ind7
  Rsh_Fir_reg_ind8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind7_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r21 = dyn ___1(l5, r16, ind8)
  SEXP Rsh_Fir_array_args174[3];
  Rsh_Fir_array_args174[0] = Rsh_Fir_reg_l5_1;
  Rsh_Fir_array_args174[1] = Rsh_Fir_reg_r16_1;
  Rsh_Fir_array_args174[2] = Rsh_Fir_reg_ind8_;
  SEXP Rsh_Fir_array_arg_names27[3];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_reg_r21_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args174, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L1(r21)
  // L1(r21)
  Rsh_Fir_reg_dx7_1 = Rsh_Fir_reg_r21_1;
  goto L1_;

D10_:;
  // deopt 36 [x15]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(36, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L19_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args175[1];
  Rsh_Fir_array_args175[0] = Rsh_Fir_reg_x16_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args175, Rsh_Fir_param_types_empty()));
  // r22 = `>=`(x16, 1.073741824E9)
  SEXP Rsh_Fir_array_args176[2];
  Rsh_Fir_array_args176[0] = Rsh_Fir_reg_x16_1;
  Rsh_Fir_array_args176[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r22_1 = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args176, Rsh_Fir_param_types_empty());
  // st ind3 = r22
  Rsh_Fir_store(Rsh_const(CCP, 51), Rsh_Fir_reg_r22_1, RHO);
  (void)(Rsh_Fir_reg_r22_1);
  // sprintf2 = ldf sprintf
  Rsh_Fir_reg_sprintf2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // check L20() else D11()
  // L20()
  goto L20_;

D11_:;
  // deopt 42 []
  Rsh_Fir_deopt(42, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p3 = prom<V +>{
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   c4 = `is.object`(x18);
  //   if c4 then L1() else L2(x18);
  // L0(dx9):
  //   r24 = `/`(dx9, 1.073741824E9);
  //   return r24;
  // L1():
  //   dr8 = tryDispatchBuiltin.1("[", x18);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L3() else L2(dr8);
  // L2(x20):
  //   ind9 = ld ind3;
  //   ind10 = force? ind9;
  //   __2 = ldf `[` in base;
  //   r23 = dyn __2(x20, ind10);
  //   goto L0(r23);
  // L3():
  //   dx8 = getTryDispatchBuiltinValue(dr8);
  //   goto L0(dx8);
  // }
  Rsh_Fir_reg_p3_1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2501545716_3, CCP, RHO);
  // r26 = dyn sprintf2("%.1fGb", p3)
  SEXP Rsh_Fir_array_args184[2];
  Rsh_Fir_array_args184[0] = Rsh_const(CCP, 52);
  Rsh_Fir_array_args184[1] = Rsh_Fir_reg_p3_1;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r26_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sprintf2_, 2, Rsh_Fir_array_args184, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L21() else D12()
  // L21()
  goto L21_;

D12_:;
  // deopt 45 [r26]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_deopt(45, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L21_:;
  // l6 = ld xx
  Rsh_Fir_reg_l6_1 = Rsh_Fir_load(Rsh_const(CCP, 39), RHO);
  // c5 = `is.object`(l6)
  SEXP Rsh_Fir_array_args185[1];
  Rsh_Fir_array_args185[0] = Rsh_Fir_reg_l6_1;
  Rsh_Fir_reg_c5_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args185, Rsh_Fir_param_types_empty());
  // if c5 then L22() else L23(r26, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_1)) {
  // L22()
    goto L22_;
  } else {
  // L23(r26, l6)
    Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r26_1;
    Rsh_Fir_reg_l8_1 = Rsh_Fir_reg_l6_1;
    goto L23_;
  }

L22_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l6, r26)
  SEXP Rsh_Fir_array_args186[3];
  Rsh_Fir_array_args186[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args186[1] = Rsh_Fir_reg_l6_1;
  Rsh_Fir_array_args186[2] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_reg_dr10_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args186);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args187[1];
  Rsh_Fir_array_args187[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dc5_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args187, Rsh_Fir_param_types_empty());
  // if dc5 then L24() else L23(r26, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_1)) {
  // L24()
    goto L24_;
  } else {
  // L23(r26, dr10)
    Rsh_Fir_reg_r28_1 = Rsh_Fir_reg_r26_1;
    Rsh_Fir_reg_l8_1 = Rsh_Fir_reg_dr10_1;
    goto L23_;
  }

L23_:;
  // ind11 = ld ind3
  Rsh_Fir_reg_ind11_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // check L25() else D13()
  // L25()
  goto L25_;

L24_:;
  // dx10 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args188[1];
  Rsh_Fir_array_args188[0] = Rsh_Fir_reg_dr10_1;
  Rsh_Fir_reg_dx10_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args188, Rsh_Fir_param_types_empty());
  // goto L2(dx10)
  // L2(dx10)
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_dx10_1;
  goto L2_;

D13_:;
  // deopt 47 [r28, l8, r26, ind11]
  SEXP Rsh_Fir_array_deopt_stack30[4];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r28_1;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_l8_1;
  Rsh_Fir_array_deopt_stack30[2] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_deopt_stack30[3] = Rsh_Fir_reg_ind11_;
  Rsh_Fir_deopt(47, 4, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L25_:;
  // ind12 = force? ind11
  Rsh_Fir_reg_ind12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind11_);
  // ___2 = ldf `[<-` in base
  Rsh_Fir_reg____2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r31 = dyn ___2(l8, r26, ind12)
  SEXP Rsh_Fir_array_args189[3];
  Rsh_Fir_array_args189[0] = Rsh_Fir_reg_l8_1;
  Rsh_Fir_array_args189[1] = Rsh_Fir_reg_r26_1;
  Rsh_Fir_array_args189[2] = Rsh_Fir_reg_ind12_;
  SEXP Rsh_Fir_array_arg_names30[3];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_array_arg_names30[2] = R_MissingArg;
  Rsh_Fir_reg_r31_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg____2_, 3, Rsh_Fir_array_args189, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L2(r31)
  // L2(r31)
  Rsh_Fir_reg_dx11_1 = Rsh_Fir_reg_r31_1;
  goto L2_;

D14_:;
  // deopt 51 [xx]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L26_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args190[1];
  Rsh_Fir_array_args190[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args190, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return xx1
  return Rsh_Fir_reg_xx1_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_1);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args143[1];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_x2_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args143, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_1;
}
SEXP Rsh_Fir_user_promise_inner2501545716_1(SEXP CCP, SEXP RHO) {
  // x5 = ld x
  Rsh_Fir_reg_x5_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_1);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_x6_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x6)
  SEXP Rsh_Fir_array_args148[1];
  Rsh_Fir_array_args148[0] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args148, Rsh_Fir_param_types_empty());
  // if c then L1() else L2(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L1()
    goto L1_;
  } else {
  // L2(x6)
    Rsh_Fir_reg_x8_1 = Rsh_Fir_reg_x6_1;
    goto L2_;
  }

L0_:;
  // r4 = `/`(dx1, 1024.0)
  SEXP Rsh_Fir_array_args149[2];
  Rsh_Fir_array_args149[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args149[1] = Rsh_const(CCP, 41);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args149, Rsh_Fir_param_types_empty());
  // return r4
  return Rsh_Fir_reg_r4_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", x6)
  SEXP Rsh_Fir_array_args150[2];
  Rsh_Fir_array_args150[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args150[1] = Rsh_Fir_reg_x6_1;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args150);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args151[1];
  Rsh_Fir_array_args151[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args151, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x8_1 = Rsh_Fir_reg_dr1;
    goto L2_;
  }

L2_:;
  // ind1 = ld ind1
  Rsh_Fir_reg_ind1_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // ind2 = force? ind1
  Rsh_Fir_reg_ind2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind1_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r3 = dyn __(x8, ind2)
  SEXP Rsh_Fir_array_args152[2];
  Rsh_Fir_array_args152[0] = Rsh_Fir_reg_x8_1;
  Rsh_Fir_array_args152[1] = Rsh_Fir_reg_ind2_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args152, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r3_1;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args153[1];
  Rsh_Fir_array_args153[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args153, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_2(SEXP CCP, SEXP RHO) {
  // x11 = ld x
  Rsh_Fir_reg_x11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x12 = force? x11
  Rsh_Fir_reg_x12_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x11_);
  // checkMissing(x12)
  SEXP Rsh_Fir_array_args162[1];
  Rsh_Fir_array_args162[0] = Rsh_Fir_reg_x12_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args162, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x12)
  SEXP Rsh_Fir_array_args163[1];
  Rsh_Fir_array_args163[0] = Rsh_Fir_reg_x12_1;
  Rsh_Fir_reg_c2_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args163, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(x12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(x12)
    Rsh_Fir_reg_x14_1 = Rsh_Fir_reg_x12_1;
    goto L2_;
  }

L0_:;
  // r14 = `/`(dx5, 1048576.0)
  SEXP Rsh_Fir_array_args164[2];
  Rsh_Fir_array_args164[0] = Rsh_Fir_reg_dx5_1;
  Rsh_Fir_array_args164[1] = Rsh_const(CCP, 47);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args164, Rsh_Fir_param_types_empty());
  // return r14
  return Rsh_Fir_reg_r14_;

L1_:;
  // dr4 = tryDispatchBuiltin.1("[", x12)
  SEXP Rsh_Fir_array_args165[2];
  Rsh_Fir_array_args165[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args165[1] = Rsh_Fir_reg_x12_1;
  Rsh_Fir_reg_dr4_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args165);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args166[1];
  Rsh_Fir_array_args166[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dc2_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args166, Rsh_Fir_param_types_empty());
  // if dc2 then L3() else L2(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr4)
    Rsh_Fir_reg_x14_1 = Rsh_Fir_reg_dr4_1;
    goto L2_;
  }

L2_:;
  // ind5 = ld ind2
  Rsh_Fir_reg_ind5_ = Rsh_Fir_load(Rsh_const(CCP, 48), RHO);
  // ind6 = force? ind5
  Rsh_Fir_reg_ind6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind5_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r13 = dyn __1(x14, ind6)
  SEXP Rsh_Fir_array_args167[2];
  Rsh_Fir_array_args167[0] = Rsh_Fir_reg_x14_1;
  Rsh_Fir_array_args167[1] = Rsh_Fir_reg_ind6_;
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r13_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_1, 2, Rsh_Fir_array_args167, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L0(r13)
  // L0(r13)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_r13_1;
  goto L0_;

L3_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args168[1];
  Rsh_Fir_array_args168[0] = Rsh_Fir_reg_dr4_1;
  Rsh_Fir_reg_dx4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args168, Rsh_Fir_param_types_empty());
  // goto L0(dx4)
  // L0(dx4)
  Rsh_Fir_reg_dx5_1 = Rsh_Fir_reg_dx4_1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2501545716_3(SEXP CCP, SEXP RHO) {
  // x17 = ld x
  Rsh_Fir_reg_x17_1 = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_1 = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_1);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args177[1];
  Rsh_Fir_array_args177[0] = Rsh_Fir_reg_x18_1;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args177, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x18)
  SEXP Rsh_Fir_array_args178[1];
  Rsh_Fir_array_args178[0] = Rsh_Fir_reg_x18_1;
  Rsh_Fir_reg_c4_1 = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args178, Rsh_Fir_param_types_empty());
  // if c4 then L1() else L2(x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_1)) {
  // L1()
    goto L1_;
  } else {
  // L2(x18)
    Rsh_Fir_reg_x20_1 = Rsh_Fir_reg_x18_1;
    goto L2_;
  }

L0_:;
  // r24 = `/`(dx9, 1.073741824E9)
  SEXP Rsh_Fir_array_args179[2];
  Rsh_Fir_array_args179[0] = Rsh_Fir_reg_dx9_1;
  Rsh_Fir_array_args179[1] = Rsh_const(CCP, 50);
  Rsh_Fir_reg_r24_1 = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args179, Rsh_Fir_param_types_empty());
  // return r24
  return Rsh_Fir_reg_r24_1;

L1_:;
  // dr8 = tryDispatchBuiltin.1("[", x18)
  SEXP Rsh_Fir_array_args180[2];
  Rsh_Fir_array_args180[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args180[1] = Rsh_Fir_reg_x18_1;
  Rsh_Fir_reg_dr8_1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args180);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args181[1];
  Rsh_Fir_array_args181[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dc4_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args181, Rsh_Fir_param_types_empty());
  // if dc4 then L3() else L2(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_1)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr8)
    Rsh_Fir_reg_x20_1 = Rsh_Fir_reg_dr8_1;
    goto L2_;
  }

L2_:;
  // ind9 = ld ind3
  Rsh_Fir_reg_ind9_ = Rsh_Fir_load(Rsh_const(CCP, 51), RHO);
  // ind10 = force? ind9
  Rsh_Fir_reg_ind10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind9_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // r23 = dyn __2(x20, ind10)
  SEXP Rsh_Fir_array_args182[2];
  Rsh_Fir_array_args182[0] = Rsh_Fir_reg_x20_1;
  Rsh_Fir_array_args182[1] = Rsh_Fir_reg_ind10_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r23_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_1, 2, Rsh_Fir_array_args182, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L0(r23)
  // L0(r23)
  Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_r23_1;
  goto L0_;

L3_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args183[1];
  Rsh_Fir_array_args183[0] = Rsh_Fir_reg_dr8_1;
  Rsh_Fir_reg_dx8_1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args183, Rsh_Fir_param_types_empty());
  // goto L0(dx8)
  // L0(dx8)
  Rsh_Fir_reg_dx9_1 = Rsh_Fir_reg_dx8_1;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
