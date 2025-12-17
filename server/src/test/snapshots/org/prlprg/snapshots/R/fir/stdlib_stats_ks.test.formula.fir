fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner751963283;
    st `ks.test.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner751963283(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg terms:cls, reg formula3:*, reg formula4:V, reg c10:L, reg formula6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r13:V, reg p:p(V +), reg r15:V, reg attr:cls, reg r16:V, reg length1:cls, reg r17:V, reg r18:V, reg c11:L, reg formula7:*, reg formula8:V, reg c12:L, reg formula10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r19:V, reg r20:V, reg c13:L, reg r21:V, reg stop1:cls, reg r22:V, reg match_call:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg eval:cls, reg m:*, reg m1:V, reg c14:L, reg m3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg p1:p(V +), reg parent_frame:cls, reg r29:V, reg p2:p(V +), reg r31:V, reg is_matrix:cls, reg r32:V, reg c15:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p3:p(V +), reg r34:V, reg l:*, reg c16:L, reg r36:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r38:V, reg dx7:V, reg r39:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r41:V, reg r42:V, reg quote:cls, reg r43:V, reg l3:*, reg c17:L, reg r45:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ____:cls, reg r48:V, reg l6:*, reg ___:cls, reg ddd1:dots?, reg r49:V, reg eval1:cls, reg m4:*, reg m5:V, reg p4:p(V +), reg parent_frame1:cls, reg r51:V, reg p5:p(V +), reg r53:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg mf:*, reg mf1:V, reg names:cls, reg r56:V, reg c18:L, reg r58:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r59:V, reg paste:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r60:V, reg r61:V, reg mf2:*, reg mf3:V, reg names1:cls, reg r62:V, reg p6:p(V +), reg r64:V, reg l7:*, reg names__:cls, reg r65:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r66:V, reg r67:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r68:V, reg r69:V, reg mf4:*, reg mf5:V, reg attr1:cls, reg r70:V, reg attr2:cls, reg r71:V, reg oneSample:*, reg oneSample1:V, reg r72:V, reg c19:L, reg factor:cls, reg mf6:*, reg mf7:V, reg c20:L, reg mf9:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg response:*, reg response1:V, reg r73:V, reg __3:cls, reg r74:V, reg p7:p(V +), reg r76:V, reg nlevels:cls, reg g:*, reg g1:V, reg p8:p(V +), reg r78:V, reg r79:V, reg c21:L, reg stop2:cls, reg r80:V, reg split:cls, reg mf10:*, reg mf11:V, reg c22:L, reg mf13:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg response2:*, reg response3:V, reg __4:cls, reg r82:V, reg p9:p(V +), reg g2:*, reg g3:V, reg p10:p(V +), reg r85:V, reg ks_test:cls, reg DATA:*, reg DATA1:V, reg c23:L, reg DATA3:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r86:V, reg p11:p(V +), reg DATA4:*, reg DATA5:V, reg c24:L, reg DATA7:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg __6:cls, reg r88:V, reg p12:p(V +), reg ddd2:dots?, reg r90:V, reg gsub:cls, reg levels:cls, reg g4:*, reg g5:V, reg p13:p(V +), reg r92:V, reg c25:L, reg r94:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg __7:cls, reg r95:V, reg p14:p(V +), reg y:*, reg y1:V, reg c26:L, reg y3:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r97:V, reg p15:p(V +), reg r99:V, reg l8:*, reg c27:L, reg r101:V, reg l10:*, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg r104:V, reg gsub1:cls, reg levels1:cls, reg g6:*, reg g7:V, reg p16:p(V +), reg r106:V, reg c28:L, reg r108:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg __8:cls, reg r109:V, reg p17:p(V +), reg y4:*, reg y5:V, reg c29:L, reg y7:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r111:V, reg p18:p(V +), reg r113:V, reg l11:*, reg c30:L, reg r115:V, reg l13:*, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg r118:V, reg rname:*, reg rname1:V, reg l14:*, reg c31:L, reg rname3:V, reg l16:*, reg dr32:V, reg dc16:L, reg dx32:V, reg dx33:V, reg r119:V, reg levels2:cls, reg g8:*, reg g9:V, reg p19:p(V +), reg r121:V, reg l17:*, reg c32:L, reg r123:V, reg l19:*, reg dr34:V, reg dc17:L, reg dx34:V, reg r125:V, reg dx35:V, reg r126:V, reg mf14:*, reg mf15:V, reg c33:L, reg mf17:V, reg dr36:V, reg dc18:L, reg dx36:V, reg dx37:V, reg response4:*, reg response5:V, reg __9:cls, reg r128:V, reg ks_test1:cls, reg respVar:*, reg respVar1:V, reg p20:p(V +), reg ddd3:dots?, reg r130:V, reg gsub2:cls, reg DNAME:*, reg DNAME1:V, reg p21:p(V +), reg y8:*, reg y9:V, reg c34:L, reg y11:V, reg dr38:V, reg dc19:L, reg dx38:V, reg dx39:V, reg r132:V, reg p22:p(V +), reg r134:V, reg l20:*, reg c35:L, reg r136:V, reg l22:*, reg dr40:V, reg dc20:L, reg dx40:V, reg r138:V, reg dx41:V, reg r139:V, reg DNAME2:*, reg DNAME3:V, reg l23:*, reg c36:L, reg DNAME5:V, reg l25:*, reg dr42:V, reg dc21:L, reg dx42:V, reg dx43:V, reg r140:V, reg y12:*, reg y13:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st `na.action` = na_action;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L26() else L27();
  L0(r1):
    c = `as.logical`(r1);
    if c then L1(c) else L28();
  L26():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L0(r2);
  L27():
    r = dyn base(<sym formula>);
    goto L0(r);
  L1(c1):
    c9 = `as.logical`(c1);
    if c9 then L34() else L3();
  L28():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L2(c5, r4):
    r6 = `!=`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    st oneSample = FALSE;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L29():
    formula1 = ld formula;
    check L31() else D0();
  L30():
    r3 = dyn base1(<sym formula>);
    goto L2(c, r3);
  L34():
    stop = ldf stop;
    check L35() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  L5(r10):
    r18 = `!=`(r10, 1);
    c11 = `as.logical`(r18);
    if c11 then L46() else L7();
  L31():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r5 = dyn length(formula2);
    check L32() else D1();
  L35():
    r7 = dyn stop("'formula' missing or incorrect");
    check L36() else D3();
  L38():
    sym3 = ldf attr;
    base3 = ldf attr in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L39():
    r9 = dyn base2(<lang attr(terms(`[`(formula, `-`(2))), "term.labels")>);
    goto L5(r9);
  D1():
    deopt 8 [c, r5];
  D3():
    deopt 15 [r7];
  L6(r12):
    length1 = ldf length in base;
    r17 = dyn length1(r12);
    check L45() else D7();
  L7():
    goto L11();
  L11():
    match_call = ldf `match.call`;
    check L56() else D11();
  L32():
    goto L2(c, r5);
  L36():
    goto L4();
  L40():
    terms = ldf terms;
    check L42() else D4();
  L41():
    r11 = dyn base3(<lang terms(`[`(formula, `-`(2)))>, "term.labels");
    goto L6(r11);
  L46():
    formula7 = ld formula;
    check L47() else D8();
  D4():
    deopt 26 [];
  D7():
    deopt 33 [r17];
  D8():
    deopt 36 [formula7];
  D11():
    deopt 53 [];
  L42():
    p = prom<V +>{
      formula3 = ld formula;
      formula4 = force? formula3;
      checkMissing(formula4);
      c10 = `is.object`(formula4);
      if c10 then L1() else L2(formula4);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", formula4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(formula6):
      __ = ldf `[` in base;
      r13 = dyn __(formula6, -2);
      goto L0(r13);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r15 = dyn terms(p);
    check L43() else D5();
  L45():
    goto L5(r17);
  L47():
    formula8 = force? formula7;
    checkMissing(formula8);
    c12 = `is.object`(formula8);
    if c12 then L48() else L49(formula8);
  L56():
    r24 = dyn match_call[`expand.dots`](FALSE);
    check L57() else D12();
  D5():
    deopt 28 [r15];
  D12():
    deopt 56 [r24];
  L8(dx3):
    r20 = `==`(dx3, 1);
    c13 = `as.logical`(r20);
    if c13 then L51() else L9();
  L43():
    attr = ldf attr in base;
    r16 = dyn attr(r15, "term.labels");
    check L44() else D6();
  L48():
    dr2 = tryDispatchBuiltin.1("[[", formula8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L50() else L49(dr2);
  L49(formula10):
    __1 = ldf `[[` in base;
    r19 = dyn __1(formula10, 3);
    goto L8(r19);
  L57():
    st m = r24;
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D6():
    deopt 31 [r16];
  L9():
    stop1 = ldf stop;
    check L53() else D9();
  L10(r21):
    goto L11();
  L12(r26):
    c15 = `as.logical`(r26);
    if c15 then L63() else L13();
  L44():
    goto L6(r16);
  L50():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L51():
    st oneSample = TRUE;
    goto L10(TRUE);
  L58():
    eval = ldf eval;
    check L60() else D13();
  L59():
    r25 = dyn base4(<lang eval(`$`(m, data), parent.frame())>);
    goto L12(r25);
  D9():
    deopt 47 [];
  D13():
    deopt 61 [];
  L13():
    goto L14();
  L14():
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L71() else L72();
  L53():
    r22 = dyn stop1("'formula' missing or incorrect");
    check L54() else D10();
  L60():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c14 = `is.object`(m1);
      if c14 then L1() else L2(m1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", m1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(m3):
      r27 = `$`(m3, <sym data>);
      goto L0(r27);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    p2 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r29 = dyn parent_frame();
      return r29;
    };
    r31 = dyn eval(p1, p2);
    check L61() else D14();
  L63():
    as_data_frame = ldf `as.data.frame`;
    check L64() else D16();
  D10():
    deopt 49 [r22];
  D14():
    deopt 64 [r31];
  D16():
    deopt 68 [];
  L15(r42):
    l3 = ld m;
    c17 = `is.object`(l3);
    if c17 then L73() else L74(r42, l3);
  L54():
    goto L10(r22);
  L61():
    is_matrix = ldf `is.matrix` in base;
    r32 = dyn is_matrix(r31);
    check L62() else D15();
  L64():
    p3 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r34 = dyn as_data_frame(p3);
    check L65() else D17();
  L71():
    quote = ldf quote in base;
    r43 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L15(r43);
  L72():
    r41 = dyn base5(<lang `::`(stats, model.frame)>);
    goto L15(r41);
  D15():
    deopt 66 [r32];
  D17():
    deopt 70 [r34];
  L16(dx9):
    st m = dx9;
    l6 = ld m;
    ___ = ldf `$<-`;
    check L76() else D18();
  L62():
    goto L12(r32);
  L65():
    l = ld m;
    c16 = `is.object`(l);
    if c16 then L67() else L68(r34, l);
  L73():
    dr8 = tryDispatchBuiltin.0("[[<-", l3, r42);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L75() else L74(r42, dr8);
  L74(r45, l5):
    ____ = ldf `[[<-` in base;
    r48 = dyn ____(l5, r42, 1);
    goto L16(r48);
  D18():
    deopt 87 [NULL, l6, NULL];
  L66(r38, dx7):
    st m = dx7;
    goto L14();
  L67():
    dr6 = tryDispatchBuiltin.0("$<-", l, r34);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L69() else L68(r34, dr6);
  L68(r36, l2):
    r39 = `$<-`(l2, <sym data>, r34);
    goto L66(r36, r39);
  L75():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L16(dx8);
  L76():
    ddd1 = ld `...`;
    r49 = dyn ___[, , `...`, ](l6, NULL, ddd1, NULL);
    check L77() else D19();
  D19():
    deopt 90 [NULL, r49];
  L69():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L66(r34, dx6);
  L77():
    st m = r49;
    eval1 = ldf eval;
    check L78() else D20();
  D20():
    deopt 93 [];
  L78():
    p4 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p5 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r51 = dyn parent_frame1();
      return r51;
    };
    r53 = dyn eval1(p4, p5);
    check L79() else D21();
  D21():
    deopt 96 [r53];
  L79():
    st mf = r53;
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L80() else L81();
  L17(r55):
    c18 = `is.object`(r55);
    if c18 then L84() else L85(r55);
  L80():
    mf = ld mf;
    check L82() else D22();
  L81():
    r54 = dyn base6(<sym mf>);
    goto L17(r54);
  D22():
    deopt 100 [mf];
  L18(dx11):
    st rname = dx11;
    paste = ldf paste;
    check L87() else D24();
  L82():
    mf1 = force? mf;
    checkMissing(mf1);
    names = ldf names in base;
    r56 = dyn names(mf1);
    check L83() else D23();
  L84():
    dr10 = tryDispatchBuiltin.1("[", r55);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L86() else L85(dr10);
  L85(r58):
    __2 = ldf `[` in base;
    r59 = dyn __2(r58, 1);
    goto L18(r59);
  D23():
    deopt 103 [r56];
  D24():
    deopt 109 [];
  L83():
    goto L17(r56);
  L86():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L18(dx10);
  L87():
    p6 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      names1 = ldf names in base;
      r62 = dyn names1(mf3);
      goto L0(r62);
    L2():
      r60 = dyn base7(<sym mf>);
      goto L0(r60);
    };
    r64 = dyn paste[, collapse](p6, " by ");
    check L88() else D25();
  D25():
    deopt 113 [r64];
  L88():
    st DNAME = r64;
    l7 = ld mf;
    names__ = ldf `names<-`;
    check L89() else D26();
  D26():
    deopt 118 [NULL, l7, NULL];
  L89():
    r65 = dyn names__(l7, NULL, NULL);
    check L90() else D27();
  D27():
    deopt 120 [NULL, r65];
  L90():
    st mf = r65;
    sym8 = ldf attr;
    base8 = ldf attr in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L91() else L92();
  L19(r67):
    st response = r67;
    oneSample = ld oneSample;
    check L98() else D31();
  L91():
    sym9 = ldf attr;
    base9 = ldf attr in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L93() else L94();
  L92():
    r66 = dyn base8(<lang attr(mf, "terms")>, "response");
    goto L19(r66);
  D31():
    deopt 135 [oneSample];
  L20(r69):
    attr2 = ldf attr in base;
    r71 = dyn attr2(r69, "response");
    check L97() else D30();
  L93():
    mf4 = ld mf;
    check L95() else D28();
  L94():
    r68 = dyn base9(<sym mf>, "terms");
    goto L20(r68);
  L98():
    oneSample1 = force? oneSample;
    checkMissing(oneSample1);
    r72 = `!`(oneSample1);
    c19 = `as.logical`(r72);
    if c19 then L99() else L21();
  D28():
    deopt 126 [mf4];
  D30():
    deopt 133 [r71];
  L21():
    mf14 = ld mf;
    check L136() else D49();
  L24():
    DNAME2 = ld DNAME;
    check L149() else D55();
  L95():
    mf5 = force? mf4;
    checkMissing(mf5);
    attr1 = ldf attr in base;
    r70 = dyn attr1(mf5, "terms");
    check L96() else D29();
  L97():
    goto L19(r71);
  L99():
    factor = ldf factor;
    check L100() else D32();
  D29():
    deopt 130 [r70];
  D32():
    deopt 139 [];
  D49():
    deopt 200 [mf14];
  D55():
    deopt 222 [DNAME2];
  L96():
    goto L20(r70);
  L100():
    p7 = prom<V +>{
      mf6 = ld mf;
      mf7 = force? mf6;
      checkMissing(mf7);
      c20 = `is.object`(mf7);
      if c20 then L1() else L2(mf7);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[[", mf7);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(mf9):
      response = ld response;
      response1 = force? response;
      checkMissing(response1);
      r73 = `-`(<missing>, response1);
      __3 = ldf `[[` in base;
      r74 = dyn __3(mf9, r73);
      goto L0(r74);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r76 = dyn factor(p7);
    check L101() else D33();
  L136():
    mf15 = force? mf14;
    checkMissing(mf15);
    c33 = `is.object`(mf15);
    if c33 then L137() else L138(mf15);
  L149():
    DNAME3 = force? DNAME2;
    checkMissing(DNAME3);
    l23 = ld y;
    c36 = `is.object`(l23);
    if c36 then L151() else L152(DNAME3, l23);
  D33():
    deopt 141 [r76];
  L25(dx37):
    st respVar = dx37;
    ks_test1 = ldf `ks.test`;
    check L141() else D51();
  L101():
    st g = r76;
    nlevels = ldf nlevels;
    check L102() else D34();
  L137():
    dr36 = tryDispatchBuiltin.1("[[", mf15);
    dc18 = getTryDispatchBuiltinDispatched(dr36);
    if dc18 then L139() else L138(dr36);
  L138(mf17):
    response4 = ld response;
    check L140() else D50();
  L150(dx43):
    st y = dx43;
    y12 = ld y;
    check L154() else D56();
  L151():
    dr42 = tryDispatchBuiltin.0("$<-", l23, DNAME3);
    dc21 = getTryDispatchBuiltinDispatched(dr42);
    if dc21 then L153() else L152(DNAME3, dr42);
  L152(DNAME5, l25):
    r140 = `$<-`(l25, <sym data.name>, DNAME3);
    goto L150(r140);
  D34():
    deopt 144 [];
  D50():
    deopt 202 [mf17, response4];
  D51():
    deopt 207 [];
  D56():
    deopt 227 [y12];
  L102():
    p8 = prom<V +>{
      g = ld g;
      g1 = force? g;
      checkMissing(g1);
      return g1;
    };
    r78 = dyn nlevels(p8);
    check L103() else D35();
  L139():
    dx36 = getTryDispatchBuiltinValue(dr36);
    goto L25(dx36);
  L140():
    response5 = force? response4;
    __9 = ldf `[[` in base;
    r128 = dyn __9(mf17, response5);
    goto L25(r128);
  L141():
    p20 = prom<V +>{
      respVar = ld respVar;
      respVar1 = force? respVar;
      checkMissing(respVar1);
      return respVar1;
    };
    ddd3 = ld `...`;
    r130 = dyn ks_test1[x, `...`](p20, ddd3);
    check L142() else D52();
  L153():
    dx42 = getTryDispatchBuiltinValue(dr42);
    goto L150(dx42);
  L154():
    y13 = force? y12;
    checkMissing(y13);
    popenv;
    return y13;
  D35():
    deopt 146 [r78];
  D52():
    deopt 211 [r130];
  L103():
    r79 = `!=`(r78, 2);
    c21 = `as.logical`(r79);
    if c21 then L104() else L22();
  L142():
    st y = r130;
    gsub2 = ldf gsub;
    check L143() else D53();
  D53():
    deopt 214 [];
  L22():
    goto L23();
  L23():
    split = ldf split;
    check L108() else D38();
  L104():
    stop2 = ldf stop;
    check L105() else D36();
  L143():
    p21 = prom<V +>{
      DNAME = ld DNAME;
      DNAME1 = force? DNAME;
      checkMissing(DNAME1);
      return DNAME1;
    };
    p22 = prom<V +>{
      y8 = ld y;
      y9 = force? y8;
      checkMissing(y9);
      c34 = `is.object`(y9);
      if c34 then L1() else L2(y9);
    L0(dx39):
      return dx39;
    L1():
      dr38 = tryDispatchBuiltin.1("$", y9);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L3() else L2(dr38);
    L2(y11):
      r132 = `$`(y11, <sym alternative>);
      goto L0(r132);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr38);
      goto L0(dx38);
    };
    r134 = dyn gsub2("x", p21, p22);
    check L144() else D54();
  D36():
    deopt 150 [];
  D38():
    deopt 156 [];
  D54():
    deopt 218 [r134];
  L105():
    r80 = dyn stop2("grouping factor must have exactly 2 levels");
    check L106() else D37();
  L108():
    p9 = prom<V +>{
      mf10 = ld mf;
      mf11 = force? mf10;
      checkMissing(mf11);
      c22 = `is.object`(mf11);
      if c22 then L1() else L2(mf11);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[[", mf11);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(mf13):
      response2 = ld response;
      response3 = force? response2;
      __4 = ldf `[[` in base;
      r82 = dyn __4(mf13, response3);
      goto L0(r82);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p10 = prom<V +>{
      g2 = ld g;
      g3 = force? g2;
      checkMissing(g3);
      return g3;
    };
    r85 = dyn split(p9, p10);
    check L109() else D39();
  L144():
    l20 = ld y;
    c35 = `is.object`(l20);
    if c35 then L146() else L147(r134, l20);
  D37():
    deopt 152 [r80];
  D39():
    deopt 159 [r85];
  L106():
    goto L23();
  L109():
    st DATA = r85;
    ks_test = ldf `ks.test`;
    check L110() else D40();
  L145(r138, dx41):
    st y = dx41;
    goto L24();
  L146():
    dr40 = tryDispatchBuiltin.0("$<-", l20, r134);
    dc20 = getTryDispatchBuiltinDispatched(dr40);
    if dc20 then L148() else L147(r134, dr40);
  L147(r136, l22):
    r139 = `$<-`(l22, <sym alternative>, r134);
    goto L145(r136, r139);
  D40():
    deopt 162 [];
  L110():
    p11 = prom<V +>{
      DATA = ld DATA;
      DATA1 = force? DATA;
      checkMissing(DATA1);
      c23 = `is.object`(DATA1);
      if c23 then L1() else L2(DATA1);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[[", DATA1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(DATA3):
      __5 = ldf `[[` in base;
      r86 = dyn __5(DATA3, 1);
      goto L0(r86);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p12 = prom<V +>{
      DATA4 = ld DATA;
      DATA5 = force? DATA4;
      checkMissing(DATA5);
      c24 = `is.object`(DATA5);
      if c24 then L1() else L2(DATA5);
    L0(dx19):
      return dx19;
    L1():
      dr18 = tryDispatchBuiltin.1("[[", DATA5);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(DATA7):
      __6 = ldf `[[` in base;
      r88 = dyn __6(DATA7, 2);
      goto L0(r88);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
    };
    ddd2 = ld `...`;
    r90 = dyn ks_test[x, y, `...`](p11, p12, ddd2);
    check L111() else D41();
  L148():
    dx40 = getTryDispatchBuiltinValue(dr40);
    goto L145(r134, dx40);
  D41():
    deopt 168 [r90];
  L111():
    st y = r90;
    gsub = ldf gsub;
    check L112() else D42();
  D42():
    deopt 171 [];
  L112():
    p14 = prom<V +>{
      levels = ldf levels;
      p13 = prom<V +>{
        g4 = ld g;
        g5 = force? g4;
        checkMissing(g5);
        return g5;
      };
      r92 = dyn levels(p13);
      c25 = `is.object`(r92);
      if c25 then L1() else L2(r92);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("[", r92);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(r94):
      __7 = ldf `[` in base;
      r95 = dyn __7(r94, 1);
      goto L0(r95);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p15 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      c26 = `is.object`(y1);
      if c26 then L1() else L2(y1);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("$", y1);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(y3):
      r97 = `$`(y3, <sym alternative>);
      goto L0(r97);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r99 = dyn gsub("x", p14, p15);
    check L113() else D43();
  D43():
    deopt 175 [r99];
  L113():
    l8 = ld y;
    c27 = `is.object`(l8);
    if c27 then L115() else L116(r99, l8);
  L114(dx25):
    st y = dx25;
    gsub1 = ldf gsub;
    check L118() else D44();
  L115():
    dr24 = tryDispatchBuiltin.0("$<-", l8, r99);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L117() else L116(r99, dr24);
  L116(r101, l10):
    r104 = `$<-`(l10, <sym alternative>, r99);
    goto L114(r104);
  D44():
    deopt 180 [];
  L117():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L114(dx24);
  L118():
    p17 = prom<V +>{
      levels1 = ldf levels;
      p16 = prom<V +>{
        g6 = ld g;
        g7 = force? g6;
        checkMissing(g7);
        return g7;
      };
      r106 = dyn levels1(p16);
      c28 = `is.object`(r106);
      if c28 then L1() else L2(r106);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", r106);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(r108):
      __8 = ldf `[` in base;
      r109 = dyn __8(r108, 2);
      goto L0(r109);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p18 = prom<V +>{
      y4 = ld y;
      y5 = force? y4;
      checkMissing(y5);
      c29 = `is.object`(y5);
      if c29 then L1() else L2(y5);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("$", y5);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(y7):
      r111 = `$`(y7, <sym alternative>);
      goto L0(r111);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r113 = dyn gsub1("y", p17, p18);
    check L119() else D45();
  D45():
    deopt 184 [r113];
  L119():
    l11 = ld y;
    c30 = `is.object`(l11);
    if c30 then L121() else L122(r113, l11);
  L120(dx31):
    st y = dx31;
    rname = ld rname;
    check L124() else D46();
  L121():
    dr30 = tryDispatchBuiltin.0("$<-", l11, r113);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L123() else L122(r113, dr30);
  L122(r115, l13):
    r118 = `$<-`(l13, <sym alternative>, r113);
    goto L120(r118);
  D46():
    deopt 188 [rname];
  L123():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L120(dx30);
  L124():
    rname1 = force? rname;
    checkMissing(rname1);
    l14 = ld y;
    c31 = `is.object`(l14);
    if c31 then L126() else L127(rname1, l14);
  L125(dx33):
    st y = dx33;
    levels2 = ldf levels;
    check L129() else D47();
  L126():
    dr32 = tryDispatchBuiltin.0("$<-", l14, rname1);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L128() else L127(rname1, dr32);
  L127(rname3, l16):
    r119 = `$<-`(l16, <sym response>, rname1);
    goto L125(r119);
  D47():
    deopt 194 [];
  L128():
    dx32 = getTryDispatchBuiltinValue(dr32);
    goto L125(dx32);
  L129():
    p19 = prom<V +>{
      g8 = ld g;
      g9 = force? g8;
      checkMissing(g9);
      return g9;
    };
    r121 = dyn levels2(p19);
    check L130() else D48();
  D48():
    deopt 196 [r121];
  L130():
    l17 = ld y;
    c32 = `is.object`(l17);
    if c32 then L132() else L133(r121, l17);
  L131(r125, dx35):
    st y = dx35;
    goto L24();
  L132():
    dr34 = tryDispatchBuiltin.0("$<-", l17, r121);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L134() else L133(r121, dr34);
  L133(r123, l19):
    r126 = `$<-`(l19, <sym groups>, r121);
    goto L131(r123, r126);
  L134():
    dx34 = getTryDispatchBuiltinValue(dr34);
    goto L131(r121, dx34);
  }
}