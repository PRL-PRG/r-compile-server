fun main() {
  () -+> V { reg matrix:cls, reg p:p(V +), reg r1:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V |
    mkenv;
    matrix = ldf matrix;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      return <int 1, 2, 3, 4, 5, 6>;
    };
    r1 = dyn matrix[, nrow](p, 2.0);
    check L2() else D1();
  D1():
    deopt 5 [r1];
  L2():
    st x = r1;
    x = ld x;
    check L3() else D2();
  D2():
    deopt 7 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L4() else L5(x1);
  L0(dx1):
    popenv;
    return dx1;
  L4():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L6() else L5(dr);
  L5(x3):
    __ = ldf `[` in base;
    r2 = dyn __(x3, 1.0, 2.0);
    goto L0(r2);
  L6():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  }
}