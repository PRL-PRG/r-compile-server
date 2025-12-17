#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2107108032_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2107108032_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner2107108032
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2107108032_, RHO, CCP);
  // st xyinch = r
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
SEXP Rsh_Fir_user_function_inner2107108032_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2107108032 dynamic dispatch ([xy, `warn.log`])

  return Rsh_Fir_user_version_inner2107108032_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2107108032_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2107108032 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2107108032/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_xy;  // xy
  SEXP Rsh_Fir_reg_warn_log;  // warn_log
  SEXP Rsh_Fir_reg_xy_isMissing;  // xy_isMissing
  SEXP Rsh_Fir_reg_xy_orDefault;  // xy_orDefault
  SEXP Rsh_Fir_reg_warn_log_isMissing;  // warn_log_isMissing
  SEXP Rsh_Fir_reg_warn_log_orDefault;  // warn_log_orDefault
  SEXP Rsh_Fir_reg_warn_log1_;  // warn_log1
  SEXP Rsh_Fir_reg_warn_log2_;  // warn_log2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_par;  // par
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_par1_;  // par1
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_warning;  // warning
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_par2_;  // par2
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_xy1_;  // xy1
  SEXP Rsh_Fir_reg_xy2_;  // xy2
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_xy5_;  // xy5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_u;  // u
  SEXP Rsh_Fir_reg_u1_;  // u1
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_xy7_;  // xy7
  SEXP Rsh_Fir_reg_u3_;  // u3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_xy9_;  // xy9
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_u4_;  // u4
  SEXP Rsh_Fir_reg_u5_;  // u5
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_xy11_;  // xy11
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_u7_;  // u7
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_xy13_;  // xy13
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_u8_;  // u8
  SEXP Rsh_Fir_reg_u9_;  // u9
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_xy15_;  // xy15
  SEXP Rsh_Fir_reg_u11_;  // u11
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_xy17_;  // xy17
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_u12_;  // u12
  SEXP Rsh_Fir_reg_u13_;  // u13
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_xy19_;  // xy19
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_u15_;  // u15
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_xy21_;  // xy21
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_par3_;  // par3
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_r16_;  // r16

  // Bind parameters
  Rsh_Fir_reg_xy = PARAMS[0];
  Rsh_Fir_reg_warn_log = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // xy_isMissing = missing.0(xy)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_xy;
  Rsh_Fir_reg_xy_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if xy_isMissing then L0(1.0) else L0(xy)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_xy_isMissing)) {
  // L0(1.0)
    Rsh_Fir_reg_xy_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(xy)
    Rsh_Fir_reg_xy_orDefault = Rsh_Fir_reg_xy;
    goto L0_;
  }

L0_:;
  // st xy = xy_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_xy_orDefault, RHO);
  (void)(Rsh_Fir_reg_xy_orDefault);
  // warn_log_isMissing = missing.0(warn_log)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_warn_log;
  Rsh_Fir_reg_warn_log_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if warn_log_isMissing then L1(TRUE) else L1(warn_log)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_warn_log_isMissing)) {
  // L1(TRUE)
    Rsh_Fir_reg_warn_log_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(warn_log)
    Rsh_Fir_reg_warn_log_orDefault = Rsh_Fir_reg_warn_log;
    goto L1_;
  }

L1_:;
  // st `warn.log` = warn_log_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_warn_log_orDefault, RHO);
  (void)(Rsh_Fir_reg_warn_log_orDefault);
  // warn_log1 = ld `warn.log`
  Rsh_Fir_reg_warn_log1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L11() else D0()
  // L11()
  goto L11_;

L2_:;
  // c15 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_c2_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c15 then L20() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L20()
    goto L20_;
  } else {
  // L4()
    goto L4_;
  }

L3_:;
  // c12 = `as.logical`(c5)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_c5_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c13 = `&&`(c4, c12)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_c4_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_c12_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // goto L2(c13)
  // L2(c13)
  Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c13_;
  goto L2_;

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // par2 = ldf par
  Rsh_Fir_reg_par2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L6_:;
  // r14 = `*`(xy5, r6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_xy5_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(68, CCP, RHO, 2, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // par3 = ldf par
  Rsh_Fir_reg_par3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L46() else D15()
  // L46()
  goto L46_;

L7_:;
  // u4 = ld u
  Rsh_Fir_reg_u4_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L33() else D11()
  // L33()
  goto L33_;

L8_:;
  // r9 = `-`(dx6, dx7)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // u8 = ld u
  Rsh_Fir_reg_u8_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L37() else D12()
  // L37()
  goto L37_;

L9_:;
  // u12 = ld u
  Rsh_Fir_reg_u12_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L41() else D13()
  // L41()
  goto L41_;

L10_:;
  // r12 = `-`(dx14, dx15)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(67, CCP, RHO, 2, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c20 = ldf c in base
  Rsh_Fir_reg_c20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r13 = dyn c20(r9, r12)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c20_, 2, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L45() else D14()
  // L45()
  goto L45_;

D0_:;
  // deopt 0 [warn_log1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_warn_log1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L11_:;
  // warn_log2 = force? warn_log1
  Rsh_Fir_reg_warn_log2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_warn_log1_);
  // checkMissing(warn_log2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_warn_log2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty()));
  // c = `as.logical`(warn_log2)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_warn_log2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c then L12() else L2(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L12()
    goto L12_;
  } else {
  // L2(c)
    Rsh_Fir_reg_c2_ = Rsh_Fir_reg_c;
    goto L2_;
  }

L12_:;
  // par = ldf par
  Rsh_Fir_reg_par = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L13() else D1()
  // L13()
  goto L13_;

D1_:;
  // deopt 3 [c]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_c;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L13_:;
  // r = dyn par("xlog")
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par, 1, Rsh_Fir_array_args11, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

D2_:;
  // deopt 5 [c, r]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r1;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L14_:;
  // c3 = `as.logical`(r)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c3 then L3(c, c3) else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L3(c, c3)
    Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c;
    Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c3_;
    goto L3_;
  } else {
  // L15()
    goto L15_;
  }

L15_:;
  // par1 = ldf par
  Rsh_Fir_reg_par1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

D3_:;
  // deopt 7 [c, c3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_deopt(7, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // r1 = dyn par1("ylog")
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par1_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 9 [c, c3, r1]
  SEXP Rsh_Fir_array_deopt_stack4[3];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_c;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_deopt_stack4[2] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(9, 3, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L17_:;
  // c8 = `as.logical`(r1)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // c9 = `||`(c3, c8)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_c8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L3(c, c9)
  // L3(c, c9)
  Rsh_Fir_reg_c4_ = Rsh_Fir_reg_c;
  Rsh_Fir_reg_c5_ = Rsh_Fir_reg_c9_;
  goto L3_;

L20_:;
  // warning = ldf warning
  Rsh_Fir_reg_warning = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L21() else D5()
  // L21()
  goto L21_;

D5_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L21_:;
  // r2 = dyn warning("log scale:  xyinch() is nonsense")
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_warning, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

D6_:;
  // deopt 15 [r2]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(15, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // goto L5()
  // L5()
  goto L5_;

D7_:;
  // deopt 19 []
  Rsh_Fir_deopt(19, 0, NULL, CCP, RHO);
  return R_NilValue;

L24_:;
  // r4 = dyn par2("usr")
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par2_, 1, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

D8_:;
  // deopt 21 [r4]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // st u = r4
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // xy1 = ld xy
  Rsh_Fir_reg_xy1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L26() else D9()
  // L26()
  goto L26_;

D9_:;
  // deopt 23 [xy1]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_xy1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L26_:;
  // xy2 = force? xy1
  Rsh_Fir_reg_xy2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_xy1_);
  // checkMissing(xy2)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_xy2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty()));
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L27_:;
  // u = ld u
  Rsh_Fir_reg_u = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L29() else D10()
  // L29()
  goto L29_;

L28_:;
  // r5 = dyn base(<lang `-`(`[`(u, 2), `[`(u, 1))>, <lang `-`(`[`(u, 4), `[`(u, 3))>)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args20[1] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L6(xy2, r5)
  // L6(xy2, r5)
  Rsh_Fir_reg_xy5_ = Rsh_Fir_reg_xy2_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L6_;

D10_:;
  // deopt 26 [xy2, u]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_xy2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_u;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L29_:;
  // u1 = force? u
  Rsh_Fir_reg_u1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u);
  // checkMissing(u1)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_u1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // c16 = `is.object`(u1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_u1_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if c16 then L30() else L31(xy2, u1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c16_)) {
  // L30()
    goto L30_;
  } else {
  // L31(xy2, u1)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_xy2_;
    Rsh_Fir_reg_u3_ = Rsh_Fir_reg_u1_;
    goto L31_;
  }

L30_:;
  // dr = tryDispatchBuiltin.1("[", u1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_u1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if dc then L32() else L31(xy2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L32()
    goto L32_;
  } else {
  // L31(xy2, dr)
    Rsh_Fir_reg_xy7_ = Rsh_Fir_reg_xy2_;
    Rsh_Fir_reg_u3_ = Rsh_Fir_reg_dr;
    goto L31_;
  }

L31_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r7 = dyn __(u3, 2)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_u3_;
  Rsh_Fir_array_args25[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args25, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L7(xy7, r7)
  // L7(xy7, r7)
  Rsh_Fir_reg_xy9_ = Rsh_Fir_reg_xy7_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L7_;

L32_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L7(xy2, dx)
  // L7(xy2, dx)
  Rsh_Fir_reg_xy9_ = Rsh_Fir_reg_xy2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L7_;

D11_:;
  // deopt 30 [xy9, dx1, u4]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_xy9_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_u4_;
  Rsh_Fir_deopt(30, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L33_:;
  // u5 = force? u4
  Rsh_Fir_reg_u5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u4_);
  // checkMissing(u5)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_u5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // c17 = `is.object`(u5)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_u5_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if c17 then L34() else L35(xy9, dx1, u5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c17_)) {
  // L34()
    goto L34_;
  } else {
  // L35(xy9, dx1, u5)
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_xy9_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_u7_ = Rsh_Fir_reg_u5_;
    goto L35_;
  }

L34_:;
  // dr2 = tryDispatchBuiltin.1("[", u5)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args29[1] = Rsh_Fir_reg_u5_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args29);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // if dc1 then L36() else L35(xy9, dx1, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L36()
    goto L36_;
  } else {
  // L35(xy9, dx1, dr2)
    Rsh_Fir_reg_xy11_ = Rsh_Fir_reg_xy9_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_;
    Rsh_Fir_reg_u7_ = Rsh_Fir_reg_dr2_;
    goto L35_;
  }

L35_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r8 = dyn __1(u7, 1)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_u7_;
  Rsh_Fir_array_args31[1] = Rsh_const(CCP, 18);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args31, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L8(xy11, dx3, r8)
  // L8(xy11, dx3, r8)
  Rsh_Fir_reg_xy13_ = Rsh_Fir_reg_xy11_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx3_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r8_;
  goto L8_;

L36_:;
  // dx5 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // goto L8(xy9, dx1, dx5)
  // L8(xy9, dx1, dx5)
  Rsh_Fir_reg_xy13_ = Rsh_Fir_reg_xy9_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
  goto L8_;

D12_:;
  // deopt 36 [xy13, u8]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_xy13_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_u8_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L37_:;
  // u9 = force? u8
  Rsh_Fir_reg_u9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u8_);
  // checkMissing(u9)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_u9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c18 = `is.object`(u9)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_u9_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c18 then L38() else L39(xy13, u9)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c18_)) {
  // L38()
    goto L38_;
  } else {
  // L39(xy13, u9)
    Rsh_Fir_reg_xy15_ = Rsh_Fir_reg_xy13_;
    Rsh_Fir_reg_u11_ = Rsh_Fir_reg_u9_;
    goto L39_;
  }

L38_:;
  // dr4 = tryDispatchBuiltin.1("[", u9)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_u9_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc2 then L40() else L39(xy13, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L40()
    goto L40_;
  } else {
  // L39(xy13, dr4)
    Rsh_Fir_reg_xy15_ = Rsh_Fir_reg_xy13_;
    Rsh_Fir_reg_u11_ = Rsh_Fir_reg_dr4_;
    goto L39_;
  }

L39_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r10 = dyn __2(u11, 4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_u11_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 19);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L9(xy15, r10)
  // L9(xy15, r10)
  Rsh_Fir_reg_xy17_ = Rsh_Fir_reg_xy15_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r10_;
  goto L9_;

L40_:;
  // dx8 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L9(xy13, dx8)
  // L9(xy13, dx8)
  Rsh_Fir_reg_xy17_ = Rsh_Fir_reg_xy13_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L9_;

D13_:;
  // deopt 40 [xy17, dx9, u12]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_xy17_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_dx9_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_u12_;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L41_:;
  // u13 = force? u12
  Rsh_Fir_reg_u13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_u12_);
  // checkMissing(u13)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_u13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // c19 = `is.object`(u13)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_u13_;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if c19 then L42() else L43(xy17, dx9, u13)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L42()
    goto L42_;
  } else {
  // L43(xy17, dx9, u13)
    Rsh_Fir_reg_xy19_ = Rsh_Fir_reg_xy17_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_u15_ = Rsh_Fir_reg_u13_;
    goto L43_;
  }

L42_:;
  // dr6 = tryDispatchBuiltin.1("[", u13)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_u13_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args41);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty());
  // if dc3 then L44() else L43(xy17, dx9, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L44()
    goto L44_;
  } else {
  // L43(xy17, dx9, dr6)
    Rsh_Fir_reg_xy19_ = Rsh_Fir_reg_xy17_;
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
    Rsh_Fir_reg_u15_ = Rsh_Fir_reg_dr6_;
    goto L43_;
  }

L43_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // r11 = dyn __3(u15, 3)
  SEXP Rsh_Fir_array_args43[2];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_u15_;
  Rsh_Fir_array_args43[1] = Rsh_const(CCP, 20);
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args43, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L10(xy19, dx11, r11)
  // L10(xy19, dx11, r11)
  Rsh_Fir_reg_xy21_ = Rsh_Fir_reg_xy19_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r11_;
  goto L10_;

L44_:;
  // dx13 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L10(xy17, dx9, dx13)
  // L10(xy17, dx9, dx13)
  Rsh_Fir_reg_xy21_ = Rsh_Fir_reg_xy17_;
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx9_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
  goto L10_;

D14_:;
  // deopt 47 [xy21, r13]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_xy21_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_r13_;
  Rsh_Fir_deopt(47, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L45_:;
  // goto L6(xy21, r13)
  // L6(xy21, r13)
  Rsh_Fir_reg_xy5_ = Rsh_Fir_reg_xy21_;
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r13_;
  goto L6_;

D15_:;
  // deopt 49 [r14]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L46_:;
  // r15 = dyn par3("pin")
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_par3_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L47() else D16()
  // L47()
  goto L47_;

D16_:;
  // deopt 51 [r14, r15]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L47_:;
  // r16 = `/`(r14, r15)
  SEXP Rsh_Fir_array_args46[2];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_r15_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(69, CCP, RHO, 2, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r16
  return Rsh_Fir_reg_r16_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
