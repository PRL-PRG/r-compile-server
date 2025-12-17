fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1061747026;
    st `sunflowerplot.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1061747026(formula, data, xlab, ylab, `...`, subset, `na.action`) {
  (reg formula:*, reg data:*, reg xlab:*, reg ylab:*, reg ddd:dots, reg subset:*, reg na_action:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `...`:dots?, var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg match_call:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg eval:cls, reg m:*, reg m1:V, reg c10:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg p:p(V +), reg parent_frame:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg is_matrix:cls, reg r17:V, reg c11:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p2:p(V +), reg r19:V, reg l:*, reg c12:L, reg r21:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r23:V, reg dx3:V, reg r24:V, reg l3:*, reg ___:cls, reg ddd1:dots?, reg r26:V, reg l4:*, reg c13:L, reg r28:dots, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r30:dots, reg dx5:V, reg r31:V, reg l7:*, reg c14:L, reg r33:dots, reg l9:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r36:V, reg na_action1:*, reg na_action2:V, reg l10:*, reg c15:L, reg na_action4:V, reg l12:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg quote:cls, reg r40:V, reg l13:*, reg c16:L, reg r42:V, reg l15:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ____:cls, reg r45:V, reg eval1:cls, reg m4:*, reg m5:V, reg p3:p(V +), reg parent_frame1:cls, reg r47:V, reg p4:p(V +), reg r49:V, reg NCOL:cls, reg mf:*, reg mf1:V, reg p5:p(V +), reg r51:V, reg r52:V, reg c17:L, reg stop1:cls, reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r55:V, reg r56:V, reg xlab1:*, reg xlab2:V, reg c18:V, reg c19:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r57:V, reg r58:V, reg mf2:*, reg mf3:V, reg names:cls, reg r59:V, reg c20:L, reg r61:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __:cls, reg r62:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg r64:V, reg ylab1:*, reg ylab2:V, reg c21:V, reg c22:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg mf4:*, reg mf5:V, reg names1:cls, reg r67:V, reg c23:L, reg r69:V, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg __1:cls, reg r70:V, reg sunflowerplot:cls, reg mf6:*, reg mf7:V, reg c24:L, reg mf9:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg __2:cls, reg r71:V, reg p6:p(V +), reg mf10:*, reg mf11:V, reg c25:L, reg mf13:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg __3:cls, reg r73:V, reg p7:p(V +), reg xlab3:*, reg xlab4:V, reg p8:p(V +), reg ylab3:*, reg ylab4:V, reg p9:p(V +), reg ddd2:dots?, reg r77:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L1(NULL) else L1(xlab);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2(NULL) else L2(ylab);
  L2(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    st subset = subset;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L3(NULL) else L3(na_action);
  L3(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L4(r1):
    c = `as.logical`(r1);
    if c then L5(c) else L28();
  L26():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L4(r2);
  L27():
    r = dyn base(<sym formula>);
    goto L4(r);
  L5(c1):
    c9 = `as.logical`(c1);
    if c9 then L34() else L7();
  L28():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L6(c5, r4):
    r6 = `!=`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L5(c7);
  L7():
    goto L8();
  L8():
    match_call = ldf `match.call`;
    check L38() else D4();
  L29():
    formula1 = ld formula;
    check L31() else D0();
  L30():
    r3 = dyn base1(<sym formula>);
    goto L6(c, r3);
  L34():
    stop = ldf stop;
    check L35() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  L31():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r5 = dyn length(formula2);
    check L32() else D1();
  L35():
    r7 = dyn stop("formula missing or incorrect");
    check L36() else D3();
  L38():
    r9 = dyn match_call[`expand.dots`](FALSE);
    check L39() else D5();
  D1():
    deopt 8 [c, r5];
  D3():
    deopt 15 [r7];
  D5():
    deopt 22 [r9];
  L32():
    goto L6(c, r5);
  L36():
    goto L8();
  L39():
    st m = r9;
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  L9(r11):
    c11 = `as.logical`(r11);
    if c11 then L45() else L10();
  L40():
    eval = ldf eval;
    check L42() else D6();
  L41():
    r10 = dyn base2(<lang eval(`$`(m, data), parent.frame())>);
    goto L9(r10);
  D6():
    deopt 27 [];
  L10():
    goto L11();
  L11():
    l3 = ld m;
    ___ = ldf `$<-`;
    check L53() else D11();
  L42():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c10 = `is.object`(m1);
      if c10 then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r12 = `$`(m3, <sym data>);
      goto L0(r12);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r14 = dyn parent_frame();
      return r14;
    };
    r16 = dyn eval(p, p1);
    check L43() else D7();
  L45():
    as_data_frame = ldf `as.data.frame`;
    check L46() else D9();
  D7():
    deopt 30 [r16];
  D9():
    deopt 34 [];
  D11():
    deopt 45 [NULL, l3, NULL];
  L43():
    is_matrix = ldf `is.matrix` in base;
    r17 = dyn is_matrix(r16);
    check L44() else D8();
  L46():
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r19 = dyn as_data_frame(p2);
    check L47() else D10();
  L53():
    ddd1 = ld `...`;
    r26 = dyn ___[, , `...`, ](l3, NULL, ddd1, NULL);
    check L54() else D12();
  D8():
    deopt 32 [r17];
  D10():
    deopt 36 [r19];
  D12():
    deopt 48 [NULL, r26];
  L44():
    goto L9(r17);
  L47():
    l = ld m;
    c12 = `is.object`(l);
    if c12 then L49() else L50(r19, l);
  L54():
    st m = r26;
    l4 = ld m;
    c13 = `is.object`(l4);
    if c13 then L56() else L57(NULL, l4);
  L48(r23, dx3):
    st m = dx3;
    goto L11();
  L49():
    dr2 = tryDispatchBuiltin.0("$<-", l, r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(r19, dr2);
  L50(r21, l2):
    r24 = `$<-`(l2, <sym data>, r19);
    goto L48(r21, r24);
  L55(r30, dx5):
    st m = dx5;
    l7 = ld m;
    c14 = `is.object`(l7);
    if c14 then L60() else L61(r30, l7);
  L56():
    dr4 = tryDispatchBuiltin.0("$<-", l4, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L58() else L57(NULL, dr4);
  L57(r28, l6):
    r31 = `$<-`(l6, <sym ylab>, NULL);
    goto L55(r28, r31);
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L48(r19, dx2);
  L58():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L55(NULL, dx4);
  L59(dx7):
    st m = dx7;
    na_action1 = ld `na.action`;
    check L63() else D13();
  L60():
    dr6 = tryDispatchBuiltin.0("$<-", l7, r30);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L62() else L61(r30, dr6);
  L61(r33, l9):
    r36 = `$<-`(l9, <sym xlab>, r30);
    goto L59(r36);
  D13():
    deopt 56 [na_action1];
  L62():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L59(dx6);
  L63():
    na_action2 = force? na_action1;
    checkMissing(na_action2);
    l10 = ld m;
    c15 = `is.object`(l10);
    if c15 then L65() else L66(na_action2, l10);
  L64(dx9):
    st m = dx9;
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L68() else L69();
  L65():
    dr8 = tryDispatchBuiltin.0("$<-", l10, na_action2);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(na_action2, dr8);
  L66(na_action4, l12):
    r37 = `$<-`(l12, <sym na.action>, na_action2);
    goto L64(r37);
  L12(r39):
    l13 = ld m;
    c16 = `is.object`(l13);
    if c16 then L70() else L71(r39, l13);
  L67():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L64(dx8);
  L68():
    quote = ldf quote in base;
    r40 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L12(r40);
  L69():
    r38 = dyn base3(<lang `::`(stats, model.frame)>);
    goto L12(r38);
  L13(dx11):
    st m = dx11;
    eval1 = ldf eval;
    check L73() else D14();
  L70():
    dr10 = tryDispatchBuiltin.0("[[<-", l13, r39);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L72() else L71(r39, dr10);
  L71(r42, l15):
    ____ = ldf `[[<-` in base;
    r45 = dyn ____(l15, r39, 1);
    goto L13(r45);
  D14():
    deopt 70 [];
  L72():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx10);
  L73():
    p3 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p4 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r47 = dyn parent_frame1();
      return r47;
    };
    r49 = dyn eval1(p3, p4);
    check L74() else D15();
  D15():
    deopt 73 [r49];
  L74():
    st mf = r49;
    NCOL = ldf NCOL;
    check L75() else D16();
  D16():
    deopt 76 [];
  L75():
    p5 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    r51 = dyn NCOL(p5);
    check L76() else D17();
  D17():
    deopt 78 [r51];
  L76():
    r52 = `!=`(r51, 2);
    c17 = `as.logical`(r52);
    if c17 then L77() else L14();
  L14():
    goto L15();
  L15():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L77():
    stop1 = ldf stop;
    check L78() else D18();
  D18():
    deopt 82 [];
  L16(r56):
    c19 = `as.logical`(r56);
    if c19 then L84() else L17();
  L78():
    r53 = dyn stop1("'formula' should specify exactly two variables");
    check L79() else D19();
  L81():
    xlab1 = ld xlab;
    check L83() else D20();
  L82():
    r55 = dyn base4(<sym xlab>);
    goto L16(r55);
  D19():
    deopt 84 [r53];
  D20():
    deopt 88 [xlab1];
  L17():
    goto L20();
  L20():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L93() else L94();
  L79():
    goto L15();
  L83():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c18 = `==`(xlab2, NULL);
    goto L16(c18);
  L84():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L85() else L86();
  L18(r58):
    c20 = `is.object`(r58);
    if c20 then L89() else L90(r58);
  L21(r64):
    c22 = `as.logical`(r64);
    if c22 then L96() else L22();
  L85():
    mf2 = ld mf;
    check L87() else D21();
  L86():
    r57 = dyn base5(<sym mf>);
    goto L18(r57);
  L93():
    ylab1 = ld ylab;
    check L95() else D23();
  L94():
    r63 = dyn base6(<sym ylab>);
    goto L21(r63);
  D21():
    deopt 93 [mf2];
  D23():
    deopt 104 [ylab1];
  L19(dx13):
    st xlab = dx13;
    goto L20();
  L22():
    goto L25();
  L25():
    sunflowerplot = ldf sunflowerplot;
    check L105() else D26();
  L87():
    mf3 = force? mf2;
    checkMissing(mf3);
    names = ldf names in base;
    r59 = dyn names(mf3);
    check L88() else D22();
  L89():
    dr12 = tryDispatchBuiltin.1("[", r58);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L91() else L90(dr12);
  L90(r61):
    __ = ldf `[` in base;
    r62 = dyn __(r61, 2);
    goto L19(r62);
  L95():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c21 = `==`(ylab2, NULL);
    goto L21(c21);
  L96():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L97() else L98();
  D22():
    deopt 96 [r59];
  D26():
    deopt 120 [];
  L23(r66):
    c23 = `is.object`(r66);
    if c23 then L101() else L102(r66);
  L88():
    goto L18(r59);
  L91():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L19(dx12);
  L97():
    mf4 = ld mf;
    check L99() else D24();
  L98():
    r65 = dyn base7(<sym mf>);
    goto L23(r65);
  L105():
    p6 = prom<V +>{
      mf6 = ld mf;
      mf7 = force? mf6;
      checkMissing(mf7);
      c24 = `is.object`(mf7);
      if c24 then L1() else L2(mf7);
    L0(dx19):
      return dx19;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", mf7);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(mf9):
      __2 = ldf `[[` in base;
      r71 = dyn __2(mf9, 2);
      goto L0(r71);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx18);
    };
    p7 = prom<V +>{
      mf10 = ld mf;
      mf11 = force? mf10;
      checkMissing(mf11);
      c25 = `is.object`(mf11);
      if c25 then L1() else L2(mf11);
    L0(dx21):
      return dx21;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", mf11);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(mf13):
      __3 = ldf `[[` in base;
      r73 = dyn __3(mf13, 1);
      goto L0(r73);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx20);
    };
    p8 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p9 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd2 = ld `...`;
    r77 = dyn sunflowerplot[, , xlab, ylab, `...`](p6, p7, p8, p9, ddd2);
    check L106() else D27();
  D24():
    deopt 109 [mf4];
  D27():
    deopt 128 [r77];
  L24(dx16):
    st ylab = dx16;
    goto L25();
  L99():
    mf5 = force? mf4;
    checkMissing(mf5);
    names1 = ldf names in base;
    r67 = dyn names1(mf5);
    check L100() else D25();
  L101():
    dr14 = tryDispatchBuiltin.1("[", r66);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L103() else L102(dr14);
  L102(r69):
    __1 = ldf `[` in base;
    r70 = dyn __1(r69, 1);
    goto L24(r70);
  L106():
    popenv;
    return r77;
  D25():
    deopt 112 [r67];
  L100():
    goto L23(r67);
  L103():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L24(dx15);
  }
}