fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg r5:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg s1:*, reg s2:V, reg xs:*, reg xs1:V, reg c1:L, reg i6:I, reg s4:V, reg xs3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg s6:V, reg dx1:V, reg i9:*, reg i10:V, reg __:cls, reg r6:V, reg r7:V, reg s7:*, reg s8:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st xs = r1;
    st s = 0.0;
    sym1 = ldf seq_len;
    base1 = ldf seq_len in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L5():
    list = ldf list in base;
    r2 = dyn list(11.0, 21.0, 31.0);
    check L7() else D0();
  L6():
    r = dyn base(11.0, 21.0, 31.0);
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
    r5 = seq_len(3.0);
    goto L1(r5);
  L9():
    r3 = dyn base1(3.0);
    goto L1(r3);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    s1 = ld s;
    check L11() else D1();
  L10():
    s7 = ld s;
    check L17() else D4();
  D1():
    deopt 15 [i2, s1];
  D4():
    deopt 26 [s7];
  L11():
    s2 = force? s1;
    checkMissing(s2);
    xs = ld xs;
    check L12() else D2();
  L17():
    s8 = force? s7;
    checkMissing(s8);
    popenv;
    return s8;
  D2():
    deopt 16 [i2, s2, xs];
  L12():
    xs1 = force? xs;
    checkMissing(xs1);
    c1 = `is.object`(xs1);
    if c1 then L13() else L14(i2, s2, xs1);
  L3(i8, s6, dx1):
    r7 = `+`(s6, dx1);
    st s = r7;
    goto L2(i8);
  L13():
    dr = tryDispatchBuiltin.1("[[", xs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(i2, s2, dr);
  L14(i6, s4, xs3):
    i9 = ld i;
    check L16() else D3();
  D3():
    deopt 18 [i6, s4, xs3, i9];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(i2, s2, dx);
  L16():
    i10 = force? i9;
    __ = ldf `[[` in base;
    r6 = dyn __(xs3, i10);
    goto L3(i6, s4, r6);
  }
}