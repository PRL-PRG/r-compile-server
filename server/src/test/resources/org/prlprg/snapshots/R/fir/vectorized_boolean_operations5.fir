fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg T:*, reg T1:V, reg F:*, reg F1:V, reg T2:*, reg T3:V, reg F2:*, reg F3:V, reg T4:*, reg T5:V, reg F4:*, reg F5:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg T6:*, reg T7:V, reg T8:*, reg T9:V, reg F6:*, reg F7:V, reg F8:*, reg F9:V, reg T10:*, reg T11:V, reg F10:*, reg F11:V, reg c1:cls, reg r5:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r6:V |
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
    if guard1 then L11() else L12();
  L2():
    T = ld T;
    check L4() else D0();
  L3():
    r = dyn base(<sym T>, <sym F>, <sym T>, <sym F>, NA_LGL, NA_LGL, <sym T>, <sym F>);
    goto L0(r);
  D0():
    deopt 2 [T];
  L1(r4):
    st y = r4;
    x = ld x;
    check L20() else D14();
  L4():
    T1 = force? T;
    checkMissing(T1);
    F = ld F;
    check L5() else D1();
  L11():
    T6 = ld T;
    check L13() else D7();
  L12():
    r3 = dyn base1(<sym T>, <sym T>, <sym F>, <sym F>, <sym T>, <sym F>, NA_LGL, NA_LGL);
    goto L1(r3);
  D1():
    deopt 4 [F];
  D7():
    deopt 21 [T6];
  D14():
    deopt 38 [x];
  L5():
    F1 = force? F;
    checkMissing(F1);
    T2 = ld T;
    check L6() else D2();
  L13():
    T7 = force? T6;
    checkMissing(T7);
    T8 = ld T;
    check L14() else D8();
  L20():
    x1 = force? x;
    checkMissing(x1);
    y = ld y;
    check L21() else D15();
  D2():
    deopt 6 [T2];
  D8():
    deopt 23 [T8];
  D15():
    deopt 39 [x1, y];
  L6():
    T3 = force? T2;
    checkMissing(T3);
    F2 = ld F;
    check L7() else D3();
  L14():
    T9 = force? T8;
    checkMissing(T9);
    F6 = ld F;
    check L15() else D9();
  L21():
    y1 = force? y;
    checkMissing(y1);
    r6 = `&&`(x1, y1);
    popenv;
    return r6;
  D3():
    deopt 8 [F2];
  D9():
    deopt 25 [F6];
  L7():
    F3 = force? F2;
    checkMissing(F3);
    T4 = ld T;
    check L8() else D4();
  L15():
    F7 = force? F6;
    checkMissing(F7);
    F8 = ld F;
    check L16() else D10();
  D4():
    deopt 12 [T4];
  D10():
    deopt 27 [F8];
  L8():
    T5 = force? T4;
    checkMissing(T5);
    F4 = ld F;
    check L9() else D5();
  L16():
    F9 = force? F8;
    checkMissing(F9);
    T10 = ld T;
    check L17() else D11();
  D5():
    deopt 14 [F4];
  D11():
    deopt 29 [T10];
  L9():
    F5 = force? F4;
    checkMissing(F5);
    c = ldf c in base;
    r2 = dyn c(T1, F1, T3, F3, NA_LGL, NA_LGL, T5, F5);
    check L10() else D6();
  L17():
    T11 = force? T10;
    checkMissing(T11);
    F10 = ld F;
    check L18() else D12();
  D6():
    deopt 17 [r2];
  D12():
    deopt 31 [F10];
  L10():
    goto L0(r2);
  L18():
    F11 = force? F10;
    checkMissing(F11);
    c1 = ldf c in base;
    r5 = dyn c1(T7, T9, F7, F9, T11, F11, NA_LGL, NA_LGL);
    check L19() else D13();
  D13():
    deopt 36 [r5];
  L19():
    goto L1(r5);
  }
}