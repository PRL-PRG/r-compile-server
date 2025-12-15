fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg T:*, reg T1:V, reg F:*, reg F1:V, reg T2:*, reg T3:V, reg c:cls, reg r2:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg s1:*, reg s2:V, reg i5:*, reg i6:V, reg r3:V, reg s3:*, reg s4:V |
    mkenv;
    st s = 0;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L1(i);
  L3():
    T = ld T;
    check L5() else D0();
  L4():
    r = dyn base(<sym T>, <sym F>, <sym T>);
    goto L0(r);
  D0():
    deopt 5 [T];
  L1(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L9() else L2();
  L5():
    T1 = force? T;
    checkMissing(T1);
    F = ld F;
    check L6() else D1();
  D1():
    deopt 7 [F];
  L2():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = ld s;
    check L10() else D4();
  L6():
    F1 = force? F;
    checkMissing(F1);
    T2 = ld T;
    check L7() else D2();
  L9():
    s3 = ld s;
    check L12() else D6();
  D2():
    deopt 9 [T2];
  D4():
    deopt 13 [i2, s1];
  D6():
    deopt 21 [s3];
  L7():
    T3 = force? T2;
    checkMissing(T3);
    c = ldf c in base;
    r2 = dyn c(T1, F1, T3);
    check L8() else D3();
  L10():
    s2 = force? s1;
    checkMissing(s2);
    i5 = ld i;
    check L11() else D5();
  L12():
    s4 = force? s3;
    checkMissing(s4);
    popenv;
    return s4;
  D3():
    deopt 12 [r2];
  D5():
    deopt 14 [i2, s2, i5];
  L8():
    goto L0(r2);
  L11():
    i6 = force? i5;
    checkMissing(i6);
    r3 = `+`(s2, i6);
    st s = r3;
    goto L1(i2);
  }
}