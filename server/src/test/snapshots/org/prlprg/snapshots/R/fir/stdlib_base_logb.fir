fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner729326466;
    st logb = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner729326466(x, base) {
  (reg x:*, reg base:*) -+> V { var x:*, var base:*, reg base_isMissing:L, reg base_orDefault:*, reg sym:cls, reg base1:cls, reg guard:L, reg r:V, reg r1:V, reg r2:V, reg p:p(V +), reg sym1:cls, reg base2:cls, reg guard1:L, reg r4:V, reg r5:V, reg missing:cls, reg r6:V, reg c:L, reg sym2:cls, reg base3:cls, reg guard2:L, reg r7:V, reg r8:V, reg x1:*, reg x2:V, reg r9:V, reg sym3:cls, reg base4:cls, reg guard3:L, reg r10:V, reg r11:V, reg x3:*, reg x4:V, reg base5:*, reg base6:V, reg r12:V |
    mkenv;
    st x = x;
    base_isMissing = missing.0(base);
    if base_isMissing then L0() else L1(base);
  L0():
    p = prom<V +>{
      sym = ldf exp;
      base1 = ldf exp in base;
      guard = `==`.4(sym, base1);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      r2 = exp(1.0);
      goto L0(r2);
    L2():
      r = dyn base1(1.0);
      goto L0(r);
    };
    goto L1(p);
  L1(base_orDefault):
    st base = base_orDefault;
    sym1 = ldf missing;
    base2 = ldf missing in base;
    guard1 = `==`.4(sym1, base2);
    if guard1 then L6() else L7();
  L2(r5):
    c = `as.logical`(r5);
    if c then L8() else L3();
  L6():
    missing = ldf missing in base;
    r6 = dyn missing(<sym base>);
    goto L2(r6);
  L7():
    r4 = dyn base2(<sym base>);
    goto L2(r4);
  L3():
    sym3 = ldf log;
    base4 = ldf log in base;
    guard3 = `==`.4(sym3, base4);
    if guard3 then L13() else L14();
  L8():
    sym2 = ldf log;
    base3 = ldf log in base;
    guard2 = `==`.4(sym2, base3);
    if guard2 then L9() else L10();
  L4(r8):
    popenv;
    return r8;
  L5(r11):
    popenv;
    return r11;
  L9():
    x1 = ld x;
    check L11() else D0();
  L10():
    r7 = dyn base3(<sym x>);
    goto L4(r7);
  L13():
    x3 = ld x;
    check L15() else D1();
  L14():
    r10 = dyn base4(<sym x>, <sym base>);
    goto L5(r10);
  D0():
    deopt 4 [x1];
  D1():
    deopt 8 [x3];
  L11():
    x2 = force? x1;
    checkMissing(x2);
    r9 = log(x2, 2.718281828459045);
    goto L4(r9);
  L15():
    x4 = force? x3;
    checkMissing(x4);
    base5 = ld base;
    check L16() else D2();
  D2():
    deopt 9 [x4, base5];
  L16():
    base6 = force? base5;
    checkMissing(base6);
    r12 = log(x4, base6);
    goto L5(r12);
  }
}