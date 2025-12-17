fun main() {
  () -+> V { reg r:cls, reg transform:cls, reg airquality:*, reg airquality1:V, reg p:p(V +), reg factor:cls, reg Month:*, reg Month1:V, reg p1:p(V +), reg month_abb:*, reg month_abb1:V, reg c:L, reg month_abb3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), reg r7:V, reg subset:cls, reg aq:*, reg aq1:V, reg p4:p(V +), reg Month2:*, reg Month3:V, reg r9:V, reg p5:p(V +), reg r11:V, reg table:cls, reg aq2:*, reg aq3:V, reg c1:L, reg aq5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg p6:p(V +), reg r14:V, reg table1:cls, reg droplevels:cls, reg aq6:*, reg aq7:V, reg p7:p(V +), reg r16:V, reg c2:L, reg r18:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r19:V, reg p8:p(V +), reg r21:V |
    mkenv;
    r = clos inner2044426018;
    st droplevels = r;
    transform = ldf transform;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      airquality = ld airquality;
      airquality1 = force? airquality;
      checkMissing(airquality1);
      return airquality1;
    };
    p3 = prom<V +>{
      factor = ldf factor;
      p1 = prom<V +>{
        Month = ld Month;
        Month1 = force? Month;
        checkMissing(Month1);
        return Month1;
      };
      p2 = prom<V +>{
        month_abb = ld `month.abb`;
        month_abb1 = force? month_abb;
        checkMissing(month_abb1);
        c = `is.object`(month_abb1);
        if c then L1() else L2(month_abb1);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", month_abb1);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(month_abb3):
        __ = ldf `[` in base;
        r3 = dyn __(month_abb3, <int 5, 6, 7, 8, 9>);
        goto L0(r3);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r5 = dyn factor[, labels](p1, p2);
      return r5;
    };
    r7 = dyn transform[, Month](p, p3);
    check L1() else D1();
  D1():
    deopt 8 [r7];
  L1():
    st aq = r7;
    subset = ldf subset;
    check L2() else D2();
  D2():
    deopt 11 [];
  L2():
    p4 = prom<V +>{
      aq = ld aq;
      aq1 = force? aq;
      checkMissing(aq1);
      return aq1;
    };
    p5 = prom<V +>{
      Month2 = ld Month;
      Month3 = force? Month2;
      checkMissing(Month3);
      r9 = `!=`(Month3, "Jul");
      return r9;
    };
    r11 = dyn subset(p4, p5);
    check L3() else D3();
  D3():
    deopt 14 [r11];
  L3():
    st aq = r11;
    table = ldf table;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p6 = prom<V +>{
      aq2 = ld aq;
      aq3 = force? aq2;
      checkMissing(aq3);
      c1 = `is.object`(aq3);
      if c1 then L1() else L2(aq3);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", aq3);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(aq5):
      r12 = `$`(aq5, <sym Month>);
      goto L0(r12);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r14 = dyn table(p6);
    check L5() else D5();
  D5():
    deopt 19 [r14];
  L5():
    table1 = ldf table;
    check L6() else D6();
  D6():
    deopt 21 [];
  L6():
    p8 = prom<V +>{
      droplevels = ldf droplevels;
      p7 = prom<V +>{
        aq6 = ld aq;
        aq7 = force? aq6;
        checkMissing(aq7);
        return aq7;
      };
      r16 = dyn droplevels(p7);
      c2 = `is.object`(r16);
      if c2 then L1() else L2(r16);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", r16);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(r18):
      r19 = `$`(r18, <sym Month>);
      goto L0(r19);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r21 = dyn table1(p8);
    check L7() else D7();
  D7():
    deopt 23 [r21];
  L7():
    popenv;
    return r21;
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
    r2 = dyn UseMethod("droplevels");
    goto L0(r2);
  L2():
    r = dyn base("droplevels");
    goto L0(r);
  }
}