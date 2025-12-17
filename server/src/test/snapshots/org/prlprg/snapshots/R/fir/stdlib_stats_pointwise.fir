fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2047306958;
    st pointwise = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2047306958(results, coverage) {
  (reg results:*, reg coverage:*) -+> V { var results:*, var coverage:*, reg results1:*, reg results2:V, reg c:L, reg results4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg qt:cls, reg coverage1:*, reg coverage2:V, reg r1:V, reg r2:V, reg p:p(V +), reg results5:*, reg results6:V, reg c1:L, reg results8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r4:V, reg p1:p(V +), reg r6:V, reg results9:*, reg results10:V, reg c2:L, reg r8:V, reg results12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r10:V, reg dx5:V, reg r11:V, reg r12:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg r14:V, reg fit:*, reg fit1:V, reg fit2:*, reg fit3:V, reg lim:*, reg lim1:V, reg r15:V, reg fit4:*, reg fit5:V, reg lim2:*, reg lim3:V, reg r16:V, reg list:cls, reg r17:V |
    mkenv;
    st results = results;
    st coverage = coverage;
    results1 = ld results;
    check L1() else D0();
  D0():
    deopt 0 [results1];
  L1():
    results2 = force? results1;
    checkMissing(results2);
    c = `is.object`(results2);
    if c then L3() else L4(results2);
  L2(dx1):
    st fit = dx1;
    qt = ldf qt;
    check L6() else D1();
  L3():
    dr = tryDispatchBuiltin.1("$", results2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(results4):
    r = `$`(results4, <sym fit>);
    goto L2(r);
  D1():
    deopt 5 [];
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L6():
    p = prom<V +>{
      coverage1 = ld coverage;
      coverage2 = force? coverage1;
      checkMissing(coverage2);
      r1 = `-`(1.0, coverage2);
      r2 = `/`(r1, 2.0);
      return r2;
    };
    p1 = prom<V +>{
      results5 = ld results;
      results6 = force? results5;
      checkMissing(results6);
      c1 = `is.object`(results6);
      if c1 then L1() else L2(results6);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", results6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(results8):
      r4 = `$`(results8, <sym df>);
      goto L0(r4);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r6 = dyn qt[, , `lower.tail`](p, p1, FALSE);
    check L7() else D2();
  D2():
    deopt 10 [r6];
  L7():
    results9 = ld results;
    check L8() else D3();
  D3():
    deopt 10 [r6, results9];
  L8():
    results10 = force? results9;
    checkMissing(results10);
    c2 = `is.object`(results10);
    if c2 then L10() else L11(r6, results10);
  L9(r10, dx5):
    r12 = `*`(r10, dx5);
    st lim = r12;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L10():
    dr4 = tryDispatchBuiltin.1("$", results10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L12() else L11(r6, dr4);
  L11(r8, results12):
    r11 = `$`(results12, <sym se.fit>);
    goto L9(r8, r11);
  L0(r14):
    popenv;
    return r14;
  L12():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L9(r6, dx4);
  L13():
    fit = ld fit;
    check L15() else D4();
  L14():
    r13 = dyn base[fit, lower, upper](<sym fit>, <lang `-`(fit, lim)>, <lang `+`(fit, lim)>);
    goto L0(r13);
  D4():
    deopt 17 [fit];
  L15():
    fit1 = force? fit;
    checkMissing(fit1);
    fit2 = ld fit;
    check L16() else D5();
  D5():
    deopt 20 [fit2];
  L16():
    fit3 = force? fit2;
    checkMissing(fit3);
    lim = ld lim;
    check L17() else D6();
  D6():
    deopt 21 [fit3, lim];
  L17():
    lim1 = force? lim;
    checkMissing(lim1);
    r15 = `-`(fit3, lim1);
    fit4 = ld fit;
    check L18() else D7();
  D7():
    deopt 25 [fit4];
  L18():
    fit5 = force? fit4;
    checkMissing(fit5);
    lim2 = ld lim;
    check L19() else D8();
  D8():
    deopt 26 [fit5, lim2];
  L19():
    lim3 = force? lim2;
    checkMissing(lim3);
    r16 = `+`(fit5, lim3);
    list = ldf list in base;
    r17 = dyn list(fit1, r15, r16);
    check L20() else D9();
  D9():
    deopt 31 [r17];
  L20():
    goto L0(r17);
  }
}