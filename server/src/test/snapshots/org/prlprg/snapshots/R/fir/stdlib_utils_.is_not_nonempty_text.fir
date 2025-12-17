fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.is_not_nonempty_text` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:V, reg c1:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg c6:L, reg r3:V, reg x3:*, reg x4:V, reg anyNA:cls, reg r4:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c15:L, reg r6:V, reg grepl:cls, reg x5:*, reg x6:V, reg p:p(V +), reg r8:V, reg all:cls, reg r9:V, reg c16:L, reg c17:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L1(c1) else L8();
  L5():
    x1 = ld x;
    check L7() else D0();
  L6():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1(c2):
    c10 = `as.logical`(c2);
    if c10 then L3(c10) else L14();
  L7():
    x2 = force? x1;
    checkMissing(x2);
    c = `==`(x2, NULL);
    goto L0(c);
  L8():
    sym1 = ldf anyNA;
    base1 = ldf anyNA in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L9() else L10();
  L2(c6, r3):
    c7 = `as.logical`(r3);
    c8 = `||`(c6, c7);
    goto L1(c8);
  L3(c11):
    popenv;
    return c11;
  L9():
    x3 = ld x;
    check L11() else D1();
  L10():
    r2 = dyn base1(<sym x>);
    goto L2(c1, r2);
  L14():
    sym2 = ldf all;
    base2 = ldf all in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  D1():
    deopt 6 [c1, x3];
  L4(c15, r6):
    c16 = `as.logical`(r6);
    c17 = `||`(c15, c16);
    goto L3(c17);
  L11():
    x4 = force? x3;
    checkMissing(x4);
    anyNA = ldf anyNA in base;
    r4 = dyn anyNA(x4);
    check L12() else D2();
  L15():
    grepl = ldf grepl;
    check L17() else D3();
  L16():
    r5 = dyn base2(<lang grepl("^[[:space:]]*$", x)>);
    goto L4(c10, r5);
  D2():
    deopt 9 [c1, r4];
  D3():
    deopt 14 [c10];
  L12():
    goto L2(c1, r4);
  L17():
    p = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r8 = dyn grepl("^[[:space:]]*$", p);
    check L18() else D4();
  D4():
    deopt 17 [c10, r8];
  L18():
    all = ldf all in base;
    r9 = dyn all(r8);
    check L19() else D5();
  D5():
    deopt 19 [c10, r9];
  L19():
    goto L4(c10, r9);
  }
}