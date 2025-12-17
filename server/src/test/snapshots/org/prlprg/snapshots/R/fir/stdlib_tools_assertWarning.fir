fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1081664364;
    st assertWarning = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1081664364(expr, classes, verbose) {
  (reg expr:*, reg classes:*, reg verbose:*) -+> V { var expr:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg _deparseTrim:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg assertCondition:cls, reg expr1:*, reg expr2:V, reg p1:p(V +), reg classes1:*, reg classes2:V, reg p2:p(V +), reg d_expr:*, reg d_expr1:V, reg p3:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg vapply:cls, reg res:*, reg res1:V, reg p4:p(V +), reg r12:cls, reg p5:p(V +), reg r14:V, reg any:cls, reg r15:V, reg c:L, reg stop:cls, reg gettextf:cls, reg d_expr2:*, reg d_expr3:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V, reg verbose1:*, reg verbose2:V, reg c1:L, reg res2:*, reg res3:V, reg c2:L, reg res5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply1:cls, reg res6:*, reg res7:V, reg p8:p(V +), reg r22:cls, reg p9:p(V +), reg r24:V, reg __:cls, reg r25:V, reg message:cls, reg sprintf:cls, reg warning:*, reg warning1:V, reg c3:L, reg warning3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r26:V, reg c4:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r27:V, reg p10:p(V +), reg r29:V, reg p11:p(V +), reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r33:V, reg r34:V, reg res8:*, reg res9:V, reg invisible:cls, reg r35:V |
    mkenv;
    st expr = expr;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L0("warning") else L0(classes);
  L0(classes_orDefault):
    st classes = classes_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    _deparseTrim = ldf `.deparseTrim`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      sym = ldf substitute;
      base = ldf substitute in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      substitute = ldf substitute in base;
      r2 = dyn substitute(<sym expr>);
      goto L0(r2);
    L2():
      r = dyn base(<sym expr>);
      goto L0(r);
    };
    r4 = dyn _deparseTrim[, cutoff](p, 30);
    check L10() else D1();
  D1():
    deopt 5 [r4];
  L10():
    st `d.expr` = r4;
    assertCondition = ldf assertCondition;
    check L11() else D2();
  D2():
    deopt 8 [];
  L11():
    p1 = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    p2 = prom<V +>{
      classes1 = ld classes;
      classes2 = force? classes1;
      checkMissing(classes2);
      return classes2;
    };
    p3 = prom<V +>{
      d_expr = ld `d.expr`;
      d_expr1 = force? d_expr;
      checkMissing(d_expr1);
      return d_expr1;
    };
    r8 = dyn assertCondition[, , `.exprString`](p1, p2, p3);
    check L12() else D3();
  D3():
    deopt 13 [r8];
  L12():
    st res = r8;
    sym1 = ldf any;
    base1 = ldf any in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L2(r10):
    c = `as.logical`(r10);
    if c then L18() else L3();
  L13():
    vapply = ldf vapply;
    check L15() else D4();
  L14():
    r9 = dyn base1(<lang vapply(res, function((cond=), `%in%`("error", class(cond)), NULL), NA_LGL)>);
    goto L2(r9);
  D4():
    deopt 18 [];
  L3():
    goto L4();
  L4():
    verbose1 = ld verbose;
    check L22() else D9();
  L15():
    p4 = prom<V +>{
      res = ld res;
      res1 = force? res;
      checkMissing(res1);
      return res1;
    };
    p5 = prom<V +>{
      r12 = clos inner913928130;
      return r12;
    };
    r14 = dyn vapply(p4, p5, NA_LGL);
    check L16() else D5();
  L18():
    stop = ldf stop;
    check L19() else D7();
  D5():
    deopt 22 [r14];
  D7():
    deopt 26 [];
  D9():
    deopt 33 [verbose1];
  L16():
    any = ldf any in base;
    r15 = dyn any(r14);
    check L17() else D6();
  L19():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p6 = prom<V +>{
        d_expr2 = ld `d.expr`;
        d_expr3 = force? d_expr2;
        checkMissing(d_expr3);
        return d_expr3;
      };
      r17 = dyn gettextf("Got warning in evaluating %s, but also an error", p6);
      return r17;
    };
    r19 = dyn stop[, domain](p7, NA_LGL);
    check L20() else D8();
  L22():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c1 = `as.logical`(verbose2);
    if c1 then L23() else L5();
  D6():
    deopt 24 [r15];
  D8():
    deopt 30 [r19];
  L5():
    goto L7();
  L7():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L33() else L34();
  L17():
    goto L2(r15);
  L20():
    goto L4();
  L23():
    res2 = ld res;
    check L24() else D10();
  D10():
    deopt 35 [res2];
  L8(r34):
    popenv;
    return r34;
  L24():
    res3 = force? res2;
    checkMissing(res3);
    c2 = `is.object`(res3);
    if c2 then L25() else L26(res3);
  L33():
    res8 = ld res;
    check L35() else D15();
  L34():
    r33 = dyn base2(<sym res>);
    goto L8(r33);
  D15():
    deopt 55 [res8];
  L6(dx1):
    st warning = dx1;
    message = ldf message;
    check L30() else D13();
  L25():
    dr = tryDispatchBuiltin.1("[", res3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(res5):
    vapply1 = ldf vapply;
    check L28() else D11();
  L35():
    res9 = force? res8;
    checkMissing(res9);
    invisible = ldf invisible in base;
    r35 = dyn invisible(res9);
    check L36() else D16();
  D11():
    deopt 38 [res5];
  D13():
    deopt 46 [];
  D16():
    deopt 58 [r35];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L28():
    p8 = prom<V +>{
      res6 = ld res;
      res7 = force? res6;
      checkMissing(res7);
      return res7;
    };
    p9 = prom<V +>{
      r22 = clos inner913928130;
      return r22;
    };
    r24 = dyn vapply1(p8, p9, NA_LGL);
    check L29() else D12();
  L30():
    p11 = prom<V +>{
      sprintf = ldf sprintf;
      p10 = prom<V +>{
        warning = ld warning;
        warning1 = force? warning;
        checkMissing(warning1);
        c3 = `is.object`(warning1);
        if c3 then L1() else L2(warning1);
      L0(dx3):
        c4 = `is.object`(dx3);
        if c4 then L5() else L6(dx3);
      L1():
        dr2 = tryDispatchBuiltin.1("[[", warning1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(warning3):
        __1 = ldf `[[` in base;
        r26 = dyn __1(warning3, 1);
        goto L0(r26);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      L4(dx7):
        return dx7;
      L5():
        dr4 = tryDispatchBuiltin.1("$", dx3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L7() else L6(dr4);
      L6(dx5):
        r27 = `$`(dx5, <sym message>);
        goto L4(r27);
      L7():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L4(dx6);
      };
      r29 = dyn sprintf("Asserted warning: %s", p10);
      return r29;
    };
    r31 = dyn message[, domain](p11, NA_LGL);
    check L31() else D14();
  L36():
    goto L8(r35);
  D12():
    deopt 42 [res5, r24];
  D14():
    deopt 50 [r31];
  L29():
    __ = ldf `[` in base;
    r25 = dyn __(res5, r24);
    goto L6(r25);
  L31():
    goto L7();
  }
}
fun inner913928130(cond) {
  (reg cond:*) -+> V { var cond:*, reg _in_:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg cond1:*, reg cond2:V, reg class:cls, reg r2:V, reg p:p(V +), reg r4:V |
    mkenv;
    st cond = cond;
    _in_ = ldf `%in%`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      sym = ldf class;
      base = ldf class in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      cond1 = ld cond;
      cond2 = force? cond1;
      checkMissing(cond2);
      class = ldf class in base;
      r2 = dyn class(cond2);
      goto L0(r2);
    L2():
      r = dyn base(<sym cond>);
      goto L0(r);
    };
    r4 = dyn _in_("error", p);
    check L1() else D1();
  D1():
    deopt 4 [r4];
  L1():
    popenv;
    return r4;
  }
}