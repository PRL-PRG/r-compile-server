fun main() {
  () -+> V { reg r:cls, reg attach:cls, reg airquality:*, reg airquality1:V, reg p:p(V +), reg r2:V, reg factor:cls, reg Month:*, reg Month1:V, reg p1:p(V +), reg month_abb:*, reg month_abb1:V, reg c:L, reg month_abb3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r4:V, reg p2:p(V +), reg r6:V, reg pairwise_t_test:cls, reg Ozone:*, reg Ozone1:V, reg p3:p(V +), reg Month2:*, reg Month3:V, reg p4:p(V +), reg r9:V, reg pairwise_t_test1:cls, reg Ozone2:*, reg Ozone3:V, reg p5:p(V +), reg Month4:*, reg Month5:V, reg p6:p(V +), reg r12:V, reg pairwise_t_test2:cls, reg Ozone4:*, reg Ozone5:V, reg p7:p(V +), reg Month6:*, reg Month7:V, reg p8:p(V +), reg r15:V, reg detach:cls, reg r16:V |
    mkenv;
    r = clos inner751127625;
    st `pairwise.t.test` = r;
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
    pairwise_t_test = ldf `pairwise.t.test`;
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
    r9 = dyn pairwise_t_test(p3, p4);
    check L5() else D5();
  D5():
    deopt 18 [r9];
  L5():
    pairwise_t_test1 = ldf `pairwise.t.test`;
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
    r12 = dyn pairwise_t_test1[, , `p.adjust.method`](p5, p6, "bonf");
    check L7() else D7();
  D7():
    deopt 25 [r12];
  L7():
    pairwise_t_test2 = ldf `pairwise.t.test`;
    check L8() else D8();
  D8():
    deopt 27 [];
  L8():
    p7 = prom<V +>{
      Ozone4 = ld Ozone;
      Ozone5 = force? Ozone4;
      checkMissing(Ozone5);
      return Ozone5;
    };
    p8 = prom<V +>{
      Month6 = ld Month;
      Month7 = force? Month6;
      checkMissing(Month7);
      return Month7;
    };
    r15 = dyn pairwise_t_test2[, , `pool.sd`](p7, p8, FALSE);
    check L9() else D9();
  D9():
    deopt 32 [r15];
  L9():
    detach = ldf detach;
    check L10() else D10();
  D10():
    deopt 34 [];
  L10():
    r16 = dyn detach();
    check L11() else D11();
  D11():
    deopt 35 [r16];
  L11():
    popenv;
    return r16;
  }
}
fun inner751127625(x, g, `p.adjust.method`, `pool.sd`, paired, alternative, `...`) {
  (reg x:*, reg g:*, reg p_adjust_method:*, reg pool_sd:*, reg paired:*, reg alternative:*, reg ddd:dots) -+> V { var x:*, var g:*, var `p.adjust.method`:*, reg p_adjust_method_isMissing:L, reg p_adjust_method_orDefault:*, reg p_adjust_methods:*, reg p_adjust_methods1:V, reg p:p(V +), var `pool.sd`:*, reg pool_sd_isMissing:L, reg pool_sd_orDefault:*, reg paired1:*, reg paired2:V, reg r1:V, reg p1:p(V +), var paired:*, reg paired_isMissing:L, reg paired_orDefault:*, var alternative:*, reg alternative_isMissing:L, reg alternative_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c:cls, reg r5:V, reg p2:p(V +), var `...`:dots?, reg paired3:*, reg paired4:V, reg c1:L, reg c3:V, reg pool_sd1:*, reg pool_sd2:V, reg c4:L, reg c5:V, reg c7:L, reg stop:cls, reg r7:V, reg paste:cls, reg deparse1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg substitute:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg p4:p(V +), reg deparse2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg substitute1:cls, reg r17:V, reg p5:p(V +), reg r19:V, reg p6:p(V +), reg r21:V, reg factor:cls, reg g1:*, reg g2:V, reg p7:p(V +), reg r23:V, reg match_arg:cls, reg p_adjust_method1:*, reg p_adjust_method2:V, reg p8:p(V +), reg r25:V, reg match_arg1:cls, reg alternative1:*, reg alternative2:V, reg p9:p(V +), reg r27:V, reg pool_sd3:*, reg pool_sd4:V, reg c8:L, reg tapply:cls, reg x1:*, reg x2:V, reg p10:p(V +), reg g3:*, reg g4:V, reg p11:p(V +), reg mean:*, reg mean1:V, reg p12:p(V +), reg r31:V, reg tapply1:cls, reg x3:*, reg x4:V, reg p13:p(V +), reg g5:*, reg g6:V, reg p14:p(V +), reg sd:*, reg sd1:V, reg p15:p(V +), reg r35:V, reg tapply2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg x5:*, reg x6:V, reg is_na:cls, reg r38:V, reg r39:V, reg p16:p(V +), reg g7:*, reg g8:V, reg p17:p(V +), reg sum:*, reg sum1:V, reg p18:p(V +), reg r43:V, reg n:*, reg n1:V, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg degf:*, reg degf1:V, reg sum2:cls, reg r47:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r48:V, reg r49:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r50:V, reg r51:V, reg ifelse:cls, reg degf2:*, reg degf3:V, reg p19:p(V +), reg s:*, reg s1:V, reg r53:V, reg p20:p(V +), reg r55:V, reg degf4:*, reg degf5:V, reg r56:V, reg sum3:cls, reg r57:V, reg total_degf:*, reg total_degf1:V, reg r58:V, reg r59:V, reg r60:cls, reg paired5:*, reg paired6:V, reg c9:L, reg r62:S, reg r63:cls, reg pairwise_table:cls, reg compare_levels:*, reg compare_levels1:V, reg p21:p(V +), reg levels:cls, reg g9:*, reg g10:V, reg p22:p(V +), reg r66:V, reg p23:p(V +), reg p_adjust_method3:*, reg p_adjust_method4:V, reg p24:p(V +), reg r69:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg METHOD:*, reg METHOD1:V, reg DNAME:*, reg DNAME1:V, reg PVAL:*, reg PVAL1:V, reg p_adjust_method5:*, reg p_adjust_method6:V, reg list:cls, reg r72:V, reg l:*, reg class__:cls, reg r73:V, reg ans:*, reg ans1:V |
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
    pool_sd_isMissing = missing.0(pool_sd);
    if pool_sd_isMissing then L2() else L3(pool_sd);
  L2():
    p1 = prom<V +>{
      paired1 = ld paired;
      paired2 = force? paired1;
      checkMissing(paired2);
      r1 = `!`(paired2);
      return r1;
    };
    goto L3(p1);
  L3(pool_sd_orDefault):
    st `pool.sd` = pool_sd_orDefault;
    paired_isMissing = missing.0(paired);
    if paired_isMissing then L4(FALSE) else L4(paired);
  L4(paired_orDefault):
    st paired = paired_orDefault;
    alternative_isMissing = missing.0(alternative);
    if alternative_isMissing then L5() else L6(alternative);
  L5():
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r4):
      return r4;
    L1():
      c = ldf c in base;
      r5 = dyn c("two.sided", "less", "greater");
      goto L0(r5);
    L2():
      r3 = dyn base("two.sided", "less", "greater");
      goto L0(r3);
    };
    goto L6(p2);
  L6(alternative_orDefault):
    st alternative = alternative_orDefault;
    st `...` = ddd;
    paired3 = ld paired;
    check L18() else D0();
  D0():
    deopt 0 [paired3];
  L18():
    paired4 = force? paired3;
    checkMissing(paired4);
    c1 = `as.logical`(paired4);
    if c1 then L19() else L7(c1);
  L7(c3):
    c7 = `as.logical`(c3);
    if c7 then L22() else L8();
  L19():
    pool_sd1 = ld `pool.sd`;
    check L20() else D1();
  D1():
    deopt 2 [c1, pool_sd1];
  L8():
    goto L9();
  L9():
    paste = ldf paste;
    check L26() else D4();
  L20():
    pool_sd2 = force? pool_sd1;
    checkMissing(pool_sd2);
    c4 = `as.logical`(pool_sd2);
    c5 = `&&`(c1, c4);
    goto L7(c5);
  L22():
    stop = ldf stop;
    check L23() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 12 [];
  L23():
    r7 = dyn stop("pooling of SD is incompatible with paired tests");
    check L24() else D3();
  L26():
    p4 = prom<V +>{
      deparse1 = ldf deparse1;
      p3 = prom<V +>{
        sym1 = ldf substitute;
        base1 = ldf substitute in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r10):
        return r10;
      L1():
        substitute = ldf substitute in base;
        r11 = dyn substitute(<sym x>);
        goto L0(r11);
      L2():
        r9 = dyn base1(<sym x>);
        goto L0(r9);
      };
      r13 = dyn deparse1(p3);
      return r13;
    };
    p6 = prom<V +>{
      deparse2 = ldf deparse1;
      p5 = prom<V +>{
        sym2 = ldf substitute;
        base2 = ldf substitute in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r16):
        return r16;
      L1():
        substitute1 = ldf substitute in base;
        r17 = dyn substitute1(<sym g>);
        goto L0(r17);
      L2():
        r15 = dyn base2(<sym g>);
        goto L0(r15);
      };
      r19 = dyn deparse2(p5);
      return r19;
    };
    r21 = dyn paste(p4, "and", p6);
    check L27() else D5();
  D3():
    deopt 8 [r7];
  D5():
    deopt 16 [r21];
  L24():
    goto L9();
  L27():
    st DNAME = r21;
    factor = ldf factor;
    check L28() else D6();
  D6():
    deopt 19 [];
  L28():
    p7 = prom<V +>{
      g1 = ld g;
      g2 = force? g1;
      checkMissing(g2);
      return g2;
    };
    r23 = dyn factor(p7);
    check L29() else D7();
  D7():
    deopt 21 [r23];
  L29():
    st g = r23;
    match_arg = ldf `match.arg`;
    check L30() else D8();
  D8():
    deopt 24 [];
  L30():
    p8 = prom<V +>{
      p_adjust_method1 = ld `p.adjust.method`;
      p_adjust_method2 = force? p_adjust_method1;
      checkMissing(p_adjust_method2);
      return p_adjust_method2;
    };
    r25 = dyn match_arg(p8);
    check L31() else D9();
  D9():
    deopt 26 [r25];
  L31():
    st `p.adjust.method` = r25;
    match_arg1 = ldf `match.arg`;
    check L32() else D10();
  D10():
    deopt 29 [];
  L32():
    p9 = prom<V +>{
      alternative1 = ld alternative;
      alternative2 = force? alternative1;
      checkMissing(alternative2);
      return alternative2;
    };
    r27 = dyn match_arg1(p9);
    check L33() else D11();
  D11():
    deopt 31 [r27];
  L33():
    st alternative = r27;
    pool_sd3 = ld `pool.sd`;
    check L34() else D12();
  D12():
    deopt 33 [pool_sd3];
  L34():
    pool_sd4 = force? pool_sd3;
    checkMissing(pool_sd4);
    c8 = `as.logical`(pool_sd4);
    if c8 then L35() else L10();
  L10():
    paired5 = ld paired;
    check L57() else D27();
  L14():
    pairwise_table = ldf `pairwise.table`;
    check L60() else D28();
  L35():
    st METHOD = "t tests with pooled SD";
    tapply = ldf tapply;
    check L36() else D13();
  D13():
    deopt 39 [];
  D27():
    deopt 95 [paired5];
  D28():
    deopt 106 [];
  L36():
    p10 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p11 = prom<V +>{
      g3 = ld g;
      g4 = force? g3;
      checkMissing(g4);
      return g4;
    };
    p12 = prom<V +>{
      mean = ld mean;
      mean1 = force? mean;
      checkMissing(mean1);
      return mean1;
    };
    r31 = dyn tapply[, , , `na.rm`](p10, p11, p12, TRUE);
    check L37() else D14();
  L57():
    paired6 = force? paired5;
    checkMissing(paired6);
    c9 = `as.logical`(paired6);
    if c9 then L58() else L15();
  L60():
    p21 = prom<V +>{
      compare_levels = ld `compare.levels`;
      compare_levels1 = force? compare_levels;
      checkMissing(compare_levels1);
      return compare_levels1;
    };
    p23 = prom<V +>{
      levels = ldf levels;
      p22 = prom<V +>{
        g9 = ld g;
        g10 = force? g9;
        checkMissing(g10);
        return g10;
      };
      r66 = dyn levels(p22);
      return r66;
    };
    p24 = prom<V +>{
      p_adjust_method3 = ld `p.adjust.method`;
      p_adjust_method4 = force? p_adjust_method3;
      checkMissing(p_adjust_method4);
      return p_adjust_method4;
    };
    r69 = dyn pairwise_table(p21, p23, p24);
    check L61() else D29();
  D14():
    deopt 45 [r31];
  D29():
    deopt 110 [r69];
  L15():
    goto L16("t tests with non-pooled SD");
  L16(r62):
    st METHOD = r62;
    r63 = clos inner613390797;
    st `compare.levels` = r63;
    goto L14();
  L37():
    st xbar = r31;
    tapply1 = ldf tapply;
    check L38() else D15();
  L58():
    goto L16("paired t tests");
  L61():
    st PVAL = r69;
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L62() else L63();
  D15():
    deopt 48 [];
  L17(r71):
    st ans = r71;
    l = ld ans;
    class__ = ldf `class<-`;
    check L69() else D35();
  L38():
    p13 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p14 = prom<V +>{
      g5 = ld g;
      g6 = force? g5;
      checkMissing(g6);
      return g6;
    };
    p15 = prom<V +>{
      sd = ld sd;
      sd1 = force? sd;
      checkMissing(sd1);
      return sd1;
    };
    r35 = dyn tapply1[, , , `na.rm`](p13, p14, p15, TRUE);
    check L39() else D16();
  L62():
    METHOD = ld METHOD;
    check L64() else D30();
  L63():
    r70 = dyn base7[method, `data.name`, `p.value`, `p.adjust.method`](<sym METHOD>, <sym DNAME>, <sym PVAL>, <sym p.adjust.method>);
    goto L17(r70);
  D16():
    deopt 54 [r35];
  D30():
    deopt 114 [METHOD];
  D35():
    deopt 132 ["pairwise.htest", l, "pairwise.htest"];
  L39():
    st s = r35;
    tapply2 = ldf tapply;
    check L40() else D17();
  L64():
    METHOD1 = force? METHOD;
    checkMissing(METHOD1);
    DNAME = ld DNAME;
    check L65() else D31();
  L69():
    r73 = dyn class__(l, NULL, "pairwise.htest");
    check L70() else D36();
  D17():
    deopt 57 [];
  D31():
    deopt 117 [DNAME];
  D36():
    deopt 134 ["pairwise.htest", r73];
  L40():
    p16 = prom<V +>{
      sym3 = ldf `is.na`;
      base3 = ldf `is.na` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r37):
      r39 = `!`(r37);
      return r39;
    L1():
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      is_na = ldf `is.na` in base;
      r38 = dyn is_na(x6);
      goto L0(r38);
    L2():
      r36 = dyn base3(<sym x>);
      goto L0(r36);
    };
    p17 = prom<V +>{
      g7 = ld g;
      g8 = force? g7;
      checkMissing(g8);
      return g8;
    };
    p18 = prom<V +>{
      sum = ld sum;
      sum1 = force? sum;
      checkMissing(sum1);
      return sum1;
    };
    r43 = dyn tapply2(p16, p17, p18);
    check L41() else D18();
  L65():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    PVAL = ld PVAL;
    check L66() else D32();
  L70():
    st ans = r73;
    ans = ld ans;
    check L71() else D37();
  D18():
    deopt 61 [r43];
  D32():
    deopt 120 [PVAL];
  D37():
    deopt 136 [ans];
  L41():
    st n = r43;
    n = ld n;
    check L42() else D19();
  L66():
    PVAL1 = force? PVAL;
    checkMissing(PVAL1);
    p_adjust_method5 = ld `p.adjust.method`;
    check L67() else D33();
  L71():
    ans1 = force? ans;
    checkMissing(ans1);
    popenv;
    return ans1;
  D19():
    deopt 63 [n];
  D33():
    deopt 123 [p_adjust_method5];
  L42():
    n1 = force? n;
    checkMissing(n1);
    r44 = `-`(n1, 1.0);
    st degf = r44;
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L43() else L44();
  L67():
    p_adjust_method6 = force? p_adjust_method5;
    checkMissing(p_adjust_method6);
    list = ldf list in base;
    r72 = dyn list(METHOD1, DNAME1, PVAL1, p_adjust_method6);
    check L68() else D34();
  D34():
    deopt 127 [r72];
  L11(r46):
    st `total.degf` = r46;
    sym5 = ldf sqrt;
    base5 = ldf sqrt in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L47() else L48();
  L43():
    degf = ld degf;
    check L45() else D20();
  L44():
    r45 = dyn base4(<sym degf>);
    goto L11(r45);
  L68():
    goto L17(r72);
  D20():
    deopt 70 [degf];
  L12(r49):
    st `pooled.sd` = r49;
    r60 = clos inner613390797;
    st `compare.levels` = r60;
    goto L14();
  L45():
    degf1 = force? degf;
    checkMissing(degf1);
    sum2 = ldf sum in base;
    r47 = dyn sum2(degf1);
    check L46() else D21();
  L47():
    sym6 = ldf sum;
    base6 = ldf sum in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L48():
    r48 = dyn base5(<lang `/`(sum(`*`(ifelse(degf, `^`(s, 2.0), 0.0), degf)), total.degf)>);
    goto L12(r48);
  D21():
    deopt 73 [r47];
  L13(r51):
    total_degf = ld `total.degf`;
    check L55() else D26();
  L46():
    goto L11(r47);
  L49():
    ifelse = ldf ifelse;
    check L51() else D22();
  L50():
    r50 = dyn base6(<lang `*`(ifelse(degf, `^`(s, 2.0), 0.0), degf)>);
    goto L13(r50);
  D22():
    deopt 79 [];
  D26():
    deopt 87 [r51, total_degf];
  L51():
    p19 = prom<V +>{
      degf2 = ld degf;
      degf3 = force? degf2;
      checkMissing(degf3);
      return degf3;
    };
    p20 = prom<V +>{
      s = ld s;
      s1 = force? s;
      checkMissing(s1);
      r53 = `^`(s1, 2.0);
      return r53;
    };
    r55 = dyn ifelse(p19, p20, 0.0);
    check L52() else D23();
  L55():
    total_degf1 = force? total_degf;
    checkMissing(total_degf1);
    r58 = `/`(r51, total_degf1);
    r59 = sqrt(r58);
    goto L12(r59);
  D23():
    deopt 83 [r55];
  L52():
    degf4 = ld degf;
    check L53() else D24();
  D24():
    deopt 83 [r55, degf4];
  L53():
    degf5 = force? degf4;
    checkMissing(degf5);
    r56 = `*`(r55, degf5);
    sum3 = ldf sum in base;
    r57 = dyn sum3(r56);
    check L54() else D25();
  D25():
    deopt 87 [r57];
  L54():
    goto L13(r57);
  }
}
fun inner613390797(i, j) {
  (reg i:*, reg j:*) -+> V { var i:*, var j:*, reg xbar:*, reg xbar1:V, reg c:L, reg xbar3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r:V, reg xbar4:*, reg xbar5:V, reg c1:L, reg dx3:V, reg xbar7:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg j1:*, reg j2:V, reg __1:cls, reg r1:V, reg r2:V, reg pooled_sd:*, reg pooled_sd1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg pooled_sd4:V, reg r4:V, reg n:*, reg n1:V, reg c2:L, reg pooled_sd6:V, reg r6:R, reg n3:V, reg dr4:V, reg dc2:L, reg dx8:V, reg pooled_sd8:V, reg r8:R, reg dx9:V, reg i3:*, reg i4:V, reg __2:cls, reg r9:V, reg r10:V, reg n4:*, reg n5:V, reg c3:L, reg pooled_sd10:V, reg r13:V, reg r14:R, reg n7:V, reg dr6:V, reg dc3:L, reg dx10:V, reg pooled_sd12:V, reg r17:V, reg r18:R, reg dx11:V, reg j3:*, reg j4:V, reg __3:cls, reg r19:V, reg r20:V, reg r21:V, reg r22:V, reg r23:V, reg dif:*, reg dif1:V, reg se_dif:*, reg se_dif1:V, reg r24:V, reg alternative:*, reg alternative1:V, reg r25:V, reg c4:L, reg pt:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg t_val:*, reg t_val1:V, reg abs:cls, reg r28:V, reg r29:V, reg p:p(V +), reg total_degf:*, reg total_degf1:V, reg p1:p(V +), reg r32:V, reg r33:V, reg pt1:cls, reg t_val2:*, reg t_val3:V, reg p2:p(V +), reg total_degf2:*, reg total_degf3:V, reg p3:p(V +), reg alternative2:*, reg alternative3:V, reg r36:V, reg p4:p(V +), reg r38:V |
    mkenv;
    st i = i;
    st j = j;
    xbar = ld xbar;
    check L6() else D0();
  D0():
    deopt 0 [xbar];
  L6():
    xbar1 = force? xbar;
    checkMissing(xbar1);
    c = `is.object`(xbar1);
    if c then L7() else L8(xbar1);
  L0(dx1):
    xbar4 = ld xbar;
    check L11() else D2();
  L7():
    dr = tryDispatchBuiltin.1("[", xbar1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(xbar3):
    i1 = ld i;
    check L10() else D1();
  D1():
    deopt 2 [xbar3, i1];
  D2():
    deopt 4 [dx1, xbar4];
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L10():
    i2 = force? i1;
    __ = ldf `[` in base;
    r = dyn __(xbar3, i2);
    goto L0(r);
  L11():
    xbar5 = force? xbar4;
    checkMissing(xbar5);
    c1 = `is.object`(xbar5);
    if c1 then L12() else L13(dx1, xbar5);
  L1(dx6, dx7):
    r2 = `-`(dx6, dx7);
    st dif = r2;
    pooled_sd = ld `pooled.sd`;
    check L16() else D4();
  L12():
    dr2 = tryDispatchBuiltin.1("[", xbar5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13(dx1, dr2);
  L13(dx3, xbar7):
    j1 = ld j;
    check L15() else D3();
  D3():
    deopt 6 [dx3, xbar7, j1];
  D4():
    deopt 11 [pooled_sd];
  L14():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L1(dx1, dx5);
  L15():
    j2 = force? j1;
    __1 = ldf `[` in base;
    r1 = dyn __1(xbar7, j2);
    goto L1(dx3, r1);
  L16():
    pooled_sd1 = force? pooled_sd;
    checkMissing(pooled_sd1);
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L2(pooled_sd4, r4):
    r23 = `*`(pooled_sd4, r4);
    st `se.dif` = r23;
    dif = ld dif;
    check L29() else D9();
  L17():
    n = ld n;
    check L19() else D5();
  L18():
    r3 = dyn base(<lang `+`(`/`(1.0, `[`(n, i)), `/`(1.0, `[`(n, j)))>);
    goto L2(pooled_sd1, r3);
  D5():
    deopt 14 [pooled_sd1, 1.0, n];
  D9():
    deopt 30 [dif];
  L19():
    n1 = force? n;
    checkMissing(n1);
    c2 = `is.object`(n1);
    if c2 then L20() else L21(pooled_sd1, 1.0, n1);
  L29():
    dif1 = force? dif;
    checkMissing(dif1);
    se_dif = ld `se.dif`;
    check L30() else D10();
  D10():
    deopt 31 [dif1, se_dif];
  L3(pooled_sd8, r8, dx9):
    r10 = `/`(r8, dx9);
    n4 = ld n;
    check L24() else D7();
  L20():
    dr4 = tryDispatchBuiltin.1("[", n1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(pooled_sd1, 1.0, dr4);
  L21(pooled_sd6, r6, n3):
    i3 = ld i;
    check L23() else D6();
  L30():
    se_dif1 = force? se_dif;
    checkMissing(se_dif1);
    r24 = `/`(dif1, se_dif1);
    st `t.val` = r24;
    alternative = ld alternative;
    check L31() else D11();
  D6():
    deopt 16 [pooled_sd6, r6, n3, i3];
  D7():
    deopt 20 [pooled_sd8, r10, 1.0, n4];
  D11():
    deopt 35 [alternative];
  L22():
    dx8 = getTryDispatchBuiltinValue(dr4);
    goto L3(pooled_sd1, 1.0, dx8);
  L23():
    i4 = force? i3;
    __2 = ldf `[` in base;
    r9 = dyn __2(n3, i4);
    goto L3(pooled_sd6, r6, r9);
  L24():
    n5 = force? n4;
    checkMissing(n5);
    c3 = `is.object`(n5);
    if c3 then L25() else L26(pooled_sd8, r10, 1.0, n5);
  L31():
    alternative1 = force? alternative;
    checkMissing(alternative1);
    r25 = `==`(alternative1, "two.sided");
    c4 = `as.logical`(r25);
    if c4 then L32() else L5();
  L4(pooled_sd12, r17, r18, dx11):
    r20 = `/`(r18, dx11);
    r21 = `+`(r17, r20);
    r22 = sqrt(r21);
    goto L2(pooled_sd12, r22);
  L5():
    pt1 = ldf pt;
    check L36() else D14();
  L25():
    dr6 = tryDispatchBuiltin.1("[", n5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L27() else L26(pooled_sd8, r10, 1.0, dr6);
  L26(pooled_sd10, r13, r14, n7):
    j3 = ld j;
    check L28() else D8();
  L32():
    pt = ldf pt;
    check L33() else D12();
  D8():
    deopt 22 [pooled_sd10, r13, r14, n7, j3];
  D12():
    deopt 41 [2.0];
  D14():
    deopt 47 [];
  L27():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L4(pooled_sd8, r10, 1.0, dx10);
  L28():
    j4 = force? j3;
    __3 = ldf `[` in base;
    r19 = dyn __3(n7, j4);
    goto L4(pooled_sd10, r13, r14, r19);
  L33():
    p = prom<V +>{
      sym1 = ldf abs;
      base1 = ldf abs in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r27):
      r29 = `-`(<missing>, r27);
      return r29;
    L1():
      t_val = ld `t.val`;
      t_val1 = force? t_val;
      checkMissing(t_val1);
      abs = ldf abs in base;
      r28 = dyn abs(t_val1);
      goto L0(r28);
    L2():
      r26 = dyn base1(<sym t.val>);
      goto L0(r26);
    };
    p1 = prom<V +>{
      total_degf = ld `total.degf`;
      total_degf1 = force? total_degf;
      checkMissing(total_degf1);
      return total_degf1;
    };
    r32 = dyn pt(p, p1);
    check L34() else D13();
  L36():
    p2 = prom<V +>{
      t_val2 = ld `t.val`;
      t_val3 = force? t_val2;
      checkMissing(t_val3);
      return t_val3;
    };
    p3 = prom<V +>{
      total_degf2 = ld `total.degf`;
      total_degf3 = force? total_degf2;
      checkMissing(total_degf3);
      return total_degf3;
    };
    p4 = prom<V +>{
      alternative2 = ld alternative;
      alternative3 = force? alternative2;
      checkMissing(alternative3);
      r36 = `==`(alternative3, "less");
      visible.0();
      return r36;
    };
    r38 = dyn pt1[, , `lower.tail`](p2, p3, p4);
    check L37() else D15();
  D13():
    deopt 44 [2.0, r32];
  D15():
    deopt 52 [r38];
  L34():
    r33 = `*`(2.0, r32);
    popenv;
    return r33;
  L37():
    popenv;
    return r38;
  }
}