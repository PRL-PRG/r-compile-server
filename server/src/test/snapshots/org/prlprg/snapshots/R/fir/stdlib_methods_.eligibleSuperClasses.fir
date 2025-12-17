fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner495653617;
    st `.eligibleSuperClasses` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner495653617(contains, simpleOnly) {
  (reg contains:*, reg simpleOnly:*) -+> V { var contains:*, var simpleOnly:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg contains1:*, reg contains2:V, reg names:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg what:*, reg what1:V, reg length:cls, reg r5:V, reg r6:V, reg c:L, reg what2:*, reg what3:V, reg vapply:cls, reg contains3:*, reg contains4:V, reg p:p(V +), reg simpleOnly1:*, reg simpleOnly2:V, reg c1:L, reg r8:cls, reg r9:cls, reg p1:p(V +), reg r11:V, reg what4:*, reg what5:V, reg c2:L, reg what7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg eligible:*, reg eligible1:V, reg __:cls, reg r12:V |
    mkenv;
    st contains = contains;
    st simpleOnly = simpleOnly;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r1):
    st what = r1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    contains1 = ld contains;
    check L6() else D0();
  L5():
    r = dyn base(<sym contains>);
    goto L0(r);
  D0():
    deopt 2 [contains1];
  L1(r4):
    r6 = `!`(r4);
    c = `as.logical`(r6);
    if c then L12() else L2();
  L6():
    contains2 = force? contains1;
    checkMissing(contains2);
    names = ldf names in base;
    r2 = dyn names(contains2);
    check L7() else D1();
  L8():
    what = ld what;
    check L10() else D2();
  L9():
    r3 = dyn base1(<sym what>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [what];
  L2():
    vapply = ldf vapply;
    check L15() else D5();
  L7():
    goto L0(r2);
  L10():
    what1 = force? what;
    checkMissing(what1);
    length = ldf length in base;
    r5 = dyn length(what1);
    check L11() else D3();
  L12():
    what2 = ld what;
    check L13() else D4();
  D3():
    deopt 12 [r5];
  D4():
    deopt 14 [what2];
  D5():
    deopt 17 [];
  L11():
    goto L1(r5);
  L13():
    what3 = force? what2;
    checkMissing(what3);
    popenv;
    return what3;
  L15():
    p = prom<V +>{
      contains3 = ld contains;
      contains4 = force? contains3;
      checkMissing(contains4);
      return contains4;
    };
    p1 = prom<V +>{
      simpleOnly1 = ld simpleOnly;
      simpleOnly2 = force? simpleOnly1;
      checkMissing(simpleOnly2);
      c1 = `as.logical`(simpleOnly2);
      if c1 then L1() else L0();
    L0():
      r9 = clos inner2501545716;
      return r9;
    L1():
      r8 = clos inner2501545716;
      return r8;
    };
    r11 = dyn vapply(p, p1, NA_LGL);
    check L16() else D6();
  D6():
    deopt 21 [r11];
  L16():
    st eligible = r11;
    what4 = ld what;
    check L17() else D7();
  D7():
    deopt 23 [what4];
  L17():
    what5 = force? what4;
    checkMissing(what5);
    c2 = `is.object`(what5);
    if c2 then L18() else L19(what5);
  L3(dx1):
    popenv;
    return dx1;
  L18():
    dr = tryDispatchBuiltin.1("[", what5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(what7):
    eligible = ld eligible;
    check L21() else D8();
  D8():
    deopt 25 [what7, eligible];
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L21():
    eligible1 = force? eligible;
    __ = ldf `[` in base;
    r12 = dyn __(what7, eligible1);
    goto L3(r12);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg c3:V, reg x3:*, reg x4:V, reg c4:L, reg c5:V, reg c7:L, reg c8:V, reg __:cls, reg r2:V, reg c10:L, reg c11:V |
    mkenv;
    st x = x;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L6() else L1(c1);
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c3):
    c7 = `as.logical`(c3);
    if c7 then L2(c7) else L9();
  L5():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.logical`(x2);
    goto L0(c);
  L6():
    x3 = ld x;
    check L7() else D1();
  D1():
    deopt 4 [c1, x3];
  L2(c8):
    popenv;
    return c8;
  L7():
    x4 = force? x3;
    checkMissing(x4);
    c4 = `as.logical`(x4);
    c5 = `&&`(c1, c4);
    goto L1(c5);
  L9():
    __ = ldf `@` in base;
    r2 = dyn __(<sym x>, <sym simple>);
    c10 = `as.logical`(r2);
    c11 = `||`(c7, c10);
    goto L2(c11);
  }
}