fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg plot:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg InsectSprays:*, reg InsectSprays1:V, reg p2:p(V +), reg r8:V, reg bartlett_test:cls, reg InsectSprays2:*, reg InsectSprays3:V, reg c:L, reg InsectSprays5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg p3:p(V +), reg InsectSprays6:*, reg InsectSprays7:V, reg c1:L, reg InsectSprays9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r11:V, reg p4:p(V +), reg r13:V, reg bartlett_test1:cls, reg __1:cls, reg r14:V, reg p5:p(V +), reg InsectSprays10:*, reg InsectSprays11:V, reg p6:p(V +), reg r17:V |
    mkenv;
    r = clos inner2044426018;
    st `bartlett.test` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    plot = ldf plot;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      __ = ldf `~` in base;
      r5 = dyn __(<sym count>, <sym spray>);
      return r5;
    };
    p2 = prom<V +>{
      InsectSprays = ld InsectSprays;
      InsectSprays1 = force? InsectSprays;
      checkMissing(InsectSprays1);
      return InsectSprays1;
    };
    r8 = dyn plot[, data](p1, p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r8];
  L4():
    goto L0();
  L6():
    bartlett_test = ldf `bartlett.test`;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p3 = prom<V +>{
      InsectSprays2 = ld InsectSprays;
      InsectSprays3 = force? InsectSprays2;
      checkMissing(InsectSprays3);
      c = `is.object`(InsectSprays3);
      if c then L1() else L2(InsectSprays3);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", InsectSprays3);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(InsectSprays5):
      r9 = `$`(InsectSprays5, <sym count>);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      InsectSprays6 = ld InsectSprays;
      InsectSprays7 = force? InsectSprays6;
      checkMissing(InsectSprays7);
      c1 = `is.object`(InsectSprays7);
      if c1 then L1() else L2(InsectSprays7);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", InsectSprays7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(InsectSprays9):
      r11 = `$`(InsectSprays9, <sym spray>);
      goto L0(r11);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r13 = dyn bartlett_test(p3, p4);
    check L8() else D5();
  D5():
    deopt 18 [r13];
  L8():
    bartlett_test1 = ldf `bartlett.test`;
    check L9() else D6();
  D6():
    deopt 20 [];
  L9():
    p5 = prom<V +>{
      __1 = ldf `~` in base;
      r14 = dyn __1(<sym count>, <sym spray>);
      return r14;
    };
    p6 = prom<V +>{
      InsectSprays10 = ld InsectSprays;
      InsectSprays11 = force? InsectSprays10;
      checkMissing(InsectSprays11);
      return InsectSprays11;
    };
    r17 = dyn bartlett_test1[, data](p5, p6);
    check L10() else D7();
  D7():
    deopt 24 [r17];
  L10():
    popenv;
    return r17;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("bartlett.test");
    goto L0(r2);
  L2():
    r = dyn base("bartlett.test");
    goto L0(r);
  }
}