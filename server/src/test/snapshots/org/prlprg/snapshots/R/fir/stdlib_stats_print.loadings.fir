fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1156269923;
    st `print.loadings` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1156269923(x, digits, cutoff, sort, `...`) {
  (reg x:*, reg digits:*, reg cutoff:*, reg sort:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, var cutoff:*, reg cutoff_isMissing:L, reg cutoff_orDefault:*, var sort:*, reg sort_isMissing:L, reg sort_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg unclass:cls, reg r2:V, reg nrow:cls, reg Lambda:*, reg Lambda1:V, reg p:p(V +), reg r4:V, reg ncol:cls, reg Lambda2:*, reg Lambda3:V, reg p1:p(V +), reg r6:V, reg sort1:*, reg sort2:V, reg c:L, reg max_col:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg Lambda4:*, reg Lambda5:V, reg abs:cls, reg r9:V, reg p2:p(V +), reg r11:V, reg cbind:cls, reg p3:*, reg p4:V, reg r12:V, reg p5:p(V +), reg mx:*, reg mx1:V, reg p6:p(V +), reg r15:V, reg factors:*, reg factors1:V, reg r16:V, reg l:*, reg c1:L, reg r18:V, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg l5:*, reg r27:V, reg r28:V, reg Lambda6:*, reg Lambda7:V, reg c2:L, reg r31:V, reg l7:*, reg r32:V, reg Lambda9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r35:V, reg l9:*, reg r36:V, reg dx3:V, reg ind:*, reg ind1:V, reg __:cls, reg r37:V, reg abs1:cls, reg r38:V, reg r39:V, reg ___:cls, reg r40:V, reg Lambda10:*, reg Lambda11:V, reg c3:L, reg Lambda13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg order:cls, reg mx2:*, reg mx3:V, reg p7:p(V +), reg p8:*, reg p9:V, reg r42:V, reg p10:p(V +), reg r44:V, reg __1:cls, reg r45:V, reg cat:cls, reg r46:V, reg setNames:cls, reg format:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r47:V, reg r48:V, reg round:cls, reg r49:V, reg p11:p(V +), reg r51:V, reg p12:p(V +), reg r53:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r54:V, reg r55:V, reg fx:*, reg fx1:V, reg c4:L, reg fx3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg __2:cls, reg r56:V, reg nchar:cls, reg r57:V, reg strrep:cls, reg nc:*, reg nc1:V, reg p13:p(V +), reg r59:V, reg l10:*, reg c5:L, reg r61:V, reg l12:*, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r68:V, reg r69:V, reg l15:*, reg r70:V, reg r71:V, reg Lambda14:*, reg Lambda15:V, reg abs2:cls, reg r72:V, reg cutoff1:*, reg cutoff2:V, reg r73:V, reg ___1:cls, reg r74:V, reg print:cls, reg fx4:*, reg fx5:V, reg p14:p(V +), reg ddd1:dots?, reg r76:V, reg colSums:cls, reg x3:*, reg x4:V, reg r77:V, reg p15:p(V +), reg r79:V, reg rbind:cls, reg vx:*, reg vx1:V, reg p16:p(V +), reg r81:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r82:V, reg r83:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r84:V, reg r85:V, reg x5:*, reg x6:V, reg attr:cls, reg r86:V, reg c6:V, reg c7:L, reg rbind1:cls, reg varex:*, reg varex1:V, reg p17:p(V +), reg vx2:*, reg vx3:V, reg p18:*, reg p19:V, reg r88:V, reg p20:p(V +), reg r90:V, reg factors2:*, reg factors3:V, reg r91:V, reg c8:L, reg rbind2:cls, reg varex2:*, reg varex3:V, reg p21:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r93:V, reg r94:V, reg vx4:*, reg vx5:V, reg p22:*, reg p23:V, reg r95:V, reg cumsum:cls, reg r96:V, reg p24:p(V +), reg r98:V, reg r99:V, reg cat1:cls, reg r101:V, reg print1:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r102:V, reg r103:V, reg round1:cls, reg r104:V, reg p25:p(V +), reg r106:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r107:V, reg r108:V, reg x7:*, reg x8:V, reg invisible:cls, reg r109:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0(3) else L0(digits);
  L0(digits_orDefault):
    st digits = digits_orDefault;
    cutoff_isMissing = missing.0(cutoff);
    if cutoff_isMissing then L1(0.1) else L1(cutoff);
  L1(cutoff_orDefault):
    st cutoff = cutoff_orDefault;
    sort_isMissing = missing.0(sort);
    if sort_isMissing then L2(FALSE) else L2(sort);
  L2(sort_orDefault):
    st sort = sort_orDefault;
    st `...` = ddd;
    sym = ldf unclass;
    base = ldf unclass in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L3(r1):
    st Lambda = r1;
    nrow = ldf nrow;
    check L25() else D2();
  L21():
    x1 = ld x;
    check L23() else D0();
  L22():
    r = dyn base(<sym x>);
    goto L3(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 8 [];
  L23():
    x2 = force? x1;
    checkMissing(x2);
    unclass = ldf unclass in base;
    r2 = dyn unclass(x2);
    check L24() else D1();
  L25():
    p = prom<V +>{
      Lambda = ld Lambda;
      Lambda1 = force? Lambda;
      checkMissing(Lambda1);
      return Lambda1;
    };
    r4 = dyn nrow(p);
    check L26() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 10 [r4];
  L24():
    goto L3(r2);
  L26():
    st p = r4;
    ncol = ldf ncol;
    check L27() else D4();
  D4():
    deopt 13 [];
  L27():
    p1 = prom<V +>{
      Lambda2 = ld Lambda;
      Lambda3 = force? Lambda2;
      checkMissing(Lambda3);
      return Lambda3;
    };
    r6 = dyn ncol(p1);
    check L28() else D5();
  D5():
    deopt 15 [r6];
  L28():
    st factors = r6;
    sort1 = ld sort;
    check L29() else D6();
  D6():
    deopt 17 [sort1];
  L29():
    sort2 = force? sort1;
    checkMissing(sort2);
    c = `as.logical`(sort2);
    if c then L30() else L4();
  L4():
    goto L9();
  L9():
    cat = ldf cat;
    check L54() else D18();
  L30():
    max_col = ldf `max.col`;
    check L31() else D7();
  D7():
    deopt 20 [];
  D18():
    deopt 64 [];
  L31():
    p2 = prom<V +>{
      sym1 = ldf abs;
      base1 = ldf abs in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      Lambda4 = ld Lambda;
      Lambda5 = force? Lambda4;
      checkMissing(Lambda5);
      abs = ldf abs in base;
      r9 = dyn abs(Lambda5);
      goto L0(r9);
    L2():
      r7 = dyn base1(<sym Lambda>);
      goto L0(r7);
    };
    r11 = dyn max_col(p2);
    check L32() else D8();
  L54():
    r46 = dyn cat("\nLoadings:\n");
    check L55() else D19();
  D8():
    deopt 22 [r11];
  D19():
    deopt 66 [r46];
  L32():
    st mx = r11;
    cbind = ldf cbind;
    check L33() else D9();
  L55():
    setNames = ldf setNames;
    check L56() else D20();
  D9():
    deopt 25 [];
  D20():
    deopt 68 [];
  L33():
    p5 = prom<V +>{
      p3 = ld p;
      p4 = force? p3;
      checkMissing(p4);
      r12 = `:`(1, p4);
      return r12;
    };
    p6 = prom<V +>{
      mx = ld mx;
      mx1 = force? mx;
      checkMissing(mx1);
      return mx1;
    };
    r15 = dyn cbind(p5, p6);
    check L34() else D10();
  L56():
    p12 = prom<V +>{
      format = ldf format;
      p11 = prom<V +>{
        sym3 = ldf round;
        base3 = ldf round in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r48):
        return r48;
      L1():
        round = ldf round in base;
        r49 = dyn round(<sym Lambda>, <sym digits>);
        goto L0(r49);
      L2():
        r47 = dyn base3(<sym Lambda>, <sym digits>);
        goto L0(r47);
      };
      r51 = dyn format(p11);
      return r51;
    };
    r53 = dyn setNames(p12, NULL);
    check L57() else D21();
  D10():
    deopt 28 [r15];
  D21():
    deopt 71 [r53];
  L34():
    st ind = r15;
    factors = ld factors;
    check L35() else D11();
  L57():
    st fx = r53;
    sym4 = ldf nchar;
    base4 = ldf nchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L58() else L59();
  D11():
    deopt 30 [factors];
  L10(r55):
    st nc = r55;
    strrep = ldf strrep;
    check L65() else D24();
  L35():
    factors1 = force? factors;
    checkMissing(factors1);
    r16 = `+`(factors1, 1.0);
    l = ld mx;
    c1 = `is.object`(l);
    if c1 then L36() else L37(r16, l);
  L58():
    fx = ld fx;
    check L60() else D22();
  L59():
    r54 = dyn base4[, type](<lang `[`(fx, 1)>, "c");
    goto L10(r54);
  D22():
    deopt 75 [fx];
  D24():
    deopt 87 [];
  L5(dx1):
    st mx = dx1;
    Lambda10 = ld Lambda;
    check L47() else D15();
  L36():
    dr = tryDispatchBuiltin.0("[<-", l, r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(r16, dr);
  L37(r18, l2):
    sym2 = ldf abs;
    base2 = ldf abs in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L60():
    fx1 = force? fx;
    checkMissing(fx1);
    c4 = `is.object`(fx1);
    if c4 then L61() else L62(fx1);
  L65():
    p13 = prom<V +>{
      nc = ld nc;
      nc1 = force? nc;
      checkMissing(nc1);
      return nc1;
    };
    r59 = dyn strrep(" ", p13);
    check L66() else D25();
  D15():
    deopt 48 [Lambda10];
  D25():
    deopt 90 [r59];
  L6(r26, l5, r27, r28):
    r39 = `<`(r28, 0.5);
    ___ = ldf `[<-` in base;
    r40 = dyn ___(l5, r27, r39);
    goto L5(r40);
  L11(dx8):
    nchar = ldf nchar in base;
    r57 = dyn nchar(dx8, "c", FALSE, NA_LGL);
    check L64() else D23();
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L39():
    Lambda6 = ld Lambda;
    check L41() else D12();
  L40():
    r25 = dyn base2(<lang `[`(Lambda, ind)>);
    goto L6(r18, l2, r16, r25);
  L47():
    Lambda11 = force? Lambda10;
    checkMissing(Lambda11);
    c3 = `is.object`(Lambda11);
    if c3 then L48() else L49(Lambda11);
  L61():
    dr6 = tryDispatchBuiltin.1("[", fx1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62(dr6);
  L62(fx3):
    __2 = ldf `[` in base;
    r56 = dyn __2(fx3, 1);
    goto L11(r56);
  L66():
    l10 = ld fx;
    c5 = `is.object`(l10);
    if c5 then L67() else L68(r59, l10);
  D12():
    deopt 37 [r18, l2, r16, Lambda6];
  D23():
    deopt 84 [r57];
  L8(dx5):
    st Lambda = dx5;
    goto L9();
  L12(dx10):
    st fx = dx10;
    print = ldf print;
    check L75() else D29();
  L41():
    Lambda7 = force? Lambda6;
    checkMissing(Lambda7);
    c2 = `is.object`(Lambda7);
    if c2 then L42() else L43(r18, l2, r16, Lambda7);
  L48():
    dr4 = tryDispatchBuiltin.1("[", Lambda11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L50() else L49(dr4);
  L49(Lambda13):
    order = ldf order;
    check L51() else D16();
  L63():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx7);
  L64():
    goto L10(r57);
  L67():
    dr8 = tryDispatchBuiltin.0("[<-", l10, r59);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L69() else L68(r59, dr8);
  L68(r61, l12):
    sym5 = ldf abs;
    base5 = ldf abs in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L70() else L71();
  D16():
    deopt 51 [Lambda13];
  D29():
    deopt 103 [];
  L7(r35, l9, r36, dx3):
    abs1 = ldf abs in base;
    r38 = dyn abs1(dx3);
    check L46() else D14();
  L13(r69, l15, r70, r71):
    cutoff1 = ld cutoff;
    check L74() else D28();
  L42():
    dr2 = tryDispatchBuiltin.1("[", Lambda7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L44() else L43(r18, l2, r16, dr2);
  L43(r31, l7, r32, Lambda9):
    ind = ld ind;
    check L45() else D13();
  L50():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L8(dx4);
  L51():
    p7 = prom<V +>{
      mx2 = ld mx;
      mx3 = force? mx2;
      checkMissing(mx3);
      return mx3;
    };
    p10 = prom<V +>{
      p8 = ld p;
      p9 = force? p8;
      checkMissing(p9);
      r42 = `:`(1, p9);
      return r42;
    };
    r44 = dyn order(p7, p10);
    check L52() else D17();
  L69():
    dx9 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx9);
  L70():
    Lambda14 = ld Lambda;
    check L72() else D26();
  L71():
    r68 = dyn base5(<sym Lambda>);
    goto L13(r61, l12, r59, r68);
  L75():
    p14 = prom<V +>{
      fx4 = ld fx;
      fx5 = force? fx4;
      checkMissing(fx5);
      return fx5;
    };
    ddd1 = ld `...`;
    r76 = dyn print[, quote, `...`](p14, FALSE, ddd1);
    check L76() else D30();
  D13():
    deopt 39 [r31, l7, r32, Lambda9, ind];
  D14():
    deopt 43 [r35, l9, r36, r38];
  D17():
    deopt 54 [Lambda13, r44];
  D26():
    deopt 94 [r61, l12, r59, Lambda14];
  D28():
    deopt 97 [r69, l15, r70, r71, cutoff1];
  D30():
    deopt 108 [r76];
  L44():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L7(r18, l2, r16, dx2);
  L45():
    ind1 = force? ind;
    __ = ldf `[` in base;
    r37 = dyn __(Lambda9, ind1);
    goto L7(r31, l7, r32, r37);
  L46():
    goto L6(r35, l9, r36, r38);
  L52():
    __1 = ldf `[` in base;
    r45 = dyn __1(Lambda11, r44, <missing>, FALSE);
    goto L8(r45);
  L72():
    Lambda15 = force? Lambda14;
    checkMissing(Lambda15);
    abs2 = ldf abs in base;
    r72 = dyn abs2(Lambda15);
    check L73() else D27();
  L74():
    cutoff2 = force? cutoff1;
    checkMissing(cutoff2);
    r73 = `<`(r71, cutoff2);
    ___1 = ldf `[<-` in base;
    r74 = dyn ___1(l15, r70, r73);
    goto L12(r74);
  L76():
    colSums = ldf colSums;
    check L77() else D31();
  D27():
    deopt 97 [r61, l12, r59, r72];
  D31():
    deopt 110 [];
  L73():
    goto L13(r61, l12, r59, r72);
  L77():
    p15 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      r77 = `^`(x4, 2.0);
      return r77;
    };
    r79 = dyn colSums(p15);
    check L78() else D32();
  D32():
    deopt 112 [r79];
  L78():
    st vx = r79;
    rbind = ldf rbind;
    check L79() else D33();
  D33():
    deopt 115 [];
  L79():
    p16 = prom<V +>{
      vx = ld vx;
      vx1 = force? vx;
      checkMissing(vx1);
      return vx1;
    };
    r81 = dyn rbind[`SS loadings`](p16);
    check L80() else D34();
  D34():
    deopt 118 [r81];
  L80():
    st varex = r81;
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L81() else L82();
  L14(r83):
    c7 = `as.logical`(r83);
    if c7 then L87() else L16();
  L81():
    sym7 = ldf attr;
    base7 = ldf attr in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L83() else L84();
  L82():
    r82 = dyn base6(<lang attr(x, "covariance")>);
    goto L14(r82);
  L15(r85):
    c6 = `==`(r85, NULL);
    goto L14(c6);
  L16():
    goto L19();
  L19():
    cat1 = ldf cat;
    check L96() else D42();
  L83():
    x5 = ld x;
    check L85() else D35();
  L84():
    r84 = dyn base7(<sym x>, "covariance");
    goto L15(r84);
  L87():
    rbind1 = ldf rbind;
    check L88() else D37();
  D35():
    deopt 123 [x5];
  D37():
    deopt 130 [];
  D42():
    deopt 152 [];
  L85():
    x6 = force? x5;
    checkMissing(x6);
    attr = ldf attr in base;
    r86 = dyn attr(x6, "covariance");
    check L86() else D36();
  L88():
    p17 = prom<V +>{
      varex = ld varex;
      varex1 = force? varex;
      checkMissing(varex1);
      return varex1;
    };
    p20 = prom<V +>{
      vx2 = ld vx;
      vx3 = force? vx2;
      checkMissing(vx3);
      p18 = ld p;
      p19 = force? p18;
      checkMissing(p19);
      r88 = `/`(vx3, p19);
      return r88;
    };
    r90 = dyn rbind1[, `Proportion Var`](p17, p20);
    check L89() else D38();
  L96():
    r101 = dyn cat1("\n");
    check L97() else D43();
  D36():
    deopt 127 [r86];
  D38():
    deopt 134 [r90];
  D43():
    deopt 154 [r101];
  L86():
    goto L15(r86);
  L89():
    st varex = r90;
    factors2 = ld factors;
    check L90() else D39();
  L97():
    print1 = ldf print;
    check L98() else D44();
  D39():
    deopt 136 [factors2];
  D44():
    deopt 156 [];
  L90():
    factors3 = force? factors2;
    checkMissing(factors3);
    r91 = `>`(factors3, 1.0);
    c8 = `as.logical`(r91);
    if c8 then L91() else L17();
  L98():
    p25 = prom<V +>{
      sym9 = ldf round;
      base9 = ldf round in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r103):
      return r103;
    L1():
      round1 = ldf round in base;
      r104 = dyn round1(<sym varex>, <sym digits>);
      goto L0(r104);
    L2():
      r102 = dyn base9(<sym varex>, <sym digits>);
      goto L0(r102);
    };
    r106 = dyn print1(p25);
    check L99() else D45();
  D45():
    deopt 158 [r106];
  L17():
    goto L18(NULL);
  L18(r99):
    goto L19();
  L91():
    rbind2 = ldf rbind;
    check L92() else D40();
  L99():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L100() else L101();
  D40():
    deopt 141 [];
  L20(r108):
    popenv;
    return r108;
  L92():
    p21 = prom<V +>{
      varex2 = ld varex;
      varex3 = force? varex2;
      checkMissing(varex3);
      return varex3;
    };
    p24 = prom<V +>{
      sym8 = ldf cumsum;
      base8 = ldf cumsum in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r94):
      return r94;
    L1():
      vx4 = ld vx;
      vx5 = force? vx4;
      checkMissing(vx5);
      p22 = ld p;
      p23 = force? p22;
      checkMissing(p23);
      r95 = `/`(vx5, p23);
      cumsum = ldf cumsum in base;
      r96 = dyn cumsum(r95);
      goto L0(r96);
    L2():
      r93 = dyn base8(<lang `/`(vx, p)>);
      goto L0(r93);
    };
    r98 = dyn rbind2[, `Cumulative Var`](p21, p24);
    check L93() else D41();
  L100():
    x7 = ld x;
    check L102() else D46();
  L101():
    r107 = dyn base10(<sym x>);
    goto L20(r107);
  D41():
    deopt 145 [r98];
  D46():
    deopt 161 [x7];
  L93():
    st varex = r98;
    goto L18(r98);
  L102():
    x8 = force? x7;
    checkMissing(x8);
    invisible = ldf invisible in base;
    r109 = dyn invisible(x8);
    check L103() else D47();
  D47():
    deopt 164 [r109];
  L103():
    goto L20(r109);
  }
}