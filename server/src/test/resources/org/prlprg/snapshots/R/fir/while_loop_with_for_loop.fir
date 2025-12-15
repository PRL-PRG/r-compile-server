fun main() {
  () -+> V { reg i:*, reg i1:V, reg r:V, reg c:L, reg s:V, reg l:I, reg i2:I, reg i3:I, reg i4:I, reg c1:L, reg x:V, reg j:*, reg j1:V, reg r1:V, reg c2:L, reg x1:*, reg x2:V, reg r3:V, reg i11:*, reg i12:V, reg r4:V, reg c3:L, reg i13:*, reg i14:V, reg r5:V, reg i15:*, reg i16:V, reg r7:V, reg x3:*, reg x4:V |
    mkenv;
    st x = 0.0;
    st i = 1.0;
    goto L8();
  L8():
    i = ld i;
    check L10() else D0();
  D0():
    deopt 7 [i];
  L10():
    i1 = force? i;
    checkMissing(i1);
    r = `<=`(i1, 2.0);
    c = `as.logical`(r);
    if c then L11() else L0();
  L0():
    x3 = ld x;
    check L24() else D6();
  L11():
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i2 = 0;
    goto L3(i2);
  D6():
    deopt 54 [x3];
  L3(i3):
    i4 = `+`.1(i3, 1);
    c1 = `<`.1(l, i4);
    if c1 then L2() else L6();
  L24():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L2():
    i11 = ld i;
    check L17() else D3();
  L6():
    x = `[[`(s, i4, NULL, TRUE);
    st j = x;
    j = ld j;
    check L12() else D1();
  D1():
    deopt 15 [i4, j];
  D3():
    deopt 32 [i11];
  L12():
    j1 = force? j;
    checkMissing(j1);
    r1 = `==`(j1, 2.0);
    c2 = `as.logical`(r1);
    if c2 then L13() else L4();
  L17():
    i12 = force? i11;
    checkMissing(i12);
    r4 = `==`(i12, 1.0);
    c3 = `as.logical`(r4);
    if c3 then L18() else L7();
  L4():
    x1 = ld x;
    check L16() else D2();
  L7():
    i15 = ld i;
    check L22() else D5();
  L13():
    goto L2();
  L18():
    i13 = ld i;
    check L19() else D4();
  D2():
    deopt 23 [i4, x1];
  D4():
    deopt 36 [i13];
  D5():
    deopt 45 [i15];
  L16():
    x2 = force? x1;
    checkMissing(x2);
    r3 = `+`(x2, 1.0);
    st x = r3;
    goto L3(i4);
  L19():
    i14 = force? i13;
    checkMissing(i14);
    r5 = `+`(i14, 1.0);
    st i = r5;
    goto L8();
  L22():
    i16 = force? i15;
    checkMissing(i16);
    r7 = `+`(i16, 1.0);
    st i = r7;
    goto L8();
  }
}