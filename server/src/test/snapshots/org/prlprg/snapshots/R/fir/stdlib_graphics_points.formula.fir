fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1566916809;
    st `points.formula` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1566916809(formula, data, `...`, subset) {
  (reg formula:*, reg data:*, reg ddd:dots, reg subset:*) -+> V { var formula:*, var data:*, reg data_isMissing:L, reg data_orDefault:*, reg parent_frame:cls, reg r:V, reg p:p(V +), var `...`:dots?, var subset:*, reg match_call:cls, reg r2:V, reg parent_frame1:cls, reg r3:V, reg eval:cls, reg m:*, reg m1:V, reg c:L, reg m3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p1:p(V +), reg eframe:*, reg eframe1:V, reg p2:p(V +), reg r7:V, reg sym:cls, reg base:cls, reg guard:L, reg r8:V, reg r9:V, reg md:*, reg md1:V, reg is_matrix:cls, reg r10:V, reg c1:L, reg as_data_frame:cls, reg data1:*, reg data2:V, reg p3:p(V +), reg r12:V, reg l:*, reg c2:L, reg r14:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg r16:V, reg dx3:V, reg r17:V, reg lapply:cls, reg __:cls, reg r19:V, reg p4:p(V +), reg eval1:*, reg eval2:V, reg p5:p(V +), reg md2:*, reg md3:V, reg p6:p(V +), reg eframe2:*, reg eframe3:V, reg p7:p(V +), reg r24:V, reg l3:*, reg ___:cls, reg ddd1:dots?, reg r25:V, reg as_list:cls, reg m4:*, reg m5:V, reg p8:p(V +), reg r27:V, reg __1:cls, reg r28:V, reg l4:*, reg c3:L, reg r30:V, reg l6:*, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ____:cls, reg r33:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r34:V, reg r35:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r36:V, reg r37:V, reg m6:*, reg m7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg list:cls, reg r40:V, reg c4:cls, reg r41:V, reg as_call:cls, reg r42:V, reg eval3:cls, reg m8:*, reg m9:V, reg p9:p(V +), reg eframe4:*, reg eframe5:V, reg p10:p(V +), reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg missing:cls, reg r48:V, reg r49:V, reg c5:L, reg eval4:cls, reg m10:*, reg m11:V, reg c6:L, reg m13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r50:V, reg p11:p(V +), reg data3:*, reg data4:V, reg p12:p(V +), reg eframe6:*, reg eframe7:V, reg p13:p(V +), reg r54:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r55:V, reg r56:V, reg missing1:cls, reg r57:V, reg r58:V, reg c7:L, reg nrow:cls, reg data5:*, reg data6:V, reg p14:p(V +), reg r60:V, reg m14:*, reg m15:V, reg l7:*, reg c8:L, reg r63:dots, reg l9:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r66:V, reg nrow1:cls, reg eval5:cls, reg mtmp:*, reg mtmp1:V, reg p15:p(V +), reg eframe8:*, reg eframe9:V, reg p16:p(V +), reg r69:V, reg p17:p(V +), reg r71:V, reg r72:cls, reg lapply1:cls, reg dots:*, reg dots1:V, reg p18:p(V +), reg dosub:*, reg dosub1:V, reg p19:p(V +), reg r75:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r77:V, reg r78:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r79:V, reg r80:V, reg mf:*, reg mf1:V, reg attr:cls, reg r81:V, reg attr1:cls, reg r82:V, reg response:*, reg response1:V, reg c9:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r83:V, reg r84:V, reg mf2:*, reg mf3:V, reg names:cls, reg r85:V, reg mf4:*, reg mf5:V, reg c10:L, reg mf7:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg response2:*, reg response3:V, reg __2:cls, reg r86:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r87:V, reg r88:V, reg varnames:*, reg varnames1:V, reg length:cls, reg r89:V, reg r90:V, reg c11:L, reg stop:cls, reg r91:V, reg varnames2:*, reg varnames3:V, reg c12:L, reg varnames5:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg response4:*, reg response5:V, reg r93:V, reg __3:cls, reg r94:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r95:V, reg r96:V, reg xn:*, reg xn1:V, reg length1:cls, reg r97:V, reg r98:V, reg c13:L, reg do_call:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r99:V, reg r100:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r101:V, reg r102:V, reg y:*, reg y1:V, reg list1:cls, reg r103:V, reg dots2:*, reg dots3:V, reg c14:cls, reg r104:V, reg p20:p(V +), reg r106:V, reg do_call1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r107:V, reg r108:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r109:V, reg r110:V, reg mf8:*, reg mf9:V, reg c15:L, reg mf11:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg xn2:*, reg xn3:V, reg __4:cls, reg r111:V, reg y2:*, reg y3:V, reg list2:cls, reg r112:V, reg dots4:*, reg dots5:V, reg c16:cls, reg r113:V, reg p21:p(V +), reg r115:V, reg stop1:cls, reg r116:V |
    mkenv;
    st formula = formula;
    data_isMissing = missing.0(data);
    if data_isMissing then L0() else L1(data);
  L0():
    p = prom<V +>{
      parent_frame = ldf `parent.frame`;
      r = dyn parent_frame();
      return r;
    };
    goto L1(p);
  L1(data_orDefault):
    st data = data_orDefault;
    st `...` = ddd;
    st subset = subset;
    match_call = ldf `match.call`;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    r2 = dyn match_call[`expand.dots`](FALSE);
    check L27() else D1();
  D1():
    deopt 4 [r2];
  L27():
    st m = r2;
    parent_frame1 = ldf `parent.frame`;
    check L28() else D2();
  D2():
    deopt 7 [];
  L28():
    r3 = dyn parent_frame1();
    check L29() else D3();
  D3():
    deopt 8 [r3];
  L29():
    st eframe = r3;
    eval = ldf eval;
    check L30() else D4();
  D4():
    deopt 11 [];
  L30():
    p1 = prom<V +>{
      m = ld m;
      m1 = force? m;
      checkMissing(m1);
      c = `is.object`(m1);
      if c then L1() else L2(m1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", m1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(m3):
      r4 = `$`(m3, <sym data>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p2 = prom<V +>{
      eframe = ld eframe;
      eframe1 = force? eframe;
      checkMissing(eframe1);
      return eframe1;
    };
    r7 = dyn eval(p1, p2);
    check L31() else D5();
  D5():
    deopt 14 [r7];
  L31():
    st md = r7;
    sym = ldf `is.matrix`;
    base = ldf `is.matrix` in base;
    guard = `==`.4(sym, base);
    if guard then L32() else L33();
  L2(r9):
    c1 = `as.logical`(r9);
    if c1 then L36() else L3();
  L32():
    md = ld md;
    check L34() else D6();
  L33():
    r8 = dyn base(<sym md>);
    goto L2(r8);
  D6():
    deopt 18 [md];
  L3():
    goto L4();
  L4():
    lapply = ldf lapply;
    check L44() else D10();
  L34():
    md1 = force? md;
    checkMissing(md1);
    is_matrix = ldf `is.matrix` in base;
    r10 = dyn is_matrix(md1);
    check L35() else D7();
  L36():
    as_data_frame = ldf `as.data.frame`;
    check L37() else D8();
  D7():
    deopt 21 [r10];
  D8():
    deopt 23 [];
  D10():
    deopt 33 [];
  L35():
    goto L2(r10);
  L37():
    p3 = prom<V +>{
      data1 = ld data;
      data2 = force? data1;
      checkMissing(data2);
      return data2;
    };
    r12 = dyn as_data_frame(p3);
    check L38() else D9();
  L44():
    p4 = prom<V +>{
      __ = ldf `$` in base;
      r19 = dyn __(<sym m>, <sym ...>);
      return r19;
    };
    p5 = prom<V +>{
      eval1 = ld eval;
      eval2 = force? eval1;
      checkMissing(eval2);
      return eval2;
    };
    p6 = prom<V +>{
      md2 = ld md;
      md3 = force? md2;
      checkMissing(md3);
      return md3;
    };
    p7 = prom<V +>{
      eframe2 = ld eframe;
      eframe3 = force? eframe2;
      checkMissing(eframe3);
      return eframe3;
    };
    r24 = dyn lapply(p4, p5, p6, p7);
    check L45() else D11();
  D9():
    deopt 25 [r12];
  D11():
    deopt 38 [r24];
  L38():
    st md = r12;
    l = ld m;
    c2 = `is.object`(l);
    if c2 then L40() else L41(r12, l);
  L45():
    st dots = r24;
    l3 = ld m;
    ___ = ldf `$<-`;
    check L46() else D12();
  D12():
    deopt 43 [NULL, l3, NULL];
  L39(r16, dx3):
    st m = dx3;
    goto L4();
  L40():
    dr2 = tryDispatchBuiltin.0("$<-", l, r12);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(r12, dr2);
  L41(r14, l2):
    r17 = `$<-`(l2, <sym data>, r12);
    goto L39(r14, r17);
  L46():
    ddd1 = ld `...`;
    r25 = dyn ___[, , `...`, ](l3, NULL, ddd1, NULL);
    check L47() else D13();
  D13():
    deopt 46 [NULL, r25];
  L42():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L39(r12, dx2);
  L47():
    st m = r25;
    as_list = ldf `as.list`;
    check L48() else D14();
  D14():
    deopt 49 [];
  L48():
    p8 = prom<V +>{
      m4 = ld m;
      m5 = force? m4;
      checkMissing(m5);
      return m5;
    };
    r27 = dyn as_list(p8);
    check L49() else D15();
  D15():
    deopt 51 [r27];
  L49():
    st m = r27;
    __1 = ldf `::`;
    check L50() else D16();
  D16():
    deopt 54 [];
  L50():
    r28 = dyn __1("stats", "model.frame.default");
    check L51() else D17();
  D17():
    deopt 57 [r28];
  L51():
    l4 = ld m;
    c3 = `is.object`(l4);
    if c3 then L52() else L53(r28, l4);
  L5(dx5):
    st m = dx5;
    sym1 = ldf `as.call`;
    base1 = ldf `as.call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L55() else L56();
  L52():
    dr4 = tryDispatchBuiltin.0("[[<-", l4, r28);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L54() else L53(r28, dr4);
  L53(r30, l6):
    ____ = ldf `[[<-` in base;
    r33 = dyn ____(l6, r28, 1);
    goto L5(r33);
  L6(r35):
    st m = r35;
    eval3 = ldf eval;
    check L65() else D22();
  L54():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(dx4);
  L55():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L57() else L58();
  L56():
    r34 = dyn base1(<lang c(m, list(na.action=NULL))>);
    goto L6(r34);
  D22():
    deopt 81 [];
  L7(r37):
    as_call = ldf `as.call` in base;
    r42 = dyn as_call(r37);
    check L64() else D21();
  L57():
    m6 = ld m;
    check L59() else D18();
  L58():
    r36 = dyn base2(<sym m>, <lang list(na.action=NULL)>);
    goto L7(r36);
  L65():
    p9 = prom<V +>{
      m8 = ld m;
      m9 = force? m8;
      checkMissing(m9);
      return m9;
    };
    p10 = prom<V +>{
      eframe4 = ld eframe;
      eframe5 = force? eframe4;
      checkMissing(eframe5);
      return eframe5;
    };
    r45 = dyn eval3(p9, p10);
    check L66() else D23();
  D18():
    deopt 67 [m6];
  D21():
    deopt 78 [r42];
  D23():
    deopt 84 [r45];
  L59():
    m7 = force? m6;
    checkMissing(m7);
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L60() else L61();
  L64():
    goto L6(r42);
  L66():
    st mf = r45;
    sym4 = ldf missing;
    base4 = ldf missing in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L67() else L68();
  L8(r39):
    c4 = ldf c in base;
    r41 = dyn c4(m7, r39);
    check L63() else D20();
  L9(r47):
    r49 = `!`(r47);
    c5 = `as.logical`(r49);
    if c5 then L69() else L10();
  L60():
    list = ldf list in base;
    r40 = dyn list(NULL);
    check L62() else D19();
  L61():
    r38 = dyn base3[`na.action`](NULL);
    goto L8(r38);
  L67():
    missing = ldf missing in base;
    r48 = dyn missing(<sym subset>);
    goto L9(r48);
  L68():
    r46 = dyn base4(<sym subset>);
    goto L9(r46);
  D19():
    deopt 74 [r40];
  D20():
    deopt 76 [r41];
  L10():
    goto L14();
  L14():
    sym6 = ldf attr;
    base6 = ldf attr in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L88() else L89();
  L62():
    goto L8(r40);
  L63():
    goto L7(r41);
  L69():
    eval4 = ldf eval;
    check L70() else D24();
  D24():
    deopt 91 [];
  L15(r78):
    st response = r78;
    response = ld response;
    check L95() else D36();
  L70():
    p11 = prom<V +>{
      m10 = ld m;
      m11 = force? m10;
      checkMissing(m11);
      c6 = `is.object`(m11);
      if c6 then L1() else L2(m11);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", m11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(m13):
      r50 = `$`(m13, <sym subset>);
      goto L0(r50);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p12 = prom<V +>{
      data3 = ld data;
      data4 = force? data3;
      checkMissing(data4);
      return data4;
    };
    p13 = prom<V +>{
      eframe6 = ld eframe;
      eframe7 = force? eframe6;
      checkMissing(eframe7);
      return eframe7;
    };
    r54 = dyn eval4(p11, p12, p13);
    check L71() else D25();
  L88():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L90() else L91();
  L89():
    r77 = dyn base6(<lang attr(mf, "terms")>, "response");
    goto L15(r77);
  D25():
    deopt 95 [r54];
  D36():
    deopt 143 [response];
  L16(r80):
    attr1 = ldf attr in base;
    r82 = dyn attr1(r80, "response");
    check L94() else D35();
  L71():
    st s = r54;
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L72() else L73();
  L90():
    mf = ld mf;
    check L92() else D33();
  L91():
    r79 = dyn base7(<sym mf>, "terms");
    goto L16(r79);
  L95():
    response1 = force? response;
    checkMissing(response1);
    c9 = `as.logical`(response1);
    if c9 then L96() else L17();
  D33():
    deopt 134 [mf];
  D35():
    deopt 141 [r82];
  L11(r56):
    r58 = `!`(r56);
    c7 = `as.logical`(r58);
    if c7 then L74() else L12();
  L17():
    stop1 = ldf stop;
    check L130() else D53();
  L72():
    missing1 = ldf missing in base;
    r57 = dyn missing1(<sym data>);
    goto L11(r57);
  L73():
    r55 = dyn base5(<sym data>);
    goto L11(r55);
  L92():
    mf1 = force? mf;
    checkMissing(mf1);
    attr = ldf attr in base;
    r81 = dyn attr(mf1, "terms");
    check L93() else D34();
  L94():
    goto L15(r82);
  L96():
    sym8 = ldf names;
    base8 = ldf names in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L97() else L98();
  D34():
    deopt 138 [r81];
  D53():
    deopt 198 [];
  L12():
    m14 = ld m;
    check L78() else D28();
  L13():
    r72 = clos inner2501545716;
    st dosub = r72;
    lapply1 = ldf lapply;
    check L85() else D31();
  L18(r84):
    st varnames = r84;
    mf4 = ld mf;
    check L101() else D39();
  L74():
    nrow = ldf nrow;
    check L75() else D26();
  L93():
    goto L16(r81);
  L97():
    mf2 = ld mf;
    check L99() else D37();
  L98():
    r83 = dyn base8(<sym mf>);
    goto L18(r83);
  L130():
    r116 = dyn stop1("must have a response variable");
    check L131() else D54();
  D26():
    deopt 102 [];
  D28():
    deopt 106 [m14];
  D31():
    deopt 123 [];
  D37():
    deopt 147 [mf2];
  D39():
    deopt 152 [mf4];
  D54():
    deopt 200 [r116];
  L75():
    p14 = prom<V +>{
      data5 = ld data;
      data6 = force? data5;
      checkMissing(data6);
      return data6;
    };
    r60 = dyn nrow(p14);
    check L76() else D27();
  L78():
    m15 = force? m14;
    checkMissing(m15);
    st mtmp = m15;
    l7 = ld mtmp;
    c8 = `is.object`(l7);
    if c8 then L80() else L81(NULL, l7);
  L85():
    p18 = prom<V +>{
      dots = ld dots;
      dots1 = force? dots;
      checkMissing(dots1);
      return dots1;
    };
    p19 = prom<V +>{
      dosub = ld dosub;
      dosub1 = force? dosub;
      checkMissing(dosub1);
      return dosub1;
    };
    r75 = dyn lapply1(p18, p19);
    check L86() else D32();
  L99():
    mf3 = force? mf2;
    checkMissing(mf3);
    names = ldf names in base;
    r85 = dyn names(mf3);
    check L100() else D38();
  L101():
    mf5 = force? mf4;
    checkMissing(mf5);
    c10 = `is.object`(mf5);
    if c10 then L102() else L103(mf5);
  L131():
    popenv;
    return r116;
  D27():
    deopt 104 [r60];
  D32():
    deopt 126 [r75];
  D38():
    deopt 150 [r85];
  L19(dx11):
    st y = dx11;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L106() else L107();
  L76():
    st l = r60;
    goto L13();
  L79(dx9):
    st mtmp = dx9;
    nrow1 = ldf nrow;
    check L83() else D29();
  L80():
    dr8 = tryDispatchBuiltin.0("$<-", l7, NULL);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L82() else L81(NULL, dr8);
  L81(r63, l9):
    r66 = `$<-`(l9, <sym subset>, NULL);
    goto L79(r66);
  L86():
    st dots = r75;
    goto L14();
  L100():
    goto L18(r85);
  L102():
    dr10 = tryDispatchBuiltin.1("[[", mf5);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L104() else L103(dr10);
  L103(mf7):
    response2 = ld response;
    check L105() else D40();
  D29():
    deopt 115 [];
  D40():
    deopt 154 [mf7, response2];
  L20(r88):
    r90 = `>`(r88, 2);
    c11 = `as.logical`(r90);
    if c11 then L110() else L21();
  L82():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L79(dx8);
  L83():
    p17 = prom<V +>{
      eval5 = ldf eval;
      p15 = prom<V +>{
        mtmp = ld mtmp;
        mtmp1 = force? mtmp;
        checkMissing(mtmp1);
        return mtmp1;
      };
      p16 = prom<V +>{
        eframe8 = ld eframe;
        eframe9 = force? eframe8;
        checkMissing(eframe9);
        return eframe9;
      };
      r69 = dyn eval5(p15, p16);
      return r69;
    };
    r71 = dyn nrow1(p17);
    check L84() else D30();
  L104():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L19(dx10);
  L105():
    response3 = force? response2;
    __2 = ldf `[[` in base;
    r86 = dyn __2(mf7, response3);
    goto L19(r86);
  L106():
    varnames = ld varnames;
    check L108() else D41();
  L107():
    r87 = dyn base9(<sym varnames>);
    goto L20(r87);
  D30():
    deopt 117 [r71];
  D41():
    deopt 160 [varnames];
  L21():
    goto L22();
  L22():
    varnames2 = ld varnames;
    check L114() else D45();
  L84():
    st l = r71;
    goto L13();
  L108():
    varnames1 = force? varnames;
    checkMissing(varnames1);
    length = ldf length in base;
    r89 = dyn length(varnames1);
    check L109() else D42();
  L110():
    stop = ldf stop;
    check L111() else D43();
  D42():
    deopt 163 [r89];
  D43():
    deopt 167 [];
  D45():
    deopt 172 [varnames2];
  L109():
    goto L20(r89);
  L111():
    r91 = dyn stop("cannot handle more than one 'x' coordinate");
    check L112() else D44();
  L114():
    varnames3 = force? varnames2;
    checkMissing(varnames3);
    c12 = `is.object`(varnames3);
    if c12 then L115() else L116(varnames3);
  D44():
    deopt 169 [r91];
  L23(dx13):
    st xn = dx13;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L119() else L120();
  L112():
    goto L22();
  L115():
    dr12 = tryDispatchBuiltin.1("[", varnames3);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L117() else L116(dr12);
  L116(varnames5):
    response4 = ld response;
    check L118() else D46();
  D46():
    deopt 174 [varnames5, response4];
  L24(r96):
    r98 = `==`(r96, 0);
    c13 = `as.logical`(r98);
    if c13 then L123() else L25();
  L117():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L23(dx12);
  L118():
    response5 = force? response4;
    checkMissing(response5);
    r93 = `-`(<missing>, response5);
    __3 = ldf `[` in base;
    r94 = dyn __3(varnames5, r93);
    goto L23(r94);
  L119():
    xn = ld xn;
    check L121() else D47();
  L120():
    r95 = dyn base10(<sym xn>);
    goto L24(r95);
  D47():
    deopt 181 [xn];
  L25():
    do_call1 = ldf `do.call`;
    check L127() else D51();
  L121():
    xn1 = force? xn;
    checkMissing(xn1);
    length1 = ldf length in base;
    r97 = dyn length1(xn1);
    check L122() else D48();
  L123():
    do_call = ldf `do.call`;
    check L124() else D49();
  D48():
    deopt 184 [r97];
  D49():
    deopt 188 [];
  D51():
    deopt 193 [];
  L122():
    goto L24(r97);
  L124():
    p20 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r100):
      return r100;
    L2():
      sym12 = ldf list;
      base12 = ldf list in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L4() else L5();
    L3():
      r99 = dyn base11(<lang list(y)>, <sym dots>);
      goto L0(r99);
    L1(r102):
      dots2 = ld dots;
      dots3 = force? dots2;
      checkMissing(dots3);
      c14 = ldf c in base;
      r104 = dyn c14(r102, dots3);
      goto L0(r104);
    L4():
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      list1 = ldf list in base;
      r103 = dyn list1(y1);
      goto L1(r103);
    L5():
      r101 = dyn base12(<sym y>);
      goto L1(r101);
    };
    r106 = dyn do_call("points", p20);
    check L125() else D50();
  L127():
    p21 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L3() else L4();
    L0(r108):
      return r108;
    L3():
      sym14 = ldf list;
      base14 = ldf list in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L5() else L6();
    L4():
      r107 = dyn base13(<lang list(`[[`(mf, xn), y)>, <sym dots>);
      goto L0(r107);
    L1(r110):
      dots4 = ld dots;
      dots5 = force? dots4;
      checkMissing(dots5);
      c16 = ldf c in base;
      r113 = dyn c16(r110, dots5);
      goto L0(r113);
    L5():
      mf8 = ld mf;
      mf9 = force? mf8;
      checkMissing(mf9);
      c15 = `is.object`(mf9);
      if c15 then L7() else L8(mf9);
    L6():
      r109 = dyn base14(<lang `[[`(mf, xn)>, <sym y>);
      goto L1(r109);
    L2(dx15):
      y2 = ld y;
      y3 = force? y2;
      checkMissing(y3);
      list2 = ldf list in base;
      r112 = dyn list2(dx15, y3);
      goto L1(r112);
    L7():
      dr14 = tryDispatchBuiltin.1("[[", mf9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L9() else L8(dr14);
    L8(mf11):
      xn2 = ld xn;
      xn3 = force? xn2;
      __4 = ldf `[[` in base;
      r111 = dyn __4(mf11, xn3);
      goto L2(r111);
    L9():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L2(dx14);
    };
    r115 = dyn do_call1("points", p21);
    check L128() else D52();
  D50():
    deopt 191 [r106];
  D52():
    deopt 196 [r115];
  L125():
    popenv;
    return r106;
  L128():
    popenv;
    return r115;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg l:*, reg l1:V, reg r3:V, reg c:L, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg s:*, reg s1:V, reg __:cls, reg r4:V, reg x7:*, reg x8:V |
    mkenv;
    st x = x;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L3() else L4();
  L0(r1):
    l = ld l;
    check L7() else D2();
  L3():
    x1 = ld x;
    check L5() else D0();
  L4():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 5 [r1, l];
  L5():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L6() else D1();
  L7():
    l1 = force? l;
    checkMissing(l1);
    r3 = `==`(r1, l1);
    c = `as.logical`(r3);
    if c then L8() else L1();
  D1():
    deopt 5 [r2];
  L1():
    x7 = ld x;
    check L15() else D5();
  L6():
    goto L0(r2);
  L8():
    x3 = ld x;
    check L9() else D3();
  D3():
    deopt 8 [x3];
  D5():
    deopt 13 [x7];
  L9():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L10() else L11(x4);
  L15():
    x8 = force? x7;
    checkMissing(x8);
    popenv;
    return x8;
  L2(dx1):
    popenv;
    return dx1;
  L10():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L12() else L11(dr);
  L11(x6):
    s = ld s;
    check L13() else D4();
  D4():
    deopt 10 [x6, s];
  L12():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L13():
    s1 = force? s;
    __ = ldf `[` in base;
    r4 = dyn __(x6, s1);
    goto L2(r4);
  }
}