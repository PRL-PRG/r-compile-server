fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner735581004;
    st atan2 = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner735581004(y, x) {
  (reg y:*, reg x:*) -+> V { var y:*, var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg x1:*, reg x2:V, reg atan2:cls, reg r2:V |
    mkenv;
    st y = y;
    st x = x;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    y1 = ld y;
    check L3() else D0();
  L2():
    r = dyn base(<lang atan2(y, x)>);
    goto L0(r);
  D0():
    deopt 2 [y1];
  L3():
    y2 = force? y1;
    checkMissing(y2);
    x1 = ld x;
    check L4() else D1();
  D1():
    deopt 4 [x1];
  L4():
    x2 = force? x1;
    checkMissing(x2);
    atan2 = ldf atan2 in base;
    r2 = dyn atan2(y2, x2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}