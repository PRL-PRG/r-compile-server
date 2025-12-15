fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg l:*, reg names__:cls, reg r6:V, reg x:*, reg x1:V |
    mkenv;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    st x = r1;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r2 = dyn c(1.0, 2.0, 3.0);
    check L4() else D0();
  L3():
    r = dyn base(1.0, 2.0, 3.0);
    goto L0(r);
  D0():
    deopt 6 [r2];
  L1(r4):
    l = ld x;
    names__ = ldf `names<-`;
    check L8() else D2();
  L4():
    goto L0(r2);
  L5():
    c1 = ldf c in base;
    r5 = dyn c1("a", "b", "c");
    check L7() else D1();
  L6():
    r3 = dyn base1("a", "b", "c");
    goto L1(r3);
  D1():
    deopt 14 [r5];
  D2():
    deopt 16 [r4, l, r4];
  L7():
    goto L1(r5);
  L8():
    r6 = dyn names__(l, NULL, r4);
    check L9() else D3();
  D3():
    deopt 18 [r4, r6];
  L9():
    st x = r6;
    x = ld x;
    check L10() else D4();
  D4():
    deopt 20 [x];
  L10():
    x1 = force? x;
    checkMissing(x1);
    popenv;
    return x1;
  }
}