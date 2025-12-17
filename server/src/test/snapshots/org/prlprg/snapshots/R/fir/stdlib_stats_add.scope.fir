fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1685356905;
    st `add.scope` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1685356905(terms1, terms2) {
  (reg terms1:*, reg terms2:*) -+> V { var terms1:*, var terms2:*, reg terms3:cls, reg terms4:*, reg terms5:V, reg p:p(V +), reg r1:V, reg terms6:cls, reg terms7:*, reg terms8:V, reg p1:p(V +), reg r3:V, reg factor_scope:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg terms9:*, reg terms10:V, reg attr:cls, reg r6:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg terms11:*, reg terms12:V, reg attr1:cls, reg r12:V, reg list:cls, reg r13:V, reg p3:p(V +), reg r15:V, reg c:L, reg r17:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V |
    mkenv;
    st terms1 = terms1;
    st terms2 = terms2;
    terms3 = ldf terms;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      terms4 = ld terms1;
      terms5 = force? terms4;
      checkMissing(terms5);
      return terms5;
    };
    r1 = dyn terms3(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    st terms1 = r1;
    terms6 = ldf terms;
    check L2() else D2();
  D2():
    deopt 6 [];
  L2():
    p1 = prom<V +>{
      terms7 = ld terms2;
      terms8 = force? terms7;
      checkMissing(terms8);
      return terms8;
    };
    r3 = dyn terms6(p1);
    check L3() else D3();
  D3():
    deopt 8 [r3];
  L3():
    st terms2 = r3;
    factor_scope = ldf `factor.scope`;
    check L4() else D4();
  D4():
    deopt 11 [];
  L4():
    p2 = prom<V +>{
      sym = ldf attr;
      base = ldf attr in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      terms9 = ld terms1;
      terms10 = force? terms9;
      checkMissing(terms10);
      attr = ldf attr in base;
      r6 = dyn attr(terms10, "factors");
      goto L0(r6);
    L2():
      r4 = dyn base(<sym terms1>, "factors");
      goto L0(r4);
    };
    p3 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r9):
      return r9;
    L2():
      sym2 = ldf attr;
      base2 = ldf attr in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r8 = dyn base1[add](<lang attr(terms2, "factors")>);
      goto L0(r8);
    L1(r11):
      list = ldf list in base;
      r13 = dyn list(r11);
      goto L0(r13);
    L4():
      terms11 = ld terms2;
      terms12 = force? terms11;
      checkMissing(terms12);
      attr1 = ldf attr in base;
      r12 = dyn attr1(terms12, "factors");
      goto L1(r12);
    L5():
      r10 = dyn base2(<sym terms2>, "factors");
      goto L1(r10);
    };
    r15 = dyn factor_scope(p2, p3);
    check L5() else D5();
  D5():
    deopt 14 [r15];
  L5():
    c = `is.object`(r15);
    if c then L7() else L8(r15);
  L6(dx1):
    popenv;
    return dx1;
  L7():
    dr = tryDispatchBuiltin.1("$", r15);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(r17):
    r18 = `$`(r17, <sym add>);
    goto L6(r18);
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  }
}