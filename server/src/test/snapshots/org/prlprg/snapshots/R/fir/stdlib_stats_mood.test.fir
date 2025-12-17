fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c1:cls, reg r6:V, reg mood_test:cls, reg ramsay:*, reg ramsay1:V, reg p:p(V +), reg jung_parekh:*, reg jung_parekh1:V, reg p1:p(V +), reg r9:V |
    mkenv;
    r = clos inner2044426018;
    st `mood.test` = r;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r2):
    st ramsay = r2;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L2():
    c = ldf c in base;
    r3 = dyn c(111.0, 107.0, 100.0, 99.0, 102.0, 106.0, 109.0, 108.0, 104.0, 99.0, 101.0, 96.0, 97.0, 102.0, 107.0, 113.0, 116.0, 113.0, 110.0, 98.0);
    check L4() else D0();
  L3():
    r1 = dyn base(111.0, 107.0, 100.0, 99.0, 102.0, 106.0, 109.0, 108.0, 104.0, 99.0, 101.0, 96.0, 97.0, 102.0, 107.0, 113.0, 116.0, 113.0, 110.0, 98.0);
    goto L0(r1);
  D0():
    deopt 26 [r3];
  L1(r5):
    st `jung.parekh` = r5;
    mood_test = ldf `mood.test`;
    check L8() else D2();
  L4():
    goto L0(r3);
  L5():
    c1 = ldf c in base;
    r6 = dyn c1(107.0, 108.0, 106.0, 98.0, 105.0, 103.0, 110.0, 105.0, 104.0, 100.0, 96.0, 108.0, 103.0, 104.0, 114.0, 114.0, 113.0, 108.0, 106.0, 99.0);
    check L7() else D1();
  L6():
    r4 = dyn base1(107.0, 108.0, 106.0, 98.0, 105.0, 103.0, 110.0, 105.0, 104.0, 100.0, 96.0, 108.0, 103.0, 104.0, 114.0, 114.0, 113.0, 108.0, 106.0, 99.0);
    goto L1(r4);
  D1():
    deopt 51 [r6];
  D2():
    deopt 54 [];
  L7():
    goto L1(r6);
  L8():
    p = prom<V +>{
      ramsay = ld ramsay;
      ramsay1 = force? ramsay;
      checkMissing(ramsay1);
      return ramsay1;
    };
    p1 = prom<V +>{
      jung_parekh = ld `jung.parekh`;
      jung_parekh1 = force? jung_parekh;
      checkMissing(jung_parekh1);
      return jung_parekh1;
    };
    r9 = dyn mood_test(p, p1);
    check L9() else D3();
  D3():
    deopt 57 [r9];
  L9():
    popenv;
    return r9;
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
    r2 = dyn UseMethod("mood.test");
    goto L0(r2);
  L2():
    r = dyn base("mood.test");
    goto L0(r);
  }
}