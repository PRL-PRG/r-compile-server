#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1563741242_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1563741242_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1563741242_(SEXP CCP, SEXP RHO);
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
  // r = clos inner1563741242
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1563741242_, RHO, CCP);
  // st addConcordance = r
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
SEXP Rsh_Fir_user_function_inner1563741242_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1563741242 dynamic dispatch ([conc, s])

  return Rsh_Fir_user_version_inner1563741242_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1563741242_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1563741242 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1563741242/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_conc;  // conc
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_stringToConcordance;  // stringToConcordance
  SEXP Rsh_Fir_reg_s1_;  // s1
  SEXP Rsh_Fir_reg_s2_;  // s2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_prev;  // prev
  SEXP Rsh_Fir_reg_prev1_;  // prev1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_conc1_;  // conc1
  SEXP Rsh_Fir_reg_conc2_;  // conc2
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_conc4_;  // conc4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_conc5_;  // conc5
  SEXP Rsh_Fir_reg_conc6_;  // conc6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_conc8_;  // conc8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_rep_len;  // rep_len
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_prev2_;  // prev2
  SEXP Rsh_Fir_reg_prev3_;  // prev3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_prev5_;  // prev5
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_prev6_;  // prev6
  SEXP Rsh_Fir_reg_prev7_;  // prev7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_prev9_;  // prev9
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_dx12_;  // dx12
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx16_;  // dx16
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_l9_;  // l9
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_l11_;  // l11
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_l13_;  // l13
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_prev10_;  // prev10
  SEXP Rsh_Fir_reg_prev11_;  // prev11
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_l15_;  // l15
  SEXP Rsh_Fir_reg_dx32_;  // dx32
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_prev13_;  // prev13
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_l17_;  // l17
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_dx40_;  // dx40
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_l19_;  // l19
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx45_;  // dx45
  SEXP Rsh_Fir_reg_dx47_;  // dx47
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_prev14_;  // prev14
  SEXP Rsh_Fir_reg_prev15_;  // prev15
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_prev17_;  // prev17
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_dx49_;  // dx49
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_l20_;  // l20
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_l23_;  // l23
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_l24_;  // l24
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx56_;  // dx56
  SEXP Rsh_Fir_reg_dx57_;  // dx57
  SEXP Rsh_Fir_reg_l26_;  // l26
  SEXP Rsh_Fir_reg_dx58_;  // dx58
  SEXP Rsh_Fir_reg_dx59_;  // dx59
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx62_;  // dx62
  SEXP Rsh_Fir_reg_l28_;  // l28
  SEXP Rsh_Fir_reg_dx63_;  // dx63
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx65_;  // dx65
  SEXP Rsh_Fir_reg_dx66_;  // dx66
  SEXP Rsh_Fir_reg_l30_;  // l30
  SEXP Rsh_Fir_reg_dx67_;  // dx67
  SEXP Rsh_Fir_reg_prev18_;  // prev18
  SEXP Rsh_Fir_reg_prev19_;  // prev19
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_dx71_;  // dx71
  SEXP Rsh_Fir_reg_l32_;  // l32
  SEXP Rsh_Fir_reg_dx72_;  // dx72
  SEXP Rsh_Fir_reg_dx73_;  // dx73
  SEXP Rsh_Fir_reg_prev21_;  // prev21
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx77_;  // dx77
  SEXP Rsh_Fir_reg_dx78_;  // dx78
  SEXP Rsh_Fir_reg_l34_;  // l34
  SEXP Rsh_Fir_reg_dx79_;  // dx79
  SEXP Rsh_Fir_reg_dx80_;  // dx80
  SEXP Rsh_Fir_reg_dx81_;  // dx81
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_i3_;  // i3
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg____1_;  // ___1
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_dx83_;  // dx83
  SEXP Rsh_Fir_reg_l36_;  // l36
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx85_;  // dx85
  SEXP Rsh_Fir_reg_dx86_;  // dx86
  SEXP Rsh_Fir_reg_dx87_;  // dx87
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_conc9_;  // conc9
  SEXP Rsh_Fir_reg_conc10_;  // conc10

  // Bind parameters
  Rsh_Fir_reg_conc = PARAMS[0];
  Rsh_Fir_reg_s = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st conc = conc
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_conc, RHO);
  (void)(Rsh_Fir_reg_conc);
  // st s = s
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_s, RHO);
  (void)(Rsh_Fir_reg_s);
  // stringToConcordance = ldf stringToConcordance
  Rsh_Fir_reg_stringToConcordance = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L0_:;
  // r4 = `!`(r3)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r4)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c1 then L13() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L13()
    goto L13_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // goto L7()
  // L7()
  goto L7_;

L2_:;
  // l = ld conc
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c4 = `is.object`(l)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c4 then L31() else L32(r6, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L31()
    goto L31_;
  } else {
  // L32(r6, l)
    Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L32_;
  }

L3_:;
  // rep_len = ldf rep_len in base
  Rsh_Fir_reg_rep_len = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r12 = dyn rep_len(dx1, r9)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_len, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L29() else D6()
  // L29()
  goto L29_;

L4_:;
  // st i = r19
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r19_, RHO);
  (void)(Rsh_Fir_reg_r19_);
  // prev6 = ld prev
  Rsh_Fir_reg_prev6_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L41() else D8()
  // L41()
  goto L41_;

L5_:;
  // c10 = `is.object`(l13)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_l13_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c10 then L60() else L61(dx26, l13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L60()
    goto L60_;
  } else {
  // L61(dx26, l13)
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_l13_;
    goto L61_;
  }

L6_:;
  // c15 = `is.object`(l30)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_l30_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c15 then L82() else L83(dx66, l30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L82()
    goto L82_;
  } else {
  // L83(dx66, l30)
    Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx66_;
    Rsh_Fir_reg_l36_ = Rsh_Fir_reg_l30_;
    goto L83_;
  }

L7_:;
  // conc9 = ld conc
  Rsh_Fir_reg_conc9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L86() else D14()
  // L86()
  goto L86_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // p = prom<V +>{
  //   s1 = ld s;
  //   s2 = force? s1;
  //   checkMissing(s2);
  //   return s2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1563741242_, CCP, RHO);
  // r1 = dyn stringToConcordance(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stringToConcordance, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 3 [r1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // st prev = r1
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym = ldf `is.null`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf `is.null` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L10_:;
  // prev = ld prev
  Rsh_Fir_reg_prev = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r2 = dyn base(<sym prev>)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L0_;

D2_:;
  // deopt 6 [prev]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_prev;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // prev1 = force? prev
  Rsh_Fir_reg_prev1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev);
  // checkMissing(prev1)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_prev1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c = `==`(prev1, NULL)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_prev1_;
  Rsh_Fir_array_args11[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // goto L0(c)
  // L0(c)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_c;
  goto L0_;

L13_:;
  // sym1 = ldf rep_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base1 = ldf rep_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard1 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L14_:;
  // conc1 = ld conc
  Rsh_Fir_reg_conc1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L15_:;
  // r5 = dyn base1(<lang `$`(conc, srcFile)>, <lang length(`$`(conc, srcLine))>)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D3_:;
  // deopt 12 [conc1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_conc1_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L16_:;
  // conc2 = force? conc1
  Rsh_Fir_reg_conc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conc1_);
  // checkMissing(conc2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_conc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(conc2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_conc2_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L18() else L19(conc2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L18()
    goto L18_;
  } else {
  // L19(conc2)
    Rsh_Fir_reg_conc4_ = Rsh_Fir_reg_conc2_;
    goto L19_;
  }

L17_:;
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard2 then L21() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L21()
    goto L21_;
  } else {
  // L22()
    goto L22_;
  }

L18_:;
  // dr = tryDispatchBuiltin.1("$", conc2)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_conc2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc then L20() else L19(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr)
    Rsh_Fir_reg_conc4_ = Rsh_Fir_reg_dr;
    goto L19_;
  }

L19_:;
  // r7 = `$`(conc4, <sym srcFile>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_conc4_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L17(r7)
  // L17(r7)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L17_;

L20_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L17(dx)
  // L17(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L17_;

L21_:;
  // conc5 = ld conc
  Rsh_Fir_reg_conc5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L23() else D4()
  // L23()
  goto L23_;

L22_:;
  // r8 = dyn base2(<lang `$`(conc, srcLine)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D4_:;
  // deopt 17 [conc5]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_conc5_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L23_:;
  // conc6 = force? conc5
  Rsh_Fir_reg_conc6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conc5_);
  // checkMissing(conc6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_conc6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(conc6)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_conc6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c3 then L25() else L26(conc6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L25()
    goto L25_;
  } else {
  // L26(conc6)
    Rsh_Fir_reg_conc8_ = Rsh_Fir_reg_conc6_;
    goto L26_;
  }

L24_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r11 = dyn length(dx3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

L25_:;
  // dr2 = tryDispatchBuiltin.1("$", conc6)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_conc6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc1 then L27() else L26(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L27()
    goto L27_;
  } else {
  // L26(dr2)
    Rsh_Fir_reg_conc8_ = Rsh_Fir_reg_dr2_;
    goto L26_;
  }

L26_:;
  // r10 = `$`(conc8, <sym srcLine>)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_conc8_;
  Rsh_Fir_array_args27[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L24(r10)
  // L24(r10)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L24_;

L27_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // goto L24(dx2)
  // L24(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L24_;

D5_:;
  // deopt 21 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r11_;
  goto L3_;

D6_:;
  // deopt 23 [r12]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L2(r12)
  // L2(r12)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r12_;
  goto L2_;

L30_:;
  // st conc = dx5
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // sym3 = ldf seq_along
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base3 = ldf seq_along in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args29);
  // if guard3 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L31_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l, r6)
  SEXP Rsh_Fir_array_args30[3];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args30[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args30);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if dc2 then L33() else L32(r6, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L33()
    goto L33_;
  } else {
  // L32(r6, dr4)
    Rsh_Fir_reg_r14_ = Rsh_Fir_reg_r6_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr4_;
    goto L32_;
  }

L32_:;
  // r17 = `$<-`(l2, <sym srcFile>, r6)
  SEXP Rsh_Fir_array_args32[3];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args32[2] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L30(r17)
  // L30(r17)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r17_;
  goto L30_;

L33_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // goto L30(dx4)
  // L30(dx4)
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L30_;

L34_:;
  // prev2 = ld prev
  Rsh_Fir_reg_prev2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L36() else D7()
  // L36()
  goto L36_;

L35_:;
  // r18 = dyn base3(<lang `$`(prev, srcLine)>)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L4(r18)
  // L4(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L4_;

D7_:;
  // deopt 28 [prev2]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_prev2_;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L36_:;
  // prev3 = force? prev2
  Rsh_Fir_reg_prev3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev2_);
  // checkMissing(prev3)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_prev3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(prev3)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_prev3_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if c5 then L38() else L39(prev3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L38()
    goto L38_;
  } else {
  // L39(prev3)
    Rsh_Fir_reg_prev5_ = Rsh_Fir_reg_prev3_;
    goto L39_;
  }

L37_:;
  // r21 = seq_along(dx7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L4(r21)
  // L4(r21)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r21_;
  goto L4_;

L38_:;
  // dr6 = tryDispatchBuiltin.1("$", prev3)
  SEXP Rsh_Fir_array_args38[2];
  Rsh_Fir_array_args38[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args38[1] = Rsh_Fir_reg_prev3_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args38);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // if dc3 then L40() else L39(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L40()
    goto L40_;
  } else {
  // L39(dr6)
    Rsh_Fir_reg_prev5_ = Rsh_Fir_reg_dr6_;
    goto L39_;
  }

L39_:;
  // r20 = `$`(prev5, <sym srcLine>)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_prev5_;
  Rsh_Fir_array_args40[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L37(r20)
  // L37(r20)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r20_;
  goto L37_;

L40_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L37(dx6)
  // L37(dx6)
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L37_;

D8_:;
  // deopt 33 [prev6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_prev6_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L41_:;
  // prev7 = force? prev6
  Rsh_Fir_reg_prev7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev6_);
  // checkMissing(prev7)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_prev7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(prev7)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_prev7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c6 then L43() else L44(prev7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L43()
    goto L43_;
  } else {
  // L44(prev7)
    Rsh_Fir_reg_prev9_ = Rsh_Fir_reg_prev7_;
    goto L44_;
  }

L42_:;
  // l3 = ld conc
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c7 = `is.object`(l3)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c7 then L47() else L48(dx9, l3, dx9, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L47()
    goto L47_;
  } else {
  // L48(dx9, l3, dx9, l3)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l3_;
    goto L48_;
  }

L43_:;
  // dr8 = tryDispatchBuiltin.1("$", prev7)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_prev7_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc4 then L45() else L44(dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L45()
    goto L45_;
  } else {
  // L44(dr8)
    Rsh_Fir_reg_prev9_ = Rsh_Fir_reg_dr8_;
    goto L44_;
  }

L44_:;
  // r22 = `$`(prev9, <sym srcFile>)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_prev9_;
  Rsh_Fir_array_args47[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L42(r22)
  // L42(r22)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r22_;
  goto L42_;

L45_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L42(dx8)
  // L42(dx8)
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L42_;

L46_:;
  // c8 = `is.object`(dx19)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c8 then L50() else L51(dx17, l9, dx19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L50()
    goto L50_;
  } else {
  // L51(dx17, l9, dx19)
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx19_;
    goto L51_;
  }

L47_:;
  // dr10 = tryDispatchBuiltin.1("$", l3)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc5 then L49() else L48(dx9, l3, dx9, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L49()
    goto L49_;
  } else {
  // L48(dx9, l3, dx9, dr10)
    Rsh_Fir_reg_dx12_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_dx13_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_l7_ = Rsh_Fir_reg_dr10_;
    goto L48_;
  }

L48_:;
  // r23 = `$`(l7, <sym srcFile>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L46(dx12, l6, dx13, r23)
  // L46(dx12, l6, dx13, r23)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx12_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx13_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r23_;
  goto L46_;

L49_:;
  // dx16 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx16_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L46(dx9, l3, dx9, dx16)
  // L46(dx9, l3, dx9, dx16)
  Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_l9_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx16_;
  goto L46_;

L50_:;
  // dr12 = tryDispatchBuiltin.0("[<-", dx19, dx18)
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_dx19_;
  Rsh_Fir_array_args54[2] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args54);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc6 then L52() else L51(dx17, l9, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L52()
    goto L52_;
  } else {
  // L51(dx17, l9, dr12)
    Rsh_Fir_reg_dx22_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_l11_ = Rsh_Fir_reg_l9_;
    Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dr12_;
    goto L51_;
  }

L51_:;
  // prev10 = ld prev
  Rsh_Fir_reg_prev10_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L53() else D9()
  // L53()
  goto L53_;

L52_:;
  // dx25 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // goto L5(dx17, l9, dx25)
  // L5(dx17, l9, dx25)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l9_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx25_;
  goto L5_;

D9_:;
  // deopt 40 [dx22, l11, dx23, dx18, prev10]
  SEXP Rsh_Fir_array_deopt_stack8[5];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_dx22_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_l11_;
  Rsh_Fir_array_deopt_stack8[2] = Rsh_Fir_reg_dx23_;
  Rsh_Fir_array_deopt_stack8[3] = Rsh_Fir_reg_dx18_;
  Rsh_Fir_array_deopt_stack8[4] = Rsh_Fir_reg_prev10_;
  Rsh_Fir_deopt(40, 5, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L53_:;
  // prev11 = force? prev10
  Rsh_Fir_reg_prev11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev10_);
  // checkMissing(prev11)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_prev11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // c9 = `is.object`(prev11)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_prev11_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c9 then L55() else L56(dx22, l11, dx23, dx18, prev11)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L55()
    goto L55_;
  } else {
  // L56(dx22, l11, dx23, dx18, prev11)
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx22_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l11_;
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx18_;
    Rsh_Fir_reg_prev13_ = Rsh_Fir_reg_prev11_;
    goto L56_;
  }

L54_:;
  // i = ld i
  Rsh_Fir_reg_i = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

L55_:;
  // dr14 = tryDispatchBuiltin.1("$", prev11)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_prev11_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args59);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // if dc7 then L57() else L56(dx22, l11, dx23, dx18, dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L57()
    goto L57_;
  } else {
  // L56(dx22, l11, dx23, dx18, dr14)
    Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx22_;
    Rsh_Fir_reg_l15_ = Rsh_Fir_reg_l11_;
    Rsh_Fir_reg_dx32_ = Rsh_Fir_reg_dx23_;
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx18_;
    Rsh_Fir_reg_prev13_ = Rsh_Fir_reg_dr14_;
    goto L56_;
  }

L56_:;
  // r24 = `$`(prev13, <sym offset>)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_prev13_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // goto L54(dx31, l15, dx32, dx33, r24)
  // L54(dx31, l15, dx32, dx33, r24)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx31_;
  Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l15_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx32_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_r24_;
  goto L54_;

L57_:;
  // dx37 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L54(dx22, l11, dx23, dx18, dx37)
  // L54(dx22, l11, dx23, dx18, dx37)
  Rsh_Fir_reg_dx38_ = Rsh_Fir_reg_dx22_;
  Rsh_Fir_reg_l17_ = Rsh_Fir_reg_l11_;
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx23_;
  Rsh_Fir_reg_dx40_ = Rsh_Fir_reg_dx18_;
  Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx37_;
  goto L54_;

D10_:;
  // deopt 42 [dx38, l17, dx39, dx40, dx41, i]
  SEXP Rsh_Fir_array_deopt_stack9[6];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_dx38_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_l17_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_deopt_stack9[3] = Rsh_Fir_reg_dx40_;
  Rsh_Fir_array_deopt_stack9[4] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_deopt_stack9[5] = Rsh_Fir_reg_i;
  Rsh_Fir_deopt(42, 6, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L58_:;
  // i1 = force? i
  Rsh_Fir_reg_i1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i);
  // checkMissing(i1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_i1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // r25 = `+`(dx41, i1)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dx41_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_i1_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r26 = dyn ___(dx39, dx40, r25)
  SEXP Rsh_Fir_array_args65[3];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_dx40_;
  Rsh_Fir_array_args65[2] = Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(dx38, l17, r26)
  // L5(dx38, l17, r26)
  Rsh_Fir_reg_dx26_ = Rsh_Fir_reg_dx38_;
  Rsh_Fir_reg_l13_ = Rsh_Fir_reg_l17_;
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r26_;
  goto L5_;

L59_:;
  // st conc = dx47
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx47_, RHO);
  (void)(Rsh_Fir_reg_dx47_);
  // prev14 = ld prev
  Rsh_Fir_reg_prev14_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L63() else D11()
  // L63()
  goto L63_;

L60_:;
  // dr16 = tryDispatchBuiltin.0("$<-", l13, dx27)
  SEXP Rsh_Fir_array_args66[3];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_l13_;
  Rsh_Fir_array_args66[2] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args66);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // if dc8 then L62() else L61(dx26, dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L62()
    goto L62_;
  } else {
  // L61(dx26, dr16)
    Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx26_;
    Rsh_Fir_reg_l19_ = Rsh_Fir_reg_dr16_;
    goto L61_;
  }

L61_:;
  // r27 = `$<-`(l19, <sym srcFile>, dx27)
  SEXP Rsh_Fir_array_args68[3];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_l19_;
  Rsh_Fir_array_args68[1] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args68[2] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L59(r27)
  // L59(r27)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_r27_;
  goto L59_;

L62_:;
  // dx45 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx45_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L59(dx45)
  // L59(dx45)
  Rsh_Fir_reg_dx47_ = Rsh_Fir_reg_dx45_;
  goto L59_;

D11_:;
  // deopt 48 [prev14]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_prev14_;
  Rsh_Fir_deopt(48, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L63_:;
  // prev15 = force? prev14
  Rsh_Fir_reg_prev15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev14_);
  // checkMissing(prev15)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_prev15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(prev15)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_prev15_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty());
  // if c11 then L65() else L66(prev15)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L65()
    goto L65_;
  } else {
  // L66(prev15)
    Rsh_Fir_reg_prev17_ = Rsh_Fir_reg_prev15_;
    goto L66_;
  }

L64_:;
  // l20 = ld conc
  Rsh_Fir_reg_l20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // c12 = `is.object`(l20)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // if c12 then L69() else L70(dx49, l20, dx49, l20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L69()
    goto L69_;
  } else {
  // L70(dx49, l20, dx49, l20)
    Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx49_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l20_;
    Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx49_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_l20_;
    goto L70_;
  }

L65_:;
  // dr18 = tryDispatchBuiltin.1("$", prev15)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_prev15_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args73);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if dc9 then L67() else L66(dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L67()
    goto L67_;
  } else {
  // L66(dr18)
    Rsh_Fir_reg_prev17_ = Rsh_Fir_reg_dr18_;
    goto L66_;
  }

L66_:;
  // r28 = `$`(prev17, <sym srcLine>)
  SEXP Rsh_Fir_array_args75[2];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_prev17_;
  Rsh_Fir_array_args75[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty());
  // goto L64(r28)
  // L64(r28)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_r28_;
  goto L64_;

L67_:;
  // dx48 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx48_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // goto L64(dx48)
  // L64(dx48)
  Rsh_Fir_reg_dx49_ = Rsh_Fir_reg_dx48_;
  goto L64_;

L68_:;
  // c13 = `is.object`(dx59)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_dx59_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // if c13 then L72() else L73(dx57, l26, dx59)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L72()
    goto L72_;
  } else {
  // L73(dx57, l26, dx59)
    Rsh_Fir_reg_dx62_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l26_;
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dx59_;
    goto L73_;
  }

L69_:;
  // dr20 = tryDispatchBuiltin.1("$", l20)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args78);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // if dc10 then L71() else L70(dx49, l20, dx49, dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L71()
    goto L71_;
  } else {
  // L70(dx49, l20, dx49, dr20)
    Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx49_;
    Rsh_Fir_reg_l23_ = Rsh_Fir_reg_l20_;
    Rsh_Fir_reg_dx53_ = Rsh_Fir_reg_dx49_;
    Rsh_Fir_reg_l24_ = Rsh_Fir_reg_dr20_;
    goto L70_;
  }

L70_:;
  // r29 = `$`(l24, <sym srcLine>)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_l24_;
  Rsh_Fir_array_args80[1] = Rsh_const(CCP, 15);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L68(dx52, l23, dx53, r29)
  // L68(dx52, l23, dx53, r29)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx52_;
  Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l23_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_reg_dx53_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_r29_;
  goto L68_;

L71_:;
  // dx56 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx56_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty());
  // goto L68(dx49, l20, dx49, dx56)
  // L68(dx49, l20, dx49, dx56)
  Rsh_Fir_reg_dx57_ = Rsh_Fir_reg_dx49_;
  Rsh_Fir_reg_l26_ = Rsh_Fir_reg_l20_;
  Rsh_Fir_reg_dx58_ = Rsh_Fir_reg_dx49_;
  Rsh_Fir_reg_dx59_ = Rsh_Fir_reg_dx56_;
  goto L68_;

L72_:;
  // dr22 = tryDispatchBuiltin.0("[<-", dx59, dx58)
  SEXP Rsh_Fir_array_args82[3];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_dx59_;
  Rsh_Fir_array_args82[2] = Rsh_Fir_reg_dx58_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args82);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if dc11 then L74() else L73(dx57, l26, dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L74()
    goto L74_;
  } else {
  // L73(dx57, l26, dr22)
    Rsh_Fir_reg_dx62_ = Rsh_Fir_reg_dx57_;
    Rsh_Fir_reg_l28_ = Rsh_Fir_reg_l26_;
    Rsh_Fir_reg_dx63_ = Rsh_Fir_reg_dr22_;
    goto L73_;
  }

L73_:;
  // prev18 = ld prev
  Rsh_Fir_reg_prev18_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L75() else D12()
  // L75()
  goto L75_;

L74_:;
  // dx65 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx65_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // goto L6(dx57, l26, dx65)
  // L6(dx57, l26, dx65)
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_dx57_;
  Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l26_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_dx65_;
  goto L6_;

D12_:;
  // deopt 55 [dx62, l28, dx63, dx58, prev18]
  SEXP Rsh_Fir_array_deopt_stack11[5];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_dx62_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_l28_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_dx63_;
  Rsh_Fir_array_deopt_stack11[3] = Rsh_Fir_reg_dx58_;
  Rsh_Fir_array_deopt_stack11[4] = Rsh_Fir_reg_prev18_;
  Rsh_Fir_deopt(55, 5, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L75_:;
  // prev19 = force? prev18
  Rsh_Fir_reg_prev19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_prev18_);
  // checkMissing(prev19)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_prev19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // c14 = `is.object`(prev19)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_prev19_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // if c14 then L77() else L78(dx62, l28, dx63, dx58, prev19)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L77()
    goto L77_;
  } else {
  // L78(dx62, l28, dx63, dx58, prev19)
    Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_dx62_;
    Rsh_Fir_reg_l32_ = Rsh_Fir_reg_l28_;
    Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_dx63_;
    Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx58_;
    Rsh_Fir_reg_prev21_ = Rsh_Fir_reg_prev19_;
    goto L78_;
  }

L76_:;
  // i2 = ld i
  Rsh_Fir_reg_i2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L80() else D13()
  // L80()
  goto L80_;

L77_:;
  // dr24 = tryDispatchBuiltin.1("$", prev19)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args87[1] = Rsh_Fir_reg_prev19_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args87);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty());
  // if dc12 then L79() else L78(dx62, l28, dx63, dx58, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L79()
    goto L79_;
  } else {
  // L78(dx62, l28, dx63, dx58, dr24)
    Rsh_Fir_reg_dx71_ = Rsh_Fir_reg_dx62_;
    Rsh_Fir_reg_l32_ = Rsh_Fir_reg_l28_;
    Rsh_Fir_reg_dx72_ = Rsh_Fir_reg_dx63_;
    Rsh_Fir_reg_dx73_ = Rsh_Fir_reg_dx58_;
    Rsh_Fir_reg_prev21_ = Rsh_Fir_reg_dr24_;
    goto L78_;
  }

L78_:;
  // r30 = `$`(prev21, <sym offset>)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_prev21_;
  Rsh_Fir_array_args89[1] = Rsh_const(CCP, 20);
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty());
  // goto L76(dx71, l32, dx72, dx73, r30)
  // L76(dx71, l32, dx72, dx73, r30)
  Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_dx71_;
  Rsh_Fir_reg_l34_ = Rsh_Fir_reg_l32_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_dx72_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx73_;
  Rsh_Fir_reg_dx81_ = Rsh_Fir_reg_r30_;
  goto L76_;

L79_:;
  // dx77 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx77_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty());
  // goto L76(dx62, l28, dx63, dx58, dx77)
  // L76(dx62, l28, dx63, dx58, dx77)
  Rsh_Fir_reg_dx78_ = Rsh_Fir_reg_dx62_;
  Rsh_Fir_reg_l34_ = Rsh_Fir_reg_l28_;
  Rsh_Fir_reg_dx79_ = Rsh_Fir_reg_dx63_;
  Rsh_Fir_reg_dx80_ = Rsh_Fir_reg_dx58_;
  Rsh_Fir_reg_dx81_ = Rsh_Fir_reg_dx77_;
  goto L76_;

D13_:;
  // deopt 57 [dx78, l34, dx79, dx80, dx81, i2]
  SEXP Rsh_Fir_array_deopt_stack12[6];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_dx78_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_l34_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_dx79_;
  Rsh_Fir_array_deopt_stack12[3] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_array_deopt_stack12[4] = Rsh_Fir_reg_dx81_;
  Rsh_Fir_array_deopt_stack12[5] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(57, 6, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L80_:;
  // i3 = force? i2
  Rsh_Fir_reg_i3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i2_);
  // checkMissing(i3)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_i3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r31 = `+`(dx81, i3)
  SEXP Rsh_Fir_array_args92[2];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_dx81_;
  Rsh_Fir_array_args92[1] = Rsh_Fir_reg_i3_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty());
  // ___1 = ldf `[<-` in base
  Rsh_Fir_reg____1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // r32 = dyn ___1(dx79, dx80, r31)
  SEXP Rsh_Fir_array_args93[3];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_dx79_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_dx80_;
  Rsh_Fir_array_args93[2] = Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____1_, 3, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(dx78, l34, r32)
  // L6(dx78, l34, r32)
  Rsh_Fir_reg_dx66_ = Rsh_Fir_reg_dx78_;
  Rsh_Fir_reg_l30_ = Rsh_Fir_reg_l34_;
  Rsh_Fir_reg_dx67_ = Rsh_Fir_reg_r32_;
  goto L6_;

L81_:;
  // st conc = dx87
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_dx87_, RHO);
  (void)(Rsh_Fir_reg_dx87_);
  // goto L7()
  // L7()
  goto L7_;

L82_:;
  // dr26 = tryDispatchBuiltin.0("$<-", l30, dx67)
  SEXP Rsh_Fir_array_args94[3];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 17);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_l30_;
  Rsh_Fir_array_args94[2] = Rsh_Fir_reg_dx67_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args94);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty());
  // if dc13 then L84() else L83(dx66, dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L84()
    goto L84_;
  } else {
  // L83(dx66, dr26)
    Rsh_Fir_reg_dx83_ = Rsh_Fir_reg_dx66_;
    Rsh_Fir_reg_l36_ = Rsh_Fir_reg_dr26_;
    goto L83_;
  }

L83_:;
  // r33 = `$<-`(l36, <sym srcLine>, dx67)
  SEXP Rsh_Fir_array_args96[3];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_l36_;
  Rsh_Fir_array_args96[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args96[2] = Rsh_Fir_reg_dx67_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty());
  // goto L81(dx83, r33)
  // L81(dx83, r33)
  Rsh_Fir_reg_dx86_ = Rsh_Fir_reg_dx83_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_r33_;
  goto L81_;

L84_:;
  // dx85 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx85_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty());
  // goto L81(dx66, dx85)
  // L81(dx66, dx85)
  Rsh_Fir_reg_dx86_ = Rsh_Fir_reg_dx66_;
  Rsh_Fir_reg_dx87_ = Rsh_Fir_reg_dx85_;
  goto L81_;

D14_:;
  // deopt 65 [conc9]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_conc9_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L86_:;
  // conc10 = force? conc9
  Rsh_Fir_reg_conc10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_conc9_);
  // checkMissing(conc10)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_conc10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return conc10
  return Rsh_Fir_reg_conc10_;
}
SEXP Rsh_Fir_user_promise_inner1563741242_(SEXP CCP, SEXP RHO) {
  // s1 = ld s
  Rsh_Fir_reg_s1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // s2 = force? s1
  Rsh_Fir_reg_s2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_s1_);
  // checkMissing(s2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_s2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return s2
  return Rsh_Fir_reg_s2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
