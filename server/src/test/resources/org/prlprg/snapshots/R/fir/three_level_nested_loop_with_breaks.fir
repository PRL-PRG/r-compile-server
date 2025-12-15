fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c1:L, reg i9:I, reg x1:V, reg s2:V, reg l2:I, reg i13:I, reg i14:I, reg i15:I, reg i16:I, reg i17:I, reg c2:L, reg i18:I, reg i19:I, reg x2:V, reg k:*, reg k1:V, reg r:V, reg c3:L, reg x3:*, reg x4:V, reg r2:V, reg j:*, reg j1:V, reg r3:V, reg c4:L, reg x5:*, reg x6:V |
    mkenv;
    st x = 0.0;
    s = toForSeq(<int 1, 2>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L14() else L13();
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = toForSeq(<int 1, 2>);
    l1 = length(s1);
    i5 = 0;
    goto L3(i2, i5);
  L14():
    x5 = ld x;
    check L24() else D3();
  D3():
    deopt 45 [x5];
  L3(i6, i7):
    i8 = `+`.1(i7, 1);
    c1 = `<`.1(l1, i8);
    if c1 then L2(i6) else L12();
  L24():
    x6 = force? x5;
    checkMissing(x6);
    popenv;
    return x6;
  L2(i9):
    goto L0(i9);
  L12():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st j = x1;
    s2 = toForSeq(<int 1, 2, 3>);
    l2 = length(s2);
    i13 = 0;
    goto L6(i6, i8, i13);
  L6(i14, i15, i16):
    i17 = `+`.1(i16, 1);
    c2 = `<`.1(l2, i17);
    if c2 then L5(i14, i15) else L9();
  L5(i18, i19):
    j = ld j;
    check L20() else D2();
  L9():
    x2 = `[[`(s2, i17, NULL, TRUE);
    st k = x2;
    k = ld k;
    check L15() else D0();
  D0():
    deopt 13 [i14, i15, i17, k];
  D2():
    deopt 30 [i18, i19, j];
  L15():
    k1 = force? k;
    checkMissing(k1);
    r = `==`(k1, 2.0);
    c3 = `as.logical`(r);
    if c3 then L16() else L7();
  L20():
    j1 = force? j;
    checkMissing(j1);
    r3 = `==`(j1, 2.0);
    c4 = `as.logical`(r3);
    if c4 then L21() else L10();
  L7():
    x3 = ld x;
    check L19() else D1();
  L10():
    goto L3(i18, i19);
  L16():
    goto L5(i14, i15);
  L21():
    goto L2(i18);
  D1():
    deopt 21 [i14, i15, i17, x3];
  L19():
    x4 = force? x3;
    checkMissing(x4);
    r2 = `+`(x4, 1.0);
    st x = r2;
    goto L6(i14, i15, i17);
  }
}