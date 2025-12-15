fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg y:*, reg y1:V, reg r2:V, reg x2:*, reg x3:V, reg y2:*, reg y3:V, reg r3:V, reg x4:*, reg x5:V, reg y4:*, reg y5:V, reg r4:V, reg x6:*, reg x7:V, reg y6:*, reg y7:V, reg r5:V, reg x8:*, reg x9:V, reg y8:*, reg y9:V, reg r6:V, reg x10:*, reg x11:V, reg y10:*, reg y11:V, reg r7:V, reg x12:*, reg x13:V, reg y12:*, reg y13:V, reg r8:V, reg x14:*, reg x15:V, reg y14:*, reg y15:V, reg r9:V, reg x16:*, reg x17:V, reg r10:V, reg list:cls, reg r11:V |
    mkenv;
    st x = TRUE;
    st y = NA_LGL;
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
    r = dyn base(<lang `==`(x, y)>, <lang `!=`(x, y)>, <lang `<`(x, y)>, <lang `<=`(x, y)>, <lang `>`(x, y)>, <lang `>=`(x, y)>, <lang `&`(x, y)>, <lang `|`(x, y)>, <lang `!`(x)>);
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
    r2 = `==`(x1, y1);
    x2 = ld x;
    check L5() else D2();
  D2():
    deopt 12 [x2];
  L5():
    x3 = force? x2;
    checkMissing(x3);
    y2 = ld y;
    check L6() else D3();
  D3():
    deopt 13 [x3, y2];
  L6():
    y3 = force? y2;
    checkMissing(y3);
    r3 = `!=`(x3, y3);
    x4 = ld x;
    check L7() else D4();
  D4():
    deopt 16 [x4];
  L7():
    x5 = force? x4;
    checkMissing(x5);
    y4 = ld y;
    check L8() else D5();
  D5():
    deopt 17 [x5, y4];
  L8():
    y5 = force? y4;
    checkMissing(y5);
    r4 = `<`(x5, y5);
    x6 = ld x;
    check L9() else D6();
  D6():
    deopt 20 [x6];
  L9():
    x7 = force? x6;
    checkMissing(x7);
    y6 = ld y;
    check L10() else D7();
  D7():
    deopt 21 [x7, y6];
  L10():
    y7 = force? y6;
    checkMissing(y7);
    r5 = `<=`(x7, y7);
    x8 = ld x;
    check L11() else D8();
  D8():
    deopt 24 [x8];
  L11():
    x9 = force? x8;
    checkMissing(x9);
    y8 = ld y;
    check L12() else D9();
  D9():
    deopt 25 [x9, y8];
  L12():
    y9 = force? y8;
    checkMissing(y9);
    r6 = `>`(x9, y9);
    x10 = ld x;
    check L13() else D10();
  D10():
    deopt 28 [x10];
  L13():
    x11 = force? x10;
    checkMissing(x11);
    y10 = ld y;
    check L14() else D11();
  D11():
    deopt 29 [x11, y10];
  L14():
    y11 = force? y10;
    checkMissing(y11);
    r7 = `>=`(x11, y11);
    x12 = ld x;
    check L15() else D12();
  D12():
    deopt 32 [x12];
  L15():
    x13 = force? x12;
    checkMissing(x13);
    y12 = ld y;
    check L16() else D13();
  D13():
    deopt 33 [x13, y12];
  L16():
    y13 = force? y12;
    checkMissing(y13);
    r8 = `&&`(x13, y13);
    x14 = ld x;
    check L17() else D14();
  D14():
    deopt 36 [x14];
  L17():
    x15 = force? x14;
    checkMissing(x15);
    y14 = ld y;
    check L18() else D15();
  D15():
    deopt 37 [x15, y14];
  L18():
    y15 = force? y14;
    checkMissing(y15);
    r9 = `||`(x15, y15);
    x16 = ld x;
    check L19() else D16();
  D16():
    deopt 40 [x16];
  L19():
    x17 = force? x16;
    checkMissing(x17);
    r10 = `!`(x17);
    list = ldf list in base;
    r11 = dyn list(r2, r3, r4, r5, r6, r7, r8, r9, r10);
    check L20() else D17();
  D17():
    deopt 44 [r11];
  L20():
    goto L0(r11);
  }
}