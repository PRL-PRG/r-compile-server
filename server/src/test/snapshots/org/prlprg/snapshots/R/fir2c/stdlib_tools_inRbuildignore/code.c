#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2843021224_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2843021224_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2843021224_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2843021224_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2843021224_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2843021224_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2843021224_4(SEXP CCP, SEXP RHO);
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
  // r = clos inner2843021224
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2843021224_, RHO, CCP);
  // st inRbuildignore = r
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
SEXP Rsh_Fir_user_function_inner2843021224_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2843021224 dynamic dispatch ([files, pkgdir])

  return Rsh_Fir_user_version_inner2843021224_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2843021224_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2843021224 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2843021224/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_files;  // files
  SEXP Rsh_Fir_reg_pkgdir;  // pkgdir
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_files1_;  // files1
  SEXP Rsh_Fir_reg_files2_;  // files2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_get_exclude_patterns;  // get_exclude_patterns
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_file_path;  // file_path
  SEXP Rsh_Fir_reg_pkgdir1_;  // pkgdir1
  SEXP Rsh_Fir_reg_pkgdir2_;  // pkgdir2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_file_exists;  // file_exists
  SEXP Rsh_Fir_reg_ignore_file;  // ignore_file
  SEXP Rsh_Fir_reg_ignore_file1_;  // ignore_file1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_ignore;  // ignore
  SEXP Rsh_Fir_reg_ignore1_;  // ignore1
  SEXP Rsh_Fir_reg_readLines;  // readLines
  SEXP Rsh_Fir_reg_ignore_file2_;  // ignore_file2
  SEXP Rsh_Fir_reg_ignore_file3_;  // ignore_file3
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_ignore2_;  // ignore2
  SEXP Rsh_Fir_reg_ignore3_;  // ignore3
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_ignore5_;  // ignore5
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_ignore8_;  // ignore8
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_ignore9_;  // ignore9
  SEXP Rsh_Fir_reg_ignore10_;  // ignore10
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_exclude;  // exclude
  SEXP Rsh_Fir_reg_exclude1_;  // exclude1
  SEXP Rsh_Fir_reg_grepl;  // grepl
  SEXP Rsh_Fir_reg_e;  // e
  SEXP Rsh_Fir_reg_e1_;  // e1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_files3_;  // files3
  SEXP Rsh_Fir_reg_files4_;  // files4
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_exclude2_;  // exclude2
  SEXP Rsh_Fir_reg_exclude3_;  // exclude3

  // Bind parameters
  Rsh_Fir_reg_files = PARAMS[0];
  Rsh_Fir_reg_pkgdir = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st files = files
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_files, RHO);
  (void)(Rsh_Fir_reg_files);
  // st pkgdir = pkgdir
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_pkgdir, RHO);
  (void)(Rsh_Fir_reg_pkgdir);
  // sym = ldf `rep.int`
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base = ldf `rep.int` in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L9() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L9()
    goto L9_;
  } else {
  // L10()
    goto L10_;
  }

L0_:;
  // st exclude = r1
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // get_exclude_patterns = ldf get_exclude_patterns
  Rsh_Fir_reg_get_exclude_patterns = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // check L16() else D3()
  // L16()
  goto L16_;

L1_:;
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // r5 = dyn rep_int(FALSE, r3)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args1, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L15() else D2()
  // L15()
  goto L15_;

L2_:;
  // goto L4()
  // L4()
  goto L4_;

L3_:;
  // st ignore = r12
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r12_, RHO);
  (void)(Rsh_Fir_reg_r12_);
  // goto L4()
  // L4()
  goto L4_;

L4_:;
  // ignore2 = ld ignore
  Rsh_Fir_reg_ignore2_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L30() else D13()
  // L30()
  goto L30_;

L5_:;
  // s = toForSeq(dx1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 8);
  // goto L7(i)
  // L7(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L7_;

L6_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // r20 = dyn __(ignore8, r18)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_ignore8_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L5(r20)
  // L5(r20)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r20_;
  goto L5_;

L7_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c3 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c3 then L38() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L38()
    goto L38_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 12);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st e = x
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // exclude = ld exclude
  Rsh_Fir_reg_exclude = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L39() else D16()
  // L39()
  goto L39_;

L9_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard1 then L11() else L12()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L11()
    goto L11_;
  } else {
  // L12()
    goto L12_;
  }

L10_:;
  // r = dyn base(FALSE, <lang length(files)>)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args9[1] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args9, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

L11_:;
  // files1 = ld files
  Rsh_Fir_reg_files1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L13() else D0()
  // L13()
  goto L13_;

L12_:;
  // r2 = dyn base1(<sym files>)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args10, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 5 [files1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_files1_;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L13_:;
  // files2 = force? files1
  Rsh_Fir_reg_files2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files1_);
  // checkMissing(files2)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_files2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r4 = dyn length(files2)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_files2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args12, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L14() else D1()
  // L14()
  goto L14_;

D1_:;
  // deopt 8 [r4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L14_:;
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

D2_:;
  // deopt 10 [r5]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L15_:;
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r5_;
  goto L0_;

D3_:;
  // deopt 13 []
  Rsh_Fir_deopt(13, 0, NULL, CCP, RHO);
  return R_NilValue;

L16_:;
  // r6 = dyn get_exclude_patterns()
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_get_exclude_patterns, 0, NULL, NULL, CCP, RHO);
  // check L17() else D4()
  // L17()
  goto L17_;

D4_:;
  // deopt 14 [r6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L17_:;
  // st ignore = r6
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_r6_, RHO);
  (void)(Rsh_Fir_reg_r6_);
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // check L18() else D5()
  // L18()
  goto L18_;

D5_:;
  // deopt 17 []
  Rsh_Fir_deopt(17, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p = prom<V +>{
  //   pkgdir1 = ld pkgdir;
  //   pkgdir2 = force? pkgdir1;
  //   checkMissing(pkgdir2);
  //   return pkgdir2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2843021224_, CCP, RHO);
  // r8 = dyn file_path(p, ".Rbuildignore")
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 17);
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L19() else D6()
  // L19()
  goto L19_;

D6_:;
  // deopt 20 [r8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L19_:;
  // st ignore_file = r8
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_r8_, RHO);
  (void)(Rsh_Fir_reg_r8_);
  // file_exists = ldf `file.exists`
  Rsh_Fir_reg_file_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // check L20() else D7()
  // L20()
  goto L20_;

D7_:;
  // deopt 23 []
  Rsh_Fir_deopt(23, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p1 = prom<V +>{
  //   ignore_file = ld ignore_file;
  //   ignore_file1 = force? ignore_file;
  //   checkMissing(ignore_file1);
  //   return ignore_file1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2843021224_1, CCP, RHO);
  // r10 = dyn file_exists(p1)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_exists, 1, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L21() else D8()
  // L21()
  goto L21_;

D8_:;
  // deopt 25 [r10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(25, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L21_:;
  // c = `as.logical`(r10)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r10_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c then L22() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L22()
    goto L22_;
  } else {
  // L2()
    goto L2_;
  }

L22_:;
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard2 then L23() else L24()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L23()
    goto L23_;
  } else {
  // L24()
    goto L24_;
  }

L23_:;
  // ignore = ld ignore
  Rsh_Fir_reg_ignore = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L25() else D9()
  // L25()
  goto L25_;

L24_:;
  // r11 = dyn base2(<sym ignore>, <lang readLines(ignore_file, warn=FALSE)>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names7[2];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

D9_:;
  // deopt 28 [ignore]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_ignore;
  Rsh_Fir_deopt(28, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // ignore1 = force? ignore
  Rsh_Fir_reg_ignore1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore);
  // checkMissing(ignore1)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_ignore1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty()));
  // readLines = ldf readLines
  Rsh_Fir_reg_readLines = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L26() else D10()
  // L26()
  goto L26_;

D10_:;
  // deopt 31 []
  Rsh_Fir_deopt(31, 0, NULL, CCP, RHO);
  return R_NilValue;

L26_:;
  // p2 = prom<V +>{
  //   ignore_file2 = ld ignore_file;
  //   ignore_file3 = force? ignore_file2;
  //   checkMissing(ignore_file3);
  //   return ignore_file3;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2843021224_2, CCP, RHO);
  // r14 = dyn readLines[, warn](p2, FALSE)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p2_;
  Rsh_Fir_array_args22[1] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 23);
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_readLines, 2, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L27() else D11()
  // L27()
  goto L27_;

D11_:;
  // deopt 35 [r14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_deopt(35, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // c1 = ldf c in base
  Rsh_Fir_reg_c1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r15 = dyn c1(ignore1, r14)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_ignore1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c1_, 2, Rsh_Fir_array_args23, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L28() else D12()
  // L28()
  goto L28_;

D12_:;
  // deopt 37 [r15]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // goto L3(r15)
  // L3(r15)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r15_;
  goto L3_;

D13_:;
  // deopt 41 [ignore2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_ignore2_;
  Rsh_Fir_deopt(41, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L30_:;
  // ignore3 = force? ignore2
  Rsh_Fir_reg_ignore3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore2_);
  // checkMissing(ignore3)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_ignore3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(ignore3)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_ignore3_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c2 then L31() else L32(ignore3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L31()
    goto L31_;
  } else {
  // L32(ignore3)
    Rsh_Fir_reg_ignore5_ = Rsh_Fir_reg_ignore3_;
    goto L32_;
  }

L31_:;
  // dr = tryDispatchBuiltin.1("[", ignore3)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_ignore3_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args26);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // if dc then L33() else L32(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L33()
    goto L33_;
  } else {
  // L32(dr)
    Rsh_Fir_reg_ignore5_ = Rsh_Fir_reg_dr;
    goto L32_;
  }

L32_:;
  // sym3 = ldf nzchar
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base3 = ldf nzchar in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args28[2];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args28);
  // if guard3 then L34() else L35()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L34()
    goto L34_;
  } else {
  // L35()
    goto L35_;
  }

L33_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L5(dx)
  // L5(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L5_;

L34_:;
  // ignore9 = ld ignore
  Rsh_Fir_reg_ignore9_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // check L36() else D14()
  // L36()
  goto L36_;

L35_:;
  // r17 = dyn base3(<sym ignore>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L6(ignore5, r17)
  // L6(ignore5, r17)
  Rsh_Fir_reg_ignore8_ = Rsh_Fir_reg_ignore5_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

D14_:;
  // deopt 45 [ignore5, ignore9]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_ignore5_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_ignore9_;
  Rsh_Fir_deopt(45, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L36_:;
  // ignore10 = force? ignore9
  Rsh_Fir_reg_ignore10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore9_);
  // checkMissing(ignore10)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_ignore10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r19 = dyn nzchar(ignore10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_ignore10_;
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args32, Rsh_Fir_array_arg_names11, CCP, RHO);
  // check L37() else D15()
  // L37()
  goto L37_;

D15_:;
  // deopt 48 [ignore5, r19]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_ignore5_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L37_:;
  // goto L6(ignore5, r19)
  // L6(ignore5, r19)
  Rsh_Fir_reg_ignore8_ = Rsh_Fir_reg_ignore5_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L6_;

L38_:;
  // exclude2 = ld exclude
  Rsh_Fir_reg_exclude2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L42() else D19()
  // L42()
  goto L42_;

D16_:;
  // deopt 50 [i2, exclude]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_exclude;
  Rsh_Fir_deopt(50, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L39_:;
  // exclude1 = force? exclude
  Rsh_Fir_reg_exclude1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exclude);
  // checkMissing(exclude1)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_exclude1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // grepl = ldf grepl
  Rsh_Fir_reg_grepl = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // check L40() else D17()
  // L40()
  goto L40_;

D17_:;
  // deopt 52 [i2, exclude1]
  SEXP Rsh_Fir_array_deopt_stack13[2];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_exclude1_;
  Rsh_Fir_deopt(52, 2, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L40_:;
  // p3 = prom<V +>{
  //   e = ld e;
  //   e1 = force? e;
  //   checkMissing(e1);
  //   return e1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2843021224_3, CCP, RHO);
  // p4 = prom<V +>{
  //   files3 = ld files;
  //   files4 = force? files3;
  //   checkMissing(files4);
  //   return files4;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2843021224_4, CCP, RHO);
  // r23 = dyn grepl[, , perl, `ignore.case`](p3, p4, TRUE, TRUE)
  SEXP Rsh_Fir_array_args36[4];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_p4_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args36[3] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names12[4];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = Rsh_const(CCP, 27);
  Rsh_Fir_array_arg_names12[3] = Rsh_const(CCP, 28);
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_grepl, 4, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L41() else D18()
  // L41()
  goto L41_;

D18_:;
  // deopt 59 [i2, exclude1, r23]
  SEXP Rsh_Fir_array_deopt_stack14[3];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_exclude1_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(59, 3, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L41_:;
  // r24 = `||`(exclude1, r23)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_exclude1_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_builtin(84, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // st exclude = r24
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r24_, RHO);
  (void)(Rsh_Fir_reg_r24_);
  // goto L7(i2)
  // L7(i2)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i2_;
  goto L7_;

D19_:;
  // deopt 65 [exclude2]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_exclude2_;
  Rsh_Fir_deopt(65, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L42_:;
  // exclude3 = force? exclude2
  Rsh_Fir_reg_exclude3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_exclude2_);
  // checkMissing(exclude3)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_exclude3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return exclude3
  return Rsh_Fir_reg_exclude3_;
}
SEXP Rsh_Fir_user_promise_inner2843021224_(SEXP CCP, SEXP RHO) {
  // pkgdir1 = ld pkgdir
  Rsh_Fir_reg_pkgdir1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // pkgdir2 = force? pkgdir1
  Rsh_Fir_reg_pkgdir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkgdir1_);
  // checkMissing(pkgdir2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_pkgdir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return pkgdir2
  return Rsh_Fir_reg_pkgdir2_;
}
SEXP Rsh_Fir_user_promise_inner2843021224_1(SEXP CCP, SEXP RHO) {
  // ignore_file = ld ignore_file
  Rsh_Fir_reg_ignore_file = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // ignore_file1 = force? ignore_file
  Rsh_Fir_reg_ignore_file1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_file);
  // checkMissing(ignore_file1)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_ignore_file1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty()));
  // return ignore_file1
  return Rsh_Fir_reg_ignore_file1_;
}
SEXP Rsh_Fir_user_promise_inner2843021224_2(SEXP CCP, SEXP RHO) {
  // ignore_file2 = ld ignore_file
  Rsh_Fir_reg_ignore_file2_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // ignore_file3 = force? ignore_file2
  Rsh_Fir_reg_ignore_file3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ignore_file2_);
  // checkMissing(ignore_file3)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_ignore_file3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty()));
  // return ignore_file3
  return Rsh_Fir_reg_ignore_file3_;
}
SEXP Rsh_Fir_user_promise_inner2843021224_3(SEXP CCP, SEXP RHO) {
  // e = ld e
  Rsh_Fir_reg_e = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // e1 = force? e
  Rsh_Fir_reg_e1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_e);
  // checkMissing(e1)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_e1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // return e1
  return Rsh_Fir_reg_e1_;
}
SEXP Rsh_Fir_user_promise_inner2843021224_4(SEXP CCP, SEXP RHO) {
  // files3 = ld files
  Rsh_Fir_reg_files3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // files4 = force? files3
  Rsh_Fir_reg_files4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files3_);
  // checkMissing(files4)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_files4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty()));
  // return files4
  return Rsh_Fir_reg_files4_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
