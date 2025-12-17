fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2860930212;
    st `wilcox.test.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2860930212(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_pass:*, reg na_pass1:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg formula1:*, reg formula2:V, reg length:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r8:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg ___names:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg c10:L, reg stop1:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg terms:cls, reg formula3:*, reg formula4:V, reg c11:L, reg formula6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg p2:p(V +), reg r23:V, reg attr:cls, reg r24:V, reg length1:cls, reg r25:V, reg r26:V, reg c12:L, reg formula7:*, reg formula8:V, reg c13:L, reg formula10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r27:V, reg r28:V, reg c14:L, reg r29:V, reg stop2:cls, reg r30:V, reg match_call:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg eval:cls, reg m:*, reg m1:V, reg c15:L, reg m3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r35:V, reg p3:p(V +), reg parent_frame:cls, reg r37:V, reg p4:p(V +), reg r39:V, reg is_matrix:cls, reg r40:V, reg c16:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p5:p(V +), reg r42:V, reg l:*, reg c17:L, reg r44:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r46:V, reg dx7:V, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg quote:cls, reg r51:V, reg l3:*, reg c18:L, reg r53:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r56:V, reg l6:*, reg ___:cls, reg ddd1:dots?, reg r57:V, reg eval1:cls, reg m4:*, reg m5:V, reg p6:p(V +), reg parent_frame1:cls, reg r59:V, reg p7:p(V +), reg r61:V, reg paste:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg mf:*, reg mf1:V, reg names:cls, reg r64:V, reg p8:p(V +), reg r66:V, reg l7:*, reg names__:cls, reg r67:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r68:V, reg r69:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg r71:V, reg mf2:*, reg mf3:V, reg attr1:cls, reg r72:V, reg attr2:cls, reg r73:V, reg oneSampleOrPaired:*, reg oneSampleOrPaired1:V, reg r74:V, reg c19:L, reg factor:cls, reg mf4:*, reg mf5:V, reg c20:L, reg mf7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg response:*, reg response1:V, reg r75:V, reg __2:cls, reg r76:V, reg p9:p(V +), reg r78:V, reg nlevels:cls, reg g:*, reg g1:V, reg p10:p(V +), reg r80:V, reg r81:V, reg c21:L, reg stop3:cls, reg r82:V, reg split:cls, reg mf8:*, reg mf9:V, reg c22:L, reg mf11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg response2:*, reg response3:V, reg __3:cls, reg r84:V, reg p11:p(V +), reg g2:*, reg g3:V, reg p12:p(V +), reg r87:V, reg wilcox_test:cls, reg DATA:*, reg DATA1:V, reg c23:L, reg DATA3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r88:V, reg p13:p(V +), reg DATA4:*, reg DATA5:V, reg c24:L, reg DATA7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r90:V, reg p14:p(V +), reg ddd2:dots?, reg r92:V, reg mf12:*, reg mf13:V, reg c25:L, reg mf15:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg response4:*, reg response5:V, reg __6:cls, reg r94:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r95:V, reg r96:V, reg respVar:*, reg respVar1:V, reg inherits:cls, reg r97:V, reg c26:L, reg wilcox_test1:cls, reg respVar2:*, reg respVar3:V, reg c27:L, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __7:cls, reg r98:V, reg p15:p(V +), reg respVar6:*, reg respVar7:V, reg c28:L, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg __8:cls, reg r100:V, reg p16:p(V +), reg ddd3:dots?, reg r102:V, reg wilcox_test2:cls, reg respVar10:*, reg respVar11:V, reg p17:p(V +), reg ddd4:dots?, reg r104:V, reg DNAME:*, reg DNAME1:V, reg l8:*, reg c29:L, reg DNAME3:V, reg l10:*, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r105:V, reg y:*, reg y1:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L0() else L1(na_action);
  L0():
    p = prom<V +>{
      na_pass = ld `na.pass`;
      na_pass1 = force? na_pass;
      checkMissing(na_pass1);
      return na_pass1;
    };
    goto L1(p);
  L1(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L2(r2):
    c = `as.logical`(r2);
    if c then L3(c) else L32();
  L30():
    missing = ldf missing in base;
    r3 = dyn missing(<sym formula>);
    goto L2(r3);
  L31():
    r1 = dyn base(<sym formula>);
    goto L2(r1);
  L3(c1):
    c9 = `as.logical`(c1);
    if c9 then L38() else L5();
  L32():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L4(c5, r5):
    r7 = `!=`(r5, 3);
    c6 = `as.logical`(r7);
    c7 = `||`(c5, c6);
    goto L3(c7);
  L5():
    goto L6();
  L6():
    _in_ = ldf `%in%`;
    check L42() else D4();
  L33():
    formula1 = ld formula;
    check L35() else D0();
  L34():
    r4 = dyn base1(<sym formula>);
    goto L4(c, r4);
  L38():
    stop = ldf stop;
    check L39() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  L35():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r6 = dyn length(formula2);
    check L36() else D1();
  L39():
    r8 = dyn stop("'formula' missing or incorrect");
    check L40() else D3();
  L42():
    p1 = prom<V +>{
      sym2 = ldf `...names`;
      base2 = ldf `...names` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      ___names = ldf `...names` in base;
      r12 = dyn ___names();
      goto L0(r12);
    L2():
      r10 = dyn base2();
      goto L0(r10);
    };
    r14 = dyn _in_("paired", p1);
    check L43() else D5();
  D1():
    deopt 8 [c, r6];
  D3():
    deopt 15 [r8];
  D5():
    deopt 22 [r14];
  L36():
    goto L4(c, r6);
  L40():
    goto L6();
  L43():
    c10 = `as.logical`(r14);
    if c10 then L44() else L7();
  L7():
    goto L8();
  L8():
    st oneSampleOrPaired = FALSE;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L44():
    stop1 = ldf stop;
    check L45() else D6();
  D6():
    deopt 24 [];
  L9(r18):
    r26 = `!=`(r18, 1);
    c12 = `as.logical`(r26);
    if c12 then L56() else L11();
  L45():
    r15 = dyn stop1("cannot use 'paired' in formula method");
    check L46() else D7();
  L48():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L49():
    r17 = dyn base3(<lang attr(terms(`[`(formula, `-`(2))), "term.labels")>);
    goto L9(r17);
  D7():
    deopt 26 [r15];
  L10(r20):
    length1 = ldf length in base;
    r25 = dyn length1(r20);
    check L55() else D11();
  L11():
    goto L15();
  L15():
    match_call = ldf `match.call`;
    check L66() else D15();
  L46():
    goto L8();
  L50():
    terms = ldf terms;
    check L52() else D8();
  L51():
    r19 = dyn base4(<lang terms(`[`(formula, `-`(2)))>, "term.labels");
    goto L10(r19);
  L56():
    formula7 = ld formula;
    check L57() else D12();
  D8():
    deopt 37 [];
  D11():
    deopt 44 [r25];
  D12():
    deopt 47 [formula7];
  D15():
    deopt 64 [];
  L52():
    p2 = prom<V +>{
      formula3 = ld formula;
      formula4 = force? formula3;
      checkMissing(formula4);
      c11 = `is.object`(formula4);
      if c11 then L1() else L2(formula4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", formula4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(formula6):
      __ = ldf `[` in base;
      r21 = dyn __(formula6, -2);
      goto L0(r21);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r23 = dyn terms(p2);
    check L53() else D9();
  L55():
    goto L9(r25);
  L57():
    formula8 = force? formula7;
    checkMissing(formula8);
    c13 = `is.object`(formula8);
    if c13 then L58() else L59(formula8);
  L66():
    r32 = dyn match_call[`expand.dots`](FALSE);
    check L67() else D16();
  D9():
    deopt 39 [r23];
  D16():
    deopt 67 [r32];
  L12(dx3):
    r28 = `==`(dx3, 1);
    c14 = `as.logical`(r28);
    if c14 then L61() else L13();
  L53():
    attr = ldf attr in base;
    r24 = dyn attr(r23, "term.labels");
    check L54() else D10();
  L58():
    dr2 = tryDispatchBuiltin.1("[[", formula8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L60() else L59(dr2);
  L59(formula10):
    __1 = ldf `[[` in base;
    r27 = dyn __1(formula10, 3);
    goto L12(r27);
  L67():
    st m = r32;
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  D10():
    deopt 42 [r24];
  L13():
    stop2 = ldf stop;
    check L63() else D13();
  L14(r29):
    goto L15();
  L16(r34):
    c16 = `as.logical`(r34);
    if c16 then L73() else L17();
  L54():
    goto L10(r24);
  L60():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L61():
    st oneSampleOrPaired = TRUE;
    goto L14(TRUE);
  L68():
    eval = ldf eval;
    check L70() else D17();
  L69():
    r33 = dyn base5(<lang eval(`$`(m, data), parent.frame())>);
    goto L16(r33);
  D13():
    deopt 58 [];
  D17():
    deopt 72 [];
  L17():
    goto L18();
  L18():
    sym6 = ldf quote;
    base6 = ldf quote in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L63():
    r30 = dyn stop2("'formula' missing or incorrect");
    check L64() else D14();
  L70():
    p3 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c15 = `is.object`(m1);
      if c15 then L1() else L2(m1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", m1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(m3):
      r35 = `$`(m3, <sym data>);
      goto L0(r35);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p4 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r37 = dyn parent_frame();
      return r37;
    };
    r39 = dyn eval(p3, p4);
    check L71() else D18();
  L73():
    as_data_frame = ldf `as.data.frame`;
    check L74() else D20();
  D14():
    deopt 60 [r30];
  D18():
    deopt 75 [r39];
  D20():
    deopt 79 [];
  L19(r50):
    l3 = ld m;
    c18 = `is.object`(l3);
    if c18 then L83() else L84(r50, l3);
  L64():
    goto L14(r30);
  L71():
    is_matrix = ldf `is.matrix` in base;
    r40 = dyn is_matrix(r39);
    check L72() else D19();
  L74():
    p5 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r42 = dyn as_data_frame(p5);
    check L75() else D21();
  L81():
    quote = ldf quote in base;
    r51 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L19(r51);
  L82():
    r49 = dyn base6(<lang `::`(stats, model.frame)>);
    goto L19(r49);
  D19():
    deopt 77 [r40];
  D21():
    deopt 81 [r42];
  L20(dx9):
    st m = dx9;
    l6 = ld m;
    ___ = ldf `$<-`;
    check L86() else D22();
  L72():
    goto L16(r40);
  L75():
    l = ld m;
    c17 = `is.object`(l);
    if c17 then L77() else L78(r42, l);
  L83():
    dr8 = tryDispatchBuiltin.0("[[<-", l3, r50);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L85() else L84(r50, dr8);
  L84(r53, l5):
    ____ = ldf `[[<-` in base;
    r56 = dyn ____(l5, r50, 1);
    goto L20(r56);
  D22():
    deopt 98 [NULL, l6, NULL];
  L76(r46, dx7):
    st m = dx7;
    goto L18();
  L77():
    dr6 = tryDispatchBuiltin.0("$<-", l, r42);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L79() else L78(r42, dr6);
  L78(r44, l2):
    r47 = `$<-`(l2, <sym data>, r42);
    goto L76(r44, r47);
  L85():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx8);
  L86():
    ddd1 = ld `...`;
    r57 = dyn ___[, , `...`, ](l6, NULL, ddd1, NULL);
    check L87() else D23();
  D23():
    deopt 101 [NULL, r57];
  L79():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L76(r42, dx6);
  L87():
    st m = r57;
    eval1 = ldf eval;
    check L88() else D24();
  D24():
    deopt 104 [];
  L88():
    p6 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p7 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r59 = dyn parent_frame1();
      return r59;
    };
    r61 = dyn eval1(p6, p7);
    check L89() else D25();
  D25():
    deopt 107 [r61];
  L89():
    st mf = r61;
    paste = ldf paste;
    check L90() else D26();
  D26():
    deopt 110 [];
  L90():
    p8 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r63):
      return r63;
    L1():
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      names = ldf names in base;
      r64 = dyn names(mf1);
      goto L0(r64);
    L2():
      r62 = dyn base7(<sym mf>);
      goto L0(r62);
    };
    r66 = dyn paste[, collapse](p8, " by ");
    check L91() else D27();
  D27():
    deopt 114 [r66];
  L91():
    st DNAME = r66;
    l7 = ld mf;
    names__ = ldf `names<-`;
    check L92() else D28();
  D28():
    deopt 119 [NULL, l7, NULL];
  L92():
    r67 = dyn names__(l7, NULL, NULL);
    check L93() else D29();
  D29():
    deopt 121 [NULL, r67];
  L93():
    st mf = r67;
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L94() else L95();
  L21(r69):
    st response = r69;
    oneSampleOrPaired = ld oneSampleOrPaired;
    check L101() else D33();
  L94():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L96() else L97();
  L95():
    r68 = dyn base8(<lang attr(mf, "terms")>, "response");
    goto L21(r68);
  D33():
    deopt 136 [oneSampleOrPaired];
  L22(r71):
    attr2 = ldf attr in base;
    r73 = dyn attr2(r71, "response");
    check L100() else D32();
  L96():
    mf2 = ld mf;
    check L98() else D30();
  L97():
    r70 = dyn base9(<sym mf>, "terms");
    goto L22(r70);
  L101():
    oneSampleOrPaired1 = force? oneSampleOrPaired;
    checkMissing(oneSampleOrPaired1);
    r74 = `!`(oneSampleOrPaired1);
    c19 = `as.logical`(r74);
    if c19 then L102() else L23();
  D30():
    deopt 127 [mf2];
  D32():
    deopt 134 [r73];
  L23():
    mf12 = ld mf;
    check L116() else D44();
  L26():
    DNAME = ld DNAME;
    check L131() else D52();
  L98():
    mf3 = force? mf2;
    checkMissing(mf3);
    attr1 = ldf attr in base;
    r72 = dyn attr1(mf3, "terms");
    check L99() else D31();
  L100():
    goto L21(r73);
  L102():
    factor = ldf factor;
    check L103() else D34();
  D31():
    deopt 131 [r72];
  D34():
    deopt 140 [];
  D44():
    deopt 171 [mf12];
  D52():
    deopt 203 [DNAME];
  L99():
    goto L22(r72);
  L103():
    p9 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      c20 = `is.object`(mf5);
      if c20 then L1() else L2(mf5);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[[", mf5);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(mf7):
      response = ld response;
      response1 = force? response;
      checkMissing(response1);
      r75 = `-`(<missing>, response1);
      __2 = ldf `[[` in base;
      r76 = dyn __2(mf7, r75);
      goto L0(r76);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r78 = dyn factor(p9);
    check L104() else D35();
  L116():
    mf13 = force? mf12;
    checkMissing(mf13);
    c25 = `is.object`(mf13);
    if c25 then L117() else L118(mf13);
  L131():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    l8 = ld y;
    c29 = `is.object`(l8);
    if c29 then L133() else L134(DNAME1, l8);
  D35():
    deopt 142 [r78];
  L27(dx19):
    st respVar = dx19;
    sym10 = ldf inherits;
    base10 = ldf inherits in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L121() else L122();
  L104():
    st g = r78;
    nlevels = ldf nlevels;
    check L105() else D36();
  L117():
    dr18 = tryDispatchBuiltin.1("[[", mf13);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L119() else L118(dr18);
  L118(mf15):
    response4 = ld response;
    check L120() else D45();
  L132(dx25):
    st y = dx25;
    y = ld y;
    check L136() else D53();
  L133():
    dr24 = tryDispatchBuiltin.0("$<-", l8, DNAME1);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L135() else L134(DNAME1, dr24);
  L134(DNAME3, l10):
    r105 = `$<-`(l10, <sym data.name>, DNAME1);
    goto L132(r105);
  D36():
    deopt 145 [];
  D45():
    deopt 173 [mf15, response4];
  D53():
    deopt 208 [y];
  L28(r96):
    c26 = `as.logical`(r96);
    if c26 then L125() else L29();
  L105():
    p10 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    r80 = dyn nlevels(p10);
    check L106() else D37();
  L119():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L27(dx18);
  L120():
    response5 = force? response4;
    __6 = ldf `[[` in base;
    r94 = dyn __6(mf15, response5);
    goto L27(r94);
  L121():
    respVar = ld respVar;
    check L123() else D46();
  L122():
    r95 = dyn base10(<sym respVar>, "Pair");
    goto L28(r95);
  L135():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L132(dx24);
  L136():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D37():
    deopt 147 [r80];
  D46():
    deopt 179 [respVar];
  L29():
    wilcox_test2 = ldf `wilcox.test`;
    check L129() else D50();
  L106():
    r81 = `!=`(r80, 2);
    c21 = `as.logical`(r81);
    if c21 then L107() else L24();
  L123():
    respVar1 = force? respVar;
    checkMissing(respVar1);
    inherits = ldf inherits in base;
    r97 = dyn inherits(respVar1, "Pair", FALSE);
    check L124() else D47();
  L125():
    wilcox_test1 = ldf `wilcox.test`;
    check L126() else D48();
  D47():
    deopt 184 [r97];
  D48():
    deopt 186 [];
  D50():
    deopt 197 [];
  L24():
    goto L25();
  L25():
    split = ldf split;
    check L111() else D40();
  L107():
    stop3 = ldf stop;
    check L108() else D38();
  L124():
    goto L28(r97);
  L126():
    p15 = prom<V +>{
      respVar2 = ld respVar;
      respVar3 = force? respVar2;
      checkMissing(respVar3);
      c27 = `is.object`(respVar3);
      if c27 then L1() else L2();
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", respVar3);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2();
    L2():
      __7 = ldf `[` in base;
      r98 = dyn __7(respVar3, <missing>, 1);
      goto L0(r98);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p16 = prom<V +>{
      respVar6 = ld respVar;
      respVar7 = force? respVar6;
      checkMissing(respVar7);
      c28 = `is.object`(respVar7);
      if c28 then L1() else L2();
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", respVar7);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2();
    L2():
      __8 = ldf `[` in base;
      r100 = dyn __8(respVar7, <missing>, 2);
      goto L0(r100);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    ddd3 = ld `...`;
    r102 = dyn wilcox_test1[x, y, paired, `...`](p15, p16, TRUE, ddd3);
    check L127() else D49();
  L129():
    p17 = prom<V +>{
      respVar10 = ld respVar;
      respVar11 = force? respVar10;
      checkMissing(respVar11);
      return respVar11;
    };
    ddd4 = ld `...`;
    r104 = dyn wilcox_test2[x, `...`](p17, ddd4);
    check L130() else D51();
  D38():
    deopt 151 [];
  D40():
    deopt 157 [];
  D49():
    deopt 194 [r102];
  D51():
    deopt 201 [r104];
  L108():
    r82 = dyn stop3("grouping factor must have exactly 2 levels");
    check L109() else D39();
  L111():
    p11 = prom<V +>{
      mf8 = ld mf;
      mf9 = force? mf8;
      checkMissing(mf9);
      c22 = `is.object`(mf9);
      if c22 then L1() else L2(mf9);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", mf9);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(mf11):
      response2 = ld response;
      response3 = force? response2;
      __3 = ldf `[[` in base;
      r84 = dyn __3(mf11, response3);
      goto L0(r84);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p12 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    r87 = dyn split(p11, p12);
    check L112() else D41();
  L127():
    st y = r102;
    goto L26();
  L130():
    st y = r104;
    goto L26();
  D39():
    deopt 153 [r82];
  D41():
    deopt 160 [r87];
  L109():
    goto L25();
  L112():
    st DATA = r87;
    wilcox_test = ldf `wilcox.test`;
    check L113() else D42();
  D42():
    deopt 163 [];
  L113():
    p13 = prom<V +>{
      DATA = ld DATA;
      DATA1 = force? DATA;
      checkMissing(DATA1);
      c23 = `is.object`(DATA1);
      if c23 then L1() else L2(DATA1);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", DATA1);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(DATA3):
      __4 = ldf `[[` in base;
      r88 = dyn __4(DATA3, 1);
      goto L0(r88);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p14 = prom<V +>{
      DATA4 = ld DATA;
      DATA5 = force? DATA4;
      checkMissing(DATA5);
      c24 = `is.object`(DATA5);
      if c24 then L1() else L2(DATA5);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", DATA5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(DATA7):
      __5 = ldf `[[` in base;
      r90 = dyn __5(DATA7, 2);
      goto L0(r90);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    ddd2 = ld `...`;
    r92 = dyn wilcox_test[x, y, `...`](p13, p14, ddd2);
    check L114() else D43();
  D43():
    deopt 169 [r92];
  L114():
    st y = r92;
    goto L26();
  }
}