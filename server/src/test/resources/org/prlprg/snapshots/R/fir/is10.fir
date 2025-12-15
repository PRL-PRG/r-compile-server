fun main() {
  () -+> V { reg T:*, reg T1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg c:L |
    mkenv;
    T = ld T;
    check L1() else D0();
  D0():
    deopt 0 [T];
  L1():
    T1 = force? T;
    checkMissing(T1);
    st x = T1;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    popenv;
    return r1;
  L2():
    x = ld x;
    check L4() else D1();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D1():
    deopt 4 [x];
  L4():
    x1 = force? x;
    checkMissing(x1);
    c = `is.logical`(x1);
    goto L0(c);
  }
}