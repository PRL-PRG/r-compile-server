fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.logical.factor` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg levels:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r3:V, reg as_logical:cls, reg r4:V, reg c:L, reg r6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg x3:*, reg x4:V, reg __:cls, reg r7:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf `as.logical`;
    base = ldf `as.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `is.object`(r1);
    if c then L7() else L8(r1);
  L2():
    levels = ldf levels;
    check L4() else D0();
  L3():
    r = dyn base(<lang levels(x)>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1(dx1):
    popenv;
    return dx1;
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r3 = dyn levels(p);
    check L5() else D1();
  L7():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(r6):
    x3 = ld x;
    check L10() else D3();
  D1():
    deopt 5 [r3];
  D3():
    deopt 8 [r6, x3];
  L5():
    as_logical = ldf `as.logical` in base;
    r4 = dyn as_logical(r3);
    check L6() else D2();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L10():
    x4 = force? x3;
    __ = ldf `[` in base;
    r7 = dyn __(r6, x4);
    goto L1(r7);
  D2():
    deopt 7 [r4];
  L6():
    goto L0(r4);
  }
}