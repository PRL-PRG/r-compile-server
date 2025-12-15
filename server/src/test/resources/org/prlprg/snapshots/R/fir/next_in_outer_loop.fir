fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V, reg r:V, reg c1:L, reg s1:V, reg l1:I, reg i11:I, reg i12:I, reg i13:I, reg i14:I, reg c2:L, reg x1:V, reg x2:*, reg x3:V, reg r2:V, reg x4:*, reg x5:V |
    mkenv;
    st x = 0.0;
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1() else L7();
  L1():
    x4 = ld x;
    check L14() else D2();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L8() else D0();
  D0():
    deopt 7 [i2, i5];
  D2():
    deopt 29 [x4];
  L8():
    i6 = force? i5;
    checkMissing(i6);
    r = `==`(i6, 2.0);
    c1 = `as.logical`(r);
    if c1 then L9() else L3();
  L14():
    x5 = force? x4;
    checkMissing(x5);
    popenv;
    return x5;
  L3():
    s1 = toForSeq(<int 1, 2, 3>);
    l1 = length(s1);
    i11 = 0;
    goto L5(i2, i11);
  L9():
    goto L2(i2);
  L5(i12, i13):
    i14 = `+`.1(i13, 1);
    c2 = `<`.1(l1, i14);
    if c2 then L12() else L6();
  L6():
    x1 = `[[`(s1, i14, NULL, TRUE);
    st j = x1;
    x2 = ld x;
    check L13() else D1();
  L12():
    goto L2(i12);
  D1():
    deopt 17 [i12, i14, x2];
  L13():
    x3 = force? x2;
    checkMissing(x3);
    r2 = `+`(x3, 1.0);
    st x = r2;
    goto L5(i12, i14);
  }
}