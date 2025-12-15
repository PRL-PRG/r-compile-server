fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V, reg r:V, reg c1:L, reg i11:*, reg i12:V, reg r2:V, reg c2:L, reg x1:*, reg x2:V, reg i17:*, reg i18:V, reg r4:V, reg x3:*, reg x4:V |
    mkenv;
    st x = 0.0;
    s = toForSeq(<int 1, 2, 3, 4, 5>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1() else L7();
  L1():
    x3 = ld x;
    check L18() else D4();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L8() else D0();
  D0():
    deopt 7 [i2, i5];
  D4():
    deopt 32 [x3];
  L8():
    i6 = force? i5;
    checkMissing(i6);
    r = `==`(i6, 2.0);
    c1 = `as.logical`(r);
    if c1 then L9() else L3();
  L18():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L3():
    i11 = ld i;
    check L12() else D1();
  L9():
    goto L2(i2);
  D1():
    deopt 15 [i2, i11];
  L12():
    i12 = force? i11;
    checkMissing(i12);
    r2 = `==`(i12, 4.0);
    c2 = `as.logical`(r2);
    if c2 then L13() else L5();
  L5():
    x1 = ld x;
    check L16() else D2();
  L13():
    goto L2(i2);
  D2():
    deopt 23 [i2, x1];
  L16():
    x2 = force? x1;
    checkMissing(x2);
    i17 = ld i;
    check L17() else D3();
  D3():
    deopt 24 [i2, x2, i17];
  L17():
    i18 = force? i17;
    checkMissing(i18);
    r4 = `+`(x2, i18);
    st x = r4;
    goto L2(i2);
  }
}