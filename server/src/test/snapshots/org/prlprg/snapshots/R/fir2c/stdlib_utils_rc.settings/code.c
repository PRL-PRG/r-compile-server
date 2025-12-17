#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner472388370_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner472388370_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner472388370_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_1(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_2(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_3(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_4(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_5(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_6(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_7(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_8(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_9(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_10(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_11(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_12(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_13(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner472388370_14(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_function_inner4072702069_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner4072702069_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
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
  // r = clos inner472388370
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner472388370_, RHO, CCP);
  // st `rc.settings` = r
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
SEXP Rsh_Fir_user_function_inner472388370_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner472388370 dynamic dispatch ([ops, ns, args, dots, func, ipck, S3, data, help, argdb, fuzzy, quotes, files, backtick])

  return Rsh_Fir_user_version_inner472388370_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner472388370_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner472388370 version 0 (*, *, *, *, *, *, *, *, *, *, *, *, *, * -+> V)

  if (NPARAMS != 14) Rsh_error("FIŘ arity mismatch for inner472388370/0: expected 14, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_ops;  // ops
  SEXP Rsh_Fir_reg_ns;  // ns
  SEXP Rsh_Fir_reg_args;  // args
  SEXP Rsh_Fir_reg_dots;  // dots
  SEXP Rsh_Fir_reg_func;  // func
  SEXP Rsh_Fir_reg_ipck;  // ipck
  SEXP Rsh_Fir_reg_S3_;  // S3
  SEXP Rsh_Fir_reg_data;  // data
  SEXP Rsh_Fir_reg_help;  // help
  SEXP Rsh_Fir_reg_argdb;  // argdb
  SEXP Rsh_Fir_reg_fuzzy;  // fuzzy
  SEXP Rsh_Fir_reg_quotes;  // quotes
  SEXP Rsh_Fir_reg_files;  // files
  SEXP Rsh_Fir_reg_backtick;  // backtick
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_match_call;  // match_call
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_unlist;  // unlist
  SEXP Rsh_Fir_reg__CompletionEnv;  // _CompletionEnv
  SEXP Rsh_Fir_reg__CompletionEnv1_;  // _CompletionEnv1
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg__CompletionEnv3_;  // _CompletionEnv3
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_r7_;  // r7
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_missing;  // missing
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_checkAndChange;  // checkAndChange
  SEXP Rsh_Fir_reg_ops1_;  // ops1
  SEXP Rsh_Fir_reg_ops2_;  // ops2
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_sym2_;  // sym2
  SEXP Rsh_Fir_reg_base2_;  // base2
  SEXP Rsh_Fir_reg_guard2_;  // guard2
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_missing1_;  // missing1
  SEXP Rsh_Fir_reg_r20_;  // r20
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_checkAndChange1_;  // checkAndChange1
  SEXP Rsh_Fir_reg_ns1_;  // ns1
  SEXP Rsh_Fir_reg_ns2_;  // ns2
  SEXP Rsh_Fir_reg_p2_;  // p2
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sym3_;  // sym3
  SEXP Rsh_Fir_reg_base3_;  // base3
  SEXP Rsh_Fir_reg_guard3_;  // guard3
  SEXP Rsh_Fir_reg_r25_;  // r25
  SEXP Rsh_Fir_reg_r26_;  // r26
  SEXP Rsh_Fir_reg_missing2_;  // missing2
  SEXP Rsh_Fir_reg_r27_;  // r27
  SEXP Rsh_Fir_reg_r28_;  // r28
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_checkAndChange2_;  // checkAndChange2
  SEXP Rsh_Fir_reg_args1_;  // args1
  SEXP Rsh_Fir_reg_args2_;  // args2
  SEXP Rsh_Fir_reg_p3_;  // p3
  SEXP Rsh_Fir_reg_r30_;  // r30
  SEXP Rsh_Fir_reg_sym4_;  // sym4
  SEXP Rsh_Fir_reg_base4_;  // base4
  SEXP Rsh_Fir_reg_guard4_;  // guard4
  SEXP Rsh_Fir_reg_r32_;  // r32
  SEXP Rsh_Fir_reg_r33_;  // r33
  SEXP Rsh_Fir_reg_missing3_;  // missing3
  SEXP Rsh_Fir_reg_r34_;  // r34
  SEXP Rsh_Fir_reg_r35_;  // r35
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_checkAndChange3_;  // checkAndChange3
  SEXP Rsh_Fir_reg_dots1_;  // dots1
  SEXP Rsh_Fir_reg_dots2_;  // dots2
  SEXP Rsh_Fir_reg_p4_;  // p4
  SEXP Rsh_Fir_reg_r37_;  // r37
  SEXP Rsh_Fir_reg_sym5_;  // sym5
  SEXP Rsh_Fir_reg_base5_;  // base5
  SEXP Rsh_Fir_reg_guard5_;  // guard5
  SEXP Rsh_Fir_reg_r39_;  // r39
  SEXP Rsh_Fir_reg_r40_;  // r40
  SEXP Rsh_Fir_reg_missing4_;  // missing4
  SEXP Rsh_Fir_reg_r41_;  // r41
  SEXP Rsh_Fir_reg_r42_;  // r42
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_checkAndChange4_;  // checkAndChange4
  SEXP Rsh_Fir_reg_func1_;  // func1
  SEXP Rsh_Fir_reg_func2_;  // func2
  SEXP Rsh_Fir_reg_p5_;  // p5
  SEXP Rsh_Fir_reg_r44_;  // r44
  SEXP Rsh_Fir_reg_sym6_;  // sym6
  SEXP Rsh_Fir_reg_base6_;  // base6
  SEXP Rsh_Fir_reg_guard6_;  // guard6
  SEXP Rsh_Fir_reg_r46_;  // r46
  SEXP Rsh_Fir_reg_r47_;  // r47
  SEXP Rsh_Fir_reg_missing5_;  // missing5
  SEXP Rsh_Fir_reg_r48_;  // r48
  SEXP Rsh_Fir_reg_r49_;  // r49
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_checkAndChange5_;  // checkAndChange5
  SEXP Rsh_Fir_reg_ipck1_;  // ipck1
  SEXP Rsh_Fir_reg_ipck2_;  // ipck2
  SEXP Rsh_Fir_reg_p6_;  // p6
  SEXP Rsh_Fir_reg_r51_;  // r51
  SEXP Rsh_Fir_reg_sym7_;  // sym7
  SEXP Rsh_Fir_reg_base7_;  // base7
  SEXP Rsh_Fir_reg_guard7_;  // guard7
  SEXP Rsh_Fir_reg_r53_;  // r53
  SEXP Rsh_Fir_reg_r54_;  // r54
  SEXP Rsh_Fir_reg_missing6_;  // missing6
  SEXP Rsh_Fir_reg_r55_;  // r55
  SEXP Rsh_Fir_reg_r56_;  // r56
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_checkAndChange6_;  // checkAndChange6
  SEXP Rsh_Fir_reg_S4_;  // S4
  SEXP Rsh_Fir_reg_S5_;  // S5
  SEXP Rsh_Fir_reg_p7_;  // p7
  SEXP Rsh_Fir_reg_r58_;  // r58
  SEXP Rsh_Fir_reg_sym8_;  // sym8
  SEXP Rsh_Fir_reg_base8_;  // base8
  SEXP Rsh_Fir_reg_guard8_;  // guard8
  SEXP Rsh_Fir_reg_r60_;  // r60
  SEXP Rsh_Fir_reg_r61_;  // r61
  SEXP Rsh_Fir_reg_missing7_;  // missing7
  SEXP Rsh_Fir_reg_r62_;  // r62
  SEXP Rsh_Fir_reg_r63_;  // r63
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_checkAndChange7_;  // checkAndChange7
  SEXP Rsh_Fir_reg_data1_;  // data1
  SEXP Rsh_Fir_reg_data2_;  // data2
  SEXP Rsh_Fir_reg_p8_;  // p8
  SEXP Rsh_Fir_reg_r65_;  // r65
  SEXP Rsh_Fir_reg_sym9_;  // sym9
  SEXP Rsh_Fir_reg_base9_;  // base9
  SEXP Rsh_Fir_reg_guard9_;  // guard9
  SEXP Rsh_Fir_reg_r67_;  // r67
  SEXP Rsh_Fir_reg_r68_;  // r68
  SEXP Rsh_Fir_reg_missing8_;  // missing8
  SEXP Rsh_Fir_reg_r69_;  // r69
  SEXP Rsh_Fir_reg_r70_;  // r70
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_checkAndChange8_;  // checkAndChange8
  SEXP Rsh_Fir_reg_help1_;  // help1
  SEXP Rsh_Fir_reg_help2_;  // help2
  SEXP Rsh_Fir_reg_p9_;  // p9
  SEXP Rsh_Fir_reg_r72_;  // r72
  SEXP Rsh_Fir_reg_sym10_;  // sym10
  SEXP Rsh_Fir_reg_base10_;  // base10
  SEXP Rsh_Fir_reg_guard10_;  // guard10
  SEXP Rsh_Fir_reg_r74_;  // r74
  SEXP Rsh_Fir_reg_r75_;  // r75
  SEXP Rsh_Fir_reg_missing9_;  // missing9
  SEXP Rsh_Fir_reg_r76_;  // r76
  SEXP Rsh_Fir_reg_r77_;  // r77
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_checkAndChange9_;  // checkAndChange9
  SEXP Rsh_Fir_reg_argdb1_;  // argdb1
  SEXP Rsh_Fir_reg_argdb2_;  // argdb2
  SEXP Rsh_Fir_reg_p10_;  // p10
  SEXP Rsh_Fir_reg_r79_;  // r79
  SEXP Rsh_Fir_reg_sym11_;  // sym11
  SEXP Rsh_Fir_reg_base11_;  // base11
  SEXP Rsh_Fir_reg_guard11_;  // guard11
  SEXP Rsh_Fir_reg_r81_;  // r81
  SEXP Rsh_Fir_reg_r82_;  // r82
  SEXP Rsh_Fir_reg_missing10_;  // missing10
  SEXP Rsh_Fir_reg_r83_;  // r83
  SEXP Rsh_Fir_reg_r84_;  // r84
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_checkAndChange10_;  // checkAndChange10
  SEXP Rsh_Fir_reg_files1_;  // files1
  SEXP Rsh_Fir_reg_files2_;  // files2
  SEXP Rsh_Fir_reg_p11_;  // p11
  SEXP Rsh_Fir_reg_r86_;  // r86
  SEXP Rsh_Fir_reg_sym12_;  // sym12
  SEXP Rsh_Fir_reg_base12_;  // base12
  SEXP Rsh_Fir_reg_guard12_;  // guard12
  SEXP Rsh_Fir_reg_r88_;  // r88
  SEXP Rsh_Fir_reg_r89_;  // r89
  SEXP Rsh_Fir_reg_missing11_;  // missing11
  SEXP Rsh_Fir_reg_r90_;  // r90
  SEXP Rsh_Fir_reg_r91_;  // r91
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_checkAndChange11_;  // checkAndChange11
  SEXP Rsh_Fir_reg_quotes1_;  // quotes1
  SEXP Rsh_Fir_reg_quotes2_;  // quotes2
  SEXP Rsh_Fir_reg_p12_;  // p12
  SEXP Rsh_Fir_reg_r93_;  // r93
  SEXP Rsh_Fir_reg_sym13_;  // sym13
  SEXP Rsh_Fir_reg_base13_;  // base13
  SEXP Rsh_Fir_reg_guard13_;  // guard13
  SEXP Rsh_Fir_reg_r95_;  // r95
  SEXP Rsh_Fir_reg_r96_;  // r96
  SEXP Rsh_Fir_reg_missing12_;  // missing12
  SEXP Rsh_Fir_reg_r97_;  // r97
  SEXP Rsh_Fir_reg_r98_;  // r98
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_checkAndChange12_;  // checkAndChange12
  SEXP Rsh_Fir_reg_fuzzy1_;  // fuzzy1
  SEXP Rsh_Fir_reg_fuzzy2_;  // fuzzy2
  SEXP Rsh_Fir_reg_p13_;  // p13
  SEXP Rsh_Fir_reg_r100_;  // r100
  SEXP Rsh_Fir_reg_sym14_;  // sym14
  SEXP Rsh_Fir_reg_base14_;  // base14
  SEXP Rsh_Fir_reg_guard14_;  // guard14
  SEXP Rsh_Fir_reg_r102_;  // r102
  SEXP Rsh_Fir_reg_r103_;  // r103
  SEXP Rsh_Fir_reg_missing13_;  // missing13
  SEXP Rsh_Fir_reg_r104_;  // r104
  SEXP Rsh_Fir_reg_r105_;  // r105
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_checkAndChange13_;  // checkAndChange13
  SEXP Rsh_Fir_reg_backtick1_;  // backtick1
  SEXP Rsh_Fir_reg_backtick2_;  // backtick2
  SEXP Rsh_Fir_reg_p14_;  // p14
  SEXP Rsh_Fir_reg_r107_;  // r107
  SEXP Rsh_Fir_reg_sym15_;  // sym15
  SEXP Rsh_Fir_reg_base15_;  // base15
  SEXP Rsh_Fir_reg_guard15_;  // guard15
  SEXP Rsh_Fir_reg_r109_;  // r109
  SEXP Rsh_Fir_reg_r110_;  // r110
  SEXP Rsh_Fir_reg_invisible;  // invisible
  SEXP Rsh_Fir_reg_r111_;  // r111

  // Bind parameters
  Rsh_Fir_reg_ops = PARAMS[0];
  Rsh_Fir_reg_ns = PARAMS[1];
  Rsh_Fir_reg_args = PARAMS[2];
  Rsh_Fir_reg_dots = PARAMS[3];
  Rsh_Fir_reg_func = PARAMS[4];
  Rsh_Fir_reg_ipck = PARAMS[5];
  Rsh_Fir_reg_S3_ = PARAMS[6];
  Rsh_Fir_reg_data = PARAMS[7];
  Rsh_Fir_reg_help = PARAMS[8];
  Rsh_Fir_reg_argdb = PARAMS[9];
  Rsh_Fir_reg_fuzzy = PARAMS[10];
  Rsh_Fir_reg_quotes = PARAMS[11];
  Rsh_Fir_reg_files = PARAMS[12];
  Rsh_Fir_reg_backtick = PARAMS[13];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st ops = ops
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_ops, RHO);
  (void)(Rsh_Fir_reg_ops);
  // st ns = ns
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ns, RHO);
  (void)(Rsh_Fir_reg_ns);
  // st args = args
  Rsh_Fir_store(Rsh_const(CCP, 3), Rsh_Fir_reg_args, RHO);
  (void)(Rsh_Fir_reg_args);
  // st dots = dots
  Rsh_Fir_store(Rsh_const(CCP, 4), Rsh_Fir_reg_dots, RHO);
  (void)(Rsh_Fir_reg_dots);
  // st func = func
  Rsh_Fir_store(Rsh_const(CCP, 5), Rsh_Fir_reg_func, RHO);
  (void)(Rsh_Fir_reg_func);
  // st ipck = ipck
  Rsh_Fir_store(Rsh_const(CCP, 6), Rsh_Fir_reg_ipck, RHO);
  (void)(Rsh_Fir_reg_ipck);
  // st S3 = S3
  Rsh_Fir_store(Rsh_const(CCP, 7), Rsh_Fir_reg_S3_, RHO);
  (void)(Rsh_Fir_reg_S3_);
  // st data = data
  Rsh_Fir_store(Rsh_const(CCP, 8), Rsh_Fir_reg_data, RHO);
  (void)(Rsh_Fir_reg_data);
  // st help = help
  Rsh_Fir_store(Rsh_const(CCP, 9), Rsh_Fir_reg_help, RHO);
  (void)(Rsh_Fir_reg_help);
  // st argdb = argdb
  Rsh_Fir_store(Rsh_const(CCP, 10), Rsh_Fir_reg_argdb, RHO);
  (void)(Rsh_Fir_reg_argdb);
  // st fuzzy = fuzzy
  Rsh_Fir_store(Rsh_const(CCP, 11), Rsh_Fir_reg_fuzzy, RHO);
  (void)(Rsh_Fir_reg_fuzzy);
  // st quotes = quotes
  Rsh_Fir_store(Rsh_const(CCP, 12), Rsh_Fir_reg_quotes, RHO);
  (void)(Rsh_Fir_reg_quotes);
  // st files = files
  Rsh_Fir_store(Rsh_const(CCP, 13), Rsh_Fir_reg_files, RHO);
  (void)(Rsh_Fir_reg_files);
  // st backtick = backtick
  Rsh_Fir_store(Rsh_const(CCP, 14), Rsh_Fir_reg_backtick, RHO);
  (void)(Rsh_Fir_reg_backtick);
  // sym = ldf length
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L46() else L47()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L46()
    goto L46_;
  } else {
  // L47()
    goto L47_;
  }

L0_:;
  // r4 = `==`(r1, 1.0)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_r1_;
  Rsh_Fir_array_args1[1] = Rsh_const(CCP, 16);
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r4)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_r4_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty());
  // if c then L51() else L1()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L51()
    goto L51_;
  } else {
  // L1()
    goto L1_;
  }

L1_:;
  // r10 = clos inner4072702069
  Rsh_Fir_reg_r10_ = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner4072702069_, RHO, CCP);
  // st checkAndChange = r10
  Rsh_Fir_store(Rsh_const(CCP, 17), Rsh_Fir_reg_r10_, RHO);
  (void)(Rsh_Fir_reg_r10_);
  // sym1 = ldf missing
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base1 = ldf missing in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard1 then L56() else L57()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L56()
    goto L56_;
  } else {
  // L57()
    goto L57_;
  }

L3_:;
  // r14 = `!`(r12)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_r12_;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // c2 = `as.logical`(r14)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_r14_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c2 then L58() else L4()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L58()
    goto L58_;
  } else {
  // L4()
    goto L4_;
  }

L4_:;
  // goto L5()
  // L5()
  goto L5_;

L5_:;
  // sym2 = ldf missing
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base2 = ldf missing in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard2 then L62() else L63()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L62()
    goto L62_;
  } else {
  // L63()
    goto L63_;
  }

L6_:;
  // r21 = `!`(r19)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_r19_;
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // c3 = `as.logical`(r21)
  SEXP Rsh_Fir_array_args8[1];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // if c3 then L64() else L7()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L64()
    goto L64_;
  } else {
  // L7()
    goto L7_;
  }

L7_:;
  // goto L8()
  // L8()
  goto L8_;

L8_:;
  // sym3 = ldf missing
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base3 = ldf missing in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard3 then L68() else L69()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L68()
    goto L68_;
  } else {
  // L69()
    goto L69_;
  }

L9_:;
  // r28 = `!`(r26)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_r26_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty());
  // c4 = `as.logical`(r28)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_r28_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c4 then L70() else L10()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L70()
    goto L70_;
  } else {
  // L10()
    goto L10_;
  }

L10_:;
  // goto L11()
  // L11()
  goto L11_;

L11_:;
  // sym4 = ldf missing
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base4 = ldf missing in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard4 then L74() else L75()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L74()
    goto L74_;
  } else {
  // L75()
    goto L75_;
  }

L12_:;
  // r35 = `!`(r33)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_r33_;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // c5 = `as.logical`(r35)
  SEXP Rsh_Fir_array_args14[1];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_r35_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // if c5 then L76() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L76()
    goto L76_;
  } else {
  // L13()
    goto L13_;
  }

L13_:;
  // goto L14()
  // L14()
  goto L14_;

L14_:;
  // sym5 = ldf missing
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base5 = ldf missing in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard5 then L80() else L81()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L80()
    goto L80_;
  } else {
  // L81()
    goto L81_;
  }

L15_:;
  // r42 = `!`(r40)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_r40_;
  Rsh_Fir_reg_r42_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // c6 = `as.logical`(r42)
  SEXP Rsh_Fir_array_args17[1];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_r42_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args17, Rsh_Fir_param_types_empty());
  // if c6 then L82() else L16()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L82()
    goto L82_;
  } else {
  // L16()
    goto L16_;
  }

L16_:;
  // goto L17()
  // L17()
  goto L17_;

L17_:;
  // sym6 = ldf missing
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base6 = ldf missing in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard6 then L86() else L87()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L86()
    goto L86_;
  } else {
  // L87()
    goto L87_;
  }

L18_:;
  // r49 = `!`(r47)
  SEXP Rsh_Fir_array_args19[1];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_r47_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // c7 = `as.logical`(r49)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_r49_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // if c7 then L88() else L19()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L88()
    goto L88_;
  } else {
  // L19()
    goto L19_;
  }

L19_:;
  // goto L20()
  // L20()
  goto L20_;

L20_:;
  // sym7 = ldf missing
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base7 = ldf missing in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard7 then L92() else L93()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L92()
    goto L92_;
  } else {
  // L93()
    goto L93_;
  }

L21_:;
  // r56 = `!`(r54)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_r54_;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // c8 = `as.logical`(r56)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_r56_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty());
  // if c8 then L94() else L22()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L94()
    goto L94_;
  } else {
  // L22()
    goto L22_;
  }

L22_:;
  // goto L23()
  // L23()
  goto L23_;

L23_:;
  // sym8 = ldf missing
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base8 = ldf missing in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args24[2];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args24);
  // if guard8 then L98() else L99()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L98()
    goto L98_;
  } else {
  // L99()
    goto L99_;
  }

L24_:;
  // r63 = `!`(r61)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_r61_;
  Rsh_Fir_reg_r63_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // c9 = `as.logical`(r63)
  SEXP Rsh_Fir_array_args26[1];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_r63_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args26, Rsh_Fir_param_types_empty());
  // if c9 then L100() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L100()
    goto L100_;
  } else {
  // L25()
    goto L25_;
  }

L25_:;
  // goto L26()
  // L26()
  goto L26_;

L26_:;
  // sym9 = ldf missing
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base9 = ldf missing in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args27);
  // if guard9 then L104() else L105()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L104()
    goto L104_;
  } else {
  // L105()
    goto L105_;
  }

L27_:;
  // r70 = `!`(r68)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_r68_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // c10 = `as.logical`(r70)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_r70_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // if c10 then L106() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L106()
    goto L106_;
  } else {
  // L28()
    goto L28_;
  }

L28_:;
  // goto L29()
  // L29()
  goto L29_;

L29_:;
  // sym10 = ldf missing
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base10 = ldf missing in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args30[2];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args30[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args30);
  // if guard10 then L110() else L111()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L110()
    goto L110_;
  } else {
  // L111()
    goto L111_;
  }

L30_:;
  // r77 = `!`(r75)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_r75_;
  Rsh_Fir_reg_r77_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty());
  // c11 = `as.logical`(r77)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_r77_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if c11 then L112() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L112()
    goto L112_;
  } else {
  // L31()
    goto L31_;
  }

L31_:;
  // goto L32()
  // L32()
  goto L32_;

L32_:;
  // sym11 = ldf missing
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base11 = ldf missing in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args33[2];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args33[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args33);
  // if guard11 then L116() else L117()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L116()
    goto L116_;
  } else {
  // L117()
    goto L117_;
  }

L33_:;
  // r84 = `!`(r82)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_r82_;
  Rsh_Fir_reg_r84_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // c12 = `as.logical`(r84)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_r84_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // if c12 then L118() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L118()
    goto L118_;
  } else {
  // L34()
    goto L34_;
  }

L34_:;
  // goto L35()
  // L35()
  goto L35_;

L35_:;
  // sym12 = ldf missing
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base12 = ldf missing in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args36);
  // if guard12 then L122() else L123()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L122()
    goto L122_;
  } else {
  // L123()
    goto L123_;
  }

L36_:;
  // r91 = `!`(r89)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_r89_;
  Rsh_Fir_reg_r91_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty());
  // c13 = `as.logical`(r91)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_r91_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if c13 then L124() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L124()
    goto L124_;
  } else {
  // L37()
    goto L37_;
  }

L37_:;
  // goto L38()
  // L38()
  goto L38_;

L38_:;
  // sym13 = ldf missing
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base13 = ldf missing in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args39[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args39);
  // if guard13 then L128() else L129()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L128()
    goto L128_;
  } else {
  // L129()
    goto L129_;
  }

L39_:;
  // r98 = `!`(r96)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_r96_;
  Rsh_Fir_reg_r98_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // c14 = `as.logical`(r98)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_r98_;
  Rsh_Fir_reg_c14_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args41, Rsh_Fir_param_types_empty());
  // if c14 then L130() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c14_)) {
  // L130()
    goto L130_;
  } else {
  // L40()
    goto L40_;
  }

L40_:;
  // goto L41()
  // L41()
  goto L41_;

L41_:;
  // sym14 = ldf missing
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base14 = ldf missing in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args42[2];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args42[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args42);
  // if guard14 then L134() else L135()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L134()
    goto L134_;
  } else {
  // L135()
    goto L135_;
  }

L42_:;
  // r105 = `!`(r103)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_r103_;
  Rsh_Fir_reg_r105_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // c15 = `as.logical`(r105)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_r105_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args44, Rsh_Fir_param_types_empty());
  // if c15 then L136() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L136()
    goto L136_;
  } else {
  // L43()
    goto L43_;
  }

L43_:;
  // goto L44()
  // L44()
  goto L44_;

L44_:;
  // sym15 = ldf invisible
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base15 = ldf invisible in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args45);
  // if guard15 then L140() else L141()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L140()
    goto L140_;
  } else {
  // L141()
    goto L141_;
  }

L45_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r110
  return Rsh_Fir_reg_r110_;

L46_:;
  // match_call = ldf `match.call`
  Rsh_Fir_reg_match_call = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L48() else D0()
  // L48()
  goto L48_;

L47_:;
  // r = dyn base(<lang match.call()>)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_const(CCP, 21);
  SEXP Rsh_Fir_array_arg_names[1];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_reg_r1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 1, Rsh_Fir_array_args46, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r1;
  goto L0_;

D0_:;
  // deopt 3 []
  Rsh_Fir_deopt(3, 0, NULL, CCP, RHO);
  return R_NilValue;

L48_:;
  // r2 = dyn match_call()
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_match_call, 0, NULL, NULL, CCP, RHO);
  // check L49() else D1()
  // L49()
  goto L49_;

D1_:;
  // deopt 4 [r2]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r2_;
  Rsh_Fir_deopt(4, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L49_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r3 = dyn length(r2)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_array_arg_names1[1];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args47, Rsh_Fir_array_arg_names1, CCP, RHO);
  // check L50() else D2()
  // L50()
  goto L50_;

D2_:;
  // deopt 6 [r3]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L50_:;
  // goto L0(r3)
  // L0(r3)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r3_;
  goto L0_;

L51_:;
  // unlist = ldf unlist
  Rsh_Fir_reg_unlist = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // check L52() else D3()
  // L52()
  goto L52_;

D3_:;
  // deopt 10 []
  Rsh_Fir_deopt(10, 0, NULL, CCP, RHO);
  return R_NilValue;

L52_:;
  // p = prom<V +>{
  //   _CompletionEnv = ld `.CompletionEnv`;
  //   _CompletionEnv1 = force? _CompletionEnv;
  //   checkMissing(_CompletionEnv1);
  //   c1 = `is.object`(_CompletionEnv1);
  //   if c1 then L1() else L2(_CompletionEnv1);
  // L0(dx1):
  //   return dx1;
  // L1():
  //   dr = tryDispatchBuiltin.1("[[", _CompletionEnv1);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L3() else L2(dr);
  // L2(_CompletionEnv3):
  //   __ = ldf `[[` in base;
  //   r5 = dyn __(_CompletionEnv3, "settings");
  //   goto L0(r5);
  // L3():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L0(dx);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_, CCP, RHO);
  // r7 = dyn unlist(p)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_Fir_reg_p;
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_unlist, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names3, CCP, RHO);
  // check L53() else D4()
  // L53()
  goto L53_;

D4_:;
  // deopt 12 [r7]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_r7_;
  Rsh_Fir_deopt(12, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L53_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r7
  return Rsh_Fir_reg_r7_;

L56_:;
  // missing = ldf missing in base
  Rsh_Fir_reg_missing = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r13 = dyn missing(<sym ops>)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing, 1, Rsh_Fir_array_args55, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r13)
  // L3(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L3_;

L57_:;
  // r11 = dyn base1(<sym ops>)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args56, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L3(r11)
  // L3(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L3_;

L58_:;
  // checkAndChange = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L59() else D5()
  // L59()
  goto L59_;

D5_:;
  // deopt 24 []
  Rsh_Fir_deopt(24, 0, NULL, CCP, RHO);
  return R_NilValue;

L59_:;
  // p1 = prom<V +>{
  //   ops1 = ld ops;
  //   ops2 = force? ops1;
  //   checkMissing(ops2);
  //   return ops2;
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_1, CCP, RHO);
  // r16 = dyn checkAndChange("ops", p1)
  SEXP Rsh_Fir_array_args58[2];
  Rsh_Fir_array_args58[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args58[1] = Rsh_Fir_reg_p1_;
  SEXP Rsh_Fir_array_arg_names6[2];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_array_arg_names6[1] = R_MissingArg;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange, 2, Rsh_Fir_array_args58, Rsh_Fir_array_arg_names6, CCP, RHO);
  // check L60() else D6()
  // L60()
  goto L60_;

D6_:;
  // deopt 27 [r16]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_r16_;
  Rsh_Fir_deopt(27, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L60_:;
  // goto L5()
  // L5()
  goto L5_;

L62_:;
  // missing1 = ldf missing in base
  Rsh_Fir_reg_missing1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r20 = dyn missing1(<sym ns>)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing1_, 1, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r20)
  // L6(r20)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r20_;
  goto L6_;

L63_:;
  // r18 = dyn base2(<sym ns>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 2);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L6(r18)
  // L6(r18)
  Rsh_Fir_reg_r19_ = Rsh_Fir_reg_r18_;
  goto L6_;

L64_:;
  // checkAndChange1 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L65() else D7()
  // L65()
  goto L65_;

D7_:;
  // deopt 35 []
  Rsh_Fir_deopt(35, 0, NULL, CCP, RHO);
  return R_NilValue;

L65_:;
  // p2 = prom<V +>{
  //   ns1 = ld ns;
  //   ns2 = force? ns1;
  //   checkMissing(ns2);
  //   return ns2;
  // }
  Rsh_Fir_reg_p2_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_2, CCP, RHO);
  // r23 = dyn checkAndChange1("ns", p2)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args62[1] = Rsh_Fir_reg_p2_;
  SEXP Rsh_Fir_array_arg_names9[2];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange1_, 2, Rsh_Fir_array_args62, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L66() else D8()
  // L66()
  goto L66_;

D8_:;
  // deopt 38 [r23]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L66_:;
  // goto L8()
  // L8()
  goto L8_;

L68_:;
  // missing2 = ldf missing in base
  Rsh_Fir_reg_missing2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r27 = dyn missing2(<sym args>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r27_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing2_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r27)
  // L9(r27)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r27_;
  goto L9_;

L69_:;
  // r25 = dyn base3(<sym args>)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_const(CCP, 3);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args64, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L9(r25)
  // L9(r25)
  Rsh_Fir_reg_r26_ = Rsh_Fir_reg_r25_;
  goto L9_;

L70_:;
  // checkAndChange2 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L71() else D9()
  // L71()
  goto L71_;

D9_:;
  // deopt 46 []
  Rsh_Fir_deopt(46, 0, NULL, CCP, RHO);
  return R_NilValue;

L71_:;
  // p3 = prom<V +>{
  //   args1 = ld args;
  //   args2 = force? args1;
  //   checkMissing(args2);
  //   return args2;
  // }
  Rsh_Fir_reg_p3_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_3, CCP, RHO);
  // r30 = dyn checkAndChange2("args", p3)
  SEXP Rsh_Fir_array_args66[2];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args66[1] = Rsh_Fir_reg_p3_;
  SEXP Rsh_Fir_array_arg_names12[2];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_array_arg_names12[1] = R_MissingArg;
  Rsh_Fir_reg_r30_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange2_, 2, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names12, CCP, RHO);
  // check L72() else D10()
  // L72()
  goto L72_;

D10_:;
  // deopt 49 [r30]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_r30_;
  Rsh_Fir_deopt(49, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L72_:;
  // goto L11()
  // L11()
  goto L11_;

L74_:;
  // missing3 = ldf missing in base
  Rsh_Fir_reg_missing3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r34 = dyn missing3(<sym dots>)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing3_, 1, Rsh_Fir_array_args67, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L12(r34)
  // L12(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L12_;

L75_:;
  // r32 = dyn base4(<sym dots>)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_const(CCP, 4);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args68, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L12(r32)
  // L12(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L12_;

L76_:;
  // checkAndChange3 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L77() else D11()
  // L77()
  goto L77_;

D11_:;
  // deopt 57 []
  Rsh_Fir_deopt(57, 0, NULL, CCP, RHO);
  return R_NilValue;

L77_:;
  // p4 = prom<V +>{
  //   dots1 = ld dots;
  //   dots2 = force? dots1;
  //   checkMissing(dots2);
  //   return dots2;
  // }
  Rsh_Fir_reg_p4_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_4, CCP, RHO);
  // r37 = dyn checkAndChange3("dots", p4)
  SEXP Rsh_Fir_array_args70[2];
  Rsh_Fir_array_args70[0] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args70[1] = Rsh_Fir_reg_p4_;
  SEXP Rsh_Fir_array_arg_names15[2];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_array_arg_names15[1] = R_MissingArg;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange3_, 2, Rsh_Fir_array_args70, Rsh_Fir_array_arg_names15, CCP, RHO);
  // check L78() else D12()
  // L78()
  goto L78_;

D12_:;
  // deopt 60 [r37]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_r37_;
  Rsh_Fir_deopt(60, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L78_:;
  // goto L14()
  // L14()
  goto L14_;

L80_:;
  // missing4 = ldf missing in base
  Rsh_Fir_reg_missing4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r41 = dyn missing4(<sym func>)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing4_, 1, Rsh_Fir_array_args71, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r41)
  // L15(r41)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r41_;
  goto L15_;

L81_:;
  // r39 = dyn base5(<sym func>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 5);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r39_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L15(r39)
  // L15(r39)
  Rsh_Fir_reg_r40_ = Rsh_Fir_reg_r39_;
  goto L15_;

L82_:;
  // checkAndChange4 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L83() else D13()
  // L83()
  goto L83_;

D13_:;
  // deopt 68 []
  Rsh_Fir_deopt(68, 0, NULL, CCP, RHO);
  return R_NilValue;

L83_:;
  // p5 = prom<V +>{
  //   func1 = ld func;
  //   func2 = force? func1;
  //   checkMissing(func2);
  //   return func2;
  // }
  Rsh_Fir_reg_p5_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_5, CCP, RHO);
  // r44 = dyn checkAndChange4("func", p5)
  SEXP Rsh_Fir_array_args74[2];
  Rsh_Fir_array_args74[0] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args74[1] = Rsh_Fir_reg_p5_;
  SEXP Rsh_Fir_array_arg_names18[2];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_array_arg_names18[1] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange4_, 2, Rsh_Fir_array_args74, Rsh_Fir_array_arg_names18, CCP, RHO);
  // check L84() else D14()
  // L84()
  goto L84_;

D14_:;
  // deopt 71 [r44]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_r44_;
  Rsh_Fir_deopt(71, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L84_:;
  // goto L17()
  // L17()
  goto L17_;

L86_:;
  // missing5 = ldf missing in base
  Rsh_Fir_reg_missing5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r48 = dyn missing5(<sym ipck>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r48_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing5_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(r48)
  // L18(r48)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r48_;
  goto L18_;

L87_:;
  // r46 = dyn base6(<sym ipck>)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_const(CCP, 6);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L18(r46)
  // L18(r46)
  Rsh_Fir_reg_r47_ = Rsh_Fir_reg_r46_;
  goto L18_;

L88_:;
  // checkAndChange5 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L89() else D15()
  // L89()
  goto L89_;

D15_:;
  // deopt 79 []
  Rsh_Fir_deopt(79, 0, NULL, CCP, RHO);
  return R_NilValue;

L89_:;
  // p6 = prom<V +>{
  //   ipck1 = ld ipck;
  //   ipck2 = force? ipck1;
  //   checkMissing(ipck2);
  //   return ipck2;
  // }
  Rsh_Fir_reg_p6_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_6, CCP, RHO);
  // r51 = dyn checkAndChange5("ipck", p6)
  SEXP Rsh_Fir_array_args78[2];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args78[1] = Rsh_Fir_reg_p6_;
  SEXP Rsh_Fir_array_arg_names21[2];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_array_arg_names21[1] = R_MissingArg;
  Rsh_Fir_reg_r51_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange5_, 2, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names21, CCP, RHO);
  // check L90() else D16()
  // L90()
  goto L90_;

D16_:;
  // deopt 82 [r51]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_r51_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L90_:;
  // goto L20()
  // L20()
  goto L20_;

L92_:;
  // missing6 = ldf missing in base
  Rsh_Fir_reg_missing6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r55 = dyn missing6(<sym S3>)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing6_, 1, Rsh_Fir_array_args79, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L21(r55)
  // L21(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L21_;

L93_:;
  // r53 = dyn base7(<sym S3>)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_const(CCP, 7);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args80, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L21(r53)
  // L21(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L21_;

L94_:;
  // checkAndChange6 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L95() else D17()
  // L95()
  goto L95_;

D17_:;
  // deopt 90 []
  Rsh_Fir_deopt(90, 0, NULL, CCP, RHO);
  return R_NilValue;

L95_:;
  // p7 = prom<V +>{
  //   S4 = ld S3;
  //   S5 = force? S4;
  //   checkMissing(S5);
  //   return S5;
  // }
  Rsh_Fir_reg_p7_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_7, CCP, RHO);
  // r58 = dyn checkAndChange6("S3", p7)
  SEXP Rsh_Fir_array_args82[2];
  Rsh_Fir_array_args82[0] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args82[1] = Rsh_Fir_reg_p7_;
  SEXP Rsh_Fir_array_arg_names24[2];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_array_arg_names24[1] = R_MissingArg;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange6_, 2, Rsh_Fir_array_args82, Rsh_Fir_array_arg_names24, CCP, RHO);
  // check L96() else D18()
  // L96()
  goto L96_;

D18_:;
  // deopt 93 [r58]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_r58_;
  Rsh_Fir_deopt(93, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L96_:;
  // goto L23()
  // L23()
  goto L23_;

L98_:;
  // missing7 = ldf missing in base
  Rsh_Fir_reg_missing7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r62 = dyn missing7(<sym data>)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing7_, 1, Rsh_Fir_array_args83, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(r62)
  // L24(r62)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r62_;
  goto L24_;

L99_:;
  // r60 = dyn base8(<sym data>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 8);
  SEXP Rsh_Fir_array_arg_names26[1];
  Rsh_Fir_array_arg_names26[0] = R_MissingArg;
  Rsh_Fir_reg_r60_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names26, CCP, RHO);
  // goto L24(r60)
  // L24(r60)
  Rsh_Fir_reg_r61_ = Rsh_Fir_reg_r60_;
  goto L24_;

L100_:;
  // checkAndChange7 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L101() else D19()
  // L101()
  goto L101_;

D19_:;
  // deopt 101 []
  Rsh_Fir_deopt(101, 0, NULL, CCP, RHO);
  return R_NilValue;

L101_:;
  // p8 = prom<V +>{
  //   data1 = ld data;
  //   data2 = force? data1;
  //   checkMissing(data2);
  //   return data2;
  // }
  Rsh_Fir_reg_p8_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_8, CCP, RHO);
  // r65 = dyn checkAndChange7("data", p8)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args86[1] = Rsh_Fir_reg_p8_;
  SEXP Rsh_Fir_array_arg_names27[2];
  Rsh_Fir_array_arg_names27[0] = R_MissingArg;
  Rsh_Fir_array_arg_names27[1] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange7_, 2, Rsh_Fir_array_args86, Rsh_Fir_array_arg_names27, CCP, RHO);
  // check L102() else D20()
  // L102()
  goto L102_;

D20_:;
  // deopt 104 [r65]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_r65_;
  Rsh_Fir_deopt(104, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L102_:;
  // goto L26()
  // L26()
  goto L26_;

L104_:;
  // missing8 = ldf missing in base
  Rsh_Fir_reg_missing8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r69 = dyn missing8(<sym help>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names28[1];
  Rsh_Fir_array_arg_names28[0] = R_MissingArg;
  Rsh_Fir_reg_r69_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing8_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names28, CCP, RHO);
  // goto L27(r69)
  // L27(r69)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r69_;
  goto L27_;

L105_:;
  // r67 = dyn base9(<sym help>)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_const(CCP, 9);
  SEXP Rsh_Fir_array_arg_names29[1];
  Rsh_Fir_array_arg_names29[0] = R_MissingArg;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names29, CCP, RHO);
  // goto L27(r67)
  // L27(r67)
  Rsh_Fir_reg_r68_ = Rsh_Fir_reg_r67_;
  goto L27_;

L106_:;
  // checkAndChange8 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L107() else D21()
  // L107()
  goto L107_;

D21_:;
  // deopt 112 []
  Rsh_Fir_deopt(112, 0, NULL, CCP, RHO);
  return R_NilValue;

L107_:;
  // p9 = prom<V +>{
  //   help1 = ld help;
  //   help2 = force? help1;
  //   checkMissing(help2);
  //   return help2;
  // }
  Rsh_Fir_reg_p9_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_9, CCP, RHO);
  // r72 = dyn checkAndChange8("help", p9)
  SEXP Rsh_Fir_array_args90[2];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args90[1] = Rsh_Fir_reg_p9_;
  SEXP Rsh_Fir_array_arg_names30[2];
  Rsh_Fir_array_arg_names30[0] = R_MissingArg;
  Rsh_Fir_array_arg_names30[1] = R_MissingArg;
  Rsh_Fir_reg_r72_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange8_, 2, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names30, CCP, RHO);
  // check L108() else D22()
  // L108()
  goto L108_;

D22_:;
  // deopt 115 [r72]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_r72_;
  Rsh_Fir_deopt(115, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L108_:;
  // goto L29()
  // L29()
  goto L29_;

L110_:;
  // missing9 = ldf missing in base
  Rsh_Fir_reg_missing9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r76 = dyn missing9(<sym argdb>)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names31[1];
  Rsh_Fir_array_arg_names31[0] = R_MissingArg;
  Rsh_Fir_reg_r76_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing9_, 1, Rsh_Fir_array_args91, Rsh_Fir_array_arg_names31, CCP, RHO);
  // goto L30(r76)
  // L30(r76)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r76_;
  goto L30_;

L111_:;
  // r74 = dyn base10(<sym argdb>)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_const(CCP, 10);
  SEXP Rsh_Fir_array_arg_names32[1];
  Rsh_Fir_array_arg_names32[0] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args92, Rsh_Fir_array_arg_names32, CCP, RHO);
  // goto L30(r74)
  // L30(r74)
  Rsh_Fir_reg_r75_ = Rsh_Fir_reg_r74_;
  goto L30_;

L112_:;
  // checkAndChange9 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L113() else D23()
  // L113()
  goto L113_;

D23_:;
  // deopt 123 []
  Rsh_Fir_deopt(123, 0, NULL, CCP, RHO);
  return R_NilValue;

L113_:;
  // p10 = prom<V +>{
  //   argdb1 = ld argdb;
  //   argdb2 = force? argdb1;
  //   checkMissing(argdb2);
  //   return argdb2;
  // }
  Rsh_Fir_reg_p10_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_10, CCP, RHO);
  // r79 = dyn checkAndChange9("argdb", p10)
  SEXP Rsh_Fir_array_args94[2];
  Rsh_Fir_array_args94[0] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args94[1] = Rsh_Fir_reg_p10_;
  SEXP Rsh_Fir_array_arg_names33[2];
  Rsh_Fir_array_arg_names33[0] = R_MissingArg;
  Rsh_Fir_array_arg_names33[1] = R_MissingArg;
  Rsh_Fir_reg_r79_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange9_, 2, Rsh_Fir_array_args94, Rsh_Fir_array_arg_names33, CCP, RHO);
  // check L114() else D24()
  // L114()
  goto L114_;

D24_:;
  // deopt 126 [r79]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_r79_;
  Rsh_Fir_deopt(126, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L114_:;
  // goto L32()
  // L32()
  goto L32_;

L116_:;
  // missing10 = ldf missing in base
  Rsh_Fir_reg_missing10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r83 = dyn missing10(<sym files>)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names34[1];
  Rsh_Fir_array_arg_names34[0] = R_MissingArg;
  Rsh_Fir_reg_r83_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing10_, 1, Rsh_Fir_array_args95, Rsh_Fir_array_arg_names34, CCP, RHO);
  // goto L33(r83)
  // L33(r83)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r83_;
  goto L33_;

L117_:;
  // r81 = dyn base11(<sym files>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 13);
  SEXP Rsh_Fir_array_arg_names35[1];
  Rsh_Fir_array_arg_names35[0] = R_MissingArg;
  Rsh_Fir_reg_r81_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names35, CCP, RHO);
  // goto L33(r81)
  // L33(r81)
  Rsh_Fir_reg_r82_ = Rsh_Fir_reg_r81_;
  goto L33_;

L118_:;
  // checkAndChange10 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L119() else D25()
  // L119()
  goto L119_;

D25_:;
  // deopt 134 []
  Rsh_Fir_deopt(134, 0, NULL, CCP, RHO);
  return R_NilValue;

L119_:;
  // p11 = prom<V +>{
  //   files1 = ld files;
  //   files2 = force? files1;
  //   checkMissing(files2);
  //   return files2;
  // }
  Rsh_Fir_reg_p11_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_11, CCP, RHO);
  // r86 = dyn checkAndChange10("files", p11)
  SEXP Rsh_Fir_array_args98[2];
  Rsh_Fir_array_args98[0] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args98[1] = Rsh_Fir_reg_p11_;
  SEXP Rsh_Fir_array_arg_names36[2];
  Rsh_Fir_array_arg_names36[0] = R_MissingArg;
  Rsh_Fir_array_arg_names36[1] = R_MissingArg;
  Rsh_Fir_reg_r86_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange10_, 2, Rsh_Fir_array_args98, Rsh_Fir_array_arg_names36, CCP, RHO);
  // check L120() else D26()
  // L120()
  goto L120_;

D26_:;
  // deopt 137 [r86]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_r86_;
  Rsh_Fir_deopt(137, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L120_:;
  // goto L35()
  // L35()
  goto L35_;

L122_:;
  // missing11 = ldf missing in base
  Rsh_Fir_reg_missing11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r90 = dyn missing11(<sym quotes>)
  SEXP Rsh_Fir_array_args99[1];
  Rsh_Fir_array_args99[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names37[1];
  Rsh_Fir_array_arg_names37[0] = R_MissingArg;
  Rsh_Fir_reg_r90_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing11_, 1, Rsh_Fir_array_args99, Rsh_Fir_array_arg_names37, CCP, RHO);
  // goto L36(r90)
  // L36(r90)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r90_;
  goto L36_;

L123_:;
  // r88 = dyn base12(<sym quotes>)
  SEXP Rsh_Fir_array_args100[1];
  Rsh_Fir_array_args100[0] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names38[1];
  Rsh_Fir_array_arg_names38[0] = R_MissingArg;
  Rsh_Fir_reg_r88_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args100, Rsh_Fir_array_arg_names38, CCP, RHO);
  // goto L36(r88)
  // L36(r88)
  Rsh_Fir_reg_r89_ = Rsh_Fir_reg_r88_;
  goto L36_;

L124_:;
  // checkAndChange11 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L125() else D27()
  // L125()
  goto L125_;

D27_:;
  // deopt 145 []
  Rsh_Fir_deopt(145, 0, NULL, CCP, RHO);
  return R_NilValue;

L125_:;
  // p12 = prom<V +>{
  //   quotes1 = ld quotes;
  //   quotes2 = force? quotes1;
  //   checkMissing(quotes2);
  //   return quotes2;
  // }
  Rsh_Fir_reg_p12_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_12, CCP, RHO);
  // r93 = dyn checkAndChange11("quotes", p12)
  SEXP Rsh_Fir_array_args102[2];
  Rsh_Fir_array_args102[0] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args102[1] = Rsh_Fir_reg_p12_;
  SEXP Rsh_Fir_array_arg_names39[2];
  Rsh_Fir_array_arg_names39[0] = R_MissingArg;
  Rsh_Fir_array_arg_names39[1] = R_MissingArg;
  Rsh_Fir_reg_r93_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange11_, 2, Rsh_Fir_array_args102, Rsh_Fir_array_arg_names39, CCP, RHO);
  // check L126() else D28()
  // L126()
  goto L126_;

D28_:;
  // deopt 148 [r93]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_r93_;
  Rsh_Fir_deopt(148, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L126_:;
  // goto L38()
  // L38()
  goto L38_;

L128_:;
  // missing12 = ldf missing in base
  Rsh_Fir_reg_missing12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r97 = dyn missing12(<sym fuzzy>)
  SEXP Rsh_Fir_array_args103[1];
  Rsh_Fir_array_args103[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names40[1];
  Rsh_Fir_array_arg_names40[0] = R_MissingArg;
  Rsh_Fir_reg_r97_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing12_, 1, Rsh_Fir_array_args103, Rsh_Fir_array_arg_names40, CCP, RHO);
  // goto L39(r97)
  // L39(r97)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r97_;
  goto L39_;

L129_:;
  // r95 = dyn base13(<sym fuzzy>)
  SEXP Rsh_Fir_array_args104[1];
  Rsh_Fir_array_args104[0] = Rsh_const(CCP, 11);
  SEXP Rsh_Fir_array_arg_names41[1];
  Rsh_Fir_array_arg_names41[0] = R_MissingArg;
  Rsh_Fir_reg_r95_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args104, Rsh_Fir_array_arg_names41, CCP, RHO);
  // goto L39(r95)
  // L39(r95)
  Rsh_Fir_reg_r96_ = Rsh_Fir_reg_r95_;
  goto L39_;

L130_:;
  // checkAndChange12 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L131() else D29()
  // L131()
  goto L131_;

D29_:;
  // deopt 156 []
  Rsh_Fir_deopt(156, 0, NULL, CCP, RHO);
  return R_NilValue;

L131_:;
  // p13 = prom<V +>{
  //   fuzzy1 = ld fuzzy;
  //   fuzzy2 = force? fuzzy1;
  //   checkMissing(fuzzy2);
  //   return fuzzy2;
  // }
  Rsh_Fir_reg_p13_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_13, CCP, RHO);
  // r100 = dyn checkAndChange12("fuzzy", p13)
  SEXP Rsh_Fir_array_args106[2];
  Rsh_Fir_array_args106[0] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args106[1] = Rsh_Fir_reg_p13_;
  SEXP Rsh_Fir_array_arg_names42[2];
  Rsh_Fir_array_arg_names42[0] = R_MissingArg;
  Rsh_Fir_array_arg_names42[1] = R_MissingArg;
  Rsh_Fir_reg_r100_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange12_, 2, Rsh_Fir_array_args106, Rsh_Fir_array_arg_names42, CCP, RHO);
  // check L132() else D30()
  // L132()
  goto L132_;

D30_:;
  // deopt 159 [r100]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_r100_;
  Rsh_Fir_deopt(159, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L132_:;
  // goto L41()
  // L41()
  goto L41_;

L134_:;
  // missing13 = ldf missing in base
  Rsh_Fir_reg_missing13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // r104 = dyn missing13(<sym backtick>)
  SEXP Rsh_Fir_array_args107[1];
  Rsh_Fir_array_args107[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names43[1];
  Rsh_Fir_array_arg_names43[0] = R_MissingArg;
  Rsh_Fir_reg_r104_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_missing13_, 1, Rsh_Fir_array_args107, Rsh_Fir_array_arg_names43, CCP, RHO);
  // goto L42(r104)
  // L42(r104)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r104_;
  goto L42_;

L135_:;
  // r102 = dyn base14(<sym backtick>)
  SEXP Rsh_Fir_array_args108[1];
  Rsh_Fir_array_args108[0] = Rsh_const(CCP, 14);
  SEXP Rsh_Fir_array_arg_names44[1];
  Rsh_Fir_array_arg_names44[0] = R_MissingArg;
  Rsh_Fir_reg_r102_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args108, Rsh_Fir_array_arg_names44, CCP, RHO);
  // goto L42(r102)
  // L42(r102)
  Rsh_Fir_reg_r103_ = Rsh_Fir_reg_r102_;
  goto L42_;

L136_:;
  // checkAndChange13 = ldf checkAndChange
  Rsh_Fir_reg_checkAndChange13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // check L137() else D31()
  // L137()
  goto L137_;

D31_:;
  // deopt 167 []
  Rsh_Fir_deopt(167, 0, NULL, CCP, RHO);
  return R_NilValue;

L137_:;
  // p14 = prom<V +>{
  //   backtick1 = ld backtick;
  //   backtick2 = force? backtick1;
  //   checkMissing(backtick2);
  //   return backtick2;
  // }
  Rsh_Fir_reg_p14_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner472388370_14, CCP, RHO);
  // r107 = dyn checkAndChange13("backtick", p14)
  SEXP Rsh_Fir_array_args110[2];
  Rsh_Fir_array_args110[0] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args110[1] = Rsh_Fir_reg_p14_;
  SEXP Rsh_Fir_array_arg_names45[2];
  Rsh_Fir_array_arg_names45[0] = R_MissingArg;
  Rsh_Fir_array_arg_names45[1] = R_MissingArg;
  Rsh_Fir_reg_r107_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_checkAndChange13_, 2, Rsh_Fir_array_args110, Rsh_Fir_array_arg_names45, CCP, RHO);
  // check L138() else D32()
  // L138()
  goto L138_;

D32_:;
  // deopt 170 [r107]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_r107_;
  Rsh_Fir_deopt(170, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L138_:;
  // goto L44()
  // L44()
  goto L44_;

L140_:;
  // invisible = ldf invisible in base
  Rsh_Fir_reg_invisible = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // r111 = dyn invisible()
  Rsh_Fir_reg_r111_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_invisible, 0, NULL, NULL, CCP, RHO);
  // check L142() else D33()
  // L142()
  goto L142_;

L141_:;
  // r109 = dyn base15()
  Rsh_Fir_reg_r109_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 0, NULL, NULL, CCP, RHO);
  // goto L45(r109)
  // L45(r109)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r109_;
  goto L45_;

D33_:;
  // deopt 176 [r111]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_r111_;
  Rsh_Fir_deopt(176, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L142_:;
  // goto L45(r111)
  // L45(r111)
  Rsh_Fir_reg_r110_ = Rsh_Fir_reg_r111_;
  goto L45_;
}
SEXP Rsh_Fir_user_promise_inner472388370_(SEXP CCP, SEXP RHO) {
  // _CompletionEnv = ld `.CompletionEnv`
  Rsh_Fir_reg__CompletionEnv = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // _CompletionEnv1 = force? _CompletionEnv
  Rsh_Fir_reg__CompletionEnv1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg__CompletionEnv);
  // checkMissing(_CompletionEnv1)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_Fir_reg__CompletionEnv1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args48, Rsh_Fir_param_types_empty()));
  // c1 = `is.object`(_CompletionEnv1)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg__CompletionEnv1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c1 then L1() else L2(_CompletionEnv1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L1()
    goto L1_;
  } else {
  // L2(_CompletionEnv1)
    Rsh_Fir_reg__CompletionEnv3_ = Rsh_Fir_reg__CompletionEnv1_;
    goto L2_;
  }

L0_:;
  // return dx1
  return Rsh_Fir_reg_dx1_;

L1_:;
  // dr = tryDispatchBuiltin.1("[[", _CompletionEnv1)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 24);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg__CompletionEnv1_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc then L3() else L2(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L3()
    goto L3_;
  } else {
  // L2(dr)
    Rsh_Fir_reg__CompletionEnv3_ = Rsh_Fir_reg_dr;
    goto L2_;
  }

L2_:;
  // __ = ldf `[[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // r5 = dyn __(_CompletionEnv3, "settings")
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg__CompletionEnv3_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 26);
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args52, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r5)
  // L0(r5)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r5_;
  goto L0_;

L3_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L0(dx)
  // L0(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L0_;
}
SEXP Rsh_Fir_user_promise_inner472388370_1(SEXP CCP, SEXP RHO) {
  // ops1 = ld ops
  Rsh_Fir_reg_ops1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // ops2 = force? ops1
  Rsh_Fir_reg_ops2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ops1_);
  // checkMissing(ops2)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_ops2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty()));
  // return ops2
  return Rsh_Fir_reg_ops2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_2(SEXP CCP, SEXP RHO) {
  // ns1 = ld ns
  Rsh_Fir_reg_ns1_ = Rsh_Fir_load(Rsh_const(CCP, 2), RHO);
  // ns2 = force? ns1
  Rsh_Fir_reg_ns2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ns1_);
  // checkMissing(ns2)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_ns2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // return ns2
  return Rsh_Fir_reg_ns2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_3(SEXP CCP, SEXP RHO) {
  // args1 = ld args
  Rsh_Fir_reg_args1_ = Rsh_Fir_load(Rsh_const(CCP, 3), RHO);
  // args2 = force? args1
  Rsh_Fir_reg_args2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_args1_);
  // checkMissing(args2)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_args2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args65, Rsh_Fir_param_types_empty()));
  // return args2
  return Rsh_Fir_reg_args2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_4(SEXP CCP, SEXP RHO) {
  // dots1 = ld dots
  Rsh_Fir_reg_dots1_ = Rsh_Fir_load(Rsh_const(CCP, 4), RHO);
  // dots2 = force? dots1
  Rsh_Fir_reg_dots2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_dots1_);
  // checkMissing(dots2)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_Fir_reg_dots2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args69, Rsh_Fir_param_types_empty()));
  // return dots2
  return Rsh_Fir_reg_dots2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_5(SEXP CCP, SEXP RHO) {
  // func1 = ld func
  Rsh_Fir_reg_func1_ = Rsh_Fir_load(Rsh_const(CCP, 5), RHO);
  // func2 = force? func1
  Rsh_Fir_reg_func2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_func1_);
  // checkMissing(func2)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_func2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // return func2
  return Rsh_Fir_reg_func2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_6(SEXP CCP, SEXP RHO) {
  // ipck1 = ld ipck
  Rsh_Fir_reg_ipck1_ = Rsh_Fir_load(Rsh_const(CCP, 6), RHO);
  // ipck2 = force? ipck1
  Rsh_Fir_reg_ipck2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_ipck1_);
  // checkMissing(ipck2)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_ipck2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args77, Rsh_Fir_param_types_empty()));
  // return ipck2
  return Rsh_Fir_reg_ipck2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_7(SEXP CCP, SEXP RHO) {
  // S4 = ld S3
  Rsh_Fir_reg_S4_ = Rsh_Fir_load(Rsh_const(CCP, 7), RHO);
  // S5 = force? S4
  Rsh_Fir_reg_S5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_S4_);
  // checkMissing(S5)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_S5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args81, Rsh_Fir_param_types_empty()));
  // return S5
  return Rsh_Fir_reg_S5_;
}
SEXP Rsh_Fir_user_promise_inner472388370_8(SEXP CCP, SEXP RHO) {
  // data1 = ld data
  Rsh_Fir_reg_data1_ = Rsh_Fir_load(Rsh_const(CCP, 8), RHO);
  // data2 = force? data1
  Rsh_Fir_reg_data2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_data1_);
  // checkMissing(data2)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_data2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // return data2
  return Rsh_Fir_reg_data2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_9(SEXP CCP, SEXP RHO) {
  // help1 = ld help
  Rsh_Fir_reg_help1_ = Rsh_Fir_load(Rsh_const(CCP, 9), RHO);
  // help2 = force? help1
  Rsh_Fir_reg_help2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_help1_);
  // checkMissing(help2)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_help2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // return help2
  return Rsh_Fir_reg_help2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_10(SEXP CCP, SEXP RHO) {
  // argdb1 = ld argdb
  Rsh_Fir_reg_argdb1_ = Rsh_Fir_load(Rsh_const(CCP, 10), RHO);
  // argdb2 = force? argdb1
  Rsh_Fir_reg_argdb2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_argdb1_);
  // checkMissing(argdb2)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_Fir_reg_argdb2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args93, Rsh_Fir_param_types_empty()));
  // return argdb2
  return Rsh_Fir_reg_argdb2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_11(SEXP CCP, SEXP RHO) {
  // files1 = ld files
  Rsh_Fir_reg_files1_ = Rsh_Fir_load(Rsh_const(CCP, 13), RHO);
  // files2 = force? files1
  Rsh_Fir_reg_files2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_files1_);
  // checkMissing(files2)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_files2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // return files2
  return Rsh_Fir_reg_files2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_12(SEXP CCP, SEXP RHO) {
  // quotes1 = ld quotes
  Rsh_Fir_reg_quotes1_ = Rsh_Fir_load(Rsh_const(CCP, 12), RHO);
  // quotes2 = force? quotes1
  Rsh_Fir_reg_quotes2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_quotes1_);
  // checkMissing(quotes2)
  SEXP Rsh_Fir_array_args101[1];
  Rsh_Fir_array_args101[0] = Rsh_Fir_reg_quotes2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args101, Rsh_Fir_param_types_empty()));
  // return quotes2
  return Rsh_Fir_reg_quotes2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_13(SEXP CCP, SEXP RHO) {
  // fuzzy1 = ld fuzzy
  Rsh_Fir_reg_fuzzy1_ = Rsh_Fir_load(Rsh_const(CCP, 11), RHO);
  // fuzzy2 = force? fuzzy1
  Rsh_Fir_reg_fuzzy2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_fuzzy1_);
  // checkMissing(fuzzy2)
  SEXP Rsh_Fir_array_args105[1];
  Rsh_Fir_array_args105[0] = Rsh_Fir_reg_fuzzy2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args105, Rsh_Fir_param_types_empty()));
  // return fuzzy2
  return Rsh_Fir_reg_fuzzy2_;
}
SEXP Rsh_Fir_user_promise_inner472388370_14(SEXP CCP, SEXP RHO) {
  // backtick1 = ld backtick
  Rsh_Fir_reg_backtick1_ = Rsh_Fir_load(Rsh_const(CCP, 14), RHO);
  // backtick2 = force? backtick1
  Rsh_Fir_reg_backtick2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_backtick1_);
  // checkMissing(backtick2)
  SEXP Rsh_Fir_array_args109[1];
  Rsh_Fir_array_args109[0] = Rsh_Fir_reg_backtick2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args109, Rsh_Fir_param_types_empty()));
  // return backtick2
  return Rsh_Fir_reg_backtick2_;
}
SEXP Rsh_Fir_user_function_inner4072702069_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner4072702069 dynamic dispatch ([what, value])

  return Rsh_Fir_user_version_inner4072702069_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner4072702069_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner4072702069 version 0 (*, * -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner4072702069/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_what;  // what
  SEXP Rsh_Fir_reg_value;  // value
  SEXP Rsh_Fir_reg_sym1;  // sym
  SEXP Rsh_Fir_reg_base1;  // base
  SEXP Rsh_Fir_reg_guard1;  // guard
  SEXP Rsh_Fir_reg_r2;  // r
  SEXP Rsh_Fir_reg_r1_1;  // r1
  SEXP Rsh_Fir_reg_value1_;  // value1
  SEXP Rsh_Fir_reg_value2_;  // value2
  SEXP Rsh_Fir_reg_length1;  // length
  SEXP Rsh_Fir_reg_r2_1;  // r2
  SEXP Rsh_Fir_reg_r3_1;  // r3
  SEXP Rsh_Fir_reg_c1;  // c
  SEXP Rsh_Fir_reg_c2_1;  // c2
  SEXP Rsh_Fir_reg_sym1_1;  // sym1
  SEXP Rsh_Fir_reg_base1_1;  // base1
  SEXP Rsh_Fir_reg_guard1_1;  // guard1
  SEXP Rsh_Fir_reg_r4_1;  // r4
  SEXP Rsh_Fir_reg_c5_1;  // c5
  SEXP Rsh_Fir_reg_r5_1;  // r5
  SEXP Rsh_Fir_reg_value3_;  // value3
  SEXP Rsh_Fir_reg_value4_;  // value4
  SEXP Rsh_Fir_reg_c6_1;  // c6
  SEXP Rsh_Fir_reg_c7_1;  // c7
  SEXP Rsh_Fir_reg_c8_1;  // c8
  SEXP Rsh_Fir_reg_c10_1;  // c10
  SEXP Rsh_Fir_reg_c12_1;  // c12
  SEXP Rsh_Fir_reg_sym2_1;  // sym2
  SEXP Rsh_Fir_reg_base2_1;  // base2
  SEXP Rsh_Fir_reg_guard2_1;  // guard2
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_c15_1;  // c15
  SEXP Rsh_Fir_reg_r7_1;  // r7
  SEXP Rsh_Fir_reg_value5_;  // value5
  SEXP Rsh_Fir_reg_value6_;  // value6
  SEXP Rsh_Fir_reg_is_na;  // is_na
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_c16_;  // c16
  SEXP Rsh_Fir_reg_c17_;  // c17
  SEXP Rsh_Fir_reg_c19_;  // c19
  SEXP Rsh_Fir_reg_value7_;  // value7
  SEXP Rsh_Fir_reg_value8_;  // value8
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_c20_;  // c20
  SEXP Rsh_Fir_reg_value11_;  // value11
  SEXP Rsh_Fir_reg_l3_;  // l3
  SEXP Rsh_Fir_reg_value12_;  // value12
  SEXP Rsh_Fir_reg_l4_;  // l4
  SEXP Rsh_Fir_reg_dr1;  // dr
  SEXP Rsh_Fir_reg_dc1;  // dc
  SEXP Rsh_Fir_reg_dx1;  // dx
  SEXP Rsh_Fir_reg_value15_;  // value15
  SEXP Rsh_Fir_reg_l6_;  // l6
  SEXP Rsh_Fir_reg_value16_;  // value16
  SEXP Rsh_Fir_reg_dx1_1;  // dx1
  SEXP Rsh_Fir_reg_r10_1;  // r10
  SEXP Rsh_Fir_reg_c21_;  // c21
  SEXP Rsh_Fir_reg_value18_;  // value18
  SEXP Rsh_Fir_reg_l8_;  // l8
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_value20_;  // value20
  SEXP Rsh_Fir_reg_l10_;  // l10
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_what1_;  // what1
  SEXP Rsh_Fir_reg_what2_;  // what2
  SEXP Rsh_Fir_reg_____;  // ____
  SEXP Rsh_Fir_reg_r11_1;  // r11
  SEXP Rsh_Fir_reg_c22_;  // c22
  SEXP Rsh_Fir_reg_value22_;  // value22
  SEXP Rsh_Fir_reg_l12_;  // l12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_value24_;  // value24
  SEXP Rsh_Fir_reg_dx7_;  // dx7
  SEXP Rsh_Fir_reg_r12_1;  // r12

  // Bind parameters
  Rsh_Fir_reg_what = PARAMS[0];
  Rsh_Fir_reg_value = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st what = what
  Rsh_Fir_store(Rsh_const(CCP, 41), Rsh_Fir_reg_what, RHO);
  (void)(Rsh_Fir_reg_what);
  // st value = value
  Rsh_Fir_store(Rsh_const(CCP, 42), Rsh_Fir_reg_value, RHO);
  (void)(Rsh_Fir_reg_value);
  // sym = ldf length
  Rsh_Fir_reg_sym1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base = ldf length in base
  Rsh_Fir_reg_base1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args111[2];
  Rsh_Fir_array_args111[0] = Rsh_Fir_reg_sym1;
  Rsh_Fir_array_args111[1] = Rsh_Fir_reg_base1;
  Rsh_Fir_reg_guard1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args111);
  // if guard then L7() else L8()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1)) {
  // L7()
    goto L7_;
  } else {
  // L8()
    goto L8_;
  }

L0_:;
  // r3 = `==`(r1, 1)
  SEXP Rsh_Fir_array_args112[2];
  Rsh_Fir_array_args112[0] = Rsh_Fir_reg_r1_1;
  Rsh_Fir_array_args112[1] = Rsh_const(CCP, 43);
  Rsh_Fir_reg_r3_1 = Rsh_Fir_call_builtin(74, CCP, RHO, 2, Rsh_Fir_array_args112, Rsh_Fir_param_types_empty());
  // c = `as.logical`(r3)
  SEXP Rsh_Fir_array_args113[1];
  Rsh_Fir_array_args113[0] = Rsh_Fir_reg_r3_1;
  Rsh_Fir_reg_c1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args113, Rsh_Fir_param_types_empty());
  // if c then L11() else L1(c)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1)) {
  // L11()
    goto L11_;
  } else {
  // L1(c)
    Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c1;
    goto L1_;
  }

L1_:;
  // c10 = `as.logical`(c2)
  SEXP Rsh_Fir_array_args114[1];
  Rsh_Fir_array_args114[0] = Rsh_Fir_reg_c2_1;
  Rsh_Fir_reg_c10_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args114, Rsh_Fir_param_types_empty());
  // if c10 then L16() else L3(c10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_1)) {
  // L16()
    goto L16_;
  } else {
  // L3(c10)
    Rsh_Fir_reg_c12_1 = Rsh_Fir_reg_c10_1;
    goto L3_;
  }

L2_:;
  // c7 = `as.logical`(r5)
  SEXP Rsh_Fir_array_args115[1];
  Rsh_Fir_array_args115[0] = Rsh_Fir_reg_r5_1;
  Rsh_Fir_reg_c7_1 = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args115, Rsh_Fir_param_types_empty());
  // c8 = `&&`(c5, c7)
  SEXP Rsh_Fir_array_args116[2];
  Rsh_Fir_array_args116[0] = Rsh_Fir_reg_c5_1;
  Rsh_Fir_array_args116[1] = Rsh_Fir_reg_c7_1;
  Rsh_Fir_reg_c8_1 = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args116, Rsh_Fir_param_types_empty());
  // goto L1(c8)
  // L1(c8)
  Rsh_Fir_reg_c2_1 = Rsh_Fir_reg_c8_1;
  goto L1_;

L3_:;
  // c19 = `as.logical`(c12)
  SEXP Rsh_Fir_array_args117[1];
  Rsh_Fir_array_args117[0] = Rsh_Fir_reg_c12_1;
  Rsh_Fir_reg_c19_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args117, Rsh_Fir_param_types_empty());
  // if c19 then L22() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c19_)) {
  // L22()
    goto L22_;
  } else {
  // L5()
    goto L5_;
  }

L4_:;
  // r9 = `!`(r7)
  SEXP Rsh_Fir_array_args118[1];
  Rsh_Fir_array_args118[0] = Rsh_Fir_reg_r7_1;
  Rsh_Fir_reg_r9_ = Rsh_Fir_call_builtin(82, CCP, RHO, 1, Rsh_Fir_array_args118, Rsh_Fir_param_types_empty());
  // c16 = `as.logical`(r9)
  SEXP Rsh_Fir_array_args119[1];
  Rsh_Fir_array_args119[0] = Rsh_Fir_reg_r9_;
  Rsh_Fir_reg_c16_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args119, Rsh_Fir_param_types_empty());
  // c17 = `&&`(c15, c16)
  SEXP Rsh_Fir_array_args120[2];
  Rsh_Fir_array_args120[0] = Rsh_Fir_reg_c15_1;
  Rsh_Fir_array_args120[1] = Rsh_Fir_reg_c16_;
  Rsh_Fir_reg_c17_ = Rsh_Fir_call_builtin(83, CCP, RHO, 2, Rsh_Fir_array_args120, Rsh_Fir_param_types_empty());
  // goto L3(c17)
  // L3(c17)
  Rsh_Fir_reg_c12_1 = Rsh_Fir_reg_c17_;
  goto L3_;

L5_:;
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return NULL
  return Rsh_const(CCP, 44);

L6_:;
  // c22 = `is.object`(l10)
  SEXP Rsh_Fir_array_args121[1];
  Rsh_Fir_array_args121[0] = Rsh_Fir_reg_l10_;
  Rsh_Fir_reg_c22_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args121, Rsh_Fir_param_types_empty());
  // if c22 then L33() else L34(value20, l10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c22_)) {
  // L33()
    goto L33_;
  } else {
  // L34(value20, l10)
    Rsh_Fir_reg_value22_ = Rsh_Fir_reg_value20_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_l10_;
    goto L34_;
  }

L7_:;
  // value1 = ld value
  Rsh_Fir_reg_value1_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L9() else D0()
  // L9()
  goto L9_;

L8_:;
  // r = dyn base(<sym value>)
  SEXP Rsh_Fir_array_args122[1];
  Rsh_Fir_array_args122[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names46[1];
  Rsh_Fir_array_arg_names46[0] = R_MissingArg;
  Rsh_Fir_reg_r2 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1, 1, Rsh_Fir_array_args122, Rsh_Fir_array_arg_names46, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2;
  goto L0_;

D0_:;
  // deopt 2 [value1]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_value1_;
  Rsh_Fir_deopt(2, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L9_:;
  // value2 = force? value1
  Rsh_Fir_reg_value2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value1_);
  // checkMissing(value2)
  SEXP Rsh_Fir_array_args123[1];
  Rsh_Fir_array_args123[0] = Rsh_Fir_reg_value2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args123, Rsh_Fir_param_types_empty()));
  // length = ldf length in base
  Rsh_Fir_reg_length1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // r2 = dyn length(value2)
  SEXP Rsh_Fir_array_args124[1];
  Rsh_Fir_array_args124[0] = Rsh_Fir_reg_value2_;
  SEXP Rsh_Fir_array_arg_names47[1];
  Rsh_Fir_array_arg_names47[0] = R_MissingArg;
  Rsh_Fir_reg_r2_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length1, 1, Rsh_Fir_array_args124, Rsh_Fir_array_arg_names47, CCP, RHO);
  // check L10() else D1()
  // L10()
  goto L10_;

D1_:;
  // deopt 5 [r2]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_r2_1;
  Rsh_Fir_deopt(5, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L10_:;
  // goto L0(r2)
  // L0(r2)
  Rsh_Fir_reg_r1_1 = Rsh_Fir_reg_r2_1;
  goto L0_;

L11_:;
  // sym1 = ldf `is.logical`
  Rsh_Fir_reg_sym1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 45), RHO);
  // base1 = ldf `is.logical` in base
  Rsh_Fir_reg_base1_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 45), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args125[2];
  Rsh_Fir_array_args125[0] = Rsh_Fir_reg_sym1_1;
  Rsh_Fir_array_args125[1] = Rsh_Fir_reg_base1_1;
  Rsh_Fir_reg_guard1_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args125);
  // if guard1 then L12() else L13()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_1)) {
  // L12()
    goto L12_;
  } else {
  // L13()
    goto L13_;
  }

L12_:;
  // value3 = ld value
  Rsh_Fir_reg_value3_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L14() else D2()
  // L14()
  goto L14_;

L13_:;
  // r4 = dyn base1(<sym value>)
  SEXP Rsh_Fir_array_args126[1];
  Rsh_Fir_array_args126[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names48[1];
  Rsh_Fir_array_arg_names48[0] = R_MissingArg;
  Rsh_Fir_reg_r4_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_1, 1, Rsh_Fir_array_args126, Rsh_Fir_array_arg_names48, CCP, RHO);
  // goto L2(c, r4)
  // L2(c, r4)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_r4_1;
  goto L2_;

D2_:;
  // deopt 9 [c, value3]
  SEXP Rsh_Fir_array_deopt_stack20[2];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_c1;
  Rsh_Fir_array_deopt_stack20[1] = Rsh_Fir_reg_value3_;
  Rsh_Fir_deopt(9, 2, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L14_:;
  // value4 = force? value3
  Rsh_Fir_reg_value4_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value3_);
  // checkMissing(value4)
  SEXP Rsh_Fir_array_args127[1];
  Rsh_Fir_array_args127[0] = Rsh_Fir_reg_value4_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args127, Rsh_Fir_param_types_empty()));
  // c6 = `is.logical`(value4)
  SEXP Rsh_Fir_array_args128[1];
  Rsh_Fir_array_args128[0] = Rsh_Fir_reg_value4_;
  Rsh_Fir_reg_c6_1 = Rsh_Fir_call_builtin(385, CCP, RHO, 1, Rsh_Fir_array_args128, Rsh_Fir_param_types_empty());
  // goto L2(c, c6)
  // L2(c, c6)
  Rsh_Fir_reg_c5_1 = Rsh_Fir_reg_c1;
  Rsh_Fir_reg_r5_1 = Rsh_Fir_reg_c6_1;
  goto L2_;

L16_:;
  // sym2 = ldf `is.na`
  Rsh_Fir_reg_sym2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 46), RHO);
  // base2 = ldf `is.na` in base
  Rsh_Fir_reg_base2_1 = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args129[2];
  Rsh_Fir_array_args129[0] = Rsh_Fir_reg_sym2_1;
  Rsh_Fir_array_args129[1] = Rsh_Fir_reg_base2_1;
  Rsh_Fir_reg_guard2_1 = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args129);
  // if guard2 then L17() else L18()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_1)) {
  // L17()
    goto L17_;
  } else {
  // L18()
    goto L18_;
  }

L17_:;
  // value5 = ld value
  Rsh_Fir_reg_value5_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L19() else D3()
  // L19()
  goto L19_;

L18_:;
  // r6 = dyn base2(<sym value>)
  SEXP Rsh_Fir_array_args130[1];
  Rsh_Fir_array_args130[0] = Rsh_const(CCP, 42);
  SEXP Rsh_Fir_array_arg_names49[1];
  Rsh_Fir_array_arg_names49[0] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_1, 1, Rsh_Fir_array_args130, Rsh_Fir_array_arg_names49, CCP, RHO);
  // goto L4(c10, r6)
  // L4(c10, r6)
  Rsh_Fir_reg_c15_1 = Rsh_Fir_reg_c10_1;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r6_;
  goto L4_;

D3_:;
  // deopt 15 [c10, value5]
  SEXP Rsh_Fir_array_deopt_stack21[2];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_c10_1;
  Rsh_Fir_array_deopt_stack21[1] = Rsh_Fir_reg_value5_;
  Rsh_Fir_deopt(15, 2, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L19_:;
  // value6 = force? value5
  Rsh_Fir_reg_value6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value5_);
  // checkMissing(value6)
  SEXP Rsh_Fir_array_args131[1];
  Rsh_Fir_array_args131[0] = Rsh_Fir_reg_value6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args131, Rsh_Fir_param_types_empty()));
  // is_na = ldf `is.na` in base
  Rsh_Fir_reg_is_na = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 46), RHO);
  // r8 = dyn is_na(value6)
  SEXP Rsh_Fir_array_args132[1];
  Rsh_Fir_array_args132[0] = Rsh_Fir_reg_value6_;
  SEXP Rsh_Fir_array_arg_names50[1];
  Rsh_Fir_array_arg_names50[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_is_na, 1, Rsh_Fir_array_args132, Rsh_Fir_array_arg_names50, CCP, RHO);
  // check L20() else D4()
  // L20()
  goto L20_;

D4_:;
  // deopt 18 [c10, r8]
  SEXP Rsh_Fir_array_deopt_stack22[2];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_c10_1;
  Rsh_Fir_array_deopt_stack22[1] = Rsh_Fir_reg_r8_;
  Rsh_Fir_deopt(18, 2, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L20_:;
  // goto L4(c10, r8)
  // L4(c10, r8)
  Rsh_Fir_reg_c15_1 = Rsh_Fir_reg_c10_1;
  Rsh_Fir_reg_r7_1 = Rsh_Fir_reg_r8_;
  goto L4_;

L22_:;
  // value7 = ld value
  Rsh_Fir_reg_value7_ = Rsh_Fir_load(Rsh_const(CCP, 42), RHO);
  // check L23() else D5()
  // L23()
  goto L23_;

D5_:;
  // deopt 21 [value7]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_value7_;
  Rsh_Fir_deopt(21, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L23_:;
  // value8 = force? value7
  Rsh_Fir_reg_value8_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_value7_);
  // checkMissing(value8)
  SEXP Rsh_Fir_array_args133[1];
  Rsh_Fir_array_args133[0] = Rsh_Fir_reg_value8_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args133, Rsh_Fir_param_types_empty()));
  // l = ld `.CompletionEnv`
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 23), RHO);
  // c20 = `is.object`(l)
  SEXP Rsh_Fir_array_args134[1];
  Rsh_Fir_array_args134[0] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_c20_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args134, Rsh_Fir_param_types_empty());
  // if c20 then L25() else L26(value8, l, value8, l)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c20_)) {
  // L25()
    goto L25_;
  } else {
  // L26(value8, l, value8, l)
    Rsh_Fir_reg_value11_ = Rsh_Fir_reg_value8_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_value12_ = Rsh_Fir_reg_value8_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_l;
    goto L26_;
  }

L24_:;
  // c21 = `is.object`(dx1)
  SEXP Rsh_Fir_array_args135[1];
  Rsh_Fir_array_args135[0] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_reg_c21_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args135, Rsh_Fir_param_types_empty());
  // if c21 then L28() else L29(value15, l6, dx1)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c21_)) {
  // L28()
    goto L28_;
  } else {
  // L29(value15, l6, dx1)
    Rsh_Fir_reg_value18_ = Rsh_Fir_reg_value15_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx1_1;
    goto L29_;
  }

L25_:;
  // dr = tryDispatchBuiltin.1("$", l)
  SEXP Rsh_Fir_array_args136[2];
  Rsh_Fir_array_args136[0] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args136[1] = Rsh_Fir_reg_l;
  Rsh_Fir_reg_dr1 = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args136);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args137[1];
  Rsh_Fir_array_args137[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dc1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args137, Rsh_Fir_param_types_empty());
  // if dc then L27() else L26(value8, l, value8, dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1)) {
  // L27()
    goto L27_;
  } else {
  // L26(value8, l, value8, dr)
    Rsh_Fir_reg_value11_ = Rsh_Fir_reg_value8_;
    Rsh_Fir_reg_l3_ = Rsh_Fir_reg_l;
    Rsh_Fir_reg_value12_ = Rsh_Fir_reg_value8_;
    Rsh_Fir_reg_l4_ = Rsh_Fir_reg_dr1;
    goto L26_;
  }

L26_:;
  // r10 = `$`(l4, <sym settings>)
  SEXP Rsh_Fir_array_args138[2];
  Rsh_Fir_array_args138[0] = Rsh_Fir_reg_l4_;
  Rsh_Fir_array_args138[1] = Rsh_const(CCP, 48);
  Rsh_Fir_reg_r10_1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args138, Rsh_Fir_param_types_empty());
  // goto L24(value11, l3, value12, r10)
  // L24(value11, l3, value12, r10)
  Rsh_Fir_reg_value15_ = Rsh_Fir_reg_value11_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l3_;
  Rsh_Fir_reg_value16_ = Rsh_Fir_reg_value12_;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_r10_1;
  goto L24_;

L27_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args139[1];
  Rsh_Fir_array_args139[0] = Rsh_Fir_reg_dr1;
  Rsh_Fir_reg_dx1 = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args139, Rsh_Fir_param_types_empty());
  // goto L24(value8, l, value8, dx)
  // L24(value8, l, value8, dx)
  Rsh_Fir_reg_value15_ = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_l6_ = Rsh_Fir_reg_l;
  Rsh_Fir_reg_value16_ = Rsh_Fir_reg_value8_;
  Rsh_Fir_reg_dx1_1 = Rsh_Fir_reg_dx1;
  goto L24_;

L28_:;
  // dr2 = tryDispatchBuiltin.0("[[<-", dx1, value16)
  SEXP Rsh_Fir_array_args140[3];
  Rsh_Fir_array_args140[0] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args140[1] = Rsh_Fir_reg_dx1_1;
  Rsh_Fir_array_args140[2] = Rsh_Fir_reg_value16_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args140);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args141[1];
  Rsh_Fir_array_args141[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args141, Rsh_Fir_param_types_empty());
  // if dc1 then L30() else L29(value15, l6, dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L30()
    goto L30_;
  } else {
  // L29(value15, l6, dr2)
    Rsh_Fir_reg_value18_ = Rsh_Fir_reg_value15_;
    Rsh_Fir_reg_l8_ = Rsh_Fir_reg_l6_;
    Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dr2_;
    goto L29_;
  }

L29_:;
  // what1 = ld what
  Rsh_Fir_reg_what1_ = Rsh_Fir_load(Rsh_const(CCP, 41), RHO);
  // check L31() else D6()
  // L31()
  goto L31_;

L30_:;
  // dx4 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args142[1];
  Rsh_Fir_array_args142[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args142, Rsh_Fir_param_types_empty());
  // goto L6(value15, l6, dx4)
  // L6(value15, l6, dx4)
  Rsh_Fir_reg_value20_ = Rsh_Fir_reg_value15_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l6_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_dx4_;
  goto L6_;

D6_:;
  // deopt 27 [value18, l8, dx3, value16, what1]
  SEXP Rsh_Fir_array_deopt_stack24[5];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_value18_;
  Rsh_Fir_array_deopt_stack24[1] = Rsh_Fir_reg_l8_;
  Rsh_Fir_array_deopt_stack24[2] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_deopt_stack24[3] = Rsh_Fir_reg_value16_;
  Rsh_Fir_array_deopt_stack24[4] = Rsh_Fir_reg_what1_;
  Rsh_Fir_deopt(27, 5, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L31_:;
  // what2 = force? what1
  Rsh_Fir_reg_what2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_what1_);
  // ____ = ldf `[[<-` in base
  Rsh_Fir_reg_____ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 50), RHO);
  // r11 = dyn ____(dx3, value16, what2)
  SEXP Rsh_Fir_array_args143[3];
  Rsh_Fir_array_args143[0] = Rsh_Fir_reg_dx3_;
  Rsh_Fir_array_args143[1] = Rsh_Fir_reg_value16_;
  Rsh_Fir_array_args143[2] = Rsh_Fir_reg_what2_;
  SEXP Rsh_Fir_array_arg_names51[3];
  Rsh_Fir_array_arg_names51[0] = R_MissingArg;
  Rsh_Fir_array_arg_names51[1] = R_MissingArg;
  Rsh_Fir_array_arg_names51[2] = R_MissingArg;
  Rsh_Fir_reg_r11_1 = Rsh_Fir_call_dynamic(Rsh_Fir_reg_____, 3, Rsh_Fir_array_args143, Rsh_Fir_array_arg_names51, CCP, RHO);
  // goto L6(value18, l8, r11)
  // L6(value18, l8, r11)
  Rsh_Fir_reg_value20_ = Rsh_Fir_reg_value18_;
  Rsh_Fir_reg_l10_ = Rsh_Fir_reg_l8_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_reg_r11_1;
  goto L6_;

L32_:;
  // st `.CompletionEnv` = dx7
  Rsh_Fir_store(Rsh_const(CCP, 23), Rsh_Fir_reg_dx7_, RHO);
  (void)(Rsh_Fir_reg_dx7_);
  // invisible.0()
  (void)(Rsh_Fir_intrinsic_invisible_v0(CCP, RHO, 0, NULL));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return value24
  return Rsh_Fir_reg_value24_;

L33_:;
  // dr4 = tryDispatchBuiltin.0("$<-", l10, dx5)
  SEXP Rsh_Fir_array_args144[3];
  Rsh_Fir_array_args144[0] = Rsh_const(CCP, 51);
  Rsh_Fir_array_args144[1] = Rsh_Fir_reg_l10_;
  Rsh_Fir_array_args144[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v0(CCP, RHO, 3, Rsh_Fir_array_args144);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args145[1];
  Rsh_Fir_array_args145[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args145, Rsh_Fir_param_types_empty());
  // if dc2 then L35() else L34(value20, dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L35()
    goto L35_;
  } else {
  // L34(value20, dr4)
    Rsh_Fir_reg_value22_ = Rsh_Fir_reg_value20_;
    Rsh_Fir_reg_l12_ = Rsh_Fir_reg_dr4_;
    goto L34_;
  }

L34_:;
  // r12 = `$<-`(l12, <sym settings>, dx5)
  SEXP Rsh_Fir_array_args146[3];
  Rsh_Fir_array_args146[0] = Rsh_Fir_reg_l12_;
  Rsh_Fir_array_args146[1] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args146[2] = Rsh_Fir_reg_dx5_;
  Rsh_Fir_reg_r12_1 = Rsh_Fir_call_builtin(21, CCP, RHO, 3, Rsh_Fir_array_args146, Rsh_Fir_param_types_empty());
  // goto L32(value22, r12)
  // L32(value22, r12)
  Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value22_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_r12_1;
  goto L32_;

L35_:;
  // dx6 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args147[1];
  Rsh_Fir_array_args147[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args147, Rsh_Fir_param_types_empty());
  // goto L32(value20, dx6)
  // L32(value20, dx6)
  Rsh_Fir_reg_value24_ = Rsh_Fir_reg_value20_;
  Rsh_Fir_reg_dx7_ = Rsh_Fir_reg_dx6_;
  goto L32_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
