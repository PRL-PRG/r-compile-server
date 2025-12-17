fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c1:L, reg x1:V, reg x2:*, reg x3:V, reg r:V, reg i13:*, reg i14:V, reg r1:V, reg c2:L, reg x4:*, reg x5:V |
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
    s1 = toForSeq(<int 1, 2, 3>);
    l1 = length(s1);
    i5 = 0;
    goto L3(i2, i5);
  D2():
    deopt 29 [x4];
  L3(i6, i7):
    i8 = `+`.1(i7, 1);
    c1 = `<`.1(l1, i8);
    if c1 then L8() else L4();
  L14():
    x5 = force? x4;
    checkMissing(x5);
    popenv;
    return x5;
  L4():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st j = x1;
    x2 = ld x;
    check L9() else D0();
  L8():
    i13 = ld i;
    check L10() else D1();
  D0():
    deopt 9 [i6, i8, x2];
  D1():
    deopt 17 [i6, i13];
  L9():
    x3 = force? x2;
    checkMissing(x3);
    r = `+`(x3, 1.0);
    st x = r;
    goto L3(i6, i8);
  L10():
    i14 = force? i13;
    checkMissing(i14);
    r1 = `==`(i14, 2.0);
    c2 = `as.logical`(r1);
    if c2 then L11() else L5();
  L5():
    goto L2(i6);
  L11():
    goto L1();
  }
}