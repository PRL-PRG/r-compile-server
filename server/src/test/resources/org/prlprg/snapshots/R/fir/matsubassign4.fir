fun main() {
  () -+> V { reg matrix:cls, reg p:p(V +), reg r1:V, reg l:*, reg c:L, reg r3:I, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r6:V, reg x:*, reg x1:V |
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
    l = ld x;
    c = `is.object`(l);
    if c then L3() else L4(42, l);
  L0(dx1):
    st x = dx1;
    x = ld x;
    check L6() else D2();
  L3():
    dr = tryDispatchBuiltin.0("[[<-", l, 42);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(42, dr);
  L4(r3, l2):
    ____ = ldf `[[<-` in base;
    r6 = dyn ____(l2, 42, 1.0, 2.0);
    goto L0(r6);
  D2():
    deopt 15 [x];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L6():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}