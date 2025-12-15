fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg T:*, reg T1:V, reg F:*, reg F1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x:*, reg x1:V, reg c1:L |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st x = r1;
    sym1 = ldf `is.logical`;
    base1 = ldf `is.logical` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2():
    T = ld T;
    check L4() else D0();
  L3():
    r = dyn base(<sym T>, <sym F>);
    goto L0(r);
  D0():
    deopt 2 [T];
  L1(r4):
    popenv;
    return r4;
  L4():
    T1 = force? T;
    checkMissing(T1);
    F = ld F;
    check L5() else D1();
  L7():
    x = ld x;
    check L9() else D3();
  L8():
    r3 = dyn base1(<sym x>);
    goto L1(r3);
  D1():
    deopt 4 [F];
  D3():
    deopt 10 [x];
  L5():
    F1 = force? F;
    checkMissing(F1);
    c = ldf c in base;
    r2 = dyn c(T1, F1);
    check L6() else D2();
  L9():
    x1 = force? x;
    checkMissing(x1);
    c1 = `is.logical`(x1);
    goto L1(c1);
  D2():
    deopt 7 [r2];
  L6():
    goto L0(r2);
  }
}