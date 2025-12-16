fun main() {
  () -+> V { reg x:*, reg x1:V, reg c:L, reg c1:V, reg y:*, reg y1:V, reg c3:L, reg c6:L, reg c7:V, reg z:*, reg z1:V, reg c8:L, reg c9:V, reg c12:L, reg c13:V |
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
    popenv;
    return c1;
  L3():
    y = ld y;
    check L4() else D1();
  D1():
    deopt 11 [c, y];
  L4():
    y1 = force? y;
    checkMissing(y1);
    c3 = `as.logical`(y1);
    if c3 then L5() else L1(c, c3);
  L1(c6, c7):
    c12 = `as.logical`(c7);
    c13 = `||`(c6, c12);
    goto L0(c13);
  L5():
    z = ld z;
    check L6() else D2();
  D2():
    deopt 13 [c, c3, z];
  L6():
    z1 = force? z;
    checkMissing(z1);
    c8 = `as.logical`(z1);
    c9 = `&&`(c3, c8);
    goto L1(c, c9);
  }
}