fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2860930212;
    st `t.test.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2860930212(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, reg na_pass:*, reg na_pass1:V, reg p:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg missing:cls, reg r3:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg formula1:*, reg formula2:V, reg length:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r8:V, reg _in_:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg ___names:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg c10:L, reg stop1:cls, reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg terms:cls, reg formula3:*, reg formula4:V, reg c11:L, reg formula6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r21:V, reg p2:p(V +), reg r23:V, reg attr:cls, reg r24:V, reg length1:cls, reg r25:V, reg r26:V, reg c12:L, reg formula7:*, reg formula8:V, reg c13:L, reg formula10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r27:V, reg r28:V, reg c14:L, reg r29:V, reg stop2:cls, reg r30:V, reg match_call:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg eval:cls, reg m:*, reg m1:V, reg c15:L, reg m3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r35:V, reg p3:p(V +), reg parent_frame:cls, reg r37:V, reg p4:p(V +), reg r39:V, reg is_matrix:cls, reg r40:V, reg c16:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p5:p(V +), reg r42:V, reg l:*, reg c17:L, reg r44:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r46:V, reg dx7:V, reg r47:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r49:V, reg r50:V, reg quote:cls, reg r51:V, reg l3:*, reg c18:L, reg r53:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r56:V, reg l6:*, reg ___:cls, reg ddd1:dots?, reg r57:V, reg eval1:cls, reg m4:*, reg m5:V, reg p6:p(V +), reg parent_frame1:cls, reg r59:V, reg p7:p(V +), reg r61:V, reg paste:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg mf:*, reg mf1:V, reg names:cls, reg r64:V, reg p8:p(V +), reg r66:V, reg l7:*, reg names__:cls, reg r67:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r68:V, reg r69:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r70:V, reg r71:V, reg mf2:*, reg mf3:V, reg attr1:cls, reg r72:V, reg attr2:cls, reg r73:V, reg oneSampleOrPaired:*, reg oneSampleOrPaired1:V, reg r74:V, reg c19:L, reg factor:cls, reg mf4:*, reg mf5:V, reg c20:L, reg mf7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg response:*, reg response1:V, reg r75:V, reg __2:cls, reg r76:V, reg p9:p(V +), reg r78:V, reg nlevels:cls, reg g:*, reg g1:V, reg p10:p(V +), reg r80:V, reg r81:V, reg c21:L, reg stop3:cls, reg r82:V, reg split:cls, reg mf8:*, reg mf9:V, reg c22:L, reg mf11:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg response2:*, reg response3:V, reg __3:cls, reg r84:V, reg p11:p(V +), reg g2:*, reg g3:V, reg p12:p(V +), reg r87:V, reg t_test:cls, reg DATA:*, reg DATA1:V, reg c23:L, reg DATA3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r88:V, reg p13:p(V +), reg DATA4:*, reg DATA5:V, reg c24:L, reg DATA7:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r90:V, reg p14:p(V +), reg ddd2:dots?, reg r92:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r93:V, reg r94:V, reg y:*, reg y1:V, reg c25:L, reg y3:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r95:V, reg length2:cls, reg r96:V, reg r97:V, reg c26:L, reg paste1:cls, reg levels:cls, reg g4:*, reg g5:V, reg p15:p(V +), reg r99:V, reg p16:p(V +), reg r101:V, reg l8:*, reg c27:L, reg r104:V, reg l11:*, reg r105:V, reg l12:*, reg dr20:V, reg dc10:L, reg dx20:V, reg r108:V, reg l14:*, reg r109:V, reg dx21:V, reg r110:V, reg names__1:cls, reg r111:V, reg c28:L, reg r113:V, reg l16:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r116:V, reg paste2:cls, reg paste3:cls, reg levels1:cls, reg g6:*, reg g7:V, reg p17:p(V +), reg r118:V, reg p18:p(V +), reg r120:V, reg p19:p(V +), reg r122:V, reg l17:*, reg c29:L, reg r125:V, reg l20:*, reg r126:V, reg l21:*, reg dr24:V, reg dc12:L, reg dx24:V, reg r129:V, reg l23:*, reg r130:V, reg dx25:V, reg r131:V, reg names__2:cls, reg r132:V, reg c30:L, reg r134:V, reg l25:*, reg dr26:V, reg dc13:L, reg dx26:V, reg r136:V, reg dx27:V, reg r137:V, reg r138:V, reg mf12:*, reg mf13:V, reg c31:L, reg mf15:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg response4:*, reg response5:V, reg __6:cls, reg r140:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r141:V, reg r142:V, reg respVar:*, reg respVar1:V, reg inherits:cls, reg r143:V, reg c32:L, reg t_test1:cls, reg respVar2:*, reg respVar3:V, reg c33:L, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg __7:cls, reg r144:V, reg p20:p(V +), reg respVar6:*, reg respVar7:V, reg c34:L, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg __8:cls, reg r146:V, reg p21:p(V +), reg ddd3:dots?, reg r148:V, reg t_test2:cls, reg respVar10:*, reg respVar11:V, reg p22:p(V +), reg ddd4:dots?, reg r150:V, reg DNAME:*, reg DNAME1:V, reg l26:*, reg c35:L, reg DNAME3:V, reg l28:*, reg dr34:V, reg dc17:L, reg dx34:V, reg dx35:V, reg r151:V, reg y4:*, reg y5:V |
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
    if guard then L33() else L34();
  L2(r2):
    c = `as.logical`(r2);
    if c then L3(c) else L35();
  L33():
    missing = ldf missing in base;
    r3 = dyn missing(<sym formula>);
    goto L2(r3);
  L34():
    r1 = dyn base(<sym formula>);
    goto L2(r1);
  L3(c1):
    c9 = `as.logical`(c1);
    if c9 then L41() else L5();
  L35():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L4(c5, r5):
    r7 = `!=`(r5, 3);
    c6 = `as.logical`(r7);
    c7 = `||`(c5, c6);
    goto L3(c7);
  L5():
    goto L6();
  L6():
    _in_ = ldf `%in%`;
    check L45() else D4();
  L36():
    formula1 = ld formula;
    check L38() else D0();
  L37():
    r4 = dyn base1(<sym formula>);
    goto L4(c, r4);
  L41():
    stop = ldf stop;
    check L42() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  L38():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r6 = dyn length(formula2);
    check L39() else D1();
  L42():
    r8 = dyn stop("'formula' missing or incorrect");
    check L43() else D3();
  L45():
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
    check L46() else D5();
  D1():
    deopt 8 [c, r6];
  D3():
    deopt 15 [r8];
  D5():
    deopt 22 [r14];
  L39():
    goto L4(c, r6);
  L43():
    goto L6();
  L46():
    c10 = `as.logical`(r14);
    if c10 then L47() else L7();
  L7():
    goto L8();
  L8():
    st oneSampleOrPaired = FALSE;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L51() else L52();
  L47():
    stop1 = ldf stop;
    check L48() else D6();
  D6():
    deopt 24 [];
  L9(r18):
    r26 = `!=`(r18, 1);
    c12 = `as.logical`(r26);
    if c12 then L59() else L11();
  L48():
    r15 = dyn stop1("cannot use 'paired' in formula method");
    check L49() else D7();
  L51():
    sym4 = ldf attr;
    base4 = ldf attr in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L53() else L54();
  L52():
    r17 = dyn base3(<lang attr(terms(`[`(formula, `-`(2))), "term.labels")>);
    goto L9(r17);
  D7():
    deopt 26 [r15];
  L10(r20):
    length1 = ldf length in base;
    r25 = dyn length1(r20);
    check L58() else D11();
  L11():
    goto L15();
  L15():
    match_call = ldf `match.call`;
    check L69() else D15();
  L49():
    goto L8();
  L53():
    terms = ldf terms;
    check L55() else D8();
  L54():
    r19 = dyn base4(<lang terms(`[`(formula, `-`(2)))>, "term.labels");
    goto L10(r19);
  L59():
    formula7 = ld formula;
    check L60() else D12();
  D8():
    deopt 37 [];
  D11():
    deopt 44 [r25];
  D12():
    deopt 47 [formula7];
  D15():
    deopt 64 [];
  L55():
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
    check L56() else D9();
  L58():
    goto L9(r25);
  L60():
    formula8 = force? formula7;
    checkMissing(formula8);
    c13 = `is.object`(formula8);
    if c13 then L61() else L62(formula8);
  L69():
    r32 = dyn match_call[`expand.dots`](FALSE);
    check L70() else D16();
  D9():
    deopt 39 [r23];
  D16():
    deopt 67 [r32];
  L12(dx3):
    r28 = `==`(dx3, 1);
    c14 = `as.logical`(r28);
    if c14 then L64() else L13();
  L56():
    attr = ldf attr in base;
    r24 = dyn attr(r23, "term.labels");
    check L57() else D10();
  L61():
    dr2 = tryDispatchBuiltin.1("[[", formula8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L63() else L62(dr2);
  L62(formula10):
    __1 = ldf `[[` in base;
    r27 = dyn __1(formula10, 3);
    goto L12(r27);
  L70():
    st m = r32;
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  D10():
    deopt 42 [r24];
  L13():
    stop2 = ldf stop;
    check L66() else D13();
  L14(r29):
    goto L15();
  L16(r34):
    c16 = `as.logical`(r34);
    if c16 then L76() else L17();
  L57():
    goto L10(r24);
  L63():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L12(dx2);
  L64():
    st oneSampleOrPaired = TRUE;
    goto L14(TRUE);
  L71():
    eval = ldf eval;
    check L73() else D17();
  L72():
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
    if guard6 then L84() else L85();
  L66():
    r30 = dyn stop2("'formula' missing or incorrect");
    check L67() else D14();
  L73():
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
    check L74() else D18();
  L76():
    as_data_frame = ldf `as.data.frame`;
    check L77() else D20();
  D14():
    deopt 60 [r30];
  D18():
    deopt 75 [r39];
  D20():
    deopt 79 [];
  L19(r50):
    l3 = ld m;
    c18 = `is.object`(l3);
    if c18 then L86() else L87(r50, l3);
  L67():
    goto L14(r30);
  L74():
    is_matrix = ldf `is.matrix` in base;
    r40 = dyn is_matrix(r39);
    check L75() else D19();
  L77():
    p5 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r42 = dyn as_data_frame(p5);
    check L78() else D21();
  L84():
    quote = ldf quote in base;
    r51 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L19(r51);
  L85():
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
    check L89() else D22();
  L75():
    goto L16(r40);
  L78():
    l = ld m;
    c17 = `is.object`(l);
    if c17 then L80() else L81(r42, l);
  L86():
    dr8 = tryDispatchBuiltin.0("[[<-", l3, r50);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L88() else L87(r50, dr8);
  L87(r53, l5):
    ____ = ldf `[[<-` in base;
    r56 = dyn ____(l5, r50, 1);
    goto L20(r56);
  D22():
    deopt 98 [NULL, l6, NULL];
  L79(r46, dx7):
    st m = dx7;
    goto L18();
  L80():
    dr6 = tryDispatchBuiltin.0("$<-", l, r42);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(r42, dr6);
  L81(r44, l2):
    r47 = `$<-`(l2, <sym data>, r42);
    goto L79(r44, r47);
  L88():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L20(dx8);
  L89():
    ddd1 = ld `...`;
    r57 = dyn ___[, , `...`, ](l6, NULL, ddd1, NULL);
    check L90() else D23();
  D23():
    deopt 101 [NULL, r57];
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L79(r42, dx6);
  L90():
    st m = r57;
    eval1 = ldf eval;
    check L91() else D24();
  D24():
    deopt 104 [];
  L91():
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
    check L92() else D25();
  D25():
    deopt 107 [r61];
  L92():
    st mf = r61;
    paste = ldf paste;
    check L93() else D26();
  D26():
    deopt 110 [];
  L93():
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
    check L94() else D27();
  D27():
    deopt 114 [r66];
  L94():
    st DNAME = r66;
    l7 = ld mf;
    names__ = ldf `names<-`;
    check L95() else D28();
  D28():
    deopt 119 [NULL, l7, NULL];
  L95():
    r67 = dyn names__(l7, NULL, NULL);
    check L96() else D29();
  D29():
    deopt 121 [NULL, r67];
  L96():
    st mf = r67;
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  L21(r69):
    st response = r69;
    oneSampleOrPaired = ld oneSampleOrPaired;
    check L104() else D33();
  L97():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L99() else L100();
  L98():
    r68 = dyn base8(<lang attr(mf, "terms")>, "response");
    goto L21(r68);
  D33():
    deopt 136 [oneSampleOrPaired];
  L22(r71):
    attr2 = ldf attr in base;
    r73 = dyn attr2(r71, "response");
    check L103() else D32();
  L99():
    mf2 = ld mf;
    check L101() else D30();
  L100():
    r70 = dyn base9(<sym mf>, "terms");
    goto L22(r70);
  L104():
    oneSampleOrPaired1 = force? oneSampleOrPaired;
    checkMissing(oneSampleOrPaired1);
    r74 = `!`(oneSampleOrPaired1);
    c19 = `as.logical`(r74);
    if c19 then L105() else L23();
  D30():
    deopt 127 [mf2];
  D32():
    deopt 134 [r73];
  L23():
    mf12 = ld mf;
    check L153() else D54();
  L29():
    DNAME = ld DNAME;
    check L168() else D62();
  L101():
    mf3 = force? mf2;
    checkMissing(mf3);
    attr1 = ldf attr in base;
    r72 = dyn attr1(mf3, "terms");
    check L102() else D31();
  L103():
    goto L21(r73);
  L105():
    factor = ldf factor;
    check L106() else D34();
  D31():
    deopt 131 [r72];
  D34():
    deopt 140 [];
  D54():
    deopt 210 [mf12];
  D62():
    deopt 242 [DNAME];
  L102():
    goto L22(r72);
  L106():
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
    check L107() else D35();
  L153():
    mf13 = force? mf12;
    checkMissing(mf13);
    c31 = `is.object`(mf13);
    if c31 then L154() else L155(mf13);
  L168():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    l26 = ld y;
    c35 = `is.object`(l26);
    if c35 then L170() else L171(DNAME1, l26);
  D35():
    deopt 142 [r78];
  L30(dx29):
    st respVar = dx29;
    sym11 = ldf inherits;
    base11 = ldf inherits in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L158() else L159();
  L107():
    st g = r78;
    nlevels = ldf nlevels;
    check L108() else D36();
  L154():
    dr28 = tryDispatchBuiltin.1("[[", mf13);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L156() else L155(dr28);
  L155(mf15):
    response4 = ld response;
    check L157() else D55();
  L169(dx35):
    st y = dx35;
    y4 = ld y;
    check L173() else D63();
  L170():
    dr34 = tryDispatchBuiltin.0("$<-", l26, DNAME1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L172() else L171(DNAME1, dr34);
  L171(DNAME3, l28):
    r151 = `$<-`(l28, <sym data.name>, DNAME1);
    goto L169(r151);
  D36():
    deopt 145 [];
  D55():
    deopt 212 [mf15, response4];
  D63():
    deopt 247 [y4];
  L31(r142):
    c32 = `as.logical`(r142);
    if c32 then L162() else L32();
  L108():
    p10 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    r80 = dyn nlevels(p10);
    check L109() else D37();
  L156():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L30(dx28);
  L157():
    response5 = force? response4;
    __6 = ldf `[[` in base;
    r140 = dyn __6(mf15, response5);
    goto L30(r140);
  L158():
    respVar = ld respVar;
    check L160() else D56();
  L159():
    r141 = dyn base11(<sym respVar>, "Pair");
    goto L31(r141);
  L172():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L169(dx34);
  L173():
    y5 = force? y4;
    checkMissing(y5);
    popenv;
    return y5;
  D37():
    deopt 147 [r80];
  D56():
    deopt 218 [respVar];
  L32():
    t_test2 = ldf `t.test`;
    check L166() else D60();
  L109():
    r81 = `!=`(r80, 2);
    c21 = `as.logical`(r81);
    if c21 then L110() else L24();
  L160():
    respVar1 = force? respVar;
    checkMissing(respVar1);
    inherits = ldf inherits in base;
    r143 = dyn inherits(respVar1, "Pair", FALSE);
    check L161() else D57();
  L162():
    t_test1 = ldf `t.test`;
    check L163() else D58();
  D57():
    deopt 223 [r143];
  D58():
    deopt 225 [];
  D60():
    deopt 236 [];
  L24():
    goto L25();
  L25():
    split = ldf split;
    check L114() else D40();
  L110():
    stop3 = ldf stop;
    check L111() else D38();
  L161():
    goto L31(r143);
  L163():
    p20 = prom<V +>{
      respVar2 = ld respVar;
      respVar3 = force? respVar2;
      checkMissing(respVar3);
      c33 = `is.object`(respVar3);
      if c33 then L1() else L2();
    L0(dx31):
      return dx31;
    L1():
      dr30 = tryDispatchBuiltin.1("[", respVar3);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2();
    L2():
      __7 = ldf `[` in base;
      r144 = dyn __7(respVar3, <missing>, 1);
      goto L0(r144);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx30);
    };
    p21 = prom<V +>{
      respVar6 = ld respVar;
      respVar7 = force? respVar6;
      checkMissing(respVar7);
      c34 = `is.object`(respVar7);
      if c34 then L1() else L2();
    L0(dx33):
      return dx33;
    L1():
      dr32 = tryDispatchBuiltin.1("[", respVar7);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2();
    L2():
      __8 = ldf `[` in base;
      r146 = dyn __8(respVar7, <missing>, 2);
      goto L0(r146);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx32);
    };
    ddd3 = ld `...`;
    r148 = dyn t_test1[x, y, paired, `...`](p20, p21, TRUE, ddd3);
    check L164() else D59();
  L166():
    p22 = prom<V +>{
      respVar10 = ld respVar;
      respVar11 = force? respVar10;
      checkMissing(respVar11);
      return respVar11;
    };
    ddd4 = ld `...`;
    r150 = dyn t_test2[x, `...`](p22, ddd4);
    check L167() else D61();
  D38():
    deopt 151 [];
  D40():
    deopt 157 [];
  D59():
    deopt 233 [r148];
  D61():
    deopt 240 [r150];
  L111():
    r82 = dyn stop3("grouping factor must have exactly 2 levels");
    check L112() else D39();
  L114():
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
    check L115() else D41();
  L164():
    st y = r148;
    goto L29();
  L167():
    st y = r150;
    goto L29();
  D39():
    deopt 153 [r82];
  D41():
    deopt 160 [r87];
  L112():
    goto L25();
  L115():
    st DATA = r87;
    t_test = ldf `t.test`;
    check L116() else D42();
  D42():
    deopt 163 [];
  L116():
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
    r92 = dyn t_test[x, y, `...`](p13, p14, ddd2);
    check L117() else D43();
  D43():
    deopt 169 [r92];
  L117():
    st y = r92;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L118() else L119();
  L26(r94):
    r97 = `==`(r94, 2);
    c26 = `as.logical`(r97);
    if c26 then L126() else L27();
  L118():
    y = ld y;
    check L120() else D44();
  L119():
    r93 = dyn base10(<lang `$`(y, estimate)>);
    goto L26(r93);
  D44():
    deopt 173 [y];
  L27():
    goto L28(NULL);
  L28(r138):
    goto L29();
  L120():
    y1 = force? y;
    checkMissing(y1);
    c25 = `is.object`(y1);
    if c25 then L122() else L123(y1);
  L126():
    paste1 = ldf paste;
    check L127() else D46();
  D46():
    deopt 181 [];
  L121(dx19):
    length2 = ldf length in base;
    r96 = dyn length2(dx19);
    check L125() else D45();
  L122():
    dr18 = tryDispatchBuiltin.1("$", y1);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L124() else L123(dr18);
  L123(y3):
    r95 = `$`(y3, <sym estimate>);
    goto L121(r95);
  L127():
    p16 = prom<V +>{
      levels = ldf levels;
      p15 = prom<V +>{
        g4 = ld g;
        g5 = force? g4;
        checkMissing(g5);
        return g5;
      };
      r99 = dyn levels(p15);
      return r99;
    };
    r101 = dyn paste1("mean in group", p16);
    check L128() else D47();
  D45():
    deopt 177 [r96];
  D47():
    deopt 184 [r101];
  L124():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L121(dx18);
  L125():
    goto L26(r96);
  L128():
    l8 = ld y;
    c27 = `is.object`(l8);
    if c27 then L130() else L131(r101, l8, r101, l8);
  L129(r108, l14, r109, dx21):
    names__1 = ldf `names<-`;
    check L133() else D48();
  L130():
    dr20 = tryDispatchBuiltin.1("$", l8);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L132() else L131(r101, l8, r101, dr20);
  L131(r104, l11, r105, l12):
    r110 = `$`(l12, <sym estimate>);
    goto L129(r104, l11, r105, r110);
  D48():
    deopt 189 [r108, l14, dx21, r109];
  L132():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L129(r101, l8, r101, dx20);
  L133():
    r111 = dyn names__1(dx21, NULL, r109);
    check L134() else D49();
  D49():
    deopt 191 [r108, l14, r111];
  L134():
    c28 = `is.object`(l14);
    if c28 then L136() else L137(r108, l14);
  L135(dx23):
    st y = dx23;
    paste2 = ldf paste;
    check L139() else D50();
  L136():
    dr22 = tryDispatchBuiltin.0("$<-", l14, r111);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L138() else L137(r108, dr22);
  L137(r113, l16):
    r116 = `$<-`(l16, <sym estimate>, r111);
    goto L135(r116);
  D50():
    deopt 195 [];
  L138():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L135(dx22);
  L139():
    p19 = prom<V +>{
      paste3 = ldf paste;
      p18 = prom<V +>{
        levels1 = ldf levels;
        p17 = prom<V +>{
          g6 = ld g;
          g7 = force? g6;
          checkMissing(g7);
          return g7;
        };
        r118 = dyn levels1(p17);
        return r118;
      };
      r120 = dyn paste3[, , collapse]("group", p18, " and ");
      return r120;
    };
    r122 = dyn paste2("difference in means between", p19);
    check L140() else D51();
  D51():
    deopt 198 [r122];
  L140():
    l17 = ld y;
    c29 = `is.object`(l17);
    if c29 then L142() else L143(r122, l17, r122, l17);
  L141(r129, l23, r130, dx25):
    names__2 = ldf `names<-`;
    check L145() else D52();
  L142():
    dr24 = tryDispatchBuiltin.1("$", l17);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L144() else L143(r122, l17, r122, dr24);
  L143(r125, l20, r126, l21):
    r131 = `$`(l21, <sym null.value>);
    goto L141(r125, l20, r126, r131);
  D52():
    deopt 203 [r129, l23, dx25, r130];
  L144():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L141(r122, l17, r122, dx24);
  L145():
    r132 = dyn names__2(dx25, NULL, r130);
    check L146() else D53();
  D53():
    deopt 205 [r129, l23, r132];
  L146():
    c30 = `is.object`(l23);
    if c30 then L148() else L149(r129, l23);
  L147(r136, dx27):
    st y = dx27;
    goto L28(r136);
  L148():
    dr26 = tryDispatchBuiltin.0("$<-", l23, r132);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L150() else L149(r129, dr26);
  L149(r134, l25):
    r137 = `$<-`(l25, <sym null.value>, r132);
    goto L147(r134, r137);
  L150():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L147(r129, dx26);
  }
}