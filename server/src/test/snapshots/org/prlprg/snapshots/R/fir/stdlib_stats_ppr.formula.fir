fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner744914472;
    st `ppr.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner744914472(formula, data, weights, subset, `na.action`, contrasts, `...`, model) {
  (reg formula:*, reg data:*, reg weights:*, reg subset:*, reg na_action:*, reg contrasts:*, reg ddd:dots, reg model:*) -+> V { var formula:*, var data:*, var weights:*, var subset:*, var `na.action`:*, var contrasts:*, reg contrasts_isMissing:L, reg contrasts_orDefault:*, var `...`:dots?, var model:*, reg model_isMissing:L, reg model_orDefault:*, reg match_call:cls, reg r:V, reg match_call1:cls, reg r1:V, reg l:*, reg ___:cls, reg ddd1:dots?, reg r2:V, reg l1:*, reg c:L, reg r4:dots, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg quote:cls, reg r10:V, reg l4:*, reg c1:L, reg r12:V, reg l6:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____:cls, reg r15:V, reg eval:cls, reg m:*, reg m1:V, reg p:p(V +), reg parent_frame:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg m2:*, reg m3:V, reg attr:cls, reg r22:V, reg l7:*, reg attr__:cls, reg r23:V, reg model_matrix:cls, reg Terms:*, reg Terms1:V, reg p2:p(V +), reg m4:*, reg m5:V, reg p3:p(V +), reg contrasts1:*, reg contrasts2:V, reg p4:p(V +), reg r27:V, reg model_response:cls, reg m6:*, reg m7:V, reg p5:p(V +), reg r29:V, reg model_weights:cls, reg m8:*, reg m9:V, reg p6:p(V +), reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg w:*, reg w1:V, reg length:cls, reg r34:V, reg r35:V, reg c2:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg r37:V, reg nrow:cls, reg X:*, reg X1:V, reg p7:p(V +), reg r39:V, reg rep_len:cls, reg r40:V, reg ppr_default:cls, reg X2:*, reg X3:V, reg p8:p(V +), reg Y:*, reg Y1:V, reg p9:p(V +), reg w2:*, reg w3:V, reg p10:p(V +), reg ddd2:dots?, reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg m10:*, reg m11:V, reg attr1:cls, reg r48:V, reg l8:*, reg c3:L, reg r50:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r53:V, reg Terms2:*, reg Terms3:V, reg l11:*, reg c4:L, reg Terms5:V, reg l13:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r54:V, reg as_name:cls, reg r55:V, reg l14:*, reg c5:L, reg r57:V, reg l16:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____1:cls, reg r60:V, reg call:*, reg call1:V, reg l17:*, reg c6:L, reg call3:V, reg l19:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r61:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r62:V, reg r63:V, reg X4:*, reg X5:V, reg attr2:cls, reg r64:V, reg l20:*, reg c7:L, reg r66:V, reg l22:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r69:V, reg _getXlevels:cls, reg Terms8:*, reg Terms9:V, reg p11:p(V +), reg m12:*, reg m13:V, reg p12:p(V +), reg r72:V, reg l23:*, reg c8:L, reg r74:V, reg l25:*, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r77:V, reg model1:*, reg model2:V, reg c9:L, reg m14:*, reg m15:V, reg l26:*, reg c10:L, reg m17:V, reg l28:*, reg dr16:V, reg dc8:L, reg dx16:V, reg m19:V, reg dx17:V, reg r78:V, reg structure:cls, reg fit:*, reg fit1:V, reg p13:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r80:V, reg r81:V, reg c11:cls, reg r82:V, reg p14:p(V +), reg r84:V |
    mkenv;
    st formula = formula;
    st data = data;
    st weights = weights;
    st subset = subset;
    st `na.action` = na_action;
    contrasts_isMissing = missing.0(contrasts);
    if contrasts_isMissing then L0(NULL) else L0(contrasts);
  L0(contrasts_orDefault):
    st contrasts = contrasts_orDefault;
    st `...` = ddd;
    model_isMissing = missing.0(model);
    if model_isMissing then L1(FALSE) else L1(model);
  L1(model_orDefault):
    st model = model_orDefault;
    match_call = ldf `match.call`;
    check L14() else D0();
  D0():
    deopt 1 [];
  L14():
    r = dyn match_call();
    check L15() else D1();
  D1():
    deopt 2 [r];
  L15():
    st call = r;
    match_call1 = ldf `match.call`;
    check L16() else D2();
  D2():
    deopt 5 [];
  L16():
    r1 = dyn match_call1[`expand.dots`](FALSE);
    check L17() else D3();
  D3():
    deopt 8 [r1];
  L17():
    st m = r1;
    l = ld m;
    ___ = ldf `$<-`;
    check L18() else D4();
  D4():
    deopt 13 [NULL, l, NULL];
  L18():
    ddd1 = ld `...`;
    r2 = dyn ___[, , `...`, ](l, NULL, ddd1, NULL);
    check L19() else D5();
  D5():
    deopt 16 [NULL, r2];
  L19():
    st m = r2;
    l1 = ld m;
    c = `is.object`(l1);
    if c then L21() else L22(NULL, l1);
  L20(dx1):
    st m = dx1;
    sym = ldf quote;
    base = ldf quote in base;
    guard = `==`.4(sym, base);
    if guard then L24() else L25();
  L21():
    dr = tryDispatchBuiltin.0("$<-", l1, NULL);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L23() else L22(NULL, dr);
  L22(r4, l3):
    r7 = `$<-`(l3, <sym contrasts>, NULL);
    goto L20(r7);
  L2(r9):
    l4 = ld m;
    c1 = `is.object`(l4);
    if c1 then L26() else L27(r9, l4);
  L23():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L24():
    quote = ldf quote in base;
    r10 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L2(r10);
  L25():
    r8 = dyn base(<lang `::`(stats, model.frame)>);
    goto L2(r8);
  L3(dx3):
    st m = dx3;
    eval = ldf eval;
    check L29() else D6();
  L26():
    dr2 = tryDispatchBuiltin.0("[[<-", l4, r9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(r9, dr2);
  L27(r12, l6):
    ____ = ldf `[[<-` in base;
    r15 = dyn ____(l6, r9, 1);
    goto L3(r15);
  D6():
    deopt 30 [];
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L29():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      return m1;
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r17 = dyn parent_frame();
      return r17;
    };
    r19 = dyn eval(p, p1);
    check L30() else D7();
  D7():
    deopt 33 [r19];
  L30():
    st m = r19;
    sym1 = ldf attr;
    base1 = ldf attr in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L31() else L32();
  L4(r21):
    st Terms = r21;
    l7 = ld Terms;
    attr__ = ldf `attr<-`;
    check L35() else D10();
  L31():
    m2 = ld m;
    check L33() else D8();
  L32():
    r20 = dyn base1(<sym m>, "terms");
    goto L4(r20);
  D8():
    deopt 37 [m2];
  D10():
    deopt 46 [0, l7, 0];
  L33():
    m3 = force? m2;
    checkMissing(m3);
    attr = ldf attr in base;
    r22 = dyn attr(m3, "terms");
    check L34() else D9();
  L35():
    r23 = dyn attr__(l7, NULL, "intercept", 0);
    check L36() else D11();
  D9():
    deopt 41 [r22];
  D11():
    deopt 49 [0, r23];
  L34():
    goto L4(r22);
  L36():
    st Terms = r23;
    model_matrix = ldf `model.matrix`;
    check L37() else D12();
  D12():
    deopt 52 [];
  L37():
    p2 = prom<V +>{
      Terms = ld Terms;
      Terms1 = force? Terms;
      checkMissing(Terms1);
      return Terms1;
    };
    p3 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p4 = prom<V +>{
      contrasts1 = ld contrasts;
      contrasts2 = force? contrasts1;
      checkMissing(contrasts2);
      return contrasts2;
    };
    r27 = dyn model_matrix(p2, p3, p4);
    check L38() else D13();
  D13():
    deopt 56 [r27];
  L38():
    st X = r27;
    model_response = ldf `model.response`;
    check L39() else D14();
  D14():
    deopt 59 [];
  L39():
    p5 = prom<V +>{
      m6 = ld m;
      m7 = force? m6;
      checkMissing(m7);
      return m7;
    };
    r29 = dyn model_response(p5);
    check L40() else D15();
  D15():
    deopt 61 [r29];
  L40():
    st Y = r29;
    model_weights = ldf `model.weights`;
    check L41() else D16();
  D16():
    deopt 64 [];
  L41():
    p6 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      return m9;
    };
    r31 = dyn model_weights(p6);
    check L42() else D17();
  D17():
    deopt 66 [r31];
  L42():
    st w = r31;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L43() else L44();
  L5(r33):
    r35 = `==`(r33, 0);
    c2 = `as.logical`(r35);
    if c2 then L47() else L6();
  L43():
    w = ld w;
    check L45() else D18();
  L44():
    r32 = dyn base2(<sym w>);
    goto L5(r32);
  D18():
    deopt 70 [w];
  L6():
    goto L8();
  L8():
    ppr_default = ldf `ppr.default`;
    check L54() else D23();
  L45():
    w1 = force? w;
    checkMissing(w1);
    length = ldf length in base;
    r34 = dyn length(w1);
    check L46() else D19();
  L47():
    sym3 = ldf rep_len;
    base3 = ldf rep_len in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  D19():
    deopt 73 [r34];
  D23():
    deopt 89 [];
  L7(r37):
    st w = r37;
    goto L8();
  L46():
    goto L5(r34);
  L48():
    nrow = ldf nrow;
    check L50() else D20();
  L49():
    r36 = dyn base3(1.0, <lang nrow(X)>);
    goto L7(r36);
  L54():
    p8 = prom<V +>{
      X2 = ld X;
      X3 = force? X2;
      checkMissing(X3);
      return X3;
    };
    p9 = prom<V +>{
      Y = ld Y;
      Y1 = force? Y;
      checkMissing(Y1);
      return Y1;
    };
    p10 = prom<V +>{
      w2 = ld w;
      w3 = force? w2;
      checkMissing(w3);
      return w3;
    };
    ddd2 = ld `...`;
    r45 = dyn ppr_default[, , , `...`](p8, p9, p10, ddd2);
    check L55() else D24();
  D20():
    deopt 80 [];
  D24():
    deopt 94 [r45];
  L50():
    p7 = prom<V +>{
      X = ld X;
      X1 = force? X;
      checkMissing(X1);
      return X1;
    };
    r39 = dyn nrow(p7);
    check L51() else D21();
  L55():
    st fit = r45;
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  D21():
    deopt 82 [r39];
  L9(r47):
    l8 = ld fit;
    c3 = `is.object`(l8);
    if c3 then L61() else L62(r47, l8);
  L51():
    rep_len = ldf rep_len in base;
    r40 = dyn rep_len(1.0, r39);
    check L52() else D22();
  L56():
    m10 = ld m;
    check L58() else D25();
  L57():
    r46 = dyn base4(<sym m>, "na.action");
    goto L9(r46);
  D22():
    deopt 84 [r40];
  D25():
    deopt 98 [m10];
  L52():
    goto L7(r40);
  L58():
    m11 = force? m10;
    checkMissing(m11);
    attr1 = ldf attr in base;
    r48 = dyn attr1(m11, "na.action");
    check L59() else D26();
  L60(dx5):
    st fit = dx5;
    Terms2 = ld Terms;
    check L64() else D27();
  L61():
    dr4 = tryDispatchBuiltin.0("$<-", l8, r47);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L63() else L62(r47, dr4);
  L62(r50, l10):
    r53 = `$<-`(l10, <sym na.action>, r47);
    goto L60(r53);
  D26():
    deopt 102 [r48];
  D27():
    deopt 106 [Terms2];
  L59():
    goto L9(r48);
  L63():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L60(dx4);
  L64():
    Terms3 = force? Terms2;
    checkMissing(Terms3);
    l11 = ld fit;
    c4 = `is.object`(l11);
    if c4 then L66() else L67(Terms3, l11);
  L65(dx7):
    st fit = dx7;
    as_name = ldf `as.name`;
    check L69() else D28();
  L66():
    dr6 = tryDispatchBuiltin.0("$<-", l11, Terms3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L68() else L67(Terms3, dr6);
  L67(Terms5, l13):
    r54 = `$<-`(l13, <sym terms>, Terms3);
    goto L65(r54);
  D28():
    deopt 112 [];
  L68():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L65(dx6);
  L69():
    r55 = dyn as_name("ppr");
    check L70() else D29();
  D29():
    deopt 114 [r55];
  L70():
    l14 = ld call;
    c5 = `is.object`(l14);
    if c5 then L71() else L72(r55, l14);
  L10(dx9):
    st call = dx9;
    call = ld call;
    check L74() else D30();
  L71():
    dr8 = tryDispatchBuiltin.0("[[<-", l14, r55);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L73() else L72(r55, dr8);
  L72(r57, l16):
    ____1 = ldf `[[<-` in base;
    r60 = dyn ____1(l16, r55, 1);
    goto L10(r60);
  D30():
    deopt 120 [call];
  L73():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L10(dx8);
  L74():
    call1 = force? call;
    checkMissing(call1);
    l17 = ld fit;
    c6 = `is.object`(l17);
    if c6 then L76() else L77(call1, l17);
  L75(dx11):
    st fit = dx11;
    sym5 = ldf attr;
    base5 = ldf attr in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L76():
    dr10 = tryDispatchBuiltin.0("$<-", l17, call1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L78() else L77(call1, dr10);
  L77(call3, l19):
    r61 = `$<-`(l19, <sym call>, call1);
    goto L75(r61);
  L11(r63):
    l20 = ld fit;
    c7 = `is.object`(l20);
    if c7 then L84() else L85(r63, l20);
  L78():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L75(dx10);
  L79():
    X4 = ld X;
    check L81() else D31();
  L80():
    r62 = dyn base5(<sym X>, "contrasts");
    goto L11(r62);
  D31():
    deopt 127 [X4];
  L81():
    X5 = force? X4;
    checkMissing(X5);
    attr2 = ldf attr in base;
    r64 = dyn attr2(X5, "contrasts");
    check L82() else D32();
  L83(dx13):
    st fit = dx13;
    _getXlevels = ldf `.getXlevels`;
    check L87() else D33();
  L84():
    dr12 = tryDispatchBuiltin.0("$<-", l20, r63);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L86() else L85(r63, dr12);
  L85(r66, l22):
    r69 = `$<-`(l22, <sym contrasts>, r63);
    goto L83(r69);
  D32():
    deopt 131 [r64];
  D33():
    deopt 136 [];
  L82():
    goto L11(r64);
  L86():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L83(dx12);
  L87():
    p11 = prom<V +>{
      Terms8 = ld Terms;
      Terms9 = force? Terms8;
      checkMissing(Terms9);
      return Terms9;
    };
    p12 = prom<V +>{
      m12 = ld m;
      m13 = force? m12;
      checkMissing(m13);
      return m13;
    };
    r72 = dyn _getXlevels(p11, p12);
    check L88() else D34();
  D34():
    deopt 139 [r72];
  L88():
    l23 = ld fit;
    c8 = `is.object`(l23);
    if c8 then L90() else L91(r72, l23);
  L89(dx15):
    st fit = dx15;
    model1 = ld model;
    check L93() else D35();
  L90():
    dr14 = tryDispatchBuiltin.0("$<-", l23, r72);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L92() else L91(r72, dr14);
  L91(r74, l25):
    r77 = `$<-`(l25, <sym xlevels>, r72);
    goto L89(r77);
  D35():
    deopt 143 [model1];
  L92():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L89(dx14);
  L93():
    model2 = force? model1;
    checkMissing(model2);
    c9 = `as.logical`(model2);
    if c9 then L94() else L12();
  L12():
    goto L13();
  L13():
    structure = ldf structure;
    check L101() else D37();
  L94():
    m14 = ld m;
    check L95() else D36();
  D36():
    deopt 145 [m14];
  D37():
    deopt 153 [];
  L95():
    m15 = force? m14;
    checkMissing(m15);
    l26 = ld fit;
    c10 = `is.object`(l26);
    if c10 then L97() else L98(m15, l26);
  L101():
    p13 = prom<V +>{
      fit = ld fit;
      fit1 = force? fit;
      checkMissing(fit1);
      return fit1;
    };
    p14 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r81):
      return r81;
    L1():
      c11 = ldf c in base;
      r82 = dyn c11("ppr.form", "ppr");
      goto L0(r82);
    L2():
      r80 = dyn base6("ppr.form", "ppr");
      goto L0(r80);
    };
    r84 = dyn structure[, class](p13, p14);
    check L102() else D38();
  D38():
    deopt 157 [r84];
  L96(m19, dx17):
    st fit = dx17;
    goto L13();
  L97():
    dr16 = tryDispatchBuiltin.0("$<-", l26, m15);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L99() else L98(m15, dr16);
  L98(m17, l28):
    r78 = `$<-`(l28, <sym model>, m15);
    goto L96(m17, r78);
  L102():
    popenv;
    return r84;
  L99():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L96(m15, dx16);
  }
}