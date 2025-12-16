fun main() {
  () -+> V { reg r:cls, reg strrep:cls, reg r1:V, reg strrep1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg p1:p(V +), reg r7:V, reg strrep2:cls, reg p2:p(V +), reg r9:V |
    mkenv;
    r = clos `inner-2119579525`;
    st strrep = r;
    strrep = ldf strrep;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn strrep("ABC", 2.0);
    check L1() else D1();
  D1():
    deopt 7 [r1];
  L1():
    strrep1 = ldf strrep;
    check L2() else D2();
  D2():
    deopt 9 [];
  L2():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("A", "B", "C");
      goto L0(r4);
    L2():
      r2 = dyn base("A", "B", "C");
      goto L0(r2);
    };
    p1 = prom<V +>{
      return <int 1, 2, 3>;
    };
    r7 = dyn strrep1(p, p1);
    check L3() else D3();
  D3():
    deopt 12 [r7];
  L3():
    strrep2 = ldf strrep;
    check L4() else D4();
  D4():
    deopt 14 [];
  L4():
    p2 = prom<V +>{
      return <int 1, 2, 3, 4, 5>;
    };
    r9 = dyn strrep2(" ", p2);
    check L5() else D5();
  D5():
    deopt 17 [r9];
  L5():
    popenv;
    return r9;
  }
}
fun `inner-2119579525`(x, times) {
  (reg x:*, reg times:*) -+> V { var x:*, var times:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg x3:*, reg x4:V, reg as_character:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg x5:*, reg x6:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg r10:V, reg times1:*, reg times2:V, reg as_integer:cls, reg r11:V, reg strrep:cls, reg r12:V |
    mkenv;
    st x = x;
    st times = times;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    r2 = `!`(r1);
    c1 = `as.logical`(r2);
    if c1 then L9() else L1();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 1 [x1];
  L1():
    goto L3();
  L3():
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L15() else L16();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.character`(x2);
    goto L0(c);
  L9():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L10() else L11();
  L2(r4):
    st x = r4;
    goto L3();
  L4(r8):
    popenv;
    return r8;
  L10():
    x3 = ld x;
    check L12() else D1();
  L11():
    r3 = dyn base1(<sym x>);
    goto L2(r3);
  L15():
    x5 = ld x;
    check L17() else D3();
  L16():
    r7 = dyn base2(<lang strrep(x, as.integer(times))>);
    goto L4(r7);
  D1():
    deopt 7 [x3];
  D3():
    deopt 16 [x5];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(x4);
    check L13() else D2();
  L17():
    x6 = force? x5;
    checkMissing(x6);
    sym3 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L18() else L19();
  D2():
    deopt 10 [r5];
  L5(r10):
    strrep = ldf strrep in base;
    r12 = dyn strrep(x6, r10);
    check L22() else D6();
  L13():
    goto L2(r5);
  L18():
    times1 = ld times;
    check L20() else D4();
  L19():
    r9 = dyn base3(<sym times>);
    goto L5(r9);
  D4():
    deopt 20 [times1];
  D6():
    deopt 25 [r12];
  L20():
    times2 = force? times1;
    checkMissing(times2);
    as_integer = ldf `as.integer` in base;
    r11 = dyn as_integer(times2);
    check L21() else D5();
  L22():
    goto L4(r12);
  D5():
    deopt 23 [r11];
  L21():
    goto L5(r11);
  }
}