fun main() {
  () -+> V { reg r:cls, reg Loblolly:*, reg Loblolly1:V, reg c:L, reg Loblolly3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg Loblolly4:*, reg Loblolly5:V, reg c1:L, reg Loblolly8:V, reg Loblolly9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg print:cls, reg NLSstAsymptotic:cls, reg sortedXyData:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg expression:cls, reg r6:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg expression1:cls, reg r10:V, reg p1:p(V +), reg Lob_329:*, reg Lob_330:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg p4:p(V +), reg r17:V |
    mkenv;
    r = clos inner2356893153;
    st NLSstAsymptotic = r;
    Loblolly = ld Loblolly;
    check L1() else D0();
  D0():
    deopt 3 [Loblolly];
  L1():
    Loblolly1 = force? Loblolly;
    checkMissing(Loblolly1);
    c = `is.object`(Loblolly1);
    if c then L2() else L3(Loblolly1);
  L0(dx1):
    st `Lob.329` = dx1;
    print = ldf print;
    check L10() else D2();
  L2():
    dr = tryDispatchBuiltin.1("[", Loblolly1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(Loblolly3):
    Loblolly4 = ld Loblolly;
    check L5() else D1();
  D1():
    deopt 5 [Loblolly3, Loblolly4];
  D2():
    deopt 15 [];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    Loblolly5 = force? Loblolly4;
    checkMissing(Loblolly5);
    c1 = `is.object`(Loblolly5);
    if c1 then L7() else L8(Loblolly3, Loblolly5);
  L10():
    p4 = prom<V +>{
      NLSstAsymptotic = ldf NLSstAsymptotic;
      p3 = prom<V +>{
        sortedXyData = ldf sortedXyData;
        p = prom<V +>{
          sym = ldf expression;
          base = ldf expression in base;
          guard = `==`.4(sym, base);
          if guard then L1() else L2();
        L0(r5):
          return r5;
        L1():
          expression = ldf expression in base;
          r6 = dyn expression(<sym age>);
          goto L0(r6);
        L2():
          r4 = dyn base(<sym age>);
          goto L0(r4);
        };
        p1 = prom<V +>{
          sym1 = ldf expression;
          base1 = ldf expression in base;
          guard1 = `==`.4(sym1, base1);
          if guard1 then L1() else L2();
        L0(r9):
          return r9;
        L1():
          expression1 = ldf expression in base;
          r10 = dyn expression1(<sym height>);
          goto L0(r10);
        L2():
          r8 = dyn base1(<sym height>);
          goto L0(r8);
        };
        p2 = prom<V +>{
          Lob_329 = ld `Lob.329`;
          Lob_330 = force? Lob_329;
          checkMissing(Lob_330);
          return Lob_330;
        };
        r13 = dyn sortedXyData(p, p1, p2);
        return r13;
      };
      r15 = dyn NLSstAsymptotic(p3);
      return r15;
    };
    r17 = dyn print[, digits](p4, 3.0);
    check L11() else D3();
  D3():
    deopt 19 [r17];
  L6(dx3):
    r2 = `==`(dx3, "329");
    __ = ldf `[` in base;
    r3 = dyn __(Loblolly1, r2, <missing>);
    goto L0(r3);
  L7():
    dr2 = tryDispatchBuiltin.1("$", Loblolly5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(Loblolly3, dr2);
  L8(Loblolly8, Loblolly9):
    r1 = `$`(Loblolly9, <sym Seed>);
    goto L6(r1);
  L11():
    popenv;
    return r17;
  L9():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  }
}
fun inner2356893153(xy) {
  (reg xy:*) -+> V { var xy:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg UseMethod:cls, reg r2:V |
    mkenv;
    st xy = xy;
    sym = ldf UseMethod;
    base = ldf UseMethod in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    UseMethod = ldf UseMethod in base;
    r2 = dyn UseMethod("NLSstAsymptotic");
    goto L0(r2);
  L2():
    r = dyn base("NLSstAsymptotic");
    goto L0(r);
  }
}