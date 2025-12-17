fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg inspect:cls, reg r2:V |
    mkenv;
    st x = "hello";
    sym = ldf `.Internal`;
    base = ldf `.Internal` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang inspect(x)>);
    goto L0(r);
  D0():
    deopt 5 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    inspect = ldf inspect in base;
    r2 = dyn inspect(x1);
    check L4() else D1();
  D1():
    deopt 8 [r2];
  L4():
    goto L0(r2);
  }
}