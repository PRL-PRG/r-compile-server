fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1312379795;
    st `mosaicplot.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1312379795(formula, data, `...`, main, subset, `na.action`) {
  (reg formula:*, reg data:*, reg ddd:dots, reg main:*, reg subset:*, reg na_action:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, var main:*, reg main_isMissing:L, reg main_orDefault:*, reg deparse1:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg p:p(V +), reg r4:V, reg p1:p(V +), var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg __:cls, reg r6:V, reg p2:p(V +), reg main1:*, reg main2:V, reg match_call:cls, reg r8:V, reg eval:cls, reg m:*, reg m1:V, reg c:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r9:V, reg p3:p(V +), reg parent_frame:cls, reg r11:V, reg p4:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg edata:*, reg edata1:V, reg inherits:cls, reg r16:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg c6:L, reg r18:V, reg edata2:*, reg edata3:V, reg inherits1:cls, reg r19:V, reg c7:L, reg c8:V, reg c10:L, reg c11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r20:V, reg c15:L, reg r21:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r22:V, reg c18:L, reg r23:V, reg edata4:*, reg edata5:V, reg dim:cls, reg r24:V, reg length:cls, reg r25:V, reg r26:V, reg c19:L, reg c20:V, reg c22:L, reg as_table:cls, reg data1:*, reg data2:V, reg p5:p(V +), reg r28:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg __1:cls, reg r31:V, reg r32:cls, reg formula1:*, reg formula2:V, reg p6:p(V +), reg r34:V, reg attr:cls, reg r35:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg varnames:*, reg varnames1:V, reg r38:V, reg all:cls, reg r39:V, reg c23:L, reg marginSums:cls, reg data3:*, reg data4:V, reg p7:p(V +), reg varnames2:*, reg varnames3:V, reg p8:p(V +), reg r42:V, reg mosaicplot:cls, reg data5:*, reg data6:V, reg p9:p(V +), reg main3:*, reg main4:V, reg p10:p(V +), reg ddd1:dots?, reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg edata6:*, reg edata7:V, reg is_matrix:cls, reg r49:V, reg c24:L, reg as_data_frame:cls, reg data7:*, reg data8:V, reg p11:p(V +), reg r51:V, reg l:*, reg c25:L, reg r53:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r55:V, reg dx3:V, reg r56:V, reg l3:*, reg ___:cls, reg ddd2:dots?, reg r58:V, reg l4:*, reg c26:L, reg r60:dots, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r63:V, reg na_action1:*, reg na_action2:V, reg l7:*, reg c27:L, reg na_action4:V, reg l9:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r64:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg quote:cls, reg r67:V, reg l10:*, reg c28:L, reg r69:V, reg l12:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r72:V, reg eval1:cls, reg m4:*, reg m5:V, reg p12:p(V +), reg parent_frame1:cls, reg r74:V, reg p13:p(V +), reg r76:V, reg mosaicplot1:cls, reg table:cls, reg mf:*, reg mf1:V, reg p14:p(V +), reg r78:V, reg p15:p(V +), reg main5:*, reg main6:V, reg p16:p(V +), reg ddd3:dots?, reg r81:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    main_isMissing = missing.0(main);
    if main_isMissing then L1() else L2(main);
  L1():
    p1 = prom<V +>{
      deparse1 = ldf deparse1;
      p = prom<V +>{
        sym = ldf substitute;
        base = ldf substitute in base;
        guard = `==`.4(sym, base);
        if guard then L1() else L2();
      L0(r1):
        return r1;
      L1():
        substitute = ldf substitute in base;
        r2 = dyn substitute(<sym data>);
        goto L0(r2);
      L2():
        r = dyn base(<sym data>);
        goto L0(r);
      };
      r4 = dyn deparse1(p);
      return r4;
    };
    goto L2(p1);
  L2(main_orDefault):
    st main = main_orDefault;
    st subset = subset;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L3() else L4(na_action);
  L3():
    p2 = prom<V +>{
      __ = ldf `::`;
      r6 = dyn __("stats", "na.omit");
      return r6;
    };
    goto L4(p2);
  L4(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    main1 = ld main;
    check L21() else D0();
  D0():
    deopt 0 [main1];
  L21():
    main2 = force? main1;
    checkMissing(main2);
    match_call = ldf `match.call`;
    check L22() else D1();
  D1():
    deopt 3 [];
  L22():
    r8 = dyn match_call[`expand.dots`](FALSE);
    check L23() else D2();
  D2():
    deopt 6 [r8];
  L23():
    st m = r8;
    eval = ldf eval;
    check L24() else D3();
  D3():
    deopt 9 [];
  L24():
    p3 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c = `is.object`(m1);
      if c then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r9 = `$`(m3, <sym data>);
      goto L0(r9);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p4 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r11 = dyn parent_frame();
      return r11;
    };
    r13 = dyn eval(p3, p4);
    check L25() else D4();
  D4():
    deopt 12 [r13];
  L25():
    st edata = r13;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L26() else L27();
  L5(r15):
    c1 = `as.logical`(r15);
    if c1 then L6(c1) else L30();
  L26():
    edata = ld edata;
    check L28() else D5();
  L27():
    r14 = dyn base1(<sym edata>, "ftable");
    goto L5(r14);
  D5():
    deopt 16 [edata];
  L6(c2):
    c10 = `as.logical`(c2);
    if c10 then L8(c10) else L36();
  L28():
    edata1 = force? edata;
    checkMissing(edata1);
    inherits = ldf inherits in base;
    r16 = dyn inherits(edata1, "ftable", FALSE);
    check L29() else D6();
  L30():
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  D6():
    deopt 21 [r16];
  L7(c6, r18):
    c7 = `as.logical`(r18);
    c8 = `||`(c6, c7);
    goto L6(c8);
  L8(c11):
    c22 = `as.logical`(c11);
    if c22 then L45() else L11();
  L29():
    goto L5(r16);
  L31():
    edata2 = ld edata;
    check L33() else D7();
  L32():
    r17 = dyn base2(<sym edata>, "table");
    goto L7(c1, r17);
  L36():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L37() else L38();
  D7():
    deopt 24 [c1, edata2];
  L9(c15, r21):
    r26 = `>`(r21, 2.0);
    c19 = `as.logical`(r26);
    c20 = `||`(c15, c19);
    goto L8(c20);
  L11():
    sym7 = ldf `is.matrix`;
    base7 = ldf `is.matrix` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L65() else L66();
  L33():
    edata3 = force? edata2;
    checkMissing(edata3);
    inherits1 = ldf inherits in base;
    r19 = dyn inherits1(edata3, "table", FALSE);
    check L34() else D8();
  L37():
    sym4 = ldf dim;
    base4 = ldf dim in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L38():
    r20 = dyn base3(<lang dim(edata)>);
    goto L9(c10, r20);
  L45():
    as_table = ldf `as.table`;
    check L46() else D12();
  D8():
    deopt 29 [c1, r19];
  D12():
    deopt 45 [];
  L10(c18, r23):
    length = ldf length in base;
    r25 = dyn length(r23);
    check L43() else D11();
  L16(r48):
    c24 = `as.logical`(r48);
    if c24 then L69() else L17();
  L34():
    goto L7(c1, r19);
  L39():
    edata4 = ld edata;
    check L41() else D9();
  L40():
    r22 = dyn base4(<sym edata>);
    goto L10(c10, r22);
  L46():
    p5 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r28 = dyn as_table(p5);
    check L47() else D13();
  L65():
    edata6 = ld edata;
    check L67() else D24();
  L66():
    r47 = dyn base7(<sym edata>);
    goto L16(r47);
  D9():
    deopt 35 [c10, edata4];
  D11():
    deopt 40 [c18, r25];
  D13():
    deopt 47 [r28];
  D24():
    deopt 88 [edata6];
  L17():
    goto L18();
  L18():
    l3 = ld m;
    ___ = ldf `$<-`;
    check L77() else D28();
  L41():
    edata5 = force? edata4;
    checkMissing(edata5);
    dim = ldf dim in base;
    r24 = dyn dim(edata5);
    check L42() else D10();
  L43():
    goto L9(c18, r25);
  L47():
    st data = r28;
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L48() else L49();
  L67():
    edata7 = force? edata6;
    checkMissing(edata7);
    is_matrix = ldf `is.matrix` in base;
    r49 = dyn is_matrix(edata7);
    check L68() else D25();
  L69():
    as_data_frame = ldf `as.data.frame`;
    check L70() else D26();
  D10():
    deopt 38 [c10, r24];
  D25():
    deopt 91 [r49];
  D26():
    deopt 93 [];
  D28():
    deopt 104 [NULL, l3, NULL];
  L12(r30):
    st varnames = r30;
    sym6 = ldf all;
    base6 = ldf all in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L54() else L55();
  L42():
    goto L10(c10, r24);
  L48():
    __1 = ldf `::`;
    check L50() else D14();
  L49():
    r29 = dyn base5(<lang `::`(stats, terms.formula)(formula)>, "term.labels");
    goto L12(r29);
  L68():
    goto L16(r49);
  L70():
    p11 = prom<V +>{
      data7 = ld data;
      data8 = force? data7;
      checkMissing(data8);
      return data8;
    };
    r51 = dyn as_data_frame(p11);
    check L71() else D27();
  L77():
    ddd2 = ld `...`;
    r58 = dyn ___[, , `...`, ](l3, NULL, ddd2, NULL);
    check L78() else D29();
  D14():
    deopt 52 [];
  D27():
    deopt 95 [r51];
  D29():
    deopt 107 [NULL, r58];
  L13(r37):
    c23 = `as.logical`(r37);
    if c23 then L58() else L14();
  L50():
    r31 = dyn __1("stats", "terms.formula");
    check L51() else D15();
  L54():
    varnames = ld varnames;
    check L56() else D18();
  L55():
    r36 = dyn base6(<lang `!=`(varnames, ".")>);
    goto L13(r36);
  L71():
    l = ld m;
    c25 = `is.object`(l);
    if c25 then L73() else L74(r51, l);
  L78():
    st m = r58;
    l4 = ld m;
    c26 = `is.object`(l4);
    if c26 then L80() else L81(NULL, l4);
  D15():
    deopt 55 [r31];
  D18():
    deopt 65 [varnames];
  L14():
    goto L15();
  L15():
    mosaicplot = ldf mosaicplot;
    check L62() else D22();
  L51():
    checkFun.0(r31);
    r32 = r31 as cls;
    p6 = prom<V +>{
      formula1 = ld formula;
      formula2 = force? formula1;
      checkMissing(formula2);
      return formula2;
    };
    r34 = dyn r32(p6);
    check L52() else D16();
  L56():
    varnames1 = force? varnames;
    checkMissing(varnames1);
    r38 = `!=`(varnames1, ".");
    all = ldf all in base;
    r39 = dyn all(r38);
    check L57() else D19();
  L58():
    marginSums = ldf marginSums;
    check L59() else D20();
  L72(r55, dx3):
    st m = dx3;
    goto L18();
  L73():
    dr2 = tryDispatchBuiltin.0("$<-", l, r51);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L75() else L74(r51, dr2);
  L74(r53, l2):
    r56 = `$<-`(l2, <sym data>, r51);
    goto L72(r53, r56);
  L79(dx5):
    st m = dx5;
    na_action1 = ld `na.action`;
    check L83() else D30();
  L80():
    dr4 = tryDispatchBuiltin.0("$<-", l4, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L82() else L81(NULL, dr4);
  L81(r60, l6):
    r63 = `$<-`(l6, <sym main>, NULL);
    goto L79(r63);
  D16():
    deopt 58 [r34];
  D19():
    deopt 70 [r39];
  D20():
    deopt 72 [];
  D22():
    deopt 80 [];
  D30():
    deopt 112 [na_action1];
  L52():
    attr = ldf attr in base;
    r35 = dyn attr(r34, "term.labels");
    check L53() else D17();
  L57():
    goto L13(r39);
  L59():
    p7 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    p8 = prom<V +>{
      varnames2 = ld varnames;
      varnames3 = force? varnames2;
      checkMissing(varnames3);
      return varnames3;
    };
    r42 = dyn marginSums(p7, p8);
    check L60() else D21();
  L62():
    p9 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    p10 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    ddd1 = ld `...`;
    r46 = dyn mosaicplot[, main, `...`](p9, p10, ddd1);
    check L63() else D23();
  L75():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L72(r51, dx2);
  L82():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L79(dx4);
  L83():
    na_action2 = force? na_action1;
    checkMissing(na_action2);
    l7 = ld m;
    c27 = `is.object`(l7);
    if c27 then L85() else L86(na_action2, l7);
  D17():
    deopt 61 [r35];
  D21():
    deopt 75 [r42];
  D23():
    deopt 85 [r46];
  L53():
    goto L12(r35);
  L60():
    st data = r42;
    goto L15();
  L63():
    popenv;
    return r46;
  L84(dx7):
    st m = dx7;
    sym8 = ldf quote;
    base8 = ldf quote in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L88() else L89();
  L85():
    dr6 = tryDispatchBuiltin.0("$<-", l7, na_action2);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L87() else L86(na_action2, dr6);
  L86(na_action4, l9):
    r64 = `$<-`(l9, <sym na.action>, na_action2);
    goto L84(r64);
  L19(r66):
    l10 = ld m;
    c28 = `is.object`(l10);
    if c28 then L90() else L91(r66, l10);
  L87():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L84(dx6);
  L88():
    quote = ldf quote in base;
    r67 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L19(r67);
  L89():
    r65 = dyn base8(<lang `::`(stats, model.frame)>);
    goto L19(r65);
  L20(dx9):
    st m = dx9;
    eval1 = ldf eval;
    check L93() else D31();
  L90():
    dr8 = tryDispatchBuiltin.0("[[<-", l10, r66);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L92() else L91(r66, dr8);
  L91(r69, l12):
    ____ = ldf `[[<-` in base;
    r72 = dyn ____(l12, r66, 1);
    goto L20(r72);
  D31():
    deopt 126 [];
  L92():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx8);
  L93():
    p12 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p13 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r74 = dyn parent_frame1();
      return r74;
    };
    r76 = dyn eval1(p12, p13);
    check L94() else D32();
  D32():
    deopt 129 [r76];
  L94():
    st mf = r76;
    mosaicplot1 = ldf mosaicplot;
    check L95() else D33();
  D33():
    deopt 132 [];
  L95():
    p15 = prom<V +>{
      table = ldf table;
      p14 = prom<V +>{
        mf = ld mf;
        mf1 = force? mf;
        checkMissing(mf1);
        return mf1;
      };
      r78 = dyn table(p14);
      return r78;
    };
    p16 = prom<V +>{
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    ddd3 = ld `...`;
    r81 = dyn mosaicplot1[, main, `...`](p15, p16, ddd3);
    check L96() else D34();
  D34():
    deopt 137 [r81];
  L96():
    popenv;
    return r81;
  }
}