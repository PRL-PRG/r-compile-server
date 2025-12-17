#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3400273441_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3400273441_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3400273441_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3400273441_11(SEXP CCP, SEXP RHO);
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
  // r = clos inner3400273441
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3400273441_, RHO, CCP);
  // st `print.summaryDefault` = r
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
SEXP Rsh_Fir_user_function_inner3400273441_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3400273441 dynamic dispatch ([x, digits, `...`])

  return Rsh_Fir_user_version_inner3400273441_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3400273441_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3400273441 version 0 (*, *, dots -+> V)

  if (NPARAMS != 3) Rsh_error("FIŘ arity mismatch for inner3400273441/0: expected 3, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_digits;  // digits
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_digits_isMissing;  // digits_isMissing
  SEXP Rsh_Fir_reg_digits_orDefault;  // digits_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_getOption;  // getOption
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_max;  // max
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_x3_;  // x3
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_is_numeric;  // is_numeric
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x7_;  // x7
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_is_finite;  // is_finite
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_zapsmall;  // zapsmall
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_finite;  // finite
  SEXP Rsh_Fir_reg_finite1_;  // finite1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_finite2_;  // finite2
  SEXP Rsh_Fir_reg_finite3_;  // finite3
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_class;  // class
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_class__;  // class__
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_xx;  // xx
  SEXP Rsh_Fir_reg_xx1_;  // xx1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_match;  // match
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_x15_;  // x15
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_inherits;  // inherits
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_inherits1_;  // inherits1
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_x19_;  // x19
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_attr;  // attr
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_xx2_;  // xx2
  SEXP Rsh_Fir_reg_xx3_;  // xx3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_digits1_;  // digits1
  SEXP Rsh_Fir_reg_digits2_;  // digits2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_a;  // a
  SEXP Rsh_Fir_reg_a1_;  // a1
  SEXP Rsh_Fir_reg_as_character;  // as_character
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_format1_;  // format1
  SEXP Rsh_Fir_reg_xx4_;  // xx4
  SEXP Rsh_Fir_reg_xx5_;  // xx5
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_digits3_;  // digits3
  SEXP Rsh_Fir_reg_digits4_;  // digits4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_print;  // print
  SEXP Rsh_Fir_reg_xx6_;  // xx6
  SEXP Rsh_Fir_reg_xx7_;  // xx7
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_digits5_;  // digits5
  SEXP Rsh_Fir_reg_digits6_;  // digits6
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_m;  // m
  SEXP Rsh_Fir_reg_m1_;  // m1
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_c31_;  // c31
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_x23_;  // x23
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_c32_;  // c32
  SEXP Rsh_Fir_reg_r71_;  // r71
  SEXP Rsh_Fir_reg_c33_;  // c33
  SEXP Rsh_Fir_reg_c34_;  // c34
  SEXP Rsh_Fir_reg_c36_;  // c36
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_format2_;  // format2
  SEXP Rsh_Fir_reg_xx8_;  // xx8
  SEXP Rsh_Fir_reg_xx9_;  // xx9
  SEXP Rsh_Fir_reg_c37_;  // c37
  SEXP Rsh_Fir_reg_xx11_;  // xx11
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_m2_;  // m2
  SEXP Rsh_Fir_reg_m3_;  // m3
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_digits7_;  // digits7
  SEXP Rsh_Fir_reg_digits8_;  // digits8
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r78_;  // r78
  SEXP Rsh_Fir_reg_sym16_;  // sym16
  SEXP Rsh_Fir_reg_base16_;  // base16
  SEXP Rsh_Fir_reg_guard16_;  // guard16
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_r80_;  // r80
  SEXP Rsh_Fir_reg_xx12_;  // xx12
  SEXP Rsh_Fir_reg_xx13_;  // xx13
  SEXP Rsh_Fir_reg_c38_;  // c38
  SEXP Rsh_Fir_reg_xx15_;  // xx15
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_m4_;  // m4
  SEXP Rsh_Fir_reg_m5_;  // m5
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_as_character1_;  // as_character1
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_c39_;  // c39
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_print_table;  // print_table
  SEXP Rsh_Fir_reg_xx16_;  // xx16
  SEXP Rsh_Fir_reg_xx17_;  // xx17
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_digits9_;  // digits9
  SEXP Rsh_Fir_reg_digits10_;  // digits10
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_ddd2_;  // ddd2
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_sym17_;  // sym17
  SEXP Rsh_Fir_reg_base17_;  // base17
  SEXP Rsh_Fir_reg_guard17_;  // guard17
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_invisible1_;  // invisible1
  SEXP Rsh_Fir_reg_r89_;  // r89

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_digits = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // digits_isMissing = missing.0(digits)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_digits;
  Rsh_Fir_reg_digits_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if digits_isMissing then L0() else L1(digits)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_isMissing)) {
  // L0()
    goto L0_;
  } else {
  // L1(digits)
    Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_digits;
    goto L1_;
  }

L0_:;
  // p = prom<V +>{
  //   sym = ldf max;
  //   base = ldf max in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   getOption = ldf getOption;
  //   r2 = dyn getOption("digits");
  //   r3 = `-`(r2, 3);
  //   max = ldf max in base;
  //   r4 = dyn max(3, r3);
  //   goto L0(r4);
  // L2():
  //   r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_, CCP, RHO);
  // goto L1(p)
  // L1(p)
  Rsh_Fir_reg_digits_orDefault = Rsh_Fir_reg_p;
  goto L1_;

L1_:;
  // st digits = digits_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_digits_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D0()
  // L32()
  goto L32_;

L2_:;
  // c = `as.logical`(r7)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c then L3(c) else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L3(c)
    Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c;
    goto L3_;
  } else {
  // L37()
    goto L37_;
  }

L3_:;
  // c10 = `as.logical`(c1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c10 then L42() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L42()
    goto L42_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // c7 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // c8 = `||`(c5, c7)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_c7_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L3(c8)
  // L3(c8)
  Rsh_Fir_reg_c1_ = Rsh_Fir_reg_c8_;
  goto L3_;

L5_:;
  // goto L8()
  // L8()
  goto L8_;

L6_:;
  // st finite = r12
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // zapsmall = ldf zapsmall
  Rsh_Fir_reg_zapsmall = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L47() else D6()
  // L47()
  goto L47_;

L7_:;
  // st xx = dx3
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym4 = ldf class
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base4 = ldf class in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard4 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L9_:;
  // c13 = `is.object`(r24)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c13 then L58() else L59(r24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L58()
    goto L58_;
  } else {
  // L59(r24)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r24_;
    goto L59_;
  }

L10_:;
  // l3 = ld xx
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // class__ = ldf `class<-`
  Rsh_Fir_reg_class__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // check L61() else D11()
  // L61()
  goto L61_;

L11_:;
  // st m = r31
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r31_, RHO);
  (void)(Rsh_Fir_reg_r31_);
  // sym7 = ldf inherits
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base7 = ldf inherits in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard7 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L12_:;
  // match = ldf match in base
  Rsh_Fir_reg_match = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r35 = dyn match("NA's", r33, 0.0, NULL)
  SEXP Rsh_Fir_array_args13[4];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args13[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args13[3] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_array_arg_names3[2] = R_MissingArg;
  Rsh_Fir_array_arg_names3[3] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match, 4, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L69() else D15()
  // L69()
  goto L69_;

L13_:;
  // c14 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c14 then L14(c14) else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L14(c14)
    Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c14_;
    goto L14_;
  } else {
  // L74()
    goto L74_;
  }

L14_:;
  // c23 = `as.logical`(c15)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c15_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c23 then L80() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c23_)) {
  // L80()
    goto L80_;
  } else {
  // L16()
    goto L16_;
  }

L15_:;
  // c20 = `as.logical`(r40)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c21 = `||`(c19, c20)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c19_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_c20_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // goto L14(c21)
  // L14(c21)
  Rsh_Fir_reg_c15_ = Rsh_Fir_reg_c21_;
  goto L14_;

L16_:;
  // m = ld m
  Rsh_Fir_reg_m = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L109() else D34()
  // L109()
  goto L109_;

L17_:;
  // c24 = `as.logical`(r43)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_r43_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if c24 then L88() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L88()
    goto L88_;
  } else {
  // L19()
    goto L19_;
  }

L18_:;
  // st a = r45
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r45_, RHO);
  (void)(Rsh_Fir_reg_r45_);
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r47 = dyn length(r45)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L87() else D22()
  // L87()
  goto L87_;

L19_:;
  // format1 = ldf format
  Rsh_Fir_reg_format1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L99() else D28()
  // L99()
  goto L99_;

L20_:;
  // goto L22(r49)
  // L22(r49)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r49_;
  goto L22_;

L21_:;
  // c25 = ldf c in base
  Rsh_Fir_reg_c25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r56 = dyn c25(r52, r54)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c25_, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L97() else D27()
  // L97()
  goto L97_;

L22_:;
  // st xx = r57
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r57_, RHO);
  (void)(Rsh_Fir_reg_r57_);
  // print = ldf print
  Rsh_Fir_reg_print = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L101() else D30()
  // L101()
  goto L101_;

L23_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r65
  return Rsh_Fir_reg_r65_;

L24_:;
  // print_table = ldf `print.table`
  Rsh_Fir_reg_print_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L130() else D42()
  // L130()
  goto L130_;

L25_:;
  // c36 = `as.logical`(c28)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_c28_;
  Rsh_Fir_reg_c36_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c36 then L115() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c36_)) {
  // L115()
    goto L115_;
  } else {
  // L27()
    goto L27_;
  }

L26_:;
  // r71 = `!`(r70)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c33 = `as.logical`(r71)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r71_;
  Rsh_Fir_reg_c33_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // c34 = `&&`(c31, c33)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_c31_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_c33_;
  Rsh_Fir_reg_c34_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // goto L25(c34)
  // L25(c34)
  Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c34_;
  goto L25_;

L27_:;
  // goto L24()
  // L24()
  goto L24_;

L28_:;
  // st xx = r73
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r73_, RHO);
  (void)(Rsh_Fir_reg_r73_);
  // goto L24()
  // L24()
  goto L24_;

L29_:;
  // c39 = ldf c in base
  Rsh_Fir_reg_c39_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // r83 = dyn c39(r78, r80)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_r80_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c39_, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L128() else D41()
  // L128()
  goto L128_;

L30_:;
  // as_character1 = ldf `as.character` in base
  Rsh_Fir_reg_as_character1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r82 = dyn as_character1(dx9)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx9_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r82_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character1_, 1, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L127() else D40()
  // L127()
  goto L127_;

L31_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r88
  return Rsh_Fir_reg_r88_;

D0_:;
  // deopt 0 [x1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L32_:;
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // st xx = x2
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x2_, RHO);
  (void)(Rsh_Fir_reg_x2_);
  // sym1 = ldf `is.numeric`
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base1 = ldf `is.numeric` in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L33_:;
  // x3 = ld x
  Rsh_Fir_reg_x3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D1()
  // L35()
  goto L35_;

L34_:;
  // r6 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D1_:;
  // deopt 5 [x3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L35_:;
  // x4 = force? x3
  Rsh_Fir_reg_x4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x3_);
  // checkMissing(x4)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_x4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // is_numeric = ldf `is.numeric` in base
  Rsh_Fir_reg_is_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r8 = dyn is_numeric(x4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_numeric, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L36() else D2()
  // L36()
  goto L36_;

D2_:;
  // deopt 8 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L37_:;
  // sym2 = ldf `is.complex`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 28), RHO);
  // base2 = ldf `is.complex` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 28), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args32[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args32);
  // if guard2 then L38() else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L38()
    goto L38_;
  } else {
  // L39()
    goto L39_;
  }

L38_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D3()
  // L40()
  goto L40_;

L39_:;
  // r9 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L4(c, r9)
  // L4(c, r9)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r9_;
  goto L4_;

D3_:;
  // deopt 10 [c, x5]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_x5_;
  Rsh_Fir_deopt(10, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L40_:;
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // c6 = `is.complex`(x6)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(388, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L4(c, c6)
  // L4(c, c6)
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_c6_;
  goto L4_;

L42_:;
  // sym3 = ldf `is.finite`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 29), RHO);
  // base3 = ldf `is.finite` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard3 then L43() else L44()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L43()
    goto L43_;
  } else {
  // L44()
    goto L44_;
  }

L43_:;
  // x7 = ld x
  Rsh_Fir_reg_x7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L45() else D4()
  // L45()
  goto L45_;

L44_:;
  // r11 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L6(r11)
  // L6(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L6_;

D4_:;
  // deopt 16 [x7]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L45_:;
  // x8 = force? x7
  Rsh_Fir_reg_x8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x7_);
  // checkMissing(x8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // is_finite = ldf `is.finite` in base
  Rsh_Fir_reg_is_finite = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r13 = dyn is_finite(x8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_finite, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L46() else D5()
  // L46()
  goto L46_;

D5_:;
  // deopt 19 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L46_:;
  // goto L6(r13)
  // L6(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L6_;

D6_:;
  // deopt 22 []
  Rsh_Fir_deopt(22, 0, NULL, CCP, RHO);
  return R_NilValue;

L47_:;
  // p1 = prom<V +>{
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c11 = `is.object`(x10);
  //   if c11 then L1() else L2(x10);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[", x10);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(x12):
  //   finite = ld finite;
  //   finite1 = force? finite;
  //   __ = ldf `[` in base;
  //   r14 = dyn __(x12, finite1);
  //   goto L0(r14);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_1, CCP, RHO);
  // r16 = dyn zapsmall(p1)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_zapsmall, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L48() else D7()
  // L48()
  goto L48_;

D7_:;
  // deopt 24 [r16]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L48_:;
  // l = ld xx
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // c12 = `is.object`(l)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c12 then L49() else L50(r16, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L49()
    goto L49_;
  } else {
  // L50(r16, l)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L50_;
  }

L49_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, r16)
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args48[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args48);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc1 then L51() else L50(r16, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L51()
    goto L51_;
  } else {
  // L50(r16, dr2)
    Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r16_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L50_;
  }

L50_:;
  // finite2 = ld finite
  Rsh_Fir_reg_finite2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L52() else D8()
  // L52()
  goto L52_;

L51_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // goto L7(r16, dx2)
  // L7(r16, dx2)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r16_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L7_;

D8_:;
  // deopt 26 [r18, l2, r16, finite2]
  SEXP Rsh_Fir_array_deopt_stack7[4];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_deopt_stack7[3] = Rsh_Fir_reg_finite2_;
  Rsh_Fir_deopt(26, 4, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L52_:;
  // finite3 = force? finite2
  Rsh_Fir_reg_finite3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_finite2_);
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r21 = dyn ___(l2, r16, finite3)
  SEXP Rsh_Fir_array_args51[3];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_array_args51[2] = Rsh_Fir_reg_finite3_;
  SEXP Rsh_Fir_array_arg_names15[3];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L7(r18, r21)
  // L7(r18, r21)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r18_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r21_;
  goto L7_;

L54_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D9()
  // L56()
  goto L56_;

L55_:;
  // r23 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L9(r23)
  // L9(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L9_;

D9_:;
  // deopt 34 [x13]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L56_:;
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty()));
  // class = ldf class in base
  Rsh_Fir_reg_class = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r25 = dyn class(x14)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L57() else D10()
  // L57()
  goto L57_;

D10_:;
  // deopt 37 [r25]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L57_:;
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L9_;

L58_:;
  // dr4 = tryDispatchBuiltin.1("[", r24)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args55);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if dc2 then L60() else L59(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L60()
    goto L60_;
  } else {
  // L59(dr4)
    Rsh_Fir_reg_r27_ = Rsh_Fir_reg_dr4_;
    goto L59_;
  }

L59_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r28 = dyn __1(r27, -1.0)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L10(r28)
  // L10(r28)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r28_;
  goto L10_;

L60_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L10(dx4)
  // L10(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L10_;

D11_:;
  // deopt 42 [dx5, l3, dx5]
  SEXP Rsh_Fir_array_deopt_stack10[3];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack10[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_deopt(42, 3, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L61_:;
  // r29 = dyn class__(l3, NULL, dx5)
  SEXP Rsh_Fir_array_args59[3];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args59[1] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args59[2] = Rsh_Fir_reg_dx5_;
  SEXP Rsh_Fir_array_arg_names19[3];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_class__, 3, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L62() else D12()
  // L62()
  goto L62_;

D12_:;
  // deopt 44 [dx5, r29]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L62_:;
  // st xx = r29
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // sym5 = ldf match
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base5 = ldf match in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args60);
  // if guard5 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L63_:;
  // sym6 = ldf names
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 35), RHO);
  // base6 = ldf names in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args61[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args61);
  // if guard6 then L65() else L66()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L65()
    goto L65_;
  } else {
  // L66()
    goto L66_;
  }

L64_:;
  // r30 = dyn base5("NA's", <lang names(xx)>, 0.0)
  SEXP Rsh_Fir_array_args62[3];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names20[3];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_array_arg_names20[2] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 3, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L11(r30)
  // L11(r30)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r30_;
  goto L11_;

L65_:;
  // xx = ld xx
  Rsh_Fir_reg_xx = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L67() else D13()
  // L67()
  goto L67_;

L66_:;
  // r32 = dyn base6(<sym xx>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L12(r32)
  // L12(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L12_;

D13_:;
  // deopt 51 [xx]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_xx;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L67_:;
  // xx1 = force? xx
  Rsh_Fir_reg_xx1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx);
  // checkMissing(xx1)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_xx1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 35), RHO);
  // r34 = dyn names(xx1)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_xx1_;
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L68() else D14()
  // L68()
  goto L68_;

D14_:;
  // deopt 54 [r34]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L68_:;
  // goto L12(r34)
  // L12(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L12_;

D15_:;
  // deopt 58 [r35]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L11(r35)
  // L11(r35)
  Rsh_Fir_reg_r31_ = Rsh_Fir_reg_r35_;
  goto L11_;

L70_:;
  // x15 = ld x
  Rsh_Fir_reg_x15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L72() else D16()
  // L72()
  goto L72_;

L71_:;
  // r36 = dyn base7(<sym x>, "Date")
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args66[1] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L13(r36)
  // L13(r36)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L13_;

D16_:;
  // deopt 62 [x15]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L72_:;
  // x16 = force? x15
  Rsh_Fir_reg_x16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x15_);
  // checkMissing(x16)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // inherits = ldf inherits in base
  Rsh_Fir_reg_inherits = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r38 = dyn inherits(x16, "Date", FALSE)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args68[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names24[3];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits, 3, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L73() else D17()
  // L73()
  goto L73_;

D17_:;
  // deopt 67 [r38]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L73_:;
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L13_;

L74_:;
  // sym8 = ldf inherits
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base8 = ldf inherits in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args69);
  // if guard8 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L75_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D18()
  // L77()
  goto L77_;

L76_:;
  // r39 = dyn base8(<sym x>, "POSIXct")
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args70[1] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names25[2];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L15(c14, r39)
  // L15(c14, r39)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L15_;

D18_:;
  // deopt 70 [c14, x17]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_x17_;
  Rsh_Fir_deopt(70, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L77_:;
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // inherits1 = ldf inherits in base
  Rsh_Fir_reg_inherits1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r41 = dyn inherits1(x18, "POSIXct", FALSE)
  SEXP Rsh_Fir_array_args72[3];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args72[2] = Rsh_const(CCP, 38);
  SEXP Rsh_Fir_array_arg_names26[3];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_inherits1_, 3, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L78() else D19()
  // L78()
  goto L78_;

D19_:;
  // deopt 75 [c14, r41]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(75, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L15(c14, r41)
  // L15(c14, r41)
  Rsh_Fir_reg_c19_ = Rsh_Fir_reg_c14_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L15_;

L80_:;
  // sym9 = ldf length
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base9 = ldf length in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard9 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L81_:;
  // sym10 = ldf attr
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 40), RHO);
  // base10 = ldf attr in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args74);
  // if guard10 then L83() else L84()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L83()
    goto L83_;
  } else {
  // L84()
    goto L84_;
  }

L82_:;
  // r42 = dyn base9(<lang `<-`(a, attr(x, "NAs"))>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L17(r42)
  // L17(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L17_;

L83_:;
  // x19 = ld x
  Rsh_Fir_reg_x19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L85() else D20()
  // L85()
  goto L85_;

L84_:;
  // r44 = dyn base10(<sym x>, "NAs")
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_args76[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names28[2];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 2, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L18(r44)
  // L18(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L18_;

D20_:;
  // deopt 81 [x19]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_deopt(81, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L85_:;
  // x20 = force? x19
  Rsh_Fir_reg_x20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x19_);
  // checkMissing(x20)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // attr = ldf attr in base
  Rsh_Fir_reg_attr = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 40), RHO);
  // r46 = dyn attr(x20, "NAs")
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args78[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L86() else D21()
  // L86()
  goto L86_;

D21_:;
  // deopt 85 [r46]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_r46_;
  Rsh_Fir_deopt(85, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L86_:;
  // goto L18(r46)
  // L18(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L18_;

D22_:;
  // deopt 88 [r47]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_deopt(88, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L87_:;
  // goto L17(r47)
  // L17(r47)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r47_;
  goto L17_;

L88_:;
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args79[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args79);
  // if guard11 then L89() else L90()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L89()
    goto L89_;
  } else {
  // L90()
    goto L90_;
  }

L89_:;
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L91() else D23()
  // L91()
  goto L91_;

L90_:;
  // r48 = dyn base11[, `NA's`](<lang format(xx, digits=digits)>, <lang as.character(a)>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 44);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L20(r48)
  // L20(r48)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r48_;
  goto L20_;

D23_:;
  // deopt 92 []
  Rsh_Fir_deopt(92, 0, NULL, CCP, RHO);
  return R_NilValue;

L91_:;
  // p2 = prom<V +>{
  //   xx2 = ld xx;
  //   xx3 = force? xx2;
  //   checkMissing(xx3);
  //   return xx3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_2, CCP, RHO);
  // p3 = prom<V +>{
  //   digits1 = ld digits;
  //   digits2 = force? digits1;
  //   checkMissing(digits2);
  //   return digits2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_3, CCP, RHO);
  // r52 = dyn format[, digits](p2, p3)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L92() else D24()
  // L92()
  goto L92_;

D24_:;
  // deopt 96 [r52]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r52_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L92_:;
  // sym12 = ldf `as.character`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base12 = ldf `as.character` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args84);
  // if guard12 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L93_:;
  // a = ld a
  Rsh_Fir_reg_a = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L95() else D25()
  // L95()
  goto L95_;

L94_:;
  // r53 = dyn base12(<sym a>)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L21(r53)
  // L21(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L21_;

D25_:;
  // deopt 99 [a]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_a;
  Rsh_Fir_deopt(99, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // a1 = force? a
  Rsh_Fir_reg_a1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_a);
  // checkMissing(a1)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_a1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // as_character = ldf `as.character` in base
  Rsh_Fir_reg_as_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r55 = dyn as_character(a1)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_a1_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_character, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L96() else D26()
  // L96()
  goto L96_;

D26_:;
  // deopt 102 [r55]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L21(r55)
  // L21(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L21_;

D27_:;
  // deopt 105 [r56]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L97_:;
  // goto L20(r56)
  // L20(r56)
  Rsh_Fir_reg_r49_ = Rsh_Fir_reg_r56_;
  goto L20_;

D28_:;
  // deopt 107 []
  Rsh_Fir_deopt(107, 0, NULL, CCP, RHO);
  return R_NilValue;

L99_:;
  // p4 = prom<V +>{
  //   xx4 = ld xx;
  //   xx5 = force? xx4;
  //   checkMissing(xx5);
  //   return xx5;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_4, CCP, RHO);
  // p5 = prom<V +>{
  //   digits3 = ld digits;
  //   digits4 = force? digits3;
  //   checkMissing(digits4);
  //   return digits4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_5, CCP, RHO);
  // r60 = dyn format1[, digits](p4, p5)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names34[2];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_array_arg_names34[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format1_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names34, CCP, RHO);
  // check L100() else D29()
  // L100()
  goto L100_;

D29_:;
  // deopt 111 [r60]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L100_:;
  // goto L22(r60)
  // L22(r60)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r60_;
  goto L22_;

D30_:;
  // deopt 114 []
  Rsh_Fir_deopt(114, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // p6 = prom<V +>{
  //   xx6 = ld xx;
  //   xx7 = force? xx6;
  //   checkMissing(xx7);
  //   return xx7;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_6, CCP, RHO);
  // p7 = prom<V +>{
  //   digits5 = ld digits;
  //   digits6 = force? digits5;
  //   checkMissing(digits6);
  //   return digits6;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_7, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r63 = dyn print[, digits, `...`](p6, p7, ddd1)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_p6_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names35[3];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_array_arg_names35[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names35[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names35, CCP, RHO);
  // check L102() else D31()
  // L102()
  goto L102_;

D31_:;
  // deopt 119 [r63]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_deopt(119, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L102_:;
  // sym13 = ldf invisible
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base13 = ldf invisible in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args94);
  // if guard13 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L105() else D32()
  // L105()
  goto L105_;

L104_:;
  // r64 = dyn base13(<sym x>)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names36[1];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names36, CCP, RHO);
  // goto L23(r64)
  // L23(r64)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r64_;
  goto L23_;

D32_:;
  // deopt 122 [x21]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_deopt(122, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L105_:;
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r66 = dyn invisible(x22)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names37, CCP, RHO);
  // check L106() else D33()
  // L106()
  goto L106_;

D33_:;
  // deopt 125 [r66]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_r66_;
  Rsh_Fir_deopt(125, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L23(r66)
  // L23(r66)
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r66_;
  goto L23_;

D34_:;
  // deopt 127 [m]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_m;
  Rsh_Fir_deopt(127, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L109_:;
  // m1 = force? m
  Rsh_Fir_reg_m1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m);
  // checkMissing(m1)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_m1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // c26 = `as.logical`(m1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_m1_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty());
  // if c26 then L110() else L25(c26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L110()
    goto L110_;
  } else {
  // L25(c26)
    Rsh_Fir_reg_c28_ = Rsh_Fir_reg_c26_;
    goto L25_;
  }

L110_:;
  // sym14 = ldf `is.character`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // base14 = ldf `is.character` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 47), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args100[2];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args100[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args100);
  // if guard14 then L111() else L112()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L111()
    goto L111_;
  } else {
  // L112()
    goto L112_;
  }

L111_:;
  // x23 = ld x
  Rsh_Fir_reg_x23_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L113() else D35()
  // L113()
  goto L113_;

L112_:;
  // r69 = dyn base14(<sym x>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L26(c26, r69)
  // L26(c26, r69)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_r69_;
  goto L26_;

D35_:;
  // deopt 130 [c26, x23]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_c26_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_x23_;
  Rsh_Fir_deopt(130, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L113_:;
  // x24 = force? x23
  Rsh_Fir_reg_x24_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x23_);
  // checkMissing(x24)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_x24_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // c32 = `is.character`(x24)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_reg_c32_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args103, Rsh_Fir_param_types_empty());
  // goto L26(c26, c32)
  // L26(c26, c32)
  Rsh_Fir_reg_c31_ = Rsh_Fir_reg_c26_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_reg_c32_;
  goto L26_;

L115_:;
  // sym15 = ldf c
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base15 = ldf c in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args104[2];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args104[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args104);
  // if guard15 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // format2 = ldf format
  Rsh_Fir_reg_format2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L118() else D36()
  // L118()
  goto L118_;

L117_:;
  // r72 = dyn base15[, `NA's`](<lang format(`[`(xx, `-`(m)), digits=digits)>, <lang as.character(`[`(xx, m))>)
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = Rsh_const(CCP, 45);
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names39, CCP, RHO);
  // goto L28(r72)
  // L28(r72)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r72_;
  goto L28_;

D36_:;
  // deopt 138 []
  Rsh_Fir_deopt(138, 0, NULL, CCP, RHO);
  return R_NilValue;

L118_:;
  // p8 = prom<V +>{
  //   xx8 = ld xx;
  //   xx9 = force? xx8;
  //   checkMissing(xx9);
  //   c37 = `is.object`(xx9);
  //   if c37 then L1() else L2(xx9);
  // L0(dx7):
  //   return dx7;
  // L1():
  //   dr6 = tryDispatchBuiltin.1("[", xx9);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L3() else L2(dr6);
  // L2(xx11):
  //   m2 = ld m;
  //   m3 = force? m2;
  //   checkMissing(m3);
  //   r74 = `-`(<missing>, m3);
  //   __2 = ldf `[` in base;
  //   r75 = dyn __2(xx11, r74);
  //   goto L0(r75);
  // L3():
  //   dx6 = getTryDispatchBuiltinValue(dr6);
  //   goto L0(dx6);
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_8, CCP, RHO);
  // p9 = prom<V +>{
  //   digits7 = ld digits;
  //   digits8 = force? digits7;
  //   checkMissing(digits8);
  //   return digits8;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_9, CCP, RHO);
  // r78 = dyn format2[, digits](p8, p9)
  SEXP Rsh_Fir_array_args115[2];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args115[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names41[2];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_array_arg_names41[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r78_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format2_, 2, Rsh_Fir_array_args115, Rsh_Fir_array_arg_names41, CCP, RHO);
  // check L119() else D37()
  // L119()
  goto L119_;

D37_:;
  // deopt 142 [r78]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r78_;
  Rsh_Fir_deopt(142, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L119_:;
  // sym16 = ldf `as.character`
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base16 = ldf `as.character` in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args116);
  // if guard16 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L120_:;
  // xx12 = ld xx
  Rsh_Fir_reg_xx12_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L122() else D38()
  // L122()
  goto L122_;

L121_:;
  // r79 = dyn base16(<lang `[`(xx, m)>)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names42[1];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args117, Rsh_Fir_array_arg_names42, CCP, RHO);
  // goto L29(r79)
  // L29(r79)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r79_;
  goto L29_;

D38_:;
  // deopt 145 [xx12]
  SEXP Rsh_Fir_array_deopt_stack33[1];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_xx12_;
  Rsh_Fir_deopt(145, 1, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L122_:;
  // xx13 = force? xx12
  Rsh_Fir_reg_xx13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx12_);
  // checkMissing(xx13)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_xx13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty()));
  // c38 = `is.object`(xx13)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_xx13_;
  Rsh_Fir_reg_c38_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // if c38 then L123() else L124(xx13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c38_)) {
  // L123()
    goto L123_;
  } else {
  // L124(xx13)
    Rsh_Fir_reg_xx15_ = Rsh_Fir_reg_xx13_;
    goto L124_;
  }

L123_:;
  // dr8 = tryDispatchBuiltin.1("[", xx13)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_xx13_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args120);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if dc4 then L125() else L124(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L125()
    goto L125_;
  } else {
  // L124(dr8)
    Rsh_Fir_reg_xx15_ = Rsh_Fir_reg_dr8_;
    goto L124_;
  }

L124_:;
  // m4 = ld m
  Rsh_Fir_reg_m4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L126() else D39()
  // L126()
  goto L126_;

L125_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args122, Rsh_Fir_param_types_empty());
  // goto L30(dx8)
  // L30(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L30_;

D39_:;
  // deopt 147 [xx15, m4]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_xx15_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_m4_;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L126_:;
  // m5 = force? m4
  Rsh_Fir_reg_m5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m4_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r81 = dyn __3(xx15, m5)
  SEXP Rsh_Fir_array_args123[2];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_xx15_;
  Rsh_Fir_array_args123[1] = Rsh_Fir_reg_m5_;
  SEXP Rsh_Fir_array_arg_names43[2];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_array_arg_names43[1] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args123, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L30(r81)
  // L30(r81)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r81_;
  goto L30_;

D40_:;
  // deopt 151 [r82]
  SEXP Rsh_Fir_array_deopt_stack35[1];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L127_:;
  // goto L29(r82)
  // L29(r82)
  Rsh_Fir_reg_r80_ = Rsh_Fir_reg_r82_;
  goto L29_;

D41_:;
  // deopt 154 [r83]
  SEXP Rsh_Fir_array_deopt_stack36[1];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_r83_;
  Rsh_Fir_deopt(154, 1, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L128_:;
  // goto L28(r83)
  // L28(r83)
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r83_;
  goto L28_;

D42_:;
  // deopt 159 []
  Rsh_Fir_deopt(159, 0, NULL, CCP, RHO);
  return R_NilValue;

L130_:;
  // p10 = prom<V +>{
  //   xx16 = ld xx;
  //   xx17 = force? xx16;
  //   checkMissing(xx17);
  //   return xx17;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_10, CCP, RHO);
  // p11 = prom<V +>{
  //   digits9 = ld digits;
  //   digits10 = force? digits9;
  //   checkMissing(digits10);
  //   return digits10;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3400273441_11, CCP, RHO);
  // ddd2 = ld `...`
  Rsh_Fir_reg_ddd2_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // r86 = dyn print_table[, digits, `...`](p10, p11, ddd2)
  SEXP Rsh_Fir_array_args126[3];
  Rsh_Fir_array_args126[0] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args126[1] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args126[2] = Rsh_Fir_reg_ddd2_;
  SEXP Rsh_Fir_array_arg_names44[3];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_array_arg_names44[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_arg_names44[2] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_print_table, 3, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names44, CCP, RHO);
  // check L131() else D43()
  // L131()
  goto L131_;

D43_:;
  // deopt 164 [r86]
  SEXP Rsh_Fir_array_deopt_stack37[1];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(164, 1, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L131_:;
  // sym17 = ldf invisible
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base17 = ldf invisible in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args127[2];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args127[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args127);
  // if guard17 then L132() else L133()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L132()
    goto L132_;
  } else {
  // L133()
    goto L133_;
  }

L132_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L134() else D44()
  // L134()
  goto L134_;

L133_:;
  // r87 = dyn base17(<sym x>)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names45[1];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_reg_r87_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args128, Rsh_Fir_array_arg_names45, CCP, RHO);
  // goto L31(r87)
  // L31(r87)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r87_;
  goto L31_;

D44_:;
  // deopt 167 [x25]
  SEXP Rsh_Fir_array_deopt_stack38[1];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_deopt(167, 1, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L134_:;
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args129[1];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args129, Rsh_Fir_param_types_empty()));
  // invisible1 = ldf invisible in base
  Rsh_Fir_reg_invisible1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r89 = dyn invisible1(x26)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible1_, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names46, CCP, RHO);
  // check L135() else D45()
  // L135()
  goto L135_;

D45_:;
  // deopt 170 [r89]
  SEXP Rsh_Fir_array_deopt_stack39[1];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L135_:;
  // goto L31(r89)
  // L31(r89)
  Rsh_Fir_reg_r88_ = Rsh_Fir_reg_r89_;
  goto L31_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_(SEXP CCP, SEXP RHO) {
  // sym = ldf max
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf max in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // getOption = ldf getOption
  Rsh_Fir_reg_getOption = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // r2 = dyn getOption("digits")
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_getOption, 1, Rsh_Fir_array_args2, Rsh_Fir_array_arg_names, CCP, RHO);
  // r3 = `-`(r2, 3)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // max = ldf max in base
  Rsh_Fir_reg_max = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r4 = dyn max(3, r3)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_max, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r4)
  // L0(r4)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r4_;
  goto L0_;

L2_:;
  // r = dyn base(3, <lang `-`(getOption("digits"), 3)>)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_1(SEXP CCP, SEXP RHO) {
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(x10)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c11 then L1() else L2(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L1()
    goto L1_;
  } else {
  // L2(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[", x10)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // finite = ld finite
  Rsh_Fir_reg_finite = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // finite1 = force? finite
  Rsh_Fir_reg_finite1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_finite);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r14 = dyn __(x12, finite1)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_finite1_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_2(SEXP CCP, SEXP RHO) {
  // xx2 = ld xx
  Rsh_Fir_reg_xx2_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // xx3 = force? xx2
  Rsh_Fir_reg_xx3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx2_);
  // checkMissing(xx3)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_xx3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return xx3
  return Rsh_Fir_reg_xx3_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_3(SEXP CCP, SEXP RHO) {
  // digits1 = ld digits
  Rsh_Fir_reg_digits1_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // digits2 = force? digits1
  Rsh_Fir_reg_digits2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits1_);
  // checkMissing(digits2)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_digits2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return digits2
  return Rsh_Fir_reg_digits2_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_4(SEXP CCP, SEXP RHO) {
  // xx4 = ld xx
  Rsh_Fir_reg_xx4_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // xx5 = force? xx4
  Rsh_Fir_reg_xx5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx4_);
  // checkMissing(xx5)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_xx5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return xx5
  return Rsh_Fir_reg_xx5_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_5(SEXP CCP, SEXP RHO) {
  // digits3 = ld digits
  Rsh_Fir_reg_digits3_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // digits4 = force? digits3
  Rsh_Fir_reg_digits4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits3_);
  // checkMissing(digits4)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_digits4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return digits4
  return Rsh_Fir_reg_digits4_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_6(SEXP CCP, SEXP RHO) {
  // xx6 = ld xx
  Rsh_Fir_reg_xx6_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // xx7 = force? xx6
  Rsh_Fir_reg_xx7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx6_);
  // checkMissing(xx7)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_xx7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // return xx7
  return Rsh_Fir_reg_xx7_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_7(SEXP CCP, SEXP RHO) {
  // digits5 = ld digits
  Rsh_Fir_reg_digits5_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // digits6 = force? digits5
  Rsh_Fir_reg_digits6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits5_);
  // checkMissing(digits6)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_digits6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return digits6
  return Rsh_Fir_reg_digits6_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_8(SEXP CCP, SEXP RHO) {
  // xx8 = ld xx
  Rsh_Fir_reg_xx8_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // xx9 = force? xx8
  Rsh_Fir_reg_xx9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx8_);
  // checkMissing(xx9)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_xx9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // c37 = `is.object`(xx9)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_xx9_;
  Rsh_Fir_reg_c37_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args107, Rsh_Fir_param_types_empty());
  // if c37 then L1() else L2(xx9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c37_)) {
  // L1()
    goto L1_;
  } else {
  // L2(xx9)
    Rsh_Fir_reg_xx11_ = Rsh_Fir_reg_xx9_;
    goto L2_;
  }

L0_:;
  // return dx7
  return Rsh_Fir_reg_dx7_;

L1_:;
  // dr6 = tryDispatchBuiltin.1("[", xx9)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_xx9_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args108);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty());
  // if dc3 then L3() else L2(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr6)
    Rsh_Fir_reg_xx11_ = Rsh_Fir_reg_dr6_;
    goto L2_;
  }

L2_:;
  // m2 = ld m
  Rsh_Fir_reg_m2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // m3 = force? m2
  Rsh_Fir_reg_m3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_m2_);
  // checkMissing(m3)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_m3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // r74 = `-`(<missing>, m3)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_m3_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args111, Rsh_Fir_param_types_empty());
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r75 = dyn __2(xx11, r74)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_xx11_;
  Rsh_Fir_array_args112[1] = Rsh_Fir_reg_r74_;
  SEXP Rsh_Fir_array_arg_names40[2];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_array_arg_names40[1] = R_MissingArg;
  Rsh_Fir_reg_r75_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args112, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L0(r75)
  // L0(r75)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r75_;
  goto L0_;

L3_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // goto L0(dx6)
  // L0(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_9(SEXP CCP, SEXP RHO) {
  // digits7 = ld digits
  Rsh_Fir_reg_digits7_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // digits8 = force? digits7
  Rsh_Fir_reg_digits8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits7_);
  // checkMissing(digits8)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_digits8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty()));
  // return digits8
  return Rsh_Fir_reg_digits8_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_10(SEXP CCP, SEXP RHO) {
  // xx16 = ld xx
  Rsh_Fir_reg_xx16_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // xx17 = force? xx16
  Rsh_Fir_reg_xx17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xx16_);
  // checkMissing(xx17)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_xx17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args124, Rsh_Fir_param_types_empty()));
  // return xx17
  return Rsh_Fir_reg_xx17_;
}
SEXP Rsh_Fir_user_promise_inner3400273441_11(SEXP CCP, SEXP RHO) {
  // digits9 = ld digits
  Rsh_Fir_reg_digits9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // digits10 = force? digits9
  Rsh_Fir_reg_digits10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits9_);
  // checkMissing(digits10)
  SEXP Rsh_Fir_array_args125[1];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_digits10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args125, Rsh_Fir_param_types_empty()));
  // return digits10
  return Rsh_Fir_reg_digits10_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
