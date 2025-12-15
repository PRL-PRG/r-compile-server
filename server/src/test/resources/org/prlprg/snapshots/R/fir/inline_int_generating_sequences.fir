fun main() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x:*, reg x1:V, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg xs:*, reg xs1:V, reg r5:I, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg x2:*, reg x3:V, reg r8:I, reg list:cls, reg r9:V |
    mkenv;
    st x = 1.0;
    st xs = <int 1, 2, 3, 4>;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    x = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<lang `:`(x, 100.0)>, <lang seq_along(xs)>, <lang seq_len(x)>);
    goto L0(r);
  D0():
    deopt 8 [x];
  L5():
    x1 = force? x;
    checkMissing(x1);
    r2 = `:`(x1, 100.0);
    sym1 = ldf seq_along;
    base1 = ldf seq_along in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L6() else L7();
  L1(r4):
    sym2 = ldf seq_len;
    base2 = ldf seq_len in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L9() else L10();
  L6():
    xs = ld xs;
    check L8() else D1();
  L7():
    r3 = dyn base1(<sym xs>);
    goto L1(r3);
  D1():
    deopt 13 [xs];
  L2(r7):
    list = ldf list in base;
    r9 = dyn list(r2, r4, r7);
    check L12() else D3();
  L8():
    xs1 = force? xs;
    checkMissing(xs1);
    r5 = seq_along(xs1);
    goto L1(r5);
  L9():
    x2 = ld x;
    check L11() else D2();
  L10():
    r6 = dyn base2(<sym x>);
    goto L2(r6);
  D2():
    deopt 17 [x2];
  D3():
    deopt 21 [r9];
  L11():
    x3 = force? x2;
    checkMissing(x3);
    r8 = seq_len(x3);
    goto L2(r8);
  L12():
    goto L0(r9);
  }
}