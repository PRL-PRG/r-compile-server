fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner751963283;
    st `friedman.test.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner751963283(formula, data, subset, `na.action`, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg formula1:*, reg formula2:V, reg length:cls, reg r7:V, reg r8:V, reg c1:L, reg c2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg c6:L, reg r10:V, reg formula3:*, reg formula4:V, reg c7:L, reg c9:L, reg formula6:V, reg dr:V, reg dc:L, reg dx:V, reg c11:L, reg dx1:V, reg __:cls, reg r11:V, reg length1:cls, reg r12:V, reg r13:V, reg c12:L, reg c13:V, reg c15:L, reg c16:V, reg formula7:*, reg formula8:V, reg c18:L, reg c20:L, reg formula10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg c22:L, reg dx3:V, reg __1:cls, reg r14:V, reg c23:L, reg c25:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx6:V, reg c27:L, reg dx7:V, reg __2:cls, reg r15:V, reg as_name:cls, reg r16:V, reg r17:V, reg c28:L, reg c29:V, reg c31:L, reg c32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r18:V, reg c36:L, reg r19:V, reg formula11:*, reg formula12:V, reg c37:L, reg c39:L, reg formula14:V, reg dr6:V, reg dc3:L, reg dx8:V, reg c41:L, reg dx9:V, reg __3:cls, reg r20:V, reg c42:L, reg c44:L, reg dx11:V, reg dr8:V, reg dc4:L, reg dx12:V, reg c46:L, reg dx13:V, reg __4:cls, reg r21:V, reg length2:cls, reg r22:V, reg r23:V, reg c47:L, reg c48:V, reg c50:L, reg c51:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg c55:L, reg r25:V, reg formula15:*, reg formula16:V, reg c56:L, reg c58:L, reg formula18:V, reg dr10:V, reg dc5:L, reg dx14:V, reg c60:L, reg dx15:V, reg __5:cls, reg r26:V, reg c61:L, reg c63:L, reg dx17:V, reg dr12:V, reg dc6:L, reg dx18:V, reg c65:L, reg dx19:V, reg __6:cls, reg r27:V, reg length3:cls, reg r28:V, reg r29:V, reg c66:L, reg c67:V, reg c69:L, reg stop1:cls, reg r30:V, reg as_name1:cls, reg r32:V, reg l:*, reg c70:L, reg r35:V, reg l3:*, reg r36:V, reg l4:*, reg dr14:V, reg dc7:L, reg dx20:V, reg r39:V, reg l6:*, reg r40:V, reg dx21:V, reg __7:cls, reg r41:V, reg c71:L, reg r43:V, reg l8:*, reg dx23:V, reg dr16:V, reg dc8:L, reg dx24:V, reg r45:V, reg l10:*, reg dx25:V, reg ____:cls, reg r46:V, reg c72:L, reg r48:V, reg l12:*, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg ____1:cls, reg r51:V, reg match_call:cls, reg r52:V, reg formula19:*, reg formula20:V, reg l13:*, reg c73:L, reg formula22:V, reg l15:*, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg r53:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg r55:V, reg eval:cls, reg m:*, reg m1:V, reg c74:L, reg m3:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg r56:V, reg p:p(V +), reg parent_frame:cls, reg r58:V, reg p1:p(V +), reg r60:V, reg is_matrix:cls, reg r61:V, reg c75:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p2:p(V +), reg r63:V, reg l16:*, reg c76:L, reg r65:V, reg l18:*, reg dr24:V, reg dc12:L, reg dx32:V, reg r67:V, reg dx33:V, reg r68:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r70:V, reg r71:V, reg quote:cls, reg r72:V, reg l19:*, reg c77:L, reg r74:V, reg l21:*, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg ____2:cls, reg r77:V, reg eval1:cls, reg m4:*, reg m5:V, reg p3:p(V +), reg parent_frame1:cls, reg r79:V, reg p4:p(V +), reg r81:V, reg paste:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r82:V, reg r83:V, reg mf:*, reg mf1:V, reg names:cls, reg r84:V, reg p5:p(V +), reg r86:V, reg friedman_test:cls, reg mf2:*, reg mf3:V, reg c78:L, reg mf5:V, reg dr28:V, reg dc14:L, reg dx36:V, reg dx37:V, reg __8:cls, reg r87:V, reg p6:p(V +), reg mf6:*, reg mf7:V, reg c79:L, reg mf9:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg __9:cls, reg r89:V, reg p7:p(V +), reg mf10:*, reg mf11:V, reg c80:L, reg mf13:V, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg __10:cls, reg r91:V, reg p8:p(V +), reg r93:V, reg DNAME:*, reg DNAME1:V, reg l22:*, reg c81:L, reg DNAME3:V, reg l24:*, reg dr34:V, reg dc17:L, reg dx42:V, reg dx43:V, reg r94:V, reg y:*, reg y1:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st `na.action` = na_action;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L28() else L29();
  L0(r1):
    c = `as.logical`(r1);
    if c then L30() else L1();
  L28():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L0(r2);
  L29():
    r = dyn base(<sym formula>);
    goto L0(r);
  L1():
    goto L2();
  L2():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L30():
    stop = ldf stop;
    check L31() else D0();
  D0():
    deopt 4 [];
  L3(r6):
    r8 = `!=`(r6, 3);
    c1 = `as.logical`(r8);
    if c1 then L4(c1) else L38();
  L31():
    r3 = dyn stop("formula missing");
    check L32() else D1();
  L34():
    formula1 = ld formula;
    check L36() else D2();
  L35():
    r5 = dyn base1(<sym formula>);
    goto L3(r5);
  D1():
    deopt 6 [r3];
  D2():
    deopt 11 [formula1];
  L4(c2):
    c15 = `as.logical`(c2);
    if c15 then L7(c15) else L47();
  L32():
    goto L2();
  L36():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r7 = dyn length(formula2);
    check L37() else D3();
  L38():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  D3():
    deopt 14 [r7];
  L5(c6, r10):
    r13 = `!=`(r10, 3);
    c12 = `as.logical`(r13);
    c13 = `||`(c6, c12);
    goto L4(c13);
  L7(c16):
    c31 = `as.logical`(c16);
    if c31 then L10(c31) else L58();
  L37():
    goto L3(r7);
  L39():
    formula3 = ld formula;
    check L41() else D4();
  L40():
    r9 = dyn base2(<lang `[[`(formula, 3)>);
    goto L5(c1, r9);
  L47():
    formula7 = ld formula;
    check L48() else D6();
  D4():
    deopt 19 [c1, formula3];
  D6():
    deopt 29 [c15, formula7];
  L10(c32):
    c50 = `as.logical`(c32);
    if c50 then L14(c50) else L70();
  L41():
    formula4 = force? formula3;
    checkMissing(formula4);
    c7 = `is.object`(formula4);
    if c7 then L42() else L43(c1, formula4);
  L48():
    formula8 = force? formula7;
    checkMissing(formula8);
    c18 = `is.object`(formula8);
    if c18 then L49() else L50(c15, formula8);
  L58():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L59() else L60();
  L6(c11, dx1):
    length1 = ldf length in base;
    r12 = dyn length1(dx1);
    check L45() else D5();
  L8(c22, dx3):
    c23 = `is.object`(dx3);
    if c23 then L52() else L53(c22, dx3);
  L11(c36, r19):
    r23 = `!=`(r19, 1);
    c47 = `as.logical`(r23);
    c48 = `||`(c36, c47);
    goto L10(c48);
  L14(c51):
    c69 = `as.logical`(c51);
    if c69 then L82() else L18();
  L42():
    dr = tryDispatchBuiltin.1("[[", formula4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L44() else L43(c1, dr);
  L43(c9, formula6):
    __ = ldf `[[` in base;
    r11 = dyn __(formula6, 3);
    goto L6(c9, r11);
  L49():
    dr2 = tryDispatchBuiltin.1("[[", formula8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L51() else L50(c15, dr2);
  L50(c20, formula10):
    __1 = ldf `[[` in base;
    r14 = dyn __1(formula10, 3);
    goto L8(c20, r14);
  L59():
    formula11 = ld formula;
    check L61() else D9();
  L60():
    r18 = dyn base3(<lang `[[`(`[[`(formula, 3), 2)>);
    goto L11(c31, r18);
  L70():
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L71() else L72();
  D5():
    deopt 25 [c11, r12];
  D9():
    deopt 44 [c31, formula11];
  L9(c27, dx7):
    as_name = ldf `as.name`;
    check L55() else D7();
  L15(c55, r25):
    r29 = `!=`(r25, 1);
    c66 = `as.logical`(r29);
    c67 = `||`(c55, c66);
    goto L14(c67);
  L18():
    goto L19();
  L19():
    as_name1 = ldf `as.name`;
    check L86() else D15();
  L44():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(c1, dx);
  L45():
    goto L5(c11, r12);
  L51():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(c15, dx2);
  L52():
    dr4 = tryDispatchBuiltin.1("[[", dx3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(c22, dr4);
  L53(c25, dx5):
    __2 = ldf `[[` in base;
    r15 = dyn __2(dx5, 1);
    goto L9(c25, r15);
  L61():
    formula12 = force? formula11;
    checkMissing(formula12);
    c37 = `is.object`(formula12);
    if c37 then L62() else L63(c31, formula12);
  L71():
    formula15 = ld formula;
    check L73() else D11();
  L72():
    r24 = dyn base4(<lang `[[`(`[[`(formula, 3), 3)>);
    goto L15(c50, r24);
  L82():
    stop1 = ldf stop;
    check L83() else D13();
  D7():
    deopt 37 [c27, dx7];
  D11():
    deopt 59 [c50, formula15];
  D13():
    deopt 73 [];
  D15():
    deopt 79 [];
  L12(c41, dx9):
    c42 = `is.object`(dx9);
    if c42 then L65() else L66(c41, dx9);
  L54():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L9(c22, dx6);
  L55():
    r16 = dyn as_name("|");
    check L56() else D8();
  L62():
    dr6 = tryDispatchBuiltin.1("[[", formula12);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L64() else L63(c31, dr6);
  L63(c39, formula14):
    __3 = ldf `[[` in base;
    r20 = dyn __3(formula14, 3);
    goto L12(c39, r20);
  L73():
    formula16 = force? formula15;
    checkMissing(formula16);
    c56 = `is.object`(formula16);
    if c56 then L74() else L75(c50, formula16);
  L83():
    r30 = dyn stop1("incorrect specification for 'formula'");
    check L84() else D14();
  L86():
    r32 = dyn as_name1("+");
    check L87() else D16();
  D8():
    deopt 39 [c27, dx7, r16];
  D14():
    deopt 75 [r30];
  D16():
    deopt 81 [r32];
  L13(c46, dx13):
    length2 = ldf length in base;
    r22 = dyn length2(dx13);
    check L68() else D10();
  L16(c60, dx15):
    c61 = `is.object`(dx15);
    if c61 then L77() else L78(c60, dx15);
  L56():
    r17 = `!=`(dx7, r16);
    c28 = `as.logical`(r17);
    c29 = `||`(c27, c28);
    goto L7(c29);
  L64():
    dx8 = getTryDispatchBuiltinValue(dr6);
    goto L12(c31, dx8);
  L65():
    dr8 = tryDispatchBuiltin.1("[[", dx9);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L67() else L66(c41, dr8);
  L66(c44, dx11):
    __4 = ldf `[[` in base;
    r21 = dyn __4(dx11, 2);
    goto L13(c44, r21);
  L74():
    dr10 = tryDispatchBuiltin.1("[[", formula16);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L76() else L75(c50, dr10);
  L75(c58, formula18):
    __5 = ldf `[[` in base;
    r26 = dyn __5(formula18, 3);
    goto L16(c58, r26);
  L84():
    goto L19();
  L87():
    l = ld formula;
    c70 = `is.object`(l);
    if c70 then L88() else L89(r32, l, r32, l);
  D10():
    deopt 53 [c46, r22];
  L17(c65, dx19):
    length3 = ldf length in base;
    r28 = dyn length3(dx19);
    check L80() else D12();
  L20(r39, l6, r40, dx21):
    c71 = `is.object`(dx21);
    if c71 then L91() else L92(r39, l6, dx21);
  L67():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L13(c41, dx12);
  L68():
    goto L11(c46, r22);
  L76():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L16(c50, dx14);
  L77():
    dr12 = tryDispatchBuiltin.1("[[", dx15);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L79() else L78(c60, dr12);
  L78(c63, dx17):
    __6 = ldf `[[` in base;
    r27 = dyn __6(dx17, 3);
    goto L17(c63, r27);
  L88():
    dr14 = tryDispatchBuiltin.1("[[", l);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L90() else L89(r32, l, r32, dr14);
  L89(r35, l3, r36, l4):
    __7 = ldf `[[` in base;
    r41 = dyn __7(l4, 3);
    goto L20(r35, l3, r36, r41);
  D12():
    deopt 68 [c65, r28];
  L21(r45, l10, dx25):
    c72 = `is.object`(l10);
    if c72 then L94() else L95(r45, l10);
  L79():
    dx18 = getTryDispatchBuiltinValue(dr12);
    goto L17(c60, dx18);
  L80():
    goto L15(c65, r28);
  L90():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L20(r32, l, r32, dx20);
  L91():
    dr16 = tryDispatchBuiltin.0("[[<-", dx21, r40);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L93() else L92(r39, l6, dr16);
  L92(r43, l8, dx23):
    ____ = ldf `[[<-` in base;
    r46 = dyn ____(dx23, r40, 1);
    goto L21(r43, l8, r46);
  L22(dx27):
    st formula = dx27;
    match_call = ldf `match.call`;
    check L97() else D17();
  L93():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L21(r39, l6, dx24);
  L94():
    dr18 = tryDispatchBuiltin.0("[[<-", l10, dx25);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L96() else L95(r45, dr18);
  L95(r48, l12):
    ____1 = ldf `[[<-` in base;
    r51 = dyn ____1(l12, dx25, 3);
    goto L22(r51);
  D17():
    deopt 96 [];
  L96():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L22(dx26);
  L97():
    r52 = dyn match_call[`expand.dots`](FALSE);
    check L98() else D18();
  D18():
    deopt 99 [r52];
  L98():
    st m = r52;
    formula19 = ld formula;
    check L99() else D19();
  D19():
    deopt 101 [formula19];
  L99():
    formula20 = force? formula19;
    checkMissing(formula20);
    l13 = ld m;
    c73 = `is.object`(l13);
    if c73 then L101() else L102(formula20, l13);
  L100(dx29):
    st m = dx29;
    sym5 = ldf `is.matrix`;
    base5 = ldf `is.matrix` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L104() else L105();
  L101():
    dr20 = tryDispatchBuiltin.0("$<-", l13, formula20);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L103() else L102(formula20, dr20);
  L102(formula22, l15):
    r53 = `$<-`(l15, <sym formula>, formula20);
    goto L100(r53);
  L23(r55):
    c75 = `as.logical`(r55);
    if c75 then L109() else L24();
  L103():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L100(dx28);
  L104():
    eval = ldf eval;
    check L106() else D20();
  L105():
    r54 = dyn base5(<lang eval(`$`(m, data), parent.frame())>);
    goto L23(r54);
  D20():
    deopt 109 [];
  L24():
    goto L25();
  L25():
    sym6 = ldf quote;
    base6 = ldf quote in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L117() else L118();
  L106():
    p = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c74 = `is.object`(m1);
      if c74 then L1() else L2(m1);
    L0(dx31):
      return dx31;
    L1():
      dr22 = tryDispatchBuiltin.1("$", m1);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(m3):
      r56 = `$`(m3, <sym data>);
      goto L0(r56);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx30);
    };
    p1 = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r58 = dyn parent_frame();
      return r58;
    };
    r60 = dyn eval(p, p1);
    check L107() else D21();
  L109():
    as_data_frame = ldf `as.data.frame`;
    check L110() else D23();
  D21():
    deopt 112 [r60];
  D23():
    deopt 116 [];
  L26(r71):
    l19 = ld m;
    c77 = `is.object`(l19);
    if c77 then L119() else L120(r71, l19);
  L107():
    is_matrix = ldf `is.matrix` in base;
    r61 = dyn is_matrix(r60);
    check L108() else D22();
  L110():
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r63 = dyn as_data_frame(p2);
    check L111() else D24();
  L117():
    quote = ldf quote in base;
    r72 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L26(r72);
  L118():
    r70 = dyn base6(<lang `::`(stats, model.frame)>);
    goto L26(r70);
  D22():
    deopt 114 [r61];
  D24():
    deopt 118 [r63];
  L27(dx35):
    st m = dx35;
    eval1 = ldf eval;
    check L122() else D25();
  L108():
    goto L23(r61);
  L111():
    l16 = ld m;
    c76 = `is.object`(l16);
    if c76 then L113() else L114(r63, l16);
  L119():
    dr26 = tryDispatchBuiltin.0("[[<-", l19, r71);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L121() else L120(r71, dr26);
  L120(r74, l21):
    ____2 = ldf `[[<-` in base;
    r77 = dyn ____2(l21, r71, 1);
    goto L27(r77);
  D25():
    deopt 133 [];
  L112(r67, dx33):
    st m = dx33;
    goto L25();
  L113():
    dr24 = tryDispatchBuiltin.0("$<-", l16, r63);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L115() else L114(r63, dr24);
  L114(r65, l18):
    r68 = `$<-`(l18, <sym data>, r63);
    goto L112(r65, r68);
  L121():
    dx34 = getTryDispatchBuiltinValue(dr26);
    goto L27(dx34);
  L122():
    p3 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p4 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r79 = dyn parent_frame1();
      return r79;
    };
    r81 = dyn eval1(p3, p4);
    check L123() else D26();
  D26():
    deopt 136 [r81];
  L115():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L112(r63, dx32);
  L123():
    st mf = r81;
    paste = ldf paste;
    check L124() else D27();
  D27():
    deopt 139 [];
  L124():
    p5 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r83):
      return r83;
    L1():
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      names = ldf names in base;
      r84 = dyn names(mf1);
      goto L0(r84);
    L2():
      r82 = dyn base7(<sym mf>);
      goto L0(r82);
    };
    r86 = dyn paste[, collapse](p5, " and ");
    check L125() else D28();
  D28():
    deopt 143 [r86];
  L125():
    st DNAME = r86;
    friedman_test = ldf `friedman.test`;
    check L126() else D29();
  D29():
    deopt 146 [];
  L126():
    p6 = prom<V +>{
      mf2 = ld mf;
      mf3 = force? mf2;
      checkMissing(mf3);
      c78 = `is.object`(mf3);
      if c78 then L1() else L2(mf3);
    L0(dx37):
      return dx37;
    L1():
      dr28 = tryDispatchBuiltin.1("[[", mf3);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(mf5):
      __8 = ldf `[[` in base;
      r87 = dyn __8(mf5, 1);
      goto L0(r87);
    L3():
      dx36 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx36);
    };
    p7 = prom<V +>{
      mf6 = ld mf;
      mf7 = force? mf6;
      checkMissing(mf7);
      c79 = `is.object`(mf7);
      if c79 then L1() else L2(mf7);
    L0(dx39):
      return dx39;
    L1():
      dr30 = tryDispatchBuiltin.1("[[", mf7);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(mf9):
      __9 = ldf `[[` in base;
      r89 = dyn __9(mf9, 2);
      goto L0(r89);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx38);
    };
    p8 = prom<V +>{
      mf10 = ld mf;
      mf11 = force? mf10;
      checkMissing(mf11);
      c80 = `is.object`(mf11);
      if c80 then L1() else L2(mf11);
    L0(dx41):
      return dx41;
    L1():
      dr32 = tryDispatchBuiltin.1("[[", mf11);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L3() else L2(dr32);
    L2(mf13):
      __10 = ldf `[[` in base;
      r91 = dyn __10(mf13, 3);
      goto L0(r91);
    L3():
      dx40 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx40);
    };
    r93 = dyn friedman_test(p6, p7, p8);
    check L127() else D30();
  D30():
    deopt 150 [r93];
  L127():
    st y = r93;
    DNAME = ld DNAME;
    check L128() else D31();
  D31():
    deopt 152 [DNAME];
  L128():
    DNAME1 = force? DNAME;
    checkMissing(DNAME1);
    l22 = ld y;
    c81 = `is.object`(l22);
    if c81 then L130() else L131(DNAME1, l22);
  L129(dx43):
    st y = dx43;
    y = ld y;
    check L133() else D32();
  L130():
    dr34 = tryDispatchBuiltin.0("$<-", l22, DNAME1);
    dc17 = getTryDispatchBuiltinDispatched(dr34);
    if dc17 then L132() else L131(DNAME1, dr34);
  L131(DNAME3, l24):
    r94 = `$<-`(l24, <sym data.name>, DNAME1);
    goto L129(r94);
  D32():
    deopt 157 [y];
  L132():
    dx42 = getTryDispatchBuiltinValue(dr34);
    goto L129(dx42);
  L133():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}