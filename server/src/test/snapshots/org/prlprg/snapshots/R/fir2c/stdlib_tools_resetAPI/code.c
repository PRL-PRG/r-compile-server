#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1985386329_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1985386329_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner1985386329
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1985386329_, RHO, CCP);
  // st resetAPI = r
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
SEXP Rsh_Fir_user_function_inner1985386329_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1985386329 dynamic dispatch ([newloc])

  return Rsh_Fir_user_version_inner1985386329_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1985386329_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1985386329 version 0 (* -+> V)

  if (NPARAMS != 1) Rsh_error("FIŘ arity mismatch for inner1985386329/0: expected 1, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_newloc;  // newloc
  SEXP Rsh_Fir_reg_newloc_isMissing;  // newloc_isMissing
  SEXP Rsh_Fir_reg_newloc_orDefault;  // newloc_orDefault
  SEXP Rsh_Fir_reg_newloc1_;  // newloc1
  SEXP Rsh_Fir_reg_newloc2_;  // newloc2
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_newloc3_;  // newloc3
  SEXP Rsh_Fir_reg_newloc4_;  // newloc4
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_newloc6_;  // newloc6
  SEXP Rsh_Fir_reg_l2_;  // l2
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_newloc8_;  // newloc8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_r11_;  // r11

  // Bind parameters
  Rsh_Fir_reg_newloc = PARAMS[0];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // newloc_isMissing = missing.0(newloc)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_newloc;
  Rsh_Fir_reg_newloc_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if newloc_isMissing then L0("") else L0(newloc)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_newloc_isMissing)) {
  // L0("")
    Rsh_Fir_reg_newloc_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(newloc)
    Rsh_Fir_reg_newloc_orDefault = Rsh_Fir_reg_newloc;
    goto L0_;
  }

L0_:;
  // st newloc = newloc_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_newloc_orDefault, RHO);
  (void)(Rsh_Fir_reg_newloc_orDefault);
  // newloc1 = ld newloc
  Rsh_Fir_reg_newloc1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L3() else D0()
  // L3()
  goto L3_;

L1_:;
  // goto L2()
  // L2()
  goto L2_;

L2_:;
  // l3 = ld apidata
  Rsh_Fir_reg_l3_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c2 = `is.object`(l3)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c2 then L12() else L13(NULL, l3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L12()
    goto L12_;
  } else {
  // L13(NULL, l3)
    Rsh_Fir_reg_r3_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    goto L13_;
  }

D0_:;
  // deopt 0 [newloc1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_newloc1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L3_:;
  // newloc2 = force? newloc1
  Rsh_Fir_reg_newloc2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newloc1_);
  // checkMissing(newloc2)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_newloc2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // r = `!=`(newloc2, "")
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_newloc2_;
  Rsh_Fir_array_args3[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r1;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c then L4() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L1()
    goto L1_;
  }

L4_:;
  // newloc3 = ld newloc
  Rsh_Fir_reg_newloc3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L5() else D1()
  // L5()
  goto L5_;

D1_:;
  // deopt 4 [newloc3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_newloc3_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L5_:;
  // newloc4 = force? newloc3
  Rsh_Fir_reg_newloc4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_newloc3_);
  // checkMissing(newloc4)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_newloc4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty()));
  // l = ld apidata
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c1 = `is.object`(l)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c1 then L7() else L8(newloc4, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L7()
    goto L7_;
  } else {
  // L8(newloc4, l)
    Rsh_Fir_reg_newloc6_ = Rsh_Fir_reg_newloc4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_l;
    goto L8_;
  }

L6_:;
  // st apidata = dx1
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // goto L2()
  // L2()
  goto L2_;

L7_:;
  // dr = tryDispatchBuiltin.0("$<-", l, newloc4)
  SEXP Rsh_Fir_array_args7[3];
  Rsh_Fir_array_args7[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args7[2] = Rsh_Fir_reg_newloc4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args7);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if dc then L9() else L8(newloc4, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L9()
    goto L9_;
  } else {
  // L8(newloc4, dr)
    Rsh_Fir_reg_newloc6_ = Rsh_Fir_reg_newloc4_;
    Rsh_Fir_reg_l2_ = Rsh_Fir_reg_dr;
    goto L8_;
  }

L8_:;
  // r1 = `$<-`(l2, <sym wreloc>, newloc4)
  SEXP Rsh_Fir_array_args9[3];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_l2_;
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args9[2] = Rsh_Fir_reg_newloc4_;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L6(newloc6, r1)
  // L6(newloc6, r1)
  Rsh_Fir_reg_newloc8_ = Rsh_Fir_reg_newloc6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1_;
  goto L6_;

L9_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // goto L6(newloc4, dx)
  // L6(newloc4, dx)
  Rsh_Fir_reg_newloc8_ = Rsh_Fir_reg_newloc4_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L6_;

L11_:;
  // st apidata = dx3
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // l6 = ld apidata
  Rsh_Fir_reg_l6_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // c3 = `is.object`(l6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c3 then L16() else L17(NULL, l6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L16()
    goto L16_;
  } else {
  // L17(NULL, l6)
    Rsh_Fir_reg_r8_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    goto L17_;
  }

L12_:;
  // dr2 = tryDispatchBuiltin.0("$<-", l3, NULL)
  SEXP Rsh_Fir_array_args12[3];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_args12[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args12);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc1 then L14() else L13(NULL, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L14()
    goto L14_;
  } else {
  // L13(NULL, dr2)
    Rsh_Fir_reg_r3_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_dr2_;
    goto L13_;
  }

L13_:;
  // r6 = `$<-`(l5, <sym wrelines>, NULL)
  SEXP Rsh_Fir_array_args14[3];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L11(r6)
  // L11(r6)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r6_;
  goto L11_;

L14_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L11(dx2)
  // L11(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L11_;

L15_:;
  // st apidata = dx5
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r10
  return Rsh_Fir_reg_r10_;

L16_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l6, NULL)
  SEXP Rsh_Fir_array_args16[3];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_l6_;
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args16);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if dc2 then L18() else L17(NULL, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L18()
    goto L18_;
  } else {
  // L17(NULL, dr4)
    Rsh_Fir_reg_r8_ = Rsh_const(CCP, 4);
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_dr4_;
    goto L17_;
  }

L17_:;
  // r11 = `$<-`(l8, <sym fapi>, NULL)
  SEXP Rsh_Fir_array_args18[3];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_args18[1] = Rsh_const(CCP, 8);
  Rsh_Fir_array_args18[2] = Rsh_const(CCP, 4);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // goto L15(r8, r11)
  // L15(r8, r11)
  Rsh_Fir_reg_r10_ = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_;
  goto L15_;

L18_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L15(NULL, dx4)
  // L15(NULL, dx4)
  Rsh_Fir_reg_r10_ = Rsh_const(CCP, 4);
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L15_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
