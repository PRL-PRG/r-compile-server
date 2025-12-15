fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V, reg r:V, reg c1:L, reg x1:*, reg x2:V, reg r1:V, reg i11:*, reg i12:V, reg r3:V, reg c2:L, reg x3:*, reg x4:V, reg i17:*, reg i18:V, reg r5:V, reg x5:*, reg x6:V |
    mkenv;
    st x = 0.0;
    s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1() else L7();
  L1():
    x5 = ld x;
    check L19() else D5();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L8() else D0();
  D0():
    deopt 7 [i2, i5];
  D5():
    deopt 37 [x5];
  L8():
    i6 = force? i5;
    checkMissing(i6);
    r = `==`(i6, 2.0);
    c1 = `as.logical`(r);
    if c1 then L9() else L3();
  L19():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  L3():
    i11 = ld i;
    check L13() else D2();
  L9():
    x1 = ld x;
    check L10() else D1();
  D1():
    deopt 11 [i2, x1];
  D2():
    deopt 20 [i2, i11];
  L10():
    x2 = force? x1;
    checkMissing(x2);
    r1 = `+`(x2, 100.0);
    st x = r1;
    goto L1();
  L13():
    i12 = force? i11;
    checkMissing(i12);
    r3 = `==`(i12, 5.0);
    c2 = `as.logical`(r3);
    if c2 then L14() else L5();
  L5():
    x3 = ld x;
    check L17() else D3();
  L14():
    goto L1();
  D3():
    deopt 28 [i2, x3];
  L17():
    x4 = force? x3;
    checkMissing(x4);
    i17 = ld i;
    check L18() else D4();
  D4():
    deopt 29 [i2, x4, i17];
  L18():
    i18 = force? i17;
    checkMissing(i18);
    r5 = `+`(x4, i18);
    st x = r5;
    goto L2(i2);
  }
}