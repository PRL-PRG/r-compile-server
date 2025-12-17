fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3749696728;
    st assertError = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3749696728(expr, classes, verbose) {
  (reg expr:*, reg classes:*, reg verbose:*) -+> V { var expr:*, var classes:*, reg classes_isMissing:L, reg classes_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg _deparseTrim:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg tryCatch:cls, reg assertCondition:cls, reg expr1:*, reg expr2:V, reg p1:p(V +), reg classes1:*, reg classes2:V, reg p2:p(V +), reg d_expr:*, reg d_expr1:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg r10:cls, reg p5:p(V +), reg r12:V, reg verbose1:*, reg verbose2:V, reg c:L, reg res:*, reg res1:V, reg c1:L, reg res3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg vapply:cls, reg res4:*, reg res5:V, reg p6:p(V +), reg r14:cls, reg p7:p(V +), reg r16:V, reg __:cls, reg r17:V, reg message:cls, reg sprintf:cls, reg error:*, reg error1:V, reg c2:L, reg error3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r18:V, reg c3:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r19:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg res6:*, reg res7:V, reg invisible:cls, reg r27:V |
    mkenv;
    st expr = expr;
    classes_isMissing = missing.0(classes);
    if classes_isMissing then L0("error") else L0(classes);
  L0(classes_orDefault):
    st classes = classes_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L1(FALSE) else L1(verbose);
  L1(verbose_orDefault):
    st verbose = verbose_orDefault;
    _deparseTrim = ldf `.deparseTrim`;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
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
    check L7() else D1();
  D1():
    deopt 5 [r4];
  L7():
    st `d.expr` = r4;
    tryCatch = ldf tryCatch;
    check L8() else D2();
  D2():
    deopt 8 [];
  L8():
    p4 = prom<V +>{
      assertCondition = ldf assertCondition;
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
      st res = r8;
      invisible.0();
      return r8;
    };
    p5 = prom<V +>{
      r10 = clos inner3708401697;
      return r10;
    };
    r12 = dyn tryCatch[, error](p4, p5);
    check L9() else D3();
  D3():
    deopt 12 [r12];
  L9():
    verbose1 = ld verbose;
    check L10() else D4();
  D4():
    deopt 13 [verbose1];
  L10():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    c = `as.logical`(verbose2);
    if c then L11() else L2();
  L2():
    goto L4();
  L4():
    sym1 = ldf invisible;
    base1 = ldf invisible in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  L11():
    res = ld res;
    check L12() else D5();
  D5():
    deopt 15 [res];
  L5(r26):
    popenv;
    return r26;
  L12():
    res1 = force? res;
    checkMissing(res1);
    c1 = `is.object`(res1);
    if c1 then L13() else L14(res1);
  L21():
    res6 = ld res;
    check L23() else D10();
  L22():
    r25 = dyn base1(<sym res>);
    goto L5(r25);
  D10():
    deopt 35 [res6];
  L3(dx1):
    st error = dx1;
    message = ldf message;
    check L18() else D8();
  L13():
    dr = tryDispatchBuiltin.1("[", res1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(res3):
    vapply = ldf vapply;
    check L16() else D6();
  L23():
    res7 = force? res6;
    checkMissing(res7);
    invisible = ldf invisible in base;
    r27 = dyn invisible(res7);
    check L24() else D11();
  D6():
    deopt 18 [res3];
  D8():
    deopt 26 [];
  D11():
    deopt 38 [r27];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L16():
    p6 = prom<V +>{
      res4 = ld res;
      res5 = force? res4;
      checkMissing(res5);
      return res5;
    };
    p7 = prom<V +>{
      r14 = clos inner913928130;
      return r14;
    };
    r16 = dyn vapply(p6, p7, NA_LGL);
    check L17() else D7();
  L18():
    p9 = prom<V +>{
      sprintf = ldf sprintf;
      p8 = prom<V +>{
        error = ld error;
        error1 = force? error;
        checkMissing(error1);
        c2 = `is.object`(error1);
        if c2 then L1() else L2(error1);
      L0(dx3):
        c3 = `is.object`(dx3);
        if c3 then L5() else L6(dx3);
      L1():
        dr2 = tryDispatchBuiltin.1("[[", error1);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(error3):
        __1 = ldf `[[` in base;
        r18 = dyn __1(error3, 1);
        goto L0(r18);
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
        r19 = `$`(dx5, <sym message>);
        goto L4(r19);
      L7():
        dx6 = getTryDispatchBuiltinValue(dr4);
        goto L4(dx6);
      };
      r21 = dyn sprintf("Asserted error: %s", p8);
      return r21;
    };
    r23 = dyn message[, domain](p9, NA_LGL);
    check L19() else D9();
  L24():
    goto L5(r27);
  D7():
    deopt 22 [res3, r16];
  D9():
    deopt 30 [r23];
  L17():
    __ = ldf `[` in base;
    r17 = dyn __(res3, r16);
    goto L3(r17);
  L19():
    goto L4();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg stop:cls, reg gettextf:cls, reg d_expr:*, reg d_expr1:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    stop = ldf stop;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      gettextf = ldf gettextf;
      p = prom<V +>{
        d_expr = ld `d.expr`;
        d_expr1 = force? d_expr;
        checkMissing(d_expr1);
        return d_expr1;
      };
      r1 = dyn gettextf("Failed to get error in evaluating %s", p);
      return r1;
    };
    r3 = dyn stop[, `call.`, domain](p1, FALSE, NA_LGL);
    check L1() else D1();
  D1():
    deopt 7 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner913928130(cond) {
  (reg cond:*) -+> V { var cond:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg classes:*, reg classes1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r4:V, reg r5:V, reg cond1:*, reg cond2:V, reg class:cls, reg r6:V, reg match:cls, reg r7:V, reg r8:V, reg any:cls, reg r9:V |
    mkenv;
    st cond = cond;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    popenv;
    return r1;
  L3():
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L4():
    r = dyn base(<lang `>`(match(classes, class(cond), 0), 0)>);
    goto L0(r);
  L1(r3):
    r8 = `>`(r3, 0);
    any = ldf any in base;
    r9 = dyn any(r8);
    check L13() else D4();
  L5():
    classes = ld classes;
    check L7() else D0();
  L6():
    r2 = dyn base1(<sym classes>, <lang class(cond)>, 0);
    goto L1(r2);
  D0():
    deopt 4 [classes];
  D4():
    deopt 19 [r9];
  L7():
    classes1 = force? classes;
    checkMissing(classes1);
    sym2 = ldf class;
    base2 = ldf class in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L8() else L9();
  L13():
    goto L0(r9);
  L2(r5):
    match = ldf match in base;
    r7 = dyn match(classes1, r5, 0, NULL);
    check L12() else D3();
  L8():
    cond1 = ld cond;
    check L10() else D1();
  L9():
    r4 = dyn base2(<sym cond>);
    goto L2(r4);
  D1():
    deopt 8 [cond1];
  D3():
    deopt 15 [r7];
  L10():
    cond2 = force? cond1;
    checkMissing(cond2);
    class = ldf class in base;
    r6 = dyn class(cond2);
    check L11() else D2();
  L12():
    goto L1(r7);
  D2():
    deopt 11 [r6];
  L11():
    goto L2(r6);
  }
}