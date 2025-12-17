fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1526836729;
    st endsWith = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1526836729(x, suffix) {
  (reg x:*, reg suffix:*) -+> V { var x:*, var suffix:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg suffix1:*, reg suffix2:V, reg endsWith:cls, reg r2:V |
    mkenv;
    st x = x;
    st suffix = suffix;
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
    r = dyn base(<lang endsWith(x, suffix)>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    suffix1 = ld suffix;
    check L4() else D1();
  D1():
    deopt 4 [suffix1];
  L4():
    suffix2 = force? suffix1;
    checkMissing(suffix2);
    endsWith = ldf endsWith in base;
    r2 = dyn endsWith(x2, suffix2);
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    goto L0(r2);
  }
}