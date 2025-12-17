fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg i5:*, reg i6:V, reg r:V, reg c1:L, reg s1:V, reg l1:I, reg i11:I, reg i12:I, reg i13:I, reg i14:I, reg c2:L, reg i15:I, reg x1:V, reg j:*, reg j1:V, reg r2:V, reg c3:L, reg j2:*, reg j3:V, reg r4:V, reg c4:L, reg x2:*, reg x3:V, reg i35:*, reg i36:V, reg r6:V, reg j4:*, reg j5:V, reg r7:V, reg r8:V, reg x4:*, reg x5:V |
    mkenv;
    st x = 0.0;
    s = toForSeq(<int 1, 2, 3, 4>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L1() else L13();
  L1():
    x4 = ld x;
    check L29() else D6();
  L13():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    i5 = ld i;
    check L14() else D0();
  D0():
    deopt 7 [i2, i5];
  D6():
    deopt 52 [x4];
  L14():
    i6 = force? i5;
    checkMissing(i6);
    r = `==`(i6, 4.0);
    c1 = `as.logical`(r);
    if c1 then L15() else L3();
  L29():
    x5 = force? x4;
    checkMissing(x5);
    popenv;
    return x5;
  L3():
    s1 = toForSeq(<int 1, 2, 3, 4>);
    l1 = length(s1);
    i11 = 0;
    goto L7(i2, i11);
  L15():
    goto L1();
  L7(i12, i13):
    i14 = `+`.1(i13, 1);
    c2 = `<`.1(l1, i14);
    if c2 then L6(i12) else L12();
  L6(i15):
    goto L2(i15);
  L12():
    x1 = `[[`(s1, i14, NULL, TRUE);
    st j = x1;
    j = ld j;
    check L18() else D1();
  D1():
    deopt 19 [i12, i14, j];
  L18():
    j1 = force? j;
    checkMissing(j1);
    r2 = `==`(j1, 2.0);
    c3 = `as.logical`(r2);
    if c3 then L19() else L8();
  L8():
    j2 = ld j;
    check L22() else D2();
  L19():
    goto L7(i12, i14);
  D2():
    deopt 27 [i12, i14, j2];
  L22():
    j3 = force? j2;
    checkMissing(j3);
    r4 = `==`(j3, 4.0);
    c4 = `as.logical`(r4);
    if c4 then L23() else L10();
  L10():
    x2 = ld x;
    check L26() else D3();
  L23():
    goto L6(i12);
  D3():
    deopt 35 [i12, i14, x2];
  L26():
    x3 = force? x2;
    checkMissing(x3);
    i35 = ld i;
    check L27() else D4();
  D4():
    deopt 36 [i12, i14, x3, i35];
  L27():
    i36 = force? i35;
    checkMissing(i36);
    r6 = `*`(i36, 10.0);
    j4 = ld j;
    check L28() else D5();
  D5():
    deopt 39 [i12, i14, x3, r6, j4];
  L28():
    j5 = force? j4;
    checkMissing(j5);
    r7 = `+`(r6, j5);
    r8 = `+`(x3, r7);
    st x = r8;
    goto L7(i12, i14);
  }
}