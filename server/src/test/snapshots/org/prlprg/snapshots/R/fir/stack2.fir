fun main() {
  () -+> V { reg a:*, reg a1:V, reg c:L, reg b:*, reg b1:V, reg c1:*, reg c2:V, reg r:V, reg r1:V, reg b2:*, reg b3:V, reg x:*, reg x1:V, reg r2:V |
    mkenv;
    st a = 1.0;
    st b = 2.0;
    st c = 3.0;
    a = ld a;
    check L2() else D0();
  D0():
    deopt 9 [a];
  L2():
    a1 = force? a;
    checkMissing(a1);
    c = `as.logical`(a1);
    if c then L3() else L0();
  L0():
    b2 = ld b;
    check L7() else D3();
  L1(r1):
    st x = r1;
    x = ld x;
    check L8() else D4();
  L3():
    b = ld b;
    check L4() else D1();
  D1():
    deopt 11 [b];
  D3():
    deopt 15 [b2];
  D4():
    deopt 18 [x];
  L4():
    b1 = force? b;
    checkMissing(b1);
    c1 = ld c;
    check L5() else D2();
  L7():
    b3 = force? b2;
    checkMissing(b3);
    goto L1(b3);
  L8():
    x1 = force? x;
    checkMissing(x1);
    r2 = `+`(x1, 1.0);
    popenv;
    return r2;
  D2():
    deopt 12 [b1, c1];
  L5():
    c2 = force? c1;
    checkMissing(c2);
    r = `+`(b1, c2);
    goto L1(r);
  }
}