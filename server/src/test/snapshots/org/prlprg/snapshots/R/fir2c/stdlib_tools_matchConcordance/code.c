#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1736206857_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1736206857_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1736206857_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1736206857_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1736206857_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1736206857_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1736206857_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1736206857_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1736206857_6(SEXP CCP, SEXP RHO);
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
  // r = clos inner1736206857
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1736206857_, RHO, CCP);
  // st matchConcordance = r
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
SEXP Rsh_Fir_user_function_inner1736206857_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1736206857 dynamic dispatch ([linenum, concordance])

  return Rsh_Fir_user_version_inner1736206857_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1736206857_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1736206857 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1736206857/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_linenum;  // linenum
  SEXP Rsh_Fir_reg_concordance;  // concordance
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg__in_;  // _in_
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_concordance1_;  // concordance1
  SEXP Rsh_Fir_reg_concordance2_;  // concordance2
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_linenum1_;  // linenum1
  SEXP Rsh_Fir_reg_linenum2_;  // linenum2
  SEXP Rsh_Fir_reg_as_numeric;  // as_numeric
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_concordance3_;  // concordance3
  SEXP Rsh_Fir_reg_concordance4_;  // concordance4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_concordance6_;  // concordance6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_concordance7_;  // concordance7
  SEXP Rsh_Fir_reg_concordance8_;  // concordance8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_concordance10_;  // concordance10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_srcLines;  // srcLines
  SEXP Rsh_Fir_reg_srcLines1_;  // srcLines1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_concordance11_;  // concordance11
  SEXP Rsh_Fir_reg_concordance12_;  // concordance12
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_concordance14_;  // concordance14
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_matrix;  // matrix
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_linenum3_;  // linenum3
  SEXP Rsh_Fir_reg_linenum4_;  // linenum4
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_linenum5_;  // linenum5
  SEXP Rsh_Fir_reg_linenum6_;  // linenum6
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_linenum7_;  // linenum7
  SEXP Rsh_Fir_reg_linenum8_;  // linenum8
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_linenum10_;  // linenum10
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_concordance15_;  // concordance15
  SEXP Rsh_Fir_reg_concordance16_;  // concordance16
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_concordance18_;  // concordance18
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_i19_;  // i19
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_i25_;  // i25
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_i29_;  // i29
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_srcFile;  // srcFile
  SEXP Rsh_Fir_reg_srcFile1_;  // srcFile1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_i31_;  // i31
  SEXP Rsh_Fir_reg_srcFile3_;  // srcFile3
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_linenum11_;  // linenum11
  SEXP Rsh_Fir_reg_linenum12_;  // linenum12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_i35_;  // i35
  SEXP Rsh_Fir_reg_srcFile5_;  // srcFile5
  SEXP Rsh_Fir_reg_linenum14_;  // linenum14
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_srcFile7_;  // srcFile7
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_i38_;  // i38
  SEXP Rsh_Fir_reg_i39_;  // i39
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_offset;  // offset
  SEXP Rsh_Fir_reg_offset1_;  // offset1
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_i42_;  // i42
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_with;  // with
  SEXP Rsh_Fir_reg_concordance19_;  // concordance19
  SEXP Rsh_Fir_reg_concordance20_;  // concordance20
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_srcLine;  // srcLine
  SEXP Rsh_Fir_reg_srcLine1_;  // srcLine1
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_srcLine3_;  // srcLine3
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_linenum15_;  // linenum15
  SEXP Rsh_Fir_reg_linenum16_;  // linenum16
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_srcLine5_;  // srcLine5
  SEXP Rsh_Fir_reg_linenum18_;  // linenum18
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_srcLine7_;  // srcLine7
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_i44_;  // i44
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_offset2_;  // offset2
  SEXP Rsh_Fir_reg_offset3_;  // offset3
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_i48_;  // i48
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_i50_;  // i50
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_result;  // result
  SEXP Rsh_Fir_reg_result1_;  // result1

  // Bind parameters
  Rsh_Fir_reg_linenum = PARAMS[0];
  Rsh_Fir_reg_concordance = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st linenum = linenum
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_linenum, RHO);
  (void)(Rsh_Fir_reg_linenum);
  // st concordance = concordance
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_concordance, RHO);
  (void)(Rsh_Fir_reg_concordance);
  // sym = ldf all
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf all in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L19() else L20()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L19()
    goto L19_;
  } else {
  // L20()
    goto L20_;
  }

L0_:;
  // r12 = `!`(r1)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r12)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c1 then L24() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L24()
    goto L24_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // sym3 = ldf `as.numeric`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf `as.numeric` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard3 then L28() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L28()
    goto L28_;
  } else {
  // L29()
    goto L29_;
  }

L3_:;
  // st linenum = r16
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // concordance3 = ld concordance
  Rsh_Fir_reg_concordance3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L32() else D7()
  // L32()
  goto L32_;

L4_:;
  // st srcFile = r20
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // concordance11 = ld concordance
  Rsh_Fir_reg_concordance11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L49() else D12()
  // L49()
  goto L49_;

L5_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // r25 = dyn rep_len(dx3, r23)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L48() else D11()
  // L48()
  goto L48_;

L6_:;
  // s = toForSeq(r42)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 7);
  // goto L7(i)
  // L7(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L7_;

L7_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args7[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args7);
  // c6 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if c6 then L59() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L59()
    goto L59_;
  } else {
  // L18()
    goto L18_;
  }

L8_:;
  // concordance15 = ld concordance
  Rsh_Fir_reg_concordance15_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L65() else D18()
  // L65()
  goto L65_;

L9_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard11 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L10_:;
  // l1 = ld result
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c11 = `is.object`(l1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c11 then L74() else L75(i19, r48, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L74()
    goto L74_;
  } else {
  // L75(i19, r48, l1)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L75_;
  }

L11_:;
  // st result = dx15
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // goto L12(i23)
  // L12(i23)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i23_;
  goto L12_;

L12_:;
  // goto L7(i26)
  // L7(i26)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i26_;
  goto L7_;

L13_:;
  // l4 = ld result
  Rsh_Fir_reg_l4_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // c17 = `is.object`(l4)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c17 then L96() else L97(i29, r57, l4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L96()
    goto L96_;
  } else {
  // L97(i29, r57, l4)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l4_;
    goto L97_;
  }

L14_:;
  // sym12 = ldf with
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base12 = ldf with in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard12 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L15_:;
  // offset = ld offset
  Rsh_Fir_reg_offset = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L90() else D24()
  // L90()
  goto L90_;

L16_:;
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r69 = dyn c16(dx17, r62)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dx17_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L95() else D27()
  // L95()
  goto L95_;

L17_:;
  // st result = dx25
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_dx25_, RHO);
  (void)(Rsh_Fir_reg_dx25_);
  // goto L12(i48)
  // L12(i48)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i48_;
  goto L12_;

L18_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args14[4];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args14[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // linenum7 = ld linenum
  Rsh_Fir_reg_linenum7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L60() else D16()
  // L60()
  goto L60_;

L19_:;
  // _in_ = ldf `%in%`
  Rsh_Fir_reg__in_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L21() else D0()
  // L21()
  goto L21_;

L20_:;
  // r = dyn base(<lang `%in%`(c("offset", "srcLine", "srcFile"), names(concordance))>)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // p = prom<V +>{
  //   sym1 = ldf c;
  //   base1 = ldf c in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L1() else L2();
  // L0(r3):
  //   return r3;
  // L1():
  //   c = ldf c in base;
  //   r4 = dyn c("offset", "srcLine", "srcFile");
  //   goto L0(r4);
  // L2():
  //   r2 = dyn base1("offset", "srcLine", "srcFile");
  //   goto L0(r2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1736206857_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym2 = ldf names;
  //   base2 = ldf names in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L1() else L2();
  // L0(r7):
  //   return r7;
  // L1():
  //   concordance1 = ld concordance;
  //   concordance2 = force? concordance1;
  //   checkMissing(concordance2);
  //   names = ldf names in base;
  //   r8 = dyn names(concordance2);
  //   goto L0(r8);
  // L2():
  //   r6 = dyn base2(<sym concordance>);
  //   goto L0(r6);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1736206857_1, CCP, RHO);
  // r10 = dyn _in_(p, p1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__in_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L22() else D1()
  // L22()
  goto L22_;

D1_:;
  // deopt 6 [r10]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L22_:;
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r11 = dyn all(r10)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L23() else D2()
  // L23()
  goto L23_;

D2_:;
  // deopt 8 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L23_:;
  // goto L0(r11)
  // L0(r11)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r11_;
  goto L0_;

L24_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L25() else D3()
  // L25()
  goto L25_;

D3_:;
  // deopt 11 []
  Rsh_Fir_deopt(11, 0, NULL, CCP, RHO);
  return R_NilValue;

L25_:;
  // r13 = dyn stop("concordance is not valid")
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L26() else D4()
  // L26()
  goto L26_;

D4_:;
  // deopt 13 [r13]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(13, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L26_:;
  // goto L2()
  // L2()
  goto L2_;

L28_:;
  // linenum1 = ld linenum
  Rsh_Fir_reg_linenum1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L30() else D5()
  // L30()
  goto L30_;

L29_:;
  // r15 = dyn base3(<sym linenum>)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L3_;

D5_:;
  // deopt 18 [linenum1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_linenum1_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L30_:;
  // linenum2 = force? linenum1
  Rsh_Fir_reg_linenum2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linenum1_);
  // checkMissing(linenum2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_linenum2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // as_numeric = ldf `as.numeric` in base
  Rsh_Fir_reg_as_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r17 = dyn as_numeric(linenum2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_linenum2_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_numeric, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

D6_:;
  // deopt 21 [r17]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L31_:;
  // goto L3(r17)
  // L3(r17)
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r17_;
  goto L3_;

D7_:;
  // deopt 23 [concordance3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_concordance3_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L32_:;
  // concordance4 = force? concordance3
  Rsh_Fir_reg_concordance4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance3_);
  // checkMissing(concordance4)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_concordance4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(concordance4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_concordance4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c2 then L34() else L35(concordance4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L34()
    goto L34_;
  } else {
  // L35(concordance4)
    Rsh_Fir_reg_concordance6_ = Rsh_Fir_reg_concordance4_;
    goto L35_;
  }

L33_:;
  // st srcLines = dx1
  Rsh_Fir_store(Rsh_const(CCP, 24), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sym4 = ldf rep_len
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base4 = ldf rep_len in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard4 then L37() else L38()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L37()
    goto L37_;
  } else {
  // L38()
    goto L38_;
  }

L34_:;
  // dr = tryDispatchBuiltin.1("$", concordance4)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_concordance4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args32);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // if dc then L36() else L35(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L36()
    goto L36_;
  } else {
  // L35(dr)
    Rsh_Fir_reg_concordance6_ = Rsh_Fir_reg_dr;
    goto L35_;
  }

L35_:;
  // r18 = `$`(concordance6, <sym srcLine>)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_concordance6_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L33(r18)
  // L33(r18)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r18_;
  goto L33_;

L36_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L33(dx)
  // L33(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L33_;

L37_:;
  // concordance7 = ld concordance
  Rsh_Fir_reg_concordance7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L39() else D8()
  // L39()
  goto L39_;

L38_:;
  // r19 = dyn base4(<lang `$`(concordance, srcFile)>, <lang length(srcLines)>)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 28);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L4(r19)
  // L4(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L4_;

D8_:;
  // deopt 29 [concordance7]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_concordance7_;
  Rsh_Fir_deopt(29, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L39_:;
  // concordance8 = force? concordance7
  Rsh_Fir_reg_concordance8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance7_);
  // checkMissing(concordance8)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_concordance8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(concordance8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_concordance8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c3 then L41() else L42(concordance8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L41()
    goto L41_;
  } else {
  // L42(concordance8)
    Rsh_Fir_reg_concordance10_ = Rsh_Fir_reg_concordance8_;
    goto L42_;
  }

L40_:;
  // sym5 = ldf length
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base5 = ldf length in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard5 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L41_:;
  // dr2 = tryDispatchBuiltin.1("$", concordance8)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_concordance8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args40);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if dc1 then L43() else L42(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L43()
    goto L43_;
  } else {
  // L42(dr2)
    Rsh_Fir_reg_concordance10_ = Rsh_Fir_reg_dr2_;
    goto L42_;
  }

L42_:;
  // r21 = `$`(concordance10, <sym srcFile>)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_concordance10_;
  Rsh_Fir_array_args42[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // goto L40(r21)
  // L40(r21)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r21_;
  goto L40_;

L43_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L40(dx2)
  // L40(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L40_;

L44_:;
  // srcLines = ld srcLines
  Rsh_Fir_reg_srcLines = Rsh_Fir_load(Rsh_const(CCP, 24), RHO);
  // check L46() else D9()
  // L46()
  goto L46_;

L45_:;
  // r22 = dyn base5(<sym srcLines>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 24);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L5(r22)
  // L5(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L5_;

D9_:;
  // deopt 34 [srcLines]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_srcLines;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L46_:;
  // srcLines1 = force? srcLines
  Rsh_Fir_reg_srcLines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcLines);
  // checkMissing(srcLines1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_srcLines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r24 = dyn length(srcLines1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_srcLines1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L47() else D10()
  // L47()
  goto L47_;

D10_:;
  // deopt 37 [r24]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L5(r24)
  // L5(r24)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r24_;
  goto L5_;

D11_:;
  // deopt 39 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L48_:;
  // goto L4(r25)
  // L4(r25)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r25_;
  goto L4_;

D12_:;
  // deopt 41 [concordance11]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_concordance11_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L49_:;
  // concordance12 = force? concordance11
  Rsh_Fir_reg_concordance12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance11_);
  // checkMissing(concordance12)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_concordance12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(concordance12)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_concordance12_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // if c4 then L51() else L52(concordance12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L51()
    goto L51_;
  } else {
  // L52(concordance12)
    Rsh_Fir_reg_concordance14_ = Rsh_Fir_reg_concordance12_;
    goto L52_;
  }

L50_:;
  // st offset = dx5
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // matrix = ldf matrix
  Rsh_Fir_reg_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L54() else D13()
  // L54()
  goto L54_;

L51_:;
  // dr4 = tryDispatchBuiltin.1("$", concordance12)
  SEXP Rsh_Fir_array_args49[2];
  Rsh_Fir_array_args49[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args49[1] = Rsh_Fir_reg_concordance12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args49);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if dc2 then L53() else L52(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr4)
    Rsh_Fir_reg_concordance14_ = Rsh_Fir_reg_dr4_;
    goto L52_;
  }

L52_:;
  // r26 = `$`(concordance14, <sym offset>)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_concordance14_;
  Rsh_Fir_array_args51[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L50(r26)
  // L50(r26)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r26_;
  goto L50_;

L53_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L50(dx4)
  // L50(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L50_;

D13_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L54_:;
  // p2 = prom<V +>{
  //   character = ldf character;
  //   r27 = dyn character();
  //   return r27;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1736206857_2, CCP, RHO);
  // p3 = prom<V +>{
  //   sym6 = ldf length;
  //   base6 = ldf length in base;
  //   guard6 = `==`.4(sym6, base6);
  //   if guard6 then L1() else L2();
  // L0(r30):
  //   return r30;
  // L1():
  //   linenum3 = ld linenum;
  //   linenum4 = force? linenum3;
  //   checkMissing(linenum4);
  //   length1 = ldf length in base;
  //   r31 = dyn length1(linenum4);
  //   goto L0(r31);
  // L2():
  //   r29 = dyn base6(<sym linenum>);
  //   goto L0(r29);
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1736206857_3, CCP, RHO);
  // p4 = prom<V +>{
  //   sym7 = ldf list;
  //   base7 = ldf list in base;
  //   guard7 = `==`.4(sym7, base7);
  //   if guard7 then L2() else L3();
  // L0(r34):
  //   return r34;
  // L2():
  //   sym8 = ldf c;
  //   base8 = ldf c in base;
  //   guard8 = `==`.4(sym8, base8);
  //   if guard8 then L4() else L5();
  // L3():
  //   r33 = dyn base7(NULL, <lang c("srcFile", "srcLine")>);
  //   goto L0(r33);
  // L1(r36):
  //   list = ldf list in base;
  //   r38 = dyn list(NULL, r36);
  //   goto L0(r38);
  // L4():
  //   c5 = ldf c in base;
  //   r37 = dyn c5("srcFile", "srcLine");
  //   goto L1(r37);
  // L5():
  //   r35 = dyn base8("srcFile", "srcLine");
  //   goto L1(r35);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1736206857_4, CCP, RHO);
  // r40 = dyn matrix[, , , dimnames](p2, p3, 2.0, p4)
  SEXP Rsh_Fir_array_args63[4];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args63[1] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args63[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args63[3] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_matrix, 4, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L55() else D14()
  // L55()
  goto L55_;

D14_:;
  // deopt 52 [r40]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(52, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L55_:;
  // st result = r40
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_r40_, RHO);
  (void)(Rsh_Fir_reg_r40_);
  // sym9 = ldf seq_along
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base9 = ldf seq_along in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard9 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L56_:;
  // linenum5 = ld linenum
  Rsh_Fir_reg_linenum5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L58() else D15()
  // L58()
  goto L58_;

L57_:;
  // r41 = dyn base9(<sym linenum>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L6(r41)
  // L6(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L6_;

D15_:;
  // deopt 55 [linenum5]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_linenum5_;
  Rsh_Fir_deopt(55, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L58_:;
  // linenum6 = force? linenum5
  Rsh_Fir_reg_linenum6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linenum5_);
  // checkMissing(linenum6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_linenum6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // r43 = seq_along(linenum6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_linenum6_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L6(r43)
  // L6(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L6_;

L59_:;
  // result = ld result
  Rsh_Fir_reg_result = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L100() else D29()
  // L100()
  goto L100_;

D16_:;
  // deopt 58 [i2, linenum7]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_linenum7_;
  Rsh_Fir_deopt(58, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L60_:;
  // linenum8 = force? linenum7
  Rsh_Fir_reg_linenum8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linenum7_);
  // checkMissing(linenum8)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_linenum8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(linenum8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_linenum8_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c7 then L61() else L62(i2, linenum8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L61()
    goto L61_;
  } else {
  // L62(i2, linenum8)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_linenum10_ = Rsh_Fir_reg_linenum8_;
    goto L62_;
  }

L61_:;
  // dr6 = tryDispatchBuiltin.1("[", linenum8)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_linenum8_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args70);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if dc3 then L63() else L62(i2, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L63()
    goto L63_;
  } else {
  // L62(i2, dr6)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_linenum10_ = Rsh_Fir_reg_dr6_;
    goto L62_;
  }

L62_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L64() else D17()
  // L64()
  goto L64_;

L63_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L8(i2, dx6)
  // L8(i2, dx6)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L8_;

D17_:;
  // deopt 60 [i6, linenum10, i9]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_linenum10_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(60, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L64_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r44 = dyn __(linenum10, i10)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_linenum10_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L8(i6, r44)
  // L8(i6, r44)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r44_;
  goto L8_;

D18_:;
  // deopt 62 [i8, dx7, concordance15]
  SEXP Rsh_Fir_array_deopt_stack15[3];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack15[2] = Rsh_Fir_reg_concordance15_;
  Rsh_Fir_deopt(62, 3, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L65_:;
  // concordance16 = force? concordance15
  Rsh_Fir_reg_concordance16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance15_);
  // checkMissing(concordance16)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_concordance16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(concordance16)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_concordance16_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // if c8 then L67() else L68(i8, dx7, concordance16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L67()
    goto L67_;
  } else {
  // L68(i8, dx7, concordance16)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_concordance18_ = Rsh_Fir_reg_concordance16_;
    goto L68_;
  }

L66_:;
  // r46 = `<=`(dx12, dx13)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dx12_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(77, CCP, RHO, 2, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r46)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c9 then L70() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L70()
    goto L70_;
  } else {
  // L9()
    goto L9_;
  }

L67_:;
  // dr8 = tryDispatchBuiltin.1("$", concordance16)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_concordance16_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc4 then L69() else L68(i8, dx7, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L69()
    goto L69_;
  } else {
  // L68(i8, dx7, dr8)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_concordance18_ = Rsh_Fir_reg_dr8_;
    goto L68_;
  }

L68_:;
  // r45 = `$`(concordance18, <sym offset>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_concordance18_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L66(i12, dx9, r45)
  // L66(i12, dx9, r45)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r45_;
  goto L66_;

L69_:;
  // dx11 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L66(i8, dx7, dx11)
  // L66(i8, dx7, dx11)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx11_;
  goto L66_;

L70_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args82);
  // if guard10 then L71() else L72()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L71()
    goto L71_;
  } else {
  // L72()
    goto L72_;
  }

L71_:;
  // c10 = ldf c in base
  Rsh_Fir_reg_c10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r49 = dyn c10("", "")
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args83[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c10_, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L73() else D19()
  // L73()
  goto L73_;

L72_:;
  // r47 = dyn base10("", "")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L10(i14, r47)
  // L10(i14, r47)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L10_;

D19_:;
  // deopt 71 [i14, r49]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(71, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L10(i14, r49)
  // L10(i14, r49)
  Rsh_Fir_reg_i19_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L10_;

L74_:;
  // dr10 = tryDispatchBuiltin.0("[<-", l1, r48)
  SEXP Rsh_Fir_array_args85[3];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args85[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args85[2] = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args85);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if dc5 then L76() else L75(i19, r48, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L76()
    goto L76_;
  } else {
  // L75(i19, r48, dr10)
    Rsh_Fir_reg_i21_ = Rsh_Fir_reg_i19_;
    Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r48_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr10_;
    goto L75_;
  }

L75_:;
  // i24 = ld i
  Rsh_Fir_reg_i24_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L77() else D20()
  // L77()
  goto L77_;

L76_:;
  // dx14 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L11(i19, r48, dx14)
  // L11(i19, r48, dx14)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i19_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r48_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L11_;

D20_:;
  // deopt 73 [i21, r51, l3, r48, i24]
  SEXP Rsh_Fir_array_deopt_stack17[5];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i21_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_deopt_stack17[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack17[3] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_deopt_stack17[4] = Rsh_Fir_reg_i24_;
  Rsh_Fir_deopt(73, 5, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // i25 = force? i24
  Rsh_Fir_reg_i25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i24_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r54 = dyn ___(l1, i25, <missing>, r48)
  SEXP Rsh_Fir_array_args88[4];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_i25_;
  Rsh_Fir_array_args88[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args88[3] = Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r54_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 4, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L11(i21, r51, r54)
  // L11(i21, r51, r54)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i21_;
  Rsh_Fir_reg_r53_ = Rsh_Fir_reg_r51_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r54_;
  goto L11_;

L79_:;
  // srcFile = ld srcFile
  Rsh_Fir_reg_srcFile = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L81() else D21()
  // L81()
  goto L81_;

L80_:;
  // r56 = dyn base11(<lang `[`(srcFile, `-`(`[`(linenum, i), offset))>, <lang with(concordance, `[`(srcLine, `-`(`[`(linenum, i), offset)))>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L13(i14, r56)
  // L13(i14, r56)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L13_;

D21_:;
  // deopt 81 [i14, srcFile]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_srcFile;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L81_:;
  // srcFile1 = force? srcFile
  Rsh_Fir_reg_srcFile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcFile);
  // checkMissing(srcFile1)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_srcFile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(srcFile1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_srcFile1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty());
  // if c12 then L82() else L83(i14, srcFile1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L82()
    goto L82_;
  } else {
  // L83(i14, srcFile1)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_srcFile3_ = Rsh_Fir_reg_srcFile1_;
    goto L83_;
  }

L82_:;
  // dr12 = tryDispatchBuiltin.1("[", srcFile1)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_srcFile1_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args92);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty());
  // if dc6 then L84() else L83(i14, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L84()
    goto L84_;
  } else {
  // L83(i14, dr12)
    Rsh_Fir_reg_i31_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_srcFile3_ = Rsh_Fir_reg_dr12_;
    goto L83_;
  }

L83_:;
  // linenum11 = ld linenum
  Rsh_Fir_reg_linenum11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L85() else D22()
  // L85()
  goto L85_;

L84_:;
  // dx16 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty());
  // goto L14(i14, dx16)
  // L14(i14, dx16)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx16_;
  goto L14_;

D22_:;
  // deopt 83 [i31, srcFile3, linenum11]
  SEXP Rsh_Fir_array_deopt_stack19[3];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i31_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_srcFile3_;
  Rsh_Fir_array_deopt_stack19[2] = Rsh_Fir_reg_linenum11_;
  Rsh_Fir_deopt(83, 3, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // linenum12 = force? linenum11
  Rsh_Fir_reg_linenum12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linenum11_);
  // checkMissing(linenum12)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_linenum12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(linenum12)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_linenum12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // if c13 then L86() else L87(i31, srcFile3, linenum12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L86()
    goto L86_;
  } else {
  // L87(i31, srcFile3, linenum12)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_srcFile5_ = Rsh_Fir_reg_srcFile3_;
    Rsh_Fir_reg_linenum14_ = Rsh_Fir_reg_linenum12_;
    goto L87_;
  }

L86_:;
  // dr14 = tryDispatchBuiltin.1("[", linenum12)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_linenum12_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args97);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if dc7 then L88() else L87(i31, srcFile3, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L88()
    goto L88_;
  } else {
  // L87(i31, srcFile3, dr14)
    Rsh_Fir_reg_i35_ = Rsh_Fir_reg_i31_;
    Rsh_Fir_reg_srcFile5_ = Rsh_Fir_reg_srcFile3_;
    Rsh_Fir_reg_linenum14_ = Rsh_Fir_reg_dr14_;
    goto L87_;
  }

L87_:;
  // i38 = ld i
  Rsh_Fir_reg_i38_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L89() else D23()
  // L89()
  goto L89_;

L88_:;
  // dx18 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // goto L15(i31, srcFile3, dx18)
  // L15(i31, srcFile3, dx18)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i31_;
  Rsh_Fir_reg_srcFile7_ = Rsh_Fir_reg_srcFile3_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L15_;

D23_:;
  // deopt 85 [i35, srcFile5, linenum14, i38]
  SEXP Rsh_Fir_array_deopt_stack20[4];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i35_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_srcFile5_;
  Rsh_Fir_array_deopt_stack20[2] = Rsh_Fir_reg_linenum14_;
  Rsh_Fir_array_deopt_stack20[3] = Rsh_Fir_reg_i38_;
  Rsh_Fir_deopt(85, 4, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L89_:;
  // i39 = force? i38
  Rsh_Fir_reg_i39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i38_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r58 = dyn __1(linenum14, i39)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_linenum14_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_i39_;
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L15(i35, srcFile5, r58)
  // L15(i35, srcFile5, r58)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i35_;
  Rsh_Fir_reg_srcFile7_ = Rsh_Fir_reg_srcFile5_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r58_;
  goto L15_;

D24_:;
  // deopt 87 [i37, srcFile7, dx19, offset]
  SEXP Rsh_Fir_array_deopt_stack21[4];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_srcFile7_;
  Rsh_Fir_array_deopt_stack21[2] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_deopt_stack21[3] = Rsh_Fir_reg_offset;
  Rsh_Fir_deopt(87, 4, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L90_:;
  // offset1 = force? offset
  Rsh_Fir_reg_offset1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset);
  // checkMissing(offset1)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_offset1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // r59 = `-`(dx19, offset1)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_offset1_;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r60 = dyn __2(srcFile7, r59)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_srcFile7_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L14(i37, r60)
  // L14(i37, r60)
  Rsh_Fir_reg_i33_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_r60_;
  goto L14_;

L91_:;
  // with = ldf with
  Rsh_Fir_reg_with = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // check L93() else D25()
  // L93()
  goto L93_;

L92_:;
  // r61 = dyn base12(<sym concordance>, <lang `[`(srcLine, `-`(`[`(linenum, i), offset))>)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args104[1] = Rsh_const(CCP, 45);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L16(i33, r61)
  // L16(i33, r61)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r61_;
  goto L16_;

D25_:;
  // deopt 93 [i33]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L93_:;
  // p5 = prom<V +>{
  //   concordance19 = ld concordance;
  //   concordance20 = force? concordance19;
  //   checkMissing(concordance20);
  //   return concordance20;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1736206857_5, CCP, RHO);
  // p6 = prom<V +>{
  //   srcLine = ld srcLine;
  //   srcLine1 = force? srcLine;
  //   checkMissing(srcLine1);
  //   c14 = `is.object`(srcLine1);
  //   if c14 then L2() else L3(srcLine1);
  // L0(dx21):
  //   return dx21;
  // L2():
  //   dr16 = tryDispatchBuiltin.1("[", srcLine1);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L4() else L3(dr16);
  // L3(srcLine3):
  //   linenum15 = ld linenum;
  //   linenum16 = force? linenum15;
  //   checkMissing(linenum16);
  //   c15 = `is.object`(linenum16);
  //   if c15 then L5() else L6(srcLine3, linenum16);
  // L1(srcLine7, dx23):
  //   offset2 = ld offset;
  //   offset3 = force? offset2;
  //   checkMissing(offset3);
  //   r65 = `-`(dx23, offset3);
  //   __4 = ldf `[` in base;
  //   r66 = dyn __4(srcLine7, r65);
  //   goto L0(r66);
  // L4():
  //   dx20 = getTryDispatchBuiltinValue(dr16);
  //   goto L0(dx20);
  // L5():
  //   dr18 = tryDispatchBuiltin.1("[", linenum16);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L7() else L6(srcLine3, dr18);
  // L6(srcLine5, linenum18):
  //   i43 = ld i;
  //   i44 = force? i43;
  //   __3 = ldf `[` in base;
  //   r64 = dyn __3(linenum18, i44);
  //   goto L1(srcLine5, r64);
  // L7():
  //   dx22 = getTryDispatchBuiltinValue(dr18);
  //   goto L1(srcLine3, dx22);
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1736206857_6, CCP, RHO);
  // r68 = dyn with(p5, p6)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_with, 2, Rsh_Fir_array_args120, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L94() else D26()
  // L94()
  goto L94_;

D26_:;
  // deopt 96 [i33, r68]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i33_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L16(i33, r68)
  // L16(i33, r68)
  Rsh_Fir_reg_i42_ = Rsh_Fir_reg_i33_;
  Rsh_Fir_reg_r62_ = Rsh_Fir_reg_r68_;
  goto L16_;

D27_:;
  // deopt 98 [i42, r69]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i42_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_r69_;
  Rsh_Fir_deopt(98, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L13(i42, r69)
  // L13(i42, r69)
  Rsh_Fir_reg_i29_ = Rsh_Fir_reg_i42_;
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r69_;
  goto L13_;

L96_:;
  // dr20 = tryDispatchBuiltin.0("[<-", l4, r57)
  SEXP Rsh_Fir_array_args121[3];
  Rsh_Fir_array_args121[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args121[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args121[2] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args121);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // if dc10 then L98() else L97(i29, r57, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L98()
    goto L98_;
  } else {
  // L97(i29, r57, dr20)
    Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i29_;
    Rsh_Fir_reg_r71_ = Rsh_Fir_reg_r57_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_dr20_;
    goto L97_;
  }

L97_:;
  // i49 = ld i
  Rsh_Fir_reg_i49_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L99() else D28()
  // L99()
  goto L99_;

L98_:;
  // dx24 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx24_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty());
  // goto L17(i29, r57, dx24)
  // L17(i29, r57, dx24)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i29_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx24_;
  goto L17_;

D28_:;
  // deopt 100 [i46, r71, l6, r57, i49]
  SEXP Rsh_Fir_array_deopt_stack25[5];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r71_;
  Rsh_Fir_array_deopt_stack25[2] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_deopt_stack25[3] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_deopt_stack25[4] = Rsh_Fir_reg_i49_;
  Rsh_Fir_deopt(100, 5, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L99_:;
  // i50 = force? i49
  Rsh_Fir_reg_i50_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i49_);
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 41), RHO);
  // r74 = dyn ___1(l4, i50, <missing>, r57)
  SEXP Rsh_Fir_array_args124[4];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args124[1] = Rsh_Fir_reg_i50_;
  Rsh_Fir_array_args124[2] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args124[3] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names34[4];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = R_MissingArg;
  Rsh_Fir_array_arg_names34[2] = R_MissingArg;
  Rsh_Fir_array_arg_names34[3] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 4, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L17(i46, r71, r74)
  // L17(i46, r71, r74)
  Rsh_Fir_reg_i48_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r74_;
  goto L17_;

D29_:;
  // deopt 109 [result]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_result;
  Rsh_Fir_deopt(109, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L100_:;
  // result1 = force? result
  Rsh_Fir_reg_result1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_result);
  // checkMissing(result1)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_result1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return result1
  return Rsh_Fir_reg_result1_;
}
SEXP Rsh_Fir_user_promise_inner1736206857_(SEXP CCP, SEXP RHO) {
  // sym1 = ldf c
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base1 = ldf c in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard1 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r3
  return Rsh_Fir_reg_r3_;

L1_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r4 = dyn c("offset", "srcLine", "srcFile")
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names3[3];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r2 = dyn base1("offset", "srcLine", "srcFile")
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names4[3];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_array_arg_names4[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 3, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1736206857_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf names
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base2 = ldf names in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard2 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r7
  return Rsh_Fir_reg_r7_;

L1_:;
  // concordance1 = ld concordance
  Rsh_Fir_reg_concordance1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // concordance2 = force? concordance1
  Rsh_Fir_reg_concordance2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance1_);
  // checkMissing(concordance2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_concordance2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r8 = dyn names(concordance2)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_concordance2_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L0_;

L2_:;
  // r6 = dyn base2(<sym concordance>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1736206857_2(SEXP CCP, SEXP RHO) {
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // r27 = dyn character()
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 0, NULL, NULL, CCP, RHO);
  // return r27
  return Rsh_Fir_reg_r27_;
}
SEXP Rsh_Fir_user_promise_inner1736206857_3(SEXP CCP, SEXP RHO) {
  // sym6 = ldf length
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base6 = ldf length in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard6 then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r30
  return Rsh_Fir_reg_r30_;

L1_:;
  // linenum3 = ld linenum
  Rsh_Fir_reg_linenum3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // linenum4 = force? linenum3
  Rsh_Fir_reg_linenum4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linenum3_);
  // checkMissing(linenum4)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_linenum4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r31 = dyn length1(linenum4)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_linenum4_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L0(r31)
  // L0(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L0_;

L2_:;
  // r29 = dyn base6(<sym linenum>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L0(r29)
  // L0(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1736206857_4(SEXP CCP, SEXP RHO) {
  // sym7 = ldf list
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 32), RHO);
  // base7 = ldf list in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args57);
  // if guard7 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // return r34
  return Rsh_Fir_reg_r34_;

L1_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 32), RHO);
  // r38 = dyn list(NULL, r36)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_array_arg_names17[2];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L0(r38)
  // L0(r38)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r38_;
  goto L0_;

L2_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args59);
  // if guard8 then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L3_:;
  // r33 = dyn base7(NULL, <lang c("srcFile", "srcLine")>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L0(r33)
  // L0(r33)
  Rsh_Fir_reg_r34_ = Rsh_Fir_reg_r33_;
  goto L0_;

L4_:;
  // c5 = ldf c in base
  Rsh_Fir_reg_c5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r37 = dyn c5("srcFile", "srcLine")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c5_, 2, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L1(r37)
  // L1(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L1_;

L5_:;
  // r35 = dyn base8("srcFile", "srcLine")
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L1(r35)
  // L1(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner1736206857_5(SEXP CCP, SEXP RHO) {
  // concordance19 = ld concordance
  Rsh_Fir_reg_concordance19_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // concordance20 = force? concordance19
  Rsh_Fir_reg_concordance20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordance19_);
  // checkMissing(concordance20)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_concordance20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return concordance20
  return Rsh_Fir_reg_concordance20_;
}
SEXP Rsh_Fir_user_promise_inner1736206857_6(SEXP CCP, SEXP RHO) {
  // srcLine = ld srcLine
  Rsh_Fir_reg_srcLine = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // srcLine1 = force? srcLine
  Rsh_Fir_reg_srcLine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcLine);
  // checkMissing(srcLine1)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_srcLine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(srcLine1)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_srcLine1_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if c14 then L2() else L3(srcLine1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L2()
    goto L2_;
  } else {
  // L3(srcLine1)
    Rsh_Fir_reg_srcLine3_ = Rsh_Fir_reg_srcLine1_;
    goto L3_;
  }

L0_:;
  // return dx21
  return Rsh_Fir_reg_dx21_;

L1_:;
  // offset2 = ld offset
  Rsh_Fir_reg_offset2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // offset3 = force? offset2
  Rsh_Fir_reg_offset3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset2_);
  // checkMissing(offset3)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_offset3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // r65 = `-`(dx23, offset3)
  SEXP Rsh_Fir_array_args109[2];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_args109[1] = Rsh_Fir_reg_offset3_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r66 = dyn __4(srcLine7, r65)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_srcLine7_;
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L0(r66)
  // L0(r66)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r66_;
  goto L0_;

L2_:;
  // dr16 = tryDispatchBuiltin.1("[", srcLine1)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_srcLine1_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args111);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc8 then L4() else L3(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L4()
    goto L4_;
  } else {
  // L3(dr16)
    Rsh_Fir_reg_srcLine3_ = Rsh_Fir_reg_dr16_;
    goto L3_;
  }

L3_:;
  // linenum15 = ld linenum
  Rsh_Fir_reg_linenum15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // linenum16 = force? linenum15
  Rsh_Fir_reg_linenum16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_linenum15_);
  // checkMissing(linenum16)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_linenum16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(linenum16)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_linenum16_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c15 then L5() else L6(srcLine3, linenum16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L5()
    goto L5_;
  } else {
  // L6(srcLine3, linenum16)
    Rsh_Fir_reg_srcLine5_ = Rsh_Fir_reg_srcLine3_;
    Rsh_Fir_reg_linenum18_ = Rsh_Fir_reg_linenum16_;
    goto L6_;
  }

L4_:;
  // dx20 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // goto L0(dx20)
  // L0(dx20)
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx20_;
  goto L0_;

L5_:;
  // dr18 = tryDispatchBuiltin.1("[", linenum16)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_linenum16_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args116);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if dc9 then L7() else L6(srcLine3, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L7()
    goto L7_;
  } else {
  // L6(srcLine3, dr18)
    Rsh_Fir_reg_srcLine5_ = Rsh_Fir_reg_srcLine3_;
    Rsh_Fir_reg_linenum18_ = Rsh_Fir_reg_dr18_;
    goto L6_;
  }

L6_:;
  // i43 = ld i
  Rsh_Fir_reg_i43_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // i44 = force? i43
  Rsh_Fir_reg_i44_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i43_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // r64 = dyn __3(linenum18, i44)
  SEXP Rsh_Fir_array_args118[2];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_linenum18_;
  Rsh_Fir_array_args118[1] = Rsh_Fir_reg_i44_;
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args118, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L1(srcLine5, r64)
  // L1(srcLine5, r64)
  Rsh_Fir_reg_srcLine7_ = Rsh_Fir_reg_srcLine5_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r64_;
  goto L1_;

L7_:;
  // dx22 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // goto L1(srcLine3, dx22)
  // L1(srcLine3, dx22)
  Rsh_Fir_reg_srcLine7_ = Rsh_Fir_reg_srcLine3_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
