fun main() {
  () -+> V { reg r:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg x1:*, reg x2:V, reg i5:*, reg i6:V, reg r1:V, reg x3:*, reg x4:V |
    mkenv;
    st x = 0.0;
    r = `:`(1.0, 1000.0);
    s = toForSeq(r);
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
    x1 = ld x;
    check L3() else D0();
  L2():
    x3 = ld x;
    check L5() else D2();
  D0():
    deopt 7 [i2, x1];
  D2():
    deopt 15 [x3];
  L3():
    x2 = force? x1;
    checkMissing(x2);
    i5 = ld i;
    check L4() else D1();
  L5():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  D1():
    deopt 8 [i2, x2, i5];
  L4():
    i6 = force? i5;
    checkMissing(i6);
    r1 = `+`(x2, i6);
    st x = r1;
    goto L0(i2);
  }
}