fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg stats:*, reg stats1:V, reg p:p(V +), reg r4:V, reg formula:cls, reg PlantGrowth:*, reg PlantGrowth1:V, reg p1:p(V +), reg r6:V, reg unstack:cls, reg PlantGrowth2:*, reg PlantGrowth3:V, reg p2:p(V +), reg r8:V, reg pg:*, reg pg1:V, reg stack:cls, reg pg2:*, reg pg3:V, reg p3:p(V +), reg r10:V, reg stack1:cls, reg pg4:*, reg pg5:V, reg p4:p(V +), reg ctrl:*, reg ctrl1:V, reg r12:V, reg p5:p(V +), reg r14:V |
    mkenv;
    r = clos inner2044426018;
    st stack = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    formula = ldf formula;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym stats>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      stats = ld stats;
      stats1 = force? stats;
      checkMissing(stats1);
      return stats1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      PlantGrowth = ld PlantGrowth;
      PlantGrowth1 = force? PlantGrowth;
      checkMissing(PlantGrowth1);
      return PlantGrowth1;
    };
    r6 = dyn formula(p1);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L4():
    goto L0();
  L6():
    unstack = ldf unstack;
    check L7() else D4();
  D4():
    deopt 13 [];
  L7():
    p2 = prom<V +>{
      PlantGrowth2 = ld PlantGrowth;
      PlantGrowth3 = force? PlantGrowth2;
      checkMissing(PlantGrowth3);
      return PlantGrowth3;
    };
    r8 = dyn unstack(p2);
    check L8() else D5();
  D5():
    deopt 15 [r8];
  L8():
    st pg = r8;
    pg = ld pg;
    check L9() else D6();
  D6():
    deopt 17 [pg];
  L9():
    pg1 = force? pg;
    checkMissing(pg1);
    stack = ldf stack;
    check L10() else D7();
  D7():
    deopt 20 [];
  L10():
    p3 = prom<V +>{
      pg2 = ld pg;
      pg3 = force? pg2;
      checkMissing(pg3);
      return pg3;
    };
    r10 = dyn stack(p3);
    check L11() else D8();
  D8():
    deopt 22 [r10];
  L11():
    stack1 = ldf stack;
    check L12() else D9();
  D9():
    deopt 24 [];
  L12():
    p4 = prom<V +>{
      pg4 = ld pg;
      pg5 = force? pg4;
      checkMissing(pg5);
      return pg5;
    };
    p5 = prom<V +>{
      ctrl = ld ctrl;
      ctrl1 = force? ctrl;
      checkMissing(ctrl1);
      r12 = `-`(<missing>, ctrl1);
      return r12;
    };
    r14 = dyn stack1[, select](p4, p5);
    check L13() else D10();
  D10():
    deopt 28 [r14];
  L13():
    popenv;
    return r14;
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
    r2 = dyn UseMethod("stack");
    goto L0(r2);
  L2():
    r = dyn base("stack");
    goto L0(r);
  }
}