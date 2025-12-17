#include <runtime.h>
SEXP Rsh_Fir_user_function_main(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_main_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES);
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS);
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO);
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO);
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
  // r = clos inner2044426018
  Rsh_Fir_reg_r = Rsh_Fir_make_closure(&Rsh_Fir_user_function_inner2044426018_, RHO, CCP);
  // st `as.stepfun.isoreg` = r
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
SEXP Rsh_Fir_user_function_inner2044426018_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS, Rsh_Fir_Type const *PARAM_TYPES) {
  // FIR inner2044426018 dynamic dispatch ([x, `...`])

  return Rsh_Fir_user_version_inner2044426018_v0_(CCP, RHO, NPARAMS, PARAMS);
}
SEXP Rsh_Fir_user_version_inner2044426018_v0_(SEXP CCP, SEXP RHO, int NPARAMS, SEXP const *PARAMS) {
  // FIR inner2044426018 version 0 (*, dots -+> V)

  if (NPARAMS != 2) Rsh_error("FIŘ arity mismatch for inner2044426018/0: expected 2, got %d", NPARAMS);

  // Local declarations
  SEXP Rsh_Fir_reg_x;  // x
  SEXP Rsh_Fir_reg_ddd;  // ddd
  SEXP Rsh_Fir_reg_stepfun;  // stepfun
  SEXP Rsh_Fir_reg_x1_;  // x1
  SEXP Rsh_Fir_reg_x2_;  // x2
  SEXP Rsh_Fir_reg_c;  // c
  SEXP Rsh_Fir_reg_x4_;  // x4
  SEXP Rsh_Fir_reg_dr;  // dr
  SEXP Rsh_Fir_reg_dc;  // dc
  SEXP Rsh_Fir_reg_dx;  // dx
  SEXP Rsh_Fir_reg_dx1_;  // dx1
  SEXP Rsh_Fir_reg_r1;  // r
  SEXP Rsh_Fir_reg_c1_;  // c1
  SEXP Rsh_Fir_reg_x5_;  // x5
  SEXP Rsh_Fir_reg_x6_;  // x6
  SEXP Rsh_Fir_reg_c2_;  // c2
  SEXP Rsh_Fir_reg_x8_;  // x8
  SEXP Rsh_Fir_reg_dr2_;  // dr2
  SEXP Rsh_Fir_reg_dc1_;  // dc1
  SEXP Rsh_Fir_reg_dx2_;  // dx2
  SEXP Rsh_Fir_reg_dx3_;  // dx3
  SEXP Rsh_Fir_reg_r1_;  // r1
  SEXP Rsh_Fir_reg_dx4_;  // dx4
  SEXP Rsh_Fir_reg_x9_;  // x9
  SEXP Rsh_Fir_reg_x10_;  // x10
  SEXP Rsh_Fir_reg_c3_;  // c3
  SEXP Rsh_Fir_reg_x12_;  // x12
  SEXP Rsh_Fir_reg_dr4_;  // dr4
  SEXP Rsh_Fir_reg_dc2_;  // dc2
  SEXP Rsh_Fir_reg_dx5_;  // dx5
  SEXP Rsh_Fir_reg_dx6_;  // dx6
  SEXP Rsh_Fir_reg_r2_;  // r2
  SEXP Rsh_Fir_reg_c4_;  // c4
  SEXP Rsh_Fir_reg_dx8_;  // dx8
  SEXP Rsh_Fir_reg_dr6_;  // dr6
  SEXP Rsh_Fir_reg_dc3_;  // dc3
  SEXP Rsh_Fir_reg_dx9_;  // dx9
  SEXP Rsh_Fir_reg_x13_;  // x13
  SEXP Rsh_Fir_reg_x14_;  // x14
  SEXP Rsh_Fir_reg_c5_;  // c5
  SEXP Rsh_Fir_reg_dx11_;  // dx11
  SEXP Rsh_Fir_reg_x16_;  // x16
  SEXP Rsh_Fir_reg_dr8_;  // dr8
  SEXP Rsh_Fir_reg_dc4_;  // dc4
  SEXP Rsh_Fir_reg_dx13_;  // dx13
  SEXP Rsh_Fir_reg_dx14_;  // dx14
  SEXP Rsh_Fir_reg_dx15_;  // dx15
  SEXP Rsh_Fir_reg_r3_;  // r3
  SEXP Rsh_Fir_reg___;  // __
  SEXP Rsh_Fir_reg_r4_;  // r4
  SEXP Rsh_Fir_reg_c6_;  // c6
  SEXP Rsh_Fir_reg_dx17_;  // dx17
  SEXP Rsh_Fir_reg_dr10_;  // dr10
  SEXP Rsh_Fir_reg_dc5_;  // dc5
  SEXP Rsh_Fir_reg_dx18_;  // dx18
  SEXP Rsh_Fir_reg_dx19_;  // dx19
  SEXP Rsh_Fir_reg_x17_;  // x17
  SEXP Rsh_Fir_reg_x18_;  // x18
  SEXP Rsh_Fir_reg_c7_;  // c7
  SEXP Rsh_Fir_reg_dx21_;  // dx21
  SEXP Rsh_Fir_reg_x20_;  // x20
  SEXP Rsh_Fir_reg_dr12_;  // dr12
  SEXP Rsh_Fir_reg_dc6_;  // dc6
  SEXP Rsh_Fir_reg_dx23_;  // dx23
  SEXP Rsh_Fir_reg_dx24_;  // dx24
  SEXP Rsh_Fir_reg_dx25_;  // dx25
  SEXP Rsh_Fir_reg_r5_;  // r5
  SEXP Rsh_Fir_reg___1_;  // __1
  SEXP Rsh_Fir_reg_r6_;  // r6
  SEXP Rsh_Fir_reg_p;  // p
  SEXP Rsh_Fir_reg_sym;  // sym
  SEXP Rsh_Fir_reg_base;  // base
  SEXP Rsh_Fir_reg_guard;  // guard
  SEXP Rsh_Fir_reg_r8_;  // r8
  SEXP Rsh_Fir_reg_r9_;  // r9
  SEXP Rsh_Fir_reg_x21_;  // x21
  SEXP Rsh_Fir_reg_x22_;  // x22
  SEXP Rsh_Fir_reg_c8_;  // c8
  SEXP Rsh_Fir_reg_x24_;  // x24
  SEXP Rsh_Fir_reg_dr14_;  // dr14
  SEXP Rsh_Fir_reg_dc7_;  // dc7
  SEXP Rsh_Fir_reg_dx26_;  // dx26
  SEXP Rsh_Fir_reg_dx27_;  // dx27
  SEXP Rsh_Fir_reg_r10_;  // r10
  SEXP Rsh_Fir_reg_c9_;  // c9
  SEXP Rsh_Fir_reg_dx29_;  // dx29
  SEXP Rsh_Fir_reg_dr16_;  // dr16
  SEXP Rsh_Fir_reg_dc8_;  // dc8
  SEXP Rsh_Fir_reg_dx30_;  // dx30
  SEXP Rsh_Fir_reg_dx31_;  // dx31
  SEXP Rsh_Fir_reg_x25_;  // x25
  SEXP Rsh_Fir_reg_x26_;  // x26
  SEXP Rsh_Fir_reg_c10_;  // c10
  SEXP Rsh_Fir_reg_dx33_;  // dx33
  SEXP Rsh_Fir_reg_x28_;  // x28
  SEXP Rsh_Fir_reg_dr18_;  // dr18
  SEXP Rsh_Fir_reg_dc9_;  // dc9
  SEXP Rsh_Fir_reg_dx35_;  // dx35
  SEXP Rsh_Fir_reg_dx36_;  // dx36
  SEXP Rsh_Fir_reg_dx37_;  // dx37
  SEXP Rsh_Fir_reg_r11_;  // r11
  SEXP Rsh_Fir_reg___2_;  // __2
  SEXP Rsh_Fir_reg_r12_;  // r12
  SEXP Rsh_Fir_reg_x29_;  // x29
  SEXP Rsh_Fir_reg_x30_;  // x30
  SEXP Rsh_Fir_reg_c11_;  // c11
  SEXP Rsh_Fir_reg_x32_;  // x32
  SEXP Rsh_Fir_reg_dr20_;  // dr20
  SEXP Rsh_Fir_reg_dc10_;  // dc10
  SEXP Rsh_Fir_reg_dx38_;  // dx38
  SEXP Rsh_Fir_reg_dx39_;  // dx39
  SEXP Rsh_Fir_reg_r13_;  // r13
  SEXP Rsh_Fir_reg_c12_;  // c12
  SEXP Rsh_Fir_reg_dx41_;  // dx41
  SEXP Rsh_Fir_reg_dr22_;  // dr22
  SEXP Rsh_Fir_reg_dc11_;  // dc11
  SEXP Rsh_Fir_reg_dx42_;  // dx42
  SEXP Rsh_Fir_reg_dx43_;  // dx43
  SEXP Rsh_Fir_reg_sym1_;  // sym1
  SEXP Rsh_Fir_reg_base1_;  // base1
  SEXP Rsh_Fir_reg_guard1_;  // guard1
  SEXP Rsh_Fir_reg_r14_;  // r14
  SEXP Rsh_Fir_reg_dx46_;  // dx46
  SEXP Rsh_Fir_reg_r15_;  // r15
  SEXP Rsh_Fir_reg_x33_;  // x33
  SEXP Rsh_Fir_reg_x34_;  // x34
  SEXP Rsh_Fir_reg_c13_;  // c13
  SEXP Rsh_Fir_reg_dx48_;  // dx48
  SEXP Rsh_Fir_reg_x36_;  // x36
  SEXP Rsh_Fir_reg_dr24_;  // dr24
  SEXP Rsh_Fir_reg_dc12_;  // dc12
  SEXP Rsh_Fir_reg_dx50_;  // dx50
  SEXP Rsh_Fir_reg_dx51_;  // dx51
  SEXP Rsh_Fir_reg_dx52_;  // dx52
  SEXP Rsh_Fir_reg_r16_;  // r16
  SEXP Rsh_Fir_reg_length;  // length
  SEXP Rsh_Fir_reg_r17_;  // r17
  SEXP Rsh_Fir_reg___3_;  // __3
  SEXP Rsh_Fir_reg_r18_;  // r18
  SEXP Rsh_Fir_reg_c14_;  // c14
  SEXP Rsh_Fir_reg_r19_;  // r19
  SEXP Rsh_Fir_reg_p1_;  // p1
  SEXP Rsh_Fir_reg_r21_;  // r21
  SEXP Rsh_Fir_reg_x37_;  // x37
  SEXP Rsh_Fir_reg_x38_;  // x38
  SEXP Rsh_Fir_reg_c15_;  // c15
  SEXP Rsh_Fir_reg_x40_;  // x40
  SEXP Rsh_Fir_reg_dr26_;  // dr26
  SEXP Rsh_Fir_reg_dc13_;  // dc13
  SEXP Rsh_Fir_reg_dx53_;  // dx53
  SEXP Rsh_Fir_reg_dx54_;  // dx54
  SEXP Rsh_Fir_reg_r22_;  // r22
  SEXP Rsh_Fir_reg_l;  // l
  SEXP Rsh_Fir_reg_attr__;  // attr__
  SEXP Rsh_Fir_reg_r23_;  // r23
  SEXP Rsh_Fir_reg_sf;  // sf
  SEXP Rsh_Fir_reg_sf1_;  // sf1

  // Bind parameters
  Rsh_Fir_reg_x = PARAMS[0];
  Rsh_Fir_reg_ddd = PARAMS[1];

  // mkenv
  Rsh_Fir_push_env(&RHO);
  (void)(R_NilValue);
  // st x = x
  Rsh_Fir_store(Rsh_const(CCP, 1), Rsh_Fir_reg_x, RHO);
  (void)(Rsh_Fir_reg_x);
  // st `...` = ddd
  Rsh_Fir_store(Rsh_const(CCP, 2), Rsh_Fir_reg_ddd, RHO);
  (void)(Rsh_Fir_reg_ddd);
  // stepfun = ldf stepfun
  Rsh_Fir_reg_stepfun = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 3), RHO);
  // check L0() else D0()
  // L0()
  goto L0_;

D0_:;
  // deopt 1 []
  Rsh_Fir_deopt(1, 0, NULL, CCP, RHO);
  return R_NilValue;

L0_:;
  // p = prom<V +>{
  //   x1 = ld x;
  //   x2 = force? x1;
  //   checkMissing(x2);
  //   c = `is.object`(x2);
  //   if c then L4() else L5(x2);
  // L3(dx1):
  //   c1 = `as.logical`(dx1);
  //   if c1 then L7() else L0();
  // L4():
  //   dr = tryDispatchBuiltin.1("$", x2);
  //   dc = getTryDispatchBuiltinDispatched(dr);
  //   if dc then L6() else L5(dr);
  // L5(x4):
  //   r = `$`(x4, <sym isOrd>);
  //   goto L3(r);
  // L0():
  //   x9 = ld x;
  //   x10 = force? x9;
  //   checkMissing(x10);
  //   c3 = `is.object`(x10);
  //   if c3 then L14() else L15(x10);
  // L1(dx4):
  //   c6 = `is.object`(dx4);
  //   if c6 then L24() else L25(dx4);
  // L6():
  //   dx = getTryDispatchBuiltinValue(dr);
  //   goto L3(dx);
  // L7():
  //   x5 = ld x;
  //   x6 = force? x5;
  //   checkMissing(x6);
  //   c2 = `is.object`(x6);
  //   if c2 then L9() else L10(x6);
  // L2(dx19):
  //   return dx19;
  // L8(dx3):
  //   goto L1(dx3);
  // L9():
  //   dr2 = tryDispatchBuiltin.1("$", x6);
  //   dc1 = getTryDispatchBuiltinDispatched(dr2);
  //   if dc1 then L11() else L10(dr2);
  // L10(x8):
  //   r1 = `$`(x8, <sym x>);
  //   goto L8(r1);
  // L13(dx6):
  //   c4 = `is.object`(dx6);
  //   if c4 then L17() else L18(dx6);
  // L14():
  //   dr4 = tryDispatchBuiltin.1("$", x10);
  //   dc2 = getTryDispatchBuiltinDispatched(dr4);
  //   if dc2 then L16() else L15(dr4);
  // L15(x12):
  //   r2 = `$`(x12, <sym x>);
  //   goto L13(r2);
  // L24():
  //   dr10 = tryDispatchBuiltin.1("[", dx4);
  //   dc5 = getTryDispatchBuiltinDispatched(dr10);
  //   if dc5 then L26() else L25(dr10);
  // L25(dx17):
  //   x17 = ld x;
  //   x18 = force? x17;
  //   checkMissing(x18);
  //   c7 = `is.object`(x18);
  //   if c7 then L28() else L29(dx17, x18);
  // L11():
  //   dx2 = getTryDispatchBuiltinValue(dr2);
  //   goto L8(dx2);
  // L16():
  //   dx5 = getTryDispatchBuiltinValue(dr4);
  //   goto L13(dx5);
  // L17():
  //   dr6 = tryDispatchBuiltin.1("[", dx6);
  //   dc3 = getTryDispatchBuiltinDispatched(dr6);
  //   if dc3 then L19() else L18(dr6);
  // L18(dx8):
  //   x13 = ld x;
  //   x14 = force? x13;
  //   checkMissing(x14);
  //   c5 = `is.object`(x14);
  //   if c5 then L21() else L22(dx8, x14);
  // L26():
  //   dx18 = getTryDispatchBuiltinValue(dr10);
  //   goto L2(dx18);
  // L27(dx24, dx25):
  //   __1 = ldf `[` in base;
  //   r6 = dyn __1(dx24, dx25);
  //   goto L2(r6);
  // L28():
  //   dr12 = tryDispatchBuiltin.1("$", x18);
  //   dc6 = getTryDispatchBuiltinDispatched(dr12);
  //   if dc6 then L30() else L29(dx17, dr12);
  // L29(dx21, x20):
  //   r5 = `$`(x20, <sym iKnots>);
  //   goto L27(dx21, r5);
  // L19():
  //   dx9 = getTryDispatchBuiltinValue(dr6);
  //   goto L1(dx9);
  // L20(dx14, dx15):
  //   __ = ldf `[` in base;
  //   r4 = dyn __(dx14, dx15);
  //   goto L1(r4);
  // L21():
  //   dr8 = tryDispatchBuiltin.1("$", x14);
  //   dc4 = getTryDispatchBuiltinDispatched(dr8);
  //   if dc4 then L23() else L22(dx8, dr8);
  // L22(dx11, x16):
  //   r3 = `$`(x16, <sym ord>);
  //   goto L20(dx11, r3);
  // L30():
  //   dx23 = getTryDispatchBuiltinValue(dr12);
  //   goto L27(dx17, dx23);
  // L23():
  //   dx13 = getTryDispatchBuiltinValue(dr8);
  //   goto L20(dx8, dx13);
  // }
  Rsh_Fir_reg_p = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_, CCP, RHO);
  // p1 = prom<V +>{
  //   sym = ldf c;
  //   base = ldf c in base;
  //   guard = `==`.4(sym, base);
  //   if guard then L4() else L5();
  // L0(r9):
  //   return r9;
  // L4():
  //   x21 = ld x;
  //   x22 = force? x21;
  //   checkMissing(x22);
  //   c8 = `is.object`(x22);
  //   if c8 then L7() else L8(x22);
  // L5():
  //   r8 = dyn base(<lang `[`(`$`(x, yf), `$`(x, iKnots))>, <lang `[`(`$`(x, yf), length(`$`(x, yf)))>);
  //   goto L0(r8);
  // L6(dx27):
  //   c9 = `is.object`(dx27);
  //   if c9 then L10() else L11(dx27);
  // L7():
  //   dr14 = tryDispatchBuiltin.1("$", x22);
  //   dc7 = getTryDispatchBuiltinDispatched(dr14);
  //   if dc7 then L9() else L8(dr14);
  // L8(x24):
  //   r10 = `$`(x24, <sym yf>);
  //   goto L6(r10);
  // L1(dx31):
  //   x29 = ld x;
  //   x30 = force? x29;
  //   checkMissing(x30);
  //   c11 = `is.object`(x30);
  //   if c11 then L18() else L19(x30);
  // L9():
  //   dx26 = getTryDispatchBuiltinValue(dr14);
  //   goto L6(dx26);
  // L10():
  //   dr16 = tryDispatchBuiltin.1("[", dx27);
  //   dc8 = getTryDispatchBuiltinDispatched(dr16);
  //   if dc8 then L12() else L11(dr16);
  // L11(dx29):
  //   x25 = ld x;
  //   x26 = force? x25;
  //   checkMissing(x26);
  //   c10 = `is.object`(x26);
  //   if c10 then L14() else L15(dx29, x26);
  // L12():
  //   dx30 = getTryDispatchBuiltinValue(dr16);
  //   goto L1(dx30);
  // L13(dx36, dx37):
  //   __2 = ldf `[` in base;
  //   r12 = dyn __2(dx36, dx37);
  //   goto L1(r12);
  // L14():
  //   dr18 = tryDispatchBuiltin.1("$", x26);
  //   dc9 = getTryDispatchBuiltinDispatched(dr18);
  //   if dc9 then L16() else L15(dx29, dr18);
  // L15(dx33, x28):
  //   r11 = `$`(x28, <sym iKnots>);
  //   goto L13(dx33, r11);
  // L17(dx39):
  //   c12 = `is.object`(dx39);
  //   if c12 then L21() else L22(dx39);
  // L18():
  //   dr20 = tryDispatchBuiltin.1("$", x30);
  //   dc10 = getTryDispatchBuiltinDispatched(dr20);
  //   if dc10 then L20() else L19(dr20);
  // L19(x32):
  //   r13 = `$`(x32, <sym yf>);
  //   goto L17(r13);
  // L2(dx43):
  //   c14 = ldf c in base;
  //   r19 = dyn c14(dx31, dx43);
  //   goto L0(r19);
  // L16():
  //   dx35 = getTryDispatchBuiltinValue(dr18);
  //   goto L13(dx29, dx35);
  // L20():
  //   dx38 = getTryDispatchBuiltinValue(dr20);
  //   goto L17(dx38);
  // L21():
  //   dr22 = tryDispatchBuiltin.1("[", dx39);
  //   dc11 = getTryDispatchBuiltinDispatched(dr22);
  //   if dc11 then L23() else L22(dr22);
  // L22(dx41):
  //   sym1 = ldf length;
  //   base1 = ldf length in base;
  //   guard1 = `==`.4(sym1, base1);
  //   if guard1 then L24() else L25();
  // L3(dx46, r15):
  //   __3 = ldf `[` in base;
  //   r18 = dyn __3(dx46, r15);
  //   goto L2(r18);
  // L23():
  //   dx42 = getTryDispatchBuiltinValue(dr22);
  //   goto L2(dx42);
  // L24():
  //   x33 = ld x;
  //   x34 = force? x33;
  //   checkMissing(x34);
  //   c13 = `is.object`(x34);
  //   if c13 then L27() else L28(dx41, x34);
  // L25():
  //   r14 = dyn base1(<lang `$`(x, yf)>);
  //   goto L3(dx41, r14);
  // L26(dx51, dx52):
  //   length = ldf length in base;
  //   r17 = dyn length(dx52);
  //   goto L3(dx51, r17);
  // L27():
  //   dr24 = tryDispatchBuiltin.1("$", x34);
  //   dc12 = getTryDispatchBuiltinDispatched(dr24);
  //   if dc12 then L29() else L28(dx41, dr24);
  // L28(dx48, x36):
  //   r16 = `$`(x36, <sym yf>);
  //   goto L26(dx48, r16);
  // L29():
  //   dx50 = getTryDispatchBuiltinValue(dr24);
  //   goto L26(dx41, dx50);
  // }
  Rsh_Fir_reg_p1_ = Rsh_Fir_make_promise(&Rsh_Fir_user_promise_inner2044426018_1, CCP, RHO);
  // r21 = dyn stepfun[x, y, right](p, p1, TRUE)
  SEXP Rsh_Fir_array_args81[3];
  Rsh_Fir_array_args81[0] = Rsh_Fir_reg_p;
  Rsh_Fir_array_args81[1] = Rsh_Fir_reg_p1_;
  Rsh_Fir_array_args81[2] = Rsh_const(CCP, 16);
  SEXP Rsh_Fir_array_arg_names8[3];
  Rsh_Fir_array_arg_names8[0] = Rsh_const(CCP, 1);
  Rsh_Fir_array_arg_names8[1] = Rsh_const(CCP, 17);
  Rsh_Fir_array_arg_names8[2] = Rsh_const(CCP, 18);
  Rsh_Fir_reg_r21_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_stepfun, 3, Rsh_Fir_array_args81, Rsh_Fir_array_arg_names8, CCP, RHO);
  // check L1() else D1()
  // L1()
  goto L1_;

D1_:;
  // deopt 8 [r21]
  SEXP Rsh_Fir_array_deopt_stack[1];
  Rsh_Fir_array_deopt_stack[0] = Rsh_Fir_reg_r21_;
  Rsh_Fir_deopt(8, 1, Rsh_Fir_array_deopt_stack, CCP, RHO);
  return R_NilValue;

L1_:;
  // st sf = r21
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r21_, RHO);
  (void)(Rsh_Fir_reg_r21_);
  // x37 = ld x
  Rsh_Fir_reg_x37_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // check L2() else D2()
  // L2()
  goto L2_;

D2_:;
  // deopt 10 [x37]
  SEXP Rsh_Fir_array_deopt_stack1[1];
  Rsh_Fir_array_deopt_stack1[0] = Rsh_Fir_reg_x37_;
  Rsh_Fir_deopt(10, 1, Rsh_Fir_array_deopt_stack1, CCP, RHO);
  return R_NilValue;

L2_:;
  // x38 = force? x37
  Rsh_Fir_reg_x38_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x37_);
  // checkMissing(x38)
  SEXP Rsh_Fir_array_args82[1];
  Rsh_Fir_array_args82[0] = Rsh_Fir_reg_x38_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args82, Rsh_Fir_param_types_empty()));
  // c15 = `is.object`(x38)
  SEXP Rsh_Fir_array_args83[1];
  Rsh_Fir_array_args83[0] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_c15_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args83, Rsh_Fir_param_types_empty());
  // if c15 then L4() else L5(x38)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c15_)) {
  // L4()
    goto L4_;
  } else {
  // L5(x38)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_x38_;
    goto L5_;
  }

L3_:;
  // l = ld sf
  Rsh_Fir_reg_l = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // attr__ = ldf `attr<-`
  Rsh_Fir_reg_attr__ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 20), RHO);
  // check L7() else D3()
  // L7()
  goto L7_;

L4_:;
  // dr26 = tryDispatchBuiltin.1("$", x38)
  SEXP Rsh_Fir_array_args84[2];
  Rsh_Fir_array_args84[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args84[1] = Rsh_Fir_reg_x38_;
  Rsh_Fir_reg_dr26_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args84);
  // dc13 = getTryDispatchBuiltinDispatched(dr26)
  SEXP Rsh_Fir_array_args85[1];
  Rsh_Fir_array_args85[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dc13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args85, Rsh_Fir_param_types_empty());
  // if dc13 then L6() else L5(dr26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc13_)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr26)
    Rsh_Fir_reg_x40_ = Rsh_Fir_reg_dr26_;
    goto L5_;
  }

L5_:;
  // r22 = `$`(x40, <sym call>)
  SEXP Rsh_Fir_array_args86[2];
  Rsh_Fir_array_args86[0] = Rsh_Fir_reg_x40_;
  Rsh_Fir_array_args86[1] = Rsh_const(CCP, 21);
  Rsh_Fir_reg_r22_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args86, Rsh_Fir_param_types_empty());
  // goto L3(r22)
  // L3(r22)
  Rsh_Fir_reg_dx54_ = Rsh_Fir_reg_r22_;
  goto L3_;

L6_:;
  // dx53 = getTryDispatchBuiltinValue(dr26)
  SEXP Rsh_Fir_array_args87[1];
  Rsh_Fir_array_args87[0] = Rsh_Fir_reg_dr26_;
  Rsh_Fir_reg_dx53_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args87, Rsh_Fir_param_types_empty());
  // goto L3(dx53)
  // L3(dx53)
  Rsh_Fir_reg_dx54_ = Rsh_Fir_reg_dx53_;
  goto L3_;

D3_:;
  // deopt 14 [dx54, l, dx54]
  SEXP Rsh_Fir_array_deopt_stack2[3];
  Rsh_Fir_array_deopt_stack2[0] = Rsh_Fir_reg_dx54_;
  Rsh_Fir_array_deopt_stack2[1] = Rsh_Fir_reg_l;
  Rsh_Fir_array_deopt_stack2[2] = Rsh_Fir_reg_dx54_;
  Rsh_Fir_deopt(14, 3, Rsh_Fir_array_deopt_stack2, CCP, RHO);
  return R_NilValue;

L7_:;
  // r23 = dyn attr__(l, NULL, "call", dx54)
  SEXP Rsh_Fir_array_args88[4];
  Rsh_Fir_array_args88[0] = Rsh_Fir_reg_l;
  Rsh_Fir_array_args88[1] = Rsh_const(CCP, 22);
  Rsh_Fir_array_args88[2] = Rsh_const(CCP, 23);
  Rsh_Fir_array_args88[3] = Rsh_Fir_reg_dx54_;
  SEXP Rsh_Fir_array_arg_names9[4];
  Rsh_Fir_array_arg_names9[0] = R_MissingArg;
  Rsh_Fir_array_arg_names9[1] = R_MissingArg;
  Rsh_Fir_array_arg_names9[2] = R_MissingArg;
  Rsh_Fir_array_arg_names9[3] = R_MissingArg;
  Rsh_Fir_reg_r23_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_attr__, 4, Rsh_Fir_array_args88, Rsh_Fir_array_arg_names9, CCP, RHO);
  // check L8() else D4()
  // L8()
  goto L8_;

D4_:;
  // deopt 17 [dx54, r23]
  SEXP Rsh_Fir_array_deopt_stack3[2];
  Rsh_Fir_array_deopt_stack3[0] = Rsh_Fir_reg_dx54_;
  Rsh_Fir_array_deopt_stack3[1] = Rsh_Fir_reg_r23_;
  Rsh_Fir_deopt(17, 2, Rsh_Fir_array_deopt_stack3, CCP, RHO);
  return R_NilValue;

L8_:;
  // st sf = r23
  Rsh_Fir_store(Rsh_const(CCP, 19), Rsh_Fir_reg_r23_, RHO);
  (void)(Rsh_Fir_reg_r23_);
  // sf = ld sf
  Rsh_Fir_reg_sf = Rsh_Fir_load(Rsh_const(CCP, 19), RHO);
  // check L9() else D5()
  // L9()
  goto L9_;

D5_:;
  // deopt 19 [sf]
  SEXP Rsh_Fir_array_deopt_stack4[1];
  Rsh_Fir_array_deopt_stack4[0] = Rsh_Fir_reg_sf;
  Rsh_Fir_deopt(19, 1, Rsh_Fir_array_deopt_stack4, CCP, RHO);
  return R_NilValue;

L9_:;
  // sf1 = force? sf
  Rsh_Fir_reg_sf1_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_sf);
  // checkMissing(sf1)
  SEXP Rsh_Fir_array_args89[1];
  Rsh_Fir_array_args89[0] = Rsh_Fir_reg_sf1_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args89, Rsh_Fir_param_types_empty()));
  // popenv
  Rsh_Fir_pop_env(&RHO);
  (void)(R_NilValue);
  // return sf1
  return Rsh_Fir_reg_sf1_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_(SEXP CCP, SEXP RHO) {
  // x1 = ld x
  Rsh_Fir_reg_x1_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x2 = force? x1
  Rsh_Fir_reg_x2_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x1_);
  // checkMissing(x2)
  SEXP Rsh_Fir_array_args[1];
  Rsh_Fir_array_args[0] = Rsh_Fir_reg_x2_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args, Rsh_Fir_param_types_empty()));
  // c = `is.object`(x2)
  SEXP Rsh_Fir_array_args1[1];
  Rsh_Fir_array_args1[0] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_c = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args1, Rsh_Fir_param_types_empty());
  // if c then L4() else L5(x2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c)) {
  // L4()
    goto L4_;
  } else {
  // L5(x2)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_x2_;
    goto L5_;
  }

L0_:;
  // x9 = ld x
  Rsh_Fir_reg_x9_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x10 = force? x9
  Rsh_Fir_reg_x10_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x9_);
  // checkMissing(x10)
  SEXP Rsh_Fir_array_args2[1];
  Rsh_Fir_array_args2[0] = Rsh_Fir_reg_x10_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args2, Rsh_Fir_param_types_empty()));
  // c3 = `is.object`(x10)
  SEXP Rsh_Fir_array_args3[1];
  Rsh_Fir_array_args3[0] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_c3_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args3, Rsh_Fir_param_types_empty());
  // if c3 then L14() else L15(x10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c3_)) {
  // L14()
    goto L14_;
  } else {
  // L15(x10)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_x10_;
    goto L15_;
  }

L1_:;
  // c6 = `is.object`(dx4)
  SEXP Rsh_Fir_array_args4[1];
  Rsh_Fir_array_args4[0] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_reg_c6_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args4, Rsh_Fir_param_types_empty());
  // if c6 then L24() else L25(dx4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c6_)) {
  // L24()
    goto L24_;
  } else {
  // L25(dx4)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dx4_;
    goto L25_;
  }

L2_:;
  // return dx19
  return Rsh_Fir_reg_dx19_;

L3_:;
  // c1 = `as.logical`(dx1)
  SEXP Rsh_Fir_array_args5[1];
  Rsh_Fir_array_args5[0] = Rsh_Fir_reg_dx1_;
  Rsh_Fir_reg_c1_ = Rsh_Fir_call_builtin(324, CCP, RHO, 1, Rsh_Fir_array_args5, Rsh_Fir_param_types_empty());
  // if c1 then L7() else L0()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c1_)) {
  // L7()
    goto L7_;
  } else {
  // L0()
    goto L0_;
  }

L4_:;
  // dr = tryDispatchBuiltin.1("$", x2)
  SEXP Rsh_Fir_array_args6[2];
  Rsh_Fir_array_args6[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args6[1] = Rsh_Fir_reg_x2_;
  Rsh_Fir_reg_dr = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args6);
  // dc = getTryDispatchBuiltinDispatched(dr)
  SEXP Rsh_Fir_array_args7[1];
  Rsh_Fir_array_args7[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dc = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args7, Rsh_Fir_param_types_empty());
  // if dc then L6() else L5(dr)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc)) {
  // L6()
    goto L6_;
  } else {
  // L5(dr)
    Rsh_Fir_reg_x4_ = Rsh_Fir_reg_dr;
    goto L5_;
  }

L5_:;
  // r = `$`(x4, <sym isOrd>)
  SEXP Rsh_Fir_array_args8[2];
  Rsh_Fir_array_args8[0] = Rsh_Fir_reg_x4_;
  Rsh_Fir_array_args8[1] = Rsh_const(CCP, 5);
  Rsh_Fir_reg_r1 = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args8, Rsh_Fir_param_types_empty());
  // goto L3(r)
  // L3(r)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_r1;
  goto L3_;

L6_:;
  // dx = getTryDispatchBuiltinValue(dr)
  SEXP Rsh_Fir_array_args9[1];
  Rsh_Fir_array_args9[0] = Rsh_Fir_reg_dr;
  Rsh_Fir_reg_dx = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args9, Rsh_Fir_param_types_empty());
  // goto L3(dx)
  // L3(dx)
  Rsh_Fir_reg_dx1_ = Rsh_Fir_reg_dx;
  goto L3_;

L7_:;
  // x5 = ld x
  Rsh_Fir_reg_x5_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x6 = force? x5
  Rsh_Fir_reg_x6_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x5_);
  // checkMissing(x6)
  SEXP Rsh_Fir_array_args10[1];
  Rsh_Fir_array_args10[0] = Rsh_Fir_reg_x6_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args10, Rsh_Fir_param_types_empty()));
  // c2 = `is.object`(x6)
  SEXP Rsh_Fir_array_args11[1];
  Rsh_Fir_array_args11[0] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_c2_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args11, Rsh_Fir_param_types_empty());
  // if c2 then L9() else L10(x6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c2_)) {
  // L9()
    goto L9_;
  } else {
  // L10(x6)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_x6_;
    goto L10_;
  }

L8_:;
  // goto L1(dx3)
  // L1(dx3)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx3_;
  goto L1_;

L9_:;
  // dr2 = tryDispatchBuiltin.1("$", x6)
  SEXP Rsh_Fir_array_args12[2];
  Rsh_Fir_array_args12[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args12[1] = Rsh_Fir_reg_x6_;
  Rsh_Fir_reg_dr2_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args12);
  // dc1 = getTryDispatchBuiltinDispatched(dr2)
  SEXP Rsh_Fir_array_args13[1];
  Rsh_Fir_array_args13[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dc1_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args13, Rsh_Fir_param_types_empty());
  // if dc1 then L11() else L10(dr2)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc1_)) {
  // L11()
    goto L11_;
  } else {
  // L10(dr2)
    Rsh_Fir_reg_x8_ = Rsh_Fir_reg_dr2_;
    goto L10_;
  }

L10_:;
  // r1 = `$`(x8, <sym x>)
  SEXP Rsh_Fir_array_args14[2];
  Rsh_Fir_array_args14[0] = Rsh_Fir_reg_x8_;
  Rsh_Fir_array_args14[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r1_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args14, Rsh_Fir_param_types_empty());
  // goto L8(r1)
  // L8(r1)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_r1_;
  goto L8_;

L11_:;
  // dx2 = getTryDispatchBuiltinValue(dr2)
  SEXP Rsh_Fir_array_args15[1];
  Rsh_Fir_array_args15[0] = Rsh_Fir_reg_dr2_;
  Rsh_Fir_reg_dx2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args15, Rsh_Fir_param_types_empty());
  // goto L8(dx2)
  // L8(dx2)
  Rsh_Fir_reg_dx3_ = Rsh_Fir_reg_dx2_;
  goto L8_;

L13_:;
  // c4 = `is.object`(dx6)
  SEXP Rsh_Fir_array_args16[1];
  Rsh_Fir_array_args16[0] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_c4_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args16, Rsh_Fir_param_types_empty());
  // if c4 then L17() else L18(dx6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c4_)) {
  // L17()
    goto L17_;
  } else {
  // L18(dx6)
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dx6_;
    goto L18_;
  }

L14_:;
  // dr4 = tryDispatchBuiltin.1("$", x10)
  SEXP Rsh_Fir_array_args17[2];
  Rsh_Fir_array_args17[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args17[1] = Rsh_Fir_reg_x10_;
  Rsh_Fir_reg_dr4_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args17);
  // dc2 = getTryDispatchBuiltinDispatched(dr4)
  SEXP Rsh_Fir_array_args18[1];
  Rsh_Fir_array_args18[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dc2_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args18, Rsh_Fir_param_types_empty());
  // if dc2 then L16() else L15(dr4)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc2_)) {
  // L16()
    goto L16_;
  } else {
  // L15(dr4)
    Rsh_Fir_reg_x12_ = Rsh_Fir_reg_dr4_;
    goto L15_;
  }

L15_:;
  // r2 = `$`(x12, <sym x>)
  SEXP Rsh_Fir_array_args19[2];
  Rsh_Fir_array_args19[0] = Rsh_Fir_reg_x12_;
  Rsh_Fir_array_args19[1] = Rsh_const(CCP, 1);
  Rsh_Fir_reg_r2_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args19, Rsh_Fir_param_types_empty());
  // goto L13(r2)
  // L13(r2)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_r2_;
  goto L13_;

L16_:;
  // dx5 = getTryDispatchBuiltinValue(dr4)
  SEXP Rsh_Fir_array_args20[1];
  Rsh_Fir_array_args20[0] = Rsh_Fir_reg_dr4_;
  Rsh_Fir_reg_dx5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args20, Rsh_Fir_param_types_empty());
  // goto L13(dx5)
  // L13(dx5)
  Rsh_Fir_reg_dx6_ = Rsh_Fir_reg_dx5_;
  goto L13_;

L17_:;
  // dr6 = tryDispatchBuiltin.1("[", dx6)
  SEXP Rsh_Fir_array_args21[2];
  Rsh_Fir_array_args21[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args21[1] = Rsh_Fir_reg_dx6_;
  Rsh_Fir_reg_dr6_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args21);
  // dc3 = getTryDispatchBuiltinDispatched(dr6)
  SEXP Rsh_Fir_array_args22[1];
  Rsh_Fir_array_args22[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dc3_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args22, Rsh_Fir_param_types_empty());
  // if dc3 then L19() else L18(dr6)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc3_)) {
  // L19()
    goto L19_;
  } else {
  // L18(dr6)
    Rsh_Fir_reg_dx8_ = Rsh_Fir_reg_dr6_;
    goto L18_;
  }

L18_:;
  // x13 = ld x
  Rsh_Fir_reg_x13_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x14 = force? x13
  Rsh_Fir_reg_x14_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x13_);
  // checkMissing(x14)
  SEXP Rsh_Fir_array_args23[1];
  Rsh_Fir_array_args23[0] = Rsh_Fir_reg_x14_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args23, Rsh_Fir_param_types_empty()));
  // c5 = `is.object`(x14)
  SEXP Rsh_Fir_array_args24[1];
  Rsh_Fir_array_args24[0] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_c5_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args24, Rsh_Fir_param_types_empty());
  // if c5 then L21() else L22(dx8, x14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c5_)) {
  // L21()
    goto L21_;
  } else {
  // L22(dx8, x14)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx8_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_x14_;
    goto L22_;
  }

L19_:;
  // dx9 = getTryDispatchBuiltinValue(dr6)
  SEXP Rsh_Fir_array_args25[1];
  Rsh_Fir_array_args25[0] = Rsh_Fir_reg_dr6_;
  Rsh_Fir_reg_dx9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args25, Rsh_Fir_param_types_empty());
  // goto L1(dx9)
  // L1(dx9)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_dx9_;
  goto L1_;

L20_:;
  // __ = ldf `[` in base
  Rsh_Fir_reg___ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r4 = dyn __(dx14, dx15)
  SEXP Rsh_Fir_array_args26[2];
  Rsh_Fir_array_args26[0] = Rsh_Fir_reg_dx14_;
  Rsh_Fir_array_args26[1] = Rsh_Fir_reg_dx15_;
  SEXP Rsh_Fir_array_arg_names[2];
  Rsh_Fir_array_arg_names[0] = R_MissingArg;
  Rsh_Fir_array_arg_names[1] = R_MissingArg;
  Rsh_Fir_reg_r4_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___, 2, Rsh_Fir_array_args26, Rsh_Fir_array_arg_names, CCP, RHO);
  // goto L1(r4)
  // L1(r4)
  Rsh_Fir_reg_dx4_ = Rsh_Fir_reg_r4_;
  goto L1_;

L21_:;
  // dr8 = tryDispatchBuiltin.1("$", x14)
  SEXP Rsh_Fir_array_args27[2];
  Rsh_Fir_array_args27[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args27[1] = Rsh_Fir_reg_x14_;
  Rsh_Fir_reg_dr8_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args27);
  // dc4 = getTryDispatchBuiltinDispatched(dr8)
  SEXP Rsh_Fir_array_args28[1];
  Rsh_Fir_array_args28[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dc4_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args28, Rsh_Fir_param_types_empty());
  // if dc4 then L23() else L22(dx8, dr8)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc4_)) {
  // L23()
    goto L23_;
  } else {
  // L22(dx8, dr8)
    Rsh_Fir_reg_dx11_ = Rsh_Fir_reg_dx8_;
    Rsh_Fir_reg_x16_ = Rsh_Fir_reg_dr8_;
    goto L22_;
  }

L22_:;
  // r3 = `$`(x16, <sym ord>)
  SEXP Rsh_Fir_array_args29[2];
  Rsh_Fir_array_args29[0] = Rsh_Fir_reg_x16_;
  Rsh_Fir_array_args29[1] = Rsh_const(CCP, 8);
  Rsh_Fir_reg_r3_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args29, Rsh_Fir_param_types_empty());
  // goto L20(dx11, r3)
  // L20(dx11, r3)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx11_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_r3_;
  goto L20_;

L23_:;
  // dx13 = getTryDispatchBuiltinValue(dr8)
  SEXP Rsh_Fir_array_args30[1];
  Rsh_Fir_array_args30[0] = Rsh_Fir_reg_dr8_;
  Rsh_Fir_reg_dx13_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args30, Rsh_Fir_param_types_empty());
  // goto L20(dx8, dx13)
  // L20(dx8, dx13)
  Rsh_Fir_reg_dx14_ = Rsh_Fir_reg_dx8_;
  Rsh_Fir_reg_dx15_ = Rsh_Fir_reg_dx13_;
  goto L20_;

L24_:;
  // dr10 = tryDispatchBuiltin.1("[", dx4)
  SEXP Rsh_Fir_array_args31[2];
  Rsh_Fir_array_args31[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args31[1] = Rsh_Fir_reg_dx4_;
  Rsh_Fir_reg_dr10_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args31);
  // dc5 = getTryDispatchBuiltinDispatched(dr10)
  SEXP Rsh_Fir_array_args32[1];
  Rsh_Fir_array_args32[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dc5_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args32, Rsh_Fir_param_types_empty());
  // if dc5 then L26() else L25(dr10)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc5_)) {
  // L26()
    goto L26_;
  } else {
  // L25(dr10)
    Rsh_Fir_reg_dx17_ = Rsh_Fir_reg_dr10_;
    goto L25_;
  }

L25_:;
  // x17 = ld x
  Rsh_Fir_reg_x17_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x18 = force? x17
  Rsh_Fir_reg_x18_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x17_);
  // checkMissing(x18)
  SEXP Rsh_Fir_array_args33[1];
  Rsh_Fir_array_args33[0] = Rsh_Fir_reg_x18_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args33, Rsh_Fir_param_types_empty()));
  // c7 = `is.object`(x18)
  SEXP Rsh_Fir_array_args34[1];
  Rsh_Fir_array_args34[0] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_c7_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args34, Rsh_Fir_param_types_empty());
  // if c7 then L28() else L29(dx17, x18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c7_)) {
  // L28()
    goto L28_;
  } else {
  // L29(dx17, x18)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_x18_;
    goto L29_;
  }

L26_:;
  // dx18 = getTryDispatchBuiltinValue(dr10)
  SEXP Rsh_Fir_array_args35[1];
  Rsh_Fir_array_args35[0] = Rsh_Fir_reg_dr10_;
  Rsh_Fir_reg_dx18_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args35, Rsh_Fir_param_types_empty());
  // goto L2(dx18)
  // L2(dx18)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_dx18_;
  goto L2_;

L27_:;
  // __1 = ldf `[` in base
  Rsh_Fir_reg___1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r6 = dyn __1(dx24, dx25)
  SEXP Rsh_Fir_array_args36[2];
  Rsh_Fir_array_args36[0] = Rsh_Fir_reg_dx24_;
  Rsh_Fir_array_args36[1] = Rsh_Fir_reg_dx25_;
  SEXP Rsh_Fir_array_arg_names1[2];
  Rsh_Fir_array_arg_names1[0] = R_MissingArg;
  Rsh_Fir_array_arg_names1[1] = R_MissingArg;
  Rsh_Fir_reg_r6_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___1_, 2, Rsh_Fir_array_args36, Rsh_Fir_array_arg_names1, CCP, RHO);
  // goto L2(r6)
  // L2(r6)
  Rsh_Fir_reg_dx19_ = Rsh_Fir_reg_r6_;
  goto L2_;

L28_:;
  // dr12 = tryDispatchBuiltin.1("$", x18)
  SEXP Rsh_Fir_array_args37[2];
  Rsh_Fir_array_args37[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args37[1] = Rsh_Fir_reg_x18_;
  Rsh_Fir_reg_dr12_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args37);
  // dc6 = getTryDispatchBuiltinDispatched(dr12)
  SEXP Rsh_Fir_array_args38[1];
  Rsh_Fir_array_args38[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dc6_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args38, Rsh_Fir_param_types_empty());
  // if dc6 then L30() else L29(dx17, dr12)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc6_)) {
  // L30()
    goto L30_;
  } else {
  // L29(dx17, dr12)
    Rsh_Fir_reg_dx21_ = Rsh_Fir_reg_dx17_;
    Rsh_Fir_reg_x20_ = Rsh_Fir_reg_dr12_;
    goto L29_;
  }

L29_:;
  // r5 = `$`(x20, <sym iKnots>)
  SEXP Rsh_Fir_array_args39[2];
  Rsh_Fir_array_args39[0] = Rsh_Fir_reg_x20_;
  Rsh_Fir_array_args39[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r5_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args39, Rsh_Fir_param_types_empty());
  // goto L27(dx21, r5)
  // L27(dx21, r5)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx21_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_r5_;
  goto L27_;

L30_:;
  // dx23 = getTryDispatchBuiltinValue(dr12)
  SEXP Rsh_Fir_array_args40[1];
  Rsh_Fir_array_args40[0] = Rsh_Fir_reg_dr12_;
  Rsh_Fir_reg_dx23_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args40, Rsh_Fir_param_types_empty());
  // goto L27(dx17, dx23)
  // L27(dx17, dx23)
  Rsh_Fir_reg_dx24_ = Rsh_Fir_reg_dx17_;
  Rsh_Fir_reg_dx25_ = Rsh_Fir_reg_dx23_;
  goto L27_;
}
SEXP Rsh_Fir_user_promise_inner2044426018_1(SEXP CCP, SEXP RHO) {
  // sym = ldf c
  Rsh_Fir_reg_sym = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 10), RHO);
  // base = ldf c in base
  Rsh_Fir_reg_base = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // guard = `==`.4(sym, base)
  SEXP Rsh_Fir_array_args41[2];
  Rsh_Fir_array_args41[0] = Rsh_Fir_reg_sym;
  Rsh_Fir_array_args41[1] = Rsh_Fir_reg_base;
  Rsh_Fir_reg_guard = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args41);
  // if guard then L4() else L5()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard)) {
  // L4()
    goto L4_;
  } else {
  // L5()
    goto L5_;
  }

L0_:;
  // return r9
  return Rsh_Fir_reg_r9_;

L1_:;
  // x29 = ld x
  Rsh_Fir_reg_x29_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x30 = force? x29
  Rsh_Fir_reg_x30_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x29_);
  // checkMissing(x30)
  SEXP Rsh_Fir_array_args42[1];
  Rsh_Fir_array_args42[0] = Rsh_Fir_reg_x30_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args42, Rsh_Fir_param_types_empty()));
  // c11 = `is.object`(x30)
  SEXP Rsh_Fir_array_args43[1];
  Rsh_Fir_array_args43[0] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_c11_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args43, Rsh_Fir_param_types_empty());
  // if c11 then L18() else L19(x30)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c11_)) {
  // L18()
    goto L18_;
  } else {
  // L19(x30)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_x30_;
    goto L19_;
  }

L2_:;
  // c14 = ldf c in base
  Rsh_Fir_reg_c14_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 10), RHO);
  // r19 = dyn c14(dx31, dx43)
  SEXP Rsh_Fir_array_args44[2];
  Rsh_Fir_array_args44[0] = Rsh_Fir_reg_dx31_;
  Rsh_Fir_array_args44[1] = Rsh_Fir_reg_dx43_;
  SEXP Rsh_Fir_array_arg_names2[2];
  Rsh_Fir_array_arg_names2[0] = R_MissingArg;
  Rsh_Fir_array_arg_names2[1] = R_MissingArg;
  Rsh_Fir_reg_r19_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_c14_, 2, Rsh_Fir_array_args44, Rsh_Fir_array_arg_names2, CCP, RHO);
  // goto L0(r19)
  // L0(r19)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r19_;
  goto L0_;

L3_:;
  // __3 = ldf `[` in base
  Rsh_Fir_reg___3_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r18 = dyn __3(dx46, r15)
  SEXP Rsh_Fir_array_args45[2];
  Rsh_Fir_array_args45[0] = Rsh_Fir_reg_dx46_;
  Rsh_Fir_array_args45[1] = Rsh_Fir_reg_r15_;
  SEXP Rsh_Fir_array_arg_names3[2];
  Rsh_Fir_array_arg_names3[0] = R_MissingArg;
  Rsh_Fir_array_arg_names3[1] = R_MissingArg;
  Rsh_Fir_reg_r18_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___3_, 2, Rsh_Fir_array_args45, Rsh_Fir_array_arg_names3, CCP, RHO);
  // goto L2(r18)
  // L2(r18)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_r18_;
  goto L2_;

L4_:;
  // x21 = ld x
  Rsh_Fir_reg_x21_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x22 = force? x21
  Rsh_Fir_reg_x22_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x21_);
  // checkMissing(x22)
  SEXP Rsh_Fir_array_args46[1];
  Rsh_Fir_array_args46[0] = Rsh_Fir_reg_x22_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args46, Rsh_Fir_param_types_empty()));
  // c8 = `is.object`(x22)
  SEXP Rsh_Fir_array_args47[1];
  Rsh_Fir_array_args47[0] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_c8_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args47, Rsh_Fir_param_types_empty());
  // if c8 then L7() else L8(x22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c8_)) {
  // L7()
    goto L7_;
  } else {
  // L8(x22)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_x22_;
    goto L8_;
  }

L5_:;
  // r8 = dyn base(<lang `[`(`$`(x, yf), `$`(x, iKnots))>, <lang `[`(`$`(x, yf), length(`$`(x, yf)))>)
  SEXP Rsh_Fir_array_args48[2];
  Rsh_Fir_array_args48[0] = Rsh_const(CCP, 11);
  Rsh_Fir_array_args48[1] = Rsh_const(CCP, 12);
  SEXP Rsh_Fir_array_arg_names4[2];
  Rsh_Fir_array_arg_names4[0] = R_MissingArg;
  Rsh_Fir_array_arg_names4[1] = R_MissingArg;
  Rsh_Fir_reg_r8_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base, 2, Rsh_Fir_array_args48, Rsh_Fir_array_arg_names4, CCP, RHO);
  // goto L0(r8)
  // L0(r8)
  Rsh_Fir_reg_r9_ = Rsh_Fir_reg_r8_;
  goto L0_;

L6_:;
  // c9 = `is.object`(dx27)
  SEXP Rsh_Fir_array_args49[1];
  Rsh_Fir_array_args49[0] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_c9_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args49, Rsh_Fir_param_types_empty());
  // if c9 then L10() else L11(dx27)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c9_)) {
  // L10()
    goto L10_;
  } else {
  // L11(dx27)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dx27_;
    goto L11_;
  }

L7_:;
  // dr14 = tryDispatchBuiltin.1("$", x22)
  SEXP Rsh_Fir_array_args50[2];
  Rsh_Fir_array_args50[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args50[1] = Rsh_Fir_reg_x22_;
  Rsh_Fir_reg_dr14_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args50);
  // dc7 = getTryDispatchBuiltinDispatched(dr14)
  SEXP Rsh_Fir_array_args51[1];
  Rsh_Fir_array_args51[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dc7_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args51, Rsh_Fir_param_types_empty());
  // if dc7 then L9() else L8(dr14)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc7_)) {
  // L9()
    goto L9_;
  } else {
  // L8(dr14)
    Rsh_Fir_reg_x24_ = Rsh_Fir_reg_dr14_;
    goto L8_;
  }

L8_:;
  // r10 = `$`(x24, <sym yf>)
  SEXP Rsh_Fir_array_args52[2];
  Rsh_Fir_array_args52[0] = Rsh_Fir_reg_x24_;
  Rsh_Fir_array_args52[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r10_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args52, Rsh_Fir_param_types_empty());
  // goto L6(r10)
  // L6(r10)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_r10_;
  goto L6_;

L9_:;
  // dx26 = getTryDispatchBuiltinValue(dr14)
  SEXP Rsh_Fir_array_args53[1];
  Rsh_Fir_array_args53[0] = Rsh_Fir_reg_dr14_;
  Rsh_Fir_reg_dx26_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args53, Rsh_Fir_param_types_empty());
  // goto L6(dx26)
  // L6(dx26)
  Rsh_Fir_reg_dx27_ = Rsh_Fir_reg_dx26_;
  goto L6_;

L10_:;
  // dr16 = tryDispatchBuiltin.1("[", dx27)
  SEXP Rsh_Fir_array_args54[2];
  Rsh_Fir_array_args54[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args54[1] = Rsh_Fir_reg_dx27_;
  Rsh_Fir_reg_dr16_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args54);
  // dc8 = getTryDispatchBuiltinDispatched(dr16)
  SEXP Rsh_Fir_array_args55[1];
  Rsh_Fir_array_args55[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dc8_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args55, Rsh_Fir_param_types_empty());
  // if dc8 then L12() else L11(dr16)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc8_)) {
  // L12()
    goto L12_;
  } else {
  // L11(dr16)
    Rsh_Fir_reg_dx29_ = Rsh_Fir_reg_dr16_;
    goto L11_;
  }

L11_:;
  // x25 = ld x
  Rsh_Fir_reg_x25_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x26 = force? x25
  Rsh_Fir_reg_x26_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x25_);
  // checkMissing(x26)
  SEXP Rsh_Fir_array_args56[1];
  Rsh_Fir_array_args56[0] = Rsh_Fir_reg_x26_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args56, Rsh_Fir_param_types_empty()));
  // c10 = `is.object`(x26)
  SEXP Rsh_Fir_array_args57[1];
  Rsh_Fir_array_args57[0] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_c10_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args57, Rsh_Fir_param_types_empty());
  // if c10 then L14() else L15(dx29, x26)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c10_)) {
  // L14()
    goto L14_;
  } else {
  // L15(dx29, x26)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_x26_;
    goto L15_;
  }

L12_:;
  // dx30 = getTryDispatchBuiltinValue(dr16)
  SEXP Rsh_Fir_array_args58[1];
  Rsh_Fir_array_args58[0] = Rsh_Fir_reg_dr16_;
  Rsh_Fir_reg_dx30_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args58, Rsh_Fir_param_types_empty());
  // goto L1(dx30)
  // L1(dx30)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_dx30_;
  goto L1_;

L13_:;
  // __2 = ldf `[` in base
  Rsh_Fir_reg___2_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 7), RHO);
  // r12 = dyn __2(dx36, dx37)
  SEXP Rsh_Fir_array_args59[2];
  Rsh_Fir_array_args59[0] = Rsh_Fir_reg_dx36_;
  Rsh_Fir_array_args59[1] = Rsh_Fir_reg_dx37_;
  SEXP Rsh_Fir_array_arg_names5[2];
  Rsh_Fir_array_arg_names5[0] = R_MissingArg;
  Rsh_Fir_array_arg_names5[1] = R_MissingArg;
  Rsh_Fir_reg_r12_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg___2_, 2, Rsh_Fir_array_args59, Rsh_Fir_array_arg_names5, CCP, RHO);
  // goto L1(r12)
  // L1(r12)
  Rsh_Fir_reg_dx31_ = Rsh_Fir_reg_r12_;
  goto L1_;

L14_:;
  // dr18 = tryDispatchBuiltin.1("$", x26)
  SEXP Rsh_Fir_array_args60[2];
  Rsh_Fir_array_args60[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args60[1] = Rsh_Fir_reg_x26_;
  Rsh_Fir_reg_dr18_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args60);
  // dc9 = getTryDispatchBuiltinDispatched(dr18)
  SEXP Rsh_Fir_array_args61[1];
  Rsh_Fir_array_args61[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dc9_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args61, Rsh_Fir_param_types_empty());
  // if dc9 then L16() else L15(dx29, dr18)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc9_)) {
  // L16()
    goto L16_;
  } else {
  // L15(dx29, dr18)
    Rsh_Fir_reg_dx33_ = Rsh_Fir_reg_dx29_;
    Rsh_Fir_reg_x28_ = Rsh_Fir_reg_dr18_;
    goto L15_;
  }

L15_:;
  // r11 = `$`(x28, <sym iKnots>)
  SEXP Rsh_Fir_array_args62[2];
  Rsh_Fir_array_args62[0] = Rsh_Fir_reg_x28_;
  Rsh_Fir_array_args62[1] = Rsh_const(CCP, 9);
  Rsh_Fir_reg_r11_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args62, Rsh_Fir_param_types_empty());
  // goto L13(dx33, r11)
  // L13(dx33, r11)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx33_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_r11_;
  goto L13_;

L16_:;
  // dx35 = getTryDispatchBuiltinValue(dr18)
  SEXP Rsh_Fir_array_args63[1];
  Rsh_Fir_array_args63[0] = Rsh_Fir_reg_dr18_;
  Rsh_Fir_reg_dx35_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args63, Rsh_Fir_param_types_empty());
  // goto L13(dx29, dx35)
  // L13(dx29, dx35)
  Rsh_Fir_reg_dx36_ = Rsh_Fir_reg_dx29_;
  Rsh_Fir_reg_dx37_ = Rsh_Fir_reg_dx35_;
  goto L13_;

L17_:;
  // c12 = `is.object`(dx39)
  SEXP Rsh_Fir_array_args64[1];
  Rsh_Fir_array_args64[0] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_c12_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args64, Rsh_Fir_param_types_empty());
  // if c12 then L21() else L22(dx39)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c12_)) {
  // L21()
    goto L21_;
  } else {
  // L22(dx39)
    Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dx39_;
    goto L22_;
  }

L18_:;
  // dr20 = tryDispatchBuiltin.1("$", x30)
  SEXP Rsh_Fir_array_args65[2];
  Rsh_Fir_array_args65[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args65[1] = Rsh_Fir_reg_x30_;
  Rsh_Fir_reg_dr20_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args65);
  // dc10 = getTryDispatchBuiltinDispatched(dr20)
  SEXP Rsh_Fir_array_args66[1];
  Rsh_Fir_array_args66[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dc10_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args66, Rsh_Fir_param_types_empty());
  // if dc10 then L20() else L19(dr20)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc10_)) {
  // L20()
    goto L20_;
  } else {
  // L19(dr20)
    Rsh_Fir_reg_x32_ = Rsh_Fir_reg_dr20_;
    goto L19_;
  }

L19_:;
  // r13 = `$`(x32, <sym yf>)
  SEXP Rsh_Fir_array_args67[2];
  Rsh_Fir_array_args67[0] = Rsh_Fir_reg_x32_;
  Rsh_Fir_array_args67[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r13_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args67, Rsh_Fir_param_types_empty());
  // goto L17(r13)
  // L17(r13)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_r13_;
  goto L17_;

L20_:;
  // dx38 = getTryDispatchBuiltinValue(dr20)
  SEXP Rsh_Fir_array_args68[1];
  Rsh_Fir_array_args68[0] = Rsh_Fir_reg_dr20_;
  Rsh_Fir_reg_dx38_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args68, Rsh_Fir_param_types_empty());
  // goto L17(dx38)
  // L17(dx38)
  Rsh_Fir_reg_dx39_ = Rsh_Fir_reg_dx38_;
  goto L17_;

L21_:;
  // dr22 = tryDispatchBuiltin.1("[", dx39)
  SEXP Rsh_Fir_array_args69[2];
  Rsh_Fir_array_args69[0] = Rsh_const(CCP, 6);
  Rsh_Fir_array_args69[1] = Rsh_Fir_reg_dx39_;
  Rsh_Fir_reg_dr22_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args69);
  // dc11 = getTryDispatchBuiltinDispatched(dr22)
  SEXP Rsh_Fir_array_args70[1];
  Rsh_Fir_array_args70[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dc11_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args70, Rsh_Fir_param_types_empty());
  // if dc11 then L23() else L22(dr22)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc11_)) {
  // L23()
    goto L23_;
  } else {
  // L22(dr22)
    Rsh_Fir_reg_dx41_ = Rsh_Fir_reg_dr22_;
    goto L22_;
  }

L22_:;
  // sym1 = ldf length
  Rsh_Fir_reg_sym1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Local, Rsh_const(CCP, 14), RHO);
  // base1 = ldf length in base
  Rsh_Fir_reg_base1_ = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // guard1 = `==`.4(sym1, base1)
  SEXP Rsh_Fir_array_args71[2];
  Rsh_Fir_array_args71[0] = Rsh_Fir_reg_sym1_;
  Rsh_Fir_array_args71[1] = Rsh_Fir_reg_base1_;
  Rsh_Fir_reg_guard1_ = Rsh_Fir_builtin_eq_v4(CCP, RHO, 2, Rsh_Fir_array_args71);
  // if guard1 then L24() else L25()
  if (Rsh_Fir_is_true(Rsh_Fir_reg_guard1_)) {
  // L24()
    goto L24_;
  } else {
  // L25()
    goto L25_;
  }

L23_:;
  // dx42 = getTryDispatchBuiltinValue(dr22)
  SEXP Rsh_Fir_array_args72[1];
  Rsh_Fir_array_args72[0] = Rsh_Fir_reg_dr22_;
  Rsh_Fir_reg_dx42_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args72, Rsh_Fir_param_types_empty());
  // goto L2(dx42)
  // L2(dx42)
  Rsh_Fir_reg_dx43_ = Rsh_Fir_reg_dx42_;
  goto L2_;

L24_:;
  // x33 = ld x
  Rsh_Fir_reg_x33_ = Rsh_Fir_load(Rsh_const(CCP, 1), RHO);
  // x34 = force? x33
  Rsh_Fir_reg_x34_ = Rsh_Fir_maybe_force(Rsh_Fir_reg_x33_);
  // checkMissing(x34)
  SEXP Rsh_Fir_array_args73[1];
  Rsh_Fir_array_args73[0] = Rsh_Fir_reg_x34_;
  (void)(Rsh_Fir_intrinsic_checkMissing(CCP, RHO, 1, Rsh_Fir_array_args73, Rsh_Fir_param_types_empty()));
  // c13 = `is.object`(x34)
  SEXP Rsh_Fir_array_args74[1];
  Rsh_Fir_array_args74[0] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_c13_ = Rsh_Fir_call_builtin(397, CCP, RHO, 1, Rsh_Fir_array_args74, Rsh_Fir_param_types_empty());
  // if c13 then L27() else L28(dx41, x34)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_c13_)) {
  // L27()
    goto L27_;
  } else {
  // L28(dx41, x34)
    Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx41_;
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_x34_;
    goto L28_;
  }

L25_:;
  // r14 = dyn base1(<lang `$`(x, yf)>)
  SEXP Rsh_Fir_array_args75[1];
  Rsh_Fir_array_args75[0] = Rsh_const(CCP, 15);
  SEXP Rsh_Fir_array_arg_names6[1];
  Rsh_Fir_array_arg_names6[0] = R_MissingArg;
  Rsh_Fir_reg_r14_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_base1_, 1, Rsh_Fir_array_args75, Rsh_Fir_array_arg_names6, CCP, RHO);
  // goto L3(dx41, r14)
  // L3(dx41, r14)
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r14_;
  goto L3_;

L26_:;
  // length = ldf length in base
  Rsh_Fir_reg_length = Rsh_Fir_load_fun(Rsh_Fir_LoadFun_Base, Rsh_const(CCP, 14), RHO);
  // r17 = dyn length(dx52)
  SEXP Rsh_Fir_array_args76[1];
  Rsh_Fir_array_args76[0] = Rsh_Fir_reg_dx52_;
  SEXP Rsh_Fir_array_arg_names7[1];
  Rsh_Fir_array_arg_names7[0] = R_MissingArg;
  Rsh_Fir_reg_r17_ = Rsh_Fir_call_dynamic(Rsh_Fir_reg_length, 1, Rsh_Fir_array_args76, Rsh_Fir_array_arg_names7, CCP, RHO);
  // goto L3(dx51, r17)
  // L3(dx51, r17)
  Rsh_Fir_reg_dx46_ = Rsh_Fir_reg_dx51_;
  Rsh_Fir_reg_r15_ = Rsh_Fir_reg_r17_;
  goto L3_;

L27_:;
  // dr24 = tryDispatchBuiltin.1("$", x34)
  SEXP Rsh_Fir_array_args77[2];
  Rsh_Fir_array_args77[0] = Rsh_const(CCP, 4);
  Rsh_Fir_array_args77[1] = Rsh_Fir_reg_x34_;
  Rsh_Fir_reg_dr24_ = Rsh_Fir_intrinsic_tryDispatchBuiltin_v1(CCP, RHO, 2, Rsh_Fir_array_args77);
  // dc12 = getTryDispatchBuiltinDispatched(dr24)
  SEXP Rsh_Fir_array_args78[1];
  Rsh_Fir_array_args78[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dc12_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinDispatched(CCP, RHO, 1, Rsh_Fir_array_args78, Rsh_Fir_param_types_empty());
  // if dc12 then L29() else L28(dx41, dr24)
  if (Rsh_Fir_is_true(Rsh_Fir_reg_dc12_)) {
  // L29()
    goto L29_;
  } else {
  // L28(dx41, dr24)
    Rsh_Fir_reg_dx48_ = Rsh_Fir_reg_dx41_;
    Rsh_Fir_reg_x36_ = Rsh_Fir_reg_dr24_;
    goto L28_;
  }

L28_:;
  // r16 = `$`(x36, <sym yf>)
  SEXP Rsh_Fir_array_args79[2];
  Rsh_Fir_array_args79[0] = Rsh_Fir_reg_x36_;
  Rsh_Fir_array_args79[1] = Rsh_const(CCP, 13);
  Rsh_Fir_reg_r16_ = Rsh_Fir_call_builtin(17, CCP, RHO, 2, Rsh_Fir_array_args79, Rsh_Fir_param_types_empty());
  // goto L26(dx48, r16)
  // L26(dx48, r16)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx48_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_r16_;
  goto L26_;

L29_:;
  // dx50 = getTryDispatchBuiltinValue(dr24)
  SEXP Rsh_Fir_array_args80[1];
  Rsh_Fir_array_args80[0] = Rsh_Fir_reg_dr24_;
  Rsh_Fir_reg_dx50_ = Rsh_Fir_intrinsic_getTryDispatchBuiltinValue(CCP, RHO, 1, Rsh_Fir_array_args80, Rsh_Fir_param_types_empty());
  // goto L26(dx41, dx50)
  // L26(dx41, dx50)
  Rsh_Fir_reg_dx51_ = Rsh_Fir_reg_dx41_;
  Rsh_Fir_reg_dx52_ = Rsh_Fir_reg_dx50_;
  goto L26_;
}
SEXP Rsh_Fir_snapshot_entrypoint(SEXP RHO, SEXP CCP) {
  return Rsh_Fir_user_function_main(CCP, RHO, 0, NULL, NULL);
}
