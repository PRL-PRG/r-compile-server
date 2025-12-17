fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `as.ts.default` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg is_ts:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg c:L, reg x3:*, reg x4:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg tsp:cls, reg x5:*, reg x6:V, reg p1:p(V +), reg r5:V, reg c1:V, reg r6:V, reg c2:L, reg ts:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg xtsp:*, reg xtsp1:V, reg c3:L, reg xtsp3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg p3:p(V +), reg xtsp4:*, reg xtsp5:V, reg c4:L, reg xtsp7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r10:V, reg p4:p(V +), reg xtsp8:*, reg xtsp9:V, reg c5:L, reg xtsp11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r12:V, reg p5:p(V +), reg r14:V, reg ts1:cls, reg x9:*, reg x10:V, reg p6:p(V +), reg r16:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    is_ts = ldf `is.ts`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn is_ts(p);
    check L4() else D1();
  D1():
    deopt 3 [r1];
  L4():
    c = `as.logical`(r1);
    if c then L5() else L0();
  L0():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L5():
    x3 = ld x;
    check L6() else D2();
  D2():
    deopt 4 [x3];
  L1(r3):
    r6 = `!`(r3);
    c2 = `as.logical`(r6);
    if c2 then L12() else L2();
  L6():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  L8():
    tsp = ldf tsp;
    check L10() else D3();
  L9():
    r2 = dyn base(<lang `<-`(xtsp, tsp(x))>);
    goto L1(r2);
  D3():
    deopt 8 [];
  L2():
    ts1 = ldf ts;
    check L16() else D7();
  L10():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r5 = dyn tsp(p1);
    check L11() else D4();
  L12():
    ts = ldf ts;
    check L13() else D5();
  D4():
    deopt 10 [r5];
  D5():
    deopt 15 [];
  D7():
    deopt 22 [];
  L11():
    st xtsp = r5;
    c1 = `==`(r5, NULL);
    goto L1(c1);
  L13():
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p3 = prom<V +>{
      xtsp = ld xtsp;
      xtsp1 = force? xtsp;
      checkMissing(xtsp1);
      c3 = `is.object`(xtsp1);
      if c3 then L1() else L2(xtsp1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", xtsp1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(xtsp3):
      __ = ldf `[` in base;
      r8 = dyn __(xtsp3, 1);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      xtsp4 = ld xtsp;
      xtsp5 = force? xtsp4;
      checkMissing(xtsp5);
      c4 = `is.object`(xtsp5);
      if c4 then L1() else L2(xtsp5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", xtsp5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(xtsp7):
      __1 = ldf `[` in base;
      r10 = dyn __1(xtsp7, 2);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p5 = prom<V +>{
      xtsp8 = ld xtsp;
      xtsp9 = force? xtsp8;
      checkMissing(xtsp9);
      c5 = `is.object`(xtsp9);
      if c5 then L1() else L2(xtsp9);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[", xtsp9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(xtsp11):
      __2 = ldf `[` in base;
      r12 = dyn __2(xtsp11, 3);
      goto L0(r12);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r14 = dyn ts(p2, p3, p4, p5);
    check L14() else D6();
  L16():
    p6 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r16 = dyn ts1(p6);
    check L17() else D8();
  D6():
    deopt 20 [r14];
  D8():
    deopt 24 [r16];
  L14():
    popenv;
    return r14;
  L17():
    popenv;
    return r16;
  }
}