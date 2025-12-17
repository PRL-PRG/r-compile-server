fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner174047284;
    st `boxplot.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner174047284(formula, data, `...`, subset, `na.action`, xlab, ylab, add, ann, horizontal, drop, sep, `lex.order`) {
  (reg formula:*, reg data:*, reg ddd:dots, reg subset:*, reg na_action:*, reg xlab:*, reg ylab:*, reg add:*, reg ann:*, reg horizontal:*, reg drop:*, reg sep:*, reg lex_order:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, var `...`:dots?, var subset:*, var `na.action`:*, reg na_action_isMissing:L, reg na_action_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, reg mklab:cls, reg horizontal1:*, reg horizontal2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, reg mklab1:cls, reg horizontal3:*, reg horizontal4:V, reg r3:V, reg p2:p(V +), reg r5:V, reg p3:p(V +), var add:*, reg add_isMissing:L, reg add_orDefault:*, var ann:*, reg ann_isMissing:L, reg ann_orDefault:*, reg add1:*, reg add2:V, reg r7:V, reg p4:p(V +), var horizontal:*, reg horizontal_isMissing:L, reg horizontal_orDefault:*, var drop:*, reg drop_isMissing:L, reg drop_orDefault:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, var `lex.order`:*, reg lex_order_isMissing:L, reg lex_order_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg missing:cls, reg r11:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg c5:L, reg r13:V, reg formula1:*, reg formula2:V, reg length:cls, reg r14:V, reg r15:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r16:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg r19:V, reg missing1:cls, reg r20:V, reg c10:L, reg c11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg c15:L, reg r22:V, reg missing2:cls, reg r23:V, reg c16:L, reg c17:V, reg c19:L, reg r24:cls, reg match_call:cls, reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg eval:cls, reg m:*, reg m1:V, reg c20:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r29:V, reg p5:p(V +), reg parent_frame:cls, reg r31:V, reg p6:p(V +), reg r33:V, reg is_matrix:cls, reg r34:V, reg c21:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p7:p(V +), reg r36:V, reg l:*, reg c22:L, reg r38:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r40:V, reg dx3:V, reg r41:V, reg l3:*, reg c23:L, reg r44:dots, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r46:dots, reg dx5:V, reg r47:V, reg l6:*, reg c24:L, reg r49:dots, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r51:dots, reg dx7:V, reg r52:V, reg l9:*, reg c25:L, reg r54:dots, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r56:dots, reg dx9:V, reg r57:V, reg l12:*, reg ___:cls, reg ddd1:dots?, reg r58:V, reg l13:*, reg c26:L, reg r60:dots, reg l15:*, reg dr10:V, reg dc5:L, reg dx10:V, reg r62:dots, reg dx11:V, reg r63:V, reg l16:*, reg c27:L, reg r65:dots, reg l18:*, reg dr12:V, reg dc6:L, reg dx12:V, reg r67:dots, reg dx13:V, reg r68:V, reg l19:*, reg c28:L, reg r70:dots, reg l21:*, reg dr14:V, reg dc7:L, reg dx14:V, reg r72:dots, reg dx15:V, reg r73:V, reg l22:*, reg c29:L, reg r75:dots, reg l24:*, reg dr16:V, reg dc8:L, reg dx16:V, reg r77:dots, reg dx17:V, reg r78:V, reg l25:*, reg c30:L, reg r80:dots, reg l27:*, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r83:V, reg na_action1:*, reg na_action2:V, reg l28:*, reg c31:L, reg na_action4:V, reg l30:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r84:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r85:V, reg r86:V, reg quote:cls, reg r87:V, reg l31:*, reg c32:L, reg r89:V, reg l33:*, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg ____:cls, reg r92:V, reg eval1:cls, reg m4:*, reg m5:V, reg p8:p(V +), reg parent_frame1:cls, reg r94:V, reg p9:p(V +), reg r96:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r97:V, reg r98:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r99:V, reg r100:V, reg mf:*, reg mf1:V, reg attr:cls, reg r101:V, reg attr1:cls, reg r102:V, reg boxplot:cls, reg split:cls, reg mf2:*, reg mf3:V, reg c33:L, reg mf5:V, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg response:*, reg response1:V, reg __:cls, reg r103:V, reg p10:p(V +), reg mf6:*, reg mf7:V, reg c34:L, reg mf9:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg response2:*, reg response3:V, reg r105:V, reg __1:cls, reg r106:V, reg p11:p(V +), reg drop1:*, reg drop2:V, reg p12:p(V +), reg sep1:*, reg sep2:V, reg p13:p(V +), reg lex_order1:*, reg lex_order2:V, reg p14:p(V +), reg r111:V, reg p15:p(V +), reg xlab1:*, reg xlab2:V, reg p16:p(V +), reg ylab1:*, reg ylab2:V, reg p17:p(V +), reg add3:*, reg add4:V, reg p18:p(V +), reg ann1:*, reg ann2:V, reg p19:p(V +), reg horizontal5:*, reg horizontal6:V, reg p20:p(V +), reg ddd2:dots?, reg r118:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0(NULL) else L0(data);
  L0(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    st subset = subset;
    na_action_isMissing = missing.0(na_action);
    if na_action_isMissing then L1(NULL) else L1(na_action);
  L1(na_action_orDefault):
    st `na.action` = na_action_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L2() else L3(xlab);
  L2():
    p1 = prom<V +>{
      mklab = ldf mklab;
      p = prom<V +>{
        horizontal1 = ld horizontal;
        horizontal2 = force? horizontal1;
        checkMissing(horizontal2);
        return horizontal2;
      };
      r1 = dyn mklab[y_var](p);
      return r1;
    };
    goto L3(p1);
  L3(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L4() else L5(ylab);
  L4():
    p3 = prom<V +>{
      mklab1 = ldf mklab;
      p2 = prom<V +>{
        horizontal3 = ld horizontal;
        horizontal4 = force? horizontal3;
        checkMissing(horizontal4);
        r3 = `!`(horizontal4);
        return r3;
      };
      r5 = dyn mklab1[y_var](p2);
      return r5;
    };
    goto L5(p3);
  L5(ylab_orDefault):
    st ylab = ylab_orDefault;
    add_isMissing = missing.0(add);
    if add_isMissing then L6(FALSE) else L6(add);
  L6(add_orDefault):
    st add = add_orDefault;
    ann_isMissing = missing.0(ann);
    if ann_isMissing then L7() else L8(ann);
  L7():
    p4 = prom<V +>{
      add1 = ld add;
      add2 = force? add1;
      checkMissing(add2);
      r7 = `!`(add2);
      return r7;
    };
    goto L8(p4);
  L8(ann_orDefault):
    st ann = ann_orDefault;
    horizontal_isMissing = missing.0(horizontal);
    if horizontal_isMissing then L9(FALSE) else L9(horizontal);
  L9(horizontal_orDefault):
    st horizontal = horizontal_orDefault;
    drop_isMissing = missing.0(drop);
    if drop_isMissing then L10(FALSE) else L10(drop);
  L10(drop_orDefault):
    st drop = drop_orDefault;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L11(".") else L11(sep);
  L11(sep_orDefault):
    st sep = sep_orDefault;
    lex_order_isMissing = missing.0(lex_order);
    if lex_order_isMissing then L12(FALSE) else L12(lex_order);
  L12(lex_order_orDefault):
    st `lex.order` = lex_order_orDefault;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L30() else L31();
  L13(r10):
    c = `as.logical`(r10);
    if c then L14(c) else L32();
  L30():
    missing = ldf missing in base;
    r11 = dyn missing(<sym formula>);
    goto L13(r11);
  L31():
    r9 = dyn base(<sym formula>);
    goto L13(r9);
  L14(c1):
    c9 = `as.logical`(c1);
    if c9 then L38() else L16();
  L32():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L15(c5, r13):
    r15 = `!=`(r13, 3);
    c6 = `as.logical`(r15);
    c7 = `||`(c5, c6);
    goto L14(c7);
  L16():
    goto L17();
  L17():
    sym2 = ldf missing;
    base2 = ldf missing in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L42() else L43();
  L33():
    formula1 = ld formula;
    check L35() else D0();
  L34():
    r12 = dyn base1(<sym formula>);
    goto L15(c, r12);
  L38():
    stop = ldf stop;
    check L39() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  L18(r19):
    c10 = `as.logical`(r19);
    if c10 then L19(c10) else L44();
  L35():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r14 = dyn length(formula2);
    check L36() else D1();
  L39():
    r16 = dyn stop("'formula' missing or incorrect");
    check L40() else D3();
  L42():
    missing1 = ldf missing in base;
    r20 = dyn missing1(<sym xlab>);
    goto L18(r20);
  L43():
    r18 = dyn base2(<sym xlab>);
    goto L18(r18);
  D1():
    deopt 8 [c, r14];
  D3():
    deopt 15 [r16];
  L19(c11):
    c19 = `as.logical`(c11);
    if c19 then L48() else L21();
  L36():
    goto L15(c, r14);
  L40():
    goto L17();
  L44():
    sym3 = ldf missing;
    base3 = ldf missing in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L45() else L46();
  L20(c15, r22):
    c16 = `as.logical`(r22);
    c17 = `||`(c15, c16);
    goto L19(c17);
  L21():
    goto L22();
  L22():
    match_call = ldf `match.call`;
    check L50() else D4();
  L45():
    missing2 = ldf missing in base;
    r23 = dyn missing2(<sym ylab>);
    goto L20(c10, r23);
  L46():
    r21 = dyn base3(<sym ylab>);
    goto L20(c10, r21);
  L48():
    r24 = clos inner3806894621;
    st mklab = r24;
    goto L22();
  D4():
    deopt 31 [];
  L50():
    r26 = dyn match_call[`expand.dots`](FALSE);
    check L51() else D5();
  D5():
    deopt 34 [r26];
  L51():
    st m = r26;
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L23(r28):
    c21 = `as.logical`(r28);
    if c21 then L57() else L24();
  L52():
    eval = ldf eval;
    check L54() else D6();
  L53():
    r27 = dyn base4(<lang eval(`$`(m, data), parent.frame())>);
    goto L23(r27);
  D6():
    deopt 39 [];
  L24():
    goto L25();
  L25():
    l3 = ld m;
    c23 = `is.object`(l3);
    if c23 then L66() else L67(NULL, l3);
  L54():
    p5 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c20 = `is.object`(m1);
      if c20 then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r29 = `$`(m3, <sym data>);
      goto L0(r29);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p6 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r31 = dyn parent_frame();
      return r31;
    };
    r33 = dyn eval(p5, p6);
    check L55() else D7();
  L57():
    as_data_frame = ldf `as.data.frame`;
    check L58() else D9();
  D7():
    deopt 42 [r33];
  D9():
    deopt 46 [];
  L55():
    is_matrix = ldf `is.matrix` in base;
    r34 = dyn is_matrix(r33);
    check L56() else D8();
  L58():
    p7 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r36 = dyn as_data_frame(p7);
    check L59() else D10();
  L65(r46, dx5):
    st m = dx5;
    l6 = ld m;
    c24 = `is.object`(l6);
    if c24 then L70() else L71(r46, l6);
  L66():
    dr4 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L68() else L67(NULL, dr4);
  L67(r44, l5):
    r47 = `$<-`(l5, <sym lex.order>, NULL);
    goto L65(r44, r47);
  D8():
    deopt 44 [r34];
  D10():
    deopt 48 [r36];
  L56():
    goto L23(r34);
  L59():
    l = ld m;
    c22 = `is.object`(l);
    if c22 then L61() else L62(r36, l);
  L68():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L65(NULL, dx4);
  L69(r51, dx7):
    st m = dx7;
    l9 = ld m;
    c25 = `is.object`(l9);
    if c25 then L74() else L75(r51, l9);
  L70():
    dr6 = tryDispatchBuiltin.0("$<-", l6, r46);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L72() else L71(r46, dr6);
  L71(r49, l8):
    r52 = `$<-`(l8, <sym sep>, r46);
    goto L69(r49, r52);
  L60(r40, dx3):
    st m = dx3;
    goto L25();
  L61():
    dr2 = tryDispatchBuiltin.0("$<-", l, r36);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L63() else L62(r36, dr2);
  L62(r38, l2):
    r41 = `$<-`(l2, <sym data>, r36);
    goto L60(r38, r41);
  L72():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L69(r46, dx6);
  L73(r56, dx9):
    st m = dx9;
    l12 = ld m;
    ___ = ldf `$<-`;
    check L77() else D11();
  L74():
    dr8 = tryDispatchBuiltin.0("$<-", l9, r51);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L76() else L75(r51, dr8);
  L75(r54, l11):
    r57 = `$<-`(l11, <sym drop>, r51);
    goto L73(r54, r57);
  D11():
    deopt 66 [r56, l12, r56];
  L63():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L60(r36, dx2);
  L76():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L73(r51, dx8);
  L77():
    ddd1 = ld `...`;
    r58 = dyn ___[, , `...`, ](l12, NULL, ddd1, r56);
    check L78() else D12();
  D12():
    deopt 69 [r56, r58];
  L78():
    st m = r58;
    l13 = ld m;
    c26 = `is.object`(l13);
    if c26 then L80() else L81(NULL, l13);
  L79(r62, dx11):
    st m = dx11;
    l16 = ld m;
    c27 = `is.object`(l16);
    if c27 then L84() else L85(r62, l16);
  L80():
    dr10 = tryDispatchBuiltin.0("$<-", l13, NULL);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L82() else L81(NULL, dr10);
  L81(r60, l15):
    r63 = `$<-`(l15, <sym horizontal>, NULL);
    goto L79(r60, r63);
  L82():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L79(NULL, dx10);
  L83(r67, dx13):
    st m = dx13;
    l19 = ld m;
    c28 = `is.object`(l19);
    if c28 then L88() else L89(r67, l19);
  L84():
    dr12 = tryDispatchBuiltin.0("$<-", l16, r62);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L86() else L85(r62, dr12);
  L85(r65, l18):
    r68 = `$<-`(l18, <sym ann>, r62);
    goto L83(r65, r68);
  L86():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L83(r62, dx12);
  L87(r72, dx15):
    st m = dx15;
    l22 = ld m;
    c29 = `is.object`(l22);
    if c29 then L92() else L93(r72, l22);
  L88():
    dr14 = tryDispatchBuiltin.0("$<-", l19, r67);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L90() else L89(r67, dr14);
  L89(r70, l21):
    r73 = `$<-`(l21, <sym add>, r67);
    goto L87(r70, r73);
  L90():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L87(r67, dx14);
  L91(r77, dx17):
    st m = dx17;
    l25 = ld m;
    c30 = `is.object`(l25);
    if c30 then L96() else L97(r77, l25);
  L92():
    dr16 = tryDispatchBuiltin.0("$<-", l22, r72);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L94() else L93(r72, dr16);
  L93(r75, l24):
    r78 = `$<-`(l24, <sym ylab>, r72);
    goto L91(r75, r78);
  L94():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L91(r72, dx16);
  L95(dx19):
    st m = dx19;
    na_action1 = ld `na.action`;
    check L99() else D13();
  L96():
    dr18 = tryDispatchBuiltin.0("$<-", l25, r77);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L98() else L97(r77, dr18);
  L97(r80, l27):
    r83 = `$<-`(l27, <sym xlab>, r77);
    goto L95(r83);
  D13():
    deopt 88 [na_action1];
  L98():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L95(dx18);
  L99():
    na_action2 = force? na_action1;
    checkMissing(na_action2);
    l28 = ld m;
    c31 = `is.object`(l28);
    if c31 then L101() else L102(na_action2, l28);
  L100(dx21):
    st m = dx21;
    sym5 = ldf quote;
    base5 = ldf quote in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  L101():
    dr20 = tryDispatchBuiltin.0("$<-", l28, na_action2);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L103() else L102(na_action2, dr20);
  L102(na_action4, l30):
    r84 = `$<-`(l30, <sym na.action>, na_action2);
    goto L100(r84);
  L26(r86):
    l31 = ld m;
    c32 = `is.object`(l31);
    if c32 then L106() else L107(r86, l31);
  L103():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L100(dx20);
  L104():
    quote = ldf quote in base;
    r87 = dyn quote(<lang `::`(stats, model.frame.default)>);
    goto L26(r87);
  L105():
    r85 = dyn base5(<lang `::`(stats, model.frame.default)>);
    goto L26(r85);
  L27(dx23):
    st m = dx23;
    eval1 = ldf eval;
    check L109() else D14();
  L106():
    dr22 = tryDispatchBuiltin.0("[[<-", l31, r86);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L108() else L107(r86, dr22);
  L107(r89, l33):
    ____ = ldf `[[<-` in base;
    r92 = dyn ____(l33, r86, 1);
    goto L27(r92);
  D14():
    deopt 102 [];
  L108():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L27(dx22);
  L109():
    p8 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p9 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r94 = dyn parent_frame1();
      return r94;
    };
    r96 = dyn eval1(p8, p9);
    check L110() else D15();
  D15():
    deopt 105 [r96];
  L110():
    st mf = r96;
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L111() else L112();
  L28(r98):
    st response = r98;
    boxplot = ldf boxplot;
    check L118() else D19();
  L111():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L112():
    r97 = dyn base6(<lang attr(mf, "terms")>, "response");
    goto L28(r97);
  D19():
    deopt 121 [];
  L29(r100):
    attr1 = ldf attr in base;
    r102 = dyn attr1(r100, "response");
    check L117() else D18();
  L113():
    mf = ld mf;
    check L115() else D16();
  L114():
    r99 = dyn base7(<sym mf>, "terms");
    goto L29(r99);
  L118():
    p15 = prom<V +>{
      split = ldf split;
      p10 = prom<V +>{
        mf2 = ld mf;
        mf3 = force? mf2;
        checkMissing(mf3);
        c33 = `is.object`(mf3);
        if c33 then L1() else L2(mf3);
      L0(dx25):
        return dx25;
      L1():
        dr24 = tryDispatchBuiltin.1("[[", mf3);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(mf5):
        response = ld response;
        response1 = force? response;
        __ = ldf `[[` in base;
        r103 = dyn __(mf5, response1);
        goto L0(r103);
      L3():
        dx24 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx24);
      };
      p11 = prom<V +>{
        mf6 = ld mf;
        mf7 = force? mf6;
        checkMissing(mf7);
        c34 = `is.object`(mf7);
        if c34 then L1() else L2(mf7);
      L0(dx27):
        return dx27;
      L1():
        dr26 = tryDispatchBuiltin.1("[", mf7);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(mf9):
        response2 = ld response;
        response3 = force? response2;
        checkMissing(response3);
        r105 = `-`(<missing>, response3);
        __1 = ldf `[` in base;
        r106 = dyn __1(mf9, r105);
        goto L0(r106);
      L3():
        dx26 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx26);
      };
      p12 = prom<V +>{
        drop1 = ld drop;
        drop2 = force? drop1;
        checkMissing(drop2);
        return drop2;
      };
      p13 = prom<V +>{
        sep1 = ld sep;
        sep2 = force? sep1;
        checkMissing(sep2);
        return sep2;
      };
      p14 = prom<V +>{
        lex_order1 = ld `lex.order`;
        lex_order2 = force? lex_order1;
        checkMissing(lex_order2);
        return lex_order2;
      };
      r111 = dyn split[, , drop, sep, `lex.order`](p10, p11, p12, p13, p14);
      return r111;
    };
    p16 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p17 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p18 = prom<V +>{
      add3 = ld add;
      add4 = force? add3;
      checkMissing(add4);
      return add4;
    };
    p19 = prom<V +>{
      ann1 = ld ann;
      ann2 = force? ann1;
      checkMissing(ann2);
      return ann2;
    };
    p20 = prom<V +>{
      horizontal5 = ld horizontal;
      horizontal6 = force? horizontal5;
      checkMissing(horizontal6);
      return horizontal6;
    };
    ddd2 = ld `...`;
    r118 = dyn boxplot[, xlab, ylab, add, ann, horizontal, `...`](p15, p16, p17, p18, p19, p20, ddd2);
    check L119() else D20();
  D16():
    deopt 111 [mf];
  D18():
    deopt 118 [r102];
  D20():
    deopt 134 [r118];
  L115():
    mf1 = force? mf;
    checkMissing(mf1);
    attr = ldf attr in base;
    r101 = dyn attr(mf1, "terms");
    check L116() else D17();
  L117():
    goto L28(r102);
  L119():
    popenv;
    return r118;
  D17():
    deopt 115 [r101];
  L116():
    goto L29(r101);
  }
}
fun inner3806894621(y_var) {
  (reg y_var:*) -+> V { var y_var:*, reg y_var1:*, reg y_var2:V, reg c:L, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg mf:*, reg mf1:V, reg names:cls, reg r2:V, reg c1:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg response:*, reg response1:V, reg __:cls, reg r5:V, reg paste:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg mf2:*, reg mf3:V, reg names1:cls, reg r8:V, reg c2:L, reg r10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg response2:*, reg response3:V, reg r11:V, reg __1:cls, reg r12:V, reg p:p(V +), reg r14:V |
    mkenv;
    st y_var = y_var;
    y_var1 = ld y_var;
    check L3() else D0();
  D0():
    deopt 0 [y_var1];
  L3():
    y_var2 = force? y_var1;
    checkMissing(y_var2);
    c = `as.logical`(y_var2);
    if c then L4() else L0();
  L0():
    paste = ldf paste;
    check L14() else D4();
  L4():
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  D4():
    deopt 12 [];
  L1(r1):
    c1 = `is.object`(r1);
    if c1 then L9() else L10(r1);
  L5():
    mf = ld mf;
    check L7() else D1();
  L6():
    r = dyn base(<sym mf>);
    goto L1(r);
  L14():
    p = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r7):
      c2 = `is.object`(r7);
      if c2 then L4() else L5(r7);
    L2():
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      names1 = ldf names in base;
      r8 = dyn names1(mf3);
      goto L0(r8);
    L3():
      r6 = dyn base1(<sym mf>);
      goto L0(r6);
    L1(dx3):
      return dx3;
    L4():
      dr2 = tryDispatchBuiltin.1("[", r7);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L6() else L5(dr2);
    L5(r10):
      response2 = ld response;
      response3 = force? response2;
      checkMissing(response3);
      r11 = `-`(<missing>, response3);
      __1 = ldf `[` in base;
      r12 = dyn __1(r10, r11);
      goto L1(r12);
    L6():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L1(dx2);
    };
    r14 = dyn paste[, collapse](p, " : ");
    check L15() else D5();
  D1():
    deopt 4 [mf];
  D5():
    deopt 16 [r14];
  L2(dx1):
    popenv;
    return dx1;
  L7():
    mf1 = force? mf;
    checkMissing(mf1);
    names = ldf names in base;
    r2 = dyn names(mf1);
    check L8() else D2();
  L9():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(r4):
    response = ld response;
    check L12() else D3();
  L15():
    popenv;
    return r14;
  D2():
    deopt 7 [r2];
  D3():
    deopt 8 [r4, response];
  L8():
    goto L1(r2);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L12():
    response1 = force? response;
    __ = ldf `[` in base;
    r5 = dyn __(r4, response1);
    goto L2(r5);
  }
}