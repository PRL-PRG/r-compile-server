fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st isFALSE = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg x3:*, reg x4:V, reg length:cls, reg r4:V, reg r5:V, reg c7:L, reg c8:V, reg c10:L, reg c12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg c15:L, reg r7:V, reg x5:*, reg x6:V, reg is_na:cls, reg r8:V, reg r9:V, reg c16:L, reg c17:V, reg c19:L, reg c21:V, reg x7:*, reg x8:V, reg r10:V, reg c22:L, reg c23:V |
    mkenv;
    st x = x;
    sym = ldf `is.logical`;
    base = ldf `is.logical` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L9() else L1(c1);
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c3):
    c10 = `as.logical`(c3);
    if c10 then L15() else L3(c10);
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.logical`(x2);
    goto L0(c);
  L9():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(c6, r3):
    r5 = `==`(r3, 1);
    c7 = `as.logical`(r5);
    c8 = `&&`(c6, c7);
    goto L1(c8);
  L3(c12):
    c19 = `as.logical`(c12);
    if c19 then L21() else L5(c19);
  L10():
    x3 = ld x;
    check L12() else D1();
  L11():
    r2 = dyn base1(<sym x>);
    goto L2(c1, r2);
  L15():
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  D1():
    deopt 6 [c1, x3];
  L4(c15, r7):
    r9 = `!`(r7);
    c16 = `as.logical`(r9);
    c17 = `&&`(c15, c16);
    goto L3(c17);
  L5(c21):
    popenv;
    return c21;
  L12():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r4 = dyn length(x4);
    check L13() else D2();
  L16():
    x5 = ld x;
    check L18() else D3();
  L17():
    r6 = dyn base2(<sym x>);
    goto L4(c10, r6);
  L21():
    x7 = ld x;
    check L22() else D5();
  D2():
    deopt 9 [c1, r4];
  D3():
    deopt 15 [c10, x5];
  D5():
    deopt 21 [c19, x7];
  L13():
    goto L2(c1, r4);
  L18():
    x6 = force? x5;
    checkMissing(x6);
    is_na = ldf `is.na` in base;
    r8 = dyn is_na(x6);
    check L19() else D4();
  L22():
    x8 = force? x7;
    checkMissing(x8);
    r10 = `!`(x8);
    c22 = `as.logical`(r10);
    c23 = `&&`(c19, c22);
    goto L5(c23);
  D4():
    deopt 18 [c10, r8];
  L19():
    goto L4(c10, r8);
  }
}