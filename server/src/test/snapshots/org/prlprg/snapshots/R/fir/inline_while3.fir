fun main() {
  () -+> V { reg x:*, reg x1:V, reg c:L, reg y:*, reg y1:V, reg c1:L |
    mkenv;
    st x = TRUE;
    st y = FALSE;
    goto L3();
  L3():
    x = ld x;
    check L4() else D0();
  D0():
    deopt 7 [x];
  L4():
    x1 = force? x;
    checkMissing(x1);
    c = `as.logical`(x1);
    if c then L5() else L0();
  L0():
    setInvisible.0();
    popenv;
    return NULL;
  L5():
    y = ld y;
    check L6() else D1();
  D1():
    deopt 9 [y];
  L6():
    y1 = force? y;
    checkMissing(y1);
    c1 = `as.logical`(y1);
    if c1 then L7() else L1();
  L1():
    goto L3();
  L7():
    goto L0();
  }
}