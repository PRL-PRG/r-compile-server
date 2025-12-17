fun main() {
  () -+> V { reg r:cls, reg attach:cls, reg airquality:*, reg airquality1:V, reg p:p(V +), reg r2:V, reg factor:cls, reg Month:*, reg Month1:V, reg p1:p(V +), reg month_abb:*, reg month_abb1:V, reg c:L, reg month_abb3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg pairwise_wilcox_test:cls, reg Ozone:*, reg Ozone1:V, reg p3:p(V +), reg Month2:*, reg Month3:V, reg p4:p(V +), reg r9:V, reg pairwise_wilcox_test1:cls, reg Ozone2:*, reg Ozone3:V, reg p5:p(V +), reg Month4:*, reg Month5:V, reg p6:p(V +), reg r12:V, reg detach:cls, reg r13:V |
    mkenv;
    r = clos inner2162886600;
    st `pairwise.wilcox.test` = r;
    attach = ldf attach;
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
    r2 = dyn attach(p);
    check L1() else D1();
  D1():
    deopt 6 [r2];
  L1():
    factor = ldf factor;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
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
      r4 = dyn __(month_abb3, <int 5, 6, 7, 8, 9>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn factor[, labels](p1, p2);
    check L3() else D3();
  D3():
    deopt 12 [r6];
  L3():
    st Month = r6;
    pairwise_wilcox_test = ldf `pairwise.wilcox.test`;
    check L4() else D4();
  D4():
    deopt 15 [];
  L4():
    p3 = prom<V +>{
      Ozone = ld Ozone;
      Ozone1 = force? Ozone;
      checkMissing(Ozone1);
      return Ozone1;
    };
    p4 = prom<V +>{
      Month2 = ld Month;
      Month3 = force? Month2;
      checkMissing(Month3);
      return Month3;
    };
    r9 = dyn pairwise_wilcox_test(p3, p4);
    check L5() else D5();
  D5():
    deopt 18 [r9];
  L5():
    pairwise_wilcox_test1 = ldf `pairwise.wilcox.test`;
    check L6() else D6();
  D6():
    deopt 20 [];
  L6():
    p5 = prom<V +>{
      Ozone2 = ld Ozone;
      Ozone3 = force? Ozone2;
      checkMissing(Ozone3);
      return Ozone3;
    };
    p6 = prom<V +>{
      Month4 = ld Month;
      Month5 = force? Month4;
      checkMissing(Month5);
      return Month5;
    };
    r12 = dyn pairwise_wilcox_test1[, , `p.adjust.method`](p5, p6, "bonf");
    check L7() else D7();
  D7():
    deopt 25 [r12];
  L7():
    detach = ldf detach;
    check L8() else D8();
  D8():
    deopt 27 [];
  L8():
    r13 = dyn detach();
    check L9() else D9();
  D9():
    deopt 28 [r13];
  L9():
    popenv;
    return r13;
  }
}
fun inner2162886600(x, g, `p.adjust.method`, paired, `...`) {
  (reg x:*, reg g:*, reg p_adjust_method:*, reg paired:*, reg ddd:dots) -+> V { var x:*, var g:*, var `p.adjust.method`:*, reg p_adjust_method_isMissing:L, reg p_adjust_method_orDefault:*, reg p_adjust_methods:*, reg p_adjust_methods1:V, reg p:p(V +), var paired:*, reg paired_isMissing:L, reg paired_orDefault:*, var `...`:dots?, reg match_arg:cls, reg p_adjust_method1:*, reg p_adjust_method2:V, reg p1:p(V +), reg r2:V, reg paste:cls, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg substitute:cls, reg r5:V, reg p2:p(V +), reg r7:V, reg p3:p(V +), reg deparse2:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg substitute1:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg p5:p(V +), reg r15:V, reg factor:cls, reg g1:*, reg g2:V, reg p6:p(V +), reg r17:V, reg r18:cls, reg pairwise_table:cls, reg compare_levels:*, reg compare_levels1:V, reg p7:p(V +), reg levels:cls, reg g3:*, reg g4:V, reg p8:p(V +), reg r21:V, reg p9:p(V +), reg p_adjust_method3:*, reg p_adjust_method4:V, reg p10:p(V +), reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg METHOD:*, reg METHOD1:V, reg DNAME:*, reg DNAME1:V, reg PVAL:*, reg PVAL1:V, reg p_adjust_method5:*, reg p_adjust_method6:V, reg list:cls, reg r27:V, reg l:*, reg class__:cls, reg r28:V, reg ans:*, reg ans1:V |
    mkenv;
    st x = x;
    st g = g;
    p_adjust_method_isMissing = missing.0(p_adjust_method);
    if p_adjust_method_isMissing then L0() else L1(p_adjust_method);
  L0():
    p = prom<V +>{
      p_adjust_methods = ld `p.adjust.methods`;
      p_adjust_methods1 = force? p_adjust_methods;
      checkMissing(p_adjust_methods1);
      return p_adjust_methods1;
    };
    goto L1(p);
  L1(p_adjust_method_orDefault):
    st `p.adjust.method` = p_adjust_method_orDefault;
    paired_isMissing = missing.0(paired);
    if paired_isMissing then L2(FALSE) else L2(paired);
  L2(paired_orDefault):
    st paired = paired_orDefault;
    st `...` = ddd;
    match_arg = ldf `match.arg`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p1 = prom<V +>{
      p_adjust_method1 = ld `p.adjust.method`;
      p_adjust_method2 = force? p_adjust_method1;
      checkMissing(p_adjust_method2);
      return p_adjust_method2;
    };
    r2 = dyn match_arg(p1);
    check L5() else D1();
  D1():
    deopt 3 [r2];
  L5():
    st `p.adjust.method` = r2;
    paste = ldf paste;
    check L6() else D2();
  D2():
    deopt 6 [];
  L6():
    p3 = prom<V +>{
      deparse1 = ldf deparse1;
      p2 = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r4):
        return r4;
      L1():
        substitute = ldf substitute in base;
        r5 = dyn substitute(<sym x>);
        goto L0(r5);
      L2():
        r3 = dyn base(<sym x>);
        goto L0(r3);
      };
      r7 = dyn deparse1(p2);
      return r7;
    };
    p5 = prom<V +>{
      deparse2 = ldf deparse1;
      p4 = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r10):
        return r10;
      L1():
        substitute1 = ldf substitute in base;
        r11 = dyn substitute1(<sym g>);
        goto L0(r11);
      L2():
        r9 = dyn base1(<sym g>);
        goto L0(r9);
      };
      r13 = dyn deparse2(p4);
      return r13;
    };
    r15 = dyn paste(p3, "and", p5);
    check L7() else D3();
  D3():
    deopt 10 [r15];
  L7():
    st DNAME = r15;
    factor = ldf factor;
    check L8() else D4();
  D4():
    deopt 13 [];
  L8():
    p6 = prom<V +>{
      g1 = ld g;
      g2 = force? g1;
      checkMissing(g2);
      return g2;
    };
    r17 = dyn factor(p6);
    check L9() else D5();
  D5():
    deopt 15 [r17];
  L9():
    st g = r17;
    st METHOD = NULL;
    r18 = clos inner613390797;
    st `compare.levels` = r18;
    pairwise_table = ldf `pairwise.table`;
    check L10() else D6();
  D6():
    deopt 24 [];
  L10():
    p7 = prom<V +>{
      compare_levels = ld `compare.levels`;
      compare_levels1 = force? compare_levels;
      checkMissing(compare_levels1);
      return compare_levels1;
    };
    p9 = prom<V +>{
      levels = ldf levels;
      p8 = prom<V +>{
        g3 = ld g;
        g4 = force? g3;
        checkMissing(g4);
        return g4;
      };
      r21 = dyn levels(p8);
      return r21;
    };
    p10 = prom<V +>{
      p_adjust_method3 = ld `p.adjust.method`;
      p_adjust_method4 = force? p_adjust_method3;
      checkMissing(p_adjust_method4);
      return p_adjust_method4;
    };
    r24 = dyn pairwise_table(p7, p9, p10);
    check L11() else D7();
  D7():
    deopt 28 [r24];
  L11():
    st PVAL = r24;
    sym2 = ldf list;
    base2 = ldf list in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L12() else L13();
  L3(r26):
    st ans = r26;
    l = ld ans;
    class__ = ldf `class<-`;
    check L19() else D13();
  L12():
    METHOD = ld METHOD;
    check L14() else D8();
  L13():
    r25 = dyn base2[method, `data.name`, `p.value`, `p.adjust.method`](<sym METHOD>, <sym DNAME>, <sym PVAL>, <sym p.adjust.method>);
    goto L3(r25);
  D8():
    deopt 32 [METHOD];
  D13():
    deopt 50 ["pairwise.htest", l, "pairwise.htest"];
  L14():
    METHOD1 = force? METHOD;
    checkMissing(METHOD1);
    DNAME = ld DNAME;
    check L15() else D9();
  L19():
    r28 = dyn class__(l, NULL, "pairwise.htest");
    check L20() else D14();
  D9():
    deopt 35 [DNAME];
  D14():
    deopt 52 ["pairwise.htest", r28];
  L15():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    PVAL = ld PVAL;
    check L16() else D10();
  L20():
    st ans = r28;
    ans = ld ans;
    check L21() else D15();
  D10():
    deopt 38 [PVAL];
  D15():
    deopt 54 [ans];
  L16():
    PVAL1 = force? PVAL;
    checkMissing(PVAL1);
    p_adjust_method5 = ld `p.adjust.method`;
    check L17() else D11();
  L21():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D11():
    deopt 41 [p_adjust_method5];
  L17():
    p_adjust_method6 = force? p_adjust_method5;
    checkMissing(p_adjust_method6);
    list = ldf list in base;
    r27 = dyn list(METHOD1, DNAME1, PVAL1, p_adjust_method6);
    check L18() else D12();
  D12():
    deopt 45 [r27];
  L18():
    goto L3(r27);
  }
}
fun inner613390797(i, j) {
  (reg i:*, reg j:*) -+> V { var i:*, var j:*, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg x6:V, reg r1:V, reg g:*, reg g1:V, reg as_integer:cls, reg r2:V, reg i1:*, reg i2:V, reg r3:V, reg __:cls, reg r4:V, reg x7:*, reg x8:V, reg c1:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg x13:V, reg r6:V, reg g2:*, reg g3:V, reg as_integer1:cls, reg r7:V, reg j1:*, reg j2:V, reg r8:V, reg __1:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg METHOD:*, reg METHOD1:V, reg c2:V, reg c3:L, reg wilcox_test:cls, reg xi:*, reg xi1:V, reg p:p(V +), reg xj:*, reg xj1:V, reg p1:p(V +), reg paired:*, reg paired1:V, reg p2:p(V +), reg ddd:*, reg r15:V, reg wt:*, reg wt1:V, reg c4:L, reg wt3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r16:V, reg wt4:*, reg wt5:V, reg c5:L, reg wt7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r17:V, reg wilcox_test1:cls, reg xi2:*, reg xi3:V, reg p3:p(V +), reg xj2:*, reg xj3:V, reg p4:p(V +), reg paired2:*, reg paired3:V, reg p5:p(V +), reg ddd1:*, reg r21:V, reg c6:L, reg r23:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r24:V |
    mkenv;
    st i = i;
    st j = j;
    x = ld x;
    check L6() else D0();
  D0():
    deopt 0 [x];
  L6():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L7() else L8(x1);
  L0(dx1):
    st xi = dx1;
    x7 = ld x;
    check L15() else D4();
  L7():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(x3):
    sym = ldf `as.integer`;
    base = ldf `as.integer` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  D4():
    deopt 12 [x7];
  L1(x6, r1):
    i1 = ld i;
    check L14() else D3();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    g = ld g;
    check L12() else D1();
  L11():
    r = dyn base(<sym g>);
    goto L1(x3, r);
  L15():
    x8 = force? x7;
    checkMissing(x8);
    c1 = `is.object`(x8);
    if c1 then L16() else L17(x8);
  D1():
    deopt 4 [x3, g];
  D3():
    deopt 7 [x6, r1, i1];
  L2(dx3):
    st xj = dx3;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L12():
    g1 = force? g;
    checkMissing(g1);
    as_integer = ldf `as.integer` in base;
    r2 = dyn as_integer(g1);
    check L13() else D2();
  L14():
    i2 = force? i1;
    checkMissing(i2);
    r3 = `==`(r1, i2);
    __ = ldf `[` in base;
    r4 = dyn __(x6, r3);
    goto L0(r4);
  L16():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L18() else L17(dr2);
  L17(x10):
    sym1 = ldf `as.integer`;
    base1 = ldf `as.integer` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  D2():
    deopt 7 [x3, r2];
  L3(x13, r6):
    j1 = ld j;
    check L23() else D7();
  L4(r11):
    c3 = `as.logical`(r11);
    if c3 then L27() else L5();
  L13():
    goto L1(x3, r2);
  L18():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L19():
    g2 = ld g;
    check L21() else D5();
  L20():
    r5 = dyn base1(<sym g>);
    goto L3(x10, r5);
  L24():
    METHOD = ld METHOD;
    check L26() else D8();
  L25():
    r10 = dyn base2(<sym METHOD>);
    goto L4(r10);
  D5():
    deopt 16 [x10, g2];
  D7():
    deopt 19 [x13, r6, j1];
  D8():
    deopt 25 [METHOD];
  L5():
    wilcox_test1 = ldf `wilcox.test`;
    check L41() else D13();
  L21():
    g3 = force? g2;
    checkMissing(g3);
    as_integer1 = ldf `as.integer` in base;
    r7 = dyn as_integer1(g3);
    check L22() else D6();
  L23():
    j2 = force? j1;
    checkMissing(j2);
    r8 = `==`(r6, j2);
    __1 = ldf `[` in base;
    r9 = dyn __1(x13, r8);
    goto L2(r9);
  L26():
    METHOD1 = force? METHOD;
    checkMissing(METHOD1);
    c2 = `==`(METHOD1, NULL);
    goto L4(c2);
  L27():
    wilcox_test = ldf `wilcox.test`;
    check L28() else D9();
  D6():
    deopt 19 [x10, r7];
  D9():
    deopt 29 [];
  D13():
    deopt 45 [];
  L22():
    goto L3(x10, r7);
  L28():
    p = prom<V +>{
      xi = ld xi;
      xi1 = force? xi;
      checkMissing(xi1);
      return xi1;
    };
    p1 = prom<V +>{
      xj = ld xj;
      xj1 = force? xj;
      checkMissing(xj1);
      return xj1;
    };
    p2 = prom<V +>{
      paired = ld paired;
      paired1 = force? paired;
      checkMissing(paired1);
      return paired1;
    };
    ddd = ld `...`;
    r15 = dyn wilcox_test[, , paired, `...`](p, p1, p2, ddd);
    check L29() else D10();
  L41():
    p3 = prom<V +>{
      xi2 = ld xi;
      xi3 = force? xi2;
      checkMissing(xi3);
      return xi3;
    };
    p4 = prom<V +>{
      xj2 = ld xj;
      xj3 = force? xj2;
      checkMissing(xj3);
      return xj3;
    };
    p5 = prom<V +>{
      paired2 = ld paired;
      paired3 = force? paired2;
      checkMissing(paired3);
      return paired3;
    };
    ddd1 = ld `...`;
    r21 = dyn wilcox_test1[, , paired, `...`](p3, p4, p5, ddd1);
    check L42() else D14();
  D10():
    deopt 35 [r15];
  D14():
    deopt 51 [r21];
  L29():
    st wt = r15;
    wt = ld wt;
    check L30() else D11();
  L42():
    c6 = `is.object`(r21);
    if c6 then L44() else L45(r21);
  D11():
    deopt 37 [wt];
  L30():
    wt1 = force? wt;
    checkMissing(wt1);
    c4 = `is.object`(wt1);
    if c4 then L32() else L33(wt1);
  L43(dx9):
    popenv;
    return dx9;
  L44():
    dr8 = tryDispatchBuiltin.1("$", r21);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L46() else L45(dr8);
  L45(r23):
    r24 = `$`(r23, <sym p.value>);
    goto L43(r24);
  L31(dx5):
    sst METHOD = dx5;
    wt4 = ld wt;
    check L35() else D12();
  L32():
    dr4 = tryDispatchBuiltin.1("$", wt1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(dr4);
  L33(wt3):
    r16 = `$`(wt3, <sym method>);
    goto L31(r16);
  L46():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L43(dx8);
  D12():
    deopt 41 [wt4];
  L34():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L35():
    wt5 = force? wt4;
    checkMissing(wt5);
    c5 = `is.object`(wt5);
    if c5 then L37() else L38(wt5);
  L36(dx7):
    popenv;
    return dx7;
  L37():
    dr6 = tryDispatchBuiltin.1("$", wt5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L39() else L38(dr6);
  L38(wt7):
    r17 = `$`(wt7, <sym p.value>);
    goto L36(r17);
  L39():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L36(dx6);
  }
}