fun main() {
  () -+> V { reg x:*, reg x1:V, reg c:L, reg c2:V, reg y:*, reg y1:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg y2:*, reg y3:V, reg c9:L, reg c10:V |
    mkenv;
    st x = TRUE;
    st y = FALSE;
    x = ld x;
    check L2() else D0();
  D0():
    deopt 6 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    c = `as.logical`(x1);
    if c then L3() else L0(c);
  L0(c2):
    c6 = `as.logical`(c2);
    if c6 then L1(c6) else L6();
  L3():
    y = ld y;
    check L4() else D1();
  D1():
    deopt 8 [c, y];
  L1(c7):
    popenv;
    return c7;
  L4():
    y1 = force? y;
    checkMissing(y1);
    c3 = `as.logical`(y1);
    c4 = `&&`(c, c3);
    goto L0(c4);
  L6():
    y2 = ld y;
    check L7() else D2();
  D2():
    deopt 11 [c6, y2];
  L7():
    y3 = force? y2;
    checkMissing(y3);
    c9 = `as.logical`(y3);
    c10 = `||`(c6, c9);
    goto L1(c10);
  }
}