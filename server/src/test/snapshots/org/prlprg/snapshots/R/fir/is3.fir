fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg c:L |
    mkenv;
    st x = "a";
    sym = ldf `is.double`;
    base = ldf `is.double` in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 4 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    c = `is.double`(x1);
    goto L0(c);
  }
}