fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg T:*, reg T1:V, reg F:*, reg F1:V, reg T2:*, reg T3:V, reg F2:*, reg F3:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg T4:*, reg T5:V, reg T6:*, reg T7:V, reg F4:*, reg F5:V, reg F6:*, reg F7:V, reg c1:cls, reg r5:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r6:V |
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
    if guard1 then L9() else L10();
  L2():
    T = ld T;
    check L4() else D0();
  L3():
    r = dyn base(<sym T>, <sym F>, <sym T>, <sym F>);
    goto L0(r);
  D0():
    deopt 2 [T];
  L1(r4):
    st y = r4;
    x = ld x;
    check L16() else D10();
  L4():
    T1 = force? T;
    checkMissing(T1);
    F = ld F;
    check L5() else D1();
  L9():
    T4 = ld T;
    check L11() else D5();
  L10():
    r3 = dyn base1(<sym T>, <sym T>, <sym F>, <sym F>);
    goto L1(r3);
  D1():
    deopt 4 [F];
  D5():
    deopt 15 [T4];
  D10():
    deopt 26 [x];
  L5():
    F1 = force? F;
    checkMissing(F1);
    T2 = ld T;
    check L6() else D2();
  L11():
    T5 = force? T4;
    checkMissing(T5);
    T6 = ld T;
    check L12() else D6();
  L16():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L17() else D11();
  D2():
    deopt 6 [T2];
  D6():
    deopt 17 [T6];
  D11():
    deopt 27 [x1, y];
  L6():
    T3 = force? T2;
    checkMissing(T3);
    F2 = ld F;
    check L7() else D3();
  L12():
    T7 = force? T6;
    checkMissing(T7);
    F4 = ld F;
    check L13() else D7();
  L17():
    y1 = force? y;
    checkMissing(y1);
    r6 = `||`(x1, y1);
    popenv;
    return r6;
  D3():
    deopt 8 [F2];
  D7():
    deopt 19 [F4];
  L7():
    F3 = force? F2;
    checkMissing(F3);
    c = ldf c in base;
    r2 = dyn c(T1, F1, T3, F3);
    check L8() else D4();
  L13():
    F5 = force? F4;
    checkMissing(F5);
    F6 = ld F;
    check L14() else D8();
  D4():
    deopt 11 [r2];
  D8():
    deopt 21 [F6];
  L8():
    goto L0(r2);
  L14():
    F7 = force? F6;
    checkMissing(F7);
    c1 = ldf c in base;
    r5 = dyn c1(T5, T7, F5, F7);
    check L15() else D9();
  D9():
    deopt 24 [r5];
  L15():
    goto L1(r5);
  }
}