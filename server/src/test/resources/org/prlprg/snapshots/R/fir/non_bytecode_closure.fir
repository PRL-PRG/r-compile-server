fun main() {
  () -+> V { reg function:cls, reg x:*, reg x1:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg browser:cls, reg r2:V, reg p:p(V +), reg r5:V, reg f:cls, reg r6:V |
    mkenv;
    function = ldf function;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      c = `as.logical`(x1);
      if c then L3() else L0();
    L0():
      goto L2();
    L2():
      return 1.0;
    L3():
      sym = ldf browser;
      base = ldf browser in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L1(r1):
      goto L2();
    L4():
      browser = ldf browser in base;
      r2 = dyn browser();
      goto L1(r2);
    L5():
      r = dyn base();
      goto L1(r);
    };
    r5 = dyn function(<list x=>, p, NULL);
    check L1() else D1();
  D1():
    deopt 5 [r5];
  L1():
    st f = r5;
    f = ldf f;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r6 = dyn f(FALSE);
    check L3() else D3();
  D3():
    deopt 10 [r6];
  L3():
    popenv;
    return r6;
  }
}