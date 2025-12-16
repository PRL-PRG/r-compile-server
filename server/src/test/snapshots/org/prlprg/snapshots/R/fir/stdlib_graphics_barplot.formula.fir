fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner339434543;
    st `barplot.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner339434543(formula, data, subset, `na.action`, horiz, xlab, ylab, `...`) {
  (reg formula:*, reg data:*, reg subset:*, reg na_action:*, reg horiz:*, reg xlab:*, reg ylab:*, reg ddd:dots) -+> V { var formula:*, var data:*, var subset:*, var `na.action`:*, var horiz:*, reg horiz_isMissing:L, reg horiz_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg c1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg c5:L, reg r4:V, reg formula1:*, reg formula2:V, reg length:cls, reg r5:V, reg r6:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r7:V, reg match_call:cls, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg eval:cls, reg m:*, reg m1:V, reg c10:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg p:p(V +), reg parent_frame:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg is_matrix:cls, reg r17:V, reg c11:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p2:p(V +), reg r19:V, reg l:*, reg c12:L, reg r21:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r23:V, reg dx3:V, reg r24:V, reg l3:*, reg c13:L, reg r27:dots, reg l5:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r29:dots, reg dx5:V, reg r30:V, reg l6:*, reg c14:L, reg r32:dots, reg l8:*, reg dr6:V, reg dc3:L, reg dx6:V, reg r34:dots, reg dx7:V, reg r35:V, reg l9:*, reg c15:L, reg r37:dots, reg l11:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r39:dots, reg dx9:V, reg r40:V, reg l12:*, reg ___:cls, reg ddd1:dots?, reg r41:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg quote:cls, reg r44:V, reg l13:*, reg c16:L, reg r46:V, reg l15:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ____:cls, reg r49:V, reg eval1:cls, reg m4:*, reg m5:V, reg p3:p(V +), reg parent_frame1:cls, reg r51:V, reg p4:p(V +), reg r53:V, reg ncol:cls, reg mf:*, reg mf1:V, reg c17:L, reg mf3:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __:cls, reg r54:V, reg p5:p(V +), reg r56:V, reg r57:V, reg c18:L, reg c19:V, reg ncol1:cls, reg mf4:*, reg mf5:V, reg c21:L, reg mf7:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg __1:cls, reg r58:V, reg p6:p(V +), reg r60:V, reg r61:V, reg c22:L, reg c23:V, reg c25:L, reg stop1:cls, reg r62:V, reg anyDuplicated:cls, reg mf8:*, reg mf9:V, reg c26:L, reg mf11:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg __2:cls, reg r64:V, reg p7:p(V +), reg r66:V, reg c27:L, reg stop2:cls, reg r67:V, reg horiz1:*, reg horiz2:V, reg c28:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r69:V, reg r70:V, reg ylab1:*, reg ylab2:V, reg c29:V, reg c30:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r71:V, reg r72:V, reg mf12:*, reg mf13:V, reg names:cls, reg r73:V, reg c31:L, reg r75:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg ncol2:cls, reg mf14:*, reg mf15:V, reg p8:p(V +), reg r77:V, reg __3:cls, reg r78:V, reg dx20:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r79:V, reg r80:V, reg xlab1:*, reg xlab2:V, reg c32:V, reg c33:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r81:V, reg r82:V, reg mf16:*, reg mf17:V, reg names1:cls, reg r83:V, reg c34:L, reg r85:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg ncol3:cls, reg mf18:*, reg mf19:V, reg p9:p(V +), reg r87:V, reg __4:cls, reg r88:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r89:V, reg r90:V, reg mf20:*, reg mf21:V, reg c35:L, reg mf23:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg __5:cls, reg r91:V, reg is_matrix1:cls, reg r92:V, reg c36:L, reg ncol4:cls, reg mf24:*, reg mf25:V, reg c37:L, reg mf27:V, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg __6:cls, reg r93:V, reg p10:p(V +), reg r95:V, reg r96:V, reg c38:L, reg stop3:cls, reg r97:V, reg t:cls, reg mf28:*, reg mf29:V, reg c39:L, reg mf31:V, reg dr26:V, reg dc13:L, reg dx28:V, reg dx29:V, reg __7:cls, reg r99:V, reg p11:p(V +), reg r101:V, reg mf32:*, reg mf33:V, reg c40:L, reg mf35:V, reg dr28:V, reg dc14:L, reg dx30:V, reg dx31:V, reg ncol5:cls, reg mf36:*, reg mf37:V, reg p12:p(V +), reg r103:V, reg __8:cls, reg r104:V, reg l16:*, reg colnames__:cls, reg r105:V, reg barplot_default:cls, reg lhs:*, reg lhs1:V, reg p13:p(V +), reg horiz3:*, reg horiz4:V, reg p14:p(V +), reg xlab3:*, reg xlab4:V, reg p15:p(V +), reg ylab3:*, reg ylab4:V, reg p16:p(V +), reg ddd2:dots?, reg r110:V, reg horiz5:*, reg horiz6:V, reg c41:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r111:V, reg r112:V, reg xlab5:*, reg xlab6:V, reg c42:V, reg c43:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r113:V, reg r114:V, reg mf38:*, reg mf39:V, reg names2:cls, reg r115:V, reg c44:L, reg r117:V, reg dr30:V, reg dc15:L, reg dx32:V, reg dx33:V, reg __9:cls, reg r118:V, reg dx34:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r119:V, reg r120:V, reg ylab5:*, reg ylab6:V, reg c45:V, reg c46:L, reg sym12:cls, reg base12:cls, reg guard12:L, reg r121:V, reg r122:V, reg mf40:*, reg mf41:V, reg names3:cls, reg r123:V, reg c47:L, reg r125:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg __10:cls, reg r126:V, reg barplot_default1:cls, reg __11:cls, reg r127:V, reg r128:cls, reg mf42:*, reg mf43:V, reg p17:p(V +), reg r130:V, reg p18:p(V +), reg horiz7:*, reg horiz8:V, reg p19:p(V +), reg xlab7:*, reg xlab8:V, reg p20:p(V +), reg ylab7:*, reg ylab8:V, reg p21:p(V +), reg ddd3:dots?, reg r135:V |
    mkenv;
    st formula = formula;
    st data = data;
    st subset = subset;
    st `na.action` = na_action;
    horiz_isMissing = missing.0(horiz);
    if horiz_isMissing then L0(FALSE) else L0(horiz);
  L0(horiz_orDefault):
    st horiz = horiz_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L1(NULL) else L1(xlab);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2(NULL) else L2(ylab);
  L2(ylab_orDefault):
    st ylab = ylab_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L46() else L47();
  L3(r1):
    c = `as.logical`(r1);
    if c then L4(c) else L48();
  L46():
    missing = ldf missing in base;
    r2 = dyn missing(<sym formula>);
    goto L3(r2);
  L47():
    r = dyn base(<sym formula>);
    goto L3(r);
  L4(c1):
    c9 = `as.logical`(c1);
    if c9 then L54() else L6();
  L48():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L5(c5, r4):
    r6 = `!=`(r4, 3);
    c6 = `as.logical`(r6);
    c7 = `||`(c5, c6);
    goto L4(c7);
  L6():
    goto L7();
  L7():
    match_call = ldf `match.call`;
    check L58() else D4();
  L49():
    formula1 = ld formula;
    check L51() else D0();
  L50():
    r3 = dyn base1(<sym formula>);
    goto L5(c, r3);
  L54():
    stop = ldf stop;
    check L55() else D2();
  D0():
    deopt 5 [c, formula1];
  D2():
    deopt 13 [];
  D4():
    deopt 19 [];
  L51():
    formula2 = force? formula1;
    checkMissing(formula2);
    length = ldf length in base;
    r5 = dyn length(formula2);
    check L52() else D1();
  L55():
    r7 = dyn stop("'formula' missing or incorrect");
    check L56() else D3();
  L58():
    r9 = dyn match_call[`expand.dots`](FALSE);
    check L59() else D5();
  D1():
    deopt 8 [c, r5];
  D3():
    deopt 15 [r7];
  D5():
    deopt 22 [r9];
  L52():
    goto L5(c, r5);
  L56():
    goto L7();
  L59():
    st m = r9;
    sym2 = ldf `is.matrix`;
    base2 = ldf `is.matrix` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L60() else L61();
  L8(r11):
    c11 = `as.logical`(r11);
    if c11 then L65() else L9();
  L60():
    eval = ldf eval;
    check L62() else D6();
  L61():
    r10 = dyn base2(<lang eval(`$`(m, data), parent.frame())>);
    goto L8(r10);
  D6():
    deopt 27 [];
  L9():
    goto L10();
  L10():
    l3 = ld m;
    c13 = `is.object`(l3);
    if c13 then L74() else L75(NULL, l3);
  L62():
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
    check L63() else D7();
  L65():
    as_data_frame = ldf `as.data.frame`;
    check L66() else D9();
  D7():
    deopt 30 [r16];
  D9():
    deopt 34 [];
  L63():
    is_matrix = ldf `is.matrix` in base;
    r17 = dyn is_matrix(r16);
    check L64() else D8();
  L66():
    p2 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r19 = dyn as_data_frame(p2);
    check L67() else D10();
  L73(r29, dx5):
    st m = dx5;
    l6 = ld m;
    c14 = `is.object`(l6);
    if c14 then L78() else L79(r29, l6);
  L74():
    dr4 = tryDispatchBuiltin.0("$<-", l3, NULL);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L76() else L75(NULL, dr4);
  L75(r27, l5):
    r30 = `$<-`(l5, <sym ylab>, NULL);
    goto L73(r27, r30);
  D8():
    deopt 32 [r17];
  D10():
    deopt 36 [r19];
  L64():
    goto L8(r17);
  L67():
    l = ld m;
    c12 = `is.object`(l);
    if c12 then L69() else L70(r19, l);
  L76():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L73(NULL, dx4);
  L77(r34, dx7):
    st m = dx7;
    l9 = ld m;
    c15 = `is.object`(l9);
    if c15 then L82() else L83(r34, l9);
  L78():
    dr6 = tryDispatchBuiltin.0("$<-", l6, r29);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L80() else L79(r29, dr6);
  L79(r32, l8):
    r35 = `$<-`(l8, <sym xlab>, r29);
    goto L77(r32, r35);
  L68(r23, dx3):
    st m = dx3;
    goto L10();
  L69():
    dr2 = tryDispatchBuiltin.0("$<-", l, r19);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L71() else L70(r19, dr2);
  L70(r21, l2):
    r24 = `$<-`(l2, <sym data>, r19);
    goto L68(r21, r24);
  L80():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L77(r29, dx6);
  L81(r39, dx9):
    st m = dx9;
    l12 = ld m;
    ___ = ldf `$<-`;
    check L85() else D11();
  L82():
    dr8 = tryDispatchBuiltin.0("$<-", l9, r34);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L84() else L83(r34, dr8);
  L83(r37, l11):
    r40 = `$<-`(l11, <sym horiz>, r34);
    goto L81(r37, r40);
  D11():
    deopt 54 [r39, l12, r39];
  L71():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L68(r19, dx2);
  L84():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L81(r34, dx8);
  L85():
    ddd1 = ld `...`;
    r41 = dyn ___[, , `...`, ](l12, NULL, ddd1, r39);
    check L86() else D12();
  D12():
    deopt 57 [r39, r41];
  L86():
    st m = r41;
    sym3 = ldf quote;
    base3 = ldf quote in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L87() else L88();
  L11(r43):
    l13 = ld m;
    c16 = `is.object`(l13);
    if c16 then L89() else L90(r43, l13);
  L87():
    quote = ldf quote in base;
    r44 = dyn quote(<lang `::`(stats, model.frame)>);
    goto L11(r44);
  L88():
    r42 = dyn base3(<lang `::`(stats, model.frame)>);
    goto L11(r42);
  L12(dx11):
    st m = dx11;
    eval1 = ldf eval;
    check L92() else D13();
  L89():
    dr10 = tryDispatchBuiltin.0("[[<-", l13, r43);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L91() else L90(r43, dr10);
  L90(r46, l15):
    ____ = ldf `[[<-` in base;
    r49 = dyn ____(l15, r43, 1);
    goto L12(r49);
  D13():
    deopt 68 [];
  L91():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L12(dx10);
  L92():
    p3 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    p4 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r51 = dyn parent_frame1();
      return r51;
    };
    r53 = dyn eval1(p3, p4);
    check L93() else D14();
  D14():
    deopt 71 [r53];
  L93():
    st mf = r53;
    ncol = ldf ncol;
    check L94() else D15();
  D15():
    deopt 74 [];
  L94():
    p5 = prom<V +>{
      mf = ld mf;
      mf1 = force? mf;
      checkMissing(mf1);
      c17 = `is.object`(mf1);
      if c17 then L1() else L2(mf1);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", mf1);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(mf3):
      __ = ldf `[` in base;
      r54 = dyn __(mf3, -1);
      goto L0(r54);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r56 = dyn ncol(p5);
    check L95() else D16();
  D16():
    deopt 76 [r56];
  L95():
    r57 = `==`(r56, 0);
    c18 = `as.logical`(r57);
    if c18 then L13(c18) else L96();
  L13(c19):
    c25 = `as.logical`(c19);
    if c25 then L100() else L14();
  L96():
    ncol1 = ldf ncol;
    check L97() else D17();
  D17():
    deopt 80 [c18];
  L14():
    goto L15();
  L15():
    anyDuplicated = ldf anyDuplicated;
    check L104() else D21();
  L97():
    p6 = prom<V +>{
      mf4 = ld mf;
      mf5 = force? mf4;
      checkMissing(mf5);
      c21 = `is.object`(mf5);
      if c21 then L1() else L2(mf5);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", mf5);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(mf7):
      __1 = ldf `[` in base;
      r58 = dyn __1(mf7, -1);
      goto L0(r58);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r60 = dyn ncol1(p6);
    check L98() else D18();
  L100():
    stop1 = ldf stop;
    check L101() else D19();
  D18():
    deopt 82 [c18, r60];
  D19():
    deopt 87 [];
  D21():
    deopt 93 [];
  L98():
    r61 = `>=`(r60, 3);
    c22 = `as.logical`(r61);
    c23 = `||`(c18, c22);
    goto L13(c23);
  L101():
    r62 = dyn stop1("formula must specify 1 or 2 categorical variables");
    check L102() else D20();
  L104():
    p7 = prom<V +>{
      mf8 = ld mf;
      mf9 = force? mf8;
      checkMissing(mf9);
      c26 = `is.object`(mf9);
      if c26 then L1() else L2(mf9);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("[", mf9);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(mf11):
      __2 = ldf `[` in base;
      r64 = dyn __2(mf11, -1);
      goto L0(r64);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r66 = dyn anyDuplicated(p7);
    check L105() else D22();
  D20():
    deopt 89 [r62];
  D22():
    deopt 95 [r66];
  L102():
    goto L15();
  L105():
    c27 = `as.logical`(r66);
    if c27 then L106() else L16();
  L16():
    goto L17();
  L17():
    horiz1 = ld horiz;
    check L110() else D25();
  L106():
    stop2 = ldf stop;
    check L107() else D23();
  D23():
    deopt 97 [];
  D25():
    deopt 102 [horiz1];
  L107():
    r67 = dyn stop2("duplicated categorical values - try another formula or subset");
    check L108() else D24();
  L110():
    horiz2 = force? horiz1;
    checkMissing(horiz2);
    c28 = `as.logical`(horiz2);
    if c28 then L111() else L18();
  D24():
    deopt 99 [r67];
  L18():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L127() else L128();
  L24():
    sym8 = ldf `is.matrix`;
    base8 = ldf `is.matrix` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L141() else L142();
  L108():
    goto L17();
  L111():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L112() else L113();
  L19(r70):
    c30 = `as.logical`(r70);
    if c30 then L115() else L20();
  L25(r80):
    c33 = `as.logical`(r80);
    if c33 then L130() else L26();
  L29(r90):
    c36 = `as.logical`(r90);
    if c36 then L148() else L31();
  L112():
    ylab1 = ld ylab;
    check L114() else D26();
  L113():
    r69 = dyn base4(<sym ylab>);
    goto L19(r69);
  L127():
    xlab1 = ld xlab;
    check L129() else D31();
  L128():
    r79 = dyn base6(<sym xlab>);
    goto L25(r79);
  L141():
    mf20 = ld mf;
    check L143() else D36();
  L142():
    r89 = dyn base8(<lang `[[`(mf, 1)>);
    goto L29(r89);
  D26():
    deopt 105 [ylab1];
  D31():
    deopt 123 [xlab1];
  D36():
    deopt 142 [mf20];
  L20():
    goto L23(NULL);
  L23(dx20):
    goto L24();
  L26():
    goto L24();
  L31():
    horiz5 = ld horiz;
    check L168() else D51();
  L114():
    ylab2 = force? ylab1;
    checkMissing(ylab2);
    c29 = `==`(ylab2, NULL);
    goto L19(c29);
  L115():
    sym5 = ldf names;
    base5 = ldf names in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L116() else L117();
  L129():
    xlab2 = force? xlab1;
    checkMissing(xlab2);
    c32 = `==`(xlab2, NULL);
    goto L25(c32);
  L130():
    sym7 = ldf names;
    base7 = ldf names in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L131() else L132();
  L143():
    mf21 = force? mf20;
    checkMissing(mf21);
    c35 = `is.object`(mf21);
    if c35 then L144() else L145(mf21);
  L148():
    ncol4 = ldf ncol;
    check L149() else D38();
  D38():
    deopt 150 [];
  D51():
    deopt 189 [horiz5];
  L21(r72):
    c31 = `is.object`(r72);
    if c31 then L120() else L121(r72);
  L27(r82):
    c34 = `is.object`(r82);
    if c34 then L135() else L136(r82);
  L30(dx25):
    is_matrix1 = ldf `is.matrix` in base;
    r92 = dyn is_matrix1(dx25);
    check L147() else D37();
  L116():
    mf12 = ld mf;
    check L118() else D27();
  L117():
    r71 = dyn base5(<sym mf>);
    goto L21(r71);
  L131():
    mf16 = ld mf;
    check L133() else D32();
  L132():
    r81 = dyn base7(<sym mf>);
    goto L27(r81);
  L144():
    dr22 = tryDispatchBuiltin.1("[[", mf21);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L146() else L145(dr22);
  L145(mf23):
    __5 = ldf `[[` in base;
    r91 = dyn __5(mf23, 1);
    goto L30(r91);
  L149():
    p10 = prom<V +>{
      mf24 = ld mf;
      mf25 = force? mf24;
      checkMissing(mf25);
      c37 = `is.object`(mf25);
      if c37 then L1() else L2(mf25);
    L0(dx27):
      return dx27;
    L1():
      dr24 = tryDispatchBuiltin.1("[", mf25);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L3() else L2(dr24);
    L2(mf27):
      __6 = ldf `[` in base;
      r93 = dyn __6(mf27, -1);
      goto L0(r93);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx26);
    };
    r95 = dyn ncol4(p10);
    check L150() else D39();
  L168():
    horiz6 = force? horiz5;
    checkMissing(horiz6);
    c41 = `as.logical`(horiz6);
    if c41 then L169() else L35();
  D27():
    deopt 110 [mf12];
  D32():
    deopt 128 [mf16];
  D37():
    deopt 148 [r92];
  D39():
    deopt 152 [r95];
  L22(dx19):
    st ylab = dx19;
    goto L23(dx19);
  L28(dx23):
    st xlab = dx23;
    goto L24();
  L35():
    sym11 = ldf `is.null`;
    base11 = ldf `is.null` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L183() else L184();
  L41():
    barplot_default1 = ldf `barplot.default`;
    check L195() else D58();
  L118():
    mf13 = force? mf12;
    checkMissing(mf13);
    names = ldf names in base;
    r73 = dyn names(mf13);
    check L119() else D28();
  L120():
    dr18 = tryDispatchBuiltin.1("[", r72);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L122() else L121(dr18);
  L121(r75):
    ncol2 = ldf ncol;
    check L123() else D29();
  L133():
    mf17 = force? mf16;
    checkMissing(mf17);
    names1 = ldf names in base;
    r83 = dyn names1(mf17);
    check L134() else D33();
  L135():
    dr20 = tryDispatchBuiltin.1("[", r82);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L137() else L136(dr20);
  L136(r85):
    ncol3 = ldf ncol;
    check L138() else D34();
  L146():
    dx24 = getTryDispatchBuiltinValue(dr22);
    goto L30(dx24);
  L147():
    goto L29(r92);
  L150():
    r96 = `!=`(r95, 1);
    c38 = `as.logical`(r96);
    if c38 then L151() else L32();
  L169():
    sym9 = ldf `is.null`;
    base9 = ldf `is.null` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L170() else L171();
  D28():
    deopt 113 [r73];
  D29():
    deopt 115 [r75];
  D33():
    deopt 131 [r83];
  D34():
    deopt 133 [r85];
  D58():
    deopt 224 [];
  L32():
    goto L33();
  L33():
    t = ldf t;
    check L155() else D42();
  L36(r112):
    c43 = `as.logical`(r112);
    if c43 then L173() else L37();
  L42(r120):
    c46 = `as.logical`(r120);
    if c46 then L186() else L43();
  L119():
    goto L21(r73);
  L122():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L22(dx18);
  L123():
    p8 = prom<V +>{
      mf14 = ld mf;
      mf15 = force? mf14;
      checkMissing(mf15);
      return mf15;
    };
    r77 = dyn ncol2(p8);
    check L124() else D30();
  L134():
    goto L27(r83);
  L137():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L28(dx22);
  L138():
    p9 = prom<V +>{
      mf18 = ld mf;
      mf19 = force? mf18;
      checkMissing(mf19);
      return mf19;
    };
    r87 = dyn ncol3(p9);
    check L139() else D35();
  L151():
    stop3 = ldf stop;
    check L152() else D40();
  L170():
    xlab5 = ld xlab;
    check L172() else D52();
  L171():
    r111 = dyn base9(<sym xlab>);
    goto L36(r111);
  L183():
    ylab5 = ld ylab;
    check L185() else D55();
  L184():
    r119 = dyn base11(<sym ylab>);
    goto L42(r119);
  L195():
    p18 = prom<V +>{
      __11 = ldf `::`;
      r127 = dyn __11("stats", "xtabs");
      checkFun.0(r127);
      r128 = r127 as cls;
      p17 = prom<V +>{
        mf42 = ld mf;
        mf43 = force? mf42;
        checkMissing(mf43);
        return mf43;
      };
      r130 = dyn r128[, addNA](p17, TRUE);
      return r130;
    };
    p19 = prom<V +>{
      horiz7 = ld horiz;
      horiz8 = force? horiz7;
      checkMissing(horiz8);
      return horiz8;
    };
    p20 = prom<V +>{
      xlab7 = ld xlab;
      xlab8 = force? xlab7;
      checkMissing(xlab8);
      return xlab8;
    };
    p21 = prom<V +>{
      ylab7 = ld ylab;
      ylab8 = force? ylab7;
      checkMissing(ylab8);
      return ylab8;
    };
    ddd3 = ld `...`;
    r135 = dyn barplot_default1[, horiz, xlab, ylab, `...`](p18, p19, p20, p21, ddd3);
    check L196() else D59();
  D30():
    deopt 117 [r75, r77];
  D35():
    deopt 135 [r85, r87];
  D40():
    deopt 156 [];
  D42():
    deopt 162 [];
  D52():
    deopt 192 [xlab5];
  D55():
    deopt 208 [ylab5];
  D59():
    deopt 233 [r135];
  L37():
    goto L40(NULL);
  L40(dx34):
    goto L41();
  L43():
    goto L41();
  L124():
    __3 = ldf `[` in base;
    r78 = dyn __3(r75, r77);
    goto L22(r78);
  L139():
    __4 = ldf `[` in base;
    r88 = dyn __4(r85, r87);
    goto L28(r88);
  L152():
    r97 = dyn stop3("formula with cbind() must specify 1 categorical variable");
    check L153() else D41();
  L155():
    p11 = prom<V +>{
      mf28 = ld mf;
      mf29 = force? mf28;
      checkMissing(mf29);
      c39 = `is.object`(mf29);
      if c39 then L1() else L2(mf29);
    L0(dx29):
      return dx29;
    L1():
      dr26 = tryDispatchBuiltin.1("[[", mf29);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(mf31):
      __7 = ldf `[[` in base;
      r99 = dyn __7(mf31, 1);
      goto L0(r99);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx28);
    };
    r101 = dyn t(p11);
    check L156() else D43();
  L172():
    xlab6 = force? xlab5;
    checkMissing(xlab6);
    c42 = `==`(xlab6, NULL);
    goto L36(c42);
  L173():
    sym10 = ldf names;
    base10 = ldf names in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L174() else L175();
  L185():
    ylab6 = force? ylab5;
    checkMissing(ylab6);
    c45 = `==`(ylab6, NULL);
    goto L42(c45);
  L186():
    sym12 = ldf names;
    base12 = ldf names in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L187() else L188();
  L196():
    popenv;
    return r135;
  D41():
    deopt 158 [r97];
  D43():
    deopt 164 [r101];
  L38(r114):
    c44 = `is.object`(r114);
    if c44 then L178() else L179(r114);
  L44(r122):
    c47 = `is.object`(r122);
    if c47 then L191() else L192(r122);
  L153():
    goto L33();
  L156():
    st lhs = r101;
    mf32 = ld mf;
    check L157() else D44();
  L174():
    mf38 = ld mf;
    check L176() else D53();
  L175():
    r113 = dyn base10(<sym mf>);
    goto L38(r113);
  L187():
    mf40 = ld mf;
    check L189() else D56();
  L188():
    r121 = dyn base12(<sym mf>);
    goto L44(r121);
  D44():
    deopt 166 [mf32];
  D53():
    deopt 197 [mf38];
  D56():
    deopt 213 [mf40];
  L39(dx33):
    st xlab = dx33;
    goto L40(dx33);
  L45(dx37):
    st ylab = dx37;
    goto L41();
  L157():
    mf33 = force? mf32;
    checkMissing(mf33);
    c40 = `is.object`(mf33);
    if c40 then L158() else L159(mf33);
  L176():
    mf39 = force? mf38;
    checkMissing(mf39);
    names2 = ldf names in base;
    r115 = dyn names2(mf39);
    check L177() else D54();
  L178():
    dr30 = tryDispatchBuiltin.1("[", r114);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L180() else L179(dr30);
  L179(r117):
    __9 = ldf `[` in base;
    r118 = dyn __9(r117, 1);
    goto L39(r118);
  L189():
    mf41 = force? mf40;
    checkMissing(mf41);
    names3 = ldf names in base;
    r123 = dyn names3(mf41);
    check L190() else D57();
  L191():
    dr32 = tryDispatchBuiltin.1("[", r122);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L193() else L192(dr32);
  L192(r125):
    __10 = ldf `[` in base;
    r126 = dyn __10(r125, 1);
    goto L45(r126);
  D54():
    deopt 200 [r115];
  D57():
    deopt 216 [r123];
  L34(dx31):
    l16 = ld lhs;
    colnames__ = ldf `colnames<-`;
    check L163() else D47();
  L158():
    dr28 = tryDispatchBuiltin.1("[[", mf33);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L160() else L159(dr28);
  L159(mf35):
    ncol5 = ldf ncol;
    check L161() else D45();
  L177():
    goto L38(r115);
  L180():
    dx32 = getTryDispatchBuiltinValue(dr30);
    goto L39(dx32);
  L190():
    goto L44(r123);
  L193():
    dx36 = getTryDispatchBuiltinValue(dr32);
    goto L45(dx36);
  D45():
    deopt 169 [mf35];
  D47():
    deopt 174 [dx31, l16, dx31];
  L160():
    dx30 = getTryDispatchBuiltinValue(dr28);
    goto L34(dx30);
  L161():
    p12 = prom<V +>{
      mf36 = ld mf;
      mf37 = force? mf36;
      checkMissing(mf37);
      return mf37;
    };
    r103 = dyn ncol5(p12);
    check L162() else D46();
  L163():
    r105 = dyn colnames__(l16, NULL, dx31);
    check L164() else D48();
  D46():
    deopt 171 [mf35, r103];
  D48():
    deopt 176 [dx31, r105];
  L162():
    __8 = ldf `[[` in base;
    r104 = dyn __8(mf35, r103);
    goto L34(r104);
  L164():
    st lhs = r105;
    barplot_default = ldf `barplot.default`;
    check L165() else D49();
  D49():
    deopt 179 [];
  L165():
    p13 = prom<V +>{
      lhs = ld lhs;
      lhs1 = force? lhs;
      checkMissing(lhs1);
      return lhs1;
    };
    p14 = prom<V +>{
      horiz3 = ld horiz;
      horiz4 = force? horiz3;
      checkMissing(horiz4);
      return horiz4;
    };
    p15 = prom<V +>{
      xlab3 = ld xlab;
      xlab4 = force? xlab3;
      checkMissing(xlab4);
      return xlab4;
    };
    p16 = prom<V +>{
      ylab3 = ld ylab;
      ylab4 = force? ylab3;
      checkMissing(ylab4);
      return ylab4;
    };
    ddd2 = ld `...`;
    r110 = dyn barplot_default[, horiz, xlab, ylab, `...`](p13, p14, p15, p16, ddd2);
    check L166() else D50();
  D50():
    deopt 188 [r110];
  L166():
    popenv;
    return r110;
  }
}