fun main() {
  () -+> V { reg x:*, reg x1:V, reg c:L, reg c1:V, reg y:*, reg y1:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg x2:*, reg x3:V, reg c9:L, reg c10:L, reg c11:V, reg y2:*, reg y3:V, reg c14:L, reg c15:V, reg c18:L, reg c19:V |
    mkenv;
    st x = TRUE;
    st y = FALSE;
    x = ld x;
    check L3() else D0();
  D0():
    deopt 6 [x];
  L3():
    x1 = force? x;
    checkMissing(x1);
    c = `as.logical`(x1);
    if c then L0(c) else L4();
  L0(c1):
    c6 = `as.logical`(c1);
    if c6 then L1(c6) else L7();
  L4():
    y = ld y;
    check L5() else D1();
  D1():
    deopt 8 [c, y];
  L1(c7):
    popenv;
    return c7;
  L5():
    y1 = force? y;
    checkMissing(y1);
    c3 = `as.logical`(y1);
    c4 = `||`(c, c3);
    goto L0(c4);
  L7():
    x2 = ld x;
    check L8() else D2();
  D2():
    deopt 11 [c6, x2];
  L8():
    x3 = force? x2;
    checkMissing(x3);
    c9 = `as.logical`(x3);
    if c9 then L2(c6, c9) else L9();
  L2(c10, c11):
    c18 = `as.logical`(c11);
    c19 = `||`(c10, c18);
    goto L1(c19);
  L9():
    y2 = ld y;
    check L10() else D3();
  D3():
    deopt 13 [c6, c9, y2];
  L10():
    y3 = force? y2;
    checkMissing(y3);
    c14 = `as.logical`(y3);
    c15 = `||`(c9, c14);
    goto L2(c6, c15);
  }
}