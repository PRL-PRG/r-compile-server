fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `formula.terms` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg environment:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg l:*, reg attributes__:cls, reg r5:V, reg ____:cls, reg env:*, reg env1:V, reg p1:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg globalenv:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg l1:*, reg environment__:cls, reg r12:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    environment = ldf environment;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn environment(p);
    check L2() else D1();
  D1():
    deopt 3 [r1];
  L2():
    st env = r1;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r3):
    l = ld x;
    attributes__ = ldf `attributes<-`;
    check L6() else D3();
  L3():
    list = ldf list in base;
    r4 = dyn list("formula");
    check L5() else D2();
  L4():
    r2 = dyn base[class]("formula");
    goto L0(r2);
  D2():
    deopt 10 [r4];
  D3():
    deopt 12 [r3, l, r3];
  L5():
    goto L0(r4);
  L6():
    r5 = dyn attributes__(l, NULL, r3);
    check L7() else D4();
  D4():
    deopt 14 [r3, r5];
  L7():
    st x = r5;
    ____ = ldf `%||%`;
    check L8() else D5();
  D5():
    deopt 17 [];
  L8():
    p1 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    p2 = prom<V +>{
      sym1 = ldf globalenv;
      base1 = ldf globalenv in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      globalenv = ldf globalenv in base;
      r9 = dyn globalenv();
      goto L0(r9);
    L2():
      r7 = dyn base1();
      goto L0(r7);
    };
    r11 = dyn ____(p1, p2);
    check L9() else D6();
  D6():
    deopt 20 [r11];
  L9():
    l1 = ld x;
    environment__ = ldf `environment<-`;
    check L10() else D7();
  D7():
    deopt 22 [r11, l1, r11];
  L10():
    r12 = dyn environment__(l1, NULL, r11);
    check L11() else D8();
  D8():
    deopt 24 [r11, r12];
  L11():
    st x = r12;
    x3 = ld x;
    check L12() else D9();
  D9():
    deopt 26 [x3];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}