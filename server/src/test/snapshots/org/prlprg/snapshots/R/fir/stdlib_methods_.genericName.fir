fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st `.genericName` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg is:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg c:L, reg __:cls, reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg f3:*, reg f4:V, reg as_character:cls, reg r5:V |
    mkenv;
    st f = f;
    is = ldf is;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn is(p, "genericFunction");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0();
  L0():
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L4():
    __ = ldf `@` in base;
    r2 = dyn __(<sym f>, <sym generic>);
    popenv;
    return r2;
  L1(r4):
    popenv;
    return r4;
  L6():
    f3 = ld f;
    check L8() else D2();
  L7():
    r3 = dyn base(<sym f>);
    goto L1(r3);
  D2():
    deopt 9 [f3];
  L8():
    f4 = force? f3;
    checkMissing(f4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(f4);
    check L9() else D3();
  D3():
    deopt 12 [r5];
  L9():
    goto L1(r5);
  }
}