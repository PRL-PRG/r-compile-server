fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg grDevices:*, reg grDevices1:V, reg p:p(V +), reg r4:V, reg plot:cls, reg __:cls, reg r5:V, reg p1:p(V +), reg PlantGrowth:*, reg PlantGrowth1:V, reg p2:p(V +), reg r8:V, reg plot1:cls, reg __1:cls, reg r9:V, reg p3:p(V +), reg PlantGrowth2:*, reg PlantGrowth3:V, reg p4:p(V +), reg r12:V, reg plot2:cls, reg __2:cls, reg r13:V, reg p5:p(V +), reg PlantGrowth4:*, reg PlantGrowth5:V, reg p6:p(V +), reg hcl:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg c:cls, reg r18:V, reg p7:p(V +), reg r20:V, reg p8:p(V +), reg r22:V, reg plot3:cls, reg PlantGrowth6:*, reg PlantGrowth7:V, reg c1:L, reg PlantGrowth9:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r23:V, reg p9:p(V +), reg r25:V |
    mkenv;
    r = clos inner3906365631;
    st `plot.factor` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    plot = ldf plot;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym grDevices>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      grDevices = ld grDevices;
      grDevices1 = force? grDevices;
      checkMissing(grDevices1);
      return grDevices1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      __ = ldf `~` in base;
      r5 = dyn __(<sym weight>, <sym group>);
      return r5;
    };
    p2 = prom<V +>{
      PlantGrowth = ld PlantGrowth;
      PlantGrowth1 = force? PlantGrowth;
      checkMissing(PlantGrowth1);
      return PlantGrowth1;
    };
    r8 = dyn plot[, data](p1, p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 13 [r8];
  L4():
    goto L0();
  L6():
    plot1 = ldf plot;
    check L7() else D4();
  D4():
    deopt 15 [];
  L7():
    p3 = prom<V +>{
      __1 = ldf `~` in base;
      r9 = dyn __1(<lang cut(weight, 2.0)>, <sym group>);
      return r9;
    };
    p4 = prom<V +>{
      PlantGrowth2 = ld PlantGrowth;
      PlantGrowth3 = force? PlantGrowth2;
      checkMissing(PlantGrowth3);
      return PlantGrowth3;
    };
    r12 = dyn plot1[, data](p3, p4);
    check L8() else D5();
  D5():
    deopt 19 [r12];
  L8():
    plot2 = ldf plot;
    check L9() else D6();
  D6():
    deopt 21 [];
  L9():
    p5 = prom<V +>{
      __2 = ldf `~` in base;
      r13 = dyn __2(<lang cut(weight, 3.0)>, <sym group>);
      return r13;
    };
    p6 = prom<V +>{
      PlantGrowth4 = ld PlantGrowth;
      PlantGrowth5 = force? PlantGrowth4;
      checkMissing(PlantGrowth5);
      return PlantGrowth5;
    };
    p8 = prom<V +>{
      hcl = ldf hcl;
      p7 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r17):
        return r17;
      L1():
        c = ldf c in base;
        r18 = dyn c(0.0, 120.0, 240.0);
        goto L0(r18);
      L2():
        r16 = dyn base1(0.0, 120.0, 240.0);
        goto L0(r16);
      };
      r20 = dyn hcl(p7, 50.0, 70.0);
      return r20;
    };
    r22 = dyn plot2[, data, col](p5, p6, p8);
    check L10() else D7();
  D7():
    deopt 27 [r22];
  L10():
    plot3 = ldf plot;
    check L11() else D8();
  D8():
    deopt 29 [];
  L11():
    p9 = prom<V +>{
      PlantGrowth6 = ld PlantGrowth;
      PlantGrowth7 = force? PlantGrowth6;
      checkMissing(PlantGrowth7);
      c1 = `is.object`(PlantGrowth7);
      if c1 then L1() else L2(PlantGrowth7);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", PlantGrowth7);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(PlantGrowth9):
      r23 = `$`(PlantGrowth9, <sym group>);
      goto L0(r23);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r25 = dyn plot3[, axes, main](p9, FALSE, "no axes");
    check L12() else D9();
  D9():
    deopt 35 [r25];
  L12():
    popenv;
    return r25;
  }
}
fun inner3906365631(x, y, `legend.text`, `...`) {
  (reg x:*, reg y:*, reg legend_text:*, reg ddd:dots) -+> V { var x:*, var y:*, var `legend.text`:*, reg legend_text_isMissing:L, reg legend_text_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg is_factor:cls, reg y1:*, reg y2:V, reg p:p(V +), reg r4:V, reg c3:L, reg c4:V, reg c6:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg list:cls, reg ddd1:dots?, reg r7:V, reg ____:cls, reg dargs:*, reg dargs1:V, reg c7:L, reg dargs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg p1:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg dargs4:*, reg dargs5:V, reg c8:L, reg dargs7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r12:V, reg c9:V, reg r13:V, reg c10:L, reg dargs8:*, reg dargs9:V, reg c11:L, reg dargs11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r14:V, reg r15:V, reg p2:p(V +), reg r17:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg missing1:cls, reg r21:V, reg c12:L, reg barplot:cls, reg table:cls, reg x1:*, reg x2:V, reg p3:p(V +), reg r23:V, reg p4:p(V +), reg axisnames:*, reg axisnames1:V, reg p5:p(V +), reg ddd2:dots?, reg r26:V, reg is_factor1:cls, reg y3:*, reg y4:V, reg p6:p(V +), reg r28:V, reg c13:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r29:V, reg r30:V, reg legend_text1:*, reg legend_text2:V, reg c14:V, reg c15:L, reg spineplot:cls, reg x3:*, reg x4:V, reg p7:p(V +), reg y5:*, reg y6:V, reg p8:p(V +), reg ddd3:dots?, reg r33:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r34:V, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg x5:*, reg x6:V, reg y7:*, reg y8:V, reg list1:cls, reg r38:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r39:V, reg r40:V, reg list2:cls, reg ddd4:dots?, reg r41:V, reg c16:cls, reg r42:V, reg legend_text3:*, reg legend_text4:V, reg l:*, reg c17:L, reg legend_text6:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r43:V, reg do_call:cls, reg args:*, reg args1:V, reg p9:p(V +), reg r45:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r46:V, reg r47:V, reg y9:*, reg y10:V, reg is_numeric:cls, reg r48:V, reg c18:L, reg boxplot:cls, reg __:cls, reg r49:V, reg p10:p(V +), reg ddd5:dots?, reg r51:V, reg NextMethod:cls, reg r52:V |
    mkenv;
    st x = x;
    st y = y;
    legend_text_isMissing = missing.0(legend_text);
    if legend_text_isMissing then L0(NULL) else L0(legend_text);
  L0(legend_text_orDefault):
    st `legend.text` = legend_text_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L1(r1):
    c = `as.logical`(r1);
    if c then L2(c) else L18();
  L16():
    missing = ldf missing in base;
    r2 = dyn missing(<sym y>);
    goto L1(r2);
  L17():
    r = dyn base(<sym y>);
    goto L1(r);
  L2(c1):
    c6 = `as.logical`(c1);
    if c6 then L22() else L3();
  L18():
    is_factor = ldf `is.factor`;
    check L19() else D0();
  D0():
    deopt 4 [c];
  L3():
    goto L5();
  L5():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L30() else L31();
  L19():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r4 = dyn is_factor(p);
    check L20() else D1();
  L22():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L23() else L24();
  D1():
    deopt 6 [c, r4];
  L4(r6):
    st dargs = r6;
    ____ = ldf `%||%`;
    check L27() else D4();
  L6(r20):
    c12 = `as.logical`(r20);
    if c12 then L32() else L7();
  L20():
    c3 = `as.logical`(r4);
    c4 = `||`(c, c3);
    goto L2(c4);
  L23():
    list = ldf list;
    check L25() else D2();
  L24():
    r5 = dyn base1(<sym ...>);
    goto L4(r5);
  L30():
    missing1 = ldf missing in base;
    r21 = dyn missing1(<sym y>);
    goto L6(r21);
  L31():
    r19 = dyn base3(<sym y>);
    goto L6(r19);
  D2():
    deopt 10 [];
  D4():
    deopt 15 [];
  L7():
    is_factor1 = ldf `is.factor`;
    check L36() else D8();
  L25():
    ddd1 = ld `...`;
    r7 = dyn list[`...`](ddd1);
    check L26() else D3();
  L27():
    p1 = prom<V +>{
      dargs = ld dargs;
      dargs1 = force? dargs;
      checkMissing(dargs1);
      c7 = `is.object`(dargs1);
      if c7 then L1() else L2(dargs1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", dargs1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(dargs3):
      r8 = `$`(dargs3, <sym axes>);
      goto L0(r8);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      sym2 = ldf `is.null`;
      base2 = ldf `is.null` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r11):
      r13 = `!`(r11);
      c10 = `as.logical`(r13);
      if c10 then L8() else L1();
    L2():
      dargs4 = ld dargs;
      dargs5 = force? dargs4;
      checkMissing(dargs5);
      c8 = `is.object`(dargs5);
      if c8 then L5() else L6(dargs5);
    L3():
      r10 = dyn base2(<lang `$`(dargs, xaxt)>);
      goto L0(r10);
    L1():
      return TRUE;
    L4(dx3):
      c9 = `==`(dx3, NULL);
      goto L0(c9);
    L5():
      dr2 = tryDispatchBuiltin.1("$", dargs5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dargs7):
      r12 = `$`(dargs7, <sym xaxt>);
      goto L4(r12);
    L8():
      dargs8 = ld dargs;
      dargs9 = force? dargs8;
      checkMissing(dargs9);
      c11 = `is.object`(dargs9);
      if c11 then L10() else L11(dargs9);
    L7():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L4(dx2);
    L9(dx5):
      r15 = `!=`(dx5, "n");
      return r15;
    L10():
      dr4 = tryDispatchBuiltin.1("$", dargs9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L12() else L11(dr4);
    L11(dargs11):
      r14 = `$`(dargs11, <sym xaxt>);
      goto L9(r14);
    L12():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L9(dx4);
    };
    r17 = dyn ____(p1, p2);
    check L28() else D5();
  L32():
    barplot = ldf barplot;
    check L33() else D6();
  D3():
    deopt 12 [r7];
  D5():
    deopt 18 [r17];
  D6():
    deopt 26 [];
  D8():
    deopt 33 [];
  L26():
    goto L4(r7);
  L28():
    st axisnames = r17;
    goto L5();
  L33():
    p4 = prom<V +>{
      table = ldf table;
      p3 = prom<V +>{
        x1 = ld x;
        x2 = force? x1;
        checkMissing(x2);
        return x2;
      };
      r23 = dyn table(p3);
      return r23;
    };
    p5 = prom<V +>{
      axisnames = ld axisnames;
      axisnames1 = force? axisnames;
      checkMissing(axisnames1);
      return axisnames1;
    };
    ddd2 = ld `...`;
    r26 = dyn barplot[, axisnames, `...`](p4, p5, ddd2);
    check L34() else D7();
  L36():
    p6 = prom<V +>{
      y3 = ld y;
      y4 = force? y3;
      checkMissing(y4);
      return y4;
    };
    r28 = dyn is_factor1(p6);
    check L37() else D9();
  D7():
    deopt 31 [r26];
  D9():
    deopt 35 [r28];
  L34():
    popenv;
    return r26;
  L37():
    c13 = `as.logical`(r28);
    if c13 then L38() else L8();
  L8():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L66() else L67();
  L38():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L9(r30):
    c15 = `as.logical`(r30);
    if c15 then L42() else L10();
  L14(r47):
    c18 = `as.logical`(r47);
    if c18 then L70() else L15();
  L39():
    legend_text1 = ld `legend.text`;
    check L41() else D10();
  L40():
    r29 = dyn base4(<sym legend.text>);
    goto L9(r29);
  L66():
    y9 = ld y;
    check L68() else D22();
  L67():
    r46 = dyn base8(<sym y>);
    goto L14(r46);
  D10():
    deopt 37 [legend_text1];
  D22():
    deopt 78 [y9];
  L10():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L15():
    NextMethod = ldf NextMethod;
    check L74() else D26();
  L41():
    legend_text2 = force? legend_text1;
    checkMissing(legend_text2);
    c14 = `==`(legend_text2, NULL);
    goto L9(c14);
  L42():
    spineplot = ldf spineplot;
    check L43() else D11();
  L68():
    y10 = force? y9;
    checkMissing(y10);
    is_numeric = ldf `is.numeric` in base;
    r48 = dyn is_numeric(y10);
    check L69() else D23();
  L70():
    boxplot = ldf boxplot;
    check L71() else D24();
  D11():
    deopt 41 [];
  D23():
    deopt 81 [r48];
  D24():
    deopt 83 [];
  D26():
    deopt 88 [];
  L11(r35):
    st args = r35;
    legend_text3 = ld `legend.text`;
    check L58() else D19();
  L43():
    p7 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p8 = prom<V +>{
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      return y6;
    };
    ddd3 = ld `...`;
    r33 = dyn spineplot[, , `...`](p7, p8, ddd3);
    check L44() else D12();
  L46():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L48() else L49();
  L47():
    r34 = dyn base5(<lang list(x=x, y=y)>, <lang list(...)>);
    goto L11(r34);
  L69():
    goto L14(r48);
  L71():
    p10 = prom<V +>{
      __ = ldf `~` in base;
      r49 = dyn __(<sym y>, <sym x>);
      return r49;
    };
    ddd5 = ld `...`;
    r51 = dyn boxplot[, `...`](p10, ddd5);
    check L72() else D25();
  L74():
    r52 = dyn NextMethod("plot");
    check L75() else D27();
  D12():
    deopt 45 [r33];
  D19():
    deopt 66 [legend_text3];
  D25():
    deopt 86 [r51];
  D27():
    deopt 90 [r52];
  L12(r37):
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L53() else L54();
  L44():
    popenv;
    return r33;
  L48():
    x5 = ld x;
    check L50() else D13();
  L49():
    r36 = dyn base6[x, y](<sym x>, <sym y>);
    goto L12(r36);
  L58():
    legend_text4 = force? legend_text3;
    checkMissing(legend_text4);
    l = ld args;
    c17 = `is.object`(l);
    if c17 then L60() else L61(legend_text4, l);
  L72():
    popenv;
    return r51;
  L75():
    popenv;
    return r52;
  D13():
    deopt 50 [x5];
  L13(r40):
    c16 = ldf c in base;
    r42 = dyn c16(r37, r40);
    check L57() else D18();
  L50():
    x6 = force? x5;
    checkMissing(x6);
    y7 = ld y;
    check L51() else D14();
  L53():
    list2 = ldf list;
    check L55() else D16();
  L54():
    r39 = dyn base7(<sym ...>);
    goto L13(r39);
  L59(dx7):
    st args = dx7;
    do_call = ldf `do.call`;
    check L63() else D20();
  L60():
    dr6 = tryDispatchBuiltin.0("$<-", l, legend_text4);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(legend_text4, dr6);
  L61(legend_text6, l2):
    r43 = `$<-`(l2, <sym yaxlabels>, legend_text4);
    goto L59(r43);
  D14():
    deopt 53 [y7];
  D16():
    deopt 60 [];
  D18():
    deopt 64 [r42];
  D20():
    deopt 72 [];
  L51():
    y8 = force? y7;
    checkMissing(y8);
    list1 = ldf list in base;
    r38 = dyn list1(x6, y8);
    check L52() else D15();
  L55():
    ddd4 = ld `...`;
    r41 = dyn list2[`...`](ddd4);
    check L56() else D17();
  L57():
    goto L11(r42);
  L62():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L59(dx6);
  L63():
    p9 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r45 = dyn do_call("spineplot", p9);
    check L64() else D21();
  D15():
    deopt 57 [r38];
  D17():
    deopt 62 [r41];
  D21():
    deopt 75 [r45];
  L52():
    goto L12(r38);
  L56():
    goto L13(r41);
  L64():
    popenv;
    return r45;
  }
}