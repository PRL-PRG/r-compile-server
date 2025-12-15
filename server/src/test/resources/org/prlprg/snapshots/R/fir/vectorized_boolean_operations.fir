fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r6:V |
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
    r2 = dyn c();
    check L4() else D0();
  L3():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  L1(r4):
    st y = r4;
    x = ld x;
    check L8() else D2();
  L4():
    goto L0(r2);
  L5():
    c1 = ldf c in base;
    r5 = dyn c1();
    check L7() else D1();
  L6():
    r3 = dyn base1();
    goto L1(r3);
  D1():
    deopt 8 [r5];
  D2():
    deopt 10 [x];
  L7():
    goto L1(r5);
  L8():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L9() else D3();
  D3():
    deopt 11 [x1, y];
  L9():
    y1 = force? y;
    checkMissing(y1);
    r6 = `&&`(x1, y1);
    popenv;
    return r6;
  }
}