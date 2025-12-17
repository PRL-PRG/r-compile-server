fun main() {
  () -+> V { reg x:*, reg x1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x4:V, reg r1:V, reg c:cls, reg r2:V, reg r3:V |
    mkenv;
    st x = 42.0;
    x = ld x;
    check L1() else D0();
  D0():
    deopt 3 [x];
  L1():
    x1 = force? x;
    checkMissing(x1);
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(x4, r1):
    r3 = `+`(x4, r1);
    popenv;
    return r3;
  L2():
    c = ldf c in base;
    r2 = dyn c(1.0, 2.0);
    check L4() else D1();
  L3():
    r = dyn base(1.0, 2.0);
    goto L0(x1, r);
  D1():
    deopt 9 [x1, r2];
  L4():
    goto L0(x1, r2);
  }
}