fun main() {
  () -+> V { reg i:*, reg i1:V, reg n:*, reg n1:V, reg r:V, reg c:L, reg s:*, reg s1:V, reg i2:*, reg i3:V, reg r1:V, reg i4:*, reg i5:V, reg r2:V, reg s2:*, reg s3:V |
    mkenv;
    st n = 100.0;
    st s = 0.0;
    st i = 0.0;
    goto L1();
  L1():
    i = ld i;
    check L2() else D0();
  D0():
    deopt 9 [i];
  L2():
    i1 = force? i;
    checkMissing(i1);
    n = ld n;
    check L3() else D1();
  D1():
    deopt 10 [i1, n];
  L3():
    n1 = force? n;
    checkMissing(n1);
    r = `<`(i1, n1);
    c = `as.logical`(r);
    if c then L4() else L0();
  L0():
    s2 = ld s;
    check L9() else D5();
  L4():
    s = ld s;
    check L5() else D2();
  D2():
    deopt 13 [s];
  D5():
    deopt 26 [s2];
  L5():
    s1 = force? s;
    checkMissing(s1);
    i2 = ld i;
    check L6() else D3();
  L9():
    s3 = force? s2;
    checkMissing(s3);
    popenv;
    return s3;
  D3():
    deopt 14 [s1, i2];
  L6():
    i3 = force? i2;
    checkMissing(i3);
    r1 = `+`(s1, i3);
    st s = r1;
    i4 = ld i;
    check L7() else D4();
  D4():
    deopt 18 [i4];
  L7():
    i5 = force? i4;
    checkMissing(i5);
    r2 = `+`(i5, 1.0);
    st i = r2;
    goto L1();
  }
}