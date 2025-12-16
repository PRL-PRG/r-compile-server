fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner354062069;
    st `names.POSIXlt` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner354062069(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg names:cls, reg r3:V |
    mkenv;
    st x = x;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `$`(x, year)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L5() else L6(x2);
  L4(dx1):
    names = ldf names in base;
    r3 = dyn names(dx1);
    check L8() else D1();
  L5():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L7() else L6(dr);
  L6(x4):
    r2 = `$`(x4, <sym year>);
    goto L4(r2);
  D1():
    deopt 6 [r3];
  L7():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L8():
    goto L0(r3);
  }
}