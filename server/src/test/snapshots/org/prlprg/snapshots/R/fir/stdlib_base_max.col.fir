fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner644704060;
    st `max.col` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner644704060(m, `ties.method`) {
  (reg m:*, reg ties_method:*) -+> V { var m:*, var `ties.method`:*, reg ties_method_isMissing:L, reg ties_method_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg ties_method1:*, reg ties_method2:V, reg p1:p(V +), reg r5:V, reg which:cls, reg ties_method3:*, reg ties_method4:V, reg eval:cls, reg formals:cls, reg r6:V, reg c1:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg r12:V, reg p3:p(V +), reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg as_matrix:cls, reg m1:*, reg m2:V, reg p4:p(V +), reg r18:V, reg tieM:*, reg tieM1:V, reg max_col:cls, reg r19:V |
    mkenv;
    st m = m;
    ties_method_isMissing = missing.0(ties_method);
    if ties_method_isMissing then L0() else L1(ties_method);
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("random", "first", "last");
      goto L0(r2);
    L2():
      r = dyn base("random", "first", "last");
      goto L0(r);
    };
    goto L1(p);
  L1(ties_method_orDefault):
    st `ties.method` = ties_method_orDefault;
    match_arg = ldf `match.arg`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p1 = prom<V +>{
      ties_method1 = ld `ties.method`;
      ties_method2 = force? ties_method1;
      checkMissing(ties_method2);
      return ties_method2;
    };
    r5 = dyn match_arg(p1);
    check L4() else D1();
  D1():
    deopt 3 [r5];
  L4():
    st `ties.method` = r5;
    which = ldf which;
    check L5() else D2();
  D2():
    deopt 6 [];
  L5():
    p3 = prom<V +>{
      ties_method3 = ld `ties.method`;
      ties_method4 = force? ties_method3;
      checkMissing(ties_method4);
      eval = ldf eval;
      p2 = prom<V +>{
        formals = ldf formals;
        r6 = dyn formals();
        c1 = `is.object`(r6);
        if c1 then L1() else L2(r6);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[[", r6);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r8):
        __ = ldf `[[` in base;
        r9 = dyn __(r8, "ties.method");
        goto L0(r9);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r11 = dyn eval(p2);
      r12 = `==`(ties_method4, r11);
      return r12;
    };
    r14 = dyn which(p3);
    check L6() else D3();
  D3():
    deopt 8 [r14];
  L6():
    st tieM = r14;
    sym1 = ldf `.Internal`;
    base1 = ldf `.Internal` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L7() else L8();
  L2(r16):
    popenv;
    return r16;
  L7():
    as_matrix = ldf `as.matrix`;
    check L9() else D4();
  L8():
    r15 = dyn base1(<lang max.col(as.matrix(m), tieM)>);
    goto L2(r15);
  D4():
    deopt 13 [];
  L9():
    p4 = prom<V +>{
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      return m2;
    };
    r18 = dyn as_matrix(p4);
    check L10() else D5();
  D5():
    deopt 15 [r18];
  L10():
    tieM = ld tieM;
    check L11() else D6();
  D6():
    deopt 16 [tieM];
  L11():
    tieM1 = force? tieM;
    checkMissing(tieM1);
    max_col = ldf `max.col` in base;
    r19 = dyn max_col(r18, tieM1);
    check L12() else D7();
  D7():
    deopt 19 [r19];
  L12():
    goto L2(r19);
  }
}