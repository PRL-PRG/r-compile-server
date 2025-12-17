fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2807944285;
    st `print.anova` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2807944285(x, digits, `signif.stars`, `...`) {
  (reg x:*, reg digits:*, reg signif_stars:*, reg ddd:dots) -+> V { var x:*, var digits:*, reg digits_isMissing:L, reg digits_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg getOption:cls, reg r2:V, reg r3:V, reg max:cls, reg r4:V, reg p:p(V +), var `signif.stars`:*, reg signif_stars_isMissing:L, reg signif_stars_orDefault:*, reg getOption1:cls, reg r6:V, reg p1:p(V +), var `...`:dots?, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x1:*, reg x2:V, reg attr:cls, reg r12:V, reg c:V, reg r13:V, reg c1:L, reg cat:cls, reg heading:*, reg heading1:V, reg p2:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg r18:V, reg x3:*, reg x4:V, reg dim:cls, reg r19:V, reg c2:L, reg r21:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r23:V, reg r24:V, reg colnames:cls, reg x5:*, reg x6:V, reg p3:p(V +), reg r26:V, reg c3:V, reg c4:L, reg stop:cls, reg r27:V, reg grepl:cls, reg cn:*, reg cn1:V, reg c5:L, reg cn3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg nc:*, reg nc1:V, reg __1:cls, reg r29:V, reg p4:p(V +), reg r31:V, reg has_P:*, reg has_P1:V, reg c6:L, reg nc2:*, reg nc3:V, reg r34:V, reg r35:I, reg r36:V, reg nc4:*, reg nc5:V, reg r37:V, reg which:cls, reg substr:cls, reg cn4:*, reg cn5:V, reg p5:p(V +), reg r39:V, reg r40:V, reg p6:p(V +), reg r42:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r43:V, reg r44:V, reg i:*, reg i1:V, reg which1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r45:V, reg r46:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg cn6:*, reg cn7:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r49:V, reg r50:V, reg c7:cls, reg r51:V, reg match:cls, reg r52:V, reg is_na:cls, reg r53:V, reg r54:V, reg p7:p(V +), reg r56:V, reg c8:cls, reg r57:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r58:V, reg r59:V, reg i2:*, reg i3:V, reg length:cls, reg r60:V, reg c9:L, reg zap_i:*, reg zap_i1:V, reg c10:L, reg zap_i3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg _in_:cls, reg zap_i4:*, reg zap_i5:V, reg p8:p(V +), reg i4:*, reg i5:V, reg p9:p(V +), reg r63:V, reg r64:V, reg __2:cls, reg r65:V, reg i6:*, reg i7:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg grep:cls, reg cn8:*, reg cn9:V, reg p10:p(V +), reg r69:V, reg length1:cls, reg r70:V, reg c11:L, reg zap_i6:*, reg zap_i7:V, reg c12:L, reg zap_i9:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg _in_1:cls, reg zap_i10:*, reg zap_i11:V, reg p11:p(V +), reg i8:*, reg i9:V, reg p12:p(V +), reg r73:V, reg r74:V, reg __3:cls, reg r75:V, reg printCoefmat:cls, reg x7:*, reg x8:V, reg p13:p(V +), reg digits1:*, reg digits2:V, reg p14:p(V +), reg signif_stars1:*, reg signif_stars2:V, reg p15:p(V +), reg has_P2:*, reg has_P3:V, reg p16:p(V +), reg has_P4:*, reg has_P5:V, reg p17:p(V +), reg zap_i12:*, reg zap_i13:V, reg p18:p(V +), reg tst_i:*, reg tst_i1:V, reg p19:p(V +), reg ddd1:dots?, reg r83:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r84:V, reg r85:V, reg x9:*, reg x10:V, reg invisible:cls, reg r86:V |
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
      r3 = `-`(r2, 2);
      max = ldf max in base;
      r4 = dyn max(r3, 3);
      goto L0(r4);
    L2():
      r = dyn base(<lang `-`(getOption("digits"), 2)>, 3);
      goto L0(r);
    };
    goto L1(p);
  L1(digits_orDefault):
    st digits = digits_orDefault;
    signif_stars_isMissing = missing.0(signif_stars);
    if signif_stars_isMissing then L2() else L3(signif_stars);
  L2():
    p1 = prom<V +>{
      getOption1 = ldf getOption;
      r6 = dyn getOption1("show.signif.stars");
      return r6;
    };
    goto L3(p1);
  L3(signif_stars_orDefault):
    st `signif.stars` = signif_stars_orDefault;
    st `...` = ddd;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L4(r9):
    r13 = `!`(r9);
    c1 = `as.logical`(r13);
    if c1 then L31() else L6();
  L25():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L27() else L28();
  L26():
    r8 = dyn base1(<lang `<-`(heading, attr(x, "heading"))>);
    goto L4(r8);
  L5(r11):
    st heading = r11;
    c = `==`(r11, NULL);
    goto L4(c);
  L6():
    goto L7();
  L7():
    sym3 = ldf dim;
    base3 = ldf dim in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L35() else L36();
  L27():
    x1 = ld x;
    check L29() else D0();
  L28():
    r10 = dyn base2(<sym x>, "heading");
    goto L5(r10);
  L31():
    cat = ldf cat;
    check L32() else D2();
  D0():
    deopt 3 [x1];
  D2():
    deopt 12 [];
  L8(r18):
    c2 = `is.object`(r18);
    if c2 then L39() else L40(r18);
  L29():
    x2 = force? x1;
    checkMissing(x2);
    attr = ldf attr in base;
    r12 = dyn attr(x2, "heading");
    check L30() else D1();
  L32():
    p2 = prom<V +>{
      heading = ld heading;
      heading1 = force? heading;
      checkMissing(heading1);
      return heading1;
    };
    r15 = dyn cat[, sep](p2, "\n");
    check L33() else D3();
  L35():
    x3 = ld x;
    check L37() else D4();
  L36():
    r17 = dyn base3(<sym x>);
    goto L8(r17);
  D1():
    deopt 7 [r12];
  D3():
    deopt 16 [r15];
  D4():
    deopt 21 [x3];
  L9(dx1):
    st nc = dx1;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L42() else L43();
  L30():
    goto L5(r12);
  L33():
    goto L7();
  L37():
    x4 = force? x3;
    checkMissing(x4);
    dim = ldf dim in base;
    r19 = dyn dim(x4);
    check L38() else D5();
  L39():
    dr = tryDispatchBuiltin.1("[", r18);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L41() else L40(dr);
  L40(r21):
    __ = ldf `[` in base;
    r22 = dyn __(r21, 2);
    goto L9(r22);
  D5():
    deopt 24 [r19];
  L10(r24):
    c4 = `as.logical`(r24);
    if c4 then L46() else L11();
  L38():
    goto L8(r19);
  L41():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(dx);
  L42():
    colnames = ldf colnames;
    check L44() else D6();
  L43():
    r23 = dyn base4(<lang `<-`(cn, colnames(x))>);
    goto L10(r23);
  D6():
    deopt 31 [];
  L11():
    goto L12();
  L12():
    grepl = ldf grepl;
    check L50() else D10();
  L44():
    p3 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      return x6;
    };
    r26 = dyn colnames(p3);
    check L45() else D7();
  L46():
    stop = ldf stop;
    check L47() else D8();
  D7():
    deopt 33 [r26];
  D8():
    deopt 37 [];
  D10():
    deopt 43 [];
  L45():
    st cn = r26;
    c3 = `==`(r26, NULL);
    goto L10(c3);
  L47():
    r27 = dyn stop("'anova' object must have colnames");
    check L48() else D9();
  L50():
    p4 = prom<V +>{
      cn = ld cn;
      cn1 = force? cn;
      checkMissing(cn1);
      c5 = `is.object`(cn1);
      if c5 then L1() else L2(cn1);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", cn1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(cn3):
      nc = ld nc;
      nc1 = force? nc;
      __1 = ldf `[` in base;
      r29 = dyn __1(cn3, nc1);
      goto L0(r29);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r31 = dyn grepl("^(P|Pr)\\(", p4);
    check L51() else D11();
  D9():
    deopt 39 [r27];
  D11():
    deopt 46 [r31];
  L48():
    goto L12();
  L51():
    st `has.P` = r31;
    has_P = ld `has.P`;
    check L52() else D12();
  D12():
    deopt 49 [1, has_P];
  L52():
    has_P1 = force? has_P;
    checkMissing(has_P1);
    c6 = `as.logical`(has_P1);
    if c6 then L53() else L13();
  L13():
    nc4 = ld nc;
    check L56() else D14();
  L14(r35, r36):
    r37 = `:`(r35, r36);
    st `zap.i` = r37;
    which = ldf which;
    check L57() else D15();
  L53():
    nc2 = ld nc;
    check L54() else D13();
  D13():
    deopt 51 [1, nc2];
  D14():
    deopt 55 [1, nc4];
  D15():
    deopt 60 [];
  L54():
    nc3 = force? nc2;
    checkMissing(nc3);
    r34 = `-`(nc3, 1.0);
    goto L14(1, r34);
  L56():
    nc5 = force? nc4;
    checkMissing(nc5);
    goto L14(1, nc5);
  L57():
    p6 = prom<V +>{
      substr = ldf substr;
      p5 = prom<V +>{
        cn4 = ld cn;
        cn5 = force? cn4;
        checkMissing(cn5);
        return cn5;
      };
      r39 = dyn substr(p5, 2.0, 7.0);
      r40 = `==`(r39, " value");
      return r40;
    };
    r42 = dyn which(p6);
    check L58() else D16();
  D16():
    deopt 62 [r42];
  L58():
    st i = r42;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L59() else L60();
  L15(r44):
    st i = r44;
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L65() else L66();
  L59():
    i = ld i;
    check L61() else D17();
  L60():
    r43 = dyn base5(<sym i>, <lang which(`!`(is.na(match(cn, c("F", "Cp", "Chisq")))))>);
    goto L15(r43);
  D17():
    deopt 66 [i];
  L16(r59):
    c9 = `as.logical`(r59);
    if c9 then L69() else L17();
  L61():
    i1 = force? i;
    checkMissing(i1);
    which1 = ldf which;
    check L62() else D18();
  L65():
    i2 = ld i;
    check L67() else D21();
  L66():
    r58 = dyn base9(<sym i>);
    goto L16(r58);
  D18():
    deopt 69 [];
  D21():
    deopt 77 [i2];
  L17():
    goto L19();
  L19():
    i6 = ld i;
    check L77() else D26();
  L62():
    p7 = prom<V +>{
      sym6 = ldf `is.na`;
      base6 = ldf `is.na` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r46):
      r54 = `!`(r46);
      return r54;
    L3():
      sym7 = ldf match;
      base7 = ldf match in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L5() else L6();
    L4():
      r45 = dyn base6(<lang match(cn, c("F", "Cp", "Chisq"))>);
      goto L0(r45);
    L1(r48):
      is_na = ldf `is.na` in base;
      r53 = dyn is_na(r48);
      goto L0(r53);
    L5():
      cn6 = ld cn;
      cn7 = force? cn6;
      checkMissing(cn7);
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L7() else L8();
    L6():
      r47 = dyn base7(<sym cn>, <lang c("F", "Cp", "Chisq")>);
      goto L1(r47);
    L2(r50):
      match = ldf match in base;
      r52 = dyn match(cn7, r50, NA_INT, NULL);
      goto L1(r52);
    L7():
      c7 = ldf c in base;
      r51 = dyn c7("F", "Cp", "Chisq");
      goto L2(r51);
    L8():
      r49 = dyn base8("F", "Cp", "Chisq");
      goto L2(r49);
    };
    r56 = dyn which1(p7);
    check L63() else D19();
  L67():
    i3 = force? i2;
    checkMissing(i3);
    length = ldf length in base;
    r60 = dyn length(i3);
    check L68() else D22();
  L69():
    zap_i = ld `zap.i`;
    check L70() else D23();
  D19():
    deopt 71 [r56];
  D22():
    deopt 80 [r60];
  D23():
    deopt 81 [zap_i];
  D26():
    deopt 93 [i6];
  L63():
    c8 = ldf c in base;
    r57 = dyn c8(i1, r56);
    check L64() else D20();
  L68():
    goto L16(r60);
  L70():
    zap_i1 = force? zap_i;
    checkMissing(zap_i1);
    c10 = `is.object`(zap_i1);
    if c10 then L71() else L72(zap_i1);
  L77():
    i7 = force? i6;
    checkMissing(i7);
    st `tst.i` = i7;
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L78() else L79();
  D20():
    deopt 73 [r57];
  L18(dx5):
    st `zap.i` = dx5;
    goto L19();
  L20(r67):
    c11 = `as.logical`(r67);
    if c11 then L83() else L21();
  L64():
    goto L15(r57);
  L71():
    dr4 = tryDispatchBuiltin.1("[", zap_i1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L73() else L72(dr4);
  L72(zap_i3):
    _in_ = ldf `%in%`;
    check L74() else D24();
  L78():
    grep = ldf grep;
    check L80() else D27();
  L79():
    r66 = dyn base10(<lang `<-`(i, grep("Df$", cn))>);
    goto L20(r66);
  D24():
    deopt 84 [zap_i3];
  D27():
    deopt 99 [];
  L21():
    goto L23();
  L23():
    printCoefmat = ldf printCoefmat;
    check L91() else D33();
  L73():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L18(dx4);
  L74():
    p8 = prom<V +>{
      zap_i4 = ld `zap.i`;
      zap_i5 = force? zap_i4;
      checkMissing(zap_i5);
      return zap_i5;
    };
    p9 = prom<V +>{
      i4 = ld i;
      i5 = force? i4;
      checkMissing(i5);
      return i5;
    };
    r63 = dyn _in_(p8, p9);
    check L75() else D25();
  L80():
    p10 = prom<V +>{
      cn8 = ld cn;
      cn9 = force? cn8;
      checkMissing(cn9);
      return cn9;
    };
    r69 = dyn grep("Df$", p10);
    check L81() else D28();
  L83():
    zap_i6 = ld `zap.i`;
    check L84() else D30();
  D25():
    deopt 87 [zap_i3, r63];
  D28():
    deopt 102 [r69];
  D30():
    deopt 106 [zap_i6];
  D33():
    deopt 119 [];
  L75():
    r64 = `!`(r63);
    __2 = ldf `[` in base;
    r65 = dyn __2(zap_i3, r64);
    goto L18(r65);
  L81():
    st i = r69;
    length1 = ldf length in base;
    r70 = dyn length1(r69);
    check L82() else D29();
  L84():
    zap_i7 = force? zap_i6;
    checkMissing(zap_i7);
    c12 = `is.object`(zap_i7);
    if c12 then L85() else L86(zap_i7);
  L91():
    p13 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      return x8;
    };
    p14 = prom<V +>{
      digits1 = ld digits;
      digits2 = force? digits1;
      checkMissing(digits2);
      return digits2;
    };
    p15 = prom<V +>{
      signif_stars1 = ld `signif.stars`;
      signif_stars2 = force? signif_stars1;
      checkMissing(signif_stars2);
      return signif_stars2;
    };
    p16 = prom<V +>{
      has_P2 = ld `has.P`;
      has_P3 = force? has_P2;
      checkMissing(has_P3);
      return has_P3;
    };
    p17 = prom<V +>{
      has_P4 = ld `has.P`;
      has_P5 = force? has_P4;
      checkMissing(has_P5);
      return has_P5;
    };
    p18 = prom<V +>{
      zap_i12 = ld `zap.i`;
      zap_i13 = force? zap_i12;
      checkMissing(zap_i13);
      return zap_i13;
    };
    p19 = prom<V +>{
      tst_i = ld `tst.i`;
      tst_i1 = force? tst_i;
      checkMissing(tst_i1);
      return tst_i1;
    };
    ddd1 = ld `...`;
    r83 = dyn printCoefmat[, digits, `signif.stars`, `has.Pvalue`, `P.values`, `cs.ind`, `zap.ind`, `tst.ind`, `na.print`, `...`](p13, p14, p15, p16, p17, NULL, p18, p19, "", ddd1);
    check L92() else D34();
  D29():
    deopt 105 [r70];
  D34():
    deopt 138 [r83];
  L22(dx8):
    st `zap.i` = dx8;
    goto L23();
  L82():
    goto L20(r70);
  L85():
    dr6 = tryDispatchBuiltin.1("[", zap_i7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L87() else L86(dr6);
  L86(zap_i9):
    _in_1 = ldf `%in%`;
    check L88() else D31();
  L92():
    sym11 = ldf invisible;
    base11 = ldf invisible in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L93() else L94();
  D31():
    deopt 109 [zap_i9];
  L24(r85):
    popenv;
    return r85;
  L87():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L22(dx7);
  L88():
    p11 = prom<V +>{
      zap_i10 = ld `zap.i`;
      zap_i11 = force? zap_i10;
      checkMissing(zap_i11);
      return zap_i11;
    };
    p12 = prom<V +>{
      i8 = ld i;
      i9 = force? i8;
      checkMissing(i9);
      return i9;
    };
    r73 = dyn _in_1(p11, p12);
    check L89() else D32();
  L93():
    x9 = ld x;
    check L95() else D35();
  L94():
    r84 = dyn base11(<sym x>);
    goto L24(r84);
  D32():
    deopt 112 [zap_i9, r73];
  D35():
    deopt 141 [x9];
  L89():
    r74 = `!`(r73);
    __3 = ldf `[` in base;
    r75 = dyn __3(zap_i9, r74);
    goto L22(r75);
  L95():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r86 = dyn invisible(x10);
    check L96() else D36();
  D36():
    deopt 144 [r86];
  L96():
    goto L24(r86);
  }
}