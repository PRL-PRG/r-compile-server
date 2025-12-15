fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg x:*, reg x1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg x4:V, reg r4:V, reg c1:cls, reg r5:V, reg r6:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st x = r1;
    x = ld x;
    check L5() else D1();
  L2():
    c = ldf c in base;
    r2 = dyn c(42.0, 43.0);
    check L4() else D0();
  L3():
    r = dyn base(42.0, 43.0);
    goto L0(r);
  D0():
    deopt 5 [r2];
  D1():
    deopt 7 [x];
  L4():
    goto L0(r2);
  L5():
    x1 = force? x;
    checkMissing(x1);
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(x4, r4):
    r6 = `+`(x4, r4);
    popenv;
    return r6;
  L6():
    c1 = ldf c in base;
    r5 = dyn c1(1.0, 2.0);
    check L8() else D2();
  L7():
    r3 = dyn base1(1.0, 2.0);
    goto L1(x1, r3);
  D2():
    deopt 13 [x1, r5];
  L8():
    goto L1(x1, r5);
  }
}