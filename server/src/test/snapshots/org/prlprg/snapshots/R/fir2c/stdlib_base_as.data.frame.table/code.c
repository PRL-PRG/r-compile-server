#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2780729953_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2780729953_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2780729953_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2780729953_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2780729953
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2780729953_, RHO, CCP);
  // st `as.data.frame.table` = r
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
SEXP Rsh_Fir_user_function_inner2780729953_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2780729953 dynamic dispatch ([x, `row.names`, `...`, responseName, stringsAsFactors, sep, base])

  return Rsh_Fir_user_version_inner2780729953_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2780729953_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2780729953 version 0 (*, *, dots, *, *, *, * -+> V)

  if (NPARAMS != 7) Rsh_error("FIŘ arity mismatch for inner2780729953/0: expected 7, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_row_names;  // row_names
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_responseName;  // responseName
  SEXP Rsh_Fir_reg_stringsAsFactors;  // stringsAsFactors
  SEXP Rsh_Fir_reg_sep;  // sep
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_row_names_isMissing;  // row_names_isMissing
  SEXP Rsh_Fir_reg_row_names_orDefault;  // row_names_orDefault
  SEXP Rsh_Fir_reg_responseName_isMissing;  // responseName_isMissing
  SEXP Rsh_Fir_reg_responseName_orDefault;  // responseName_orDefault
  SEXP Rsh_Fir_reg_stringsAsFactors_isMissing;  // stringsAsFactors_isMissing
  SEXP Rsh_Fir_reg_stringsAsFactors_orDefault;  // stringsAsFactors_orDefault
  SEXP Rsh_Fir_reg_sep_isMissing;  // sep_isMissing
  SEXP Rsh_Fir_reg_sep_orDefault;  // sep_orDefault
  SEXP Rsh_Fir_reg_base_isMissing;  // base_isMissing
  SEXP Rsh_Fir_reg_base_orDefault;  // base_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_LETTERS;  // LETTERS
  SEXP Rsh_Fir_reg_LETTERS1_;  // LETTERS1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_quote;  // quote
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_responseName1_;  // responseName1
  SEXP Rsh_Fir_reg_responseName2_;  // responseName2
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_responseName4_;  // responseName4
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_responseName6_;  // responseName6
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_names__;  // names__
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_eval;  // eval
  SEXP Rsh_Fir_reg_ex;  // ex
  SEXP Rsh_Fir_reg_ex1_;  // ex1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r13_;  // r13

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_row_names = PARAMS[1];
  Rsh_Fir_reg_ddd = PARAMS[2];
  Rsh_Fir_reg_responseName = PARAMS[3];
  Rsh_Fir_reg_stringsAsFactors = PARAMS[4];
  Rsh_Fir_reg_sep = PARAMS[5];
  Rsh_Fir_reg_base = PARAMS[6];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // row_names_isMissing = missing.0(row_names)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_row_names;
  Rsh_Fir_reg_row_names_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if row_names_isMissing then L0(NULL) else L0(row_names)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_row_names_isMissing)) {
  // L0(NULL)
    Rsh_Fir_reg_row_names_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(row_names)
    Rsh_Fir_reg_row_names_orDefault = Rsh_Fir_reg_row_names;
    goto L0_;
  }

L0_:;
  // st `row.names` = row_names_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_row_names_orDefault, RHO);
  (void)(Rsh_Fir_reg_row_names_orDefault);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // responseName_isMissing = missing.0(responseName)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_responseName;
  Rsh_Fir_reg_responseName_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if responseName_isMissing then L1("Freq") else L1(responseName)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_responseName_isMissing)) {
  // L1("Freq")
    Rsh_Fir_reg_responseName_orDefault = Rsh_const(CCP, 5);
    goto L1_;
  } else {
  // L1(responseName)
    Rsh_Fir_reg_responseName_orDefault = Rsh_Fir_reg_responseName;
    goto L1_;
  }

L1_:;
  // st responseName = responseName_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_responseName_orDefault, RHO);
  (void)(Rsh_Fir_reg_responseName_orDefault);
  // stringsAsFactors_isMissing = missing.0(stringsAsFactors)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_stringsAsFactors;
  Rsh_Fir_reg_stringsAsFactors_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if stringsAsFactors_isMissing then L2(TRUE) else L2(stringsAsFactors)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_stringsAsFactors_isMissing)) {
  // L2(TRUE)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_const(CCP, 7);
    goto L2_;
  } else {
  // L2(stringsAsFactors)
    Rsh_Fir_reg_stringsAsFactors_orDefault = Rsh_Fir_reg_stringsAsFactors;
    goto L2_;
  }

L2_:;
  // st stringsAsFactors = stringsAsFactors_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_stringsAsFactors_orDefault, RHO);
  (void)(Rsh_Fir_reg_stringsAsFactors_orDefault);
  // sep_isMissing = missing.0(sep)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sep;
  Rsh_Fir_reg_sep_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args3);
  // if sep_isMissing then L3("") else L3(sep)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_sep_isMissing)) {
  // L3("")
    Rsh_Fir_reg_sep_orDefault = Rsh_const(CCP, 9);
    goto L3_;
  } else {
  // L3(sep)
    Rsh_Fir_reg_sep_orDefault = Rsh_Fir_reg_sep;
    goto L3_;
  }

L3_:;
  // st sep = sep_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_sep_orDefault, RHO);
  (void)(Rsh_Fir_reg_sep_orDefault);
  // base_isMissing = missing.0(base)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_base_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args4);
  // if base_isMissing then L4() else L5(base)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_base_isMissing)) {
  // L4()
    goto L4_;
  } else {
  // L5(base)
    Rsh_Fir_reg_base_orDefault = Rsh_Fir_reg_base;
    goto L5_;
  }

L4_:;
  // p = prom<V +>{
  //   sym = ldf list;
  //   base1 = ldf list in base;
  //   guard = `==`.4(sym, base1);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   LETTERS = ld LETTERS;
  //   LETTERS1 = force? LETTERS;
  //   checkMissing(LETTERS1);
  //   list = ldf list in base;
  //   r2 = dyn list(LETTERS1);
  //   goto L0(r2);
  // L2():
  //   r = dyn base1(<sym LETTERS>);
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2780729953_, CCP, RHO);
  // goto L5(p)
  // L5(p)
  Rsh_Fir_reg_base_orDefault = Rsh_Fir_reg_p;
  goto L5_;

L5_:;
  // st base = base_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_base_orDefault, RHO);
  (void)(Rsh_Fir_reg_base_orDefault);
  // sym1 = ldf quote
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base2 = ldf quote in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base2)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard1 then L8() else L9()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L8()
    goto L8_;
  } else {
  // L9()
    goto L9_;
  }

L6_:;
  // st ex = r5
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r5_, RHO);
  (void)(Rsh_Fir_reg_r5_);
  // responseName1 = ld responseName
  Rsh_Fir_reg_responseName1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L10() else D0()
  // L10()
  goto L10_;

L7_:;
  // names__ = ldf `names<-`
  Rsh_Fir_reg_names__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L8_:;
  // quote = ldf quote in base
  Rsh_Fir_reg_quote = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r6 = dyn quote(<lang data.frame(do.call("expand.grid", c(dimnames(provideDimnames(x, sep=sep, base=base)), KEEP.OUT.ATTRS=FALSE, stringsAsFactors=stringsAsFactors)), Freq=c(x), row.names=row.names)>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_quote, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L6(r6)
  // L6(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L6_;

L9_:;
  // r4 = dyn base2(<lang data.frame(do.call("expand.grid", c(dimnames(provideDimnames(x, sep=sep, base=base)), KEEP.OUT.ATTRS=FALSE, stringsAsFactors=stringsAsFactors)), Freq=c(x), row.names=row.names)>)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L6(r4)
  // L6(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L6_;

D0_:;
  // deopt 4 [responseName1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_responseName1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L10_:;
  // responseName2 = force? responseName1
  Rsh_Fir_reg_responseName2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_responseName1_);
  // checkMissing(responseName2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_responseName2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty()));
  // l = ld ex
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // names = ldf names
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // check L11() else D1()
  // L11()
  goto L11_;

D1_:;
  // deopt 7 [responseName2, l, responseName2]
  SEXP Rsh_Fir_array_deopt_stack1[3];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_array_deopt_stack1[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack1[2] = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_deopt(7, 3, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L11_:;
  // r7 = dyn names(responseName2, NULL)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_array_args13[1] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 2, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

D2_:;
  // deopt 9 [responseName2, l, responseName2, r7]
  SEXP Rsh_Fir_array_deopt_stack2[4];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_array_deopt_stack2[3] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(9, 4, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L12_:;
  // c = `is.object`(r7)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c then L13() else L14(responseName2, l, r7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L14(responseName2, l, r7)
    Rsh_Fir_reg_responseName4_ = Rsh_Fir_reg_responseName2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r7_;
    goto L14_;
  }

L13_:;
  // dr = tryDispatchBuiltin.0("[<-", r7, responseName2)
  SEXP Rsh_Fir_array_args15[3];
  Rsh_Fir_array_args15[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r7_;
  Rsh_Fir_array_args15[2] = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args15);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if dc then L15() else L14(responseName2, l, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L15()
    goto L15_;
  } else {
  // L14(responseName2, l, dr)
    Rsh_Fir_reg_responseName4_ = Rsh_Fir_reg_responseName2_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_r9_ = Rsh_Fir_reg_dr;
    goto L14_;
  }

L14_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r10 = dyn ___(r9, responseName2, 3)
  SEXP Rsh_Fir_array_args17[3];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L7(responseName4, l2, r10)
  // L7(responseName4, l2, r10)
  Rsh_Fir_reg_responseName6_ = Rsh_Fir_reg_responseName4_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r10_;
  goto L7_;

L15_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L7(responseName2, l, dx)
  // L7(responseName2, l, dx)
  Rsh_Fir_reg_responseName6_ = Rsh_Fir_reg_responseName2_;
  Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D3_:;
  // deopt 14 [responseName6, l4, dx1]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_responseName6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // r11 = dyn names__(l4, NULL, dx1)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 2);
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names6[3];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_array_arg_names6[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names__, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 16 [responseName6, r11]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_responseName6_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(16, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // st ex = r11
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // eval = ldf eval
  Rsh_Fir_reg_eval = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   ex = ld ex;
  //   ex1 = force? ex;
  //   checkMissing(ex1);
  //   return ex1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2780729953_1, CCP, RHO);
  // r13 = dyn eval(p1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_eval, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 21 [r13]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L19_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r13
  return Rsh_Fir_reg_r13_;
}
SEXP Rsh_Fir_user_promise_inner2780729953_(SEXP CCP, SEXP RHO) {
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base1 = ldf list in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard = `==`.4(sym, base1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
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
  // LETTERS = ld LETTERS
  Rsh_Fir_reg_LETTERS = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // LETTERS1 = force? LETTERS
  Rsh_Fir_reg_LETTERS1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_LETTERS);
  // checkMissing(LETTERS1)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_LETTERS1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // r2 = dyn list(LETTERS1)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_LETTERS1_;
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base1(<sym LETTERS>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2780729953_1(SEXP CCP, SEXP RHO) {
  // ex = ld ex
  Rsh_Fir_reg_ex = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // ex1 = force? ex
  Rsh_Fir_reg_ex1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ex);
  // checkMissing(ex1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ex1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // return ex1
  return Rsh_Fir_reg_ex1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
