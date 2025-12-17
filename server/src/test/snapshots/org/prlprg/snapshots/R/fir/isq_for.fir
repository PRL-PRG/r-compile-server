fun main() {
  () -+> V { reg n:*, reg n1:V, reg m:*, reg m1:V, reg r:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:*, reg s2:V, reg i5:*, reg i6:V, reg r1:V, reg s3:*, reg s4:V |
    mkenv;
    st n = 1.0;
    st m = 10.0;
    st s = 0.0;
    n = ld n;
    check L2() else D0();
  D0():
    deopt 9 [n];
  L2():
    n1 = force? n;
    checkMissing(n1);
    m = ld m;
    check L3() else D1();
  D1():
    deopt 10 [n1, m];
  L3():
    m1 = force? m;
    checkMissing(m1);
    r = `:`(n1, m1);
    s = toForSeq(r);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L4() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = ld s;
    check L5() else D2();
  L4():
    s3 = ld s;
    check L7() else D4();
  D2():
    deopt 13 [i2, s1];
  D4():
    deopt 21 [s3];
  L5():
    s2 = force? s1;
    checkMissing(s2);
    i5 = ld i;
    check L6() else D3();
  L7():
    s4 = force? s3;
    checkMissing(s4);
    popenv;
    return s4;
  D3():
    deopt 14 [i2, s2, i5];
  L6():
    i6 = force? i5;
    checkMissing(i6);
    r1 = `+`(s2, i6);
    st s = r1;
    goto L0(i2);
  }
}