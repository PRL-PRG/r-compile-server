#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3812184236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3812184236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3812184236_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3812184236_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3812184236_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner3812184236
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3812184236_, RHO, CCP);
  // st `format.POSIXlt` = r
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
SEXP Rsh_Fir_user_function_inner3812184236_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3812184236 dynamic dispatch ([x, format, usetz, digits, `...`])

  return Rsh_Fir_user_version_inner3812184236_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3812184236_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3812184236 version 0 (*, *, *, *, dots -+> V)

  if (NPARAMS != 5) Rsh_error("FIŘ arity mismatch for inner3812184236/0: expected 5, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_usetz;  // usetz
  SEXP Rsh_Fir_reg_digits;  // digits
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_format_isMissing;  // format_isMissing
  SEXP Rsh_Fir_reg_format_orDefault;  // format_orDefault
  SEXP Rsh_Fir_reg_usetz_isMissing;  // usetz_isMissing
  SEXP Rsh_Fir_reg_usetz_orDefault;  // usetz_orDefault
  SEXP Rsh_Fir_reg_digits_isMissing;  // digits_isMissing
  SEXP Rsh_Fir_reg_digits_orDefault;  // digits_orDefault
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_format1_;  // format1
  SEXP Rsh_Fir_reg_format2_;  // format2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_unclass;  // unclass
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_f0_;  // f0
  SEXP Rsh_Fir_reg_f1_;  // f1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_f2_;  // f2
  SEXP Rsh_Fir_reg_f3_;  // f3
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_secs;  // secs
  SEXP Rsh_Fir_reg_secs1_;  // secs1
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_secs3_;  // secs3
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx10_;  // dx10
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_secs6_;  // secs6
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_secs7_;  // secs7
  SEXP Rsh_Fir_reg_secs8_;  // secs8
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_digits1_;  // digits1
  SEXP Rsh_Fir_reg_digits2_;  // digits2
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_digits3_;  // digits3
  SEXP Rsh_Fir_reg_digits4_;  // digits4
  SEXP Rsh_Fir_reg_min;  // min
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_np;  // np
  SEXP Rsh_Fir_reg_np1_;  // np1
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_np2_;  // np2
  SEXP Rsh_Fir_reg_np3_;  // np3
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_secs9_;  // secs9
  SEXP Rsh_Fir_reg_secs10_;  // secs10
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg_secs13_;  // secs13
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_round;  // round
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_abs;  // abs
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_all;  // all
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_i17_;  // i17
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_times;  // times
  SEXP Rsh_Fir_reg_times1_;  // times1
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_times3_;  // times3
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_times6_;  // times6
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_times7_;  // times7
  SEXP Rsh_Fir_reg_times8_;  // times8
  SEXP Rsh_Fir_reg_is_finite1_;  // is_finite1
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_all1_;  // all1
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_np4_;  // np4
  SEXP Rsh_Fir_reg_np5_;  // np5
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_paste0_;  // paste0
  SEXP Rsh_Fir_reg_np6_;  // np6
  SEXP Rsh_Fir_reg_np7_;  // np7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_f4_;  // f4
  SEXP Rsh_Fir_reg_f5_;  // f5
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_x11_;  // x11
  SEXP Rsh_Fir_reg_format3_;  // format3
  SEXP Rsh_Fir_reg_format4_;  // format4
  SEXP Rsh_Fir_reg_usetz1_;  // usetz1
  SEXP Rsh_Fir_reg_usetz2_;  // usetz2
  SEXP Rsh_Fir_reg_format_POSIXlt;  // format_POSIXlt
  SEXP Rsh_Fir_reg_r71_;  // r71

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_format = PARAMS[1];
  Rsh_Fir_reg_usetz = PARAMS[2];
  Rsh_Fir_reg_digits = PARAMS[3];
  Rsh_Fir_reg_ddd = PARAMS[4];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // format_isMissing = missing.0(format)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_format;
  Rsh_Fir_reg_format_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if format_isMissing then L0("") else L0(format)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_format_isMissing)) {
  // L0("")
    Rsh_Fir_reg_format_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(format)
    Rsh_Fir_reg_format_orDefault = Rsh_Fir_reg_format;
    goto L0_;
  }

L0_:;
  // st format = format_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_format_orDefault, RHO);
  (void)(Rsh_Fir_reg_format_orDefault);
  // usetz_isMissing = missing.0(usetz)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_usetz;
  Rsh_Fir_reg_usetz_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if usetz_isMissing then L1(FALSE) else L1(usetz)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_usetz_isMissing)) {
  // L1(FALSE)
    Rsh_Fir_reg_usetz_orDefault = Rsh_const(CCP, 4);
    goto L1_;
  } else {
  // L1(usetz)
    Rsh_Fir_reg_usetz_orDefault = Rsh_Fir_reg_usetz;
    goto L1_;
  }

L1_:;
  // st usetz = usetz_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_usetz_orDefault, RHO);
  (void)(Rsh_Fir_reg_usetz_orDefault);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if digits_isMissing then L2() else L3(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   getOption = ldf getOption;
  //   r = dyn getOption("digits.secs");
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3812184236_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf inherits
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf inherits in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L4_:;
  // r5 = `!`(r3)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r5)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L40() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L40()
    goto L40_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // goto L6()
  // L6()
  goto L6_;

L6_:;
  // sym1 = ldf any
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf any in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard1 then L44() else L45()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L44()
    goto L44_;
  } else {
  // L45()
    goto L45_;
  }

L7_:;
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c1 then L48() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L48()
    goto L48_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L34()
  // L34()
  goto L34_;

L9_:;
  // st times = dx3
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L55() else D9()
  // L55()
  goto L55_;

L10_:;
  // st secs = dx9
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // secs = ld secs
  Rsh_Fir_reg_secs = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L64() else D11()
  // L64()
  goto L64_;

L11_:;
  // st secs = dx11
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // sym4 = ldf `is.null`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base4 = ldf `is.null` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard4 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L12_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r28 = dyn __3(secs6, r26)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_secs6_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L11(r28)
  // L11(r28)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r28_;
  goto L11_;

L13_:;
  // c8 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c8 then L75() else L14()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L75()
    goto L75_;
  } else {
  // L14()
    goto L14_;
  }

L14_:;
  // sym5 = ldf min
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf min in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard5 then L77() else L78()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L77()
    goto L77_;
  } else {
  // L78()
    goto L78_;
  }

L15_:;
  // st np = r31
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // np = ld np
  Rsh_Fir_reg_np = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L81() else D17()
  // L81()
  goto L81_;

L16_:;
  // goto L26()
  // L26()
  goto L26_;

L17_:;
  // r38 = `-`(r36, 1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // s = toForSeq(r38)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 19);
  // goto L18(i)
  // L18(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L18_;

L18_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args16);
  // c10 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if c10 then L86() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L86()
    goto L86_;
  } else {
  // L25()
    goto L25_;
  }

L19_:;
  // c11 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c11 then L96() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L96()
    goto L96_;
  } else {
  // L22()
    goto L22_;
  }

L20_:;
  // r48 = `<`(r42, 1.0E-6)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // all = ldf all in base
  Rsh_Fir_reg_all = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r49 = dyn all(r48)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L95() else D21()
  // L95()
  goto L95_;

L21_:;
  // r46 = `-`(secs13, r44)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_secs13_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_r44_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // abs = ldf abs in base
  Rsh_Fir_reg_abs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // r47 = dyn abs(r46)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_abs, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L94() else D20()
  // L94()
  goto L94_;

L22_:;
  // goto L18(i7)
  // L18(i7)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i7_;
  goto L18_;

L23_:;
  // goto L26()
  // L26()
  goto L26_;

L25_:;
  // x9 = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args23[4];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args23[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args23[3] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_x9_ = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // st i = x9
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_x9_, RHO);
  (void)(Rsh_Fir_reg_x9_);
  // sym7 = ldf all
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base7 = ldf all in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard7 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L26_:;
  // sym10 = ldf all
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base10 = ldf all in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard10 then L101() else L102()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L101()
    goto L101_;
  } else {
  // L102()
    goto L102_;
  }

L27_:;
  // c13 = `as.logical`(r52)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c13 then L112() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L112()
    goto L112_;
  } else {
  // L30()
    goto L30_;
  }

L28_:;
  // r57 = `==`(dx13, 0.0)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dx13_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // all1 = ldf all in base
  Rsh_Fir_reg_all1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r58 = dyn all1(r57)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_all1_, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L111() else D26()
  // L111()
  goto L111_;

L29_:;
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r56 = dyn __4(times6, r54)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_times6_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L28(r56)
  // L28(r56)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_r56_;
  goto L28_;

L30_:;
  // np4 = ld np
  Rsh_Fir_reg_np4_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L114() else D27()
  // L114()
  goto L114_;

L31_:;
  // l1 = ld format
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c15 = `is.object`(l1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if c15 then L119() else L120(r59, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L119()
    goto L119_;
  } else {
  // L120(r59, l1)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r59_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L120_;
  }

L32_:;
  // paste0 = ldf paste0
  Rsh_Fir_reg_paste0_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // check L117() else D28()
  // L117()
  goto L117_;

L33_:;
  // st format = dx15
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx15_, RHO);
  (void)(Rsh_Fir_reg_dx15_);
  // goto L34()
  // L34()
  goto L34_;

L34_:;
  // sym12 = ldf `.Internal`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base12 = ldf `.Internal` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args31);
  // if guard12 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L35_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r70
  return Rsh_Fir_reg_r70_;

L36_:;
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L38() else D0()
  // L38()
  goto L38_;

L37_:;
  // r2 = dyn base(<sym x>, "POSIXlt")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r2)
  // L4(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L4_;

D0_:;
  // deopt 2 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L38_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r4 = dyn inherits(x2, "POSIXlt", FALSE)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args34[2] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L39() else D1()
  // L39()
  goto L39_;

D1_:;
  // deopt 7 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L39_:;
  // goto L4(r4)
  // L4(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L4_;

L40_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 30), RHO);
  // check L41() else D2()
  // L41()
  goto L41_;

D2_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L41_:;
  // r6 = dyn stop("wrong class")
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 31);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L42() else D3()
  // L42()
  goto L42_;

D3_:;
  // deopt 12 [r6]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L42_:;
  // goto L6()
  // L6()
  goto L6_;

L44_:;
  // format1 = ld format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L46() else D4()
  // L46()
  goto L46_;

L45_:;
  // r8 = dyn base1(<lang `<-`(f0, `==`(format, ""))>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(r8)
  // L7(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L7_;

D4_:;
  // deopt 17 [format1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_format1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L46_:;
  // format2 = force? format1
  Rsh_Fir_reg_format2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_format1_);
  // checkMissing(format2)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_format2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r10 = `==`(format2, "")
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_format2_;
  Rsh_Fir_array_args38[1] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // st f0 = r10
  Rsh_Fir_store(Rsh_const(CCP, 33), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn any(r10)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L47() else D5()
  // L47()
  goto L47_;

D5_:;
  // deopt 23 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L47_:;
  // goto L7(r11)
  // L7(r11)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_;
  goto L7_;

L48_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // check L49() else D6()
  // L49()
  goto L49_;

D6_:;
  // deopt 25 []
  Rsh_Fir_deopt(25, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // p1 = prom<V +>{
  //   sym2 = ldf unclass;
  //   base2 = ldf unclass in base;
  //   guard2 = `==`.4(sym2, base2);
  //   if guard2 then L2() else L3();
  // L0(r13):
  //   c2 = `is.object`(r13);
  //   if c2 then L4() else L5(r13);
  // L2():
  //   x3 = ld x;
  //   x4 = force? x3;
  //   checkMissing(x4);
  //   unclass = ldf unclass in base;
  //   r14 = dyn unclass(x4);
  //   goto L0(r14);
  // L3():
  //   r12 = dyn base2(<sym x>);
  //   goto L0(r12);
  // L1(dx1):
  //   return dx1;
  // L4():
  //   dr = tryDispatchBuiltin.1("[", r13);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(r16):
  //   __ = ldf `[` in base;
  //   r17 = dyn __(r16, <int 1, 2, 3>);
  //   goto L1(r17);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L1(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3812184236_1, CCP, RHO);
  // r19 = dyn unlist(p1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

D7_:;
  // deopt 27 [r19]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L50_:;
  // c3 = `is.object`(r19)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c3 then L51() else L52(r19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L51()
    goto L51_;
  } else {
  // L52(r19)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r19_;
    goto L52_;
  }

L51_:;
  // dr2 = tryDispatchBuiltin.1("[", r19)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc1 then L53() else L52(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L53()
    goto L53_;
  } else {
  // L52(dr2)
    Rsh_Fir_reg_r21_ = Rsh_Fir_reg_dr2_;
    goto L52_;
  }

L52_:;
  // f0 = ld f0
  Rsh_Fir_reg_f0_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L54() else D8()
  // L54()
  goto L54_;

L53_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L9(dx2)
  // L9(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L9_;

D8_:;
  // deopt 28 [r21, f0]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_f0_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L54_:;
  // f1 = force? f0
  Rsh_Fir_reg_f1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f0_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r22 = dyn __1(r21, f1)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_f1_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L9(r22)
  // L9(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L9_;

D9_:;
  // deopt 32 [x5]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L55_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(x6)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c4 then L57() else L58(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L57()
    goto L57_;
  } else {
  // L58(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L58_;
  }

L56_:;
  // c5 = `is.object`(dx5)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c5 then L60() else L61(dx5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L60()
    goto L60_;
  } else {
  // L61(dx5)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    goto L61_;
  }

L57_:;
  // dr4 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args58);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc2 then L59() else L58(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L59()
    goto L59_;
  } else {
  // L58(dr4)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr4_;
    goto L58_;
  }

L58_:;
  // r23 = `$`(x8, <sym sec>)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args60[1] = Rsh_const(CCP, 39);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L56(r23)
  // L56(r23)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r23_;
  goto L56_;

L59_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L56(dx4)
  // L56(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L56_;

L60_:;
  // dr6 = tryDispatchBuiltin.1("[", dx5)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args62);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // if dc3 then L62() else L61(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L62()
    goto L62_;
  } else {
  // L61(dr6)
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dr6_;
    goto L61_;
  }

L61_:;
  // f2 = ld f0
  Rsh_Fir_reg_f2_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L63() else D10()
  // L63()
  goto L63_;

L62_:;
  // dx8 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // goto L10(dx8)
  // L10(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L10_;

D10_:;
  // deopt 35 [dx7, f2]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_f2_;
  Rsh_Fir_deopt(35, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L63_:;
  // f3 = force? f2
  Rsh_Fir_reg_f3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f2_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r24 = dyn __2(dx7, f3)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_f3_;
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L10(r24)
  // L10(r24)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r24_;
  goto L10_;

D11_:;
  // deopt 39 [secs]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_secs;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L64_:;
  // secs1 = force? secs
  Rsh_Fir_reg_secs1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_secs);
  // checkMissing(secs1)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_secs1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(secs1)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_secs1_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if c6 then L65() else L66(secs1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L65()
    goto L65_;
  } else {
  // L66(secs1)
    Rsh_Fir_reg_secs3_ = Rsh_Fir_reg_secs1_;
    goto L66_;
  }

L65_:;
  // dr8 = tryDispatchBuiltin.1("[", secs1)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_secs1_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args68);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if dc4 then L67() else L66(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L67()
    goto L67_;
  } else {
  // L66(dr8)
    Rsh_Fir_reg_secs3_ = Rsh_Fir_reg_dr8_;
    goto L66_;
  }

L66_:;
  // sym3 = ldf `is.finite`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base3 = ldf `is.finite` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args70);
  // if guard3 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L67_:;
  // dx10 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // goto L11(dx10)
  // L11(dx10)
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx10_;
  goto L11_;

L68_:;
  // secs7 = ld secs
  Rsh_Fir_reg_secs7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L70() else D12()
  // L70()
  goto L70_;

L69_:;
  // r25 = dyn base3(<sym secs>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L12(secs3, r25)
  // L12(secs3, r25)
  Rsh_Fir_reg_secs6_ = Rsh_Fir_reg_secs3_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L12_;

D12_:;
  // deopt 43 [secs3, secs7]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_secs3_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_secs7_;
  Rsh_Fir_deopt(43, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L70_:;
  // secs8 = force? secs7
  Rsh_Fir_reg_secs8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_secs7_);
  // checkMissing(secs8)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_secs8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r27 = dyn is_finite(secs8)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_secs8_;
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L71() else D13()
  // L71()
  goto L71_;

D13_:;
  // deopt 46 [secs3, r27]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_secs3_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r27_;
  Rsh_Fir_deopt(46, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L71_:;
  // goto L12(secs3, r27)
  // L12(secs3, r27)
  Rsh_Fir_reg_secs6_ = Rsh_Fir_reg_secs3_;
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L12_;

L72_:;
  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L74() else D14()
  // L74()
  goto L74_;

L73_:;
  // r29 = dyn base4(<sym digits>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L13(r29)
  // L13(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L13_;

D14_:;
  // deopt 50 [digits1]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_digits1_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L74_:;
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // c7 = `==`(digits2, NULL)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_digits2_;
  Rsh_Fir_array_args77[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // goto L13(c7)
  // L13(c7)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_c7_;
  goto L13_;

L75_:;
  // goto L15(0)
  // L15(0)
  Rsh_Fir_reg_r31_ = Rsh_const(CCP, 19);
  goto L15_;

L77_:;
  // digits3 = ld digits
  Rsh_Fir_reg_digits3_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L79() else D15()
  // L79()
  goto L79_;

L78_:;
  // r32 = dyn base5(6, <sym digits>)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L15(r32)
  // L15(r32)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r32_;
  goto L15_;

D15_:;
  // deopt 58 [digits3]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_digits3_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L79_:;
  // digits4 = force? digits3
  Rsh_Fir_reg_digits4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits3_);
  // checkMissing(digits4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_digits4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // min = ldf min in base
  Rsh_Fir_reg_min = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r33 = dyn min(6, digits4)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_digits4_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_min, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L80() else D16()
  // L80()
  goto L80_;

D16_:;
  // deopt 61 [r33]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L80_:;
  // goto L15(r33)
  // L15(r33)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r33_;
  goto L15_;

D17_:;
  // deopt 63 [np]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_np;
  Rsh_Fir_deopt(63, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L81_:;
  // np1 = force? np
  Rsh_Fir_reg_np1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np);
  // checkMissing(np1)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_np1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r34 = `>=`(np1, 1)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_np1_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(78, CCP, RHO, 2, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r34)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c9 then L82() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L82()
    goto L82_;
  } else {
  // L16()
    goto L16_;
  }

L82_:;
  // sym6 = ldf seq_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 42), RHO);
  // base6 = ldf seq_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 42), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard6 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L83_:;
  // np2 = ld np
  Rsh_Fir_reg_np2_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // check L85() else D18()
  // L85()
  goto L85_;

L84_:;
  // r35 = dyn base6(<sym np>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L17(r35)
  // L17(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L17_;

D18_:;
  // deopt 68 [np2]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_np2_;
  Rsh_Fir_deopt(68, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L85_:;
  // np3 = force? np2
  Rsh_Fir_reg_np3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np2_);
  // checkMissing(np3)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_np3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // r37 = seq_len(np3)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_np3_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L17(r37)
  // L17(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L17_;

L86_:;
  // goto L23(i2)
  // L23(i2)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i2_;
  goto L23_;

L87_:;
  // sym8 = ldf abs
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base8 = ldf abs in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args88[2];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args88[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args88);
  // if guard8 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L88_:;
  // r39 = dyn base7(<lang `<`(abs(`-`(secs, round(secs, i))), 1.0E-6)>)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_const(CCP, 43);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args89, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L19(i2, r39)
  // L19(i2, r39)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L19_;

L89_:;
  // secs9 = ld secs
  Rsh_Fir_reg_secs9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L91() else D19()
  // L91()
  goto L91_;

L90_:;
  // r41 = dyn base8(<lang `-`(secs, round(secs, i))>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L20(i2, r41)
  // L20(i2, r41)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L20_;

D19_:;
  // deopt 77 [i2, secs9]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_secs9_;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L91_:;
  // secs10 = force? secs9
  Rsh_Fir_reg_secs10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_secs9_);
  // checkMissing(secs10)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_secs10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // sym9 = ldf round
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base9 = ldf round in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args92);
  // if guard9 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L92_:;
  // round = ldf round in base
  Rsh_Fir_reg_round = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r45 = dyn round(<sym secs>, <sym i>)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args93[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_round, 2, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L21(i2, secs10, r45)
  // L21(i2, secs10, r45)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_secs13_ = Rsh_Fir_reg_secs10_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r45_;
  goto L21_;

L93_:;
  // r43 = dyn base9(<sym secs>, <sym i>)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names26[2];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L21(i2, secs10, r43)
  // L21(i2, secs10, r43)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_secs13_ = Rsh_Fir_reg_secs10_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r43_;
  goto L21_;

D20_:;
  // deopt 83 [i13, r47]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i13_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(83, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L94_:;
  // goto L20(i13, r47)
  // L20(i13, r47)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i13_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r47_;
  goto L20_;

D21_:;
  // deopt 87 [i10, r49]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L19(i10, r49)
  // L19(i10, r49)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r49_;
  goto L19_;

L96_:;
  // i16 = ld i
  Rsh_Fir_reg_i16_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L97() else D22()
  // L97()
  goto L97_;

D22_:;
  // deopt 88 [i7, i16]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L97_:;
  // i17 = force? i16
  Rsh_Fir_reg_i17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i16_);
  // checkMissing(i17)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_i17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // st np = i17
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_i17_, RHO);
  (void)(Rsh_Fir_reg_i17_);
  // goto L23(i7)
  // L23(i7)
  Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i7_;
  goto L23_;

L101_:;
  // times = ld times
  Rsh_Fir_reg_times = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L103() else D23()
  // L103()
  goto L103_;

L102_:;
  // r51 = dyn base10(<lang `==`(`[`(times, is.finite(times)), 0.0)>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L27(r51)
  // L27(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L27_;

D23_:;
  // deopt 102 [times]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_times;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L103_:;
  // times1 = force? times
  Rsh_Fir_reg_times1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_times);
  // checkMissing(times1)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_times1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // c12 = `is.object`(times1)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_times1_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty());
  // if c12 then L104() else L105(times1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L104()
    goto L104_;
  } else {
  // L105(times1)
    Rsh_Fir_reg_times3_ = Rsh_Fir_reg_times1_;
    goto L105_;
  }

L104_:;
  // dr10 = tryDispatchBuiltin.1("[", times1)
  SEXP Rsh_Fir_array_args99[2];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args99[1] = Rsh_Fir_reg_times1_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args99);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if dc5 then L106() else L105(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L106()
    goto L106_;
  } else {
  // L105(dr10)
    Rsh_Fir_reg_times3_ = Rsh_Fir_reg_dr10_;
    goto L105_;
  }

L105_:;
  // sym11 = ldf `is.finite`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base11 = ldf `is.finite` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args101[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args101);
  // if guard11 then L107() else L108()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L107()
    goto L107_;
  } else {
  // L108()
    goto L108_;
  }

L106_:;
  // dx12 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty());
  // goto L28(dx12)
  // L28(dx12)
  Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx12_;
  goto L28_;

L107_:;
  // times7 = ld times
  Rsh_Fir_reg_times7_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L109() else D24()
  // L109()
  goto L109_;

L108_:;
  // r53 = dyn base11(<sym times>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L29(times3, r53)
  // L29(times3, r53)
  Rsh_Fir_reg_times6_ = Rsh_Fir_reg_times3_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L29_;

D24_:;
  // deopt 106 [times3, times7]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_times3_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_times7_;
  Rsh_Fir_deopt(106, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L109_:;
  // times8 = force? times7
  Rsh_Fir_reg_times8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_times7_);
  // checkMissing(times8)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_times8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // is_finite1 = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r55 = dyn is_finite1(times8)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_times8_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite1_, 1, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L110() else D25()
  // L110()
  goto L110_;

D25_:;
  // deopt 109 [times3, r55]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_times3_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L110_:;
  // goto L29(times3, r55)
  // L29(times3, r55)
  Rsh_Fir_reg_times6_ = Rsh_Fir_reg_times3_;
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L29_;

D26_:;
  // deopt 114 [r58]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(114, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L111_:;
  // goto L27(r58)
  // L27(r58)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r58_;
  goto L27_;

L112_:;
  // goto L31("%Y-%m-%d")
  // L31("%Y-%m-%d")
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 47);
  goto L31_;

D27_:;
  // deopt 117 [np4]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_np4_;
  Rsh_Fir_deopt(117, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L114_:;
  // np5 = force? np4
  Rsh_Fir_reg_np5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np4_);
  // checkMissing(np5)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_np5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // r60 = `==`(np5, 0)
  SEXP Rsh_Fir_array_args107[2];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_np5_;
  Rsh_Fir_array_args107[1] = Rsh_const(CCP, 19);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r60)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty());
  // if c14 then L115() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L115()
    goto L115_;
  } else {
  // L32()
    goto L32_;
  }

L115_:;
  // goto L31("%Y-%m-%d %H:%M:%S")
  // L31("%Y-%m-%d %H:%M:%S")
  Rsh_Fir_reg_r59_ = Rsh_const(CCP, 48);
  goto L31_;

D28_:;
  // deopt 124 []
  Rsh_Fir_deopt(124, 0, NULL, CCP, RHO);
  return R_NilValue;

L117_:;
  // p2 = prom<V +>{
  //   np6 = ld np;
  //   np7 = force? np6;
  //   checkMissing(np7);
  //   return np7;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3812184236_2, CCP, RHO);
  // r62 = dyn paste0("%Y-%m-%d %H:%M:%OS", p2)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste0_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L118() else D29()
  // L118()
  goto L118_;

D29_:;
  // deopt 127 [r62]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r62_;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L118_:;
  // goto L31(r62)
  // L31(r62)
  Rsh_Fir_reg_r59_ = Rsh_Fir_reg_r62_;
  goto L31_;

L119_:;
  // dr12 = tryDispatchBuiltin.0("[<-", l1, r59)
  SEXP Rsh_Fir_array_args111[3];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args111[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args111);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args112[1];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // if dc6 then L121() else L120(r59, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L121()
    goto L121_;
  } else {
  // L120(r59, dr12)
    Rsh_Fir_reg_r64_ = Rsh_Fir_reg_r59_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr12_;
    goto L120_;
  }

L120_:;
  // f4 = ld f0
  Rsh_Fir_reg_f4_ = Rsh_Fir_load(Rsh_const(CCP, 33), RHO);
  // check L122() else D30()
  // L122()
  goto L122_;

L121_:;
  // dx14 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L33(r59, dx14)
  // L33(r59, dx14)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r59_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx14_;
  goto L33_;

D30_:;
  // deopt 129 [r64, l3, r59, f4]
  SEXP Rsh_Fir_array_deopt_stack27[4];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r64_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack27[2] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_deopt_stack27[3] = Rsh_Fir_reg_f4_;
  Rsh_Fir_deopt(129, 4, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L122_:;
  // f5 = force? f4
  Rsh_Fir_reg_f5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_f4_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 51), RHO);
  // r67 = dyn ___(l3, r59, f5)
  SEXP Rsh_Fir_array_args114[3];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args114[1] = Rsh_Fir_reg_r59_;
  Rsh_Fir_array_args114[2] = Rsh_Fir_reg_f5_;
  SEXP Rsh_Fir_array_arg_names31[3];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_array_arg_names31[2] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args114, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L33(r64, r67)
  // L33(r64, r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r67_;
  goto L33_;

L124_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L126() else D31()
  // L126()
  goto L126_;

L125_:;
  // r69 = dyn base12(<lang format.POSIXlt(x, format, usetz)>)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_const(CCP, 52);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L35(r69)
  // L35(r69)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L35_;

D31_:;
  // deopt 137 [x10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L126_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args116[1];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty()));
  // format3 = ld format
  Rsh_Fir_reg_format3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L127() else D32()
  // L127()
  goto L127_;

D32_:;
  // deopt 139 [format3]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_format3_;
  Rsh_Fir_deopt(139, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L127_:;
  // format4 = force? format3
  Rsh_Fir_reg_format4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_format3_);
  // checkMissing(format4)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_format4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty()));
  // usetz1 = ld usetz
  Rsh_Fir_reg_usetz1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L128() else D33()
  // L128()
  goto L128_;

D33_:;
  // deopt 141 [usetz1]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_usetz1_;
  Rsh_Fir_deopt(141, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L128_:;
  // usetz2 = force? usetz1
  Rsh_Fir_reg_usetz2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_usetz1_);
  // checkMissing(usetz2)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_usetz2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // format_POSIXlt = ldf `format.POSIXlt` in base
  Rsh_Fir_reg_format_POSIXlt = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 0), RHO);
  // r71 = dyn format_POSIXlt(x11, format4, usetz2)
  SEXP Rsh_Fir_array_args119[3];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_array_args119[1] = Rsh_Fir_reg_format4_;
  Rsh_Fir_array_args119[2] = Rsh_Fir_reg_usetz2_;
  SEXP Rsh_Fir_array_arg_names33[3];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_array_arg_names33[2] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format_POSIXlt, 3, Rsh_Fir_array_args119, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L129() else D34()
  // L129()
  goto L129_;

D34_:;
  // deopt 144 [r71]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_deopt(144, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L129_:;
  // goto L35(r71)
  // L35(r71)
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r71_;
  goto L35_;
}
SEXP Rsh_Fir_user_promise_inner3812184236_(SEXP CCP, SEXP RHO) {
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // r = dyn getOption("digits.secs")
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner3812184236_1(SEXP CCP, SEXP RHO) {
  // sym2 = ldf unclass
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base2 = ldf unclass in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard2 then L2() else L3()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L2()
    goto L2_;
  } else {
  // L3()
    goto L3_;
  }

L0_:;
  // c2 = `is.object`(r13)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c2 then L4() else L5(r13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L4()
    goto L4_;
  } else {
  // L5(r13)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r13_;
    goto L5_;
  }

L1_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L2_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // unclass = ldf unclass in base
  Rsh_Fir_reg_unclass = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r14 = dyn unclass(x4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unclass, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // r12 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L0(r12)
  // L0(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L0_;

L4_:;
  // dr = tryDispatchBuiltin.1("[", r13)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_r16_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r17 = dyn __(r16, <int 1, 2, 3>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L1(r17)
  // L1(r17)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r17_;
  goto L1_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L1(dx)
  // L1(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L1_;
}
SEXP Rsh_Fir_user_promise_inner3812184236_2(SEXP CCP, SEXP RHO) {
  // np6 = ld np
  Rsh_Fir_reg_np6_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // np7 = force? np6
  Rsh_Fir_reg_np7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np6_);
  // checkMissing(np7)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_np7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return np7
  return Rsh_Fir_reg_np7_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
