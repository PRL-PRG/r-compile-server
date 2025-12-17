#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1183323468_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1183323468_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1183323468_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1183323468_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1183323468_2(SEXP CCP, SEXP RHO);
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
  // r = clos inner1183323468
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1183323468_, RHO, CCP);
  // st rsmirnov = r
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
SEXP Rsh_Fir_user_function_inner1183323468_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1183323468 dynamic dispatch ([n, sizes, z, alternative])

  return Rsh_Fir_user_version_inner1183323468_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1183323468_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1183323468 version 0 (*, *, *, * -+> V)

  if (NPARAMS != 4) Rsh_error("FIŘ arity mismatch for inner1183323468/0: expected 4, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_n;  // n
  SEXP Rsh_Fir_reg_sizes;  // sizes
  SEXP Rsh_Fir_reg_z;  // z
  SEXP Rsh_Fir_reg_alternative;  // alternative
  SEXP Rsh_Fir_reg_z_isMissing;  // z_isMissing
  SEXP Rsh_Fir_reg_z_orDefault;  // z_orDefault
  SEXP Rsh_Fir_reg_alternative_isMissing;  // alternative_isMissing
  SEXP Rsh_Fir_reg_alternative_orDefault;  // alternative_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_alternative1_;  // alternative1
  SEXP Rsh_Fir_reg_alternative2_;  // alternative2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_n1_;  // n1
  SEXP Rsh_Fir_reg_n2_;  // n2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_n3_;  // n3
  SEXP Rsh_Fir_reg_n4_;  // n4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_numeric;  // numeric
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_n5_;  // n5
  SEXP Rsh_Fir_reg_n6_;  // n6
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_stop;  // stop
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_n7_;  // n7
  SEXP Rsh_Fir_reg_n8_;  // n8
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sizes1_;  // sizes1
  SEXP Rsh_Fir_reg_sizes2_;  // sizes2
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_stop1_;  // stop1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_sizes3_;  // sizes3
  SEXP Rsh_Fir_reg_sizes4_;  // sizes4
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sizes6_;  // sizes6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sizes7_;  // sizes7
  SEXP Rsh_Fir_reg_sizes8_;  // sizes8
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_sizes10_;  // sizes10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_n_x;  // n_x
  SEXP Rsh_Fir_reg_n_x1_;  // n_x1
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_stop2_;  // stop2
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_n_y;  // n_y
  SEXP Rsh_Fir_reg_n_y1_;  // n_y1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_stop3_;  // stop3
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_n_x2_;  // n_x2
  SEXP Rsh_Fir_reg_n_x3_;  // n_x3
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_n_y2_;  // n_y2
  SEXP Rsh_Fir_reg_n_y3_;  // n_y3
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_z1_;  // z1
  SEXP Rsh_Fir_reg_z2_;  // z2
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_n_x4_;  // n_x4
  SEXP Rsh_Fir_reg_n_x5_;  // n_x5
  SEXP Rsh_Fir_reg_n_y4_;  // n_y4
  SEXP Rsh_Fir_reg_n_y5_;  // n_y5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_table;  // table
  SEXP Rsh_Fir_reg_z3_;  // z3
  SEXP Rsh_Fir_reg_z4_;  // z4
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_alternative3_;  // alternative3
  SEXP Rsh_Fir_reg_alternative4_;  // alternative4
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_alternative5_;  // alternative5
  SEXP Rsh_Fir_reg_alternative6_;  // alternative6
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_n_y6_;  // n_y6
  SEXP Rsh_Fir_reg_n_y7_;  // n_y7
  SEXP Rsh_Fir_reg_n_x6_;  // n_x6
  SEXP Rsh_Fir_reg_n_x7_;  // n_x7
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_n_x8_;  // n_x8
  SEXP Rsh_Fir_reg_n_x9_;  // n_x9
  SEXP Rsh_Fir_reg_n_y8_;  // n_y8
  SEXP Rsh_Fir_reg_n_y9_;  // n_y9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_C_Smirnov_sim;  // C_Smirnov_sim
  SEXP Rsh_Fir_reg_C_Smirnov_sim1_;  // C_Smirnov_sim1
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r59_;  // r59
  SEXP Rsh_Fir_reg_C_Smirnov_sim4_;  // C_Smirnov_sim4
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_rt;  // rt
  SEXP Rsh_Fir_reg_rt1_;  // rt1
  SEXP Rsh_Fir_reg_as_integer;  // as_integer
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r64_;  // r64
  SEXP Rsh_Fir_reg_C_Smirnov_sim7_;  // C_Smirnov_sim7
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_sizes11_;  // sizes11
  SEXP Rsh_Fir_reg_sizes12_;  // sizes12
  SEXP Rsh_Fir_reg_as_integer1_;  // as_integer1
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_C_Smirnov_sim10_;  // C_Smirnov_sim10
  SEXP Rsh_Fir_reg_r73_;  // r73
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_n9_;  // n9
  SEXP Rsh_Fir_reg_n10_;  // n10
  SEXP Rsh_Fir_reg_as_integer2_;  // as_integer2
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_C_Smirnov_sim13_;  // C_Smirnov_sim13
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_r85_;  // r85
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_r87_;  // r87
  SEXP Rsh_Fir_reg_two_sided;  // two_sided
  SEXP Rsh_Fir_reg_two_sided1_;  // two_sided1
  SEXP Rsh_Fir_reg_as_integer3_;  // as_integer3
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_vargs;  // vargs
  SEXP Rsh_Fir_reg_r89_;  // r89

  // Bind parameters
  Rsh_Fir_reg_n = PARAMS[0];
  Rsh_Fir_reg_sizes = PARAMS[1];
  Rsh_Fir_reg_z = PARAMS[2];
  Rsh_Fir_reg_alternative = PARAMS[3];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st n = n
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_n, RHO);
  (void)(Rsh_Fir_reg_n);
  // st sizes = sizes
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_sizes, RHO);
  (void)(Rsh_Fir_reg_sizes);
  // z_isMissing = missing.0(z)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_z;
  Rsh_Fir_reg_z_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if z_isMissing then L0(NULL) else L0(z)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_z_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_z_orDefault = Rsh_const(CCP, 3);
    goto L0_;
  } else {
  // L0(z)
    Rsh_Fir_reg_z_orDefault = Rsh_Fir_reg_z;
    goto L0_;
  }

L0_:;
  // st z = z_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_z_orDefault, RHO);
  (void)(Rsh_Fir_reg_z_orDefault);
  // alternative_isMissing = missing.0(alternative)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_alternative;
  Rsh_Fir_reg_alternative_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if alternative_isMissing then L1() else L2(alternative)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_alternative_isMissing)) {
  // L1()
    goto L1_;
  } else {
  // L2(alternative)
    Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_alternative;
    goto L2_;
  }

L1_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("two.sided", "less", "greater");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("two.sided", "less", "greater");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183323468_, CCP, RHO);
  // goto L2(p)
  // L2(p)
  Rsh_Fir_reg_alternative_orDefault = Rsh_Fir_reg_p;
  goto L2_;

L2_:;
  // st alternative = alternative_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_alternative_orDefault, RHO);
  (void)(Rsh_Fir_reg_alternative_orDefault);
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L33() else D0()
  // L33()
  goto L33_;

L3_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c1 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L4(c1) else L39()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L4(c1)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c1_;
    goto L4_;
  } else {
  // L39()
    goto L39_;
  }

L4_:;
  // c7 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if c7 then L42() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L42()
    goto L42_;
  } else {
  // L5()
    goto L5_;
  }

L5_:;
  // n5 = ld n
  Rsh_Fir_reg_n5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D7()
  // L47()
  goto L47_;

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym2 = ldf floor
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base2 = ldf floor in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard2 then L52() else L53()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L52()
    goto L52_;
  } else {
  // L53()
    goto L53_;
  }

L9_:;
  // st n = r18
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // sym3 = ldf length
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base3 = ldf length in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L55() else L56()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L55()
    goto L55_;
  } else {
  // L56()
    goto L56_;
  }

L10_:;
  // r23 = `!=`(r21, 2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r23)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c9 then L59() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L59()
    goto L59_;
  } else {
  // L11()
    goto L11_;
  }

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // sizes3 = ld sizes
  Rsh_Fir_reg_sizes3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L63() else D15()
  // L63()
  goto L63_;

L13_:;
  // st `n.x` = dx1
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // sizes7 = ld sizes
  Rsh_Fir_reg_sizes7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L67() else D16()
  // L67()
  goto L67_;

L14_:;
  // st `n.y` = dx3
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // n_x = ld `n.x`
  Rsh_Fir_reg_n_x = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L71() else D17()
  // L71()
  goto L71_;

L15_:;
  // goto L16()
  // L16()
  goto L16_;

L16_:;
  // n_y = ld `n.y`
  Rsh_Fir_reg_n_y = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L76() else D20()
  // L76()
  goto L76_;

L17_:;
  // goto L18()
  // L18()
  goto L18_;

L18_:;
  // sym4 = ldf floor
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base4 = ldf floor in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard4 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L19_:;
  // st `n.x` = r35
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // sym5 = ldf floor
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base5 = ldf floor in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard5 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L20_:;
  // st `n.y` = r38
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // sym6 = ldf `is.null`
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base6 = ldf `is.null` in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard6 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L21_:;
  // c15 = `as.logical`(r41)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r41_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c15 then L90() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L90()
    goto L90_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // table = ldf table
  Rsh_Fir_reg_table = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L97() else D29()
  // L97()
  goto L97_;

L23_:;
  // goto L24(r43)
  // L24(r43)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r43_;
  goto L24_;

L24_:;
  // st rt = r46
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r46_, RHO);
  (void)(Rsh_Fir_reg_r46_);
  // alternative3 = ld alternative
  Rsh_Fir_reg_alternative3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L99() else D31()
  // L99()
  goto L99_;

L25_:;
  // sym9 = ldf c
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base9 = ldf c in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard9 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L26_:;
  // goto L27(r52)
  // L27(r52)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r52_;
  goto L27_;

L27_:;
  // st sizes = r54
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r54_, RHO);
  (void)(Rsh_Fir_reg_r54_);
  // sym10 = ldf `.Call`
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base10 = ldf `.Call` in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard10 then L113() else L114()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L113()
    goto L113_;
  } else {
  // L114()
    goto L114_;
  }

L28_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r58
  return Rsh_Fir_reg_r58_;

L29_:;
  // sym12 = ldf `as.integer`
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base12 = ldf `as.integer` in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard12 then L120() else L121()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L120()
    goto L120_;
  } else {
  // L121()
    goto L121_;
  }

L30_:;
  // sym13 = ldf `as.integer`
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base13 = ldf `as.integer` in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard13 then L124() else L125()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L124()
    goto L124_;
  } else {
  // L125()
    goto L125_;
  }

L31_:;
  // sym14 = ldf `as.integer`
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base14 = ldf `as.integer` in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard14 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L32_:;
  // vargs = dots[r84, r85, r86, r87]
  SEXP Rsh_Fir_array_vector_values[4];
  Rsh_Fir_array_vector_values[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_array_vector_values[1] = Rsh_Fir_reg_r85_;
  Rsh_Fir_array_vector_values[2] = Rsh_Fir_reg_r86_;
  Rsh_Fir_array_vector_values[3] = Rsh_Fir_reg_r87_;
  SEXP Rsh_Fir_array_vector_names[4];
  Rsh_Fir_array_vector_names[0] = R_MissingArg;
  Rsh_Fir_array_vector_names[1] = R_MissingArg;
  Rsh_Fir_array_vector_names[2] = R_MissingArg;
  Rsh_Fir_array_vector_names[3] = R_MissingArg;
  Rsh_Fir_reg_vargs = Rsh_Fir_mk_vector(Rsh_Fir_kind_dots, 4, Rsh_Fir_array_vector_values, NULL);
  // r89 = `.Call`(C_Smirnov_sim13, vargs, <missing>)
  SEXP Rsh_Fir_array_args21[3];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_C_Smirnov_sim13_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_vargs;
  Rsh_Fir_array_args21[2] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r89_ = Rsh_Fir_call_builtin(438, CCP, RHO, 3, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L28(r89)
  // L28(r89)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r89_;
  goto L28_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p1 = prom<V +>{
  //   alternative1 = ld alternative;
  //   alternative2 = force? alternative1;
  //   checkMissing(alternative2);
  //   return alternative2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183323468_1, CCP, RHO);
  // r5 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L34() else D1()
  // L34()
  goto L34_;

D1_:;
  // deopt 3 [r5]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L34_:;
  // st alternative = r5
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard1 then L35() else L36()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L35()
    goto L35_;
  } else {
  // L36()
    goto L36_;
  }

L35_:;
  // n1 = ld n
  Rsh_Fir_reg_n1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L37() else D2()
  // L37()
  goto L37_;

L36_:;
  // r6 = dyn base1(<sym n>)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L3(r6)
  // L3(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L3_;

D2_:;
  // deopt 7 [n1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_n1_;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L37_:;
  // n2 = force? n1
  Rsh_Fir_reg_n2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n1_);
  // checkMissing(n2)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_n2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r8 = dyn length(n2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_n2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L38() else D3()
  // L38()
  goto L38_;

D3_:;
  // deopt 10 [r8]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L38_:;
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L3_;

L39_:;
  // n3 = ld n
  Rsh_Fir_reg_n3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L40() else D4()
  // L40()
  goto L40_;

D4_:;
  // deopt 12 [c1, n3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_n3_;
  Rsh_Fir_deopt(12, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L40_:;
  // n4 = force? n3
  Rsh_Fir_reg_n4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n3_);
  // checkMissing(n4)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_n4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // r10 = `==`(n4, 0)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_n4_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 22);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r10)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // c5 = `||`(c1, c4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_c4_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // goto L4(c5)
  // L4(c5)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c5_;
  goto L4_;

L42_:;
  // numeric = ldf numeric
  Rsh_Fir_reg_numeric = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // check L43() else D5()
  // L43()
  goto L43_;

D5_:;
  // deopt 18 []
  Rsh_Fir_deopt(18, 0, NULL, CCP, RHO);
  return R_NilValue;

L43_:;
  // r11 = dyn numeric(0)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_numeric, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L44() else D6()
  // L44()
  goto L44_;

D6_:;
  // deopt 20 [r11]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L44_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r11
  return Rsh_Fir_reg_r11_;

D7_:;
  // deopt 24 [n5]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_n5_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L47_:;
  // n6 = force? n5
  Rsh_Fir_reg_n6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n5_);
  // checkMissing(n6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_n6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // r14 = `<`(n6, 0.0)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_n6_;
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 24);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c8 then L48() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L48()
    goto L48_;
  } else {
  // L7()
    goto L7_;
  }

L48_:;
  // stop = ldf stop
  Rsh_Fir_reg_stop = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L49() else D8()
  // L49()
  goto L49_;

D8_:;
  // deopt 29 []
  Rsh_Fir_deopt(29, 0, NULL, CCP, RHO);
  return R_NilValue;

L49_:;
  // r15 = dyn stop("invalid arguments")
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L50() else D9()
  // L50()
  goto L50_;

D9_:;
  // deopt 31 [r15]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L8()
  // L8()
  goto L8_;

L52_:;
  // n7 = ld n
  Rsh_Fir_reg_n7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L54() else D10()
  // L54()
  goto L54_;

L53_:;
  // r17 = dyn base2(<sym n>)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L9(r17)
  // L9(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L9_;

D10_:;
  // deopt 35 [n7]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_n7_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L54_:;
  // n8 = force? n7
  Rsh_Fir_reg_n8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n7_);
  // checkMissing(n8)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_n8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // r19 = floor(n8)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_n8_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L9(r19)
  // L9(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L9_;

L55_:;
  // sizes1 = ld sizes
  Rsh_Fir_reg_sizes1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L57() else D11()
  // L57()
  goto L57_;

L56_:;
  // r20 = dyn base3(<sym sizes>)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L10(r20)
  // L10(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L10_;

D11_:;
  // deopt 41 [sizes1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_sizes1_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L57_:;
  // sizes2 = force? sizes1
  Rsh_Fir_reg_sizes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes1_);
  // checkMissing(sizes2)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sizes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // r22 = dyn length1(sizes2)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sizes2_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L58() else D12()
  // L58()
  goto L58_;

D12_:;
  // deopt 44 [r22]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r22_;
  Rsh_Fir_deopt(44, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L58_:;
  // goto L10(r22)
  // L10(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L10_;

L59_:;
  // stop1 = ldf stop
  Rsh_Fir_reg_stop1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L60() else D13()
  // L60()
  goto L60_;

D13_:;
  // deopt 48 []
  Rsh_Fir_deopt(48, 0, NULL, CCP, RHO);
  return R_NilValue;

L60_:;
  // r24 = dyn stop1("argument 'sizes' must be a vector of length 2")
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_const(CCP, 27);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop1_, 1, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

D14_:;
  // deopt 50 [r24]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L61_:;
  // goto L12()
  // L12()
  goto L12_;

D15_:;
  // deopt 53 [sizes3]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_sizes3_;
  Rsh_Fir_deopt(53, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L63_:;
  // sizes4 = force? sizes3
  Rsh_Fir_reg_sizes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes3_);
  // checkMissing(sizes4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_sizes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(sizes4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sizes4_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c10 then L64() else L65(sizes4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L64()
    goto L64_;
  } else {
  // L65(sizes4)
    Rsh_Fir_reg_sizes6_ = Rsh_Fir_reg_sizes4_;
    goto L65_;
  }

L64_:;
  // dr = tryDispatchBuiltin.1("[", sizes4)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_sizes4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args46);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc then L66() else L65(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L66()
    goto L66_;
  } else {
  // L65(dr)
    Rsh_Fir_reg_sizes6_ = Rsh_Fir_reg_dr;
    goto L65_;
  }

L65_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r26 = dyn __(sizes6, 1)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_sizes6_;
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 30);
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L13(r26)
  // L13(r26)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r26_;
  goto L13_;

L66_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // goto L13(dx)
  // L13(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L13_;

D16_:;
  // deopt 59 [sizes7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_sizes7_;
  Rsh_Fir_deopt(59, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L67_:;
  // sizes8 = force? sizes7
  Rsh_Fir_reg_sizes8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes7_);
  // checkMissing(sizes8)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_sizes8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(sizes8)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_sizes8_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if c11 then L68() else L69(sizes8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L68()
    goto L68_;
  } else {
  // L69(sizes8)
    Rsh_Fir_reg_sizes10_ = Rsh_Fir_reg_sizes8_;
    goto L69_;
  }

L68_:;
  // dr2 = tryDispatchBuiltin.1("[", sizes8)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args52[1] = Rsh_Fir_reg_sizes8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args52);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // if dc1 then L70() else L69(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L70()
    goto L70_;
  } else {
  // L69(dr2)
    Rsh_Fir_reg_sizes10_ = Rsh_Fir_reg_dr2_;
    goto L69_;
  }

L69_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 29), RHO);
  // r27 = dyn __1(sizes10, 2)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_sizes10_;
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L14(r27)
  // L14(r27)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r27_;
  goto L14_;

L70_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // goto L14(dx2)
  // L14(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L14_;

D17_:;
  // deopt 65 [n_x]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_n_x;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L71_:;
  // n_x1 = force? n_x
  Rsh_Fir_reg_n_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x);
  // checkMissing(n_x1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_n_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // r28 = `<`(n_x1, 1.0)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_n_x1_;
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if c12 then L72() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L72()
    goto L72_;
  } else {
  // L15()
    goto L15_;
  }

L72_:;
  // stop2 = ldf stop
  Rsh_Fir_reg_stop2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L73() else D18()
  // L73()
  goto L73_;

D18_:;
  // deopt 70 []
  Rsh_Fir_deopt(70, 0, NULL, CCP, RHO);
  return R_NilValue;

L73_:;
  // r29 = dyn stop2("not enough 'x' data")
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop2_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L74() else D19()
  // L74()
  goto L74_;

D19_:;
  // deopt 72 [r29]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r29_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L74_:;
  // goto L16()
  // L16()
  goto L16_;

D20_:;
  // deopt 75 [n_y]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_n_y;
  Rsh_Fir_deopt(75, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L76_:;
  // n_y1 = force? n_y
  Rsh_Fir_reg_n_y1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y);
  // checkMissing(n_y1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_n_y1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r31 = `<`(n_y1, 1.0)
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_n_y1_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 31);
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(76, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r31)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // if c13 then L77() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L77()
    goto L77_;
  } else {
  // L17()
    goto L17_;
  }

L77_:;
  // stop3 = ldf stop
  Rsh_Fir_reg_stop3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // check L78() else D21()
  // L78()
  goto L78_;

D21_:;
  // deopt 80 []
  Rsh_Fir_deopt(80, 0, NULL, CCP, RHO);
  return R_NilValue;

L78_:;
  // r32 = dyn stop3("not enough 'y' data")
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 33);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stop3_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L79() else D22()
  // L79()
  goto L79_;

D22_:;
  // deopt 82 [r32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r32_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L79_:;
  // goto L18()
  // L18()
  goto L18_;

L81_:;
  // n_x2 = ld `n.x`
  Rsh_Fir_reg_n_x2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L83() else D23()
  // L83()
  goto L83_;

L82_:;
  // r34 = dyn base4(<sym n.x>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L19(r34)
  // L19(r34)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r34_;
  goto L19_;

D23_:;
  // deopt 86 [n_x2]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_n_x2_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L83_:;
  // n_x3 = force? n_x2
  Rsh_Fir_reg_n_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x2_);
  // checkMissing(n_x3)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_n_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // r36 = floor(n_x3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_n_x3_;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L19(r36)
  // L19(r36)
  Rsh_Fir_reg_r35_ = Rsh_Fir_reg_r36_;
  goto L19_;

L84_:;
  // n_y2 = ld `n.y`
  Rsh_Fir_reg_n_y2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L86() else D24()
  // L86()
  goto L86_;

L85_:;
  // r37 = dyn base5(<sym n.y>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L20(r37)
  // L20(r37)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r37_;
  goto L20_;

D24_:;
  // deopt 91 [n_y2]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_n_y2_;
  Rsh_Fir_deopt(91, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L86_:;
  // n_y3 = force? n_y2
  Rsh_Fir_reg_n_y3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y2_);
  // checkMissing(n_y3)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_n_y3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // r39 = floor(n_y3)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_n_y3_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_builtin(167, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // goto L20(r39)
  // L20(r39)
  Rsh_Fir_reg_r38_ = Rsh_Fir_reg_r39_;
  goto L20_;

L87_:;
  // z1 = ld z
  Rsh_Fir_reg_z1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L89() else D25()
  // L89()
  goto L89_;

L88_:;
  // r40 = dyn base6(<sym z>)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L21(r40)
  // L21(r40)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_r40_;
  goto L21_;

D25_:;
  // deopt 96 [z1]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_z1_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L89_:;
  // z2 = force? z1
  Rsh_Fir_reg_z2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z1_);
  // checkMissing(z2)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_z2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c14 = `==`(z2, NULL)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_z2_;
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L21(c14)
  // L21(c14)
  Rsh_Fir_reg_r41_ = Rsh_Fir_reg_c14_;
  goto L21_;

L90_:;
  // sym7 = ldf `rep.int`
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 34), RHO);
  // base7 = ldf `rep.int` in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args73[2];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args73[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args73);
  // if guard7 then L91() else L92()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L91()
    goto L91_;
  } else {
  // L92()
    goto L92_;
  }

L91_:;
  // n_x4 = ld `n.x`
  Rsh_Fir_reg_n_x4_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L93() else D26()
  // L93()
  goto L93_;

L92_:;
  // r42 = dyn base7(1, <lang `+`(n.x, n.y)>)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L23(r42)
  // L23(r42)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r42_;
  goto L23_;

D26_:;
  // deopt 102 [n_x4]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_n_x4_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L93_:;
  // n_x5 = force? n_x4
  Rsh_Fir_reg_n_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x4_);
  // checkMissing(n_x5)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_n_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // n_y4 = ld `n.y`
  Rsh_Fir_reg_n_y4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L94() else D27()
  // L94()
  goto L94_;

D27_:;
  // deopt 103 [n_x5, n_y4]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_n_x5_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_n_y4_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L94_:;
  // n_y5 = force? n_y4
  Rsh_Fir_reg_n_y5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y4_);
  // checkMissing(n_y5)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_n_y5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r44 = `+`(n_x5, n_y5)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_n_x5_;
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_n_y5_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 34), RHO);
  // r45 = dyn rep_int(1, r44)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_array_arg_names19[2];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L95() else D28()
  // L95()
  goto L95_;

D28_:;
  // deopt 107 [r45]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(107, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L95_:;
  // goto L23(r45)
  // L23(r45)
  Rsh_Fir_reg_r43_ = Rsh_Fir_reg_r45_;
  goto L23_;

D29_:;
  // deopt 109 []
  Rsh_Fir_deopt(109, 0, NULL, CCP, RHO);
  return R_NilValue;

L97_:;
  // p2 = prom<V +>{
  //   z3 = ld z;
  //   z4 = force? z3;
  //   checkMissing(z4);
  //   return z4;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1183323468_2, CCP, RHO);
  // r48 = dyn table(p2)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_table, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L98() else D30()
  // L98()
  goto L98_;

D30_:;
  // deopt 111 [r48]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_r48_;
  Rsh_Fir_deopt(111, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L98_:;
  // goto L24(r48)
  // L24(r48)
  Rsh_Fir_reg_r46_ = Rsh_Fir_reg_r48_;
  goto L24_;

D31_:;
  // deopt 113 [alternative3]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_alternative3_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L99_:;
  // alternative4 = force? alternative3
  Rsh_Fir_reg_alternative4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative3_);
  // checkMissing(alternative4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_alternative4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // r49 = `==`(alternative4, "two.sided")
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_alternative4_;
  Rsh_Fir_array_args82[1] = Rsh_const(CCP, 6);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty());
  // st `two.sided` = r49
  Rsh_Fir_store(Rsh_const(CCP, 36), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // alternative5 = ld alternative
  Rsh_Fir_reg_alternative5_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L100() else D32()
  // L100()
  goto L100_;

D32_:;
  // deopt 118 [alternative5]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_alternative5_;
  Rsh_Fir_deopt(118, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L100_:;
  // alternative6 = force? alternative5
  Rsh_Fir_reg_alternative6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative5_);
  // checkMissing(alternative6)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_alternative6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // r50 = `==`(alternative6, "less")
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_alternative6_;
  Rsh_Fir_array_args84[1] = Rsh_const(CCP, 7);
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r50)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_r50_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if c16 then L101() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L101()
    goto L101_;
  } else {
  // L25()
    goto L25_;
  }

L101_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args86);
  // if guard8 then L102() else L103()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L102()
    goto L102_;
  } else {
  // L103()
    goto L103_;
  }

L102_:;
  // n_y6 = ld `n.y`
  Rsh_Fir_reg_n_y6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L104() else D33()
  // L104()
  goto L104_;

L103_:;
  // r51 = dyn base8(<sym n.y>, <sym n.x>)
  SEXP Rsh_Fir_array_args87[2];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args87[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 2, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L26(r51)
  // L26(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L26_;

D33_:;
  // deopt 124 [n_y6]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_n_y6_;
  Rsh_Fir_deopt(124, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L104_:;
  // n_y7 = force? n_y6
  Rsh_Fir_reg_n_y7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y6_);
  // checkMissing(n_y7)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_n_y7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // n_x6 = ld `n.x`
  Rsh_Fir_reg_n_x6_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L105() else D34()
  // L105()
  goto L105_;

D34_:;
  // deopt 126 [n_x6]
  SEXP Rsh_Fir_array_deopt_stack27[1];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_n_x6_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L105_:;
  // n_x7 = force? n_x6
  Rsh_Fir_reg_n_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x6_);
  // checkMissing(n_x7)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_n_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // c17 = ldf c in base
  Rsh_Fir_reg_c17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r53 = dyn c17(n_y7, n_x7)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_n_y7_;
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_n_x7_;
  SEXP Rsh_Fir_array_arg_names22[2];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c17_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L106() else D35()
  // L106()
  goto L106_;

D35_:;
  // deopt 129 [r53]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L26(r53)
  // L26(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L26_;

L108_:;
  // n_x8 = ld `n.x`
  Rsh_Fir_reg_n_x8_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L110() else D36()
  // L110()
  goto L110_;

L109_:;
  // r55 = dyn base9(<sym n.x>, <sym n.y>)
  SEXP Rsh_Fir_array_args91[2];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args91[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names23[2];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_array_arg_names23[1] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 2, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L27(r55)
  // L27(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L27_;

D36_:;
  // deopt 132 [n_x8]
  SEXP Rsh_Fir_array_deopt_stack29[1];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_n_x8_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L110_:;
  // n_x9 = force? n_x8
  Rsh_Fir_reg_n_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_x8_);
  // checkMissing(n_x9)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_n_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // n_y8 = ld `n.y`
  Rsh_Fir_reg_n_y8_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L111() else D37()
  // L111()
  goto L111_;

D37_:;
  // deopt 134 [n_y8]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_n_y8_;
  Rsh_Fir_deopt(134, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L111_:;
  // n_y9 = force? n_y8
  Rsh_Fir_reg_n_y9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n_y8_);
  // checkMissing(n_y9)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_n_y9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // c18 = ldf c in base
  Rsh_Fir_reg_c18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r56 = dyn c18(n_x9, n_y9)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_n_x9_;
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_n_y9_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c18_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L112() else D38()
  // L112()
  goto L112_;

D38_:;
  // deopt 137 [r56]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L112_:;
  // goto L27(r56)
  // L27(r56)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r56_;
  goto L27_;

L113_:;
  // C_Smirnov_sim = ld C_Smirnov_sim
  Rsh_Fir_reg_C_Smirnov_sim = Rsh_Fir_load(Rsh_const(CCP, 37), RHO);
  // check L115() else D39()
  // L115()
  goto L115_;

L114_:;
  // r57 = dyn base10(<sym C_Smirnov_sim>, <lang as.integer(rt)>, <lang as.integer(sizes)>, <lang as.integer(n)>, <lang as.integer(two.sided)>)
  SEXP Rsh_Fir_array_args95[5];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args95[1] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args95[2] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args95[3] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args95[4] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names25[5];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_array_arg_names25[3] = R_MissingArg;
  Rsh_Fir_array_arg_names25[4] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 5, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L28(r57)
  // L28(r57)
  Rsh_Fir_reg_r58_ = Rsh_Fir_reg_r57_;
  goto L28_;

D39_:;
  // deopt 140 [C_Smirnov_sim]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_C_Smirnov_sim;
  Rsh_Fir_deopt(140, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L115_:;
  // C_Smirnov_sim1 = force? C_Smirnov_sim
  Rsh_Fir_reg_C_Smirnov_sim1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_C_Smirnov_sim);
  // checkMissing(C_Smirnov_sim1)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_C_Smirnov_sim1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // sym11 = ldf `as.integer`
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base11 = ldf `as.integer` in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args97[2];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args97);
  // if guard11 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L116_:;
  // rt = ld rt
  Rsh_Fir_reg_rt = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // check L118() else D40()
  // L118()
  goto L118_;

L117_:;
  // r59 = dyn base11(<sym rt>)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L29(C_Smirnov_sim1, r59)
  // L29(C_Smirnov_sim1, r59)
  Rsh_Fir_reg_C_Smirnov_sim4_ = Rsh_Fir_reg_C_Smirnov_sim1_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L29_;

D40_:;
  // deopt 143 [C_Smirnov_sim1, rt]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_C_Smirnov_sim1_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_rt;
  Rsh_Fir_deopt(143, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L118_:;
  // rt1 = force? rt
  Rsh_Fir_reg_rt1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rt);
  // checkMissing(rt1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_rt1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // as_integer = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r61 = dyn as_integer(rt1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_rt1_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L119() else D41()
  // L119()
  goto L119_;

D41_:;
  // deopt 146 [C_Smirnov_sim1, r61]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_C_Smirnov_sim1_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r61_;
  Rsh_Fir_deopt(146, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L119_:;
  // goto L29(C_Smirnov_sim1, r61)
  // L29(C_Smirnov_sim1, r61)
  Rsh_Fir_reg_C_Smirnov_sim4_ = Rsh_Fir_reg_C_Smirnov_sim1_;
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L29_;

L120_:;
  // sizes11 = ld sizes
  Rsh_Fir_reg_sizes11_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L122() else D42()
  // L122()
  goto L122_;

L121_:;
  // r64 = dyn base12(<sym sizes>)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L30(C_Smirnov_sim4, r60, r64)
  // L30(C_Smirnov_sim4, r60, r64)
  Rsh_Fir_reg_C_Smirnov_sim7_ = Rsh_Fir_reg_C_Smirnov_sim4_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r64_;
  goto L30_;

D42_:;
  // deopt 148 [C_Smirnov_sim4, r60, sizes11]
  SEXP Rsh_Fir_array_deopt_stack35[3];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_C_Smirnov_sim4_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack35[2] = Rsh_Fir_reg_sizes11_;
  Rsh_Fir_deopt(148, 3, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L122_:;
  // sizes12 = force? sizes11
  Rsh_Fir_reg_sizes12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sizes11_);
  // checkMissing(sizes12)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_sizes12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // as_integer1 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r67 = dyn as_integer1(sizes12)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_sizes12_;
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer1_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names29, CCP, RHO);
  // check L123() else D43()
  // L123()
  goto L123_;

D43_:;
  // deopt 151 [C_Smirnov_sim4, r60, r67]
  SEXP Rsh_Fir_array_deopt_stack36[3];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_C_Smirnov_sim4_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_deopt_stack36[2] = Rsh_Fir_reg_r67_;
  Rsh_Fir_deopt(151, 3, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L123_:;
  // goto L30(C_Smirnov_sim4, r60, r67)
  // L30(C_Smirnov_sim4, r60, r67)
  Rsh_Fir_reg_C_Smirnov_sim7_ = Rsh_Fir_reg_C_Smirnov_sim4_;
  Rsh_Fir_reg_r65_ = Rsh_Fir_reg_r60_;
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L30_;

L124_:;
  // n9 = ld n
  Rsh_Fir_reg_n9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L126() else D44()
  // L126()
  goto L126_;

L125_:;
  // r72 = dyn base13(<sym n>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names30[1];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names30, CCP, RHO);
  // goto L31(C_Smirnov_sim7, r65, r66, r72)
  // L31(C_Smirnov_sim7, r65, r66, r72)
  Rsh_Fir_reg_C_Smirnov_sim10_ = Rsh_Fir_reg_C_Smirnov_sim7_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r72_;
  goto L31_;

D44_:;
  // deopt 153 [C_Smirnov_sim7, r65, r66, n9]
  SEXP Rsh_Fir_array_deopt_stack37[4];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_C_Smirnov_sim7_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack37[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack37[3] = Rsh_Fir_reg_n9_;
  Rsh_Fir_deopt(153, 4, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L126_:;
  // n10 = force? n9
  Rsh_Fir_reg_n10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_n9_);
  // checkMissing(n10)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_n10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // as_integer2 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r76 = dyn as_integer2(n10)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_n10_;
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer2_, 1, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L127() else D45()
  // L127()
  goto L127_;

D45_:;
  // deopt 156 [C_Smirnov_sim7, r65, r66, r76]
  SEXP Rsh_Fir_array_deopt_stack38[4];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_C_Smirnov_sim7_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r65_;
  Rsh_Fir_array_deopt_stack38[2] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_deopt_stack38[3] = Rsh_Fir_reg_r76_;
  Rsh_Fir_deopt(156, 4, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L127_:;
  // goto L31(C_Smirnov_sim7, r65, r66, r76)
  // L31(C_Smirnov_sim7, r65, r66, r76)
  Rsh_Fir_reg_C_Smirnov_sim10_ = Rsh_Fir_reg_C_Smirnov_sim7_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_reg_r65_;
  Rsh_Fir_reg_r74_ = Rsh_Fir_reg_r66_;
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L31_;

L128_:;
  // two_sided = ld `two.sided`
  Rsh_Fir_reg_two_sided = Rsh_Fir_load(Rsh_const(CCP, 36), RHO);
  // check L130() else D46()
  // L130()
  goto L130_;

L129_:;
  // r83 = dyn base14(<sym two.sided>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 36);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L32(C_Smirnov_sim10, r73, r74, r75, r83)
  // L32(C_Smirnov_sim10, r73, r74, r75, r83)
  Rsh_Fir_reg_C_Smirnov_sim13_ = Rsh_Fir_reg_C_Smirnov_sim10_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r83_;
  goto L32_;

D46_:;
  // deopt 158 [C_Smirnov_sim10, r73, r74, r75, two_sided]
  SEXP Rsh_Fir_array_deopt_stack39[5];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_C_Smirnov_sim10_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack39[2] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_deopt_stack39[3] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_deopt_stack39[4] = Rsh_Fir_reg_two_sided;
  Rsh_Fir_deopt(158, 5, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L130_:;
  // two_sided1 = force? two_sided
  Rsh_Fir_reg_two_sided1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_two_sided);
  // checkMissing(two_sided1)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_two_sided1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args108, Rsh_Fir_param_types_empty()));
  // as_integer3 = ldf `as.integer` in base
  Rsh_Fir_reg_as_integer3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r88 = dyn as_integer3(two_sided1)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_two_sided1_;
  SEXP Rsh_Fir_array_arg_names33[1];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_as_integer3_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L131() else D47()
  // L131()
  goto L131_;

D47_:;
  // deopt 161 [C_Smirnov_sim10, r73, r74, r75, r88]
  SEXP Rsh_Fir_array_deopt_stack40[5];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_C_Smirnov_sim10_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_r73_;
  Rsh_Fir_array_deopt_stack40[2] = Rsh_Fir_reg_r74_;
  Rsh_Fir_array_deopt_stack40[3] = Rsh_Fir_reg_r75_;
  Rsh_Fir_array_deopt_stack40[4] = Rsh_Fir_reg_r88_;
  Rsh_Fir_deopt(161, 5, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L131_:;
  // goto L32(C_Smirnov_sim10, r73, r74, r75, r88)
  // L32(C_Smirnov_sim10, r73, r74, r75, r88)
  Rsh_Fir_reg_C_Smirnov_sim13_ = Rsh_Fir_reg_C_Smirnov_sim10_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_reg_r73_;
  Rsh_Fir_reg_r85_ = Rsh_Fir_reg_r74_;
  Rsh_Fir_reg_r86_ = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r87_ = Rsh_Fir_reg_r88_;
  goto L32_;
}
SEXP Rsh_Fir_user_promise_inner1183323468_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
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
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r2 = dyn c("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args3[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("two.sided", "less", "greater")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner1183323468_1(SEXP CCP, SEXP RHO) {
  // alternative1 = ld alternative
  Rsh_Fir_reg_alternative1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // alternative2 = force? alternative1
  Rsh_Fir_reg_alternative2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_alternative1_);
  // checkMissing(alternative2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_alternative2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // return alternative2
  return Rsh_Fir_reg_alternative2_;
}
SEXP Rsh_Fir_user_promise_inner1183323468_2(SEXP CCP, SEXP RHO) {
  // z3 = ld z
  Rsh_Fir_reg_z3_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // z4 = force? z3
  Rsh_Fir_reg_z4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_z3_);
  // checkMissing(z4)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_z4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // return z4
  return Rsh_Fir_reg_z4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
