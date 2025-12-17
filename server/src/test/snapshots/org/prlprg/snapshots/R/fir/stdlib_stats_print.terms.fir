fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.terms` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg print_default:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg p:p(V +), reg ddd1:dots?, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg x3:*, reg x4:V, reg invisible:cls, reg r7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    print_default = ldf `print.default`;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r2 = dyn unclass(x2);
      goto L0(r2);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    ddd1 = ld `...`;
    r4 = dyn print_default[, `...`](p, ddd1);
    check L2() else D1();
  D1():
    deopt 4 [r4];
  L2():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L3() else L4();
  L0(r6):
    popenv;
    return r6;
  L3():
    x3 = ld x;
    check L5() else D2();
  L4():
    r5 = dyn base1(<sym x>);
    goto L0(r5);
  D2():
    deopt 7 [x3];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r7 = dyn invisible(x4);
    check L6() else D3();
  D3():
    deopt 10 [r7];
  L6():
    goto L0(r7);
  }
}