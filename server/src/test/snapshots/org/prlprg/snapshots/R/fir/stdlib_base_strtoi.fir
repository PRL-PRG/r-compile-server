fun main() {
  () -+> V { reg r:cls, reg strtoi:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg strtoi1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg c1:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg strtoi2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg c2:cls, reg r13:V, reg p2:p(V +), reg r15:V |
    mkenv;
    r = clos inner1436965772;
    st strtoi = r;
    strtoi = ldf strtoi;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c("0xff", "077", "123");
      goto L0(r3);
    L2():
      r1 = dyn base("0xff", "077", "123");
      goto L0(r1);
    };
    r5 = dyn strtoi(p);
    check L1() else D1();
  D1():
    deopt 6 [r5];
  L1():
    strtoi1 = ldf strtoi;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      c1 = ldf c in base;
      r8 = dyn c1("ffff", "FFFF");
      goto L0(r8);
    L2():
      r6 = dyn base1("ffff", "FFFF");
      goto L0(r6);
    };
    r10 = dyn strtoi1(p1, 16);
    check L3() else D3();
  D3():
    deopt 11 [r10];
  L3():
    strtoi2 = ldf strtoi;
    check L4() else D4();
  D4():
    deopt 13 [];
  L4():
    p2 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      c2 = ldf c in base;
      r13 = dyn c2("177", "377");
      goto L0(r13);
    L2():
      r11 = dyn base2("177", "377");
      goto L0(r11);
    };
    r15 = dyn strtoi2(p2, 8);
    check L5() else D5();
  D5():
    deopt 16 [r15];
  L5():
    popenv;
    return r15;
  }
}
fun inner1436965772(x, base) {
  (reg x:*, reg base:*) -+> V { var x:*, var base:*, reg base_isMissing:L, reg base_orDefault:*, reg sym:cls, reg base1:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base2:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg as_character:cls, reg r4:V, reg sym2:cls, reg base3:cls, reg guard2:L, reg r5:V, reg r6:V, reg base4:*, reg base5:V, reg as_integer:cls, reg r7:V, reg strtoi:cls, reg r8:V |
    mkenv;
    st x = x;
    base_isMissing = missing.0(base);
    if base_isMissing then L0(0) else L0(base);
  L0(base_orDefault):
    st base = base_orDefault;
    sym = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard = `==`.4(sym, base1);
    if guard then L4() else L5();
  L1(r1):
    popenv;
    return r1;
  L4():
    sym1 = ldf `as.character`;
    base2 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base2);
    if guard1 then L6() else L7();
  L5():
    r = dyn base1(<lang strtoi(as.character(x), as.integer(base))>);
    goto L1(r);
  L2(r3):
    sym2 = ldf `as.integer`;
    base3 = ldf `as.integer` in base;
    guard2 = `==`.4(sym2, base3);
    if guard2 then L10() else L11();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r2 = dyn base2(<sym x>);
    goto L2(r2);
  D0():
    deopt 4 [x1];
  L3(r6):
    strtoi = ldf strtoi in base;
    r8 = dyn strtoi(r3, r6);
    check L14() else D4();
  L8():
    x2 = force? x1;
    checkMissing(x2);
    as_character = ldf `as.character` in base;
    r4 = dyn as_character(x2);
    check L9() else D1();
  L10():
    base4 = ld base;
    check L12() else D2();
  L11():
    r5 = dyn base3(<sym base>);
    goto L3(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 10 [base4];
  D4():
    deopt 15 [r8];
  L9():
    goto L2(r4);
  L12():
    base5 = force? base4;
    checkMissing(base5);
    as_integer = ldf `as.integer` in base;
    r7 = dyn as_integer(base5);
    check L13() else D3();
  L14():
    goto L1(r8);
  D3():
    deopt 13 [r7];
  L13():
    goto L3(r7);
  }
}