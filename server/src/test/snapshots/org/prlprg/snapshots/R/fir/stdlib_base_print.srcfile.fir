fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.srcfile` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg cat:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg x5:*, reg x6:V, reg invisible:cls, reg r5:V |
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
      r = `$`(x4, <sym filename>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn cat(p, "\n");
    check L2() else D1();
  D1():
    deopt 4 [r2];
  L2():
    sym = ldf invisible;
    base = ldf invisible in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r4):
    popenv;
    return r4;
  L3():
    x5 = ld x;
    check L5() else D2();
  L4():
    r3 = dyn base(<sym x>);
    goto L0(r3);
  D2():
    deopt 7 [x5];
  L5():
    x6 = force? x5;
    checkMissing(x6);
    invisible = ldf invisible in base;
    r5 = dyn invisible(x6);
    check L6() else D3();
  D3():
    deopt 10 [r5];
  L6():
    goto L0(r5);
  }
}