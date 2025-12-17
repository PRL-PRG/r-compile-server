#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner561500617_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner561500617_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner561500617_(SEXP CCP, SEXP RHO);
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
  // r = clos inner561500617
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner561500617_, RHO, CCP);
  // st `.mergeClassDefSlots` = r
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
SEXP Rsh_Fir_user_function_inner561500617_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner561500617 dynamic dispatch ([ClassDef, `...`])

  return Rsh_Fir_user_version_inner561500617_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner561500617_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner561500617 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner561500617/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ClassDef;  // ClassDef
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_list;  // list
  SEXP Rsh_Fir_reg_ddd1_;  // ddd1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_slots;  // slots
  SEXP Rsh_Fir_reg_slots1_;  // slots1
  SEXP Rsh_Fir_reg_names;  // names
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_slots2_;  // slots2
  SEXP Rsh_Fir_reg_slots3_;  // slots3
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_slots4_;  // slots4
  SEXP Rsh_Fir_reg_slots5_;  // slots5
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_slots7_;  // slots7
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_slot__;  // slot__
  SEXP Rsh_Fir_reg_slotNames;  // slotNames
  SEXP Rsh_Fir_reg_slotNames1_;  // slotNames1
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_slotNames3_;  // slotNames3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i11_;  // i11
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_ClassDef1_;  // ClassDef1
  SEXP Rsh_Fir_reg_ClassDef2_;  // ClassDef2

  // Bind parameters
  Rsh_Fir_reg_ClassDef = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ClassDef = ClassDef
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ClassDef, RHO);
  (void)(Rsh_Fir_reg_ClassDef);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L6() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L6()
    goto L6_;
  } else {
  // L7()
    goto L7_;
  }

L0_:;
  // st slots = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf names
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base1 = ldf names in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard1 then L10() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L10()
    goto L10_;
  } else {
  // L11()
    goto L11_;
  }

L1_:;
  // st slotNames = r4
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // sym2 = ldf seq_along
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base2 = ldf seq_along in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard2 then L14() else L15()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L14()
    goto L14_;
  } else {
  // L15()
    goto L15_;
  }

L2_:;
  // s = toForSeq(r7)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 8);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c then L17() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L17()
    goto L17_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // l1 = ld ClassDef
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // slot__ = ldf `slot<-`
  Rsh_Fir_reg_slot__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L23() else D7()
  // L23()
  goto L23_;

L5_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // slots4 = ld slots
  Rsh_Fir_reg_slots4_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

L6_:;
  // list = ldf list
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L8() else D0()
  // L8()
  goto L8_;

L7_:;
  // r = dyn base(<sym ...>)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args8, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 2 []
  Rsh_Fir_deopt(2, 0, NULL, CCP, RHO);
  return R_NilValue;

L8_:;
  // ddd1 = ld `...`
  Rsh_Fir_reg_ddd1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // r2 = dyn list[`...`](ddd1)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_ddd1_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = Rsh_const(CCP, 2);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 1, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L9() else D1()
  // L9()
  goto L9_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L9_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L10_:;
  // slots = ld slots
  Rsh_Fir_reg_slots = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L12() else D2()
  // L12()
  goto L12_;

L11_:;
  // r3 = dyn base1(<sym slots>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r3)
  // L1(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L1_;

D2_:;
  // deopt 8 [slots]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_slots;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L12_:;
  // slots1 = force? slots
  Rsh_Fir_reg_slots1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots);
  // checkMissing(slots1)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_slots1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // names = ldf names in base
  Rsh_Fir_reg_names = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r5 = dyn names(slots1)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_slots1_;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_names, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L13() else D3()
  // L13()
  goto L13_;

D3_:;
  // deopt 11 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(11, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L13_:;
  // goto L1(r5)
  // L1(r5)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r5_;
  goto L1_;

L14_:;
  // slots2 = ld slots
  Rsh_Fir_reg_slots2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L16() else D4()
  // L16()
  goto L16_;

L15_:;
  // r6 = dyn base2(<sym slots>)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args13, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r6_;
  goto L2_;

D4_:;
  // deopt 14 [slots2]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_slots2_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L16_:;
  // slots3 = force? slots2
  Rsh_Fir_reg_slots3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots2_);
  // checkMissing(slots3)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_slots3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty()));
  // r8 = seq_along(slots3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_slots3_;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L2(r8)
  // L2(r8)
  Rsh_Fir_reg_r7_ = Rsh_Fir_reg_r8_;
  goto L2_;

L17_:;
  // ClassDef1 = ld ClassDef
  Rsh_Fir_reg_ClassDef1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

D5_:;
  // deopt 17 [i2, slots4]
  SEXP Rsh_Fir_array_deopt_stack4[2];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack4[1] = Rsh_Fir_reg_slots4_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L18_:;
  // slots5 = force? slots4
  Rsh_Fir_reg_slots5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slots4_);
  // checkMissing(slots5)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_slots5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(slots5)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_slots5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c1 then L19() else L20(i2, slots5)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L19()
    goto L19_;
  } else {
  // L20(i2, slots5)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_slots7_ = Rsh_Fir_reg_slots5_;
    goto L20_;
  }

L19_:;
  // dr = tryDispatchBuiltin.1("[[", slots5)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_slots5_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args18);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // if dc then L21() else L20(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L21()
    goto L21_;
  } else {
  // L20(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_slots7_ = Rsh_Fir_reg_dr;
    goto L20_;
  }

L20_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L22() else D6()
  // L22()
  goto L22_;

L21_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L4(i2, dx)
  // L4(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D6_:;
  // deopt 19 [i6, slots7, i9]
  SEXP Rsh_Fir_array_deopt_stack5[3];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_slots7_;
  Rsh_Fir_array_deopt_stack5[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(19, 3, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L22_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r9 = dyn __(slots7, i10)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_slots7_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_i10_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(i6, r9)
  // L4(i6, r9)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r9_;
  goto L4_;

D7_:;
  // deopt 23 [i8, dx1, l1, dx1]
  SEXP Rsh_Fir_array_deopt_stack6[4];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack6[2] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_deopt_stack6[3] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_deopt(23, 4, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L23_:;
  // p = prom<V +>{
  //   slotNames = ld slotNames;
  //   slotNames1 = force? slotNames;
  //   checkMissing(slotNames1);
  //   c2 = `is.object`(slotNames1);
  //   if c2 then L1() else L2(slotNames1);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[[", slotNames1);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(slotNames3):
  //   i11 = ld i;
  //   i12 = force? i11;
  //   __1 = ldf `[[` in base;
  //   r10 = dyn __1(slotNames3, i12);
  //   goto L0(r10);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner561500617_, CCP, RHO);
  // r12 = dyn slot__(l1, NULL, p, dx1)
  SEXP Rsh_Fir_array_args28[4];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args28[1] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args28[2] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args28[3] = Rsh_Fir_reg_dx1_;
  SEXP Rsh_Fir_array_arg_names7[4];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_array_arg_names7[3] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_slot__, 4, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L24() else D8()
  // L24()
  goto L24_;

D8_:;
  // deopt 26 [i8, dx1, r12]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_r12_;
  Rsh_Fir_deopt(26, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L24_:;
  // st ClassDef = r12
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L3(i8)
  // L3(i8)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i8_;
  goto L3_;

D9_:;
  // deopt 31 [ClassDef1]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_ClassDef1_;
  Rsh_Fir_deopt(31, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L25_:;
  // ClassDef2 = force? ClassDef1
  Rsh_Fir_reg_ClassDef2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ClassDef1_);
  // checkMissing(ClassDef2)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_ClassDef2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return ClassDef2
  return Rsh_Fir_reg_ClassDef2_;
}
SEXP Rsh_Fir_user_promise_inner561500617_(SEXP CCP, SEXP RHO) {
  // slotNames = ld slotNames
  Rsh_Fir_reg_slotNames = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // slotNames1 = force? slotNames
  Rsh_Fir_reg_slotNames1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_slotNames);
  // checkMissing(slotNames1)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_slotNames1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(slotNames1)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_slotNames1_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(slotNames1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(slotNames1)
    Rsh_Fir_reg_slotNames3_ = Rsh_Fir_reg_slotNames1_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[[", slotNames1)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_slotNames1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_slotNames3_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // i11 = ld i
  Rsh_Fir_reg_i11_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // i12 = force? i11
  Rsh_Fir_reg_i12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i11_);
  // __1 = ldf `[[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r10 = dyn __1(slotNames3, i12)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_slotNames3_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_i12_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L0(r10)
  // L0(r10)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r10_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
