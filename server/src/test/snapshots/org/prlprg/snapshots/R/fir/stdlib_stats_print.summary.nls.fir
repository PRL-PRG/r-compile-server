fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2387351139;
    st `print.summary.nls` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2387351139(x, digits, `symbolic.cor`, `signif.stars`, `...`) {
  (reg x:*, reg digits:*, reg symbolic_cor:*, reg signif_stars:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `symbolic.cor`:*, reg symbolic_cor_isMissing:L, reg symbolic_cor_orDefault:*, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V, reg p1:p(V +), var `signif.stars`:*, reg signif_stars_isMissing:L, reg signif_stars_orDefault:*, reg getOption1:cls, reg r8:V, reg p2:p(V +), var `...`:dots?, reg cat:cls, reg paste:cls, reg deparse:cls, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:V, reg p5:p(V +), reg r16:V, reg x9:*, reg x10:V, reg c2:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r17:V, reg df:*, reg df1:V, reg c3:L, reg df3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __:cls, reg r18:V, reg cat1:cls, reg r19:V, reg printCoefmat:cls, reg x13:*, reg x14:V, reg c4:L, reg x16:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r20:V, reg p6:p(V +), reg digits1:*, reg digits2:V, reg p7:p(V +), reg signif_stars1:*, reg signif_stars2:V, reg p8:p(V +), reg ddd1:dots?, reg r24:V, reg cat2:cls, reg format:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg signif:cls, reg r27:V, reg p9:p(V +), reg r29:V, reg p10:p(V +), reg rdf:*, reg rdf1:V, reg p11:p(V +), reg r32:V, reg cat3:cls, reg r33:V, reg x17:*, reg x18:V, reg c5:L, reg x20:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg r36:V, reg correl:*, reg correl1:V, reg c6:V, reg r37:V, reg c7:L, reg NCOL:cls, reg correl2:*, reg correl3:V, reg p12:p(V +), reg r39:V, reg p13:*, reg p14:V, reg r40:V, reg c8:L, reg cat4:cls, reg r41:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r42:V, reg r43:V, reg symbolic_cor1:*, reg symbolic_cor2:V, reg c9:L, reg c10:L, reg c12:V, reg symbolic_cor3:*, reg symbolic_cor4:V, reg c13:L, reg c14:V, reg c16:L, reg print:cls, reg symnum:cls, reg correl4:*, reg correl5:V, reg p15:p(V +), reg r45:V, reg p16:p(V +), reg r47:V, reg r48:V, reg format1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r49:V, reg r50:V, reg round:cls, reg r51:V, reg p17:p(V +), reg digits3:*, reg digits4:V, reg p18:p(V +), reg r54:V, reg l:*, reg c17:L, reg r56:S, reg l2:*, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg lower_tri:cls, reg correl6:*, reg correl7:V, reg p19:p(V +), reg r60:V, reg r61:V, reg ___:cls, reg r62:V, reg print1:cls, reg correl8:*, reg correl9:V, reg c18:L, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg p20:*, reg p21:V, reg r63:V, reg __1:cls, reg r64:V, reg p22:p(V +), reg r66:V, reg r67:V, reg _p_nls_convInfo:cls, reg x21:*, reg x22:V, reg p23:p(V +), reg digits5:*, reg digits6:V, reg p24:p(V +), reg r71:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r72:V, reg r73:V, reg naprint:cls, reg x23:*, reg x24:V, reg c19:L, reg x26:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r74:V, reg p25:p(V +), reg r76:V, reg nzchar:cls, reg r77:V, reg c20:L, reg cat5:cls, reg mess:*, reg mess1:V, reg p26:p(V +), reg r79:V, reg cat6:cls, reg r81:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r82:V, reg r83:V, reg x27:*, reg x28:V, reg invisible:cls, reg r84:V |
    mkenv;
    st x = x;
    digits_isMissing = missing.0(digits);
    if digits_isMissing then L0() else L1(digits);
  L0():
    p = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      getOption = ldf getOption;
      r2 = dyn getOption("digits");
      r3 = `-`(r2, 3);
      max = ldf max in base;
      r4 = dyn max(3, r3);
      goto L0(r4);
    L2():
      r = dyn base(3, <lang `-`(getOption("digits"), 3)>);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    symbolic_cor_isMissing = missing.0(symbolic_cor);
    if symbolic_cor_isMissing then L2() else L3(symbolic_cor);
  L2():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.object`(x2);
      if c then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r6 = `$`(x4, <sym symbolic.cor>);
      goto L0(r6);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    goto L3(p1);
  L3(symbolic_cor_orDefault):
    st `symbolic.cor` = symbolic_cor_orDefault;
    signif_stars_isMissing = missing.0(signif_stars);
    if signif_stars_isMissing then L4() else L5(signif_stars);
  L4():
    p2 = prom<V +>{
      getOption1 = ldf getOption;
      r8 = dyn getOption1("show.signif.stars");
      return r8;
    };
    goto L5(p2);
  L5(signif_stars_orDefault):
    st `signif.stars` = signif_stars_orDefault;
    st `...` = ddd;
    cat = ldf cat;
    check L21() else D0();
  D0():
    deopt 1 [];
  L21():
    p5 = prom<V +>{
      paste = ldf paste;
      p4 = prom<V +>{
        deparse = ldf deparse;
        p3 = prom<V +>{
          x5 = ld x;
          x6 = force? x5;
          checkMissing(x6);
          c1 = `is.object`(x6);
          if c1 then L1() else L2(x6);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("$", x6);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(x8):
          r10 = `$`(x8, <sym formula>);
          goto L0(r10);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r12 = dyn deparse(p3);
        return r12;
      };
      r14 = dyn paste[, sep, collapse](p4, "\n", "\n");
      return r14;
    };
    r16 = dyn cat[, , , sep]("\nFormula: ", p5, "\n", "");
    check L22() else D1();
  D1():
    deopt 7 [r16];
  L22():
    x9 = ld x;
    check L23() else D2();
  D2():
    deopt 8 [x9];
  L23():
    x10 = force? x9;
    checkMissing(x10);
    c2 = `is.object`(x10);
    if c2 then L25() else L26(x10);
  L24(dx5):
    st df = dx5;
    df = ld df;
    check L28() else D3();
  L25():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L27() else L26(dr4);
  L26(x12):
    r17 = `$`(x12, <sym df>);
    goto L24(r17);
  D3():
    deopt 12 [df];
  L27():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L24(dx4);
  L28():
    df1 = force? df;
    checkMissing(df1);
    c3 = `is.object`(df1);
    if c3 then L29() else L30(df1);
  L6(dx7):
    st rdf = dx7;
    cat1 = ldf cat;
    check L32() else D4();
  L29():
    dr6 = tryDispatchBuiltin.1("[", df1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L31() else L30(dr6);
  L30(df3):
    __ = ldf `[` in base;
    r18 = dyn __(df3, 2);
    goto L6(r18);
  D4():
    deopt 19 [];
  L31():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L6(dx6);
  L32():
    r19 = dyn cat1("\nParameters:\n");
    check L33() else D5();
  D5():
    deopt 21 [r19];
  L33():
    printCoefmat = ldf printCoefmat;
    check L34() else D6();
  D6():
    deopt 23 [];
  L34():
    p6 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c4 = `is.object`(x14);
      if c4 then L1() else L2(x14);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x14);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x16):
      r20 = `$`(x16, <sym coefficients>);
      goto L0(r20);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p7 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    p8 = prom<V +>{
      signif_stars1 = ld `signif.stars`;
      signif_stars2 = force? signif_stars1;
      checkMissing(signif_stars2);
      return signif_stars2;
    };
    ddd1 = ld `...`;
    r24 = dyn printCoefmat[, digits, `signif.stars`, `...`](p6, p7, p8, ddd1);
    check L35() else D7();
  D7():
    deopt 30 [r24];
  L35():
    cat2 = ldf cat;
    check L36() else D8();
  D8():
    deopt 32 [];
  L36():
    p10 = prom<V +>{
      format = ldf format;
      p9 = prom<V +>{
        sym1 = ldf signif;
        base1 = ldf signif in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        signif = ldf signif in base;
        r27 = dyn signif(<lang `$`(x, sigma)>, <sym digits>);
        goto L0(r27);
      L2():
        r25 = dyn base1(<lang `$`(x, sigma)>, <sym digits>);
        goto L0(r25);
      };
      r29 = dyn format(p9);
      return r29;
    };
    p11 = prom<V +>{
      rdf = ld rdf;
      rdf1 = force? rdf;
      checkMissing(rdf1);
      return rdf1;
    };
    r32 = dyn cat2("\nResidual standard error:", p10, "on", p11, "degrees of freedom");
    check L37() else D9();
  D9():
    deopt 38 [r32];
  L37():
    cat3 = ldf cat;
    check L38() else D10();
  D10():
    deopt 40 [];
  L38():
    r33 = dyn cat3("\n");
    check L39() else D11();
  D11():
    deopt 42 [r33];
  L39():
    x17 = ld x;
    check L40() else D12();
  D12():
    deopt 43 [x17];
  L40():
    x18 = force? x17;
    checkMissing(x18);
    c5 = `is.object`(x18);
    if c5 then L42() else L43(x18);
  L41(dx11):
    st correl = dx11;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L42():
    dr10 = tryDispatchBuiltin.1("$", x18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L44() else L43(dr10);
  L43(x20):
    r34 = `$`(x20, <sym correlation>);
    goto L41(r34);
  L7(r36):
    r37 = `!`(r36);
    c7 = `as.logical`(r37);
    if c7 then L48() else L8();
  L44():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L41(dx10);
  L45():
    correl = ld correl;
    check L47() else D13();
  L46():
    r35 = dyn base2(<sym correl>);
    goto L7(r35);
  D13():
    deopt 48 [correl];
  L8():
    goto L16();
  L16():
    _p_nls_convInfo = ldf `.p.nls.convInfo`;
    check L76() else D29();
  L47():
    correl1 = force? correl;
    checkMissing(correl1);
    c6 = `==`(correl1, NULL);
    goto L7(c6);
  L48():
    NCOL = ldf NCOL;
    check L49() else D14();
  D14():
    deopt 53 [];
  D29():
    deopt 106 [];
  L49():
    p12 = prom<V +>{
      correl2 = ld correl;
      correl3 = force? correl2;
      checkMissing(correl3);
      return correl3;
    };
    r39 = dyn NCOL(p12);
    check L50() else D15();
  L76():
    p23 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      return x22;
    };
    p24 = prom<V +>{
      digits5 = ld digits;
      digits6 = force? digits5;
      checkMissing(digits6);
      return digits6;
    };
    r71 = dyn _p_nls_convInfo[, digits](p23, p24);
    check L77() else D30();
  D15():
    deopt 55 [r39];
  D30():
    deopt 110 [r71];
  L50():
    st p = r39;
    p13 = ld p;
    check L51() else D16();
  L77():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L78() else L79();
  D16():
    deopt 57 [p13];
  L17(r73):
    c20 = `as.logical`(r73);
    if c20 then L83() else L18();
  L51():
    p14 = force? p13;
    checkMissing(p14);
    r40 = `>`(p14, 1.0);
    c8 = `as.logical`(r40);
    if c8 then L52() else L9();
  L78():
    naprint = ldf naprint;
    check L80() else D31();
  L79():
    r72 = dyn base5(<lang `<-`(mess, naprint(`$`(x, na.action)))>);
    goto L17(r72);
  D31():
    deopt 114 [];
  L9():
    goto L15(NULL);
  L15(r67):
    goto L16();
  L18():
    goto L19();
  L19():
    cat6 = ldf cat;
    check L87() else D36();
  L52():
    cat4 = ldf cat;
    check L53() else D17();
  L80():
    p25 = prom<V +>{
      x23 = ld x;
      x24 = force? x23;
      checkMissing(x24);
      c19 = `is.object`(x24);
      if c19 then L1() else L2(x24);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x24);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x26):
      r74 = `$`(x26, <sym na.action>);
      goto L0(r74);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    r76 = dyn naprint(p25);
    check L81() else D32();
  L83():
    cat5 = ldf cat;
    check L84() else D34();
  D17():
    deopt 62 [];
  D32():
    deopt 116 [r76];
  D34():
    deopt 121 [];
  D36():
    deopt 131 [];
  L53():
    r41 = dyn cat4("\nCorrelation of Parameter Estimates:\n");
    check L54() else D18();
  L81():
    st mess = r76;
    nzchar = ldf nzchar in base;
    r77 = dyn nzchar(r76);
    check L82() else D33();
  L84():
    p26 = prom<V +>{
      mess = ld mess;
      mess1 = force? mess;
      checkMissing(mess1);
      return mess1;
    };
    r79 = dyn cat5[, , , sep]("  (", p26, ")\n", "");
    check L85() else D35();
  L87():
    r81 = dyn cat6("\n");
    check L88() else D37();
  D18():
    deopt 64 [r41];
  D33():
    deopt 119 [r77];
  D35():
    deopt 127 [r79];
  D37():
    deopt 133 [r81];
  L54():
    sym3 = ldf `is.logical`;
    base3 = ldf `is.logical` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L82():
    goto L17(r77);
  L85():
    goto L19();
  L88():
    sym6 = ldf invisible;
    base6 = ldf invisible in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L89() else L90();
  L10(r43):
    c10 = `as.logical`(r43);
    if c10 then L58() else L11(c10);
  L20(r83):
    popenv;
    return r83;
  L55():
    symbolic_cor1 = ld `symbolic.cor`;
    check L57() else D19();
  L56():
    r42 = dyn base3(<sym symbolic.cor>);
    goto L10(r42);
  L89():
    x27 = ld x;
    check L91() else D38();
  L90():
    r82 = dyn base6(<sym x>);
    goto L20(r82);
  D19():
    deopt 66 [symbolic_cor1];
  D38():
    deopt 136 [x27];
  L11(c12):
    c16 = `as.logical`(c12);
    if c16 then L61() else L12();
  L57():
    symbolic_cor2 = force? symbolic_cor1;
    checkMissing(symbolic_cor2);
    c9 = `is.logical`(symbolic_cor2);
    goto L10(c9);
  L58():
    symbolic_cor3 = ld `symbolic.cor`;
    check L59() else D20();
  L91():
    x28 = force? x27;
    checkMissing(x28);
    invisible = ldf invisible in base;
    r84 = dyn invisible(x28);
    check L92() else D39();
  D20():
    deopt 69 [c10, symbolic_cor3];
  D39():
    deopt 139 [r84];
  L12():
    format1 = ldf format;
    check L65() else D23();
  L13(r48):
    goto L15(r48);
  L59():
    symbolic_cor4 = force? symbolic_cor3;
    checkMissing(symbolic_cor4);
    c13 = `as.logical`(symbolic_cor4);
    c14 = `&&`(c10, c13);
    goto L11(c14);
  L61():
    print = ldf print;
    check L62() else D21();
  L92():
    goto L20(r84);
  D21():
    deopt 73 [];
  D23():
    deopt 77 [];
  L62():
    p16 = prom<V +>{
      symnum = ldf symnum;
      p15 = prom<V +>{
        correl4 = ld correl;
        correl5 = force? correl4;
        checkMissing(correl5);
        return correl5;
      };
      r45 = dyn symnum[, `abbr.colnames`](p15, NULL);
      return r45;
    };
    r47 = dyn print(p16);
    check L63() else D22();
  L65():
    p17 = prom<V +>{
      sym4 = ldf round;
      base4 = ldf round in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r50):
      return r50;
    L1():
      round = ldf round in base;
      r51 = dyn round(<sym correl>, 2.0);
      goto L0(r51);
    L2():
      r49 = dyn base4(<sym correl>, 2.0);
      goto L0(r49);
    };
    p18 = prom<V +>{
      digits3 = ld digits;
      digits4 = force? digits3;
      checkMissing(digits4);
      return digits4;
    };
    r54 = dyn format1[, nsmall, digits](p17, 2, p18);
    check L66() else D24();
  D22():
    deopt 75 [r47];
  D24():
    deopt 83 [r54];
  L63():
    goto L13(r47);
  L66():
    st correl = r54;
    l = ld correl;
    c17 = `is.object`(l);
    if c17 then L67() else L68("", l);
  L14(dx13):
    st correl = dx13;
    print1 = ldf print;
    check L72() else D27();
  L67():
    dr12 = tryDispatchBuiltin.0("[<-", l, "");
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L69() else L68("", dr12);
  L68(r56, l2):
    lower_tri = ldf `lower.tri`;
    check L70() else D25();
  D25():
    deopt 89 [r56, l2, ""];
  D27():
    deopt 96 [];
  L69():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L14(dx12);
  L70():
    p19 = prom<V +>{
      correl6 = ld correl;
      correl7 = force? correl6;
      checkMissing(correl7);
      return correl7;
    };
    r60 = dyn lower_tri(p19);
    check L71() else D26();
  L72():
    p22 = prom<V +>{
      correl8 = ld correl;
      correl9 = force? correl8;
      checkMissing(correl9);
      c18 = `is.object`(correl9);
      if c18 then L1() else L2();
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", correl9);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2();
    L2():
      p20 = ld p;
      p21 = force? p20;
      checkMissing(p21);
      r63 = `-`(<missing>, p21);
      __1 = ldf `[` in base;
      r64 = dyn __1(correl9, -1.0, r63, FALSE);
      goto L0(r64);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r66 = dyn print1[, quote](p22, FALSE);
    check L73() else D28();
  D26():
    deopt 91 [r56, l2, "", r60];
  D28():
    deopt 100 [r66];
  L71():
    r61 = `!`(r60);
    ___ = ldf `[<-` in base;
    r62 = dyn ___(l2, "", r61);
    goto L14(r62);
  L73():
    goto L13(r66);
  }
}