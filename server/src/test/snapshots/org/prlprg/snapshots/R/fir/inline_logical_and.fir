fun main() {
  () -+> V { reg x:*, reg x1:V, reg c:L, reg c2:V, reg y:*, reg y1:V, reg c3:L, reg c4:V |
    mkenv;
    st x = TRUE;
    st y = FALSE;
    x = ld x;
    check L1() else D0();
  D0():
    deopt 6 [x];
  L1():
    x1 = force? x;
    checkMissing(x1);
    c = `as.logical`(x1);
    if c then L2() else L0(c);
  L0(c2):
    popenv;
    return c2;
  L2():
    y = ld y;
    check L3() else D1();
  D1():
    deopt 8 [c, y];
  L3():
    y1 = force? y;
    checkMissing(y1);
    c3 = `as.logical`(y1);
    c4 = `&&`(c, c3);
    goto L0(c4);
  }
}