#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner353331921_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner353331921_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner353331921_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner353331921_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO);
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
  // r = clos inner353331921
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner353331921_, RHO, CCP);
  // st strOptions = r
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
SEXP Rsh_Fir_user_function_inner353331921_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner353331921 dynamic dispatch ([`strict.width`, `digits.d`, `vec.len`, `list.len`, `deparse.lines`, `drop.deparse.attr`, formatNum])

  return Rsh_Fir_user_version_inner353331921_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner353331921_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner353331921 version 0 (*, *, *, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner353331921/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_strict_width;  // strict_width
  SEXP Rsh_Fir_reg_digits_d;  // digits_d
  SEXP Rsh_Fir_reg_vec_len;  // vec_len
  SEXP Rsh_Fir_reg_list_len;  // list_len
  SEXP Rsh_Fir_reg_deparse_lines;  // deparse_lines
  SEXP Rsh_Fir_reg_drop_deparse_attr;  // drop_deparse_attr
  SEXP Rsh_Fir_reg_formatNum;  // formatNum
  SEXP Rsh_Fir_reg_strict_width_isMissing;  // strict_width_isMissing
  SEXP Rsh_Fir_reg_strict_width_orDefault;  // strict_width_orDefault
  SEXP Rsh_Fir_reg_digits_d_isMissing;  // digits_d_isMissing
  SEXP Rsh_Fir_reg_digits_d_orDefault;  // digits_d_orDefault
  SEXP Rsh_Fir_reg_vec_len_isMissing;  // vec_len_isMissing
  SEXP Rsh_Fir_reg_vec_len_orDefault;  // vec_len_orDefault
  SEXP Rsh_Fir_reg_list_len_isMissing;  // list_len_isMissing
  SEXP Rsh_Fir_reg_list_len_orDefault;  // list_len_orDefault
  SEXP Rsh_Fir_reg_deparse_lines_isMissing;  // deparse_lines_isMissing
  SEXP Rsh_Fir_reg_deparse_lines_orDefault;  // deparse_lines_orDefault
  SEXP Rsh_Fir_reg_drop_deparse_attr_isMissing;  // drop_deparse_attr_isMissing
  SEXP Rsh_Fir_reg_drop_deparse_attr_orDefault;  // drop_deparse_attr_orDefault
  SEXP Rsh_Fir_reg_formatNum_isMissing;  // formatNum_isMissing
  SEXP Rsh_Fir_reg_formatNum_orDefault;  // formatNum_orDefault
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_strict_width1_;  // strict_width1
  SEXP Rsh_Fir_reg_strict_width2_;  // strict_width2
  SEXP Rsh_Fir_reg_digits_d1_;  // digits_d1
  SEXP Rsh_Fir_reg_digits_d2_;  // digits_d2
  SEXP Rsh_Fir_reg_vec_len1_;  // vec_len1
  SEXP Rsh_Fir_reg_vec_len2_;  // vec_len2
  SEXP Rsh_Fir_reg_list_len1_;  // list_len1
  SEXP Rsh_Fir_reg_list_len2_;  // list_len2
  SEXP Rsh_Fir_reg_deparse_lines1_;  // deparse_lines1
  SEXP Rsh_Fir_reg_deparse_lines2_;  // deparse_lines2
  SEXP Rsh_Fir_reg_drop_deparse_attr1_;  // drop_deparse_attr1
  SEXP Rsh_Fir_reg_drop_deparse_attr2_;  // drop_deparse_attr2
  SEXP Rsh_Fir_reg_match_fun;  // match_fun
  SEXP Rsh_Fir_reg_formatNum1_;  // formatNum1
  SEXP Rsh_Fir_reg_formatNum2_;  // formatNum2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r6_;  // r6

  // Bind parameters
  Rsh_Fir_reg_strict_width = PARAMS[0];
  Rsh_Fir_reg_digits_d = PARAMS[1];
  Rsh_Fir_reg_vec_len = PARAMS[2];
  Rsh_Fir_reg_list_len = PARAMS[3];
  Rsh_Fir_reg_deparse_lines = PARAMS[4];
  Rsh_Fir_reg_drop_deparse_attr = PARAMS[5];
  Rsh_Fir_reg_formatNum = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // strict_width_isMissing = missing.0(strict_width)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_strict_width;
  Rsh_Fir_reg_strict_width_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if strict_width_isMissing then L0("no") else L0(strict_width)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_strict_width_isMissing)) {
  // L0("no")
    Rsh_Fir_reg_strict_width_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(strict_width)
    Rsh_Fir_reg_strict_width_orDefault = Rsh_Fir_reg_strict_width;
    goto L0_;
  }

L0_:;
  // st `strict.width` = strict_width_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_strict_width_orDefault, RHO);
  (void)(Rsh_Fir_reg_strict_width_orDefault);
  // digits_d_isMissing = missing.0(digits_d)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_digits_d;
  Rsh_Fir_reg_digits_d_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if digits_d_isMissing then L1(3) else L1(digits_d)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_digits_d_isMissing)) {
  // L1(3)
    Rsh_Fir_reg_digits_d_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(digits_d)
    Rsh_Fir_reg_digits_d_orDefault = Rsh_Fir_reg_digits_d;
    goto L1_;
  }

L1_:;
  // st `digits.d` = digits_d_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_digits_d_orDefault, RHO);
  (void)(Rsh_Fir_reg_digits_d_orDefault);
  // vec_len_isMissing = missing.0(vec_len)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_vec_len;
  Rsh_Fir_reg_vec_len_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if vec_len_isMissing then L2(4) else L2(vec_len)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_vec_len_isMissing)) {
  // L2(4)
    Rsh_Fir_reg_vec_len_orDefault = Rsh_const(CCP, 5);
    goto L2_;
  } else {
  // L2(vec_len)
    Rsh_Fir_reg_vec_len_orDefault = Rsh_Fir_reg_vec_len;
    goto L2_;
  }

L2_:;
  // st `vec.len` = vec_len_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_vec_len_orDefault, RHO);
  (void)(Rsh_Fir_reg_vec_len_orDefault);
  // list_len_isMissing = missing.0(list_len)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_list_len;
  Rsh_Fir_reg_list_len_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if list_len_isMissing then L3(99) else L3(list_len)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_list_len_isMissing)) {
  // L3(99)
    Rsh_Fir_reg_list_len_orDefault = Rsh_const(CCP, 7);
    goto L3_;
  } else {
  // L3(list_len)
    Rsh_Fir_reg_list_len_orDefault = Rsh_Fir_reg_list_len;
    goto L3_;
  }

L3_:;
  // st `list.len` = list_len_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_list_len_orDefault, RHO);
  (void)(Rsh_Fir_reg_list_len_orDefault);
  // deparse_lines_isMissing = missing.0(deparse_lines)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_deparse_lines;
  Rsh_Fir_reg_deparse_lines_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if deparse_lines_isMissing then L4(NULL) else L4(deparse_lines)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_deparse_lines_isMissing)) {
  // L4(NULL)
    Rsh_Fir_reg_deparse_lines_orDefault = Rsh_const(CCP, 9);
    goto L4_;
  } else {
  // L4(deparse_lines)
    Rsh_Fir_reg_deparse_lines_orDefault = Rsh_Fir_reg_deparse_lines;
    goto L4_;
  }

L4_:;
  // st `deparse.lines` = deparse_lines_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_deparse_lines_orDefault, RHO);
  (void)(Rsh_Fir_reg_deparse_lines_orDefault);
  // drop_deparse_attr_isMissing = missing.0(drop_deparse_attr)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_drop_deparse_attr;
  Rsh_Fir_reg_drop_deparse_attr_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args5);
  // if drop_deparse_attr_isMissing then L5(TRUE) else L5(drop_deparse_attr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_drop_deparse_attr_isMissing)) {
  // L5(TRUE)
    Rsh_Fir_reg_drop_deparse_attr_orDefault = Rsh_const(CCP, 11);
    goto L5_;
  } else {
  // L5(drop_deparse_attr)
    Rsh_Fir_reg_drop_deparse_attr_orDefault = Rsh_Fir_reg_drop_deparse_attr;
    goto L5_;
  }

L5_:;
  // st `drop.deparse.attr` = drop_deparse_attr_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_drop_deparse_attr_orDefault, RHO);
  (void)(Rsh_Fir_reg_drop_deparse_attr_orDefault);
  // formatNum_isMissing = missing.0(formatNum)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_formatNum;
  Rsh_Fir_reg_formatNum_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if formatNum_isMissing then L6() else L7(formatNum)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_formatNum_isMissing)) {
  // L6()
    goto L6_;
  } else {
  // L7(formatNum)
    Rsh_Fir_reg_formatNum_orDefault = Rsh_Fir_reg_formatNum;
    goto L7_;
  }

L6_:;
  // p = prom<V +>{
  //   r = clos inner2044426018;
  //   return r;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner353331921_, CCP, RHO);
  // goto L7(p)
  // L7(p)
  Rsh_Fir_reg_formatNum_orDefault = Rsh_Fir_reg_p;
  goto L7_;

L7_:;
  // st formatNum = formatNum_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_formatNum_orDefault, RHO);
  (void)(Rsh_Fir_reg_formatNum_orDefault);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L8_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_;

L9_:;
  // strict_width1 = ld `strict.width`
  Rsh_Fir_reg_strict_width1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L10_:;
  // r2 = dyn base[`strict.width`, `digits.d`, `vec.len`, `list.len`, `deparse.lines`, `drop.deparse.attr`, formatNum](<sym strict.width>, <sym digits.d>, <sym vec.len>, <sym list.len>, <sym deparse.lines>, <sym drop.deparse.attr>, <lang match.fun(formatNum)>)
  SEXP Rsh_Fir_array_args8[7];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args8[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args8[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args8[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args8[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args8[6] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names[7];
  Rsh_Fir_array_arg_names[0] = Rsh_const(CCP, 2);
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 4);
  Rsh_Fir_array_arg_names[2] = Rsh_const(CCP, 6);
  Rsh_Fir_array_arg_names[3] = Rsh_const(CCP, 8);
  Rsh_Fir_array_arg_names[4] = Rsh_const(CCP, 10);
  Rsh_Fir_array_arg_names[5] = Rsh_const(CCP, 12);
  Rsh_Fir_array_arg_names[6] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 7, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L8(r2)
  // L8(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L8_;

D0_:;
  // deopt 2 [strict_width1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_strict_width1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // strict_width2 = force? strict_width1
  Rsh_Fir_reg_strict_width2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_strict_width1_);
  // checkMissing(strict_width2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_strict_width2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // digits_d1 = ld `digits.d`
  Rsh_Fir_reg_digits_d1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D1()
  // L12()
  goto L12_;

D1_:;
  // deopt 5 [digits_d1]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_digits_d1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // digits_d2 = force? digits_d1
  Rsh_Fir_reg_digits_d2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_digits_d1_);
  // checkMissing(digits_d2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_digits_d2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // vec_len1 = ld `vec.len`
  Rsh_Fir_reg_vec_len1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L13() else D2()
  // L13()
  goto L13_;

D2_:;
  // deopt 8 [vec_len1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_vec_len1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // vec_len2 = force? vec_len1
  Rsh_Fir_reg_vec_len2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vec_len1_);
  // checkMissing(vec_len2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_vec_len2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // list_len1 = ld `list.len`
  Rsh_Fir_reg_list_len1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // check L14() else D3()
  // L14()
  goto L14_;

D3_:;
  // deopt 11 [list_len1]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_list_len1_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L14_:;
  // list_len2 = force? list_len1
  Rsh_Fir_reg_list_len2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_list_len1_);
  // checkMissing(list_len2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_list_len2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // deparse_lines1 = ld `deparse.lines`
  Rsh_Fir_reg_deparse_lines1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // check L15() else D4()
  // L15()
  goto L15_;

D4_:;
  // deopt 14 [deparse_lines1]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_deparse_lines1_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L15_:;
  // deparse_lines2 = force? deparse_lines1
  Rsh_Fir_reg_deparse_lines2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_deparse_lines1_);
  // checkMissing(deparse_lines2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_deparse_lines2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // drop_deparse_attr1 = ld `drop.deparse.attr`
  Rsh_Fir_reg_drop_deparse_attr1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L16() else D5()
  // L16()
  goto L16_;

D5_:;
  // deopt 17 [drop_deparse_attr1]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_drop_deparse_attr1_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L16_:;
  // drop_deparse_attr2 = force? drop_deparse_attr1
  Rsh_Fir_reg_drop_deparse_attr2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_drop_deparse_attr1_);
  // checkMissing(drop_deparse_attr2)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_drop_deparse_attr2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // match_fun = ldf `match.fun`
  Rsh_Fir_reg_match_fun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L17() else D6()
  // L17()
  goto L17_;

D6_:;
  // deopt 21 []
  Rsh_Fir_deopt(21, 0, NULL, CCP, RHO);
  return R_NilValue;

L17_:;
  // p1 = prom<V +>{
  //   formatNum1 = ld formatNum;
  //   formatNum2 = force? formatNum1;
  //   checkMissing(formatNum2);
  //   return formatNum2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner353331921_1, CCP, RHO);
  // r5 = dyn match_fun(p1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_fun, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L18() else D7()
  // L18()
  goto L18_;

D7_:;
  // deopt 23 [r5]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L18_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r6 = dyn list(strict_width2, digits_d2, vec_len2, list_len2, deparse_lines2, drop_deparse_attr2, r5)
  SEXP Rsh_Fir_array_args17[7];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_strict_width2_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_digits_d2_;
  Rsh_Fir_array_args17[2] = Rsh_Fir_reg_vec_len2_;
  Rsh_Fir_array_args17[3] = Rsh_Fir_reg_list_len2_;
  Rsh_Fir_array_args17[4] = Rsh_Fir_reg_deparse_lines2_;
  Rsh_Fir_array_args17[5] = Rsh_Fir_reg_drop_deparse_attr2_;
  Rsh_Fir_array_args17[6] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names2[7];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 7, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L19() else D8()
  // L19()
  goto L19_;

D8_:;
  // deopt 26 [r6]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L19_:;
  // goto L8(r6)
  // L8(r6)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r6_;
  goto L8_;
}
SEXP Rsh_Fir_user_promise_inner353331921_(SEXP CCP, SEXP RHO) {
  // r = clos inner2044426018
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // return r
  return Rsh_Fir_reg_r1;
}
SEXP Rsh_Fir_user_promise_inner353331921_1(SEXP CCP, SEXP RHO) {
  // formatNum1 = ld formatNum
  Rsh_Fir_reg_formatNum1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // formatNum2 = force? formatNum1
  Rsh_Fir_reg_formatNum2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_formatNum1_);
  // checkMissing(formatNum2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_formatNum2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return formatNum2
  return Rsh_Fir_reg_formatNum2_;
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
  SEXP Rsh_Fir_reg_format;  // format
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r1_;  // r1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // format = ldf format
  Rsh_Fir_reg_format = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   return x2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_, CCP, RHO);
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // r1 = dyn format[, trim, drop0trailing, `...`](p, TRUE, TRUE, ddd1)
  SEXP Rsh_Fir_array_args19[4];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_p1;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args19[3] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names3[4];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = Rsh_const(CCP, 20);
  Rsh_Fir_array_arg_names3[2] = Rsh_const(CCP, 21);
  Rsh_Fir_array_arg_names3[3] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_format, 4, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // return x2
  return Rsh_Fir_reg_x2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
