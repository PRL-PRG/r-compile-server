fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg vargs:dots, reg r2:V |
    mkenv;
    st x = NULL;
    sym = ldf `.Call`;
    base = ldf `.Call` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x = ld x;
    check L3() else D0();
  L2():
    r = dyn base("foo", <sym x>, 1.0, TRUE);
    goto L0(r);
  D0():
    deopt 5 ["foo", x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    vargs = dots[x1, 1.0, TRUE];
    r2 = `.Call`("foo", vargs, <missing>);
    goto L0(r2);
  }
}