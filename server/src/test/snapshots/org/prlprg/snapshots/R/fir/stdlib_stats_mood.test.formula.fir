fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner751963283;
    st `mood.test.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner751963283(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg c14:L, reg r8:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r9:V, reg c17:L, reg r10:V, reg terms:cls, reg formula3:*, reg formula4:V, reg c18:L, reg formula6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r11:V, reg p:p(V +), reg r13:V, reg attr:cls, reg r14:V, reg length1:cls, reg r15:V, reg r16:V, reg c19:L, reg c20:V, reg c22:L, reg stop:cls, reg r17:V, reg match_call:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg eval:cls, reg m:*, reg m1:V, reg c23:L, reg m3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r22:V, reg p1:p(V +), reg parent_frame:cls, reg r24:V, reg p2:p(V +), reg r26:V, reg is_matrix:cls, reg r27:V, reg c24:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p3:p(V +), reg r29:V, reg l:*, reg c25:L, reg r31:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r33:V, reg dx5:V, reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg quote:cls, reg r38:V, reg l3:*, reg c26:L, reg r40:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ____:cls, reg r43:V, reg l6:*, reg ___:cls, reg ddd1:dots?, reg r44:V, reg eval1:cls, reg m4:*, reg m5:V, reg p4:p(V +), reg parent_frame1:cls, reg r46:V, reg p5:p(V +), reg r48:V, reg paste:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg mf:*, reg mf1:V, reg names:cls, reg r51:V, reg p6:p(V +), reg r53:V, reg l7:*, reg names__:cls, reg r54:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r55:V, reg r56:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r57:V, reg r58:V, reg mf2:*, reg mf3:V, reg attr1:cls, reg r59:V, reg attr2:cls, reg r60:V, reg factor:cls, reg mf4:*, reg mf5:V, reg c27:L, reg mf7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg response:*, reg response1:V, reg r61:V, reg __1:cls, reg r62:V, reg p7:p(V +), reg r64:V, reg nlevels:cls, reg g:*, reg g1:V, reg p8:p(V +), reg r66:V, reg r67:V, reg c28:L, reg stop1:cls, reg r68:V, reg split:cls, reg mf8:*, reg mf9:V, reg c29:L, reg mf11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg response2:*, reg response3:V, reg __2:cls, reg r70:V, reg p9:p(V +), reg g2:*, reg g3:V, reg p10:p(V +), reg r73:V, reg mood_test:cls, reg DATA:*, reg DATA1:V, reg c30:L, reg DATA3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r74:V, reg p11:p(V +), reg DATA4:*, reg DATA5:V, reg c31:L, reg DATA7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r76:V, reg p12:p(V +), reg ddd2:dots?, reg r78:V, reg DNAME:*, reg DNAME1:V, reg l8:*, reg c32:L, reg DNAME3:V, reg l10:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r79:V, reg y:*, reg y1:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st `na.action` = na_action;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L19();
  L17():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L0(r2);
  L18():
    r = dyn base(<sym formula>);
    goto L0(r);
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L3(c9) else L25();
  L19():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L2(c5, r4):
    r6 = `!=`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3(c10):
    c22 = `as.logical`(c10);
    if c22 then L35() else L6();
  L20():
    formula1 = ld formula;
    check L22() else D0();
  L21():
    r3 = dyn base1(<sym formula>);
    goto L2(c, r3);
  L25():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L26() else L27();
  D0():
    deopt 5 [c, formula1];
  L4(c14, r8):
    r16 = `!=`(r8, 1);
    c19 = `as.logical`(r16);
    c20 = `||`(c14, c19);
    goto L3(c20);
  L6():
    goto L7();
  L7():
    match_call = ldf `match.call`;
    check L39() else D8();
  L22():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r5 = dyn length(formula2);
    check L23() else D1();
  L26():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L27():
    r7 = dyn base2(<lang attr(terms(`[`(formula, `-`(2))), "term.labels")>);
    goto L4(c9, r7);
  L35():
    stop = ldf stop;
    check L36() else D6();
  D1():
    deopt 8 [c, r5];
  D6():
    deopt 29 [];
  D8():
    deopt 35 [];
  L5(c17, r10):
    length1 = ldf length in base;
    r15 = dyn length1(r10);
    check L33() else D5();
  L23():
    goto L2(c, r5);
  L28():
    terms = ldf terms;
    check L30() else D2();
  L29():
    r9 = dyn base3(<lang terms(`[`(formula, `-`(2)))>, "term.labels");
    goto L5(c9, r9);
  L36():
    r17 = dyn stop("'formula' missing or incorrect");
    check L37() else D7();
  L39():
    r19 = dyn match_call[`expand.dots`](FALSE);
    check L40() else D9();
  D2():
    deopt 17 [c9];
  D5():
    deopt 24 [c17, r15];
  D7():
    deopt 31 [r17];
  D9():
    deopt 38 [r19];
  L30():
    p = prom<V +>{
      formula3 = ld formula;
      formula4 = force? formula3;
      checkMissing(formula4);
      c18 = `is.object`(formula4);
      if c18 then L1() else L2(formula4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", formula4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(formula6):
      __ = ldf `[` in base;
      r11 = dyn __(formula6, -2);
      goto L0(r11);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r13 = dyn terms(p);
    check L31() else D3();
  L33():
    goto L4(c17, r15);
  L37():
    goto L7();
  L40():
    st m = r19;
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  D3():
    deopt 19 [c9, r13];
  L8(r21):
    c24 = `as.logical`(r21);
    if c24 then L46() else L9();
  L31():
    attr = ldf attr in base;
    r14 = dyn attr(r13, "term.labels");
    check L32() else D4();
  L41():
    eval = ldf eval;
    check L43() else D10();
  L42():
    r20 = dyn base4(<lang eval(`$`(m, data), parent.frame())>);
    goto L8(r20);
  D4():
    deopt 22 [c9, r14];
  D10():
    deopt 43 [];
  L9():
    goto L10();
  L10():
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L32():
    goto L5(c9, r14);
  L43():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c23 = `is.object`(m1);
      if c23 then L1() else L2(m1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", m1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(m3):
      r22 = `$`(m3, <sym data>);
      goto L0(r22);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r24 = dyn parent_frame();
      return r24;
    };
    r26 = dyn eval(p1, p2);
    check L44() else D11();
  L46():
    as_data_frame = ldf `as.data.frame`;
    check L47() else D13();
  D11():
    deopt 46 [r26];
  D13():
    deopt 50 [];
  L11(r37):
    l3 = ld m;
    c26 = `is.object`(l3);
    if c26 then L56() else L57(r37, l3);
  L44():
    is_matrix = ldf `is.matrix` in base;
    r27 = dyn is_matrix(r26);
    check L45() else D12();
  L47():
    p3 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r29 = dyn as_data_frame(p3);
    check L48() else D14();
  L54():
    quote = ldf quote in base;
    r38 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L11(r38);
  L55():
    r36 = dyn base5(<lang `::`(stats, model.frame)>);
    goto L11(r36);
  D12():
    deopt 48 [r27];
  D14():
    deopt 52 [r29];
  L12(dx7):
    st m = dx7;
    l6 = ld m;
    ___ = ldf `$<-`;
    check L59() else D15();
  L45():
    goto L8(r27);
  L48():
    l = ld m;
    c25 = `is.object`(l);
    if c25 then L50() else L51(r29, l);
  L56():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, r37);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L58() else L57(r37, dr6);
  L57(r40, l5):
    ____ = ldf `[[<-` in base;
    r43 = dyn ____(l5, r37, 1);
    goto L12(r43);
  D15():
    deopt 69 [NULL, l6, NULL];
  L49(r33, dx5):
    st m = dx5;
    goto L10();
  L50():
    dr4 = tryDispatchBuiltin.0("$<-", l, r29);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L52() else L51(r29, dr4);
  L51(r31, l2):
    r34 = `$<-`(l2, <sym data>, r29);
    goto L49(r31, r34);
  L58():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L12(dx6);
  L59():
    ddd1 = ld `...`;
    r44 = dyn ___[, , `...`, ](l6, NULL, ddd1, NULL);
    check L60() else D16();
  D16():
    deopt 72 [NULL, r44];
  L52():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L49(r29, dx4);
  L60():
    st m = r44;
    eval1 = ldf eval;
    check L61() else D17();
  D17():
    deopt 75 [];
  L61():
    p4 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p5 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r46 = dyn parent_frame1();
      return r46;
    };
    r48 = dyn eval1(p4, p5);
    check L62() else D18();
  D18():
    deopt 78 [r48];
  L62():
    st mf = r48;
    paste = ldf paste;
    check L63() else D19();
  D19():
    deopt 81 [];
  L63():
    p6 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      names = ldf names in base;
      r51 = dyn names(mf1);
      goto L0(r51);
    L2():
      r49 = dyn base6(<sym mf>);
      goto L0(r49);
    };
    r53 = dyn paste[, collapse](p6, " by ");
    check L64() else D20();
  D20():
    deopt 85 [r53];
  L64():
    st DNAME = r53;
    l7 = ld mf;
    names__ = ldf `names<-`;
    check L65() else D21();
  D21():
    deopt 90 [NULL, l7, NULL];
  L65():
    r54 = dyn names__(l7, NULL, NULL);
    check L66() else D22();
  D22():
    deopt 92 [NULL, r54];
  L66():
    st mf = r54;
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L67() else L68();
  L13(r56):
    st response = r56;
    factor = ldf factor;
    check L74() else D26();
  L67():
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L69() else L70();
  L68():
    r55 = dyn base7(<lang attr(mf, "terms")>, "response");
    goto L13(r55);
  D26():
    deopt 108 [];
  L14(r58):
    attr2 = ldf attr in base;
    r60 = dyn attr2(r58, "response");
    check L73() else D25();
  L69():
    mf2 = ld mf;
    check L71() else D23();
  L70():
    r57 = dyn base8(<sym mf>, "terms");
    goto L14(r57);
  L74():
    p7 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      c27 = `is.object`(mf5);
      if c27 then L1() else L2(mf5);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[[", mf5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(mf7):
      response = ld response;
      response1 = force? response;
      checkMissing(response1);
      r61 = `-`(<missing>, response1);
      __1 = ldf `[[` in base;
      r62 = dyn __1(mf7, r61);
      goto L0(r62);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r64 = dyn factor(p7);
    check L75() else D27();
  D23():
    deopt 98 [mf2];
  D25():
    deopt 105 [r60];
  D27():
    deopt 110 [r64];
  L71():
    mf3 = force? mf2;
    checkMissing(mf3);
    attr1 = ldf attr in base;
    r59 = dyn attr1(mf3, "terms");
    check L72() else D24();
  L73():
    goto L13(r60);
  L75():
    st g = r64;
    nlevels = ldf nlevels;
    check L76() else D28();
  D24():
    deopt 102 [r59];
  D28():
    deopt 113 [];
  L72():
    goto L14(r59);
  L76():
    p8 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    r66 = dyn nlevels(p8);
    check L77() else D29();
  D29():
    deopt 115 [r66];
  L77():
    r67 = `!=`(r66, 2);
    c28 = `as.logical`(r67);
    if c28 then L78() else L15();
  L15():
    goto L16();
  L16():
    split = ldf split;
    check L82() else D32();
  L78():
    stop1 = ldf stop;
    check L79() else D30();
  D30():
    deopt 119 [];
  D32():
    deopt 125 [];
  L79():
    r68 = dyn stop1("grouping factor must have exactly 2 levels");
    check L80() else D31();
  L82():
    p9 = prom<V +>{
      mf8 = ld mf;
      mf9 = force? mf8;
      checkMissing(mf9);
      c29 = `is.object`(mf9);
      if c29 then L1() else L2(mf9);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", mf9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(mf11):
      response2 = ld response;
      response3 = force? response2;
      __2 = ldf `[[` in base;
      r70 = dyn __2(mf11, response3);
      goto L0(r70);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p10 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    r73 = dyn split(p9, p10);
    check L83() else D33();
  D31():
    deopt 121 [r68];
  D33():
    deopt 128 [r73];
  L80():
    goto L16();
  L83():
    st DATA = r73;
    mood_test = ldf `mood.test`;
    check L84() else D34();
  D34():
    deopt 131 [];
  L84():
    p11 = prom<V +>{
      DATA = ld DATA;
      DATA1 = force? DATA;
      checkMissing(DATA1);
      c30 = `is.object`(DATA1);
      if c30 then L1() else L2(DATA1);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", DATA1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(DATA3):
      __3 = ldf `[[` in base;
      r74 = dyn __3(DATA3, 1);
      goto L0(r74);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p12 = prom<V +>{
      DATA4 = ld DATA;
      DATA5 = force? DATA4;
      checkMissing(DATA5);
      c31 = `is.object`(DATA5);
      if c31 then L1() else L2(DATA5);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", DATA5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(DATA7):
      __4 = ldf `[[` in base;
      r76 = dyn __4(DATA7, 2);
      goto L0(r76);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    ddd2 = ld `...`;
    r78 = dyn mood_test[x, y, `...`](p11, p12, ddd2);
    check L85() else D35();
  D35():
    deopt 137 [r78];
  L85():
    st y = r78;
    DNAME = ld DNAME;
    check L86() else D36();
  D36():
    deopt 139 [DNAME];
  L86():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    l8 = ld y;
    c32 = `is.object`(l8);
    if c32 then L88() else L89(DNAME1, l8);
  L87(dx17):
    st y = dx17;
    y = ld y;
    check L91() else D37();
  L88():
    dr16 = tryDispatchBuiltin.0("$<-", l8, DNAME1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L90() else L89(DNAME1, dr16);
  L89(DNAME3, l10):
    r79 = `$<-`(l10, <sym data.name>, DNAME1);
    goto L87(r79);
  D37():
    deopt 144 [y];
  L90():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L87(dx16);
  L91():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}