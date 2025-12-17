#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR main dynamic dispatch ([])

  return Rsh_Fir_user_version_main_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR main version 0 (-+> V)

  if (NPARAMS != 0) Rsh_error("FIŘ arity mismatch for main/0: expected 0, got %d", NPARAMS);

  // Declare locals
  SEXP Rsh_Fir_reg_sym;
  SEXP Rsh_Fir_reg_base;
  SEXP Rsh_Fir_reg_guard;
  SEXP Rsh_Fir_reg_r;
  SEXP Rsh_Fir_reg_r1_;
  SEXP Rsh_Fir_reg_sym1_;
  SEXP Rsh_Fir_reg_base1_;
  SEXP Rsh_Fir_reg_guard1_;
  SEXP Rsh_Fir_reg_r2_;
  SEXP Rsh_Fir_reg_r3_;
  SEXP Rsh_Fir_reg_x;
  SEXP Rsh_Fir_reg_x1_;
  SEXP Rsh_Fir_reg_r4_;
  SEXP Rsh_Fir_reg_sym2_;
  SEXP Rsh_Fir_reg_base2_;
  SEXP Rsh_Fir_reg_guard2_;
  SEXP Rsh_Fir_reg_r5_;
  SEXP Rsh_Fir_reg_r6_;
  SEXP Rsh_Fir_reg_x2_;
  SEXP Rsh_Fir_reg_x3_;
  SEXP Rsh_Fir_reg_r7_;
  SEXP Rsh_Fir_reg_sym3_;
  SEXP Rsh_Fir_reg_base3_;
  SEXP Rsh_Fir_reg_guard3_;
  SEXP Rsh_Fir_reg_r8_;
  SEXP Rsh_Fir_reg_r9_;
  SEXP Rsh_Fir_reg_x4_;
  SEXP Rsh_Fir_reg_x5_;
  SEXP Rsh_Fir_reg_r10_;
  SEXP Rsh_Fir_reg_sym4_;
  SEXP Rsh_Fir_reg_base4_;
  SEXP Rsh_Fir_reg_guard4_;
  SEXP Rsh_Fir_reg_r11_;
  SEXP Rsh_Fir_reg_r12_;
  SEXP Rsh_Fir_reg_x6_;
  SEXP Rsh_Fir_reg_x7_;
  SEXP Rsh_Fir_reg_r13_;
  SEXP Rsh_Fir_reg_sym5_;
  SEXP Rsh_Fir_reg_base5_;
  SEXP Rsh_Fir_reg_guard5_;
  SEXP Rsh_Fir_reg_r14_;
  SEXP Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_reg_x8_;
  SEXP Rsh_Fir_reg_x9_;
  SEXP Rsh_Fir_reg_r16_;
  SEXP Rsh_Fir_reg_sym6_;
  SEXP Rsh_Fir_reg_base6_;
  SEXP Rsh_Fir_reg_guard6_;
  SEXP Rsh_Fir_reg_r17_;
  SEXP Rsh_Fir_reg_r18_;
  SEXP Rsh_Fir_reg_x10_;
  SEXP Rsh_Fir_reg_x11_;
  SEXP Rsh_Fir_reg_r19_;
  SEXP Rsh_Fir_reg_sym7_;
  SEXP Rsh_Fir_reg_base7_;
  SEXP Rsh_Fir_reg_guard7_;
  SEXP Rsh_Fir_reg_r20_;
  SEXP Rsh_Fir_reg_r21_;
  SEXP Rsh_Fir_reg_x12_;
  SEXP Rsh_Fir_reg_x13_;
  SEXP Rsh_Fir_reg_r22_;
  SEXP Rsh_Fir_reg_sym8_;
  SEXP Rsh_Fir_reg_base8_;
  SEXP Rsh_Fir_reg_guard8_;
  SEXP Rsh_Fir_reg_r23_;
  SEXP Rsh_Fir_reg_r24_;
  SEXP Rsh_Fir_reg_x14_;
  SEXP Rsh_Fir_reg_x15_;
  SEXP Rsh_Fir_reg_r25_;
  SEXP Rsh_Fir_reg_sym9_;
  SEXP Rsh_Fir_reg_base9_;
  SEXP Rsh_Fir_reg_guard9_;
  SEXP Rsh_Fir_reg_r26_;
  SEXP Rsh_Fir_reg_r27_;
  SEXP Rsh_Fir_reg_x16_;
  SEXP Rsh_Fir_reg_x17_;
  SEXP Rsh_Fir_reg_r28_;
  SEXP Rsh_Fir_reg_sym10_;
  SEXP Rsh_Fir_reg_base10_;
  SEXP Rsh_Fir_reg_guard10_;
  SEXP Rsh_Fir_reg_r29_;
  SEXP Rsh_Fir_reg_r30_;
  SEXP Rsh_Fir_reg_x18_;
  SEXP Rsh_Fir_reg_x19_;
  SEXP Rsh_Fir_reg_r31_;
  SEXP Rsh_Fir_reg_sym11_;
  SEXP Rsh_Fir_reg_base11_;
  SEXP Rsh_Fir_reg_guard11_;
  SEXP Rsh_Fir_reg_r32_;
  SEXP Rsh_Fir_reg_r33_;
  SEXP Rsh_Fir_reg_x20_;
  SEXP Rsh_Fir_reg_x21_;
  SEXP Rsh_Fir_reg_r34_;
  SEXP Rsh_Fir_reg_sym12_;
  SEXP Rsh_Fir_reg_base12_;
  SEXP Rsh_Fir_reg_guard12_;
  SEXP Rsh_Fir_reg_r35_;
  SEXP Rsh_Fir_reg_r36_;
  SEXP Rsh_Fir_reg_x22_;
  SEXP Rsh_Fir_reg_x23_;
  SEXP Rsh_Fir_reg_r37_;
  SEXP Rsh_Fir_reg_sym13_;
  SEXP Rsh_Fir_reg_base13_;
  SEXP Rsh_Fir_reg_guard13_;
  SEXP Rsh_Fir_reg_r38_;
  SEXP Rsh_Fir_reg_r39_;
  SEXP Rsh_Fir_reg_x24_;
  SEXP Rsh_Fir_reg_x25_;
  SEXP Rsh_Fir_reg_r40_;
  SEXP Rsh_Fir_reg_sym14_;
  SEXP Rsh_Fir_reg_base14_;
  SEXP Rsh_Fir_reg_guard14_;
  SEXP Rsh_Fir_reg_r41_;
  SEXP Rsh_Fir_reg_r42_;
  SEXP Rsh_Fir_reg_x26_;
  SEXP Rsh_Fir_reg_x27_;
  SEXP Rsh_Fir_reg_r43_;
  SEXP Rsh_Fir_reg_sym15_;
  SEXP Rsh_Fir_reg_base15_;
  SEXP Rsh_Fir_reg_guard15_;
  SEXP Rsh_Fir_reg_r44_;
  SEXP Rsh_Fir_reg_r45_;
  SEXP Rsh_Fir_reg_x28_;
  SEXP Rsh_Fir_reg_x29_;
  SEXP Rsh_Fir_reg_r46_;
  SEXP Rsh_Fir_reg_sym16_;
  SEXP Rsh_Fir_reg_base16_;
  SEXP Rsh_Fir_reg_guard16_;
  SEXP Rsh_Fir_reg_r47_;
  SEXP Rsh_Fir_reg_r48_;
  SEXP Rsh_Fir_reg_x30_;
  SEXP Rsh_Fir_reg_x31_;
  SEXP Rsh_Fir_reg_r49_;
  SEXP Rsh_Fir_reg_sym17_;
  SEXP Rsh_Fir_reg_base17_;
  SEXP Rsh_Fir_reg_guard17_;
  SEXP Rsh_Fir_reg_r50_;
  SEXP Rsh_Fir_reg_r51_;
  SEXP Rsh_Fir_reg_x32_;
  SEXP Rsh_Fir_reg_x33_;
  SEXP Rsh_Fir_reg_r52_;
  SEXP Rsh_Fir_reg_sym18_;
  SEXP Rsh_Fir_reg_base18_;
  SEXP Rsh_Fir_reg_guard18_;
  SEXP Rsh_Fir_reg_r53_;
  SEXP Rsh_Fir_reg_r54_;
  SEXP Rsh_Fir_reg_x34_;
  SEXP Rsh_Fir_reg_x35_;
  SEXP Rsh_Fir_reg_r55_;
  SEXP Rsh_Fir_reg_sym19_;
  SEXP Rsh_Fir_reg_base19_;
  SEXP Rsh_Fir_reg_guard19_;
  SEXP Rsh_Fir_reg_r56_;
  SEXP Rsh_Fir_reg_r57_;
  SEXP Rsh_Fir_reg_x36_;
  SEXP Rsh_Fir_reg_x37_;
  SEXP Rsh_Fir_reg_r58_;
  SEXP Rsh_Fir_reg_sym20_;
  SEXP Rsh_Fir_reg_base20_;
  SEXP Rsh_Fir_reg_guard20_;
  SEXP Rsh_Fir_reg_r59_;
  SEXP Rsh_Fir_reg_r60_;
  SEXP Rsh_Fir_reg_x38_;
  SEXP Rsh_Fir_reg_x39_;
  SEXP Rsh_Fir_reg_r61_;
  SEXP Rsh_Fir_reg_sym21_;
  SEXP Rsh_Fir_reg_base21_;
  SEXP Rsh_Fir_reg_guard21_;
  SEXP Rsh_Fir_reg_r62_;
  SEXP Rsh_Fir_reg_r63_;
  SEXP Rsh_Fir_reg_x40_;
  SEXP Rsh_Fir_reg_x41_;
  SEXP Rsh_Fir_reg_r64_;
  SEXP Rsh_Fir_reg_sym22_;
  SEXP Rsh_Fir_reg_base22_;
  SEXP Rsh_Fir_reg_guard22_;
  SEXP Rsh_Fir_reg_r65_;
  SEXP Rsh_Fir_reg_r66_;
  SEXP Rsh_Fir_reg_x42_;
  SEXP Rsh_Fir_reg_x43_;
  SEXP Rsh_Fir_reg_r67_;
  SEXP Rsh_Fir_reg_sym23_;
  SEXP Rsh_Fir_reg_base23_;
  SEXP Rsh_Fir_reg_guard23_;
  SEXP Rsh_Fir_reg_r68_;
  SEXP Rsh_Fir_reg_r69_;
  SEXP Rsh_Fir_reg_x44_;
  SEXP Rsh_Fir_reg_x45_;
  SEXP Rsh_Fir_reg_r70_;
  SEXP Rsh_Fir_reg_sym24_;
  SEXP Rsh_Fir_reg_base24_;
  SEXP Rsh_Fir_reg_guard24_;
  SEXP Rsh_Fir_reg_r71_;
  SEXP Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_reg_x46_;
  SEXP Rsh_Fir_reg_x47_;
  SEXP Rsh_Fir_reg_r73_;
  SEXP Rsh_Fir_reg_list;
  SEXP Rsh_Fir_reg_r74_;

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = 42.0
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_const(CCP, 0), RHO);
  (void)(Rsh_const(CCP, 0));
  // sym = ldf list
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 2), RHO);
  // base = ldf list in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args[2];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args);
  // if guard then L25() else L26()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L25()
    goto L25_;
  } else {
  // L26()
    goto L26_;
  }

L0_:;
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return r1
  return Rsh_Fir_reg_r1_;

L1_:;
  // sym2 = ldf ceiling
  Rsh_Fir_reg_sym2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // base2 = ldf ceiling in base
  Rsh_Fir_reg_base2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 3), RHO);
  // guard2 = `==`.4(sym2, base2)
  SEXP Rsh_Fir_array_args1[2];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_sym2_;
  Rsh_Fir_array_args1[1] = Rsh_Fir_reg_base2_;
  Rsh_Fir_reg_guard2_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args1);
  // if guard2 then L30() else L31()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard2_)) {
  // L30()
    goto L30_;
  } else {
  // L31()
    goto L31_;
  }

L2_:;
  // sym3 = ldf sign
  Rsh_Fir_reg_sym3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 4), RHO);
  // base3 = ldf sign in base
  Rsh_Fir_reg_base3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 4), RHO);
  // guard3 = `==`.4(sym3, base3)
  SEXP Rsh_Fir_array_args2[2];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_sym3_;
  Rsh_Fir_array_args2[1] = Rsh_Fir_reg_base3_;
  Rsh_Fir_reg_guard3_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args2);
  // if guard3 then L33() else L34()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard3_)) {
  // L33()
    goto L33_;
  } else {
  // L34()
    goto L34_;
  }

L3_:;
  // sym4 = ldf expm1
  Rsh_Fir_reg_sym4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 5), RHO);
  // base4 = ldf expm1 in base
  Rsh_Fir_reg_base4_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 5), RHO);
  // guard4 = `==`.4(sym4, base4)
  SEXP Rsh_Fir_array_args3[2];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_sym4_;
  Rsh_Fir_array_args3[1] = Rsh_Fir_reg_base4_;
  Rsh_Fir_reg_guard4_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args3);
  // if guard4 then L36() else L37()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard4_)) {
  // L36()
    goto L36_;
  } else {
  // L37()
    goto L37_;
  }

L4_:;
  // sym5 = ldf log1p
  Rsh_Fir_reg_sym5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 6), RHO);
  // base5 = ldf log1p in base
  Rsh_Fir_reg_base5_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 6), RHO);
  // guard5 = `==`.4(sym5, base5)
  SEXP Rsh_Fir_array_args4[2];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_sym5_;
  Rsh_Fir_array_args4[1] = Rsh_Fir_reg_base5_;
  Rsh_Fir_reg_guard5_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args4);
  // if guard5 then L39() else L40()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard5_)) {
  // L39()
    goto L39_;
  } else {
  // L40()
    goto L40_;
  }

L5_:;
  // sym6 = ldf cos
  Rsh_Fir_reg_sym6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 7), RHO);
  // base6 = ldf cos in base
  Rsh_Fir_reg_base6_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // guard6 = `==`.4(sym6, base6)
  SEXP Rsh_Fir_array_args5[2];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_sym6_;
  Rsh_Fir_array_args5[1] = Rsh_Fir_reg_base6_;
  Rsh_Fir_reg_guard6_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args5);
  // if guard6 then L42() else L43()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard6_)) {
  // L42()
    goto L42_;
  } else {
  // L43()
    goto L43_;
  }

L6_:;
  // sym7 = ldf sin
  Rsh_Fir_reg_sym7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 8), RHO);
  // base7 = ldf sin in base
  Rsh_Fir_reg_base7_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 8), RHO);
  // guard7 = `==`.4(sym7, base7)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_Fir_reg_sym7_;
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_base7_;
  Rsh_Fir_reg_guard7_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args6);
  // if guard7 then L45() else L46()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard7_)) {
  // L45()
    goto L45_;
  } else {
  // L46()
    goto L46_;
  }

L7_:;
  // sym8 = ldf tan
  Rsh_Fir_reg_sym8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 9), RHO);
  // base8 = ldf tan in base
  Rsh_Fir_reg_base8_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 9), RHO);
  // guard8 = `==`.4(sym8, base8)
  SEXP Rsh_Fir_array_args7[2];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_sym8_;
  Rsh_Fir_array_args7[1] = Rsh_Fir_reg_base8_;
  Rsh_Fir_reg_guard8_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args7);
  // if guard8 then L48() else L49()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard8_)) {
  // L48()
    goto L48_;
  } else {
  // L49()
    goto L49_;
  }

L8_:;
  // sym9 = ldf acos
  Rsh_Fir_reg_sym9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base9 = ldf acos in base
  Rsh_Fir_reg_base9_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard9 = `==`.4(sym9, base9)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_sym9_;
  Rsh_Fir_array_args8[1] = Rsh_Fir_reg_base9_;
  Rsh_Fir_reg_guard9_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args8);
  // if guard9 then L51() else L52()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard9_)) {
  // L51()
    goto L51_;
  } else {
  // L52()
    goto L52_;
  }

L9_:;
  // sym10 = ldf asin
  Rsh_Fir_reg_sym10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 11), RHO);
  // base10 = ldf asin in base
  Rsh_Fir_reg_base10_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 11), RHO);
  // guard10 = `==`.4(sym10, base10)
  SEXP Rsh_Fir_array_args9[2];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_sym10_;
  Rsh_Fir_array_args9[1] = Rsh_Fir_reg_base10_;
  Rsh_Fir_reg_guard10_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args9);
  // if guard10 then L54() else L55()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard10_)) {
  // L54()
    goto L54_;
  } else {
  // L55()
    goto L55_;
  }

L10_:;
  // sym11 = ldf atan
  Rsh_Fir_reg_sym11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 12), RHO);
  // base11 = ldf atan in base
  Rsh_Fir_reg_base11_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 12), RHO);
  // guard11 = `==`.4(sym11, base11)
  SEXP Rsh_Fir_array_args10[2];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_sym11_;
  Rsh_Fir_array_args10[1] = Rsh_Fir_reg_base11_;
  Rsh_Fir_reg_guard11_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args10);
  // if guard11 then L57() else L58()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard11_)) {
  // L57()
    goto L57_;
  } else {
  // L58()
    goto L58_;
  }

L11_:;
  // sym12 = ldf cosh
  Rsh_Fir_reg_sym12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 13), RHO);
  // base12 = ldf cosh in base
  Rsh_Fir_reg_base12_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 13), RHO);
  // guard12 = `==`.4(sym12, base12)
  SEXP Rsh_Fir_array_args11[2];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_sym12_;
  Rsh_Fir_array_args11[1] = Rsh_Fir_reg_base12_;
  Rsh_Fir_reg_guard12_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args11);
  // if guard12 then L60() else L61()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard12_)) {
  // L60()
    goto L60_;
  } else {
  // L61()
    goto L61_;
  }

L12_:;
  // sym13 = ldf sinh
  Rsh_Fir_reg_sym13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base13 = ldf sinh in base
  Rsh_Fir_reg_base13_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard13 = `==`.4(sym13, base13)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_Fir_reg_sym13_;
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_base13_;
  Rsh_Fir_reg_guard13_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args12);
  // if guard13 then L63() else L64()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard13_)) {
  // L63()
    goto L63_;
  } else {
  // L64()
    goto L64_;
  }

L13_:;
  // sym14 = ldf tanh
  Rsh_Fir_reg_sym14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 15), RHO);
  // base14 = ldf tanh in base
  Rsh_Fir_reg_base14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 15), RHO);
  // guard14 = `==`.4(sym14, base14)
  SEXP Rsh_Fir_array_args13[2];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_sym14_;
  Rsh_Fir_array_args13[1] = Rsh_Fir_reg_base14_;
  Rsh_Fir_reg_guard14_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args13);
  // if guard14 then L66() else L67()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard14_)) {
  // L66()
    goto L66_;
  } else {
  // L67()
    goto L67_;
  }

L14_:;
  // sym15 = ldf acosh
  Rsh_Fir_reg_sym15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 16), RHO);
  // base15 = ldf acosh in base
  Rsh_Fir_reg_base15_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 16), RHO);
  // guard15 = `==`.4(sym15, base15)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_sym15_;
  Rsh_Fir_array_args14[1] = Rsh_Fir_reg_base15_;
  Rsh_Fir_reg_guard15_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args14);
  // if guard15 then L69() else L70()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard15_)) {
  // L69()
    goto L69_;
  } else {
  // L70()
    goto L70_;
  }

L15_:;
  // sym16 = ldf asinh
  Rsh_Fir_reg_sym16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 17), RHO);
  // base16 = ldf asinh in base
  Rsh_Fir_reg_base16_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 17), RHO);
  // guard16 = `==`.4(sym16, base16)
  SEXP Rsh_Fir_array_args15[2];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_sym16_;
  Rsh_Fir_array_args15[1] = Rsh_Fir_reg_base16_;
  Rsh_Fir_reg_guard16_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args15);
  // if guard16 then L72() else L73()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard16_)) {
  // L72()
    goto L72_;
  } else {
  // L73()
    goto L73_;
  }

L16_:;
  // sym17 = ldf atanh
  Rsh_Fir_reg_sym17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 18), RHO);
  // base17 = ldf atanh in base
  Rsh_Fir_reg_base17_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 18), RHO);
  // guard17 = `==`.4(sym17, base17)
  SEXP Rsh_Fir_array_args16[2];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_sym17_;
  Rsh_Fir_array_args16[1] = Rsh_Fir_reg_base17_;
  Rsh_Fir_reg_guard17_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args16);
  // if guard17 then L75() else L76()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard17_)) {
  // L75()
    goto L75_;
  } else {
  // L76()
    goto L76_;
  }

L17_:;
  // sym18 = ldf lgamma
  Rsh_Fir_reg_sym18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 19), RHO);
  // base18 = ldf lgamma in base
  Rsh_Fir_reg_base18_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 19), RHO);
  // guard18 = `==`.4(sym18, base18)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_Fir_reg_sym18_;
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_base18_;
  Rsh_Fir_reg_guard18_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args17);
  // if guard18 then L78() else L79()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard18_)) {
  // L78()
    goto L78_;
  } else {
  // L79()
    goto L79_;
  }

L18_:;
  // sym19 = ldf gamma
  Rsh_Fir_reg_sym19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // base19 = ldf gamma in base
  Rsh_Fir_reg_base19_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 20), RHO);
  // guard19 = `==`.4(sym19, base19)
  SEXP Rsh_Fir_array_args18[2];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_sym19_;
  Rsh_Fir_array_args18[1] = Rsh_Fir_reg_base19_;
  Rsh_Fir_reg_guard19_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args18);
  // if guard19 then L81() else L82()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard19_)) {
  // L81()
    goto L81_;
  } else {
  // L82()
    goto L82_;
  }

L19_:;
  // sym20 = ldf digamma
  Rsh_Fir_reg_sym20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 21), RHO);
  // base20 = ldf digamma in base
  Rsh_Fir_reg_base20_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 21), RHO);
  // guard20 = `==`.4(sym20, base20)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_sym20_;
  Rsh_Fir_array_args19[1] = Rsh_Fir_reg_base20_;
  Rsh_Fir_reg_guard20_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args19);
  // if guard20 then L84() else L85()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard20_)) {
  // L84()
    goto L84_;
  } else {
  // L85()
    goto L85_;
  }

L20_:;
  // sym21 = ldf trigamma
  Rsh_Fir_reg_sym21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 22), RHO);
  // base21 = ldf trigamma in base
  Rsh_Fir_reg_base21_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 22), RHO);
  // guard21 = `==`.4(sym21, base21)
  SEXP Rsh_Fir_array_args20[2];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_sym21_;
  Rsh_Fir_array_args20[1] = Rsh_Fir_reg_base21_;
  Rsh_Fir_reg_guard21_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args20);
  // if guard21 then L87() else L88()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard21_)) {
  // L87()
    goto L87_;
  } else {
  // L88()
    goto L88_;
  }

L21_:;
  // sym22 = ldf cospi
  Rsh_Fir_reg_sym22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 23), RHO);
  // base22 = ldf cospi in base
  Rsh_Fir_reg_base22_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 23), RHO);
  // guard22 = `==`.4(sym22, base22)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_Fir_reg_sym22_;
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_base22_;
  Rsh_Fir_reg_guard22_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args21);
  // if guard22 then L90() else L91()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard22_)) {
  // L90()
    goto L90_;
  } else {
  // L91()
    goto L91_;
  }

L22_:;
  // sym23 = ldf sinpi
  Rsh_Fir_reg_sym23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 24), RHO);
  // base23 = ldf sinpi in base
  Rsh_Fir_reg_base23_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 24), RHO);
  // guard23 = `==`.4(sym23, base23)
  SEXP Rsh_Fir_array_args22[2];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_sym23_;
  Rsh_Fir_array_args22[1] = Rsh_Fir_reg_base23_;
  Rsh_Fir_reg_guard23_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args22);
  // if guard23 then L93() else L94()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard23_)) {
  // L93()
    goto L93_;
  } else {
  // L94()
    goto L94_;
  }

L23_:;
  // sym24 = ldf tanpi
  Rsh_Fir_reg_sym24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 25), RHO);
  // base24 = ldf tanpi in base
  Rsh_Fir_reg_base24_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 25), RHO);
  // guard24 = `==`.4(sym24, base24)
  SEXP Rsh_Fir_array_args23[2];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_sym24_;
  Rsh_Fir_array_args23[1] = Rsh_Fir_reg_base24_;
  Rsh_Fir_reg_guard24_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args23);
  // if guard24 then L96() else L97()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard24_)) {
  // L96()
    goto L96_;
  } else {
  // L97()
    goto L97_;
  }

L24_:;
  // list = ldf list in base
  Rsh_Fir_reg_list = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 2), RHO);
  // r74 = dyn list(r3, r6, r9, r12, r15, r18, r21, r24, r27, r30, r33, r36, r39, r42, r45, r48, r51, r54, r57, r60, r63, r66, r69, r72)
  SEXP Rsh_Fir_array_args24[24];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_r3_;
  Rsh_Fir_array_args24[1] = Rsh_Fir_reg_r6_;
  Rsh_Fir_array_args24[2] = Rsh_Fir_reg_r9_;
  Rsh_Fir_array_args24[3] = Rsh_Fir_reg_r12_;
  Rsh_Fir_array_args24[4] = Rsh_Fir_reg_r15_;
  Rsh_Fir_array_args24[5] = Rsh_Fir_reg_r18_;
  Rsh_Fir_array_args24[6] = Rsh_Fir_reg_r21_;
  Rsh_Fir_array_args24[7] = Rsh_Fir_reg_r24_;
  Rsh_Fir_array_args24[8] = Rsh_Fir_reg_r27_;
  Rsh_Fir_array_args24[9] = Rsh_Fir_reg_r30_;
  Rsh_Fir_array_args24[10] = Rsh_Fir_reg_r33_;
  Rsh_Fir_array_args24[11] = Rsh_Fir_reg_r36_;
  Rsh_Fir_array_args24[12] = Rsh_Fir_reg_r39_;
  Rsh_Fir_array_args24[13] = Rsh_Fir_reg_r42_;
  Rsh_Fir_array_args24[14] = Rsh_Fir_reg_r45_;
  Rsh_Fir_array_args24[15] = Rsh_Fir_reg_r48_;
  Rsh_Fir_array_args24[16] = Rsh_Fir_reg_r51_;
  Rsh_Fir_array_args24[17] = Rsh_Fir_reg_r54_;
  Rsh_Fir_array_args24[18] = Rsh_Fir_reg_r57_;
  Rsh_Fir_array_args24[19] = Rsh_Fir_reg_r60_;
  Rsh_Fir_array_args24[20] = Rsh_Fir_reg_r63_;
  Rsh_Fir_array_args24[21] = Rsh_Fir_reg_r66_;
  Rsh_Fir_array_args24[22] = Rsh_Fir_reg_r69_;
  Rsh_Fir_array_args24[23] = Rsh_Fir_reg_r72_;
  SEXP Rsh_Fir_array_arg_names[24];
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
  Rsh_Fir_array_arg_names[14] = R_MissingArg;
  Rsh_Fir_array_arg_names[15] = R_MissingArg;
  Rsh_Fir_array_arg_names[16] = R_MissingArg;
  Rsh_Fir_array_arg_names[17] = R_MissingArg;
  Rsh_Fir_array_arg_names[18] = R_MissingArg;
  Rsh_Fir_array_arg_names[19] = R_MissingArg;
  Rsh_Fir_array_arg_names[20] = R_MissingArg;
  Rsh_Fir_array_arg_names[21] = R_MissingArg;
  Rsh_Fir_array_arg_names[22] = R_MissingArg;
  Rsh_Fir_array_arg_names[23] = R_MissingArg;
  Rsh_Fir_reg_r74_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_list, 24, Rsh_Fir_array_args24, Rsh_Fir_array_arg_names, CCP, RHO);
  // check L99() else D24()
  // L99()
  goto L99_;

L25_:;
  // sym1 = ldf floor
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 26), RHO);
  // base1 = ldf floor in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 26), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args25[2];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args25[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args25);
  // if guard1 then L27() else L28()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L27()
    goto L27_;
  } else {
  // L28()
    goto L28_;
  }

L26_:;
  // r = dyn base(<lang floor(x)>, <lang ceiling(x)>, <lang sign(x)>, <lang expm1(x)>, <lang log1p(x)>, <lang cos(x)>, <lang sin(x)>, <lang tan(x)>, <lang acos(x)>, <lang asin(x)>, <lang atan(x)>, <lang cosh(x)>, <lang sinh(x)>, <lang tanh(x)>, <lang acosh(x)>, <lang asinh(x)>, <lang atanh(x)>, <lang lgamma(x)>, <lang gamma(x)>, <lang digamma(x)>, <lang trigamma(x)>, <lang cospi(x)>, <lang sinpi(x)>, <lang tanpi(x)>)
  SEXP Rsh_Fir_array_args26[24];
  Rsh_Fir_array_args26[0] = Rsh_const(CCP, 27);
  Rsh_Fir_array_args26[1] = Rsh_const(CCP, 28);
  Rsh_Fir_array_args26[2] = Rsh_const(CCP, 29);
  Rsh_Fir_array_args26[3] = Rsh_const(CCP, 30);
  Rsh_Fir_array_args26[4] = Rsh_const(CCP, 31);
  Rsh_Fir_array_args26[5] = Rsh_const(CCP, 32);
  Rsh_Fir_array_args26[6] = Rsh_const(CCP, 33);
  Rsh_Fir_array_args26[7] = Rsh_const(CCP, 34);
  Rsh_Fir_array_args26[8] = Rsh_const(CCP, 35);
  Rsh_Fir_array_args26[9] = Rsh_const(CCP, 36);
  Rsh_Fir_array_args26[10] = Rsh_const(CCP, 37);
  Rsh_Fir_array_args26[11] = Rsh_const(CCP, 38);
  Rsh_Fir_array_args26[12] = Rsh_const(CCP, 39);
  Rsh_Fir_array_args26[13] = Rsh_const(CCP, 40);
  Rsh_Fir_array_args26[14] = Rsh_const(CCP, 41);
  Rsh_Fir_array_args26[15] = Rsh_const(CCP, 42);
  Rsh_Fir_array_args26[16] = Rsh_const(CCP, 43);
  Rsh_Fir_array_args26[17] = Rsh_const(CCP, 44);
  Rsh_Fir_array_args26[18] = Rsh_const(CCP, 45);
  Rsh_Fir_array_args26[19] = Rsh_const(CCP, 46);
  Rsh_Fir_array_args26[20] = Rsh_const(CCP, 47);
  Rsh_Fir_array_args26[21] = Rsh_const(CCP, 48);
  Rsh_Fir_array_args26[22] = Rsh_const(CCP, 49);
  Rsh_Fir_array_args26[23] = Rsh_const(CCP, 50);
  SEXP Rsh_Fir_array_arg_names1[24];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_array_arg_names1[2] = R_MissingArg;
  Rsh_Fir_array_arg_names1[3] = R_MissingArg;
  Rsh_Fir_array_arg_names1[4] = R_MissingArg;
  Rsh_Fir_array_arg_names1[5] = R_MissingArg;
  Rsh_Fir_array_arg_names1[6] = R_MissingArg;
  Rsh_Fir_array_arg_names1[7] = R_MissingArg;
  Rsh_Fir_array_arg_names1[8] = R_MissingArg;
  Rsh_Fir_array_arg_names1[9] = R_MissingArg;
  Rsh_Fir_array_arg_names1[10] = R_MissingArg;
  Rsh_Fir_array_arg_names1[11] = R_MissingArg;
  Rsh_Fir_array_arg_names1[12] = R_MissingArg;
  Rsh_Fir_array_arg_names1[13] = R_MissingArg;
  Rsh_Fir_array_arg_names1[14] = R_MissingArg;
  Rsh_Fir_array_arg_names1[15] = R_MissingArg;
  Rsh_Fir_array_arg_names1[16] = R_MissingArg;
  Rsh_Fir_array_arg_names1[17] = R_MissingArg;
  Rsh_Fir_array_arg_names1[18] = R_MissingArg;
  Rsh_Fir_array_arg_names1[19] = R_MissingArg;
  Rsh_Fir_array_arg_names1[20] = R_MissingArg;
  Rsh_Fir_array_arg_names1[21] = R_MissingArg;
  Rsh_Fir_array_arg_names1[22] = R_MissingArg;
  Rsh_Fir_array_arg_names1[23] = R_MissingArg;
  Rsh_Fir_reg_r = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 24, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L0(r)
  // L0(r)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r;
  goto L0_;

L27_:;
  // x = ld x
  Rsh_Fir_reg_x = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L29() else D0()
  // L29()
  goto L29_;

L28_:;
  // r2 = dyn base1(<sym x>)
  SEXP Rsh_Fir_array_args27[1];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names2[1];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args27, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L1(r2)
  // L1(r2)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r2_;
  goto L1_;

D0_:;
  // deopt 6 [x]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_x;
  Rsh_Fir_deopt(6, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L29_:;
  // x1 = force? x
  Rsh_Fir_reg_x1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x);
  // checkMissing(x1)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_x1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty()));
  // r4 = floor(x1)
  SEXP Rsh_Fir_array_args29[1];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x1_;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_builtin(167, RHO, 1, Rsh_Fir_array_args29);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_r3_ = Rsh_Fir_reg_r4_;
  goto L1_;

L30_:;
  // x2 = ld x
  Rsh_Fir_reg_x2_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L32() else D1()
  // L32()
  goto L32_;

L31_:;
  // r5 = dyn base2(<sym x>)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names3[1];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base2_, 1, Rsh_Fir_array_args30, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r5)
  // L2(r5)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r5_;
  goto L2_;

D1_:;
  // deopt 10 [x2]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L32_:;
  // x3 = force? x2
  Rsh_Fir_reg_x3_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x2_);
  // checkMissing(x3)
  SEXP Rsh_Fir_array_args31[1];
  Rsh_Fir_array_args31[0] = Rsh_Fir_reg_x3_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args31, Rsh_Fir_param_types_empty()));
  // r7 = ceiling(x3)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_x3_;
  Rsh_Fir_reg_r7_ = Rsh_Fir_call_builtin(168, RHO, 1, Rsh_Fir_array_args32);
  // goto L2(r7)
  // L2(r7)
  Rsh_Fir_reg_r6_ = Rsh_Fir_reg_r7_;
  goto L2_;

L33_:;
  // x4 = ld x
  Rsh_Fir_reg_x4_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L35() else D2()
  // L35()
  goto L35_;

L34_:;
  // r8 = dyn base3(<sym x>)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names4[1];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base3_, 1, Rsh_Fir_array_args33, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L3(r8)
  // L3(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L3_;

D2_:;
  // deopt 14 [x4]
  SEXP Rsh_Fir_array_deopt_stack2[1];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_deopt(14, 1, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L35_:;
  // x5 = force? x4
  Rsh_Fir_reg_x5_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x4_);
  // checkMissing(x5)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x5_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty()));
  // r10 = sign(x5)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_x5_;
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(170, RHO, 1, Rsh_Fir_array_args35);
  // goto L3(r10)
  // L3(r10)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r10_;
  goto L3_;

L36_:;
  // x6 = ld x
  Rsh_Fir_reg_x6_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L38() else D3()
  // L38()
  goto L38_;

L37_:;
  // r11 = dyn base4(<sym x>)
  SEXP Rsh_Fir_array_args36[1];
  Rsh_Fir_array_args36[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names5[1];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base4_, 1, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L4(r11)
  // L4(r11)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r11_;
  goto L4_;

D3_:;
  // deopt 18 [x6]
  SEXP Rsh_Fir_array_deopt_stack3[1];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_deopt(18, 1, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L38_:;
  // x7 = force? x6
  Rsh_Fir_reg_x7_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x6_);
  // checkMissing(x7)
  SEXP Rsh_Fir_array_args37[1];
  Rsh_Fir_array_args37[0] = Rsh_Fir_reg_x7_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args37, Rsh_Fir_param_types_empty()));
  // r13 = expm1(x7)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_x7_;
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(173, RHO, 1, Rsh_Fir_array_args38);
  // goto L4(r13)
  // L4(r13)
  Rsh_Fir_reg_r12_ = Rsh_Fir_reg_r13_;
  goto L4_;

L39_:;
  // x8 = ld x
  Rsh_Fir_reg_x8_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L41() else D4()
  // L41()
  goto L41_;

L40_:;
  // r14 = dyn base5(<sym x>)
  SEXP Rsh_Fir_array_args39[1];
  Rsh_Fir_array_args39[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base5_, 1, Rsh_Fir_array_args39, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L5(r14)
  // L5(r14)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L5_;

D4_:;
  // deopt 22 [x8]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_deopt(22, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L41_:;
  // x9 = force? x8
  Rsh_Fir_reg_x9_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x8_);
  // checkMissing(x9)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_x9_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty()));
  // r16 = log1p(x9)
  SEXP Rsh_Fir_array_args41[1];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_x9_;
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(174, RHO, 1, Rsh_Fir_array_args41);
  // goto L5(r16)
  // L5(r16)
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r16_;
  goto L5_;

L42_:;
  // x10 = ld x
  Rsh_Fir_reg_x10_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L44() else D5()
  // L44()
  goto L44_;

L43_:;
  // r17 = dyn base6(<sym x>)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base6_, 1, Rsh_Fir_array_args42, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L6(r17)
  // L6(r17)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r17_;
  goto L6_;

D5_:;
  // deopt 26 [x10]
  SEXP Rsh_Fir_array_deopt_stack5[1];
  Rsh_Fir_array_deopt_stack5[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_deopt(26, 1, Rsh_Fir_array_deopt_stack5, CCP, RHO);
  return R_NilValue;

L44_:;
  // x11 = force? x10
  Rsh_Fir_reg_x11_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x10_);
  // checkMissing(x11)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x11_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty()));
  // r19 = cos(x11)
  SEXP Rsh_Fir_array_args44[1];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_x11_;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_builtin(175, RHO, 1, Rsh_Fir_array_args44);
  // goto L6(r19)
  // L6(r19)
  Rsh_Fir_reg_r18_ = Rsh_Fir_reg_r19_;
  goto L6_;

L45_:;
  // x12 = ld x
  Rsh_Fir_reg_x12_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L47() else D6()
  // L47()
  goto L47_;

L46_:;
  // r20 = dyn base7(<sym x>)
  SEXP Rsh_Fir_array_args45[1];
  Rsh_Fir_array_args45[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names8[1];
  Rsh_Fir_array_arg_names8[0] = R_MissingArg;
  Rsh_Fir_reg_r20_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base7_, 1, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names8, CCP, RHO);
  // goto L7(r20)
  // L7(r20)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r20_;
  goto L7_;

D6_:;
  // deopt 30 [x12]
  SEXP Rsh_Fir_array_deopt_stack6[1];
  Rsh_Fir_array_deopt_stack6[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_deopt(30, 1, Rsh_Fir_array_deopt_stack6, CCP, RHO);
  return R_NilValue;

L47_:;
  // x13 = force? x12
  Rsh_Fir_reg_x13_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x12_);
  // checkMissing(x13)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x13_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // r22 = sin(x13)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x13_;
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(176, RHO, 1, Rsh_Fir_array_args47);
  // goto L7(r22)
  // L7(r22)
  Rsh_Fir_reg_r21_ = Rsh_Fir_reg_r22_;
  goto L7_;

L48_:;
  // x14 = ld x
  Rsh_Fir_reg_x14_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L50() else D7()
  // L50()
  goto L50_;

L49_:;
  // r23 = dyn base8(<sym x>)
  SEXP Rsh_Fir_array_args48[1];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names9[1];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base8_, 1, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names9, CCP, RHO);
  // goto L8(r23)
  // L8(r23)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r23_;
  goto L8_;

D7_:;
  // deopt 34 [x14]
  SEXP Rsh_Fir_array_deopt_stack7[1];
  Rsh_Fir_array_deopt_stack7[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_deopt(34, 1, Rsh_Fir_array_deopt_stack7, CCP, RHO);
  return R_NilValue;

L50_:;
  // x15 = force? x14
  Rsh_Fir_reg_x15_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x14_);
  // checkMissing(x15)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_x15_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty()));
  // r25 = tan(x15)
  SEXP Rsh_Fir_array_args50[1];
  Rsh_Fir_array_args50[0] = Rsh_Fir_reg_x15_;
  Rsh_Fir_reg_r25_ = Rsh_Fir_call_builtin(177, RHO, 1, Rsh_Fir_array_args50);
  // goto L8(r25)
  // L8(r25)
  Rsh_Fir_reg_r24_ = Rsh_Fir_reg_r25_;
  goto L8_;

L51_:;
  // x16 = ld x
  Rsh_Fir_reg_x16_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L53() else D8()
  // L53()
  goto L53_;

L52_:;
  // r26 = dyn base9(<sym x>)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names10[1];
  Rsh_Fir_array_arg_names10[0] = R_MissingArg;
  Rsh_Fir_reg_r26_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base9_, 1, Rsh_Fir_array_args51, Rsh_Fir_array_arg_names10, CCP, RHO);
  // goto L9(r26)
  // L9(r26)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r26_;
  goto L9_;

D8_:;
  // deopt 38 [x16]
  SEXP Rsh_Fir_array_deopt_stack8[1];
  Rsh_Fir_array_deopt_stack8[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_deopt(38, 1, Rsh_Fir_array_deopt_stack8, CCP, RHO);
  return R_NilValue;

L53_:;
  // x17 = force? x16
  Rsh_Fir_reg_x17_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x16_);
  // checkMissing(x17)
  SEXP Rsh_Fir_array_args52[1];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_x17_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty()));
  // r28 = acos(x17)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_x17_;
  Rsh_Fir_reg_r28_ = Rsh_Fir_call_builtin(178, RHO, 1, Rsh_Fir_array_args53);
  // goto L9(r28)
  // L9(r28)
  Rsh_Fir_reg_r27_ = Rsh_Fir_reg_r28_;
  goto L9_;

L54_:;
  // x18 = ld x
  Rsh_Fir_reg_x18_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L56() else D9()
  // L56()
  goto L56_;

L55_:;
  // r29 = dyn base10(<sym x>)
  SEXP Rsh_Fir_array_args54[1];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names11[1];
  Rsh_Fir_array_arg_names11[0] = R_MissingArg;
  Rsh_Fir_reg_r29_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base10_, 1, Rsh_Fir_array_args54, Rsh_Fir_array_arg_names11, CCP, RHO);
  // goto L10(r29)
  // L10(r29)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r29_;
  goto L10_;

D9_:;
  // deopt 42 [x18]
  SEXP Rsh_Fir_array_deopt_stack9[1];
  Rsh_Fir_array_deopt_stack9[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_deopt(42, 1, Rsh_Fir_array_deopt_stack9, CCP, RHO);
  return R_NilValue;

L56_:;
  // x19 = force? x18
  Rsh_Fir_reg_x19_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x18_);
  // checkMissing(x19)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_x19_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty()));
  // r31 = asin(x19)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x19_;
  Rsh_Fir_reg_r31_ = Rsh_Fir_call_builtin(179, RHO, 1, Rsh_Fir_array_args56);
  // goto L10(r31)
  // L10(r31)
  Rsh_Fir_reg_r30_ = Rsh_Fir_reg_r31_;
  goto L10_;

L57_:;
  // x20 = ld x
  Rsh_Fir_reg_x20_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L59() else D10()
  // L59()
  goto L59_;

L58_:;
  // r32 = dyn base11(<sym x>)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names12[1];
  Rsh_Fir_array_arg_names12[0] = R_MissingArg;
  Rsh_Fir_reg_r32_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base11_, 1, Rsh_Fir_array_args57, Rsh_Fir_array_arg_names12, CCP, RHO);
  // goto L11(r32)
  // L11(r32)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r32_;
  goto L11_;

D10_:;
  // deopt 46 [x20]
  SEXP Rsh_Fir_array_deopt_stack10[1];
  Rsh_Fir_array_deopt_stack10[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_deopt(46, 1, Rsh_Fir_array_deopt_stack10, CCP, RHO);
  return R_NilValue;

L59_:;
  // x21 = force? x20
  Rsh_Fir_reg_x21_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x20_);
  // checkMissing(x21)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_x21_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty()));
  // r34 = atan(x21)
  SEXP Rsh_Fir_array_args59[1];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_x21_;
  Rsh_Fir_reg_r34_ = Rsh_Fir_call_builtin(180, RHO, 1, Rsh_Fir_array_args59);
  // goto L11(r34)
  // L11(r34)
  Rsh_Fir_reg_r33_ = Rsh_Fir_reg_r34_;
  goto L11_;

L60_:;
  // x22 = ld x
  Rsh_Fir_reg_x22_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L62() else D11()
  // L62()
  goto L62_;

L61_:;
  // r35 = dyn base12(<sym x>)
  SEXP Rsh_Fir_array_args60[1];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names13[1];
  Rsh_Fir_array_arg_names13[0] = R_MissingArg;
  Rsh_Fir_reg_r35_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base12_, 1, Rsh_Fir_array_args60, Rsh_Fir_array_arg_names13, CCP, RHO);
  // goto L12(r35)
  // L12(r35)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r35_;
  goto L12_;

D11_:;
  // deopt 50 [x22]
  SEXP Rsh_Fir_array_deopt_stack11[1];
  Rsh_Fir_array_deopt_stack11[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_deopt(50, 1, Rsh_Fir_array_deopt_stack11, CCP, RHO);
  return R_NilValue;

L62_:;
  // x23 = force? x22
  Rsh_Fir_reg_x23_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x22_);
  // checkMissing(x23)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_x23_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty()));
  // r37 = cosh(x23)
  SEXP Rsh_Fir_array_args62[1];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x23_;
  Rsh_Fir_reg_r37_ = Rsh_Fir_call_builtin(181, RHO, 1, Rsh_Fir_array_args62);
  // goto L12(r37)
  // L12(r37)
  Rsh_Fir_reg_r36_ = Rsh_Fir_reg_r37_;
  goto L12_;

L63_:;
  // x24 = ld x
  Rsh_Fir_reg_x24_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L65() else D12()
  // L65()
  goto L65_;

L64_:;
  // r38 = dyn base13(<sym x>)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names14[1];
  Rsh_Fir_array_arg_names14[0] = R_MissingArg;
  Rsh_Fir_reg_r38_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base13_, 1, Rsh_Fir_array_args63, Rsh_Fir_array_arg_names14, CCP, RHO);
  // goto L13(r38)
  // L13(r38)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r38_;
  goto L13_;

D12_:;
  // deopt 54 [x24]
  SEXP Rsh_Fir_array_deopt_stack12[1];
  Rsh_Fir_array_deopt_stack12[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_deopt(54, 1, Rsh_Fir_array_deopt_stack12, CCP, RHO);
  return R_NilValue;

L65_:;
  // x25 = force? x24
  Rsh_Fir_reg_x25_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x24_);
  // checkMissing(x25)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_x25_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty()));
  // r40 = sinh(x25)
  SEXP Rsh_Fir_array_args65[1];
  Rsh_Fir_array_args65[0] = Rsh_Fir_reg_x25_;
  Rsh_Fir_reg_r40_ = Rsh_Fir_call_builtin(182, RHO, 1, Rsh_Fir_array_args65);
  // goto L13(r40)
  // L13(r40)
  Rsh_Fir_reg_r39_ = Rsh_Fir_reg_r40_;
  goto L13_;

L66_:;
  // x26 = ld x
  Rsh_Fir_reg_x26_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L68() else D13()
  // L68()
  goto L68_;

L67_:;
  // r41 = dyn base14(<sym x>)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names15[1];
  Rsh_Fir_array_arg_names15[0] = R_MissingArg;
  Rsh_Fir_reg_r41_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base14_, 1, Rsh_Fir_array_args66, Rsh_Fir_array_arg_names15, CCP, RHO);
  // goto L14(r41)
  // L14(r41)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r41_;
  goto L14_;

D13_:;
  // deopt 58 [x26]
  SEXP Rsh_Fir_array_deopt_stack13[1];
  Rsh_Fir_array_deopt_stack13[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_deopt(58, 1, Rsh_Fir_array_deopt_stack13, CCP, RHO);
  return R_NilValue;

L68_:;
  // x27 = force? x26
  Rsh_Fir_reg_x27_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x26_);
  // checkMissing(x27)
  SEXP Rsh_Fir_array_args67[1];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x27_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty()));
  // r43 = tanh(x27)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_x27_;
  Rsh_Fir_reg_r43_ = Rsh_Fir_call_builtin(183, RHO, 1, Rsh_Fir_array_args68);
  // goto L14(r43)
  // L14(r43)
  Rsh_Fir_reg_r42_ = Rsh_Fir_reg_r43_;
  goto L14_;

L69_:;
  // x28 = ld x
  Rsh_Fir_reg_x28_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L71() else D14()
  // L71()
  goto L71_;

L70_:;
  // r44 = dyn base15(<sym x>)
  SEXP Rsh_Fir_array_args69[1];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names16[1];
  Rsh_Fir_array_arg_names16[0] = R_MissingArg;
  Rsh_Fir_reg_r44_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base15_, 1, Rsh_Fir_array_args69, Rsh_Fir_array_arg_names16, CCP, RHO);
  // goto L15(r44)
  // L15(r44)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r44_;
  goto L15_;

D14_:;
  // deopt 62 [x28]
  SEXP Rsh_Fir_array_deopt_stack14[1];
  Rsh_Fir_array_deopt_stack14[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_deopt(62, 1, Rsh_Fir_array_deopt_stack14, CCP, RHO);
  return R_NilValue;

L71_:;
  // x29 = force? x28
  Rsh_Fir_reg_x29_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x28_);
  // checkMissing(x29)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_x29_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty()));
  // r46 = acosh(x29)
  SEXP Rsh_Fir_array_args71[1];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_x29_;
  Rsh_Fir_reg_r46_ = Rsh_Fir_call_builtin(184, RHO, 1, Rsh_Fir_array_args71);
  // goto L15(r46)
  // L15(r46)
  Rsh_Fir_reg_r45_ = Rsh_Fir_reg_r46_;
  goto L15_;

L72_:;
  // x30 = ld x
  Rsh_Fir_reg_x30_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L74() else D15()
  // L74()
  goto L74_;

L73_:;
  // r47 = dyn base16(<sym x>)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names17[1];
  Rsh_Fir_array_arg_names17[0] = R_MissingArg;
  Rsh_Fir_reg_r47_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base16_, 1, Rsh_Fir_array_args72, Rsh_Fir_array_arg_names17, CCP, RHO);
  // goto L16(r47)
  // L16(r47)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r47_;
  goto L16_;

D15_:;
  // deopt 66 [x30]
  SEXP Rsh_Fir_array_deopt_stack15[1];
  Rsh_Fir_array_deopt_stack15[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_deopt(66, 1, Rsh_Fir_array_deopt_stack15, CCP, RHO);
  return R_NilValue;

L74_:;
  // x31 = force? x30
  Rsh_Fir_reg_x31_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x30_);
  // checkMissing(x31)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x31_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // r49 = asinh(x31)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x31_;
  Rsh_Fir_reg_r49_ = Rsh_Fir_call_builtin(185, RHO, 1, Rsh_Fir_array_args74);
  // goto L16(r49)
  // L16(r49)
  Rsh_Fir_reg_r48_ = Rsh_Fir_reg_r49_;
  goto L16_;

L75_:;
  // x32 = ld x
  Rsh_Fir_reg_x32_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L77() else D16()
  // L77()
  goto L77_;

L76_:;
  // r50 = dyn base17(<sym x>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names18[1];
  Rsh_Fir_array_arg_names18[0] = R_MissingArg;
  Rsh_Fir_reg_r50_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base17_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names18, CCP, RHO);
  // goto L17(r50)
  // L17(r50)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r50_;
  goto L17_;

D16_:;
  // deopt 70 [x32]
  SEXP Rsh_Fir_array_deopt_stack16[1];
  Rsh_Fir_array_deopt_stack16[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_deopt(70, 1, Rsh_Fir_array_deopt_stack16, CCP, RHO);
  return R_NilValue;

L77_:;
  // x33 = force? x32
  Rsh_Fir_reg_x33_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x32_);
  // checkMissing(x33)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_x33_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args76, Rsh_Fir_param_types_empty()));
  // r52 = atanh(x33)
  SEXP Rsh_Fir_array_args77[1];
  Rsh_Fir_array_args77[0] = Rsh_Fir_reg_x33_;
  Rsh_Fir_reg_r52_ = Rsh_Fir_call_builtin(186, RHO, 1, Rsh_Fir_array_args77);
  // goto L17(r52)
  // L17(r52)
  Rsh_Fir_reg_r51_ = Rsh_Fir_reg_r52_;
  goto L17_;

L78_:;
  // x34 = ld x
  Rsh_Fir_reg_x34_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L80() else D17()
  // L80()
  goto L80_;

L79_:;
  // r53 = dyn base18(<sym x>)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names19[1];
  Rsh_Fir_array_arg_names19[0] = R_MissingArg;
  Rsh_Fir_reg_r53_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base18_, 1, Rsh_Fir_array_args78, Rsh_Fir_array_arg_names19, CCP, RHO);
  // goto L18(r53)
  // L18(r53)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r53_;
  goto L18_;

D17_:;
  // deopt 74 [x34]
  SEXP Rsh_Fir_array_deopt_stack17[1];
  Rsh_Fir_array_deopt_stack17[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_deopt(74, 1, Rsh_Fir_array_deopt_stack17, CCP, RHO);
  return R_NilValue;

L80_:;
  // x35 = force? x34
  Rsh_Fir_reg_x35_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x34_);
  // checkMissing(x35)
  SEXP Rsh_Fir_array_args79[1];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x35_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty()));
  // r55 = lgamma(x35)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_x35_;
  Rsh_Fir_reg_r55_ = Rsh_Fir_call_builtin(187, RHO, 1, Rsh_Fir_array_args80);
  // goto L18(r55)
  // L18(r55)
  Rsh_Fir_reg_r54_ = Rsh_Fir_reg_r55_;
  goto L18_;

L81_:;
  // x36 = ld x
  Rsh_Fir_reg_x36_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L83() else D18()
  // L83()
  goto L83_;

L82_:;
  // r56 = dyn base19(<sym x>)
  SEXP Rsh_Fir_array_args81[1];
  Rsh_Fir_array_args81[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names20[1];
  Rsh_Fir_array_arg_names20[0] = R_MissingArg;
  Rsh_Fir_reg_r56_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base19_, 1, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names20, CCP, RHO);
  // goto L19(r56)
  // L19(r56)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r56_;
  goto L19_;

D18_:;
  // deopt 78 [x36]
  SEXP Rsh_Fir_array_deopt_stack18[1];
  Rsh_Fir_array_deopt_stack18[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_deopt(78, 1, Rsh_Fir_array_deopt_stack18, CCP, RHO);
  return R_NilValue;

L83_:;
  // x37 = force? x36
  Rsh_Fir_reg_x37_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x36_);
  // checkMissing(x37)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x37_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // r58 = gamma(x37)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_reg_r58_ = Rsh_Fir_call_builtin(188, RHO, 1, Rsh_Fir_array_args83);
  // goto L19(r58)
  // L19(r58)
  Rsh_Fir_reg_r57_ = Rsh_Fir_reg_r58_;
  goto L19_;

L84_:;
  // x38 = ld x
  Rsh_Fir_reg_x38_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L86() else D19()
  // L86()
  goto L86_;

L85_:;
  // r59 = dyn base20(<sym x>)
  SEXP Rsh_Fir_array_args84[1];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names21[1];
  Rsh_Fir_array_arg_names21[0] = R_MissingArg;
  Rsh_Fir_reg_r59_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base20_, 1, Rsh_Fir_array_args84, Rsh_Fir_array_arg_names21, CCP, RHO);
  // goto L20(r59)
  // L20(r59)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r59_;
  goto L20_;

D19_:;
  // deopt 82 [x38]
  SEXP Rsh_Fir_array_deopt_stack19[1];
  Rsh_Fir_array_deopt_stack19[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_deopt(82, 1, Rsh_Fir_array_deopt_stack19, CCP, RHO);
  return R_NilValue;

L86_:;
  // x39 = force? x38
  Rsh_Fir_reg_x39_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x38_);
  // checkMissing(x39)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_x39_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty()));
  // r61 = digamma(x39)
  SEXP Rsh_Fir_array_args86[1];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x39_;
  Rsh_Fir_reg_r61_ = Rsh_Fir_call_builtin(189, RHO, 1, Rsh_Fir_array_args86);
  // goto L20(r61)
  // L20(r61)
  Rsh_Fir_reg_r60_ = Rsh_Fir_reg_r61_;
  goto L20_;

L87_:;
  // x40 = ld x
  Rsh_Fir_reg_x40_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L89() else D20()
  // L89()
  goto L89_;

L88_:;
  // r62 = dyn base21(<sym x>)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names22[1];
  Rsh_Fir_array_arg_names22[0] = R_MissingArg;
  Rsh_Fir_reg_r62_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base21_, 1, Rsh_Fir_array_args87, Rsh_Fir_array_arg_names22, CCP, RHO);
  // goto L21(r62)
  // L21(r62)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r62_;
  goto L21_;

D20_:;
  // deopt 86 [x40]
  SEXP Rsh_Fir_array_deopt_stack20[1];
  Rsh_Fir_array_deopt_stack20[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_deopt(86, 1, Rsh_Fir_array_deopt_stack20, CCP, RHO);
  return R_NilValue;

L89_:;
  // x41 = force? x40
  Rsh_Fir_reg_x41_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x40_);
  // checkMissing(x41)
  SEXP Rsh_Fir_array_args88[1];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_x41_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args88, Rsh_Fir_param_types_empty()));
  // r64 = trigamma(x41)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_x41_;
  Rsh_Fir_reg_r64_ = Rsh_Fir_call_builtin(190, RHO, 1, Rsh_Fir_array_args89);
  // goto L21(r64)
  // L21(r64)
  Rsh_Fir_reg_r63_ = Rsh_Fir_reg_r64_;
  goto L21_;

L90_:;
  // x42 = ld x
  Rsh_Fir_reg_x42_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L92() else D21()
  // L92()
  goto L92_;

L91_:;
  // r65 = dyn base22(<sym x>)
  SEXP Rsh_Fir_array_args90[1];
  Rsh_Fir_array_args90[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names23[1];
  Rsh_Fir_array_arg_names23[0] = R_MissingArg;
  Rsh_Fir_reg_r65_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base22_, 1, Rsh_Fir_array_args90, Rsh_Fir_array_arg_names23, CCP, RHO);
  // goto L22(r65)
  // L22(r65)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r65_;
  goto L22_;

D21_:;
  // deopt 90 [x42]
  SEXP Rsh_Fir_array_deopt_stack21[1];
  Rsh_Fir_array_deopt_stack21[0] = Rsh_Fir_reg_x42_;
  Rsh_Fir_deopt(90, 1, Rsh_Fir_array_deopt_stack21, CCP, RHO);
  return R_NilValue;

L92_:;
  // x43 = force? x42
  Rsh_Fir_reg_x43_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x42_);
  // checkMissing(x43)
  SEXP Rsh_Fir_array_args91[1];
  Rsh_Fir_array_args91[0] = Rsh_Fir_reg_x43_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args91, Rsh_Fir_param_types_empty()));
  // r67 = cospi(x43)
  SEXP Rsh_Fir_array_args92[1];
  Rsh_Fir_array_args92[0] = Rsh_Fir_reg_x43_;
  Rsh_Fir_reg_r67_ = Rsh_Fir_call_builtin(191, RHO, 1, Rsh_Fir_array_args92);
  // goto L22(r67)
  // L22(r67)
  Rsh_Fir_reg_r66_ = Rsh_Fir_reg_r67_;
  goto L22_;

L93_:;
  // x44 = ld x
  Rsh_Fir_reg_x44_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L95() else D22()
  // L95()
  goto L95_;

L94_:;
  // r68 = dyn base23(<sym x>)
  SEXP Rsh_Fir_array_args93[1];
  Rsh_Fir_array_args93[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names24[1];
  Rsh_Fir_array_arg_names24[0] = R_MissingArg;
  Rsh_Fir_reg_r68_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base23_, 1, Rsh_Fir_array_args93, Rsh_Fir_array_arg_names24, CCP, RHO);
  // goto L23(r68)
  // L23(r68)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r68_;
  goto L23_;

D22_:;
  // deopt 94 [x44]
  SEXP Rsh_Fir_array_deopt_stack22[1];
  Rsh_Fir_array_deopt_stack22[0] = Rsh_Fir_reg_x44_;
  Rsh_Fir_deopt(94, 1, Rsh_Fir_array_deopt_stack22, CCP, RHO);
  return R_NilValue;

L95_:;
  // x45 = force? x44
  Rsh_Fir_reg_x45_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x44_);
  // checkMissing(x45)
  SEXP Rsh_Fir_array_args94[1];
  Rsh_Fir_array_args94[0] = Rsh_Fir_reg_x45_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args94, Rsh_Fir_param_types_empty()));
  // r70 = sinpi(x45)
  SEXP Rsh_Fir_array_args95[1];
  Rsh_Fir_array_args95[0] = Rsh_Fir_reg_x45_;
  Rsh_Fir_reg_r70_ = Rsh_Fir_call_builtin(192, RHO, 1, Rsh_Fir_array_args95);
  // goto L23(r70)
  // L23(r70)
  Rsh_Fir_reg_r69_ = Rsh_Fir_reg_r70_;
  goto L23_;

L96_:;
  // x46 = ld x
  Rsh_Fir_reg_x46_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L98() else D23()
  // L98()
  goto L98_;

L97_:;
  // r71 = dyn base24(<sym x>)
  SEXP Rsh_Fir_array_args96[1];
  Rsh_Fir_array_args96[0] = Rsh_const(CCP, 1);
  SEXP Rsh_Fir_array_arg_names25[1];
  Rsh_Fir_array_arg_names25[0] = R_MissingArg;
  Rsh_Fir_reg_r71_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base24_, 1, Rsh_Fir_array_args96, Rsh_Fir_array_arg_names25, CCP, RHO);
  // goto L24(r71)
  // L24(r71)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r71_;
  goto L24_;

D23_:;
  // deopt 98 [x46]
  SEXP Rsh_Fir_array_deopt_stack23[1];
  Rsh_Fir_array_deopt_stack23[0] = Rsh_Fir_reg_x46_;
  Rsh_Fir_deopt(98, 1, Rsh_Fir_array_deopt_stack23, CCP, RHO);
  return R_NilValue;

L98_:;
  // x47 = force? x46
  Rsh_Fir_reg_x47_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x46_);
  // checkMissing(x47)
  SEXP Rsh_Fir_array_args97[1];
  Rsh_Fir_array_args97[0] = Rsh_Fir_reg_x47_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args97, Rsh_Fir_param_types_empty()));
  // r73 = tanpi(x47)
  SEXP Rsh_Fir_array_args98[1];
  Rsh_Fir_array_args98[0] = Rsh_Fir_reg_x47_;
  Rsh_Fir_reg_r73_ = Rsh_Fir_call_builtin(193, RHO, 1, Rsh_Fir_array_args98);
  // goto L24(r73)
  // L24(r73)
  Rsh_Fir_reg_r72_ = Rsh_Fir_reg_r73_;
  goto L24_;

D24_:;
  // deopt 102 [r74]
  SEXP Rsh_Fir_array_deopt_stack24[1];
  Rsh_Fir_array_deopt_stack24[0] = Rsh_Fir_reg_r74_;
  Rsh_Fir_deopt(102, 1, Rsh_Fir_array_deopt_stack24, CCP, RHO);
  return R_NilValue;

L99_:;
  // goto L0(r74)
  // L0(r74)
  Rsh_Fir_reg_r1_ = Rsh_Fir_reg_r74_;
  goto L0_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
