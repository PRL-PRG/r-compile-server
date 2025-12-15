fun main() {
  () -+> V { reg x:*, reg x1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg i3:I, reg x2:V, reg i5:*, reg i6:V, reg c1:L |
    mkenv;
    st x = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    x = ld x;
    check L6() else D0();
  D0():
    deopt 3 [x];
  L6():
    x1 = force? x;
    checkMissing(x1);
    s = toForSeq(x1);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1(i2) else L5();
  L1(i3):
    invisible.0();
    popenv;
    return i3;
  L5():
    x2 = `[[`(s, i2, NULL, TRUE);
    st i = x2;
    i5 = ld i;
    check L7() else D1();
  D1():
    deopt 7 [i2, i5];
  L7():
    i6 = force? i5;
    checkMissing(i6);
    c1 = `as.logical`(i6);
    if c1 then L8() else L3();
  L3():
    goto L2(i2);
  L8():
    goto L1(i2);
  }
}