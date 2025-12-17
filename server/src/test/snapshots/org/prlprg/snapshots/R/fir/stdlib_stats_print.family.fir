fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.family` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg cat1:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r3:V, reg p1:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg x9:*, reg x10:V, reg invisible:cls, reg r8:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r = `$`(x4, <sym family>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn cat("\nFamily:", p, "\n");
    check L2() else D1();
  D1():
    deopt 5 [r2];
  L2():
    cat1 = ldf cat;
    check L3() else D2();
  D2():
    deopt 7 [];
  L3():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c1 = `is.object`(x6);
      if c1 then L1() else L2(x6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", x6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x8):
      r3 = `$`(x8, <sym link>);
      goto L0(r3);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r5 = dyn cat1("Link function:", p1, "\n\n");
    check L4() else D3();
  D3():
    deopt 11 [r5];
  L4():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r7):
    popenv;
    return r7;
  L5():
    x9 = ld x;
    check L7() else D4();
  L6():
    r6 = dyn base(<sym x>);
    goto L0(r6);
  D4():
    deopt 14 [x9];
  L7():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r8 = dyn invisible(x10);
    check L8() else D5();
  D5():
    deopt 17 [r8];
  L8():
    goto L0(r8);
  }
}