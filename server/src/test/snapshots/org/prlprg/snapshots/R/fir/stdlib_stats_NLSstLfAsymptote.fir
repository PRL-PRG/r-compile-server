fun main() {
  () -+> V { reg r:cls, reg DNase:*, reg DNase1:V, reg c:L, reg DNase3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg DNase4:*, reg DNase5:V, reg c1:L, reg DNase8:V, reg DNase9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg sortedXyData:cls, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg expression:cls, reg r6:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg expression1:cls, reg r10:V, reg p1:p(V +), reg DNase_2:*, reg DNase_3:V, reg p2:p(V +), reg r13:V, reg NLSstLfAsymptote:cls, reg DN_srt:*, reg DN_srt1:V, reg p3:p(V +), reg r15:V |
    mkenv;
    r = clos inner2356893153;
    st NLSstLfAsymptote = r;
    DNase = ld DNase;
    check L1() else D0();
  D0():
    deopt 3 [DNase];
  L1():
    DNase1 = force? DNase;
    checkMissing(DNase1);
    c = `is.object`(DNase1);
    if c then L2() else L3(DNase1);
  L0(dx1):
    st `DNase.2` = dx1;
    sortedXyData = ldf sortedXyData;
    check L10() else D2();
  L2():
    dr = tryDispatchBuiltin.1("[", DNase1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L4() else L3(dr);
  L3(DNase3):
    DNase4 = ld DNase;
    check L5() else D1();
  D1():
    deopt 5 [DNase3, DNase4];
  D2():
    deopt 15 [];
  L4():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L5():
    DNase5 = force? DNase4;
    checkMissing(DNase5);
    c1 = `is.object`(DNase5);
    if c1 then L7() else L8(DNase3, DNase5);
  L10():
    p = prom<V +>{
      sym = ldf expression;
      base = ldf expression in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r5):
      return r5;
    L1():
      expression = ldf expression in base;
      r6 = dyn expression(<lang log(conc)>);
      goto L0(r6);
    L2():
      r4 = dyn base(<lang log(conc)>);
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
      r10 = dyn expression1(<sym density>);
      goto L0(r10);
    L2():
      r8 = dyn base1(<sym density>);
      goto L0(r8);
    };
    p2 = prom<V +>{
      DNase_2 = ld `DNase.2`;
      DNase_3 = force? DNase_2;
      checkMissing(DNase_3);
      return DNase_3;
    };
    r13 = dyn sortedXyData(p, p1, p2);
    check L11() else D3();
  D3():
    deopt 19 [r13];
  L6(dx3):
    r2 = `==`(dx3, "2");
    __ = ldf `[` in base;
    r3 = dyn __(DNase1, r2, <missing>);
    goto L0(r3);
  L7():
    dr2 = tryDispatchBuiltin.1("$", DNase5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L9() else L8(DNase3, dr2);
  L8(DNase8, DNase9):
    r1 = `$`(DNase9, <sym Run>);
    goto L6(r1);
  L11():
    st `DN.srt` = r13;
    NLSstLfAsymptote = ldf NLSstLfAsymptote;
    check L12() else D4();
  D4():
    deopt 22 [];
  L9():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L6(dx2);
  L12():
    p3 = prom<V +>{
      DN_srt = ld `DN.srt`;
      DN_srt1 = force? DN_srt;
      checkMissing(DN_srt1);
      return DN_srt1;
    };
    r15 = dyn NLSstLfAsymptote(p3);
    check L13() else D5();
  D5():
    deopt 24 [r15];
  L13():
    popenv;
    return r15;
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
    r2 = dyn UseMethod("NLSstLfAsymptote");
    goto L0(r2);
  L2():
    r = dyn base("NLSstLfAsymptote");
    goto L0(r);
  }
}