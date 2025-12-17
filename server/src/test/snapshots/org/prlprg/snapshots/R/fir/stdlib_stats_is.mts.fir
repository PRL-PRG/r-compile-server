fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `is.mts` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg is_ts:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg c5:L, reg r3:V, reg x3:*, reg x4:V, reg inherits:cls, reg r4:V, reg c6:L, reg c7:V, reg c9:L, reg c11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg c14:L, reg r6:V, reg x5:*, reg x6:V, reg is_matrix:cls, reg r7:V, reg c15:L, reg c16:V |
    mkenv;
    st x = x;
    is_ts = ldf `is.ts`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_ts(p);
    check L5() else D1();
  D1():
    deopt 3 [r1];
  L5():
    c = `as.logical`(r1);
    if c then L6() else L0(c);
  L0(c2):
    c9 = `as.logical`(c2);
    if c9 then L12() else L2(c9);
  L6():
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L1(c5, r3):
    c6 = `as.logical`(r3);
    c7 = `&&`(c5, c6);
    goto L0(c7);
  L2(c11):
    popenv;
    return c11;
  L7():
    x3 = ld x;
    check L9() else D2();
  L8():
    r2 = dyn base(<sym x>, "mts");
    goto L1(c, r2);
  L12():
    sym1 = ldf `is.matrix`;
    base1 = ldf `is.matrix` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  D2():
    deopt 6 [c, x3];
  L3(c14, r6):
    c15 = `as.logical`(r6);
    c16 = `&&`(c14, c15);
    goto L2(c16);
  L9():
    x4 = force? x3;
    checkMissing(x4);
    inherits = ldf inherits in base;
    r4 = dyn inherits(x4, "mts", FALSE);
    check L10() else D3();
  L13():
    x5 = ld x;
    check L15() else D4();
  L14():
    r5 = dyn base1(<sym x>);
    goto L3(c9, r5);
  D3():
    deopt 11 [c, r4];
  D4():
    deopt 15 [c9, x5];
  L10():
    goto L1(c, r4);
  L15():
    x6 = force? x5;
    checkMissing(x6);
    is_matrix = ldf `is.matrix` in base;
    r7 = dyn is_matrix(x6);
    check L16() else D5();
  D5():
    deopt 18 [c9, r7];
  L16():
    goto L3(c9, r7);
  }
}