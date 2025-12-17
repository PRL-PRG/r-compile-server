fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1685356905;
    st `drop.scope` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1685356905(terms1, terms2) {
  (reg terms1:*, reg terms2:*) -+> V { var terms1:*, var terms2:*, reg terms3:cls, reg terms4:*, reg terms5:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg missing:cls, reg r4:V, reg c:L, reg numeric:cls, reg r5:V, reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg terms6:cls, reg terms7:*, reg terms8:V, reg p1:p(V +), reg r9:V, reg attr:cls, reg r10:V, reg factor_scope:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg terms9:*, reg terms10:V, reg attr1:cls, reg r13:V, reg p2:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg f2:*, reg f3:V, reg list:cls, reg r17:V, reg p3:p(V +), reg r19:V, reg c1:L, reg r21:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r22:V |
    mkenv;
    st terms1 = terms1;
    st terms2 = terms2;
    terms3 = ldf terms;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      terms4 = ld terms1;
      terms5 = force? terms4;
      checkMissing(terms5);
      return terms5;
    };
    r1 = dyn terms3(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    st terms1 = r1;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r3):
    c = `as.logical`(r3);
    if c then L7() else L1();
  L5():
    missing = ldf missing in base;
    r4 = dyn missing(<sym terms2>);
    goto L0(r4);
  L6():
    r2 = dyn base(<sym terms2>);
    goto L0(r2);
  L1():
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L2(r6):
    st f2 = r6;
    factor_scope = ldf `factor.scope`;
    check L16() else D7();
  L7():
    numeric = ldf numeric;
    check L8() else D2();
  D2():
    deopt 9 [];
  D7():
    deopt 22 [];
  L8():
    r5 = dyn numeric();
    check L9() else D3();
  L11():
    terms6 = ldf terms;
    check L13() else D4();
  L12():
    r7 = dyn base1(<lang terms(terms2)>, "factors");
    goto L2(r7);
  L16():
    p2 = prom<V +>{
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r12):
      return r12;
    L1():
      terms9 = ld terms1;
      terms10 = force? terms9;
      checkMissing(terms10);
      attr1 = ldf attr in base;
      r13 = dyn attr1(terms10, "factors");
      goto L0(r13);
    L2():
      r11 = dyn base2(<sym terms1>, "factors");
      goto L0(r11);
    };
    p3 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      f2 = ld f2;
      f3 = force? f2;
      checkMissing(f3);
      list = ldf list in base;
      r17 = dyn list(f3);
      goto L0(r17);
    L2():
      r15 = dyn base3[drop](<sym f2>);
      goto L0(r15);
    };
    r19 = dyn factor_scope(p2, p3);
    check L17() else D8();
  D3():
    deopt 10 [r5];
  D4():
    deopt 14 [];
  D8():
    deopt 25 [r19];
  L9():
    goto L2(r5);
  L13():
    p1 = prom<V +>{
      terms7 = ld terms2;
      terms8 = force? terms7;
      checkMissing(terms8);
      return terms8;
    };
    r9 = dyn terms6(p1);
    check L14() else D5();
  L17():
    c1 = `is.object`(r19);
    if c1 then L19() else L20(r19);
  D5():
    deopt 16 [r9];
  L14():
    attr = ldf attr in base;
    r10 = dyn attr(r9, "factors");
    check L15() else D6();
  L18(dx1):
    popenv;
    return dx1;
  L19():
    dr = tryDispatchBuiltin.1("$", r19);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(r21):
    r22 = `$`(r21, <sym drop>);
    goto L18(r22);
  D6():
    deopt 19 [r10];
  L15():
    goto L2(r10);
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L18(dx);
  }
}