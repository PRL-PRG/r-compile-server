fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.news_db_has_no_bad_entries` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg attr:cls, reg r4:V, reg c:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r5:V, reg c6:L, reg r6:V, reg bad:*, reg bad1:V, reg length:cls, reg r7:V, reg NROW:cls, reg x3:*, reg x4:V, reg p:p(V +), reg r9:V, reg r10:V, reg c7:L, reg c10:L, reg c11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c16:L, reg c17:L, reg r12:V, reg bad2:*, reg bad3:V, reg any:cls, reg r13:V, reg r14:V, reg c18:L, reg c19:V, reg c22:L, reg c23:V |
    mkenv;
    st x = x;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    c1 = `as.logical`(r1);
    if c1 then L2(c1) else L12();
  L6():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L7():
    r = dyn base(<lang `<-`(bad, attr(x, "bad"))>);
    goto L0(r);
  L1(r3):
    st bad = r3;
    c = `==`(r3, NULL);
    goto L0(c);
  L2(c2):
    visible.0();
    popenv;
    return c2;
  L8():
    x1 = ld x;
    check L10() else D0();
  L9():
    r2 = dyn base1(<sym x>, "bad");
    goto L1(r2);
  L12():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L13() else L14();
  D0():
    deopt 3 [x1];
  L3(c6, r6):
    NROW = ldf NROW;
    check L17() else D4();
  L10():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r4 = dyn attr(x2, "bad");
    check L11() else D1();
  L13():
    bad = ld bad;
    check L15() else D2();
  L14():
    r5 = dyn base2(<sym bad>);
    goto L3(c1, r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 12 [c1, bad];
  D4():
    deopt 16 [c6, r6];
  L11():
    goto L1(r4);
  L15():
    bad1 = force? bad;
    checkMissing(bad1);
    length = ldf length in base;
    r7 = dyn length(bad1);
    check L16() else D3();
  L17():
    p = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r9 = dyn NROW(p);
    check L18() else D5();
  D3():
    deopt 15 [c1, r7];
  D5():
    deopt 18 [c6, r6, r9];
  L16():
    goto L3(c1, r7);
  L18():
    r10 = `==`(r6, r9);
    c7 = `as.logical`(r10);
    if c7 then L19() else L4(c6, c7);
  L4(c10, c11):
    c22 = `as.logical`(c11);
    c23 = `||`(c10, c22);
    goto L2(c23);
  L19():
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  L5(c16, c17, r12):
    r14 = `!`(r12);
    c18 = `as.logical`(r14);
    c19 = `&&`(c17, c18);
    goto L4(c16, c19);
  L20():
    bad2 = ld bad;
    check L22() else D6();
  L21():
    r11 = dyn base3(<sym bad>);
    goto L5(c6, c7, r11);
  D6():
    deopt 22 [c6, c7, bad2];
  L22():
    bad3 = force? bad2;
    checkMissing(bad3);
    any = ldf any in base;
    r13 = dyn any(bad3);
    check L23() else D7();
  D7():
    deopt 25 [c6, c7, r13];
  L23():
    goto L5(c6, c7, r13);
  }
}