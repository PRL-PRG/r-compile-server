fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-103057629`;
    st `print.eigen` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-103057629`(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg r:V, reg print:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg unclass:cls, reg r3:V, reg p:p(V +), reg ddd1:dots?, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x3:*, reg x4:V, reg invisible:cls, reg r8:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    cat = ldf cat;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    r = dyn cat("eigen() decomposition\n");
    check L2() else D1();
  D1():
    deopt 3 [r];
  L2():
    print = ldf print;
    check L3() else D2();
  D2():
    deopt 5 [];
  L3():
    p = prom<V +>{
      sym = ldf unclass;
      base = ldf unclass in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      unclass = ldf unclass in base;
      r3 = dyn unclass(x2);
      goto L0(r3);
    L2():
      r1 = dyn base(<sym x>);
      goto L0(r1);
    };
    ddd1 = ld `...`;
    r5 = dyn print[, `...`](p, ddd1);
    check L4() else D3();
  D3():
    deopt 8 [r5];
  L4():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0(r7):
    popenv;
    return r7;
  L5():
    x3 = ld x;
    check L7() else D4();
  L6():
    r6 = dyn base1(<sym x>);
    goto L0(r6);
  D4():
    deopt 11 [x3];
  L7():
    x4 = force? x3;
    checkMissing(x4);
    invisible = ldf invisible in base;
    r8 = dyn invisible(x4);
    check L8() else D5();
  D5():
    deopt 14 [r8];
  L8():
    goto L0(r8);
  }
}