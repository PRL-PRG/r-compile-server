fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1384373858;
    st `.untracedFunction` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg is:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg c:L, reg __:cls, reg r2:V, reg f3:*, reg f4:V |
    mkenv;
    st f = f;
    goto L1();
  L1():
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
    r1 = dyn is(p, "traceable");
    check L3() else D1();
  D1():
    deopt 4 [r1];
  L3():
    c = `as.logical`(r1);
    if c then L4() else L0();
  L0():
    f3 = ld f;
    check L6() else D2();
  L4():
    __ = ldf `@` in base;
    r2 = dyn __(<sym f>, <sym original>);
    st f = r2;
    goto L1();
  D2():
    deopt 11 [f3];
  L6():
    f4 = force? f3;
    checkMissing(f4);
    popenv;
    return f4;
  }
}