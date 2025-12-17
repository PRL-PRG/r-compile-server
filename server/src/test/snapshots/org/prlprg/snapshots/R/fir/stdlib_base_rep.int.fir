fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner27904122;
    st `rep.int` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner27904122(x, times) {
  (reg x:*, reg times:*) -+> V { var x:*, var times:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg times1:*, reg times2:V, reg rep_int:cls, reg r2:V |
    mkenv;
    st x = x;
    st times = times;
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x1 = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang rep.int(x, times)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    times1 = ld times;
    check L4() else D1();
  D1():
    deopt 4 [times1];
  L4():
    times2 = force? times1;
    checkMissing(times2);
    rep_int = ldf `rep.int` in base;
    r2 = dyn rep_int(x2, times2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}