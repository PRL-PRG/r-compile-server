fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4130229875;
    st `prcomp.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4130229875(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var subset:*, var `na.action`:*, var `...`:dots?, reg terms:cls, reg formula1:*, reg formula2:V, reg p:p(V +), reg data1:*, reg data2:V, reg p1:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg mt:*, reg mt1:V, reg attr:cls, reg r5:V, reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg match_call:cls, reg r9:V, reg match_call1:cls, reg r10:V, reg l:*, reg ___:cls, reg ddd1:dots?, reg r11:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg quote:cls, reg r14:V, reg l1:*, reg c1:L, reg r16:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ____:cls, reg r19:V, reg eval_parent:cls, reg mf:*, reg mf1:V, reg p2:p(V +), reg r21:V, reg _check_vars_numeric:cls, reg mf2:*, reg mf3:V, reg p3:p(V +), reg r23:V, reg c2:L, reg stop1:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg mf4:*, reg mf5:V, reg attr1:cls, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg mf6:*, reg mf7:V, reg attr2:cls, reg r31:V, reg l4:*, reg attr__:cls, reg r32:V, reg model_matrix:cls, reg mt2:*, reg mt3:V, reg p4:p(V +), reg mf8:*, reg mf9:V, reg p5:p(V +), reg r35:V, reg prcomp_default:cls, reg x:*, reg x1:V, reg p6:p(V +), reg ddd2:dots?, reg r37:V, reg as_name:cls, reg r38:V, reg l5:*, reg c3:L, reg r40:V, reg l7:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ____1:cls, reg r43:V, reg cl:*, reg cl1:V, reg l8:*, reg c4:L, reg cl3:V, reg l10:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg r46:V, reg na_act:*, reg na_act1:V, reg c5:V, reg r47:V, reg c6:L, reg na_act2:*, reg na_act3:V, reg l11:*, reg c7:L, reg na_act5:V, reg l13:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r48:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg r50:V, reg res:*, reg res1:V, reg c8:L, reg res3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r51:V, reg c9:V, reg r52:V, reg c10:L, reg napredict:cls, reg na_act8:*, reg na_act9:V, reg p7:p(V +), reg sc:*, reg sc1:V, reg p8:p(V +), reg r55:V, reg l14:*, reg c11:L, reg r57:V, reg l16:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r59:V, reg dx11:V, reg r60:V, reg r61:V, reg res4:*, reg res5:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st subset = subset;
    st `na.action` = na_action;
    st `...` = ddd;
    terms = ldf terms;
    check L17() else D0();
  D0():
    deopt 1 [];
  L17():
    p = prom<V +>{
      formula1 = ld formula;
      formula2 = force? formula1;
      checkMissing(formula2);
      return formula2;
    };
    p1 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r2 = dyn terms[, data](p, p1);
    check L18() else D1();
  D1():
    deopt 5 [r2];
  L18():
    st mt = r2;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L1(r4):
    r6 = `>`(r4, 0);
    c = `as.logical`(r6);
    if c then L23() else L2();
  L19():
    mt = ld mt;
    check L21() else D2();
  L20():
    r3 = dyn base(<sym mt>, "response");
    goto L1(r3);
  D2():
    deopt 9 [mt];
  L2():
    goto L3();
  L3():
    match_call = ldf `match.call`;
    check L27() else D6();
  L21():
    mt1 = force? mt;
    checkMissing(mt1);
    attr = ldf attr in base;
    r5 = dyn attr(mt1, "response");
    check L22() else D3();
  L23():
    stop = ldf stop;
    check L24() else D4();
  D3():
    deopt 13 [r5];
  D4():
    deopt 17 [];
  D6():
    deopt 23 [];
  L22():
    goto L1(r5);
  L24():
    r7 = dyn stop("response not allowed in formula");
    check L25() else D5();
  L27():
    r9 = dyn match_call();
    check L28() else D7();
  D5():
    deopt 19 [r7];
  D7():
    deopt 24 [r9];
  L25():
    goto L3();
  L28():
    st cl = r9;
    match_call1 = ldf `match.call`;
    check L29() else D8();
  D8():
    deopt 27 [];
  L29():
    r10 = dyn match_call1[`expand.dots`](FALSE);
    check L30() else D9();
  D9():
    deopt 30 [r10];
  L30():
    st mf = r10;
    l = ld mf;
    ___ = ldf `$<-`;
    check L31() else D10();
  D10():
    deopt 35 [NULL, l, NULL];
  L31():
    ddd1 = ld `...`;
    r11 = dyn ___[, , `...`, ](l, NULL, ddd1, NULL);
    check L32() else D11();
  D11():
    deopt 38 [NULL, r11];
  L32():
    st mf = r11;
    sym1 = ldf quote;
    base1 = ldf quote in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L4(r13):
    l1 = ld mf;
    c1 = `is.object`(l1);
    if c1 then L35() else L36(r13, l1);
  L33():
    quote = ldf quote in base;
    r14 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L4(r14);
  L34():
    r12 = dyn base1(<lang `::`(stats, model.frame)>);
    goto L4(r12);
  L5(dx1):
    st mf = dx1;
    eval_parent = ldf `eval.parent`;
    check L38() else D12();
  L35():
    dr = tryDispatchBuiltin.0("[[<-", l1, r13);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36(r13, dr);
  L36(r16, l3):
    ____ = ldf `[[<-` in base;
    r19 = dyn ____(l3, r13, 1);
    goto L5(r19);
  D12():
    deopt 49 [];
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L38():
    p2 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      return mf1;
    };
    r21 = dyn eval_parent(p2);
    check L39() else D13();
  D13():
    deopt 51 [r21];
  L39():
    st mf = r21;
    _check_vars_numeric = ldf `.check_vars_numeric`;
    check L40() else D14();
  D14():
    deopt 54 [];
  L40():
    p3 = prom<V +>{
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      return mf3;
    };
    r23 = dyn _check_vars_numeric(p3);
    check L41() else D15();
  D15():
    deopt 56 [r23];
  L41():
    c2 = `as.logical`(r23);
    if c2 then L42() else L6();
  L6():
    goto L7();
  L7():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L46() else L47();
  L42():
    stop1 = ldf stop;
    check L43() else D16();
  D16():
    deopt 58 [];
  L8(r27):
    st `na.act` = r27;
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L43():
    r24 = dyn stop1("PCA applies only to numerical variables");
    check L44() else D17();
  L46():
    mf4 = ld mf;
    check L48() else D18();
  L47():
    r26 = dyn base2(<sym mf>, "na.action");
    goto L8(r26);
  D17():
    deopt 60 [r24];
  D18():
    deopt 65 [mf4];
  L9(r30):
    st mt = r30;
    l4 = ld mt;
    attr__ = ldf `attr<-`;
    check L54() else D22();
  L44():
    goto L7();
  L48():
    mf5 = force? mf4;
    checkMissing(mf5);
    attr1 = ldf attr in base;
    r28 = dyn attr1(mf5, "na.action");
    check L49() else D19();
  L50():
    mf6 = ld mf;
    check L52() else D20();
  L51():
    r29 = dyn base3(<sym mf>, "terms");
    goto L9(r29);
  D19():
    deopt 69 [r28];
  D20():
    deopt 73 [mf6];
  D22():
    deopt 82 [0, l4, 0];
  L49():
    goto L8(r28);
  L52():
    mf7 = force? mf6;
    checkMissing(mf7);
    attr2 = ldf attr in base;
    r31 = dyn attr2(mf7, "terms");
    check L53() else D21();
  L54():
    r32 = dyn attr__(l4, NULL, "intercept", 0);
    check L55() else D23();
  D21():
    deopt 77 [r31];
  D23():
    deopt 85 [0, r32];
  L53():
    goto L9(r31);
  L55():
    st mt = r32;
    model_matrix = ldf `model.matrix`;
    check L56() else D24();
  D24():
    deopt 88 [];
  L56():
    p4 = prom<V +>{
      mt2 = ld mt;
      mt3 = force? mt2;
      checkMissing(mt3);
      return mt3;
    };
    p5 = prom<V +>{
      mf8 = ld mf;
      mf9 = force? mf8;
      checkMissing(mf9);
      return mf9;
    };
    r35 = dyn model_matrix(p4, p5);
    check L57() else D25();
  D25():
    deopt 91 [r35];
  L57():
    st x = r35;
    prcomp_default = ldf `prcomp.default`;
    check L58() else D26();
  D26():
    deopt 94 [];
  L58():
    p6 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    ddd2 = ld `...`;
    r37 = dyn prcomp_default[, `...`](p6, ddd2);
    check L59() else D27();
  D27():
    deopt 97 [r37];
  L59():
    st res = r37;
    as_name = ldf `as.name`;
    check L60() else D28();
  D28():
    deopt 100 [];
  L60():
    r38 = dyn as_name("prcomp");
    check L61() else D29();
  D29():
    deopt 102 [r38];
  L61():
    l5 = ld cl;
    c3 = `is.object`(l5);
    if c3 then L62() else L63(r38, l5);
  L10(dx3):
    st cl = dx3;
    cl = ld cl;
    check L65() else D30();
  L62():
    dr2 = tryDispatchBuiltin.0("[[<-", l5, r38);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L64() else L63(r38, dr2);
  L63(r40, l7):
    ____1 = ldf `[[<-` in base;
    r43 = dyn ____1(l7, r38, 1);
    goto L10(r43);
  D30():
    deopt 108 [cl];
  L64():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L10(dx2);
  L65():
    cl1 = force? cl;
    checkMissing(cl1);
    l8 = ld res;
    c4 = `is.object`(l8);
    if c4 then L67() else L68(cl1, l8);
  L66(dx5):
    st res = dx5;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L70() else L71();
  L67():
    dr4 = tryDispatchBuiltin.0("$<-", l8, cl1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L69() else L68(cl1, dr4);
  L68(cl3, l10):
    r44 = `$<-`(l10, <sym call>, cl1);
    goto L66(r44);
  L11(r46):
    r47 = `!`(r46);
    c6 = `as.logical`(r47);
    if c6 then L73() else L12();
  L69():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L66(dx4);
  L70():
    na_act = ld `na.act`;
    check L72() else D31();
  L71():
    r45 = dyn base4(<sym na.act>);
    goto L11(r45);
  D31():
    deopt 114 [na_act];
  L12():
    goto L16();
  L16():
    res4 = ld res;
    check L95() else D36();
  L72():
    na_act1 = force? na_act;
    checkMissing(na_act1);
    c5 = `==`(na_act1, NULL);
    goto L11(c5);
  L73():
    na_act2 = ld `na.act`;
    check L74() else D32();
  D32():
    deopt 118 [na_act2];
  D36():
    deopt 142 [res4];
  L74():
    na_act3 = force? na_act2;
    checkMissing(na_act3);
    l11 = ld res;
    c7 = `is.object`(l11);
    if c7 then L76() else L77(na_act3, l11);
  L95():
    res5 = force? res4;
    checkMissing(res5);
    popenv;
    return res5;
  L75(dx7):
    st res = dx7;
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L76():
    dr6 = tryDispatchBuiltin.0("$<-", l11, na_act3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L78() else L77(na_act3, dr6);
  L77(na_act5, l13):
    r48 = `$<-`(l13, <sym na.action>, na_act3);
    goto L75(r48);
  L13(r50):
    r52 = `!`(r50);
    c10 = `as.logical`(r52);
    if c10 then L86() else L14();
  L78():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L75(dx6);
  L79():
    res = ld res;
    check L81() else D33();
  L80():
    r49 = dyn base5(<lang `<-`(sc, `$`(res, x))>);
    goto L13(r49);
  D33():
    deopt 124 [res];
  L14():
    goto L15(NULL);
  L15(r61):
    goto L16();
  L81():
    res1 = force? res;
    checkMissing(res1);
    c8 = `is.object`(res1);
    if c8 then L83() else L84(res1);
  L86():
    napredict = ldf napredict;
    check L87() else D34();
  D34():
    deopt 131 [];
  L82(dx9):
    st sc = dx9;
    c9 = `==`(dx9, NULL);
    goto L13(c9);
  L83():
    dr8 = tryDispatchBuiltin.1("$", res1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L85() else L84(dr8);
  L84(res3):
    r51 = `$`(res3, <sym x>);
    goto L82(r51);
  L87():
    p7 = prom<V +>{
      na_act8 = ld `na.act`;
      na_act9 = force? na_act8;
      checkMissing(na_act9);
      return na_act9;
    };
    p8 = prom<V +>{
      sc = ld sc;
      sc1 = force? sc;
      checkMissing(sc1);
      return sc1;
    };
    r55 = dyn napredict(p7, p8);
    check L88() else D35();
  D35():
    deopt 134 [r55];
  L85():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L82(dx8);
  L88():
    l14 = ld res;
    c11 = `is.object`(l14);
    if c11 then L90() else L91(r55, l14);
  L89(r59, dx11):
    st res = dx11;
    goto L15(r59);
  L90():
    dr10 = tryDispatchBuiltin.0("$<-", l14, r55);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L92() else L91(r55, dr10);
  L91(r57, l16):
    r60 = `$<-`(l16, <sym x>, r55);
    goto L89(r57, r60);
  L92():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L89(r55, dx10);
  }
}