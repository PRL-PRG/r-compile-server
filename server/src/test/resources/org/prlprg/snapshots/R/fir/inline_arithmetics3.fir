fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r2:V, reg x2:*, reg x3:V, reg r3:V, reg r4:V, reg x4:*, reg x5:V, reg r5:V, reg r6:V, reg y2:*, reg y3:V, reg r7:V, reg list:cls, reg r8:V |
    mkenv;
    st x = 3.0;
    st y = 0.3;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    x = ld x;
    check L3() else D0();
  L2():
    r = dyn base(<lang `+`(`-`(`+`(x, y), x), 10.0)>, <lang `+`(`-`(x), 1.0)>, <lang `+`(y)>);
    goto L0(r);
  D0():
    deopt 8 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L4() else D1();
  D1():
    deopt 9 [x1, y];
  L4():
    y1 = force? y;
    checkMissing(y1);
    r2 = `+`(x1, y1);
    x2 = ld x;
    check L5() else D2();
  D2():
    deopt 11 [r2, x2];
  L5():
    x3 = force? x2;
    checkMissing(x3);
    r3 = `-`(r2, x3);
    r4 = `+`(r3, 10.0);
    x4 = ld x;
    check L6() else D3();
  D3():
    deopt 16 [x4];
  L6():
    x5 = force? x4;
    checkMissing(x5);
    r5 = `-`(<missing>, x5);
    r6 = `+`(r5, 1.0);
    y2 = ld y;
    check L7() else D4();
  D4():
    deopt 21 [y2];
  L7():
    y3 = force? y2;
    checkMissing(y3);
    r7 = `+`(<missing>, y3);
    list = ldf list in base;
    r8 = dyn list(r4, r6, r7);
    check L8() else D5();
  D5():
    deopt 25 [r8];
  L8():
    goto L0(r8);
  }
}