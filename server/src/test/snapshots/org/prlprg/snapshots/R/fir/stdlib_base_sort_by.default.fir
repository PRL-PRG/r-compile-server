fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3924448841;
    st `sort_by.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3924448841(x, y, `...`) {
  (reg x:*, reg y:*, reg ddd:dots) -+> V { var x:*, var y:*, var `...`:dots?, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg order:cls, reg y1:*, reg y2:V, reg p:p(V +), reg ddd1:dots?, reg r1:V, reg __:cls, reg r2:V |
    mkenv;
    st x = x;
    st y = y;
    st `...` = ddd;
    x1 = ld x;
    check L1() else D0();
  D0():
    deopt 0 [x1];
  L1():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L2() else L3(x2);
  L0(dx1):
    popenv;
    return dx1;
  L2():
    dr = tryDispatchBuiltin.1("[", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(x4):
    order = ldf order;
    check L5() else D1();
  D1():
    deopt 3 [x4];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    ddd1 = ld `...`;
    r1 = dyn order[, `...`](p, ddd1);
    check L6() else D2();
  D2():
    deopt 6 [x4, r1];
  L6():
    __ = ldf `[` in base;
    r2 = dyn __(x4, r1);
    goto L0(r2);
  }
}