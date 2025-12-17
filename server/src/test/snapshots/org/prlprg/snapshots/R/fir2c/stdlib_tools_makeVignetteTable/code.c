#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner1034026925_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner1034026925_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner1034026925_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1034026925_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1034026925_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner1034026925_3(SEXP CCP, SEXP RHO);
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
  // r = clos inner1034026925
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner1034026925_, RHO, CCP);
  // st makeVignetteTable = r
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
SEXP Rsh_Fir_user_function_inner1034026925_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner1034026925 dynamic dispatch ([vignettes, depth])

  return Rsh_Fir_user_version_inner1034026925_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner1034026925_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner1034026925 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner1034026925/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_vignettes;  // vignettes
  SEXP Rsh_Fir_reg_depth;  // depth
  SEXP Rsh_Fir_reg_depth_isMissing;  // depth_isMissing
  SEXP Rsh_Fir_reg_depth_orDefault;  // depth_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_nrow;  // nrow
  SEXP Rsh_Fir_reg_vignettes1_;  // vignettes1
  SEXP Rsh_Fir_reg_vignettes2_;  // vignettes2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_vignettes3_;  // vignettes3
  SEXP Rsh_Fir_reg_vignettes4_;  // vignettes4
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_i6_;  // i6
  SEXP Rsh_Fir_reg_vignettes6_;  // vignettes6
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_i8_;  // i8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_i9_;  // i9
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_file_path_sans_ext;  // file_path_sans_ext
  SEXP Rsh_Fir_reg_Outfile;  // Outfile
  SEXP Rsh_Fir_reg_Outfile1_;  // Outfile1
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_vignettes7_;  // vignettes7
  SEXP Rsh_Fir_reg_vignettes8_;  // vignettes8
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_i12_;  // i12
  SEXP Rsh_Fir_reg_vignettes10_;  // vignettes10
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_i14_;  // i14
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_i15_;  // i15
  SEXP Rsh_Fir_reg_i16_;  // i16
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_vignettes11_;  // vignettes11
  SEXP Rsh_Fir_reg_vignettes12_;  // vignettes12
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_i18_;  // i18
  SEXP Rsh_Fir_reg_vignettes14_;  // vignettes14
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_i20_;  // i20
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_i21_;  // i21
  SEXP Rsh_Fir_reg_i22_;  // i22
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_vignettes15_;  // vignettes15
  SEXP Rsh_Fir_reg_vignettes16_;  // vignettes16
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_i24_;  // i24
  SEXP Rsh_Fir_reg_vignettes18_;  // vignettes18
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_i26_;  // i26
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_i27_;  // i27
  SEXP Rsh_Fir_reg_i28_;  // i28
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_vignettes19_;  // vignettes19
  SEXP Rsh_Fir_reg_vignettes20_;  // vignettes20
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_i30_;  // i30
  SEXP Rsh_Fir_reg_vignettes22_;  // vignettes22
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_i32_;  // i32
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_i33_;  // i33
  SEXP Rsh_Fir_reg_i34_;  // i34
  SEXP Rsh_Fir_reg___4_;  // __4
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_i37_;  // i37
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg_i40_;  // i40
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_depth1_;  // depth1
  SEXP Rsh_Fir_reg_depth2_;  // depth2
  SEXP Rsh_Fir_reg_rep_int;  // rep_int
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_pkg;  // pkg
  SEXP Rsh_Fir_reg_pkg1_;  // pkg1
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_i43_;  // i43
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_root;  // root
  SEXP Rsh_Fir_reg_root1_;  // root1
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_i46_;  // i46
  SEXP Rsh_Fir_reg_r24_;  // r24
  SEXP Rsh_Fir_reg_Outfile2_;  // Outfile2
  SEXP Rsh_Fir_reg_Outfile3_;  // Outfile3
  SEXP Rsh_Fir_reg_nchar;  // nchar
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_Outfile4_;  // Outfile4
  SEXP Rsh_Fir_reg_Outfile5_;  // Outfile5
  SEXP Rsh_Fir_reg_i49_;  // i49
  SEXP Rsh_Fir_reg_Outfile6_;  // Outfile6
  SEXP Rsh_Fir_reg_File;  // File
  SEXP Rsh_Fir_reg_File1_;  // File1
  SEXP Rsh_Fir_reg_pkg2_;  // pkg2
  SEXP Rsh_Fir_reg_pkg3_;  // pkg3
  SEXP Rsh_Fir_reg_topic;  // topic
  SEXP Rsh_Fir_reg_topic1_;  // topic1
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_i52_;  // i52
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_link;  // link
  SEXP Rsh_Fir_reg_link1_;  // link1
  SEXP Rsh_Fir_reg_Title;  // Title
  SEXP Rsh_Fir_reg_Title1_;  // Title1
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_i55_;  // i55
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_Outfile7_;  // Outfile7
  SEXP Rsh_Fir_reg_Outfile8_;  // Outfile8
  SEXP Rsh_Fir_reg_nchar1_;  // nchar1
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_i60_;  // i60
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_root2_;  // root2
  SEXP Rsh_Fir_reg_root3_;  // root3
  SEXP Rsh_Fir_reg_Outfile9_;  // Outfile9
  SEXP Rsh_Fir_reg_Outfile10_;  // Outfile10
  SEXP Rsh_Fir_reg_vignette_type;  // vignette_type
  SEXP Rsh_Fir_reg_Outfile11_;  // Outfile11
  SEXP Rsh_Fir_reg_Outfile12_;  // Outfile12
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_i61_;  // i61
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_root4_;  // root4
  SEXP Rsh_Fir_reg_root5_;  // root5
  SEXP Rsh_Fir_reg_File2_;  // File2
  SEXP Rsh_Fir_reg_File3_;  // File3
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_i64_;  // i64
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_R;  // R
  SEXP Rsh_Fir_reg_R1_;  // R1
  SEXP Rsh_Fir_reg_nchar2_;  // nchar2
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_i69_;  // i69
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_root6_;  // root6
  SEXP Rsh_Fir_reg_root7_;  // root7
  SEXP Rsh_Fir_reg_R2_;  // R2
  SEXP Rsh_Fir_reg_R3_;  // R3
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_r43_;  // r43
  SEXP Rsh_Fir_reg_i70_;  // i70
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r45_;  // r45
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_i73_;  // i73
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_out;  // out
  SEXP Rsh_Fir_reg_out1_;  // out1
  SEXP Rsh_Fir_reg_paste;  // paste
  SEXP Rsh_Fir_reg_line;  // line
  SEXP Rsh_Fir_reg_line1_;  // line1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_r50_;  // r50
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_r52_;  // r52
  SEXP Rsh_Fir_reg_out2_;  // out2
  SEXP Rsh_Fir_reg_out3_;  // out3
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_r53_;  // r53

  // Bind parameters
  Rsh_Fir_reg_vignettes = PARAMS[0];
  Rsh_Fir_reg_depth = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st vignettes = vignettes
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_vignettes, RHO);
  (void)(Rsh_Fir_reg_vignettes);
  // depth_isMissing = missing.0(depth)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_depth;
  Rsh_Fir_reg_depth_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if depth_isMissing then L0(2.0) else L0(depth)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_depth_isMissing)) {
  // L0(2.0)
    Rsh_Fir_reg_depth_orDefault = Rsh_const(CCP, 2);
    goto L0_;
  } else {
  // L0(depth)
    Rsh_Fir_reg_depth_orDefault = Rsh_Fir_reg_depth;
    goto L0_;
  }

L0_:;
  // st depth = depth_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_depth_orDefault, RHO);
  (void)(Rsh_Fir_reg_depth_orDefault);
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L1_:;
  // st out = r1
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r1_, RHO);
  (void)(Rsh_Fir_reg_r1_);
  // sym1 = ldf seq_len
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base1 = ldf seq_len in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard1 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L2_:;
  // s = toForSeq(r4)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 7);
  // goto L3(i)
  // L3(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L3_;

L3_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args5);
  // c1 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if c1 then L34() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L34()
    goto L34_;
  } else {
  // L25()
    goto L25_;
  }

L4_:;
  // st Outfile = dx1
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_dx1_, RHO);
  (void)(Rsh_Fir_reg_dx1_);
  // file_path_sans_ext = ldf file_path_sans_ext
  Rsh_Fir_reg_file_path_sans_ext = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // check L40() else D5()
  // L40()
  goto L40_;

L5_:;
  // st Title = dx3
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_dx3_, RHO);
  (void)(Rsh_Fir_reg_dx3_);
  // vignettes11 = ld vignettes
  Rsh_Fir_reg_vignettes11_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D9()
  // L47()
  goto L47_;

L6_:;
  // st File = dx5
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_dx5_, RHO);
  (void)(Rsh_Fir_reg_dx5_);
  // vignettes15 = ld vignettes
  Rsh_Fir_reg_vignettes15_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L52() else D11()
  // L52()
  goto L52_;

L7_:;
  // st R = dx7
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // vignettes19 = ld vignettes
  Rsh_Fir_reg_vignettes19_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L57() else D13()
  // L57()
  goto L57_;

L8_:;
  // st pkg = dx9
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_dx9_, RHO);
  (void)(Rsh_Fir_reg_dx9_);
  // sym2 = ldf c
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base2 = ldf c in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard2 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L9_:;
  // st root = r16
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // sym4 = ldf c
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base4 = ldf c in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L10_:;
  // pkg = ld pkg
  Rsh_Fir_reg_pkg = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L68() else D17()
  // L68()
  goto L68_;

L11_:;
  // st link = r22
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_r22_, RHO);
  (void)(Rsh_Fir_reg_r22_);
  // sym6 = ldf c
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base6 = ldf c in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard6 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L12_:;
  // c8 = `as.logical`(r24)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r24_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // if c8 then L77() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L77()
    goto L77_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // File = ld File
  Rsh_Fir_reg_File = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L80() else D23()
  // L80()
  goto L80_;

L14_:;
  // pkg2 = ld pkg
  Rsh_Fir_reg_pkg2_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // check L81() else D24()
  // L81()
  goto L81_;

L15_:;
  // st line = r28
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r28_, RHO);
  (void)(Rsh_Fir_reg_r28_);
  // sym11 = ldf c
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base11 = ldf c in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard11 then L115() else L116()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L115()
    goto L115_;
  } else {
  // L116()
    goto L116_;
  }

L16_:;
  // c10 = `as.logical`(r30)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args12, Rsh_Fir_param_types_empty());
  // if c10 then L92() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L92()
    goto L92_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // goto L19(i55, NULL)
  // L19(i55, NULL)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_r37_ = Rsh_const(CCP, 18);
  goto L19_;

L18_:;
  // goto L19(i60, r33)
  // L19(i60, r33)
  Rsh_Fir_reg_i61_ = Rsh_Fir_reg_i60_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r33_;
  goto L19_;

L19_:;
  // root4 = ld root
  Rsh_Fir_reg_root4_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L101() else D36()
  // L101()
  goto L101_;

L20_:;
  // c12 = `as.logical`(r39)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r39_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if c12 then L107() else L21()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L107()
    goto L107_;
  } else {
  // L21()
    goto L21_;
  }

L21_:;
  // goto L23(i64, NULL)
  // L23(i64, NULL)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i64_;
  Rsh_Fir_reg_r44_ = Rsh_const(CCP, 18);
  goto L23_;

L22_:;
  // goto L23(i69, r42)
  // L23(i69, r42)
  Rsh_Fir_reg_i70_ = Rsh_Fir_reg_i69_;
  Rsh_Fir_reg_r44_ = Rsh_Fir_reg_r42_;
  goto L23_;

L23_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r45 = dyn c14("<tr><td style=\"text-align: right; vertical-align: top;\">", link1, "</td>\n<td></td><td style=\"vertical-align: top;\">", Title1, "</td>\n<td style=\"vertical-align: top;\">", r37, "</td>\n<td style=\"vertical-align: top;\">", "<a href=\"", root5, File3, "\">source</a>", "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", r44, "</td></tr>")
  SEXP Rsh_Fir_array_args14[14];
  Rsh_Fir_array_args14[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_link1_;
  Rsh_Fir_array_args14[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args14[3] = Rsh_Fir_reg_Title1_;
  Rsh_Fir_array_args14[4] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args14[5] = Rsh_Fir_reg_r37_;
  Rsh_Fir_array_args14[6] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args14[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args14[8] = Rsh_Fir_reg_root5_;
  Rsh_Fir_array_args14[9] = Rsh_Fir_reg_File3_;
  Rsh_Fir_array_args14[10] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args14[11] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args14[12] = Rsh_Fir_reg_r44_;
  Rsh_Fir_array_args14[13] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names[14];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_array_arg_names[3] = R_MissingArg;
  Rsh_Fir_array_arg_names[4] = R_MissingArg;
  Rsh_Fir_array_arg_names[5] = R_MissingArg;
  Rsh_Fir_array_arg_names[6] = R_MissingArg;
  Rsh_Fir_array_arg_names[7] = R_MissingArg;
  Rsh_Fir_array_arg_names[8] = R_MissingArg;
  Rsh_Fir_array_arg_names[9] = R_MissingArg;
  Rsh_Fir_array_arg_names[10] = R_MissingArg;
  Rsh_Fir_array_arg_names[11] = R_MissingArg;
  Rsh_Fir_array_arg_names[12] = R_MissingArg;
  Rsh_Fir_array_arg_names[13] = R_MissingArg;
  Rsh_Fir_reg_r45_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 14, Rsh_Fir_array_args14, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L114() else D43()
  // L114()
  goto L114_;

L24_:;
  // st out = r47
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_r47_, RHO);
  (void)(Rsh_Fir_reg_r47_);
  // goto L3(i73)
  // L3(i73)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i73_;
  goto L3_;

L25_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args15[4];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args15[2] = Rsh_const(CCP, 18);
  Rsh_Fir_array_args15[3] = Rsh_const(CCP, 26);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // st i = x
  Rsh_Fir_store(Rsh_const(CCP, 27), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // vignettes3 = ld vignettes
  Rsh_Fir_reg_vignettes3_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D3()
  // L35()
  goto L35_;

L26_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r52
  return Rsh_Fir_reg_r52_;

L27_:;
  // c = ldf c in base
  Rsh_Fir_reg_c = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r2 = dyn c("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 50%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />")
  SEXP Rsh_Fir_array_args16[7];
  Rsh_Fir_array_args16[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args16[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args16[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args16[3] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args16[4] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args16[5] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args16[6] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names1[7];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 7, Rsh_Fir_array_args16, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L28_:;
  // r = dyn base("<table style=\"width: 100%;\">", "<col style=\"width: 22%;\" />", "<col style=\"width:  2%;\" />", "<col style=\"width: 50%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />", "<col style=\"width:  8%;\" />")
  SEXP Rsh_Fir_array_args17[7];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args17[1] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args17[2] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args17[3] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args17[4] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args17[5] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args17[6] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names2[7];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_array_arg_names2[2] = R_MissingArg;
  Rsh_Fir_array_arg_names2[3] = R_MissingArg;
  Rsh_Fir_array_arg_names2[4] = R_MissingArg;
  Rsh_Fir_array_arg_names2[5] = R_MissingArg;
  Rsh_Fir_array_arg_names2[6] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 7, Rsh_Fir_array_args17, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r)
  // L1(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L1_;

D0_:;
  // deopt 10 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L29_:;
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L1_;

L30_:;
  // nrow = ldf nrow
  Rsh_Fir_reg_nrow = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

L31_:;
  // r3 = dyn base1(<lang nrow(vignettes)>)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_const(CCP, 34);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args18, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r3)
  // L2(r3)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r3_;
  goto L2_;

D1_:;
  // deopt 14 []
  Rsh_Fir_deopt(14, 0, NULL, CCP, RHO);
  return R_NilValue;

L32_:;
  // p = prom<V +>{
  //   vignettes1 = ld vignettes;
  //   vignettes2 = force? vignettes1;
  //   checkMissing(vignettes2);
  //   return vignettes2;
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1034026925_, CCP, RHO);
  // r6 = dyn nrow(p)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nrow, 1, Rsh_Fir_array_args20, Rsh_Fir_array_arg_names4, CCP, RHO);
  // check L33() else D2()
  // L33()
  goto L33_;

D2_:;
  // deopt 16 [r6]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_deopt(16, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L33_:;
  // r7 = seq_len(r6)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r6_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(423, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r4_ = Rsh_Fir_reg_r7_;
  goto L2_;

L34_:;
  // sym12 = ldf c
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base12 = ldf c in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard12 then L121() else L122()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L121()
    goto L121_;
  } else {
  // L122()
    goto L122_;
  }

D3_:;
  // deopt 18 [i2, vignettes3]
  SEXP Rsh_Fir_array_deopt_stack2[2];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_vignettes3_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L35_:;
  // vignettes4 = force? vignettes3
  Rsh_Fir_reg_vignettes4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vignettes3_);
  // checkMissing(vignettes4)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_vignettes4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(vignettes4)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_vignettes4_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c2 then L36() else L37(i2, vignettes4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L36()
    goto L36_;
  } else {
  // L37(i2, vignettes4)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_vignettes6_ = Rsh_Fir_reg_vignettes4_;
    goto L37_;
  }

L36_:;
  // dr = tryDispatchBuiltin.1("[", vignettes4)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_vignettes4_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args25);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if dc then L38() else L37(i2, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L38()
    goto L38_;
  } else {
  // L37(i2, dr)
    Rsh_Fir_reg_i6_ = Rsh_Fir_reg_i2_;
    Rsh_Fir_reg_vignettes6_ = Rsh_Fir_reg_dr;
    goto L37_;
  }

L37_:;
  // i9 = ld i
  Rsh_Fir_reg_i9_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L39() else D4()
  // L39()
  goto L39_;

L38_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args27, Rsh_Fir_param_types_empty());
  // goto L4(i2, dx)
  // L4(i2, dx)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L4_;

D4_:;
  // deopt 20 [i6, vignettes6, i9]
  SEXP Rsh_Fir_array_deopt_stack3[3];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_i6_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_vignettes6_;
  Rsh_Fir_array_deopt_stack3[2] = Rsh_Fir_reg_i9_;
  Rsh_Fir_deopt(20, 3, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L39_:;
  // i10 = force? i9
  Rsh_Fir_reg_i10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i9_);
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r8 = dyn __(vignettes6, i10, "PDF")
  SEXP Rsh_Fir_array_args28[3];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_vignettes6_;
  Rsh_Fir_array_args28[1] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_args28[2] = Rsh_const(CCP, 37);
  SEXP Rsh_Fir_array_arg_names5[3];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_array_arg_names5[2] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 3, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(i6, r8)
  // L4(i6, r8)
  Rsh_Fir_reg_i8_ = Rsh_Fir_reg_i6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r8_;
  goto L4_;

D5_:;
  // deopt 26 [i8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L40_:;
  // p1 = prom<V +>{
  //   Outfile = ld Outfile;
  //   Outfile1 = force? Outfile;
  //   checkMissing(Outfile1);
  //   return Outfile1;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1034026925_1, CCP, RHO);
  // r10 = dyn file_path_sans_ext(p1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path_sans_ext, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L41() else D6()
  // L41()
  goto L41_;

D6_:;
  // deopt 28 [i8, r10]
  SEXP Rsh_Fir_array_deopt_stack5[2];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack5[1] = Rsh_Fir_reg_r10_;
  Rsh_Fir_deopt(28, 2, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L41_:;
  // st topic = r10
  Rsh_Fir_store(Rsh_const(CCP, 38), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // vignettes7 = ld vignettes
  Rsh_Fir_reg_vignettes7_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L42() else D7()
  // L42()
  goto L42_;

D7_:;
  // deopt 30 [i8, vignettes7]
  SEXP Rsh_Fir_array_deopt_stack6[2];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_i8_;
  Rsh_Fir_array_deopt_stack6[1] = Rsh_Fir_reg_vignettes7_;
  Rsh_Fir_deopt(30, 2, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L42_:;
  // vignettes8 = force? vignettes7
  Rsh_Fir_reg_vignettes8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vignettes7_);
  // checkMissing(vignettes8)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_vignettes8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(vignettes8)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_vignettes8_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c3 then L43() else L44(i8, vignettes8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L43()
    goto L43_;
  } else {
  // L44(i8, vignettes8)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_vignettes10_ = Rsh_Fir_reg_vignettes8_;
    goto L44_;
  }

L43_:;
  // dr2 = tryDispatchBuiltin.1("[", vignettes8)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_vignettes8_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args33);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if dc1 then L45() else L44(i8, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L45()
    goto L45_;
  } else {
  // L44(i8, dr2)
    Rsh_Fir_reg_i12_ = Rsh_Fir_reg_i8_;
    Rsh_Fir_reg_vignettes10_ = Rsh_Fir_reg_dr2_;
    goto L44_;
  }

L44_:;
  // i15 = ld i
  Rsh_Fir_reg_i15_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L46() else D8()
  // L46()
  goto L46_;

L45_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L5(i8, dx2)
  // L5(i8, dx2)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i8_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L5_;

D8_:;
  // deopt 32 [i12, vignettes10, i15]
  SEXP Rsh_Fir_array_deopt_stack7[3];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_i12_;
  Rsh_Fir_array_deopt_stack7[1] = Rsh_Fir_reg_vignettes10_;
  Rsh_Fir_array_deopt_stack7[2] = Rsh_Fir_reg_i15_;
  Rsh_Fir_deopt(32, 3, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L46_:;
  // i16 = force? i15
  Rsh_Fir_reg_i16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i15_);
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r11 = dyn __1(vignettes10, i16, "Title")
  SEXP Rsh_Fir_array_args36[3];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_vignettes10_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_i16_;
  Rsh_Fir_array_args36[2] = Rsh_const(CCP, 39);
  SEXP Rsh_Fir_array_arg_names7[3];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_array_arg_names7[1] = R_MissingArg;
  Rsh_Fir_array_arg_names7[2] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 3, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L5(i12, r11)
  // L5(i12, r11)
  Rsh_Fir_reg_i14_ = Rsh_Fir_reg_i12_;
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r11_;
  goto L5_;

D9_:;
  // deopt 37 [i14, vignettes11]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_i14_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_vignettes11_;
  Rsh_Fir_deopt(37, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L47_:;
  // vignettes12 = force? vignettes11
  Rsh_Fir_reg_vignettes12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vignettes11_);
  // checkMissing(vignettes12)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_vignettes12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(vignettes12)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_vignettes12_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c4 then L48() else L49(i14, vignettes12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L48()
    goto L48_;
  } else {
  // L49(i14, vignettes12)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_vignettes14_ = Rsh_Fir_reg_vignettes12_;
    goto L49_;
  }

L48_:;
  // dr4 = tryDispatchBuiltin.1("[", vignettes12)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_vignettes12_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args39);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // if dc2 then L50() else L49(i14, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L50()
    goto L50_;
  } else {
  // L49(i14, dr4)
    Rsh_Fir_reg_i18_ = Rsh_Fir_reg_i14_;
    Rsh_Fir_reg_vignettes14_ = Rsh_Fir_reg_dr4_;
    goto L49_;
  }

L49_:;
  // i21 = ld i
  Rsh_Fir_reg_i21_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L51() else D10()
  // L51()
  goto L51_;

L50_:;
  // dx4 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // goto L6(i14, dx4)
  // L6(i14, dx4)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i14_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L6_;

D10_:;
  // deopt 39 [i18, vignettes14, i21]
  SEXP Rsh_Fir_array_deopt_stack9[3];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_i18_;
  Rsh_Fir_array_deopt_stack9[1] = Rsh_Fir_reg_vignettes14_;
  Rsh_Fir_array_deopt_stack9[2] = Rsh_Fir_reg_i21_;
  Rsh_Fir_deopt(39, 3, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L51_:;
  // i22 = force? i21
  Rsh_Fir_reg_i22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i21_);
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r12 = dyn __2(vignettes14, i22, "File")
  SEXP Rsh_Fir_array_args42[3];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_vignettes14_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_i22_;
  Rsh_Fir_array_args42[2] = Rsh_const(CCP, 40);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_array_arg_names8[1] = R_MissingArg;
  Rsh_Fir_array_arg_names8[2] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 3, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(i18, r12)
  // L6(i18, r12)
  Rsh_Fir_reg_i20_ = Rsh_Fir_reg_i18_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r12_;
  goto L6_;

D11_:;
  // deopt 44 [i20, vignettes15]
  SEXP Rsh_Fir_array_deopt_stack10[2];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_i20_;
  Rsh_Fir_array_deopt_stack10[1] = Rsh_Fir_reg_vignettes15_;
  Rsh_Fir_deopt(44, 2, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L52_:;
  // vignettes16 = force? vignettes15
  Rsh_Fir_reg_vignettes16_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vignettes15_);
  // checkMissing(vignettes16)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_vignettes16_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(vignettes16)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_vignettes16_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c5 then L53() else L54(i20, vignettes16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L53()
    goto L53_;
  } else {
  // L54(i20, vignettes16)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_vignettes18_ = Rsh_Fir_reg_vignettes16_;
    goto L54_;
  }

L53_:;
  // dr6 = tryDispatchBuiltin.1("[", vignettes16)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_vignettes16_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args45);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // if dc3 then L55() else L54(i20, dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L55()
    goto L55_;
  } else {
  // L54(i20, dr6)
    Rsh_Fir_reg_i24_ = Rsh_Fir_reg_i20_;
    Rsh_Fir_reg_vignettes18_ = Rsh_Fir_reg_dr6_;
    goto L54_;
  }

L54_:;
  // i27 = ld i
  Rsh_Fir_reg_i27_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L56() else D12()
  // L56()
  goto L56_;

L55_:;
  // dx6 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L7(i20, dx6)
  // L7(i20, dx6)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i20_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L7_;

D12_:;
  // deopt 46 [i24, vignettes18, i27]
  SEXP Rsh_Fir_array_deopt_stack11[3];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_i24_;
  Rsh_Fir_array_deopt_stack11[1] = Rsh_Fir_reg_vignettes18_;
  Rsh_Fir_array_deopt_stack11[2] = Rsh_Fir_reg_i27_;
  Rsh_Fir_deopt(46, 3, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L56_:;
  // i28 = force? i27
  Rsh_Fir_reg_i28_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i27_);
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r13 = dyn __3(vignettes18, i28, "R")
  SEXP Rsh_Fir_array_args48[3];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_vignettes18_;
  Rsh_Fir_array_args48[1] = Rsh_Fir_reg_i28_;
  Rsh_Fir_array_args48[2] = Rsh_const(CCP, 41);
  SEXP Rsh_Fir_array_arg_names9[3];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 3, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L7(i24, r13)
  // L7(i24, r13)
  Rsh_Fir_reg_i26_ = Rsh_Fir_reg_i24_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r13_;
  goto L7_;

D13_:;
  // deopt 51 [i26, vignettes19]
  SEXP Rsh_Fir_array_deopt_stack12[2];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_i26_;
  Rsh_Fir_array_deopt_stack12[1] = Rsh_Fir_reg_vignettes19_;
  Rsh_Fir_deopt(51, 2, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L57_:;
  // vignettes20 = force? vignettes19
  Rsh_Fir_reg_vignettes20_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vignettes19_);
  // checkMissing(vignettes20)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_vignettes20_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // c6 = `is.object`(vignettes20)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_vignettes20_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args50, Rsh_Fir_param_types_empty());
  // if c6 then L58() else L59(i26, vignettes20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L58()
    goto L58_;
  } else {
  // L59(i26, vignettes20)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_vignettes22_ = Rsh_Fir_reg_vignettes20_;
    goto L59_;
  }

L58_:;
  // dr8 = tryDispatchBuiltin.1("[", vignettes20)
  SEXP Rsh_Fir_array_args51[2];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args51[1] = Rsh_Fir_reg_vignettes20_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args51);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // if dc4 then L60() else L59(i26, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L60()
    goto L60_;
  } else {
  // L59(i26, dr8)
    Rsh_Fir_reg_i30_ = Rsh_Fir_reg_i26_;
    Rsh_Fir_reg_vignettes22_ = Rsh_Fir_reg_dr8_;
    goto L59_;
  }

L59_:;
  // i33 = ld i
  Rsh_Fir_reg_i33_ = Rsh_Fir_load(Rsh_const(CCP, 27), RHO);
  // check L61() else D14()
  // L61()
  goto L61_;

L60_:;
  // dx8 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L8(i26, dx8)
  // L8(i26, dx8)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i26_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_dx8_;
  goto L8_;

D14_:;
  // deopt 53 [i30, vignettes22, i33]
  SEXP Rsh_Fir_array_deopt_stack13[3];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_i30_;
  Rsh_Fir_array_deopt_stack13[1] = Rsh_Fir_reg_vignettes22_;
  Rsh_Fir_array_deopt_stack13[2] = Rsh_Fir_reg_i33_;
  Rsh_Fir_deopt(53, 3, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L61_:;
  // i34 = force? i33
  Rsh_Fir_reg_i34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_i33_);
  // __4 = ldf `[` in base
  Rsh_Fir_reg___4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 36), RHO);
  // r14 = dyn __4(vignettes22, i34, "Package")
  SEXP Rsh_Fir_array_args54[3];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_vignettes22_;
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_i34_;
  Rsh_Fir_array_args54[2] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names10[3];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_array_arg_names10[2] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___4_, 3, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L8(i30, r14)
  // L8(i30, r14)
  Rsh_Fir_reg_i32_ = Rsh_Fir_reg_i30_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_reg_r14_;
  goto L8_;

L62_:;
  // sym3 = ldf `rep.int`
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 43), RHO);
  // base3 = ldf `rep.int` in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args55[2];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args55[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args55);
  // if guard3 then L64() else L65()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L64()
    goto L64_;
  } else {
  // L65()
    goto L65_;
  }

L63_:;
  // r15 = dyn base2(<lang rep.int("../", depth)>, "library/", <sym pkg>, "/doc/")
  SEXP Rsh_Fir_array_args56[4];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args56[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args56[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args56[3] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names11[4];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_array_arg_names11[2] = R_MissingArg;
  Rsh_Fir_array_arg_names11[3] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 4, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(i32, r15)
  // L9(i32, r15)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r15_;
  goto L9_;

L64_:;
  // depth1 = ld depth
  Rsh_Fir_reg_depth1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // check L66() else D15()
  // L66()
  goto L66_;

L65_:;
  // r17 = dyn base3("../", <sym depth>)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args57[1] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L10(i32, r17)
  // L10(i32, r17)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L10_;

D15_:;
  // deopt 63 [i32, depth1]
  SEXP Rsh_Fir_array_deopt_stack14[2];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack14[1] = Rsh_Fir_reg_depth1_;
  Rsh_Fir_deopt(63, 2, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L66_:;
  // depth2 = force? depth1
  Rsh_Fir_reg_depth2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_depth1_);
  // checkMissing(depth2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_depth2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // rep_int = ldf `rep.int` in base
  Rsh_Fir_reg_rep_int = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 43), RHO);
  // r19 = dyn rep_int("../", depth2)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_depth2_;
  SEXP Rsh_Fir_array_arg_names13[2];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_array_arg_names13[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rep_int, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names13, CCP, RHO);
  // check L67() else D16()
  // L67()
  goto L67_;

D16_:;
  // deopt 66 [i32, r19]
  SEXP Rsh_Fir_array_deopt_stack15[2];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_i32_;
  Rsh_Fir_array_deopt_stack15[1] = Rsh_Fir_reg_r19_;
  Rsh_Fir_deopt(66, 2, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L67_:;
  // goto L10(i32, r19)
  // L10(i32, r19)
  Rsh_Fir_reg_i40_ = Rsh_Fir_reg_i32_;
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L10_;

D17_:;
  // deopt 68 [i40, pkg]
  SEXP Rsh_Fir_array_deopt_stack16[2];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack16[1] = Rsh_Fir_reg_pkg;
  Rsh_Fir_deopt(68, 2, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L68_:;
  // pkg1 = force? pkg
  Rsh_Fir_reg_pkg1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg);
  // checkMissing(pkg1)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_pkg1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // c7 = ldf c in base
  Rsh_Fir_reg_c7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r20 = dyn c7(r18, "library/", pkg1, "/doc/")
  SEXP Rsh_Fir_array_args61[4];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args61[2] = Rsh_Fir_reg_pkg1_;
  Rsh_Fir_array_args61[3] = Rsh_const(CCP, 46);
  SEXP Rsh_Fir_array_arg_names14[4];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_array_arg_names14[2] = R_MissingArg;
  Rsh_Fir_array_arg_names14[3] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c7_, 4, Rsh_Fir_array_args61, Rsh_Fir_array_arg_names14, CCP, RHO);
  // check L69() else D18()
  // L69()
  goto L69_;

D18_:;
  // deopt 72 [i40, r20]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i40_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_r20_;
  Rsh_Fir_deopt(72, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L69_:;
  // goto L9(i40, r20)
  // L9(i40, r20)
  Rsh_Fir_reg_i37_ = Rsh_Fir_reg_i40_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_reg_r20_;
  goto L9_;

L70_:;
  // root = ld root
  Rsh_Fir_reg_root = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L72() else D19()
  // L72()
  goto L72_;

L71_:;
  // r21 = dyn base4("<a href=\"", <sym root>, <lang if(nchar(Outfile), Outfile, File)>, "\">", <sym pkg>, "::", <sym topic>, "</a>")
  SEXP Rsh_Fir_array_args62[8];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args62[2] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args62[3] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args62[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args62[5] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args62[6] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args62[7] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names15[8];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_array_arg_names15[2] = R_MissingArg;
  Rsh_Fir_array_arg_names15[3] = R_MissingArg;
  Rsh_Fir_array_arg_names15[4] = R_MissingArg;
  Rsh_Fir_array_arg_names15[5] = R_MissingArg;
  Rsh_Fir_array_arg_names15[6] = R_MissingArg;
  Rsh_Fir_array_arg_names15[7] = R_MissingArg;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 8, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L11(i37, r21)
  // L11(i37, r21)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r21_;
  goto L11_;

D19_:;
  // deopt 77 [i37, root]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_root;
  Rsh_Fir_deopt(77, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L72_:;
  // root1 = force? root
  Rsh_Fir_reg_root1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_root);
  // checkMissing(root1)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_root1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // sym5 = ldf nchar
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base5 = ldf nchar in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args64[2];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args64[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args64);
  // if guard5 then L73() else L74()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L73()
    goto L73_;
  } else {
  // L74()
    goto L74_;
  }

L73_:;
  // Outfile2 = ld Outfile
  Rsh_Fir_reg_Outfile2_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L75() else D20()
  // L75()
  goto L75_;

L74_:;
  // r23 = dyn base5(<sym Outfile>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L12(i37, r23)
  // L12(i37, r23)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L12_;

D20_:;
  // deopt 81 [i37, Outfile2]
  SEXP Rsh_Fir_array_deopt_stack19[2];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack19[1] = Rsh_Fir_reg_Outfile2_;
  Rsh_Fir_deopt(81, 2, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L75_:;
  // Outfile3 = force? Outfile2
  Rsh_Fir_reg_Outfile3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Outfile2_);
  // checkMissing(Outfile3)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_Outfile3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // nchar = ldf nchar in base
  Rsh_Fir_reg_nchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r25 = dyn nchar(Outfile3, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args67[4];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_Outfile3_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args67[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args67[3] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names17[4];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar, 4, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L76() else D21()
  // L76()
  goto L76_;

D21_:;
  // deopt 87 [i37, r25]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i37_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(87, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L76_:;
  // goto L12(i37, r25)
  // L12(i37, r25)
  Rsh_Fir_reg_i46_ = Rsh_Fir_reg_i37_;
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L12_;

L77_:;
  // Outfile4 = ld Outfile
  Rsh_Fir_reg_Outfile4_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L78() else D22()
  // L78()
  goto L78_;

D22_:;
  // deopt 88 [i46, Outfile4]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_Outfile4_;
  Rsh_Fir_deopt(88, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L78_:;
  // Outfile5 = force? Outfile4
  Rsh_Fir_reg_Outfile5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Outfile4_);
  // checkMissing(Outfile5)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_Outfile5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty()));
  // goto L14(i46, Outfile5)
  // L14(i46, Outfile5)
  Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_Outfile6_ = Rsh_Fir_reg_Outfile5_;
  goto L14_;

D23_:;
  // deopt 90 [i46, File]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i46_;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_File;
  Rsh_Fir_deopt(90, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L80_:;
  // File1 = force? File
  Rsh_Fir_reg_File1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_File);
  // checkMissing(File1)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_File1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // goto L14(i46, File1)
  // L14(i46, File1)
  Rsh_Fir_reg_i49_ = Rsh_Fir_reg_i46_;
  Rsh_Fir_reg_Outfile6_ = Rsh_Fir_reg_File1_;
  goto L14_;

D24_:;
  // deopt 93 [i49, pkg2]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_pkg2_;
  Rsh_Fir_deopt(93, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L81_:;
  // pkg3 = force? pkg2
  Rsh_Fir_reg_pkg3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_pkg2_);
  // checkMissing(pkg3)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_pkg3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // topic = ld topic
  Rsh_Fir_reg_topic = Rsh_Fir_load(Rsh_const(CCP, 38), RHO);
  // check L82() else D25()
  // L82()
  goto L82_;

D25_:;
  // deopt 96 [i49, topic]
  SEXP Rsh_Fir_array_deopt_stack24[2];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_topic;
  Rsh_Fir_deopt(96, 2, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L82_:;
  // topic1 = force? topic
  Rsh_Fir_reg_topic1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_topic);
  // checkMissing(topic1)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_topic1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args71, Rsh_Fir_param_types_empty()));
  // c9 = ldf c in base
  Rsh_Fir_reg_c9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r26 = dyn c9("<a href=\"", root1, Outfile6, "\">", pkg3, "::", topic1, "</a>")
  SEXP Rsh_Fir_array_args72[8];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args72[1] = Rsh_Fir_reg_root1_;
  Rsh_Fir_array_args72[2] = Rsh_Fir_reg_Outfile6_;
  Rsh_Fir_array_args72[3] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args72[4] = Rsh_Fir_reg_pkg3_;
  Rsh_Fir_array_args72[5] = Rsh_const(CCP, 50);
  Rsh_Fir_array_args72[6] = Rsh_Fir_reg_topic1_;
  Rsh_Fir_array_args72[7] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names18[8];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_array_arg_names18[2] = R_MissingArg;
  Rsh_Fir_array_arg_names18[3] = R_MissingArg;
  Rsh_Fir_array_arg_names18[4] = R_MissingArg;
  Rsh_Fir_array_arg_names18[5] = R_MissingArg;
  Rsh_Fir_array_arg_names18[6] = R_MissingArg;
  Rsh_Fir_array_arg_names18[7] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c9_, 8, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L83() else D26()
  // L83()
  goto L83_;

D26_:;
  // deopt 100 [i49, r26]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i49_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r26_;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L83_:;
  // goto L11(i49, r26)
  // L11(i49, r26)
  Rsh_Fir_reg_i43_ = Rsh_Fir_reg_i49_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_reg_r26_;
  goto L11_;

L84_:;
  // link = ld link
  Rsh_Fir_reg_link = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // check L86() else D27()
  // L86()
  goto L86_;

L85_:;
  // r27 = dyn base6("<tr><td style=\"text-align: right; vertical-align: top;\">", <sym link>, "</td>\n<td></td><td style=\"vertical-align: top;\">", <sym Title>, "</td>\n<td style=\"vertical-align: top;\">", <lang if(nchar(Outfile), c("<a href=\"", root, Outfile, "\">", vignette_type(Outfile), "</a>"))>, "</td>\n<td style=\"vertical-align: top;\">", "<a href=\"", <sym root>, <sym File>, "\">source</a>", "</td>\n<td style=\"vertical-align: top; white-space: nowrap\">", <lang if(nchar(R), c("<a href=\"", root, R, "\">R code</a>"))>, "</td></tr>")
  SEXP Rsh_Fir_array_args73[14];
  Rsh_Fir_array_args73[0] = Rsh_const(CCP, 19);
  Rsh_Fir_array_args73[1] = Rsh_const(CCP, 16);
  Rsh_Fir_array_args73[2] = Rsh_const(CCP, 20);
  Rsh_Fir_array_args73[3] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args73[4] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args73[5] = Rsh_const(CCP, 56);
  Rsh_Fir_array_args73[6] = Rsh_const(CCP, 21);
  Rsh_Fir_array_args73[7] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args73[8] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args73[9] = Rsh_const(CCP, 12);
  Rsh_Fir_array_args73[10] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args73[11] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args73[12] = Rsh_const(CCP, 57);
  Rsh_Fir_array_args73[13] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names19[14];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_array_arg_names19[1] = R_MissingArg;
  Rsh_Fir_array_arg_names19[2] = R_MissingArg;
  Rsh_Fir_array_arg_names19[3] = R_MissingArg;
  Rsh_Fir_array_arg_names19[4] = R_MissingArg;
  Rsh_Fir_array_arg_names19[5] = R_MissingArg;
  Rsh_Fir_array_arg_names19[6] = R_MissingArg;
  Rsh_Fir_array_arg_names19[7] = R_MissingArg;
  Rsh_Fir_array_arg_names19[8] = R_MissingArg;
  Rsh_Fir_array_arg_names19[9] = R_MissingArg;
  Rsh_Fir_array_arg_names19[10] = R_MissingArg;
  Rsh_Fir_array_arg_names19[11] = R_MissingArg;
  Rsh_Fir_array_arg_names19[12] = R_MissingArg;
  Rsh_Fir_array_arg_names19[13] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 14, Rsh_Fir_array_args73, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L15(i43, r27)
  // L15(i43, r27)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L15_;

D27_:;
  // deopt 105 [i43, link]
  SEXP Rsh_Fir_array_deopt_stack26[2];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack26[1] = Rsh_Fir_reg_link;
  Rsh_Fir_deopt(105, 2, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L86_:;
  // link1 = force? link
  Rsh_Fir_reg_link1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_link);
  // checkMissing(link1)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_link1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty()));
  // Title = ld Title
  Rsh_Fir_reg_Title = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // check L87() else D28()
  // L87()
  goto L87_;

D28_:;
  // deopt 108 [i43, Title]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_Title;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L87_:;
  // Title1 = force? Title
  Rsh_Fir_reg_Title1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Title);
  // checkMissing(Title1)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_Title1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // sym7 = ldf nchar
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base7 = ldf nchar in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args76[2];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args76[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args76);
  // if guard7 then L88() else L89()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L88()
    goto L88_;
  } else {
  // L89()
    goto L89_;
  }

L88_:;
  // Outfile7 = ld Outfile
  Rsh_Fir_reg_Outfile7_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L90() else D29()
  // L90()
  goto L90_;

L89_:;
  // r29 = dyn base7(<sym Outfile>)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args77, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L16(i43, r29)
  // L16(i43, r29)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L16_;

D29_:;
  // deopt 113 [i43, Outfile7]
  SEXP Rsh_Fir_array_deopt_stack28[2];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack28[1] = Rsh_Fir_reg_Outfile7_;
  Rsh_Fir_deopt(113, 2, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L90_:;
  // Outfile8 = force? Outfile7
  Rsh_Fir_reg_Outfile8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Outfile7_);
  // checkMissing(Outfile8)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_Outfile8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty()));
  // nchar1 = ldf nchar in base
  Rsh_Fir_reg_nchar1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r31 = dyn nchar1(Outfile8, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args79[4];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_Outfile8_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args79[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args79[3] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names21[4];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar1_, 4, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L91() else D30()
  // L91()
  goto L91_;

D30_:;
  // deopt 119 [i43, r31]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i43_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(119, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L16(i43, r31)
  // L16(i43, r31)
  Rsh_Fir_reg_i55_ = Rsh_Fir_reg_i43_;
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L16_;

L92_:;
  // sym8 = ldf c
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base8 = ldf c in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args80[2];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args80[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args80);
  // if guard8 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L93_:;
  // root2 = ld root
  Rsh_Fir_reg_root2_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L95() else D31()
  // L95()
  goto L95_;

L94_:;
  // r32 = dyn base8("<a href=\"", <sym root>, <sym Outfile>, "\">", <lang vignette_type(Outfile)>, "</a>")
  SEXP Rsh_Fir_array_args81[6];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args81[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 9);
  Rsh_Fir_array_args81[3] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args81[4] = Rsh_const(CCP, 58);
  Rsh_Fir_array_args81[5] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names22[6];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_array_arg_names22[5] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 6, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L18(i55, r32)
  // L18(i55, r32)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L18_;

D31_:;
  // deopt 123 [i55, root2]
  SEXP Rsh_Fir_array_deopt_stack30[2];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack30[1] = Rsh_Fir_reg_root2_;
  Rsh_Fir_deopt(123, 2, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L95_:;
  // root3 = force? root2
  Rsh_Fir_reg_root3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_root2_);
  // checkMissing(root3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_root3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // Outfile9 = ld Outfile
  Rsh_Fir_reg_Outfile9_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // check L96() else D32()
  // L96()
  goto L96_;

D32_:;
  // deopt 125 [i55, Outfile9]
  SEXP Rsh_Fir_array_deopt_stack31[2];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack31[1] = Rsh_Fir_reg_Outfile9_;
  Rsh_Fir_deopt(125, 2, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L96_:;
  // Outfile10 = force? Outfile9
  Rsh_Fir_reg_Outfile10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Outfile9_);
  // checkMissing(Outfile10)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_Outfile10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty()));
  // vignette_type = ldf vignette_type
  Rsh_Fir_reg_vignette_type = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 59), RHO);
  // check L97() else D33()
  // L97()
  goto L97_;

D33_:;
  // deopt 129 [i55]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_deopt(129, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L97_:;
  // p2 = prom<V +>{
  //   Outfile11 = ld Outfile;
  //   Outfile12 = force? Outfile11;
  //   checkMissing(Outfile12);
  //   return Outfile12;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1034026925_2, CCP, RHO);
  // r35 = dyn vignette_type(p2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_vignette_type, 1, Rsh_Fir_array_args85, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L98() else D34()
  // L98()
  goto L98_;

D34_:;
  // deopt 131 [i55, r35]
  SEXP Rsh_Fir_array_deopt_stack33[2];
  Rsh_Fir_array_deopt_stack33[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack33[1] = Rsh_Fir_reg_r35_;
  Rsh_Fir_deopt(131, 2, Rsh_Fir_array_deopt_stack33, CCP, RHO);
  return R_NilValue;

L98_:;
  // c11 = ldf c in base
  Rsh_Fir_reg_c11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r36 = dyn c11("<a href=\"", root3, Outfile10, "\">", r35, "</a>")
  SEXP Rsh_Fir_array_args86[6];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_root3_;
  Rsh_Fir_array_args86[2] = Rsh_Fir_reg_Outfile10_;
  Rsh_Fir_array_args86[3] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args86[4] = Rsh_Fir_reg_r35_;
  Rsh_Fir_array_args86[5] = Rsh_const(CCP, 51);
  SEXP Rsh_Fir_array_arg_names24[6];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_array_arg_names24[2] = R_MissingArg;
  Rsh_Fir_array_arg_names24[3] = R_MissingArg;
  Rsh_Fir_array_arg_names24[4] = R_MissingArg;
  Rsh_Fir_array_arg_names24[5] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c11_, 6, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L99() else D35()
  // L99()
  goto L99_;

D35_:;
  // deopt 134 [i55, r36]
  SEXP Rsh_Fir_array_deopt_stack34[2];
  Rsh_Fir_array_deopt_stack34[0] = Rsh_Fir_reg_i55_;
  Rsh_Fir_array_deopt_stack34[1] = Rsh_Fir_reg_r36_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack34, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L18(i55, r36)
  // L18(i55, r36)
  Rsh_Fir_reg_i60_ = Rsh_Fir_reg_i55_;
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r36_;
  goto L18_;

D36_:;
  // deopt 139 [i61, root4]
  SEXP Rsh_Fir_array_deopt_stack35[2];
  Rsh_Fir_array_deopt_stack35[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack35[1] = Rsh_Fir_reg_root4_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack35, CCP, RHO);
  return R_NilValue;

L101_:;
  // root5 = force? root4
  Rsh_Fir_reg_root5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_root4_);
  // checkMissing(root5)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_root5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // File2 = ld File
  Rsh_Fir_reg_File2_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // check L102() else D37()
  // L102()
  goto L102_;

D37_:;
  // deopt 141 [i61, File2]
  SEXP Rsh_Fir_array_deopt_stack36[2];
  Rsh_Fir_array_deopt_stack36[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack36[1] = Rsh_Fir_reg_File2_;
  Rsh_Fir_deopt(141, 2, Rsh_Fir_array_deopt_stack36, CCP, RHO);
  return R_NilValue;

L102_:;
  // File3 = force? File2
  Rsh_Fir_reg_File3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_File2_);
  // checkMissing(File3)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_File3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // sym9 = ldf nchar
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // base9 = ldf nchar in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args89[2];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args89[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args89);
  // if guard9 then L103() else L104()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L103()
    goto L103_;
  } else {
  // L104()
    goto L104_;
  }

L103_:;
  // R = ld R
  Rsh_Fir_reg_R = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L105() else D38()
  // L105()
  goto L105_;

L104_:;
  // r38 = dyn base9(<sym R>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L20(i61, r38)
  // L20(i61, r38)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L20_;

D38_:;
  // deopt 147 [i61, R]
  SEXP Rsh_Fir_array_deopt_stack37[2];
  Rsh_Fir_array_deopt_stack37[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack37[1] = Rsh_Fir_reg_R;
  Rsh_Fir_deopt(147, 2, Rsh_Fir_array_deopt_stack37, CCP, RHO);
  return R_NilValue;

L105_:;
  // R1 = force? R
  Rsh_Fir_reg_R1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R);
  // checkMissing(R1)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_R1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // nchar2 = ldf nchar in base
  Rsh_Fir_reg_nchar2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 52), RHO);
  // r40 = dyn nchar2(R1, "chars", FALSE, NA_LGL)
  SEXP Rsh_Fir_array_args92[4];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_R1_;
  Rsh_Fir_array_args92[1] = Rsh_const(CCP, 53);
  Rsh_Fir_array_args92[2] = Rsh_const(CCP, 54);
  Rsh_Fir_array_args92[3] = Rsh_const(CCP, 55);
  SEXP Rsh_Fir_array_arg_names26[4];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_array_arg_names26[1] = R_MissingArg;
  Rsh_Fir_array_arg_names26[2] = R_MissingArg;
  Rsh_Fir_array_arg_names26[3] = R_MissingArg;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nchar2_, 4, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names26, CCP, RHO);
  // check L106() else D39()
  // L106()
  goto L106_;

D39_:;
  // deopt 153 [i61, r40]
  SEXP Rsh_Fir_array_deopt_stack38[2];
  Rsh_Fir_array_deopt_stack38[0] = Rsh_Fir_reg_i61_;
  Rsh_Fir_array_deopt_stack38[1] = Rsh_Fir_reg_r40_;
  Rsh_Fir_deopt(153, 2, Rsh_Fir_array_deopt_stack38, CCP, RHO);
  return R_NilValue;

L106_:;
  // goto L20(i61, r40)
  // L20(i61, r40)
  Rsh_Fir_reg_i64_ = Rsh_Fir_reg_i61_;
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L20_;

L107_:;
  // sym10 = ldf c
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base10 = ldf c in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args93[2];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args93[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args93);
  // if guard10 then L108() else L109()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L108()
    goto L108_;
  } else {
  // L109()
    goto L109_;
  }

L108_:;
  // root6 = ld root
  Rsh_Fir_reg_root6_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // check L110() else D40()
  // L110()
  goto L110_;

L109_:;
  // r41 = dyn base10("<a href=\"", <sym root>, <sym R>, "\">R code</a>")
  SEXP Rsh_Fir_array_args94[4];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args94[1] = Rsh_const(CCP, 15);
  Rsh_Fir_array_args94[2] = Rsh_const(CCP, 13);
  Rsh_Fir_array_args94[3] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names27[4];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_array_arg_names27[2] = R_MissingArg;
  Rsh_Fir_array_arg_names27[3] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 4, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names27, CCP, RHO);
  // goto L22(i64, r41)
  // L22(i64, r41)
  Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i64_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L22_;

D40_:;
  // deopt 157 [i64, root6]
  SEXP Rsh_Fir_array_deopt_stack39[2];
  Rsh_Fir_array_deopt_stack39[0] = Rsh_Fir_reg_i64_;
  Rsh_Fir_array_deopt_stack39[1] = Rsh_Fir_reg_root6_;
  Rsh_Fir_deopt(157, 2, Rsh_Fir_array_deopt_stack39, CCP, RHO);
  return R_NilValue;

L110_:;
  // root7 = force? root6
  Rsh_Fir_reg_root7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_root6_);
  // checkMissing(root7)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_root7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // R2 = ld R
  Rsh_Fir_reg_R2_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L111() else D41()
  // L111()
  goto L111_;

D41_:;
  // deopt 159 [i64, R2]
  SEXP Rsh_Fir_array_deopt_stack40[2];
  Rsh_Fir_array_deopt_stack40[0] = Rsh_Fir_reg_i64_;
  Rsh_Fir_array_deopt_stack40[1] = Rsh_Fir_reg_R2_;
  Rsh_Fir_deopt(159, 2, Rsh_Fir_array_deopt_stack40, CCP, RHO);
  return R_NilValue;

L111_:;
  // R3 = force? R2
  Rsh_Fir_reg_R3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_R2_);
  // checkMissing(R3)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_R3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // c13 = ldf c in base
  Rsh_Fir_reg_c13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r43 = dyn c13("<a href=\"", root7, R3, "\">R code</a>")
  SEXP Rsh_Fir_array_args97[4];
  Rsh_Fir_array_args97[0] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_root7_;
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_R3_;
  Rsh_Fir_array_args97[3] = Rsh_const(CCP, 60);
  SEXP Rsh_Fir_array_arg_names28[4];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_array_arg_names28[1] = R_MissingArg;
  Rsh_Fir_array_arg_names28[2] = R_MissingArg;
  Rsh_Fir_array_arg_names28[3] = R_MissingArg;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c13_, 4, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names28, CCP, RHO);
  // check L112() else D42()
  // L112()
  goto L112_;

D42_:;
  // deopt 163 [i64, r43]
  SEXP Rsh_Fir_array_deopt_stack41[2];
  Rsh_Fir_array_deopt_stack41[0] = Rsh_Fir_reg_i64_;
  Rsh_Fir_array_deopt_stack41[1] = Rsh_Fir_reg_r43_;
  Rsh_Fir_deopt(163, 2, Rsh_Fir_array_deopt_stack41, CCP, RHO);
  return R_NilValue;

L112_:;
  // goto L22(i64, r43)
  // L22(i64, r43)
  Rsh_Fir_reg_i69_ = Rsh_Fir_reg_i64_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L22_;

D43_:;
  // deopt 168 [i70, r45]
  SEXP Rsh_Fir_array_deopt_stack42[2];
  Rsh_Fir_array_deopt_stack42[0] = Rsh_Fir_reg_i70_;
  Rsh_Fir_array_deopt_stack42[1] = Rsh_Fir_reg_r45_;
  Rsh_Fir_deopt(168, 2, Rsh_Fir_array_deopt_stack42, CCP, RHO);
  return R_NilValue;

L114_:;
  // goto L15(i70, r45)
  // L15(i70, r45)
  Rsh_Fir_reg_i52_ = Rsh_Fir_reg_i70_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r45_;
  goto L15_;

L115_:;
  // out = ld out
  Rsh_Fir_reg_out = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L117() else D44()
  // L117()
  goto L117_;

L116_:;
  // r46 = dyn base11(<sym out>, <lang paste(line, collapse="")>)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args98[1] = Rsh_const(CCP, 61);
  SEXP Rsh_Fir_array_arg_names29[2];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_array_arg_names29[1] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L24(i52, r46)
  // L24(i52, r46)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L24_;

D44_:;
  // deopt 172 [i52, out]
  SEXP Rsh_Fir_array_deopt_stack43[2];
  Rsh_Fir_array_deopt_stack43[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack43[1] = Rsh_Fir_reg_out;
  Rsh_Fir_deopt(172, 2, Rsh_Fir_array_deopt_stack43, CCP, RHO);
  return R_NilValue;

L117_:;
  // out1 = force? out
  Rsh_Fir_reg_out1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out);
  // checkMissing(out1)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_out1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args99, Rsh_Fir_param_types_empty()));
  // paste = ldf paste
  Rsh_Fir_reg_paste = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 62), RHO);
  // check L118() else D45()
  // L118()
  goto L118_;

D45_:;
  // deopt 175 [i52]
  SEXP Rsh_Fir_array_deopt_stack44[1];
  Rsh_Fir_array_deopt_stack44[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_deopt(175, 1, Rsh_Fir_array_deopt_stack44, CCP, RHO);
  return R_NilValue;

L118_:;
  // p3 = prom<V +>{
  //   line = ld line;
  //   line1 = force? line;
  //   checkMissing(line1);
  //   return line1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner1034026925_3, CCP, RHO);
  // r49 = dyn paste[, collapse](p3, "")
  SEXP Rsh_Fir_array_args101[2];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_p3_;
  Rsh_Fir_array_args101[1] = Rsh_const(CCP, 63);
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = Rsh_const(CCP, 64);
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_paste, 2, Rsh_Fir_array_args101, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L119() else D46()
  // L119()
  goto L119_;

D46_:;
  // deopt 179 [i52, r49]
  SEXP Rsh_Fir_array_deopt_stack45[2];
  Rsh_Fir_array_deopt_stack45[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack45[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(179, 2, Rsh_Fir_array_deopt_stack45, CCP, RHO);
  return R_NilValue;

L119_:;
  // c15 = ldf c in base
  Rsh_Fir_reg_c15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r50 = dyn c15(out1, r49)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_out1_;
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_array_arg_names31[2];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_array_arg_names31[1] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c15_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names31, CCP, RHO);
  // check L120() else D47()
  // L120()
  goto L120_;

D47_:;
  // deopt 181 [i52, r50]
  SEXP Rsh_Fir_array_deopt_stack46[2];
  Rsh_Fir_array_deopt_stack46[0] = Rsh_Fir_reg_i52_;
  Rsh_Fir_array_deopt_stack46[1] = Rsh_Fir_reg_r50_;
  Rsh_Fir_deopt(181, 2, Rsh_Fir_array_deopt_stack46, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L24(i52, r50)
  // L24(i52, r50)
  Rsh_Fir_reg_i73_ = Rsh_Fir_reg_i52_;
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r50_;
  goto L24_;

L121_:;
  // out2 = ld out
  Rsh_Fir_reg_out2_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // check L123() else D48()
  // L123()
  goto L123_;

L122_:;
  // r51 = dyn base12(<sym out>, "</table>")
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 5);
  Rsh_Fir_array_args103[1] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names32[2];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_array_arg_names32[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L26(r51)
  // L26(r51)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r51_;
  goto L26_;

D48_:;
  // deopt 188 [out2]
  SEXP Rsh_Fir_array_deopt_stack47[1];
  Rsh_Fir_array_deopt_stack47[0] = Rsh_Fir_reg_out2_;
  Rsh_Fir_deopt(188, 1, Rsh_Fir_array_deopt_stack47, CCP, RHO);
  return R_NilValue;

L123_:;
  // out3 = force? out2
  Rsh_Fir_reg_out3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_out2_);
  // checkMissing(out3)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_out3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // c16 = ldf c in base
  Rsh_Fir_reg_c16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // r53 = dyn c16(out3, "</table>")
  SEXP Rsh_Fir_array_args105[2];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_out3_;
  Rsh_Fir_array_args105[1] = Rsh_const(CCP, 65);
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c16_, 2, Rsh_Fir_array_args105, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L124() else D49()
  // L124()
  goto L124_;

D49_:;
  // deopt 192 [r53]
  SEXP Rsh_Fir_array_deopt_stack48[1];
  Rsh_Fir_array_deopt_stack48[0] = Rsh_Fir_reg_r53_;
  Rsh_Fir_deopt(192, 1, Rsh_Fir_array_deopt_stack48, CCP, RHO);
  return R_NilValue;

L124_:;
  // goto L26(r53)
  // L26(r53)
  Rsh_Fir_reg_r52_ = Rsh_Fir_reg_r53_;
  goto L26_;
}
SEXP Rsh_Fir_user_promise_inner1034026925_(SEXP CCP, SEXP RHO) {
  // vignettes1 = ld vignettes
  Rsh_Fir_reg_vignettes1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // vignettes2 = force? vignettes1
  Rsh_Fir_reg_vignettes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_vignettes1_);
  // checkMissing(vignettes2)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_vignettes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty()));
  // return vignettes2
  return Rsh_Fir_reg_vignettes2_;
}
SEXP Rsh_Fir_user_promise_inner1034026925_1(SEXP CCP, SEXP RHO) {
  // Outfile = ld Outfile
  Rsh_Fir_reg_Outfile = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // Outfile1 = force? Outfile
  Rsh_Fir_reg_Outfile1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Outfile);
  // checkMissing(Outfile1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_Outfile1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty()));
  // return Outfile1
  return Rsh_Fir_reg_Outfile1_;
}
SEXP Rsh_Fir_user_promise_inner1034026925_2(SEXP CCP, SEXP RHO) {
  // Outfile11 = ld Outfile
  Rsh_Fir_reg_Outfile11_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // Outfile12 = force? Outfile11
  Rsh_Fir_reg_Outfile12_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_Outfile11_);
  // checkMissing(Outfile12)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_Outfile12_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // return Outfile12
  return Rsh_Fir_reg_Outfile12_;
}
SEXP Rsh_Fir_user_promise_inner1034026925_3(SEXP CCP, SEXP RHO) {
  // line = ld line
  Rsh_Fir_reg_line = Rsh_Fir_load(Rsh_const(CCP, 17), RHO);
  // line1 = force? line
  Rsh_Fir_reg_line1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_line);
  // checkMissing(line1)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_line1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty()));
  // return line1
  return Rsh_Fir_reg_line1_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
