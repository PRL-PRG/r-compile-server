#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2203552840_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2203552840_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2203552840_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_15(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_16(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_17(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_18(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_19(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_20(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_21(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_22(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2203552840_23(SEXP CCP, SEXP RHO);
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
  // r = clos inner2203552840
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2203552840_, RHO, CCP);
  // st write_PACKAGES = r
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
SEXP Rsh_Fir_user_function_inner2203552840_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2203552840 dynamic dispatch ([dir, fields, type, verbose, unpacked, subdirs, latestOnly, addFiles, rds_compress, validate])

  return Rsh_Fir_user_version_inner2203552840_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2203552840_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2203552840 version 0 (*, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 10) Rsh_error("FIŘ arity mismatch for inner2203552840/0: expected 10, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_dir;  // dir
  SEXP Rsh_Fir_reg_fields;  // fields
  SEXP Rsh_Fir_reg_type;  // type
  SEXP Rsh_Fir_reg_verbose;  // verbose
  SEXP Rsh_Fir_reg_unpacked;  // unpacked
  SEXP Rsh_Fir_reg_subdirs;  // subdirs
  SEXP Rsh_Fir_reg_latestOnly;  // latestOnly
  SEXP Rsh_Fir_reg_addFiles;  // addFiles
  SEXP Rsh_Fir_reg_rds_compress;  // rds_compress
  SEXP Rsh_Fir_reg_validate;  // validate
  SEXP Rsh_Fir_reg_dir_isMissing;  // dir_isMissing
  SEXP Rsh_Fir_reg_dir_orDefault;  // dir_orDefault
  SEXP Rsh_Fir_reg_fields_isMissing;  // fields_isMissing
  SEXP Rsh_Fir_reg_fields_orDefault;  // fields_orDefault
  SEXP Rsh_Fir_reg_type_isMissing;  // type_isMissing
  SEXP Rsh_Fir_reg_type_orDefault;  // type_orDefault
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_verbose_isMissing;  // verbose_isMissing
  SEXP Rsh_Fir_reg_verbose_orDefault;  // verbose_orDefault
  SEXP Rsh_Fir_reg_unpacked_isMissing;  // unpacked_isMissing
  SEXP Rsh_Fir_reg_unpacked_orDefault;  // unpacked_orDefault
  SEXP Rsh_Fir_reg_subdirs_isMissing;  // subdirs_isMissing
  SEXP Rsh_Fir_reg_subdirs_orDefault;  // subdirs_orDefault
  SEXP Rsh_Fir_reg_latestOnly_isMissing;  // latestOnly_isMissing
  SEXP Rsh_Fir_reg_latestOnly_orDefault;  // latestOnly_orDefault
  SEXP Rsh_Fir_reg_addFiles_isMissing;  // addFiles_isMissing
  SEXP Rsh_Fir_reg_addFiles_orDefault;  // addFiles_orDefault
  SEXP Rsh_Fir_reg_rds_compress_isMissing;  // rds_compress_isMissing
  SEXP Rsh_Fir_reg_rds_compress_orDefault;  // rds_compress_orDefault
  SEXP Rsh_Fir_reg_validate_isMissing;  // validate_isMissing
  SEXP Rsh_Fir_reg_validate_orDefault;  // validate_orDefault
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg__Platform;  // _Platform
  SEXP Rsh_Fir_reg__Platform1_;  // _Platform1
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg__Platform3_;  // _Platform3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_match_arg;  // match_arg
  SEXP Rsh_Fir_reg_type1_;  // type1
  SEXP Rsh_Fir_reg_type2_;  // type2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_subdirs1_;  // subdirs1
  SEXP Rsh_Fir_reg_subdirs2_;  // subdirs2
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_subdirs3_;  // subdirs3
  SEXP Rsh_Fir_reg_subdirs4_;  // subdirs4
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c18_;  // c18
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_setwd;  // setwd
  SEXP Rsh_Fir_reg_dir1_;  // dir1
  SEXP Rsh_Fir_reg_dir2_;  // dir2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_list_dirs;  // list_dirs
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_setwd1_;  // setwd1
  SEXP Rsh_Fir_reg_owd;  // owd
  SEXP Rsh_Fir_reg_owd1_;  // owd1
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_paths;  // paths
  SEXP Rsh_Fir_reg_paths1_;  // paths1
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_paths3_;  // paths3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_paths4_;  // paths4
  SEXP Rsh_Fir_reg_paths5_;  // paths5
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sub;  // sub
  SEXP Rsh_Fir_reg_paths6_;  // paths6
  SEXP Rsh_Fir_reg_paths7_;  // paths7
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_subdirs5_;  // subdirs5
  SEXP Rsh_Fir_reg_subdirs6_;  // subdirs6
  SEXP Rsh_Fir_reg_c23_;  // c23
  SEXP Rsh_Fir_reg_c24_;  // c24
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r29_;  // r29
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_subdirs7_;  // subdirs7
  SEXP Rsh_Fir_reg_subdirs8_;  // subdirs8
  SEXP Rsh_Fir_reg_c25_;  // c25
  SEXP Rsh_Fir_reg_r31_;  // r31
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_paths8_;  // paths8
  SEXP Rsh_Fir_reg_paths9_;  // paths9
  SEXP Rsh_Fir_reg_identical;  // identical
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_paths10_;  // paths10
  SEXP Rsh_Fir_reg_paths11_;  // paths11
  SEXP Rsh_Fir_reg_s;  // s
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_i;  // i
  SEXP Rsh_Fir_reg_i1_;  // i1
  SEXP Rsh_Fir_reg_i2_;  // i2
  SEXP Rsh_Fir_reg_c26_;  // c26
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r36_;  // r36
  SEXP Rsh_Fir_reg_i7_;  // i7
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_path;  // path
  SEXP Rsh_Fir_reg_path1_;  // path1
  SEXP Rsh_Fir_reg_nzchar;  // nzchar
  SEXP Rsh_Fir_reg_r38_;  // r38
  SEXP Rsh_Fir_reg_c27_;  // c27
  SEXP Rsh_Fir_reg_file_path;  // file_path
  SEXP Rsh_Fir_reg_dir3_;  // dir3
  SEXP Rsh_Fir_reg_dir4_;  // dir4
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_path2_;  // path2
  SEXP Rsh_Fir_reg_path3_;  // path3
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_i10_;  // i10
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_dir5_;  // dir5
  SEXP Rsh_Fir_reg_dir6_;  // dir6
  SEXP Rsh_Fir_reg__build_repository_package_db;  // _build_repository_package_db
  SEXP Rsh_Fir_reg_this;  // this
  SEXP Rsh_Fir_reg_this1_;  // this1
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_fields1_;  // fields1
  SEXP Rsh_Fir_reg_fields2_;  // fields2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_type3_;  // type3
  SEXP Rsh_Fir_reg_type4_;  // type4
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_verbose1_;  // verbose1
  SEXP Rsh_Fir_reg_verbose2_;  // verbose2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_unpacked1_;  // unpacked1
  SEXP Rsh_Fir_reg_unpacked2_;  // unpacked2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_validate1_;  // validate1
  SEXP Rsh_Fir_reg_validate2_;  // validate2
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg__process_repository_package_db_to_matrix;  // _process_repository_package_db_to_matrix
  SEXP Rsh_Fir_reg_desc;  // desc
  SEXP Rsh_Fir_reg_desc1_;  // desc1
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_path4_;  // path4
  SEXP Rsh_Fir_reg_path5_;  // path5
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_addFiles1_;  // addFiles1
  SEXP Rsh_Fir_reg_addFiles2_;  // addFiles2
  SEXP Rsh_Fir_reg_p15_;  // p15
  SEXP Rsh_Fir_reg_addPaths;  // addPaths
  SEXP Rsh_Fir_reg_addPaths1_;  // addPaths1
  SEXP Rsh_Fir_reg_p16_;  // p16
  SEXP Rsh_Fir_reg_latestOnly1_;  // latestOnly1
  SEXP Rsh_Fir_reg_latestOnly2_;  // latestOnly2
  SEXP Rsh_Fir_reg_p17_;  // p17
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_NROW;  // NROW
  SEXP Rsh_Fir_reg_desc2_;  // desc2
  SEXP Rsh_Fir_reg_desc3_;  // desc3
  SEXP Rsh_Fir_reg_p18_;  // p18
  SEXP Rsh_Fir_reg_r57_;  // r57
  SEXP Rsh_Fir_reg_c28_;  // c28
  SEXP Rsh_Fir_reg_rbind;  // rbind
  SEXP Rsh_Fir_reg_db;  // db
  SEXP Rsh_Fir_reg_db1_;  // db1
  SEXP Rsh_Fir_reg_p19_;  // p19
  SEXP Rsh_Fir_reg_desc4_;  // desc4
  SEXP Rsh_Fir_reg_desc5_;  // desc5
  SEXP Rsh_Fir_reg_p20_;  // p20
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_i13_;  // i13
  SEXP Rsh_Fir_reg__write_repository_package_db;  // _write_repository_package_db
  SEXP Rsh_Fir_reg_db2_;  // db2
  SEXP Rsh_Fir_reg_db3_;  // db3
  SEXP Rsh_Fir_reg_p21_;  // p21
  SEXP Rsh_Fir_reg_dir7_;  // dir7
  SEXP Rsh_Fir_reg_dir8_;  // dir8
  SEXP Rsh_Fir_reg_p22_;  // p22
  SEXP Rsh_Fir_reg_rds_compress1_;  // rds_compress1
  SEXP Rsh_Fir_reg_rds_compress2_;  // rds_compress2
  SEXP Rsh_Fir_reg_p23_;  // p23
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r66_;  // r66
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_np;  // np
  SEXP Rsh_Fir_reg_np1_;  // np1
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r68_;  // r68

  // Bind parameters
  Rsh_Fir_reg_dir = PARAMS[0];
  Rsh_Fir_reg_fields = PARAMS[1];
  Rsh_Fir_reg_type = PARAMS[2];
  Rsh_Fir_reg_verbose = PARAMS[3];
  Rsh_Fir_reg_unpacked = PARAMS[4];
  Rsh_Fir_reg_subdirs = PARAMS[5];
  Rsh_Fir_reg_latestOnly = PARAMS[6];
  Rsh_Fir_reg_addFiles = PARAMS[7];
  Rsh_Fir_reg_rds_compress = PARAMS[8];
  Rsh_Fir_reg_validate = PARAMS[9];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // dir_isMissing = missing.0(dir)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_dir;
  Rsh_Fir_reg_dir_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args);
  // if dir_isMissing then L0(".") else L0(dir)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dir_isMissing)) {
  // L0(".")
    Rsh_Fir_reg_dir_orDefault = Rsh_const(CCP, 1);
    goto L0_;
  } else {
  // L0(dir)
    Rsh_Fir_reg_dir_orDefault = Rsh_Fir_reg_dir;
    goto L0_;
  }

L0_:;
  // st dir = dir_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_dir_orDefault, RHO);
  (void)(Rsh_Fir_reg_dir_orDefault);
  // fields_isMissing = missing.0(fields)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_fields;
  Rsh_Fir_reg_fields_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args1);
  // if fields_isMissing then L1(NULL) else L1(fields)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_fields_isMissing)) {
  // L1(NULL)
    Rsh_Fir_reg_fields_orDefault = Rsh_const(CCP, 3);
    goto L1_;
  } else {
  // L1(fields)
    Rsh_Fir_reg_fields_orDefault = Rsh_Fir_reg_fields;
    goto L1_;
  }

L1_:;
  // st fields = fields_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_fields_orDefault, RHO);
  (void)(Rsh_Fir_reg_fields_orDefault);
  // type_isMissing = missing.0(type)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_type;
  Rsh_Fir_reg_type_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args2);
  // if type_isMissing then L2() else L3(type)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_type_isMissing)) {
  // L2()
    goto L2_;
  } else {
  // L3(type)
    Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_type;
    goto L3_;
  }

L2_:;
  // p = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L1() else L2();
  // L0(r1):
  //   return r1;
  // L1():
  //   c = ldf c in base;
  //   r2 = dyn c("source", "mac.binary", "win.binary");
  //   goto L0(r2);
  // L2():
  //   r = dyn base("source", "mac.binary", "win.binary");
  //   goto L0(r);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_, CCP, RHO);
  // goto L3(p)
  // L3(p)
  Rsh_Fir_reg_type_orDefault = Rsh_Fir_reg_p;
  goto L3_;

L3_:;
  // st type = type_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_type_orDefault, RHO);
  (void)(Rsh_Fir_reg_type_orDefault);
  // verbose_isMissing = missing.0(verbose)
  SEXP Rsh_Fir_array_args6[1];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_verbose;
  Rsh_Fir_reg_verbose_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args6);
  // if verbose_isMissing then L4(FALSE) else L4(verbose)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_verbose_isMissing)) {
  // L4(FALSE)
    Rsh_Fir_reg_verbose_orDefault = Rsh_const(CCP, 10);
    goto L4_;
  } else {
  // L4(verbose)
    Rsh_Fir_reg_verbose_orDefault = Rsh_Fir_reg_verbose;
    goto L4_;
  }

L4_:;
  // st verbose = verbose_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_verbose_orDefault, RHO);
  (void)(Rsh_Fir_reg_verbose_orDefault);
  // unpacked_isMissing = missing.0(unpacked)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_unpacked;
  Rsh_Fir_reg_unpacked_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args7);
  // if unpacked_isMissing then L5(FALSE) else L5(unpacked)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_unpacked_isMissing)) {
  // L5(FALSE)
    Rsh_Fir_reg_unpacked_orDefault = Rsh_const(CCP, 10);
    goto L5_;
  } else {
  // L5(unpacked)
    Rsh_Fir_reg_unpacked_orDefault = Rsh_Fir_reg_unpacked;
    goto L5_;
  }

L5_:;
  // st unpacked = unpacked_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_unpacked_orDefault, RHO);
  (void)(Rsh_Fir_reg_unpacked_orDefault);
  // subdirs_isMissing = missing.0(subdirs)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_subdirs;
  Rsh_Fir_reg_subdirs_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args8);
  // if subdirs_isMissing then L6(FALSE) else L6(subdirs)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_subdirs_isMissing)) {
  // L6(FALSE)
    Rsh_Fir_reg_subdirs_orDefault = Rsh_const(CCP, 10);
    goto L6_;
  } else {
  // L6(subdirs)
    Rsh_Fir_reg_subdirs_orDefault = Rsh_Fir_reg_subdirs;
    goto L6_;
  }

L6_:;
  // st subdirs = subdirs_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_subdirs_orDefault, RHO);
  (void)(Rsh_Fir_reg_subdirs_orDefault);
  // latestOnly_isMissing = missing.0(latestOnly)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_latestOnly;
  Rsh_Fir_reg_latestOnly_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args9);
  // if latestOnly_isMissing then L7(TRUE) else L7(latestOnly)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_latestOnly_isMissing)) {
  // L7(TRUE)
    Rsh_Fir_reg_latestOnly_orDefault = Rsh_const(CCP, 14);
    goto L7_;
  } else {
  // L7(latestOnly)
    Rsh_Fir_reg_latestOnly_orDefault = Rsh_Fir_reg_latestOnly;
    goto L7_;
  }

L7_:;
  // st latestOnly = latestOnly_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 15), Rsh_Fir_reg_latestOnly_orDefault, RHO);
  (void)(Rsh_Fir_reg_latestOnly_orDefault);
  // addFiles_isMissing = missing.0(addFiles)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_addFiles;
  Rsh_Fir_reg_addFiles_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args10);
  // if addFiles_isMissing then L8(FALSE) else L8(addFiles)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_addFiles_isMissing)) {
  // L8(FALSE)
    Rsh_Fir_reg_addFiles_orDefault = Rsh_const(CCP, 10);
    goto L8_;
  } else {
  // L8(addFiles)
    Rsh_Fir_reg_addFiles_orDefault = Rsh_Fir_reg_addFiles;
    goto L8_;
  }

L8_:;
  // st addFiles = addFiles_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 16), Rsh_Fir_reg_addFiles_orDefault, RHO);
  (void)(Rsh_Fir_reg_addFiles_orDefault);
  // rds_compress_isMissing = missing.0(rds_compress)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_rds_compress;
  Rsh_Fir_reg_rds_compress_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args11);
  // if rds_compress_isMissing then L9("xz") else L9(rds_compress)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_rds_compress_isMissing)) {
  // L9("xz")
    Rsh_Fir_reg_rds_compress_orDefault = Rsh_const(CCP, 17);
    goto L9_;
  } else {
  // L9(rds_compress)
    Rsh_Fir_reg_rds_compress_orDefault = Rsh_Fir_reg_rds_compress;
    goto L9_;
  }

L9_:;
  // st rds_compress = rds_compress_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 18), Rsh_Fir_reg_rds_compress_orDefault, RHO);
  (void)(Rsh_Fir_reg_rds_compress_orDefault);
  // validate_isMissing = missing.0(validate)
  SEXP Rsh_Fir_array_args12[1];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_validate;
  Rsh_Fir_reg_validate_isMissing = Rsh_Fir_builtin_missing_v0(CCP, RHO, 1, Rsh_Fir_array_args12);
  // if validate_isMissing then L10(FALSE) else L10(validate)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_validate_isMissing)) {
  // L10(FALSE)
    Rsh_Fir_reg_validate_orDefault = Rsh_const(CCP, 10);
    goto L10_;
  } else {
  // L10(validate)
    Rsh_Fir_reg_validate_orDefault = Rsh_Fir_reg_validate;
    goto L10_;
  }

L10_:;
  // st validate = validate_orDefault
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_validate_orDefault, RHO);
  (void)(Rsh_Fir_reg_validate_orDefault);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard1 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L11_:;
  // c1 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r5_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c1 then L35() else L12(c1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L35()
    goto L35_;
  } else {
  // L12(c1)
    Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c1_;
    goto L12_;
  }

L12_:;
  // c12 = `as.logical`(c3)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_c3_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // if c12 then L42() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L42()
    goto L42_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // match_arg = ldf `match.arg`
  Rsh_Fir_reg_match_arg = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // check L44() else D1()
  // L44()
  goto L44_;

L15_:;
  // c14 = `as.logical`(r13)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r13_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c14 then L49() else L16(c14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L49()
    goto L49_;
  } else {
  // L16(c14)
    Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c14_;
    goto L16_;
  }

L16_:;
  // c20 = `as.logical`(c16)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c20 then L52() else L17()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L52()
    goto L52_;
  } else {
  // L17()
    goto L17_;
  }

L17_:;
  // sym4 = ldf `is.character`
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base4 = ldf `is.character` in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard4 then L70() else L71()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L70()
    goto L70_;
  } else {
  // L71()
    goto L71_;
  }

L18_:;
  // st paths = r20
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r20_, RHO);
  (void)(Rsh_Fir_reg_r20_);
  // sub = ldf sub
  Rsh_Fir_reg_sub = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // check L67() else D14()
  // L67()
  goto L67_;

L19_:;
  // c22 = ldf c in base
  Rsh_Fir_reg_c22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r23 = dyn c22("", dx3)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_dx3_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c22_, 2, Rsh_Fir_array_args19, Rsh_Fir_array_arg_names2, CCP, RHO);
  // check L66() else D13()
  // L66()
  goto L66_;

L20_:;
  // st db = NULL
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_const(CCP, 3), RHO);
  (void)(Rsh_const(CCP, 3));
  // sym6 = ldf identical
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 27), RHO);
  // base6 = ldf identical in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard6 then L79() else L80()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L79()
    goto L79_;
  } else {
  // L80()
    goto L80_;
  }

L21_:;
  // c24 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args21[1];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c24_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args21, Rsh_Fir_param_types_empty());
  // if c24 then L73() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c24_)) {
  // L73()
    goto L73_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L20()
  // L20()
  goto L20_;

L23_:;
  // st paths = r30
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r30_, RHO);
  (void)(Rsh_Fir_reg_r30_);
  // goto L20()
  // L20()
  goto L20_;

L24_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // st addPaths = r35
  Rsh_Fir_store(Rsh_const(CCP, 28), Rsh_Fir_reg_r35_, RHO);
  (void)(Rsh_Fir_reg_r35_);
  // paths10 = ld paths
  Rsh_Fir_reg_paths10_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L83() else D21()
  // L83()
  goto L83_;

L25_:;
  // i2 = `+`.1(i1, 1)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_i1_;
  Rsh_Fir_array_args23[1] = Rsh_const(CCP, 29);
  Rsh_Fir_reg_i2_ = Rsh_Fir_builtin_add_v1(CCP, RHO, 2, Rsh_Fir_array_args23);
  // c26 = `<`.1(l, i2)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_c26_ = Rsh_Fir_builtin_lt_v1(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if c26 then L84() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c26_)) {
  // L84()
    goto L84_;
  } else {
  // L31()
    goto L31_;
  }

L26_:;
  // c27 = `as.logical`(r37)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_reg_c27_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // if c27 then L89() else L27()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c27_)) {
  // L89()
    goto L89_;
  } else {
  // L27()
    goto L27_;
  }

L27_:;
  // dir5 = ld dir
  Rsh_Fir_reg_dir5_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // check L93() else D26()
  // L93()
  goto L93_;

L28_:;
  // st this = r42
  Rsh_Fir_store(Rsh_const(CCP, 30), Rsh_Fir_reg_r42_, RHO);
  (void)(Rsh_Fir_reg_r42_);
  // _build_repository_package_db = ldf `.build_repository_package_db`
  Rsh_Fir_reg__build_repository_package_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 31), RHO);
  // check L94() else D27()
  // L94()
  goto L94_;

L29_:;
  // goto L30(i10)
  // L30(i10)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i10_;
  goto L30_;

L30_:;
  // goto L25(i13)
  // L25(i13)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i13_;
  goto L25_;

L31_:;
  // x = `[[`(s, i2, NULL, TRUE)
  SEXP Rsh_Fir_array_args26[4];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_s;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 3);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 14);
  Rsh_Fir_reg_x = Rsh_Fir_call_builtin(16, CCP, RHO, 4, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // st path = x
  Rsh_Fir_store(Rsh_const(CCP, 32), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // sym7 = ldf nzchar
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 33), RHO);
  // base7 = ldf nzchar in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard7 then L85() else L86()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L85()
    goto L85_;
  } else {
  // L86()
    goto L86_;
  }

L32_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r67
  return Rsh_Fir_reg_r67_;

L33_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // r6 = dyn missing(<sym type>)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args28, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L11(r6)
  // L11(r6)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r6_;
  goto L11_;

L34_:;
  // r4 = dyn base1(<sym type>)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args29, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L11(r4)
  // L11(r4)
  Rsh_Fir_reg_r5_ = Rsh_Fir_reg_r4_;
  goto L11_;

L35_:;
  // _Platform = ld `.Platform`
  Rsh_Fir_reg__Platform = Rsh_Fir_load(Rsh_const(CCP, 34), RHO);
  // check L36() else D0()
  // L36()
  goto L36_;

D0_:;
  // deopt 3 [c1, _Platform]
  SEXP Rsh_Fir_array_deopt_stack[2];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_c1_;
  Rsh_Fir_array_deopt_stack[1] = Rsh_Fir_reg__Platform;
  Rsh_Fir_deopt(3, 2, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L36_:;
  // _Platform1 = force? _Platform
  Rsh_Fir_reg__Platform1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__Platform);
  // checkMissing(_Platform1)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg__Platform1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty()));
  // c4 = `is.object`(_Platform1)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // if c4 then L38() else L39(c1, _Platform1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L38()
    goto L38_;
  } else {
  // L39(c1, _Platform1)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg__Platform1_;
    goto L39_;
  }

L37_:;
  // r8 = `==`(dx1, "windows")
  SEXP Rsh_Fir_array_args32[2];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_array_args32[1] = Rsh_const(CCP, 35);
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r8)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_r8_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty());
  // c10 = `&&`(c8, c9)
  SEXP Rsh_Fir_array_args34[2];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_c8_;
  Rsh_Fir_array_args34[1] = Rsh_Fir_reg_c9_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // goto L12(c10)
  // L12(c10)
  Rsh_Fir_reg_c3_ = Rsh_Fir_reg_c10_;
  goto L12_;

L38_:;
  // dr = tryDispatchBuiltin.1("$", _Platform1)
  SEXP Rsh_Fir_array_args35[2];
  Rsh_Fir_array_args35[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args35[1] = Rsh_Fir_reg__Platform1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args35);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args36, Rsh_Fir_param_types_empty());
  // if dc then L40() else L39(c1, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L40()
    goto L40_;
  } else {
  // L39(c1, dr)
    Rsh_Fir_reg_c6_ = Rsh_Fir_reg_c1_;
    Rsh_Fir_reg__Platform3_ = Rsh_Fir_reg_dr;
    goto L39_;
  }

L39_:;
  // r7 = `$`(_Platform3, <sym OS.type>)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg__Platform3_;
  Rsh_Fir_array_args37[1] = Rsh_const(CCP, 37);
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // goto L37(c6, r7)
  // L37(c6, r7)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c6_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r7_;
  goto L37_;

L40_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // goto L37(c1, dx)
  // L37(c1, dx)
  Rsh_Fir_reg_c8_ = Rsh_Fir_reg_c1_;
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L37_;

L42_:;
  // st type = "win.binary"
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_const(CCP, 8), RHO);
  (void)(Rsh_const(CCP, 8));
  // goto L14()
  // L14()
  goto L14_;

D1_:;
  // deopt 15 []
  Rsh_Fir_deopt(15, 0, NULL, CCP, RHO);
  return R_NilValue;

L44_:;
  // p1 = prom<V +>{
  //   type1 = ld type;
  //   type2 = force? type1;
  //   checkMissing(type2);
  //   return type2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_1, CCP, RHO);
  // r11 = dyn match_arg(p1)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_arg, 1, Rsh_Fir_array_args40, Rsh_Fir_array_arg_names5, CCP, RHO);
  // check L45() else D2()
  // L45()
  goto L45_;

D2_:;
  // deopt 17 [r11]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r11_;
  Rsh_Fir_deopt(17, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L45_:;
  // st type = r11
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_r11_, RHO);
  (void)(Rsh_Fir_reg_r11_);
  // st paths = ""
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_const(CCP, 25), RHO);
  (void)(Rsh_const(CCP, 25));
  // sym2 = ldf `is.logical`
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 38), RHO);
  // base2 = ldf `is.logical` in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 38), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard2 then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L46_:;
  // subdirs1 = ld subdirs
  Rsh_Fir_reg_subdirs1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L48() else D3()
  // L48()
  goto L48_;

L47_:;
  // r12 = dyn base2(<sym subdirs>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L15(r12)
  // L15(r12)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_r12_;
  goto L15_;

D3_:;
  // deopt 23 [subdirs1]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_subdirs1_;
  Rsh_Fir_deopt(23, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L48_:;
  // subdirs2 = force? subdirs1
  Rsh_Fir_reg_subdirs2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subdirs1_);
  // checkMissing(subdirs2)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_subdirs2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // c13 = `is.logical`(subdirs2)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_subdirs2_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // goto L15(c13)
  // L15(c13)
  Rsh_Fir_reg_r13_ = Rsh_Fir_reg_c13_;
  goto L15_;

L49_:;
  // subdirs3 = ld subdirs
  Rsh_Fir_reg_subdirs3_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L50() else D4()
  // L50()
  goto L50_;

D4_:;
  // deopt 26 [c14, subdirs3]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_subdirs3_;
  Rsh_Fir_deopt(26, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L50_:;
  // subdirs4 = force? subdirs3
  Rsh_Fir_reg_subdirs4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subdirs3_);
  // checkMissing(subdirs4)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_subdirs4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args45, Rsh_Fir_param_types_empty()));
  // c17 = `as.logical`(subdirs4)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_subdirs4_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty());
  // c18 = `&&`(c14, c17)
  SEXP Rsh_Fir_array_args47[2];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_c14_;
  Rsh_Fir_array_args47[1] = Rsh_Fir_reg_c17_;
  Rsh_Fir_reg_c18_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // goto L16(c18)
  // L16(c18)
  Rsh_Fir_reg_c16_ = Rsh_Fir_reg_c18_;
  goto L16_;

L52_:;
  // setwd = ldf setwd
  Rsh_Fir_reg_setwd = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L53() else D5()
  // L53()
  goto L53_;

D5_:;
  // deopt 30 []
  Rsh_Fir_deopt(30, 0, NULL, CCP, RHO);
  return R_NilValue;

L53_:;
  // p2 = prom<V +>{
  //   dir1 = ld dir;
  //   dir2 = force? dir1;
  //   checkMissing(dir2);
  //   return dir2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_2, CCP, RHO);
  // r15 = dyn setwd(p2)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r15_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setwd, 1, Rsh_Fir_array_args49, Rsh_Fir_array_arg_names7, CCP, RHO);
  // check L54() else D6()
  // L54()
  goto L54_;

D6_:;
  // deopt 32 [r15]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r15_;
  Rsh_Fir_deopt(32, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L54_:;
  // st owd = r15
  Rsh_Fir_store(Rsh_const(CCP, 40), Rsh_Fir_reg_r15_, RHO);
  (void)(Rsh_Fir_reg_r15_);
  // list_dirs = ldf `list.dirs`
  Rsh_Fir_reg_list_dirs = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 41), RHO);
  // check L55() else D7()
  // L55()
  goto L55_;

D7_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L55_:;
  // r16 = dyn list_dirs(".")
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list_dirs, 1, Rsh_Fir_array_args50, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L56() else D8()
  // L56()
  goto L56_;

D8_:;
  // deopt 37 [r16]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(37, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L56_:;
  // st paths = r16
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r16_, RHO);
  (void)(Rsh_Fir_reg_r16_);
  // setwd1 = ldf setwd
  Rsh_Fir_reg_setwd1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 39), RHO);
  // check L57() else D9()
  // L57()
  goto L57_;

D9_:;
  // deopt 40 []
  Rsh_Fir_deopt(40, 0, NULL, CCP, RHO);
  return R_NilValue;

L57_:;
  // p3 = prom<V +>{
  //   owd = ld owd;
  //   owd1 = force? owd;
  //   checkMissing(owd1);
  //   return owd1;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_3, CCP, RHO);
  // r18 = dyn setwd1(p3)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_setwd1_, 1, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L58() else D10()
  // L58()
  goto L58_;

D10_:;
  // deopt 42 [r18]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r18_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L58_:;
  // sym3 = ldf c
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base3 = ldf c in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args53[2];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args53[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args53);
  // if guard3 then L59() else L60()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L59()
    goto L59_;
  } else {
  // L60()
    goto L60_;
  }

L59_:;
  // paths = ld paths
  Rsh_Fir_reg_paths = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L61() else D11()
  // L61()
  goto L61_;

L60_:;
  // r19 = dyn base3("", <lang `[`(paths, `!=`(paths, "."))>)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args54[1] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names10[2];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_array_arg_names10[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 2, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L18(r19)
  // L18(r19)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r19_;
  goto L18_;

D11_:;
  // deopt 46 [paths]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_paths;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L61_:;
  // paths1 = force? paths
  Rsh_Fir_reg_paths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths);
  // checkMissing(paths1)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_paths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // c21 = `is.object`(paths1)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_paths1_;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty());
  // if c21 then L62() else L63(paths1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L62()
    goto L62_;
  } else {
  // L63(paths1)
    Rsh_Fir_reg_paths3_ = Rsh_Fir_reg_paths1_;
    goto L63_;
  }

L62_:;
  // dr2 = tryDispatchBuiltin.1("[", paths1)
  SEXP Rsh_Fir_array_args57[2];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args57[1] = Rsh_Fir_reg_paths1_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args57);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // if dc1 then L64() else L63(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L64()
    goto L64_;
  } else {
  // L63(dr2)
    Rsh_Fir_reg_paths3_ = Rsh_Fir_reg_dr2_;
    goto L63_;
  }

L63_:;
  // paths4 = ld paths
  Rsh_Fir_reg_paths4_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L65() else D12()
  // L65()
  goto L65_;

L64_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args59, Rsh_Fir_param_types_empty());
  // goto L19(dx2)
  // L19(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L19_;

D12_:;
  // deopt 48 [paths3, paths4]
  SEXP Rsh_Fir_array_deopt_stack8[2];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_paths3_;
  Rsh_Fir_array_deopt_stack8[1] = Rsh_Fir_reg_paths4_;
  Rsh_Fir_deopt(48, 2, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L65_:;
  // paths5 = force? paths4
  Rsh_Fir_reg_paths5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths4_);
  // checkMissing(paths5)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_Fir_reg_paths5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args60, Rsh_Fir_param_types_empty()));
  // r21 = `!=`(paths5, ".")
  SEXP Rsh_Fir_array_args61[2];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_paths5_;
  Rsh_Fir_array_args61[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(75, CCP, RHO, 2, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 44), RHO);
  // r22 = dyn __(paths3, r21)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_paths3_;
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_array_arg_names11[2];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_array_arg_names11[1] = R_MissingArg;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L19(r22)
  // L19(r22)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r22_;
  goto L19_;

D13_:;
  // deopt 54 [r23]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L18(r23)
  // L18(r23)
  Rsh_Fir_reg_r20_ = Rsh_Fir_reg_r23_;
  goto L18_;

D14_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L67_:;
  // p4 = prom<V +>{
  //   paths6 = ld paths;
  //   paths7 = force? paths6;
  //   checkMissing(paths7);
  //   return paths7;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_4, CCP, RHO);
  // r25 = dyn sub("^[.]/", "", p4)
  SEXP Rsh_Fir_array_args64[3];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args64[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args64[2] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names12[3];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_array_arg_names12[2] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_sub, 3, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L68() else D15()
  // L68()
  goto L68_;

D15_:;
  // deopt 61 [r25]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r25_;
  Rsh_Fir_deopt(61, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L68_:;
  // st paths = r25
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_r25_, RHO);
  (void)(Rsh_Fir_reg_r25_);
  // goto L20()
  // L20()
  goto L20_;

L70_:;
  // subdirs5 = ld subdirs
  Rsh_Fir_reg_subdirs5_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L72() else D16()
  // L72()
  goto L72_;

L71_:;
  // r27 = dyn base4(<sym subdirs>)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args65, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L21(r27)
  // L21(r27)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_r27_;
  goto L21_;

D16_:;
  // deopt 64 [subdirs5]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_subdirs5_;
  Rsh_Fir_deopt(64, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L72_:;
  // subdirs6 = force? subdirs5
  Rsh_Fir_reg_subdirs6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subdirs5_);
  // checkMissing(subdirs6)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_subdirs6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty()));
  // c23 = `is.character`(subdirs6)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_subdirs6_;
  Rsh_Fir_reg_c23_ = Rsh_Fir_call_builtin(389, CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L21(c23)
  // L21(c23)
  Rsh_Fir_reg_r28_ = Rsh_Fir_reg_c23_;
  goto L21_;

L73_:;
  // sym5 = ldf c
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base5 = ldf c in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args68[2];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args68[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args68);
  // if guard5 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L74_:;
  // subdirs7 = ld subdirs
  Rsh_Fir_reg_subdirs7_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // check L76() else D17()
  // L76()
  goto L76_;

L75_:;
  // r29 = dyn base5("", <sym subdirs>)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args69[1] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names14[2];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_array_arg_names14[1] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 2, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L23(r29)
  // L23(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L23_;

D17_:;
  // deopt 70 [subdirs7]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_subdirs7_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L76_:;
  // subdirs8 = force? subdirs7
  Rsh_Fir_reg_subdirs8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_subdirs7_);
  // checkMissing(subdirs8)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_subdirs8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // c25 = ldf c in base
  Rsh_Fir_reg_c25_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // r31 = dyn c25("", subdirs8)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_subdirs8_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c25_, 2, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L77() else D18()
  // L77()
  goto L77_;

D18_:;
  // deopt 73 [r31]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r31_;
  Rsh_Fir_deopt(73, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L77_:;
  // goto L23(r31)
  // L23(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L23_;

L79_:;
  // paths8 = ld paths
  Rsh_Fir_reg_paths8_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // check L81() else D19()
  // L81()
  goto L81_;

L80_:;
  // r32 = dyn base6(<sym paths>, "")
  SEXP Rsh_Fir_array_args72[2];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args72[1] = Rsh_const(CCP, 25);
  SEXP Rsh_Fir_array_arg_names16[2];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_array_arg_names16[1] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 2, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L24(r32)
  // L24(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L24_;

D19_:;
  // deopt 82 [paths8]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_paths8_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L81_:;
  // paths9 = force? paths8
  Rsh_Fir_reg_paths9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths8_);
  // checkMissing(paths9)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_paths9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // identical = ldf identical in base
  Rsh_Fir_reg_identical = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 27), RHO);
  // r34 = dyn identical(paths9, "", TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE)
  SEXP Rsh_Fir_array_args74[9];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_paths9_;
  Rsh_Fir_array_args74[1] = Rsh_const(CCP, 25);
  Rsh_Fir_array_args74[2] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args74[3] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args74[4] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args74[5] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args74[6] = Rsh_const(CCP, 10);
  Rsh_Fir_array_args74[7] = Rsh_const(CCP, 14);
  Rsh_Fir_array_args74[8] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names17[9];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_array_arg_names17[1] = R_MissingArg;
  Rsh_Fir_array_arg_names17[2] = R_MissingArg;
  Rsh_Fir_array_arg_names17[3] = R_MissingArg;
  Rsh_Fir_array_arg_names17[4] = R_MissingArg;
  Rsh_Fir_array_arg_names17[5] = R_MissingArg;
  Rsh_Fir_array_arg_names17[6] = R_MissingArg;
  Rsh_Fir_array_arg_names17[7] = R_MissingArg;
  Rsh_Fir_array_arg_names17[8] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_identical, 9, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names17, CCP, RHO);
  // check L82() else D20()
  // L82()
  goto L82_;

D20_:;
  // deopt 93 [r34]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r34_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L82_:;
  // goto L24(r34)
  // L24(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L24_;

D21_:;
  // deopt 96 [paths10]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_paths10_;
  Rsh_Fir_deopt(96, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L83_:;
  // paths11 = force? paths10
  Rsh_Fir_reg_paths11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths10_);
  // checkMissing(paths11)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_Fir_reg_paths11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args75, Rsh_Fir_param_types_empty()));
  // s = toForSeq(paths11)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_paths11_;
  Rsh_Fir_reg_s = Rsh_Fir_intrinsic_toForSeq(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty());
  // l = length(s)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_s;
  Rsh_Fir_reg_l = Rsh_Fir_call_builtin(94, CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty());
  // i = 0
  Rsh_Fir_reg_i = Rsh_const(CCP, 46);
  // goto L25(i)
  // L25(i)
  Rsh_Fir_reg_i1_ = Rsh_Fir_reg_i;
  goto L25_;

L84_:;
  // _write_repository_package_db = ldf `.write_repository_package_db`
  Rsh_Fir_reg__write_repository_package_db = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 47), RHO);
  // check L104() else D35()
  // L104()
  goto L104_;

L85_:;
  // path = ld path
  Rsh_Fir_reg_path = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // check L87() else D22()
  // L87()
  goto L87_;

L86_:;
  // r36 = dyn base7(<sym path>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 32);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r36_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L26(i2, r36)
  // L26(i2, r36)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r36_;
  goto L26_;

D22_:;
  // deopt 100 [i2, path]
  SEXP Rsh_Fir_array_deopt_stack17[2];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack17[1] = Rsh_Fir_reg_path;
  Rsh_Fir_deopt(100, 2, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L87_:;
  // path1 = force? path
  Rsh_Fir_reg_path1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_path);
  // checkMissing(path1)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_path1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // nzchar = ldf nzchar in base
  Rsh_Fir_reg_nzchar = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 33), RHO);
  // r38 = dyn nzchar(path1)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_path1_;
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_nzchar, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names19, CCP, RHO);
  // check L88() else D23()
  // L88()
  goto L88_;

D23_:;
  // deopt 103 [i2, r38]
  SEXP Rsh_Fir_array_deopt_stack18[2];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_i2_;
  Rsh_Fir_array_deopt_stack18[1] = Rsh_Fir_reg_r38_;
  Rsh_Fir_deopt(103, 2, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L88_:;
  // goto L26(i2, r38)
  // L26(i2, r38)
  Rsh_Fir_reg_i7_ = Rsh_Fir_reg_i2_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_reg_r38_;
  goto L26_;

L89_:;
  // file_path = ldf `file.path`
  Rsh_Fir_reg_file_path = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 48), RHO);
  // check L90() else D24()
  // L90()
  goto L90_;

D24_:;
  // deopt 105 [i7]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_deopt(105, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L90_:;
  // p5 = prom<V +>{
  //   dir3 = ld dir;
  //   dir4 = force? dir3;
  //   checkMissing(dir4);
  //   return dir4;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_5, CCP, RHO);
  // p6 = prom<V +>{
  //   path2 = ld path;
  //   path3 = force? path2;
  //   checkMissing(path3);
  //   return path3;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_6, CCP, RHO);
  // r41 = dyn file_path(p5, p6)
  SEXP Rsh_Fir_array_args83[2];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_p5_;
  Rsh_Fir_array_args83[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names20[2];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_array_arg_names20[1] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_file_path, 2, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names20, CCP, RHO);
  // check L91() else D25()
  // L91()
  goto L91_;

D25_:;
  // deopt 108 [i7, r41]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_r41_;
  Rsh_Fir_deopt(108, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L91_:;
  // goto L28(i7, r41)
  // L28(i7, r41)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L28_;

D26_:;
  // deopt 109 [i7, dir5]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_i7_;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_dir5_;
  Rsh_Fir_deopt(109, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L93_:;
  // dir6 = force? dir5
  Rsh_Fir_reg_dir6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir5_);
  // checkMissing(dir6)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_Fir_reg_dir6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args84, Rsh_Fir_param_types_empty()));
  // goto L28(i7, dir6)
  // L28(i7, dir6)
  Rsh_Fir_reg_i10_ = Rsh_Fir_reg_i7_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_dir6_;
  goto L28_;

D27_:;
  // deopt 113 [i10]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(113, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L94_:;
  // p7 = prom<V +>{
  //   this = ld this;
  //   this1 = force? this;
  //   checkMissing(this1);
  //   return this1;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_7, CCP, RHO);
  // p8 = prom<V +>{
  //   fields1 = ld fields;
  //   fields2 = force? fields1;
  //   checkMissing(fields2);
  //   return fields2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_8, CCP, RHO);
  // p9 = prom<V +>{
  //   type3 = ld type;
  //   type4 = force? type3;
  //   checkMissing(type4);
  //   return type4;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_9, CCP, RHO);
  // p10 = prom<V +>{
  //   verbose1 = ld verbose;
  //   verbose2 = force? verbose1;
  //   checkMissing(verbose2);
  //   return verbose2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_10, CCP, RHO);
  // p11 = prom<V +>{
  //   unpacked1 = ld unpacked;
  //   unpacked2 = force? unpacked1;
  //   checkMissing(unpacked2);
  //   return unpacked2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_11, CCP, RHO);
  // p12 = prom<V +>{
  //   validate1 = ld validate;
  //   validate2 = force? validate1;
  //   checkMissing(validate2);
  //   return validate2;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_12, CCP, RHO);
  // r49 = dyn _build_repository_package_db(p7, p8, p9, p10, p11, p12)
  SEXP Rsh_Fir_array_args91[6];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_p7_;
  Rsh_Fir_array_args91[1] = Rsh_Fir_reg_p8_;
  Rsh_Fir_array_args91[2] = Rsh_Fir_reg_p9_;
  Rsh_Fir_array_args91[3] = Rsh_Fir_reg_p10_;
  Rsh_Fir_array_args91[4] = Rsh_Fir_reg_p11_;
  Rsh_Fir_array_args91[5] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names21[6];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_array_arg_names21[2] = R_MissingArg;
  Rsh_Fir_array_arg_names21[3] = R_MissingArg;
  Rsh_Fir_array_arg_names21[4] = R_MissingArg;
  Rsh_Fir_array_arg_names21[5] = R_MissingArg;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__build_repository_package_db, 6, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L95() else D28()
  // L95()
  goto L95_;

D28_:;
  // deopt 120 [i10, r49]
  SEXP Rsh_Fir_array_deopt_stack23[2];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack23[1] = Rsh_Fir_reg_r49_;
  Rsh_Fir_deopt(120, 2, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L95_:;
  // st desc = r49
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r49_, RHO);
  (void)(Rsh_Fir_reg_r49_);
  // _process_repository_package_db_to_matrix = ldf `.process_repository_package_db_to_matrix`
  Rsh_Fir_reg__process_repository_package_db_to_matrix = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 50), RHO);
  // check L96() else D29()
  // L96()
  goto L96_;

D29_:;
  // deopt 123 [i10]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(123, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L96_:;
  // p13 = prom<V +>{
  //   desc = ld desc;
  //   desc1 = force? desc;
  //   checkMissing(desc1);
  //   return desc1;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_13, CCP, RHO);
  // p14 = prom<V +>{
  //   path4 = ld path;
  //   path5 = force? path4;
  //   checkMissing(path5);
  //   return path5;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_14, CCP, RHO);
  // p15 = prom<V +>{
  //   addFiles1 = ld addFiles;
  //   addFiles2 = force? addFiles1;
  //   checkMissing(addFiles2);
  //   return addFiles2;
  // }
  Rsh_Fir_reg_p15_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_15, CCP, RHO);
  // p16 = prom<V +>{
  //   addPaths = ld addPaths;
  //   addPaths1 = force? addPaths;
  //   checkMissing(addPaths1);
  //   return addPaths1;
  // }
  Rsh_Fir_reg_p16_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_16, CCP, RHO);
  // p17 = prom<V +>{
  //   latestOnly1 = ld latestOnly;
  //   latestOnly2 = force? latestOnly1;
  //   checkMissing(latestOnly2);
  //   return latestOnly2;
  // }
  Rsh_Fir_reg_p17_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_17, CCP, RHO);
  // r55 = dyn _process_repository_package_db_to_matrix(p13, p14, p15, p16, p17)
  SEXP Rsh_Fir_array_args97[5];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_p13_;
  Rsh_Fir_array_args97[1] = Rsh_Fir_reg_p14_;
  Rsh_Fir_array_args97[2] = Rsh_Fir_reg_p15_;
  Rsh_Fir_array_args97[3] = Rsh_Fir_reg_p16_;
  Rsh_Fir_array_args97[4] = Rsh_Fir_reg_p17_;
  SEXP Rsh_Fir_array_arg_names22[5];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_array_arg_names22[1] = R_MissingArg;
  Rsh_Fir_array_arg_names22[2] = R_MissingArg;
  Rsh_Fir_array_arg_names22[3] = R_MissingArg;
  Rsh_Fir_array_arg_names22[4] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__process_repository_package_db_to_matrix, 5, Rsh_Fir_array_args97, Rsh_Fir_array_arg_names22, CCP, RHO);
  // check L97() else D30()
  // L97()
  goto L97_;

D30_:;
  // deopt 129 [i10, r55]
  SEXP Rsh_Fir_array_deopt_stack25[2];
  Rsh_Fir_array_deopt_stack25[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack25[1] = Rsh_Fir_reg_r55_;
  Rsh_Fir_deopt(129, 2, Rsh_Fir_array_deopt_stack25, CCP, RHO);
  return R_NilValue;

L97_:;
  // st desc = r55
  Rsh_Fir_store(Rsh_const(CCP, 49), Rsh_Fir_reg_r55_, RHO);
  (void)(Rsh_Fir_reg_r55_);
  // NROW = ldf NROW
  Rsh_Fir_reg_NROW = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 51), RHO);
  // check L98() else D31()
  // L98()
  goto L98_;

D31_:;
  // deopt 132 [i10]
  SEXP Rsh_Fir_array_deopt_stack26[1];
  Rsh_Fir_array_deopt_stack26[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(132, 1, Rsh_Fir_array_deopt_stack26, CCP, RHO);
  return R_NilValue;

L98_:;
  // p18 = prom<V +>{
  //   desc2 = ld desc;
  //   desc3 = force? desc2;
  //   checkMissing(desc3);
  //   return desc3;
  // }
  Rsh_Fir_reg_p18_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_18, CCP, RHO);
  // r57 = dyn NROW(p18)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_Fir_reg_p18_;
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r57_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_NROW, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names23, CCP, RHO);
  // check L99() else D32()
  // L99()
  goto L99_;

D32_:;
  // deopt 134 [i10, r57]
  SEXP Rsh_Fir_array_deopt_stack27[2];
  Rsh_Fir_array_deopt_stack27[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack27[1] = Rsh_Fir_reg_r57_;
  Rsh_Fir_deopt(134, 2, Rsh_Fir_array_deopt_stack27, CCP, RHO);
  return R_NilValue;

L99_:;
  // c28 = `as.logical`(r57)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_Fir_reg_r57_;
  Rsh_Fir_reg_c28_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args100, Rsh_Fir_param_types_empty());
  // if c28 then L100() else L29()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c28_)) {
  // L100()
    goto L100_;
  } else {
  // L29()
    goto L29_;
  }

L100_:;
  // rbind = ldf rbind
  Rsh_Fir_reg_rbind = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 52), RHO);
  // check L101() else D33()
  // L101()
  goto L101_;

D33_:;
  // deopt 136 [i10]
  SEXP Rsh_Fir_array_deopt_stack28[1];
  Rsh_Fir_array_deopt_stack28[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_deopt(136, 1, Rsh_Fir_array_deopt_stack28, CCP, RHO);
  return R_NilValue;

L101_:;
  // p19 = prom<V +>{
  //   db = ld db;
  //   db1 = force? db;
  //   checkMissing(db1);
  //   return db1;
  // }
  Rsh_Fir_reg_p19_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_19, CCP, RHO);
  // p20 = prom<V +>{
  //   desc4 = ld desc;
  //   desc5 = force? desc4;
  //   checkMissing(desc5);
  //   return desc5;
  // }
  Rsh_Fir_reg_p20_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_20, CCP, RHO);
  // r60 = dyn rbind(p19, p20)
  SEXP Rsh_Fir_array_args103[2];
  Rsh_Fir_array_args103[0] = Rsh_Fir_reg_p19_;
  Rsh_Fir_array_args103[1] = Rsh_Fir_reg_p20_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_rbind, 2, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L102() else D34()
  // L102()
  goto L102_;

D34_:;
  // deopt 139 [i10, r60]
  SEXP Rsh_Fir_array_deopt_stack29[2];
  Rsh_Fir_array_deopt_stack29[0] = Rsh_Fir_reg_i10_;
  Rsh_Fir_array_deopt_stack29[1] = Rsh_Fir_reg_r60_;
  Rsh_Fir_deopt(139, 2, Rsh_Fir_array_deopt_stack29, CCP, RHO);
  return R_NilValue;

L102_:;
  // st db = r60
  Rsh_Fir_store(Rsh_const(CCP, 26), Rsh_Fir_reg_r60_, RHO);
  (void)(Rsh_Fir_reg_r60_);
  // goto L30(i10)
  // L30(i10)
  Rsh_Fir_reg_i13_ = Rsh_Fir_reg_i10_;
  goto L30_;

D35_:;
  // deopt 147 []
  Rsh_Fir_deopt(147, 0, NULL, CCP, RHO);
  return R_NilValue;

L104_:;
  // p21 = prom<V +>{
  //   db2 = ld db;
  //   db3 = force? db2;
  //   checkMissing(db3);
  //   return db3;
  // }
  Rsh_Fir_reg_p21_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_21, CCP, RHO);
  // p22 = prom<V +>{
  //   dir7 = ld dir;
  //   dir8 = force? dir7;
  //   checkMissing(dir8);
  //   return dir8;
  // }
  Rsh_Fir_reg_p22_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_22, CCP, RHO);
  // p23 = prom<V +>{
  //   rds_compress1 = ld rds_compress;
  //   rds_compress2 = force? rds_compress1;
  //   checkMissing(rds_compress2);
  //   return rds_compress2;
  // }
  Rsh_Fir_reg_p23_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2203552840_23, CCP, RHO);
  // r65 = dyn _write_repository_package_db(p21, p22, p23)
  SEXP Rsh_Fir_array_args107[3];
  Rsh_Fir_array_args107[0] = Rsh_Fir_reg_p21_;
  Rsh_Fir_array_args107[1] = Rsh_Fir_reg_p22_;
  Rsh_Fir_array_args107[2] = Rsh_Fir_reg_p23_;
  SEXP Rsh_Fir_array_arg_names25[3];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_array_arg_names25[1] = R_MissingArg;
  Rsh_Fir_array_arg_names25[2] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg__write_repository_package_db, 3, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names25, CCP, RHO);
  // check L105() else D36()
  // L105()
  goto L105_;

D36_:;
  // deopt 151 [r65]
  SEXP Rsh_Fir_array_deopt_stack30[1];
  Rsh_Fir_array_deopt_stack30[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(151, 1, Rsh_Fir_array_deopt_stack30, CCP, RHO);
  return R_NilValue;

L105_:;
  // st np = r65
  Rsh_Fir_store(Rsh_const(CCP, 53), Rsh_Fir_reg_r65_, RHO);
  (void)(Rsh_Fir_reg_r65_);
  // sym8 = ldf invisible
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 54), RHO);
  // base8 = ldf invisible in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args108[2];
  Rsh_Fir_array_args108[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args108[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args108);
  // if guard8 then L106() else L107()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L106()
    goto L106_;
  } else {
  // L107()
    goto L107_;
  }

L106_:;
  // np = ld np
  Rsh_Fir_reg_np = Rsh_Fir_load(Rsh_const(CCP, 53), RHO);
  // check L108() else D37()
  // L108()
  goto L108_;

L107_:;
  // r66 = dyn base8(<sym np>)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_const(CCP, 53);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r66_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args109, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L32(r66)
  // L32(r66)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r66_;
  goto L32_;

D37_:;
  // deopt 155 [np]
  SEXP Rsh_Fir_array_deopt_stack31[1];
  Rsh_Fir_array_deopt_stack31[0] = Rsh_Fir_reg_np;
  Rsh_Fir_deopt(155, 1, Rsh_Fir_array_deopt_stack31, CCP, RHO);
  return R_NilValue;

L108_:;
  // np1 = force? np
  Rsh_Fir_reg_np1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_np);
  // checkMissing(np1)
  SEXP Rsh_Fir_array_args110[1];
  Rsh_Fir_array_args110[0] = Rsh_Fir_reg_np1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args110, Rsh_Fir_param_types_empty()));
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 54), RHO);
  // r68 = dyn invisible(np1)
  SEXP Rsh_Fir_array_args111[1];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_np1_;
  SEXP Rsh_Fir_array_arg_names27[1];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 1, Rsh_Fir_array_args111, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L109() else D38()
  // L109()
  goto L109_;

D38_:;
  // deopt 158 [r68]
  SEXP Rsh_Fir_array_deopt_stack32[1];
  Rsh_Fir_array_deopt_stack32[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_deopt(158, 1, Rsh_Fir_array_deopt_stack32, CCP, RHO);
  return R_NilValue;

L109_:;
  // goto L32(r68)
  // L32(r68)
  Rsh_Fir_reg_r67_ = Rsh_Fir_reg_r68_;
  goto L32_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
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
  // r2 = dyn c("source", "mac.binary", "win.binary")
  SEXP Rsh_Fir_array_args4[3];
  Rsh_Fir_array_args4[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args4[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args4[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names[3];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_array_arg_names[2] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c, 3, Rsh_Fir_array_args4, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r2_;
  goto L0_;

L2_:;
  // r = dyn base("source", "mac.binary", "win.binary")
  SEXP Rsh_Fir_array_args5[3];
  Rsh_Fir_array_args5[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args5[1] = Rsh_const(CCP, 7);
  Rsh_Fir_array_args5[2] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names1[3];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 3, Rsh_Fir_array_args5, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_1(SEXP CCP, SEXP RHO) {
  // type1 = ld type
  Rsh_Fir_reg_type1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // type2 = force? type1
  Rsh_Fir_reg_type2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type1_);
  // checkMissing(type2)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_type2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty()));
  // return type2
  return Rsh_Fir_reg_type2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_2(SEXP CCP, SEXP RHO) {
  // dir1 = ld dir
  Rsh_Fir_reg_dir1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dir2 = force? dir1
  Rsh_Fir_reg_dir2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir1_);
  // checkMissing(dir2)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg_dir2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // return dir2
  return Rsh_Fir_reg_dir2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_3(SEXP CCP, SEXP RHO) {
  // owd = ld owd
  Rsh_Fir_reg_owd = Rsh_Fir_load(Rsh_const(CCP, 40), RHO);
  // owd1 = force? owd
  Rsh_Fir_reg_owd1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_owd);
  // checkMissing(owd1)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_owd1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty()));
  // return owd1
  return Rsh_Fir_reg_owd1_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_4(SEXP CCP, SEXP RHO) {
  // paths6 = ld paths
  Rsh_Fir_reg_paths6_ = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // paths7 = force? paths6
  Rsh_Fir_reg_paths7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_paths6_);
  // checkMissing(paths7)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_paths7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty()));
  // return paths7
  return Rsh_Fir_reg_paths7_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_5(SEXP CCP, SEXP RHO) {
  // dir3 = ld dir
  Rsh_Fir_reg_dir3_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dir4 = force? dir3
  Rsh_Fir_reg_dir4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir3_);
  // checkMissing(dir4)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_dir4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return dir4
  return Rsh_Fir_reg_dir4_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_6(SEXP CCP, SEXP RHO) {
  // path2 = ld path
  Rsh_Fir_reg_path2_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // path3 = force? path2
  Rsh_Fir_reg_path3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_path2_);
  // checkMissing(path3)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_path3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // return path3
  return Rsh_Fir_reg_path3_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_7(SEXP CCP, SEXP RHO) {
  // this = ld this
  Rsh_Fir_reg_this = Rsh_Fir_load(Rsh_const(CCP, 30), RHO);
  // this1 = force? this
  Rsh_Fir_reg_this1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_this);
  // checkMissing(this1)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_this1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return this1
  return Rsh_Fir_reg_this1_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_8(SEXP CCP, SEXP RHO) {
  // fields1 = ld fields
  Rsh_Fir_reg_fields1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // fields2 = force? fields1
  Rsh_Fir_reg_fields2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fields1_);
  // checkMissing(fields2)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_fields2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty()));
  // return fields2
  return Rsh_Fir_reg_fields2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_9(SEXP CCP, SEXP RHO) {
  // type3 = ld type
  Rsh_Fir_reg_type3_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // type4 = force? type3
  Rsh_Fir_reg_type4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_type3_);
  // checkMissing(type4)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_type4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty()));
  // return type4
  return Rsh_Fir_reg_type4_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_10(SEXP CCP, SEXP RHO) {
  // verbose1 = ld verbose
  Rsh_Fir_reg_verbose1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // verbose2 = force? verbose1
  Rsh_Fir_reg_verbose2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_verbose1_);
  // checkMissing(verbose2)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_verbose2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // return verbose2
  return Rsh_Fir_reg_verbose2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_11(SEXP CCP, SEXP RHO) {
  // unpacked1 = ld unpacked
  Rsh_Fir_reg_unpacked1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // unpacked2 = force? unpacked1
  Rsh_Fir_reg_unpacked2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_unpacked1_);
  // checkMissing(unpacked2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_unpacked2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return unpacked2
  return Rsh_Fir_reg_unpacked2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_12(SEXP CCP, SEXP RHO) {
  // validate1 = ld validate
  Rsh_Fir_reg_validate1_ = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // validate2 = force? validate1
  Rsh_Fir_reg_validate2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_validate1_);
  // checkMissing(validate2)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_Fir_reg_validate2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args90, Rsh_Fir_param_types_empty()));
  // return validate2
  return Rsh_Fir_reg_validate2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_13(SEXP CCP, SEXP RHO) {
  // desc = ld desc
  Rsh_Fir_reg_desc = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // desc1 = force? desc
  Rsh_Fir_reg_desc1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_desc);
  // checkMissing(desc1)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_desc1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args92, Rsh_Fir_param_types_empty()));
  // return desc1
  return Rsh_Fir_reg_desc1_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_14(SEXP CCP, SEXP RHO) {
  // path4 = ld path
  Rsh_Fir_reg_path4_ = Rsh_Fir_load(Rsh_const(CCP, 32), RHO);
  // path5 = force? path4
  Rsh_Fir_reg_path5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_path4_);
  // checkMissing(path5)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_path5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // return path5
  return Rsh_Fir_reg_path5_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_15(SEXP CCP, SEXP RHO) {
  // addFiles1 = ld addFiles
  Rsh_Fir_reg_addFiles1_ = Rsh_Fir_load(Rsh_const(CCP, 16), RHO);
  // addFiles2 = force? addFiles1
  Rsh_Fir_reg_addFiles2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_addFiles1_);
  // checkMissing(addFiles2)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_addFiles2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // return addFiles2
  return Rsh_Fir_reg_addFiles2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_16(SEXP CCP, SEXP RHO) {
  // addPaths = ld addPaths
  Rsh_Fir_reg_addPaths = Rsh_Fir_load(Rsh_const(CCP, 28), RHO);
  // addPaths1 = force? addPaths
  Rsh_Fir_reg_addPaths1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_addPaths);
  // checkMissing(addPaths1)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_addPaths1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args95, Rsh_Fir_param_types_empty()));
  // return addPaths1
  return Rsh_Fir_reg_addPaths1_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_17(SEXP CCP, SEXP RHO) {
  // latestOnly1 = ld latestOnly
  Rsh_Fir_reg_latestOnly1_ = Rsh_Fir_load(Rsh_const(CCP, 15), RHO);
  // latestOnly2 = force? latestOnly1
  Rsh_Fir_reg_latestOnly2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_latestOnly1_);
  // checkMissing(latestOnly2)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_Fir_reg_latestOnly2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args96, Rsh_Fir_param_types_empty()));
  // return latestOnly2
  return Rsh_Fir_reg_latestOnly2_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_18(SEXP CCP, SEXP RHO) {
  // desc2 = ld desc
  Rsh_Fir_reg_desc2_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // desc3 = force? desc2
  Rsh_Fir_reg_desc3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_desc2_);
  // checkMissing(desc3)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_desc3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args98, Rsh_Fir_param_types_empty()));
  // return desc3
  return Rsh_Fir_reg_desc3_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_19(SEXP CCP, SEXP RHO) {
  // db = ld db
  Rsh_Fir_reg_db = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // db1 = force? db
  Rsh_Fir_reg_db1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db);
  // checkMissing(db1)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_db1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return db1
  return Rsh_Fir_reg_db1_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_20(SEXP CCP, SEXP RHO) {
  // desc4 = ld desc
  Rsh_Fir_reg_desc4_ = Rsh_Fir_load(Rsh_const(CCP, 49), RHO);
  // desc5 = force? desc4
  Rsh_Fir_reg_desc5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_desc4_);
  // checkMissing(desc5)
  SEXP Rsh_Fir_array_args102[1];
  Rsh_Fir_array_args102[0] = Rsh_Fir_reg_desc5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args102, Rsh_Fir_param_types_empty()));
  // return desc5
  return Rsh_Fir_reg_desc5_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_21(SEXP CCP, SEXP RHO) {
  // db2 = ld db
  Rsh_Fir_reg_db2_ = Rsh_Fir_load(Rsh_const(CCP, 26), RHO);
  // db3 = force? db2
  Rsh_Fir_reg_db3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_db2_);
  // checkMissing(db3)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_Fir_reg_db3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args104, Rsh_Fir_param_types_empty()));
  // return db3
  return Rsh_Fir_reg_db3_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_22(SEXP CCP, SEXP RHO) {
  // dir7 = ld dir
  Rsh_Fir_reg_dir7_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // dir8 = force? dir7
  Rsh_Fir_reg_dir8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dir7_);
  // checkMissing(dir8)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_dir8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return dir8
  return Rsh_Fir_reg_dir8_;
}
SEXP Rsh_Fir_user_promise_inner2203552840_23(SEXP CCP, SEXP RHO) {
  // rds_compress1 = ld rds_compress
  Rsh_Fir_reg_rds_compress1_ = Rsh_Fir_load(Rsh_const(CCP, 18), RHO);
  // rds_compress2 = force? rds_compress1
  Rsh_Fir_reg_rds_compress2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_rds_compress1_);
  // checkMissing(rds_compress2)
  SEXP Rsh_Fir_array_args106[1];
  Rsh_Fir_array_args106[0] = Rsh_Fir_reg_rds_compress2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args106, Rsh_Fir_param_types_empty()));
  // return rds_compress2
  return Rsh_Fir_reg_rds_compress2_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
