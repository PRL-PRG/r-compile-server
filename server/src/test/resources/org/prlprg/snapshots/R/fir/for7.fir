fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg as_raw:cls, reg r5:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c1:L, reg x:V, reg s1:*, reg s2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg i7:I, reg s5:V, reg r7:V, reg i8:*, reg i9:V, reg as_integer:cls, reg r8:V, reg r9:V, reg s6:*, reg s7:V |
    mkenv;
    st s = 0.0;
    sym = ldf `as.raw`;
    base = ldf `as.raw` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    s = toForSeq(r1);
    l = length(s);
    i = 0;
    goto L2(i);
  L5():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L6():
    r = dyn base(<lang c(1.0, 2.0, 3.0)>);
    goto L0(r);
  L1(r3):
    as_raw = ldf `as.raw` in base;
    r5 = dyn as_raw(r3);
    check L10() else D1();
  L2(i1):
    i2 = `+`.1(i1, 1);
    c1 = `<`.1(l, i2);
    if c1 then L11() else L4();
  L7():
    c = ldf c in base;
    r4 = dyn c(1.0, 2.0, 3.0);
    check L9() else D0();
  L8():
    r2 = dyn base1(1.0, 2.0, 3.0);
    goto L1(r2);
  D0():
    deopt 11 [r4];
  D1():
    deopt 13 [r5];
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = ld s;
    check L12() else D2();
  L9():
    goto L1(r4);
  L10():
    goto L0(r5);
  L11():
    s6 = ld s;
    check L17() else D5();
  D2():
    deopt 14 [i2, s1];
  D5():
    deopt 26 [s6];
  L12():
    s2 = force? s1;
    checkMissing(s2);
    sym2 = ldf `as.integer`;
    base2 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  L17():
    s7 = force? s6;
    checkMissing(s7);
    popenv;
    return s7;
  L3(i7, s5, r7):
    r9 = `+`(s5, r7);
    st s = r9;
    goto L2(i7);
  L13():
    i8 = ld i;
    check L15() else D3();
  L14():
    r6 = dyn base2(<sym i>);
    goto L3(i2, s2, r6);
  D3():
    deopt 17 [i2, s2, i8];
  L15():
    i9 = force? i8;
    checkMissing(i9);
    as_integer = ldf `as.integer` in base;
    r8 = dyn as_integer(i9);
    check L16() else D4();
  D4():
    deopt 20 [i2, s2, r8];
  L16():
    goto L3(i2, s2, r8);
  }
}