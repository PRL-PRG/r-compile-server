fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c1:L, reg x1:V, reg j:*, reg j1:V, reg r:V, reg c2:L, reg x2:*, reg x3:V, reg r2:V, reg x4:*, reg x5:V |
    mkenv;
    st x = 0.0;
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L8() else L7();
  L7():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = toForSeq(<int 1, 2, 3>);
    l1 = length(s1);
    i5 = 0;
    goto L3(i2, i5);
  L8():
    x4 = ld x;
    check L14() else D2();
  D2():
    deopt 29 [x4];
  L3(i6, i7):
    i8 = `+`.1(i7, 1);
    c1 = `<`.1(l1, i8);
    if c1 then L2() else L6();
  L14():
    x5 = force? x4;
    checkMissing(x5);
    popenv;
    return x5;
  L2():
    goto L0(i6);
  L6():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st j = x1;
    j = ld j;
    check L9() else D0();
  D0():
    deopt 9 [i6, i8, j];
  L9():
    j1 = force? j;
    checkMissing(j1);
    r = `==`(j1, 2.0);
    c2 = `as.logical`(r);
    if c2 then L10() else L4();
  L4():
    x2 = ld x;
    check L13() else D1();
  L10():
    goto L3(i6, i8);
  D1():
    deopt 17 [i6, i8, x2];
  L13():
    x3 = force? x2;
    checkMissing(x3);
    r2 = `+`(x3, 1.0);
    st x = r2;
    goto L3(i6, i8);
  }
}