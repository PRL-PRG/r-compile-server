fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st ncol = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg dim:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r5:V |
    mkenv;
    st x = x;
    sym = ldf dim;
    base = ldf dim in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `is.object`(r1);
    if c then L6() else L7(r1);
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(dx1):
    popenv;
    return dx1;
  L4():
    x2 = force? x1;
    checkMissing(x2);
    dim = ldf dim in base;
    r2 = dyn dim(x2);
    check L5() else D1();
  L6():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L8() else L7(dr);
  L7(r4):
    __ = ldf `[` in base;
    r5 = dyn __(r4, 2);
    goto L1(r5);
  D1():
    deopt 5 [r2];
  L5():
    goto L0(r2);
  L8():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  }
}