#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3074708674_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3074708674_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3428017826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3428017826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3428017826_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner3773442701_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3773442701_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3773442701_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3773442701_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner3074708674
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3074708674_, RHO, CCP);
  // st activeConcordance = r
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
SEXP Rsh_Fir_user_function_inner3074708674_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3074708674 dynamic dispatch ([srcfile])

  return Rsh_Fir_user_version_inner3074708674_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3074708674_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3074708674 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3074708674/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_srcfile;  // srcfile
  SEXP Rsh_Fir_reg_srcfile_isMissing;  // srcfile_isMissing
  SEXP Rsh_Fir_reg_srcfile_orDefault;  // srcfile_orDefault
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_r2_;  // r2

  // Bind parameters
  Rsh_Fir_reg_srcfile = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // srcfile_isMissing = missing.0(srcfile)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_srcfile;
  Rsh_Fir_reg_srcfile_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if srcfile_isMissing then L0(NA_STR) else L0(srcfile)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_srcfile_isMissing)) {
  // L0(NA_STR)
    Rsh_Fir_reg_srcfile_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(srcfile)
    Rsh_Fir_reg_srcfile_orDefault = Rsh_Fir_reg_srcfile;
    goto L0_;
  }

L0_:;
  // st srcfile = srcfile_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_srcfile_orDefault, RHO);
  (void)(Rsh_Fir_reg_srcfile_orDefault);
  // r = clos inner2708337952
  Rsh_Fir_reg_r1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // checkFun.0(r)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args1));
  // r1 = r as cls
  Rsh_Fir_reg_r1_ = Rsh_Fir_cast(Rsh_Fir_reg_r1, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // r2 = dyn r1()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r1_, 0, NULL, NULL, CCP, RHO);
  // check L1() else D0()
  // L1()
  goto L1_;

D0_:;
  // deopt 3 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r2
  return Rsh_Fir_reg_r2_;
}
SEXP Rsh_Fir_user_function_inner2708337952_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2708337952 dynamic dispatch ([])

  return Rsh_Fir_user_version_inner2708337952_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2708337952_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2708337952 version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for inner2708337952/0: expected 0, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_integer;  // integer
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_srcfile1;  // srcfile
  SEXP Rsh_Fir_reg_srcfile1_;  // srcfile1
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_structure;  // structure
  SEXP Rsh_Fir_reg_environment;  // environment
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st lastSrcref = NULL
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // integer = ldf integer
  Rsh_Fir_reg_integer = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 4 []
  Rsh_Fir_deopt(4, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn integer()
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_integer, 0, NULL, NULL, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 5 [r]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r2;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L1_:;
  // st srcLinenum = r
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r2, RHO);
  (void)(Rsh_Fir_reg_r2);
  // srcfile = ld srcfile
  Rsh_Fir_reg_srcfile1 = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 7 [srcfile]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_srcfile1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L2_:;
  // srcfile1 = force? srcfile
  Rsh_Fir_reg_srcfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcfile1);
  // checkMissing(srcfile1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_srcfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // st srcFile = srcfile1
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_srcfile1_, RHO);
  (void)(Rsh_Fir_reg_srcfile1_);
  // st offset = 0.0
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_const(CCP, 8), RHO);
  (void)(Rsh_const(CCP, 8));
  // st lastText = ""
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_const(CCP, 10), RHO);
  (void)(Rsh_const(CCP, 10));
  // r1 = clos inner3428017826
  Rsh_Fir_reg_r1_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3428017826_, RHO, CCP);
  // st saveSrcref = r1
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_r1_1, RHO);
  (void)(Rsh_Fir_reg_r1_1);
  // r2 = clos inner3773442701
  Rsh_Fir_reg_r2_1 = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3773442701_, RHO, CCP);
  // st addToConcordance = r2
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_r2_1, RHO);
  (void)(Rsh_Fir_reg_r2_1);
  // r3 = clos inner2708337952
  Rsh_Fir_reg_r3_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2708337952_, RHO, CCP);
  // st finish = r3
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_r3_, RHO);
  (void)(Rsh_Fir_reg_r3_);
  // structure = ldf structure
  Rsh_Fir_reg_structure = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // check L3() else D3()
  // L3()
  goto L3_;

D3_:;
  // deopt 26 []
  Rsh_Fir_deopt(26, 0, NULL, CCP, RHO);
  return R_NilValue;

L3_:;
  // p = prom<V +>{
  //   environment = ldf environment;
  //   r4 = dyn environment();
  //   return r4;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2708337952_, CCP, RHO);
  // r6 = dyn structure[, class](p, "activeConcordance")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_structure, 2, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L4() else D4()
  // L4()
  goto L4_;

D4_:;
  // deopt 30 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L4_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r6
  return Rsh_Fir_reg_r6_;
}
SEXP Rsh_Fir_user_promise_inner2708337952_(SEXP CCP, SEXP RHO) {
  // environment = ldf environment
  Rsh_Fir_reg_environment = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // r4 = dyn environment()
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_environment, 0, NULL, NULL, CCP, RHO);
  // return r4
  return Rsh_Fir_reg_r4_;
}
SEXP Rsh_Fir_user_function_inner3428017826_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3428017826 dynamic dispatch ([node])

  return Rsh_Fir_user_version_inner3428017826_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3428017826_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3428017826 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3428017826/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_node;  // node
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r3;  // r
  SEXP Rsh_Fir_reg_r1_2;  // r1
  SEXP Rsh_Fir_reg_node1_;  // node1
  SEXP Rsh_Fir_reg_node2_;  // node2
  SEXP Rsh_Fir_reg_p1;  // p
  SEXP Rsh_Fir_reg_r3_1;  // r3

  // Bind parameters
  Rsh_Fir_reg_node = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st node = node
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_node, RHO);
  (void)(Rsh_Fir_reg_node);
  // __ = ldf `::`
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // r = dyn __("utils", "getSrcref")
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 22);
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r3 = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 4 [r]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r3;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L1_:;
  // checkFun.0(r)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r3;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args5));
  // r1 = r as cls
  Rsh_Fir_reg_r1_2 = Rsh_Fir_cast(Rsh_Fir_reg_r3, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p = prom<V +>{
  //   node1 = ld node;
  //   node2 = force? node1;
  //   checkMissing(node2);
  //   return node2;
  // }
  Rsh_Fir_reg_p1 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3428017826_, CCP, RHO);
  // r3 = dyn r1(p)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_p1;
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r1_2, 1, Rsh_Fir_array_args7, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 7 [r3]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_deopt(7, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L2_:;
  // sst lastSrcref = r3
  Rsh_Fir_super_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r3_1, RHO);
  (void)(Rsh_Fir_reg_r3_1);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r3
  return Rsh_Fir_reg_r3_1;
}
SEXP Rsh_Fir_user_promise_inner3428017826_(SEXP CCP, SEXP RHO) {
  // node1 = ld node
  Rsh_Fir_reg_node1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // node2 = force? node1
  Rsh_Fir_reg_node2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_node1_);
  // checkMissing(node2)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_node2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty()));
  // return node2
  return Rsh_Fir_reg_node2_;
}
SEXP Rsh_Fir_user_function_inner3773442701_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3773442701 dynamic dispatch ([text])

  return Rsh_Fir_user_version_inner3773442701_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3773442701_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3773442701 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner3773442701/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_text;  // text
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r4;  // r
  SEXP Rsh_Fir_reg_r1_3;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_2;  // r2
  SEXP Rsh_Fir_reg_r3_2;  // r3
  SEXP Rsh_Fir_reg_text1_;  // text1
  SEXP Rsh_Fir_reg_text2_;  // text2
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_any;  // any
  SEXP Rsh_Fir_reg_r6_1;  // r6
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_text3_;  // text3
  SEXP Rsh_Fir_reg_text4_;  // text4
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_srcLinenum;  // srcLinenum
  SEXP Rsh_Fir_reg_srcLinenum1_;  // srcLinenum1
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_gsub;  // gsub
  SEXP Rsh_Fir_reg_text5_;  // text5
  SEXP Rsh_Fir_reg_text6_;  // text6
  SEXP Rsh_Fir_reg_p2;  // p
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_nchar1_;  // nchar1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sum;  // sum
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg___1;  // __
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_lastSrcref;  // lastSrcref
  SEXP Rsh_Fir_reg_lastSrcref1_;  // lastSrcref1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_srcLine;  // srcLine
  SEXP Rsh_Fir_reg_srcLine1_;  // srcLine1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_concordanceUsed;  // concordanceUsed
  SEXP Rsh_Fir_reg_concordanceUsed1_;  // concordanceUsed1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_text7_;  // text7
  SEXP Rsh_Fir_reg_text8_;  // text8
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_text10_;  // text10
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_concordanceUsed2_;  // concordanceUsed2
  SEXP Rsh_Fir_reg_concordanceUsed3_;  // concordanceUsed3
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_newlines;  // newlines
  SEXP Rsh_Fir_reg_newlines1_;  // newlines1
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_srcLine2_;  // srcLine2
  SEXP Rsh_Fir_reg_srcLine3_;  // srcLine3
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_srcLine5_;  // srcLine5
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_srcLine7_;  // srcLine7
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_concordanceUsed4_;  // concordanceUsed4
  SEXP Rsh_Fir_reg_concordanceUsed5_;  // concordanceUsed5
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_srcLine12_;  // srcLine12
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_srcLine13_;  // srcLine13
  SEXP Rsh_Fir_reg_concordanceUsed8_;  // concordanceUsed8
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_newlines2_;  // newlines2
  SEXP Rsh_Fir_reg_newlines3_;  // newlines3
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_concordanceUsed9_;  // concordanceUsed9
  SEXP Rsh_Fir_reg_concordanceUsed10_;  // concordanceUsed10
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_offset;  // offset
  SEXP Rsh_Fir_reg_offset1_;  // offset1
  SEXP Rsh_Fir_reg_newlines4_;  // newlines4
  SEXP Rsh_Fir_reg_newlines5_;  // newlines5
  SEXP Rsh_Fir_reg_r38_;  // r38

  // Bind parameters
  Rsh_Fir_reg_text = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st text = text
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_text, RHO);
  (void)(Rsh_Fir_reg_text);
  // sym = ldf any
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base = ldf any in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard then L16() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L16()
    goto L16_;
  } else {
  // L17()
    goto L17_;
  }

L0_:;
  // c = `as.logical`(r1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_r1_3;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L23() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L23()
    goto L23_;
  } else {
  // L2()
    goto L2_;
  }

L1_:;
  // r5 = `>`(r3, 0.0)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r3_2;
  Rsh_Fir_array_args10[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(79, CCP, RHO, 2, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // any = ldf any in base
  Rsh_Fir_reg_any = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // r6 = dyn any(r5)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_any, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L22() else D2()
  // L22()
  goto L22_;

L2_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 3);

L3_:;
  // st concordanceUsed = r8
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // sym3 = ldf sum
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base3 = ldf sum in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard3 then L29() else L30()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L29()
    goto L29_;
  } else {
  // L30()
    goto L30_;
  }

L4_:;
  // st newlines = r11
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // __ = ldf `::`
  Rsh_Fir_reg___1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L37() else D10()
  // L37()
  goto L37_;

L5_:;
  // sum = ldf sum in base
  Rsh_Fir_reg_sum = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // r17 = dyn sum(r13)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sum, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L36() else D9()
  // L36()
  goto L36_;

L6_:;
  // r24 = `!`(r23)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c2 then L43() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L43()
    goto L43_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // concordanceUsed9 = ld concordanceUsed
  Rsh_Fir_reg_concordanceUsed9_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L64() else D21()
  // L64()
  goto L64_;

L8_:;
  // goto L12()
  // L12()
  goto L12_;

L9_:;
  // r26 = `!=`(dx1, "\n")
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r26)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c5 then L50() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L50()
    goto L50_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // newlines = ld newlines
  Rsh_Fir_reg_newlines = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L53() else D17()
  // L53()
  goto L53_;

L11_:;
  // goto L12()
  // L12()
  goto L12_;

L12_:;
  // srcLine2 = ld srcLine
  Rsh_Fir_reg_srcLine2_ = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L55() else D18()
  // L55()
  goto L55_;

L13_:;
  // sst srcLinenum = dx3
  Rsh_Fir_super_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return srcLine7
  return Rsh_Fir_reg_srcLine7_;

L14_:;
  // r35 = `+`(concordanceUsed8, r32)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_concordanceUsed8_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_r32_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 30), RHO);
  // r36 = dyn ___(l5, srcLine13, r35)
  SEXP Rsh_Fir_array_args19[3];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_srcLine13_;
  Rsh_Fir_array_args19[2] = Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L13(srcLine12, r36)
  // L13(srcLine12, r36)
  Rsh_Fir_reg_srcLine7_ = Rsh_Fir_reg_srcLine12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r36_;
  goto L13_;

L15_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 3);

L16_:;
  // sym1 = ldf nchar
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base1 = ldf nchar in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard1 then L18() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L18()
    goto L18_;
  } else {
  // L19()
    goto L19_;
  }

L17_:;
  // r = dyn base(<lang `>`(nchar(text), 0.0)>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r4 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_3 = Rsh_Fir_reg_r4;
  goto L0_;

L18_:;
  // text1 = ld text
  Rsh_Fir_reg_text1_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L20() else D0()
  // L20()
  goto L20_;

L19_:;
  // r2 = dyn base1(<sym text>)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_const(CCP, 23);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r2_2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_2 = Rsh_Fir_reg_r2_2;
  goto L1_;

D0_:;
  // deopt 4 [text1]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_text1_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L20_:;
  // text2 = force? text1
  Rsh_Fir_reg_text2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text1_);
  // checkMissing(text2)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_text2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r4 = dyn nchar(text2, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args24[4];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_text2_;
  Rsh_Fir_array_args24[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args24[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args24[3] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names8[4];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_array_arg_names8[3] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L21() else D1()
  // L21()
  goto L21_;

D1_:;
  // deopt 10 [r4]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r4_1;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L21_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_2 = Rsh_Fir_reg_r4_1;
  goto L1_;

D2_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r6_1;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L0(r6)
  // L0(r6)
  Rsh_Fir_reg_r1_3 = Rsh_Fir_reg_r6_1;
  goto L0_;

L23_:;
  // text3 = ld text
  Rsh_Fir_reg_text3_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L24() else D3()
  // L24()
  goto L24_;

D3_:;
  // deopt 15 [text3]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_text3_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L24_:;
  // text4 = force? text3
  Rsh_Fir_reg_text4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text3_);
  // checkMissing(text4)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_text4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // sst lastText = text4
  Rsh_Fir_super_store(Rsh_const(CCP, 11), Rsh_Fir_reg_text4_, RHO);
  (void)(Rsh_Fir_reg_text4_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 36), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args26);
  // if guard2 then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L25_:;
  // srcLinenum = ld srcLinenum
  Rsh_Fir_reg_srcLinenum = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L27() else D4()
  // L27()
  goto L27_;

L26_:;
  // r7 = dyn base2(<sym srcLinenum>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L3(r7)
  // L3(r7)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r7_;
  goto L3_;

D4_:;
  // deopt 20 [srcLinenum]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_srcLinenum;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L27_:;
  // srcLinenum1 = force? srcLinenum
  Rsh_Fir_reg_srcLinenum1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcLinenum);
  // checkMissing(srcLinenum1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_srcLinenum1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r9 = dyn length(srcLinenum1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_srcLinenum1_;
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L28() else D5()
  // L28()
  goto L28_;

D5_:;
  // deopt 23 [r9]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3(r9)
  // L3(r9)
  Rsh_Fir_reg_r8_ = Rsh_Fir_reg_r9_;
  goto L3_;

L29_:;
  // sym4 = ldf nchar
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // base4 = ldf nchar in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard4 then L31() else L32()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L31()
    goto L31_;
  } else {
  // L32()
    goto L32_;
  }

L30_:;
  // r10 = dyn base3(<lang nchar(gsub("[^\n]", "", text))>)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L4(r10)
  // L4(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L4_;

L31_:;
  // gsub = ldf gsub
  Rsh_Fir_reg_gsub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // check L33() else D6()
  // L33()
  goto L33_;

L32_:;
  // r12 = dyn base4(<lang gsub("[^\n]", "", text)>)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(r12)
  // L5(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L5_;

D6_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L33_:;
  // p = prom<V +>{
  //   text5 = ld text;
  //   text6 = force? text5;
  //   checkMissing(text6);
  //   return text6;
  // }
  Rsh_Fir_reg_p2 = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_, CCP, RHO);
  // r15 = dyn gsub("[^\n]", "", p)
  SEXP Rsh_Fir_array_args34[3];
  Rsh_Fir_array_args34[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args34[1] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args34[2] = Rsh_Fir_reg_p2;
  SEXP Rsh_Fir_array_arg_names13[3];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_array_arg_names13[2] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_gsub, 3, Rsh_Fir_array_args34, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L34() else D7()
  // L34()
  goto L34_;

D7_:;
  // deopt 34 [r15]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L34_:;
  // nchar1 = ldf nchar in base
  Rsh_Fir_reg_nchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 31), RHO);
  // r16 = dyn nchar1(r15, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args35[4];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args35[1] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args35[2] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args35[3] = Rsh_const(CCP, 35);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar1_, 4, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L35() else D8()
  // L35()
  goto L35_;

D8_:;
  // deopt 39 [r16]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(39, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L35_:;
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r16_;
  goto L5_;

D9_:;
  // deopt 41 [r17]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r17_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L36_:;
  // goto L4(r17)
  // L4(r17)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r17_;
  goto L4_;

D10_:;
  // deopt 44 []
  Rsh_Fir_deopt(44, 0, NULL, CCP, RHO);
  return R_NilValue;

L37_:;
  // r18 = dyn __("utils", "getSrcLocation")
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args36[1] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L38() else D11()
  // L38()
  goto L38_;

D11_:;
  // deopt 47 [r18]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(47, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L38_:;
  // checkFun.0(r18)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r18_;
  (void)(Rsh_Fir_intrinsic_checkFun_v0(CCP, RHO, 1, Rsh_Fir_array_args37));
  // r19 = r18 as cls
  Rsh_Fir_reg_r19_ = Rsh_Fir_cast(Rsh_Fir_reg_r18_, /* cls */ Rsh_Fir_type(Rsh_Fir_kind_closure, 3, true));
  // p1 = prom<V +>{
  //   lastSrcref = ld lastSrcref;
  //   lastSrcref1 = force? lastSrcref;
  //   checkMissing(lastSrcref1);
  //   return lastSrcref1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3773442701_1, CCP, RHO);
  // r21 = dyn r19(p1, "line")
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_r19_, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names16, CCP, RHO);
  // check L39() else D12()
  // L39()
  goto L39_;

D12_:;
  // deopt 51 [r21]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(51, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L39_:;
  // st srcLine = r21
  Rsh_Fir_store(Rsh_const(CCP, 29), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // sym5 = ldf `is.null`
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base5 = ldf `is.null` in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args40[2];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args40[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args40);
  // if guard5 then L40() else L41()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L40()
    goto L40_;
  } else {
  // L41()
    goto L41_;
  }

L40_:;
  // srcLine = ld srcLine
  Rsh_Fir_reg_srcLine = Rsh_Fir_load(Rsh_const(CCP, 29), RHO);
  // check L42() else D13()
  // L42()
  goto L42_;

L41_:;
  // r22 = dyn base5(<sym srcLine>)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 29);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args41, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L6(r22)
  // L6(r22)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_r22_;
  goto L6_;

D13_:;
  // deopt 54 [srcLine]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_srcLine;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L42_:;
  // srcLine1 = force? srcLine
  Rsh_Fir_reg_srcLine1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcLine);
  // checkMissing(srcLine1)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_srcLine1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c1 = `==`(srcLine1, NULL)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_srcLine1_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 3);
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // goto L6(c1)
  // L6(c1)
  Rsh_Fir_reg_r23_ = Rsh_Fir_reg_c1_;
  goto L6_;

L43_:;
  // concordanceUsed = ld concordanceUsed
  Rsh_Fir_reg_concordanceUsed = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L44() else D14()
  // L44()
  goto L44_;

D14_:;
  // deopt 58 [concordanceUsed]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_concordanceUsed;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L44_:;
  // concordanceUsed1 = force? concordanceUsed
  Rsh_Fir_reg_concordanceUsed1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordanceUsed);
  // checkMissing(concordanceUsed1)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_concordanceUsed1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty()));
  // c3 = `as.logical`(concordanceUsed1)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_concordanceUsed1_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty());
  // if c3 then L45() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L45()
    goto L45_;
  } else {
  // L8()
    goto L8_;
  }

L45_:;
  // text7 = ld text
  Rsh_Fir_reg_text7_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L46() else D15()
  // L46()
  goto L46_;

D15_:;
  // deopt 60 [text7]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_text7_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L46_:;
  // text8 = force? text7
  Rsh_Fir_reg_text8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text7_);
  // checkMissing(text8)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_text8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(text8)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_text8_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c4 then L47() else L48(text8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L47()
    goto L47_;
  } else {
  // L48(text8)
    Rsh_Fir_reg_text10_ = Rsh_Fir_reg_text8_;
    goto L48_;
  }

L47_:;
  // dr = tryDispatchBuiltin.1("[", text8)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_text8_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args48);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if dc then L49() else L48(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L49()
    goto L49_;
  } else {
  // L48(dr)
    Rsh_Fir_reg_text10_ = Rsh_Fir_reg_dr;
    goto L48_;
  }

L48_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // r25 = dyn __1(text10, 1.0)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_text10_;
  Rsh_Fir_array_args50[1] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r25_;
  goto L9_;

L49_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // goto L9(dx)
  // L9(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L9_;

L50_:;
  // concordanceUsed2 = ld concordanceUsed
  Rsh_Fir_reg_concordanceUsed2_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L51() else D16()
  // L51()
  goto L51_;

D16_:;
  // deopt 67 [concordanceUsed2]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_concordanceUsed2_;
  Rsh_Fir_deopt(67, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L51_:;
  // concordanceUsed3 = force? concordanceUsed2
  Rsh_Fir_reg_concordanceUsed3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordanceUsed2_);
  // checkMissing(concordanceUsed3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_concordanceUsed3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r27 = `-`(concordanceUsed3, 1.0)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_concordanceUsed3_;
  Rsh_Fir_array_args53[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // st concordanceUsed = r27
  Rsh_Fir_store(Rsh_const(CCP, 25), Rsh_Fir_reg_r27_, RHO);
  (void)(Rsh_Fir_reg_r27_);
  // goto L11(r27)
  // L11(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L11_;

D17_:;
  // deopt 72 [newlines]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_newlines;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L53_:;
  // newlines1 = force? newlines
  Rsh_Fir_reg_newlines1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newlines);
  // checkMissing(newlines1)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_newlines1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args54, Rsh_Fir_param_types_empty()));
  // r29 = `-`(newlines1, 1.0)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_newlines1_;
  Rsh_Fir_array_args55[1] = Rsh_const(CCP, 46);
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // st newlines = r29
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_r29_, RHO);
  (void)(Rsh_Fir_reg_r29_);
  // goto L11(r29)
  // L11(r29)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r29_;
  goto L11_;

D18_:;
  // deopt 79 [srcLine2]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_srcLine2_;
  Rsh_Fir_deopt(79, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L55_:;
  // srcLine3 = force? srcLine2
  Rsh_Fir_reg_srcLine3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_srcLine2_);
  // checkMissing(srcLine3)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_srcLine3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // l = sld srcLinenum
  Rsh_Fir_reg_l = Rsh_Fir_super_load(Rsh_const(CCP, 6), RHO);
  // c6 = `is.object`(l)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c6 then L56() else L57(srcLine3, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L56()
    goto L56_;
  } else {
  // L57(srcLine3, l)
    Rsh_Fir_reg_srcLine5_ = Rsh_Fir_reg_srcLine3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L57_;
  }

L56_:;
  // dr2 = tryDispatchBuiltin.0("[<-", l, srcLine3)
  SEXP Rsh_Fir_array_args58[3];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args58[2] = Rsh_Fir_reg_srcLine3_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args58);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // if dc1 then L58() else L57(srcLine3, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L58()
    goto L58_;
  } else {
  // L57(srcLine3, dr2)
    Rsh_Fir_reg_srcLine5_ = Rsh_Fir_reg_srcLine3_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr2_;
    goto L57_;
  }

L57_:;
  // concordanceUsed4 = ld concordanceUsed
  Rsh_Fir_reg_concordanceUsed4_ = Rsh_Fir_load(Rsh_const(CCP, 25), RHO);
  // check L59() else D19()
  // L59()
  goto L59_;

L58_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty());
  // goto L13(srcLine3, dx2)
  // L13(srcLine3, dx2)
  Rsh_Fir_reg_srcLine7_ = Rsh_Fir_reg_srcLine3_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L13_;

D19_:;
  // deopt 82 [srcLine5, l2, srcLine3, concordanceUsed4]
  SEXP Rsh_Fir_array_deopt_stack23[4];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_srcLine5_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack23[2] = Rsh_Fir_reg_srcLine3_;
  Rsh_Fir_array_deopt_stack23[3] = Rsh_Fir_reg_concordanceUsed4_;
  Rsh_Fir_deopt(82, 4, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L59_:;
  // concordanceUsed5 = force? concordanceUsed4
  Rsh_Fir_reg_concordanceUsed5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordanceUsed4_);
  // checkMissing(concordanceUsed5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_concordanceUsed5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // sym6 = ldf seq_len
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // base6 = ldf seq_len in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 48), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args62);
  // if guard6 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L60_:;
  // newlines2 = ld newlines
  Rsh_Fir_reg_newlines2_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L62() else D20()
  // L62()
  goto L62_;

L61_:;
  // r31 = dyn base6(<lang `+`(1.0, newlines)>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 49);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L14(srcLine5, l2, srcLine3, concordanceUsed5, r31)
  // L14(srcLine5, l2, srcLine3, concordanceUsed5, r31)
  Rsh_Fir_reg_srcLine12_ = Rsh_Fir_reg_srcLine5_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_srcLine13_ = Rsh_Fir_reg_srcLine3_;
  Rsh_Fir_reg_concordanceUsed8_ = Rsh_Fir_reg_concordanceUsed5_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r31_;
  goto L14_;

D20_:;
  // deopt 85 [srcLine5, l2, srcLine3, concordanceUsed5, 1.0, newlines2]
  SEXP Rsh_Fir_array_deopt_stack24[6];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_srcLine5_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_srcLine3_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_concordanceUsed5_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_const(CCP, 46);
  Rsh_Fir_array_deopt_stack24[5] = Rsh_Fir_reg_newlines2_;
  Rsh_Fir_deopt(85, 6, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L62_:;
  // newlines3 = force? newlines2
  Rsh_Fir_reg_newlines3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newlines2_);
  // checkMissing(newlines3)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_newlines3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r33 = `+`(1.0, newlines3)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_newlines3_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty());
  // r34 = seq_len(r33)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // goto L14(srcLine5, l2, srcLine3, concordanceUsed5, r34)
  // L14(srcLine5, l2, srcLine3, concordanceUsed5, r34)
  Rsh_Fir_reg_srcLine12_ = Rsh_Fir_reg_srcLine5_;
  Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l2_;
  Rsh_Fir_reg_srcLine13_ = Rsh_Fir_reg_srcLine3_;
  Rsh_Fir_reg_concordanceUsed8_ = Rsh_Fir_reg_concordanceUsed5_;
  Rsh_Fir_reg_r32_ = Rsh_Fir_reg_r34_;
  goto L14_;

D21_:;
  // deopt 93 [concordanceUsed9]
  SEXP Rsh_Fir_array_deopt_stack25[1];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_concordanceUsed9_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L64_:;
  // concordanceUsed10 = force? concordanceUsed9
  Rsh_Fir_reg_concordanceUsed10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_concordanceUsed9_);
  // checkMissing(concordanceUsed10)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_concordanceUsed10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r37 = `!`(concordanceUsed10)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_concordanceUsed10_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty());
  // if c7 then L65() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L65()
    goto L65_;
  } else {
  // L15()
    goto L15_;
  }

L65_:;
  // offset = ld offset
  Rsh_Fir_reg_offset = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L66() else D22()
  // L66()
  goto L66_;

D22_:;
  // deopt 96 [offset]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_offset;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L66_:;
  // offset1 = force? offset
  Rsh_Fir_reg_offset1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_offset);
  // checkMissing(offset1)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_offset1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // newlines4 = ld newlines
  Rsh_Fir_reg_newlines4_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L67() else D23()
  // L67()
  goto L67_;

D23_:;
  // deopt 97 [offset1, newlines4]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_offset1_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_newlines4_;
  Rsh_Fir_deopt(97, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L67_:;
  // newlines5 = force? newlines4
  Rsh_Fir_reg_newlines5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newlines4_);
  // checkMissing(newlines5)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_newlines5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // r38 = `+`(offset1, newlines5)
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_offset1_;
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_newlines5_;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_builtin(66, CCP, RHO, 2, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // sst offset = r38
  Rsh_Fir_super_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r38_, RHO);
  (void)(Rsh_Fir_reg_r38_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r38
  return Rsh_Fir_reg_r38_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_(SEXP CCP, SEXP RHO) {
  // text5 = ld text
  Rsh_Fir_reg_text5_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // text6 = force? text5
  Rsh_Fir_reg_text6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_text5_);
  // checkMissing(text6)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_text6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // return text6
  return Rsh_Fir_reg_text6_;
}
SEXP Rsh_Fir_user_promise_inner3773442701_1(SEXP CCP, SEXP RHO) {
  // lastSrcref = ld lastSrcref
  Rsh_Fir_reg_lastSrcref = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // lastSrcref1 = force? lastSrcref
  Rsh_Fir_reg_lastSrcref1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_lastSrcref);
  // checkMissing(lastSrcref1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_lastSrcref1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return lastSrcref1
  return Rsh_Fir_reg_lastSrcref1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
