fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V, reg r:V, reg c1:L, reg x1:*, reg x2:V, reg i11:*, reg i12:V, reg r2:V, reg x3:*, reg x4:V |
    mkenv;
    st x = 0.0;
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1() else L5();
  L1():
    x3 = ld x;
    check L12() else D3();
  L5():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L6() else D0();
  D0():
    deopt 7 [i2, i5];
  D3():
    deopt 24 [x3];
  L6():
    i6 = force? i5;
    checkMissing(i6);
    r = `==`(i6, 2.0);
    c1 = `as.logical`(r);
    if c1 then L7() else L3();
  L12():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L3():
    x1 = ld x;
    check L10() else D1();
  L7():
    goto L1();
  D1():
    deopt 15 [i2, x1];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    i11 = ld i;
    check L11() else D2();
  D2():
    deopt 16 [i2, x2, i11];
  L11():
    i12 = force? i11;
    checkMissing(i12);
    r2 = `+`(x2, i12);
    st x = r2;
    goto L2(i2);
  }
}