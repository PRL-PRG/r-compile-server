#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner3391276322_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner3391276322_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner3391276322_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3391276322_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3391276322_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3391276322_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3391276322_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner3391276322_5(SEXP CCP, SEXP RHO);
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
  // r = clos inner3391276322
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner3391276322_, RHO, CCP);
  // st find_files_in_directories = r
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
SEXP Rsh_Fir_user_function_inner3391276322_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner3391276322 dynamic dispatch ([basenames, dirnames])

  return Rsh_Fir_user_version_inner3391276322_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner3391276322_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner3391276322 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner3391276322/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_basenames;  // basenames
  SEXP Rsh_Fir_reg_dirnames;  // dirnames
  SEXP Rsh_Fir_reg_dirnames1_;  // dirnames1
  SEXP Rsh_Fir_reg_dirnames2_;  // dirnames2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_dirnames4_;  // dirnames4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_dir_exists;  // dir_exists
  SEXP Rsh_Fir_reg_dirnames5_;  // dirnames5
  SEXP Rsh_Fir_reg_dirnames6_;  // dirnames6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_normalizePath;  // normalizePath
  SEXP Rsh_Fir_reg_dirnames7_;  // dirnames7
  SEXP Rsh_Fir_reg_dirnames8_;  // dirnames8
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_character;  // character
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_basenames1_;  // basenames1
  SEXP Rsh_Fir_reg_basenames2_;  // basenames2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_dirnames9_;  // dirnames9
  SEXP Rsh_Fir_reg_dirnames10_;  // dirnames10
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_file_path;  // file_path
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_basenames3_;  // basenames3
  SEXP Rsh_Fir_reg_basenames4_;  // basenames4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_basenames6_;  // basenames6
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_pos;  // pos
  SEXP Rsh_Fir_reg_pos1_;  // pos1
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_file_test;  // file_test
  SEXP Rsh_Fir_reg_paths;  // paths
  SEXP Rsh_Fir_reg_paths1_;  // paths1
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_paths2_;  // paths2
  SEXP Rsh_Fir_reg_paths3_;  // paths3
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_paths5_;  // paths5
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_ind;  // ind
  SEXP Rsh_Fir_reg_ind1_;  // ind1
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_l1_;  // l1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_pos2_;  // pos2
  SEXP Rsh_Fir_reg_pos3_;  // pos3
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_l5_;  // l5
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_pos5_;  // pos5
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_l7_;  // l7
  SEXP Rsh_Fir_reg_dx20_;  // dx20
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_ind2_;  // ind2
  SEXP Rsh_Fir_reg_ind3_;  // ind3
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg____;  // ___
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_pos6_;  // pos6
  SEXP Rsh_Fir_reg_pos7_;  // pos7
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_pos9_;  // pos9
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx22_;  // dx22
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_ind4_;  // ind4
  SEXP Rsh_Fir_reg_ind5_;  // ind5
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_i23_;  // i23
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_pos10_;  // pos10
  SEXP Rsh_Fir_reg_pos11_;  // pos11
  SEXP Rsh_Fir_reg_length1_;  // length1
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_out2_;  // out2
  SEXP Rsh_Fir_reg_out3_;  // out3

  // Bind parameters
  Rsh_Fir_reg_basenames = PARAMS[0];
  Rsh_Fir_reg_dirnames = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st basenames = basenames
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_basenames, RHO);
  (void)(Rsh_Fir_reg_basenames);
  // st dirnames = dirnames
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dirnames, RHO);
  (void)(Rsh_Fir_reg_dirnames);
  // dirnames1 = ld dirnames
  Rsh_Fir_reg_dirnames1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L12() else D0()
  // L12()
  goto L12_;

L0_:;
  // st dirnames = dx1
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // normalizePath = ldf normalizePath
  Rsh_Fir_reg_normalizePath = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L18() else D3()
  // L18()
  goto L18_;

L1_:;
  // st pos = r11
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // dirnames9 = ld dirnames
  Rsh_Fir_reg_dirnames9_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L25() else D8()
  // L25()
  goto L25_;

L2_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if c1 then L26() else L11()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L26()
    goto L26_;
  } else {
  // L11()
    goto L11_;
  }

L3_:;
  // l1 = ld out
  Rsh_Fir_reg_l1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // c4 = `is.object`(l1)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_l1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c4 then L36() else L37(i8, dx5, l1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L36()
    goto L36_;
  } else {
  // L37(i8, dx5, l1)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l1_;
    goto L37_;
  }

L4_:;
  // st out = dx11
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_dx11_, RHO);
  (void)(Rsh_Fir_reg_dx11_);
  // pos6 = ld pos
  Rsh_Fir_reg_pos6_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L44() else D17()
  // L44()
  goto L44_;

L5_:;
  // ___ = ldf `[<-` in base
  Rsh_Fir_reg____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r21 = dyn ___(l7, dx20, dx21)
  SEXP Rsh_Fir_array_args3[3];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_l7_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_dx20_;
  Rsh_Fir_array_args3[2] = Rsh_Fir_reg_dx21_;
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg____, 3, Rsh_Fir_array_args3, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L4(i16, r21)
  // L4(i16, r21)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i16_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_r21_;
  goto L4_;

L6_:;
  // st pos = dx23
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dx23_, RHO);
  (void)(Rsh_Fir_reg_dx23_);
  // sym2 = ldf length
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base2 = ldf length in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard2 then L49() else L50()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L49()
    goto L49_;
  } else {
  // L50()
    goto L50_;
  }

L7_:;
  // r27 = `!`(r25)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r27)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_r27_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args6, Rsh_Fir_param_types_empty());
  // if c7 then L53() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L53()
    goto L53_;
  } else {
  // L8()
    goto L8_;
  }

L8_:;
  // goto L2(i23)
  // L2(i23)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i23_;
  goto L2_;

L9_:;
  // out2 = ld out
  Rsh_Fir_reg_out2_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L56() else D21()
  // L56()
  goto L56_;

L11_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args7[4];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args7[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args7[3] = Rsh_const(CCP, 10);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // st dir = x
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // check L27() else D9()
  // L27()
  goto L27_;

D0_:;
  // deopt 0 [dirnames1]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_dirnames1_;
  Rsh_Fir_deopt(0, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L12_:;
  // dirnames2 = force? dirnames1
  Rsh_Fir_reg_dirnames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirnames1_);
  // checkMissing(dirnames2)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_dirnames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty()));
  // c = `is.object`(dirnames2)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dirnames2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // if c then L13() else L14(dirnames2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L13()
    goto L13_;
  } else {
  // L14(dirnames2)
    Rsh_Fir_reg_dirnames4_ = Rsh_Fir_reg_dirnames2_;
    goto L14_;
  }

L13_:;
  // dr = tryDispatchBuiltin.1("[", dirnames2)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_dirnames2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args10);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if dc then L15() else L14(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L15()
    goto L15_;
  } else {
  // L14(dr)
    Rsh_Fir_reg_dirnames4_ = Rsh_Fir_reg_dr;
    goto L14_;
  }

L14_:;
  // dir_exists = ldf `dir.exists`
  Rsh_Fir_reg_dir_exists = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // check L16() else D1()
  // L16()
  goto L16_;

L15_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;

D1_:;
  // deopt 3 [dirnames4]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_dirnames4_;
  Rsh_Fir_deopt(3, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L16_:;
  // p = prom<V +>{
  //   dirnames5 = ld dirnames;
  //   dirnames6 = force? dirnames5;
  //   checkMissing(dirnames6);
  //   return dirnames6;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391276322_, CCP, RHO);
  // r1 = dyn dir_exists(p)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_dir_exists, 1, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L17() else D2()
  // L17()
  goto L17_;

D2_:;
  // deopt 5 [dirnames4, r1]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_dirnames4_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_r1_;
  Rsh_Fir_deopt(5, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L17_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r2 = dyn __(dirnames4, r1)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dirnames4_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args15, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r2_;
  goto L0_;

D3_:;
  // deopt 9 []
  Rsh_Fir_deopt(9, 0, NULL, CCP, RHO);
  return R_NilValue;

L18_:;
  // p1 = prom<V +>{
  //   dirnames7 = ld dirnames;
  //   dirnames8 = force? dirnames7;
  //   checkMissing(dirnames8);
  //   return dirnames8;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391276322_1, CCP, RHO);
  // r4 = dyn normalizePath(p1, "/")
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_normalizePath, 2, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L19() else D4()
  // L19()
  goto L19_;

D4_:;
  // deopt 12 [r4]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L19_:;
  // st dirnames = r4
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_r4_, RHO);
  (void)(Rsh_Fir_reg_r4_);
  // character = ldf character
  Rsh_Fir_reg_character = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L20() else D5()
  // L20()
  goto L20_;

D5_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L20_:;
  // p2 = prom<V +>{
  //   sym = ldf length;
  //   base = ldf length in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r6):
  //   return r6;
  // L1():
  //   basenames1 = ld basenames;
  //   basenames2 = force? basenames1;
  //   checkMissing(basenames2);
  //   length = ldf length in base;
  //   r7 = dyn length(basenames2);
  //   goto L0(r7);
  // L2():
  //   r5 = dyn base(<sym basenames>);
  //   goto L0(r5);
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391276322_2, CCP, RHO);
  // r9 = dyn character(p2)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_character, 1, Rsh_Fir_array_args22, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L21() else D6()
  // L21()
  goto L21_;

D6_:;
  // deopt 17 [r9]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L21_:;
  // st out = r9
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_r9_, RHO);
  (void)(Rsh_Fir_reg_r9_);
  // sym1 = ldf seq_along
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf seq_along in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard1 then L22() else L23()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L22()
    goto L22_;
  } else {
  // L23()
    goto L23_;
  }

L22_:;
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // check L24() else D7()
  // L24()
  goto L24_;

L23_:;
  // r10 = dyn base1(<sym out>)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L1(r10)
  // L1(r10)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r10_;
  goto L1_;

D7_:;
  // deopt 20 [out]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(20, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L24_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty()));
  // r12 = seq_along(out1)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_out1_;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_builtin(424, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_r11_ = Rsh_Fir_reg_r12_;
  goto L1_;

D8_:;
  // deopt 24 [dirnames9]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_dirnames9_;
  Rsh_Fir_deopt(24, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L25_:;
  // dirnames10 = force? dirnames9
  Rsh_Fir_reg_dirnames10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirnames9_);
  // checkMissing(dirnames10)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dirnames10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty()));
  // s = toForSeq(dirnames10)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dirnames10_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 19);
  // goto L2(i)
  // L2(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L2_;

L26_:;
  // goto L9()
  // L9()
  goto L9_;

D9_:;
  // deopt 27 [i2]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L27_:;
  // p3 = prom<V +>{
  //   dir = ld dir;
  //   dir1 = force? dir;
  //   checkMissing(dir1);
  //   return dir1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391276322_3, CCP, RHO);
  // p4 = prom<V +>{
  //   basenames3 = ld basenames;
  //   basenames4 = force? basenames3;
  //   checkMissing(basenames4);
  //   c2 = `is.object`(basenames4);
  //   if c2 then L1() else L2(basenames4);
  // L0(dx3):
  //   return dx3;
  // L1():
  //   dr2 = tryDispatchBuiltin.1("[", basenames4);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L3() else L2(dr2);
  // L2(basenames6):
  //   pos = ld pos;
  //   pos1 = force? pos;
  //   __1 = ldf `[` in base;
  //   r14 = dyn __1(basenames6, pos1);
  //   goto L0(r14);
  // L3():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L0(dx2);
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391276322_4, CCP, RHO);
  // r16 = dyn file_path(p3, p4)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args37, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L28() else D10()
  // L28()
  goto L28_;

D10_:;
  // deopt 30 [i2, r16]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L28_:;
  // st paths = r16
  Rsh_Fir_store(Rsh_const(CCP, 20), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // file_test = ldf file_test
  Rsh_Fir_reg_file_test = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L29() else D11()
  // L29()
  goto L29_;

D11_:;
  // deopt 33 [i2]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_deopt(33, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L29_:;
  // p5 = prom<V +>{
  //   paths = ld paths;
  //   paths1 = force? paths;
  //   checkMissing(paths1);
  //   return paths1;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner3391276322_5, CCP, RHO);
  // r18 = dyn file_test("-f", p5)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_test, 2, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names10, CCP, RHO);
  // check L30() else D12()
  // L30()
  goto L30_;

D12_:;
  // deopt 36 [i2, r18]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(36, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L30_:;
  // st ind = r18
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r18_, RHO);
  (void)(Rsh_Fir_reg_r18_);
  // paths2 = ld paths
  Rsh_Fir_reg_paths2_ = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // check L31() else D13()
  // L31()
  goto L31_;

D13_:;
  // deopt 38 [i2, paths2]
  SEXP Rsh_Fir_array_deopt_stack11[2];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_paths2_;
  Rsh_Fir_deopt(38, 2, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L31_:;
  // paths3 = force? paths2
  Rsh_Fir_reg_paths3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths2_);
  // checkMissing(paths3)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_paths3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(paths3)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_paths3_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c3 then L32() else L33(i2, paths3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L32()
    goto L32_;
  } else {
  // L33(i2, paths3)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_paths5_ = Rsh_Fir_reg_paths3_;
    goto L33_;
  }

L32_:;
  // dr4 = tryDispatchBuiltin.1("[", paths3)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_paths3_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args42);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if dc2 then L34() else L33(i2, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L34()
    goto L34_;
  } else {
  // L33(i2, dr4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_paths5_ = Rsh_Fir_reg_dr4_;
    goto L33_;
  }

L33_:;
  // ind = ld ind
  Rsh_Fir_reg_ind = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L35() else D14()
  // L35()
  goto L35_;

L34_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L3(i2, dx4)
  // L3(i2, dx4)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L3_;

D14_:;
  // deopt 40 [i6, paths5, ind]
  SEXP Rsh_Fir_array_deopt_stack12[3];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_paths5_;
  Rsh_Fir_array_deopt_stack12[2] = Rsh_Fir_reg_ind;
  Rsh_Fir_deopt(40, 3, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L35_:;
  // ind1 = force? ind
  Rsh_Fir_reg_ind1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r19 = dyn __2(paths5, ind1)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_paths5_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_ind1_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L3(i6, r19)
  // L3(i6, r19)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r19_;
  goto L3_;

L36_:;
  // dr6 = tryDispatchBuiltin.0("[<-", l1, dx5)
  SEXP Rsh_Fir_array_args46[3];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args46[1] = Rsh_Fir_reg_l1_;
  Rsh_Fir_array_args46[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args46);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if dc3 then L38() else L37(i8, dx5, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L38()
    goto L38_;
  } else {
  // L37(i8, dx5, dr6)
    Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_dr6_;
    goto L37_;
  }

L37_:;
  // pos2 = ld pos
  Rsh_Fir_reg_pos2_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L39() else D15()
  // L39()
  goto L39_;

L38_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty());
  // goto L4(i8, dx9)
  // L4(i8, dx9)
  Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx9_;
  goto L4_;

D15_:;
  // deopt 44 [i10, dx7, l3, dx5, pos2]
  SEXP Rsh_Fir_array_deopt_stack13[5];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_dx7_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_l3_;
  Rsh_Fir_array_deopt_stack13[3] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_array_deopt_stack13[4] = Rsh_Fir_reg_pos2_;
  Rsh_Fir_deopt(44, 5, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L39_:;
  // pos3 = force? pos2
  Rsh_Fir_reg_pos3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos2_);
  // checkMissing(pos3)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_pos3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(pos3)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c5 then L40() else L41(i10, dx7, l3, dx5, pos3)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L40()
    goto L40_;
  } else {
  // L41(i10, dx7, l3, dx5, pos3)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_pos5_ = Rsh_Fir_reg_pos3_;
    goto L41_;
  }

L40_:;
  // dr8 = tryDispatchBuiltin.1("[", pos3)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_pos3_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc4 then L42() else L41(i10, dx7, l3, dx5, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L42()
    goto L42_;
  } else {
  // L41(i10, dx7, l3, dx5, dr8)
    Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i10_;
    Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx7_;
    Rsh_Fir_reg_l5_ = Rsh_Fir_reg_l3_;
    Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx5_;
    Rsh_Fir_reg_pos5_ = Rsh_Fir_reg_dr8_;
    goto L41_;
  }

L41_:;
  // ind2 = ld ind
  Rsh_Fir_reg_ind2_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L43() else D16()
  // L43()
  goto L43_;

L42_:;
  // dx18 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L5(i10, dx7, l3, dx5, dx18)
  // L5(i10, dx7, l3, dx5, dx18)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i10_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx7_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx18_;
  goto L5_;

D16_:;
  // deopt 46 [i14, dx14, l5, dx15, pos5, ind2]
  SEXP Rsh_Fir_array_deopt_stack14[6];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_deopt_stack14[2] = Rsh_Fir_reg_l5_;
  Rsh_Fir_array_deopt_stack14[3] = Rsh_Fir_reg_dx15_;
  Rsh_Fir_array_deopt_stack14[4] = Rsh_Fir_reg_pos5_;
  Rsh_Fir_array_deopt_stack14[5] = Rsh_Fir_reg_ind2_;
  Rsh_Fir_deopt(46, 6, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L43_:;
  // ind3 = force? ind2
  Rsh_Fir_reg_ind3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind2_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r20 = dyn __3(pos5, ind3)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_pos5_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_ind3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L5(i14, dx14, l5, dx15, r20)
  // L5(i14, dx14, l5, dx15, r20)
  Rsh_Fir_reg_i16_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx14_;
  Rsh_Fir_reg_l7_ = Rsh_Fir_reg_l5_;
  Rsh_Fir_reg_dx20_ = Rsh_Fir_reg_dx15_;
  Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_r20_;
  goto L5_;

D17_:;
  // deopt 51 [i12, pos6]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_pos6_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L44_:;
  // pos7 = force? pos6
  Rsh_Fir_reg_pos7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos6_);
  // checkMissing(pos7)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_pos7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(pos7)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_pos7_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c6 then L45() else L46(i12, pos7)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L45()
    goto L45_;
  } else {
  // L46(i12, pos7)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_pos9_ = Rsh_Fir_reg_pos7_;
    goto L46_;
  }

L45_:;
  // dr10 = tryDispatchBuiltin.1("[", pos7)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_pos7_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc5 then L47() else L46(i12, dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L47()
    goto L47_;
  } else {
  // L46(i12, dr10)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i12_;
    Rsh_Fir_reg_pos9_ = Rsh_Fir_reg_dr10_;
    goto L46_;
  }

L46_:;
  // ind4 = ld ind
  Rsh_Fir_reg_ind4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L48() else D18()
  // L48()
  goto L48_;

L47_:;
  // dx22 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx22_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L6(i12, dx22)
  // L6(i12, dx22)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_dx22_;
  goto L6_;

D18_:;
  // deopt 53 [i18, pos9, ind4]
  SEXP Rsh_Fir_array_deopt_stack16[3];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_pos9_;
  Rsh_Fir_array_deopt_stack16[2] = Rsh_Fir_reg_ind4_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L48_:;
  // ind5 = force? ind4
  Rsh_Fir_reg_ind5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ind4_);
  // checkMissing(ind5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_ind5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r22 = `!`(ind5)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_ind5_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r23 = dyn __4(pos9, r22)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_pos9_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L6(i18, r23)
  // L6(i18, r23)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_reg_r23_;
  goto L6_;

L49_:;
  // pos10 = ld pos
  Rsh_Fir_reg_pos10_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // check L51() else D19()
  // L51()
  goto L51_;

L50_:;
  // r24 = dyn base2(<sym pos>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r24_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L7(i20, r24)
  // L7(i20, r24)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r24_;
  goto L7_;

D19_:;
  // deopt 60 [i20, pos10]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_pos10_;
  Rsh_Fir_deopt(60, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L51_:;
  // pos11 = force? pos10
  Rsh_Fir_reg_pos11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos10_);
  // checkMissing(pos11)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_pos11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // length1 = ldf length in base
  Rsh_Fir_reg_length1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r26 = dyn length1(pos11)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_pos11_;
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L52() else D20()
  // L52()
  goto L52_;

D20_:;
  // deopt 63 [i20, r26]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L52_:;
  // goto L7(i20, r26)
  // L7(i20, r26)
  Rsh_Fir_reg_i23_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_reg_r26_;
  goto L7_;

L53_:;
  // goto L9()
  // L9()
  goto L9_;

D21_:;
  // deopt 72 [out2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_out2_;
  Rsh_Fir_deopt(72, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L56_:;
  // out3 = force? out2
  Rsh_Fir_reg_out3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out2_);
  // checkMissing(out3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_out3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return out3
  return Rsh_Fir_reg_out3_;
}
SEXP Rsh_Fir_user_promise_inner3391276322_(SEXP CCP, SEXP RHO) {
  // dirnames5 = ld dirnames
  Rsh_Fir_reg_dirnames5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dirnames6 = force? dirnames5
  Rsh_Fir_reg_dirnames6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirnames5_);
  // checkMissing(dirnames6)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dirnames6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty()));
  // return dirnames6
  return Rsh_Fir_reg_dirnames6_;
}
SEXP Rsh_Fir_user_promise_inner3391276322_1(SEXP CCP, SEXP RHO) {
  // dirnames7 = ld dirnames
  Rsh_Fir_reg_dirnames7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dirnames8 = force? dirnames7
  Rsh_Fir_reg_dirnames8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dirnames7_);
  // checkMissing(dirnames8)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dirnames8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty()));
  // return dirnames8
  return Rsh_Fir_reg_dirnames8_;
}
SEXP Rsh_Fir_user_promise_inner3391276322_2(SEXP CCP, SEXP RHO) {
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard then L1() else L2()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L1()
    goto L1_;
  } else {
  // L2()
    goto L2_;
  }

L0_:;
  // return r6
  return Rsh_Fir_reg_r6_;

L1_:;
  // basenames1 = ld basenames
  Rsh_Fir_reg_basenames1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // basenames2 = force? basenames1
  Rsh_Fir_reg_basenames2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_basenames1_);
  // checkMissing(basenames2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_basenames2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // r7 = dyn length(basenames2)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_basenames2_;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r7)
  // L0(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L0_;

L2_:;
  // r5 = dyn base(<sym basenames>)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args21, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3391276322_3(SEXP CCP, SEXP RHO) {
  // dir = ld dir
  Rsh_Fir_reg_dir = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // dir1 = force? dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir);
  // checkMissing(dir1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dir1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // return dir1
  return Rsh_Fir_reg_dir1_;
}
SEXP Rsh_Fir_user_promise_inner3391276322_4(SEXP CCP, SEXP RHO) {
  // basenames3 = ld basenames
  Rsh_Fir_reg_basenames3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // basenames4 = force? basenames3
  Rsh_Fir_reg_basenames4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_basenames3_);
  // checkMissing(basenames4)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_basenames4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(basenames4)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_basenames4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c2 then L1() else L2(basenames4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L1()
    goto L1_;
  } else {
  // L2(basenames4)
    Rsh_Fir_reg_basenames6_ = Rsh_Fir_reg_basenames4_;
    goto L2_;
  }

L0_:;
  // return dx3
  return Rsh_Fir_reg_dx3_;

L1_:;
  // dr2 = tryDispatchBuiltin.1("[", basenames4)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_basenames4_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc1 then L3() else L2(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr2)
    Rsh_Fir_reg_basenames6_ = Rsh_Fir_reg_dr2_;
    goto L2_;
  }

L2_:;
  // pos = ld pos
  Rsh_Fir_reg_pos = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // pos1 = force? pos
  Rsh_Fir_reg_pos1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pos);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r14 = dyn __1(basenames6, pos1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_basenames6_;
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg_pos1_;
  SEXP Rsh_Fir_array_arg_names8[2];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args35, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L0(r14)
  // L0(r14)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r14_;
  goto L0_;

L3_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // goto L0(dx2)
  // L0(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner3391276322_5(SEXP CCP, SEXP RHO) {
  // paths = ld paths
  Rsh_Fir_reg_paths = Rsh_Fir_load(Rsh_const(CCP, 20), RHO);
  // paths1 = force? paths
  Rsh_Fir_reg_paths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths);
  // checkMissing(paths1)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_paths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty()));
  // return paths1
  return Rsh_Fir_reg_paths1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
