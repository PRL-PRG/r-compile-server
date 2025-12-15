fun main() {
  () -+> V { reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:*, reg s2:V, reg i5:*, reg i6:V, reg r:V, reg s3:*, reg s4:V |
    mkenv;
    st s = 0.0;
    s = toForSeq(<int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L2() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = ld s;
    check L3() else D0();
  L2():
    s3 = ld s;
    check L5() else D2();
  D0():
    deopt 5 [i2, s1];
  D2():
    deopt 13 [s3];
  L3():
    s2 = force? s1;
    checkMissing(s2);
    i5 = ld i;
    check L4() else D1();
  L5():
    s4 = force? s3;
    checkMissing(s4);
    popenv;
    return s4;
  D1():
    deopt 6 [i2, s2, i5];
  L4():
    i6 = force? i5;
    checkMissing(i6);
    r = `+`(s2, i6);
    st s = r;
    goto L0(i2);
  }
}