fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c1:L, reg x1:V, reg s2:*, reg s3:V, reg j:*, reg j1:V, reg r:V, reg i13:*, reg i14:V, reg r1:V, reg s4:*, reg s5:V |
    mkenv;
    st s = 0;
    s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L4() else L3();
  L3():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    l1 = length(s1);
    i5 = 0;
    goto L1(i2, i5);
  L4():
    s4 = ld s;
    check L9() else D3();
  D3():
    deopt 20 [s4];
  L1(i6, i7):
    i8 = `+`.1(i7, 1);
    c1 = `<`.1(l1, i8);
    if c1 then L5() else L2();
  L9():
    s5 = force? s4;
    checkMissing(s5);
    popenv;
    return s5;
  L2():
    x1 = `[[`(s1, i8, NULL, TRUE);
    st j = x1;
    s2 = ld s;
    check L6() else D0();
  L5():
    goto L0(i6);
  D0():
    deopt 7 [i6, i8, s2];
  L6():
    s3 = force? s2;
    checkMissing(s3);
    j = ld j;
    check L7() else D1();
  D1():
    deopt 8 [i6, i8, s3, j];
  L7():
    j1 = force? j;
    checkMissing(j1);
    r = `+`(s3, j1);
    i13 = ld i;
    check L8() else D2();
  D2():
    deopt 10 [i6, i8, r, i13];
  L8():
    i14 = force? i13;
    checkMissing(i14);
    r1 = `+`(r, i14);
    st s = r1;
    goto L1(i6, i8);
  }
}