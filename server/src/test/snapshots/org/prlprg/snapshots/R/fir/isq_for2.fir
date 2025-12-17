fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg xs:*, reg xs1:V, reg r5:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:*, reg s2:V, reg xs2:*, reg xs3:V, reg c1:L, reg i6:I, reg s4:V, reg xs5:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg s6:V, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r6:V, reg r7:V, reg s7:*, reg s8:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st xs = r1;
    st s = 0.0;
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L5():
    list = ldf list in base;
    r2 = dyn list(10.0, 20.0, 30.0);
    check L7() else D0();
  L6():
    r = dyn base(10.0, 20.0, 30.0);
    goto L0(r);
  D0():
    deopt 6 [r2];
  L1(r4):
    s = toForSeq(r4);
    l = length(s);
    i = 0;
    goto L2(i);
  L7():
    goto L0(r2);
  L8():
    xs = ld xs;
    check L10() else D1();
  L9():
    r3 = dyn base1(<sym xs>);
    goto L1(r3);
  D1():
    deopt 12 [xs];
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L11() else L4();
  L10():
    xs1 = force? xs;
    checkMissing(xs1);
    r5 = seq_along(xs1);
    goto L1(r5);
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = ld s;
    check L12() else D2();
  L11():
    s7 = ld s;
    check L18() else D5();
  D2():
    deopt 15 [i2, s1];
  D5():
    deopt 26 [s7];
  L12():
    s2 = force? s1;
    checkMissing(s2);
    xs2 = ld xs;
    check L13() else D3();
  L18():
    s8 = force? s7;
    checkMissing(s8);
    popenv;
    return s8;
  D3():
    deopt 16 [i2, s2, xs2];
  L13():
    xs3 = force? xs2;
    checkMissing(xs3);
    c1 = `is.object`(xs3);
    if c1 then L14() else L15(i2, s2, xs3);
  L3(i8, s6, dx1):
    r7 = `+`(s6, dx1);
    st s = r7;
    goto L2(i8);
  L14():
    dr = tryDispatchBuiltin.1("[[", xs3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(i2, s2, dr);
  L15(i6, s4, xs5):
    i9 = ld i;
    check L17() else D4();
  D4():
    deopt 18 [i6, s4, xs5, i9];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, s2, dx);
  L17():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r6 = dyn __(xs5, i10);
    goto L3(i6, s4, r6);
  }
}