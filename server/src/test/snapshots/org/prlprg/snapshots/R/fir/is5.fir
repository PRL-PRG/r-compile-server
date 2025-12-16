fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x:*, reg x1:V, reg c1:L |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st x = r1;
    sym1 = ldf `is.double`;
    base1 = ldf `is.double` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r2 = dyn c(1.0, 2.0);
    check L4() else D0();
  L3():
    r = dyn base(1.0, 2.0);
    goto L0(r);
  D0():
    deopt 5 [r2];
  L1(r4):
    popenv;
    return r4;
  L4():
    goto L0(r2);
  L5():
    x = ld x;
    check L7() else D1();
  L6():
    r3 = dyn base1(<sym x>);
    goto L1(r3);
  D1():
    deopt 8 [x];
  L7():
    x1 = force? x;
    checkMissing(x1);
    c1 = `is.double`(x1);
    goto L1(c1);
  }
}