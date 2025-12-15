fun main() {
  () -+> V { reg x:*, reg x1:V, reg c:L, reg c1:V, reg y:*, reg y1:V, reg c3:L, reg c4:V, reg c6:L, reg c7:V, reg z:*, reg z1:V, reg c9:L, reg c10:V |
    mkenv;
    st x = TRUE;
    st y = FALSE;
    st z = NA_LGL;
    x = ld x;
    check L2() else D0();
  D0():
    deopt 9 [x];
  L2():
    x1 = force? x;
    checkMissing(x1);
    c = `as.logical`(x1);
    if c then L0(c) else L3();
  L0(c1):
    c6 = `as.logical`(c1);
    if c6 then L1(c6) else L6();
  L3():
    y = ld y;
    check L4() else D1();
  D1():
    deopt 11 [c, y];
  L1(c7):
    popenv;
    return c7;
  L4():
    y1 = force? y;
    checkMissing(y1);
    c3 = `as.logical`(y1);
    c4 = `||`(c, c3);
    goto L0(c4);
  L6():
    z = ld z;
    check L7() else D2();
  D2():
    deopt 14 [c6, z];
  L7():
    z1 = force? z;
    checkMissing(z1);
    c9 = `as.logical`(z1);
    c10 = `||`(c6, c9);
    goto L1(c10);
  }
}