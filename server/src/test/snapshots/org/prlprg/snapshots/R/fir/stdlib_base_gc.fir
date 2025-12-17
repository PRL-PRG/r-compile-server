fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1998707430;
    st gc = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1998707430(verbose, reset, full) {
  (reg verbose:*, reg reset:*, reg full:*) -+> V { var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var reset:*, reg reset_isMissing:L, reg reset_orDefault:*, var full:*, reg full_isMissing:L, reg full_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg verbose1:*, reg verbose2:V, reg reset1:*, reg reset2:V, reg full1:*, reg full2:V, reg gc:cls, reg r4:V, reg matrix:cls, reg res:*, reg res1:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c:cls, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg c1:cls, reg r13:V, reg list:cls, reg r14:V, reg p2:p(V +), reg r16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r17:V, reg r18:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r19:V, reg r20:V, reg res2:*, reg res3:V, reg c2:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg is_na:cls, reg r22:V, reg all:cls, reg r23:V, reg c3:L, reg res6:*, reg res7:V, reg c4:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r24:V, reg res10:*, reg res11:V |
    mkenv;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0() else L1(verbose);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L1(p);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    reset_isMissing = missing.0(reset);
    if reset_isMissing then L2(FALSE) else L2(reset);
  L2(reset_orDefault):
    st reset = reset_orDefault;
    full_isMissing = missing.0(full);
    if full_isMissing then L3(TRUE) else L3(full);
  L3(full_orDefault):
    st full = full_orDefault;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L4(r3):
    st res = r3;
    matrix = ldf matrix;
    check L16() else D4();
  L10():
    verbose1 = ld verbose;
    check L12() else D0();
  L11():
    r2 = dyn base(<lang gc(verbose, reset, full)>);
    goto L4(r2);
  D0():
    deopt 2 [verbose1];
  D4():
    deopt 12 [];
  L12():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    reset1 = ld reset;
    check L13() else D1();
  L16():
    p1 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p2 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r7):
      return r7;
    L3():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r6 = dyn base1(<lang c("Ncells", "Vcells")>, <lang c("used", "(Mb)", "gc trigger", "(Mb)", "limit (Mb)", "max used", "(Mb)")>);
      goto L0(r6);
    L1(r9):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L7() else L8();
    L5():
      c = ldf c in base;
      r10 = dyn c("Ncells", "Vcells");
      goto L1(r10);
    L6():
      r8 = dyn base2("Ncells", "Vcells");
      goto L1(r8);
    L2(r12):
      list = ldf list in base;
      r14 = dyn list(r9, r12);
      goto L0(r14);
    L7():
      c1 = ldf c in base;
      r13 = dyn c1("used", "(Mb)", "gc trigger", "(Mb)", "limit (Mb)", "max used", "(Mb)");
      goto L2(r13);
    L8():
      r11 = dyn base3("used", "(Mb)", "gc trigger", "(Mb)", "limit (Mb)", "max used", "(Mb)");
      goto L2(r11);
    };
    r16 = dyn matrix[, , , dimnames](p1, 2, 7, p2);
    check L17() else D5();
  D1():
    deopt 4 [reset1];
  D5():
    deopt 18 [r16];
  L13():
    reset2 = force? reset1;
    checkMissing(reset2);
    full1 = ld full;
    check L14() else D2();
  L17():
    st res = r16;
    sym4 = ldf all;
    base4 = ldf all in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L18() else L19();
  D2():
    deopt 6 [full1];
  L5(r18):
    c3 = `as.logical`(r18);
    if c3 then L28() else L8();
  L14():
    full2 = force? full1;
    checkMissing(full2);
    gc = ldf gc in base;
    r4 = dyn gc(verbose2, reset2, full2);
    check L15() else D3();
  L18():
    sym5 = ldf `is.na`;
    base5 = ldf `is.na` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L20() else L21();
  L19():
    r17 = dyn base4(<lang is.na(`[`(res, , 5))>);
    goto L5(r17);
  D3():
    deopt 9 [r4];
  L6(r20):
    all = ldf all in base;
    r23 = dyn all(r20);
    check L27() else D8();
  L8():
    res10 = ld res;
    check L34() else D10();
  L15():
    goto L4(r4);
  L20():
    res2 = ld res;
    check L22() else D6();
  L21():
    r19 = dyn base5(<lang `[`(res, , 5)>);
    goto L6(r19);
  L28():
    res6 = ld res;
    check L29() else D9();
  D6():
    deopt 24 [res2];
  D8():
    deopt 33 [r23];
  D9():
    deopt 34 [res6];
  D10():
    deopt 41 [res10];
  L22():
    res3 = force? res2;
    checkMissing(res3);
    c2 = `is.object`(res3);
    if c2 then L23() else L24();
  L27():
    goto L5(r23);
  L29():
    res7 = force? res6;
    checkMissing(res7);
    c4 = `is.object`(res7);
    if c4 then L30() else L31();
  L34():
    res11 = force? res10;
    checkMissing(res11);
    popenv;
    return res11;
  L7(dx1):
    is_na = ldf `is.na` in base;
    r22 = dyn is_na(dx1);
    check L26() else D7();
  L9(dx3):
    popenv;
    return dx3;
  L23():
    dr = tryDispatchBuiltin.1("[", res3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24();
  L24():
    __ = ldf `[` in base;
    r21 = dyn __(res3, <missing>, 5);
    goto L7(r21);
  L30():
    dr2 = tryDispatchBuiltin.1("[", res7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31();
  L31():
    __1 = ldf `[` in base;
    r24 = dyn __1(res7, <missing>, -5);
    goto L9(r24);
  D7():
    deopt 31 [r22];
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L7(dx);
  L26():
    goto L6(r22);
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx2);
  }
}