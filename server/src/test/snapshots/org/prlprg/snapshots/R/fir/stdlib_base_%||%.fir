fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner799576941;
    st `%||%` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg c1:L, reg y1:*, reg y2:V, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L5() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    x3 = ld x;
    check L8() else D2();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L5():
    y1 = ld y;
    check L6() else D1();
  D1():
    deopt 4 [y1];
  D2():
    deopt 6 [x3];
  L6():
    y2 = force? y1;
    checkMissing(y2);
    popenv;
    return y2;
  L8():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}