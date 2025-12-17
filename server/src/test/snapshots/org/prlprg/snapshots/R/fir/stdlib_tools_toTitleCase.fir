fun main() {
  () -+> V { reg r:cls, reg toTitleCase:cls, reg r1:V, reg toTitleCase1:cls, reg r2:V, reg toTitleCase2:cls, reg r3:V, reg toTitleCase3:cls, reg r4:V, reg toTitleCase4:cls, reg r5:V, reg toTitleCase5:cls, reg r6:V, reg toTitleCase6:cls, reg r7:V |
    mkenv;
    r = clos inner3773442701;
    st toTitleCase = r;
    toTitleCase = ldf toTitleCase;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn toTitleCase("bayesian network modeling and analysis");
    check L1() else D1();
  D1():
    deopt 6 [r1];
  L1():
    toTitleCase1 = ldf toTitleCase;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r2 = dyn toTitleCase1("ensemble tool for predictions from species distribution models");
    check L3() else D3();
  D3():
    deopt 10 [r2];
  L3():
    toTitleCase2 = ldf toTitleCase;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    r3 = dyn toTitleCase2("small- and large-scale analysis");
    check L5() else D5();
  D5():
    deopt 14 [r3];
  L5():
    toTitleCase3 = ldf toTitleCase;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    r4 = dyn toTitleCase3("a small fox is jumping");
    check L7() else D7();
  D7():
    deopt 18 [r4];
  L7():
    toTitleCase4 = ldf toTitleCase;
    check L8() else D8();
  D8():
    deopt 20 [];
  L8():
    r5 = dyn toTitleCase4("is a small fox jumping?");
    check L9() else D9();
  D9():
    deopt 22 [r5];
  L9():
    toTitleCase5 = ldf toTitleCase;
    check L10() else D10();
  D10():
    deopt 24 [];
  L10():
    r6 = dyn toTitleCase5("a pangram: the quick brown fox jumps over the lazy dog");
    check L11() else D11();
  D11():
    deopt 26 [r6];
  L11():
    toTitleCase6 = ldf toTitleCase;
    check L12() else D12();
  D12():
    deopt 28 [];
  L12():
    r7 = dyn toTitleCase6("asking -- 'is a small fox jumping?'");
    check L13() else D13();
  D13():
    deopt 30 [r7];
  L13():
    popenv;
    return r7;
  }
}
fun inner3773442701(text) {
  (reg text:*) -+> V { var text:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg r6:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg text1:*, reg text2:V, reg typeof:cls, reg r9:V, reg r10:V, reg c2:L, reg stop:cls, reg r11:V, reg vapply:cls, reg text3:*, reg text4:V, reg p:p(V +), reg titleCase1:*, reg titleCase2:V, reg p1:p(V +), reg r15:V |
    mkenv;
    st text = text;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st alone = r1;
    st lpat = "^(a|an|and|are|as|at|be|but|by|en|for|if|in|is|nor|not|of|on|or|per|so|the|to|v[.]?|via|vs[.]?|from|into|than|that|with)$";
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L5():
    c = ldf c in base;
    r2 = dyn c("2D", "3D", "AIC", "BayesX", "GoF", "HTML", "LaTeX", "MonetDB", "OpenBUGS", "TeX", "U.S.", "U.S.A.", "WinBUGS", "aka", "et", "al.", "ggplot2", "i.e.", "jar", "jars", "ncdf", "netCDF", "rgl", "rpart", "xls", "xlsx");
    check L7() else D0();
  L6():
    r = dyn base("2D", "3D", "AIC", "BayesX", "GoF", "HTML", "LaTeX", "MonetDB", "OpenBUGS", "TeX", "U.S.", "U.S.A.", "WinBUGS", "aka", "et", "al.", "ggplot2", "i.e.", "jar", "jars", "ncdf", "netCDF", "rgl", "rpart", "xls", "xlsx");
    goto L0(r);
  D0():
    deopt 29 [r2];
  L1(r4):
    st either = r4;
    r6 = clos inner2501545716;
    st titleCase1 = r6;
    sym2 = ldf typeof;
    base2 = ldf typeof in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L7():
    goto L0(r2);
  L8():
    c1 = ldf c in base;
    r5 = dyn c1("all", "above", "after", "along", "also", "among", "any", "both", "can", "few", "it", "less", "log", "many", "may", "more", "over", "some", "their", "then", "this", "under", "until", "using", "von", "when", "where", "which", "will", "without", "yet", "you", "your");
    check L10() else D1();
  L9():
    r3 = dyn base1("all", "above", "after", "along", "also", "among", "any", "both", "can", "few", "it", "less", "log", "many", "may", "more", "over", "some", "their", "then", "this", "under", "until", "using", "von", "when", "where", "which", "will", "without", "yet", "you", "your");
    goto L1(r3);
  D1():
    deopt 70 [r5];
  L2(r8):
    r10 = `!=`(r8, "character");
    c2 = `as.logical`(r10);
    if c2 then L15() else L3();
  L10():
    goto L1(r5);
  L11():
    text1 = ld text;
    check L13() else D2();
  L12():
    r7 = dyn base2(<sym text>);
    goto L2(r7);
  D2():
    deopt 77 [text1];
  L3():
    goto L4();
  L4():
    vapply = ldf vapply;
    check L19() else D6();
  L13():
    text2 = force? text1;
    checkMissing(text2);
    typeof = ldf typeof in base;
    r9 = dyn typeof(text2);
    check L14() else D3();
  L15():
    stop = ldf stop;
    check L16() else D4();
  D3():
    deopt 80 [r9];
  D4():
    deopt 84 [];
  D6():
    deopt 90 [];
  L14():
    goto L2(r9);
  L16():
    r11 = dyn stop("'text' must be a character vector");
    check L17() else D5();
  L19():
    p = prom<V +>{
      text3 = ld text;
      text4 = force? text3;
      checkMissing(text4);
      return text4;
    };
    p1 = prom<V +>{
      titleCase1 = ld titleCase1;
      titleCase2 = force? titleCase1;
      checkMissing(titleCase2);
      return titleCase2;
    };
    r15 = dyn vapply[, , , `USE.NAMES`](p, p1, "<chr>", FALSE);
    check L20() else D7();
  D5():
    deopt 86 [r11];
  D7():
    deopt 96 [r15];
  L17():
    goto L4();
  L20():
    popenv;
    return r15;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg x1:*, reg x2:V, reg is_na:cls, reg r3:V, reg c:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg C_splitString:*, reg C_splitString1:V, reg x3:*, reg x4:V, reg vargs:dots, reg r8:V, reg _in_:cls, reg xx:*, reg xx1:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg alone:*, reg alone1:V, reg either:*, reg either1:V, reg c1:cls, reg r12:V, reg p1:p(V +), reg r14:V, reg alone2:*, reg alone3:V, reg grepl:cls, reg xx2:*, reg xx3:V, reg p2:p(V +), reg r16:V, reg r17:V, reg grepl1:cls, reg xx4:*, reg xx5:V, reg p3:p(V +), reg r19:V, reg grepl2:cls, reg lpat:*, reg lpat1:V, reg p4:p(V +), reg xx6:*, reg xx7:V, reg p5:p(V +), reg r22:V, reg l:*, reg c2:L, reg r24:L, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r27:V, reg grep:cls, reg xx8:*, reg xx9:V, reg p6:p(V +), reg r29:V, reg ind:*, reg ind1:V, reg c3:L, reg ind3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind4:*, reg ind5:V, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg ind8:V, reg r34:V, reg r35:V, reg l3:*, reg l4:V, reg length:cls, reg r36:V, reg r37:V, reg __:cls, reg r38:V, reg ind9:*, reg ind10:V, reg c4:L, reg ind12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg xx10:*, reg xx11:V, reg c5:L, reg ind14:V, reg xx13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg ind16:V, reg dx7:V, reg ind17:*, reg ind18:V, reg r39:V, reg __1:cls, reg r40:V, reg r41:V, reg grepl3:cls, reg xx14:*, reg xx15:V, reg c6:L, reg xx17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind19:*, reg ind20:V, reg r42:V, reg __2:cls, reg r43:V, reg p7:p(V +), reg r45:V, reg r46:V, reg __3:cls, reg r47:V, reg ind21:*, reg ind22:V, reg c7:L, reg ind24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg xx18:*, reg xx19:V, reg c8:L, reg ind26:V, reg xx21:V, reg dr12:V, reg dc6:L, reg dx12:V, reg ind28:V, reg dx13:V, reg ind29:*, reg ind30:V, reg __4:cls, reg r48:V, reg r49:V, reg grepl4:cls, reg lpat2:*, reg lpat3:V, reg p8:p(V +), reg xx22:*, reg xx23:V, reg c9:L, reg xx25:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg ind31:*, reg ind32:V, reg r51:V, reg __5:cls, reg r52:V, reg p9:p(V +), reg r54:V, reg r55:V, reg r56:V, reg __6:cls, reg r57:V, reg l5:*, reg c10:L, reg r59:L, reg l7:*, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg ind33:*, reg ind34:V, reg r62:V, reg ___1:cls, reg r63:V, reg which:cls, reg xx26:*, reg xx27:V, reg r64:V, reg p10:p(V +), reg r66:V, reg ind35:*, reg ind36:V, reg c11:L, reg ind38:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg ind39:*, reg ind40:V, reg r67:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r70:V, reg ind43:V, reg r71:V, reg r72:V, reg l8:*, reg l9:V, reg length1:cls, reg r73:V, reg r74:V, reg __7:cls, reg r75:V, reg l10:*, reg c12:L, reg r77:L, reg l12:*, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg ind44:*, reg ind45:V, reg r80:V, reg ___2:cls, reg r81:V, reg tolower:cls, reg xx28:*, reg xx29:V, reg c13:L, reg xx31:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg l13:*, reg l14:V, reg __8:cls, reg r82:V, reg p11:p(V +), reg r84:V, reg l15:*, reg c14:L, reg r86:V, reg l17:*, reg dr24:V, reg dc12:L, reg dx24:V, reg dx25:V, reg l18:*, reg l19:V, reg ___3:cls, reg r89:V, reg havecaps:*, reg havecaps1:V, reg l20:*, reg l21:V, reg r90:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r93:V, reg r94:V, reg r95:V, reg xx32:*, reg xx33:V, reg nchar:cls, reg r96:V, reg r97:V, reg r98:V, reg alone4:*, reg alone5:V, reg r99:V, reg vapply:cls, reg xx34:*, reg xx35:V, reg c15:L, reg xx37:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg keep:*, reg keep1:V, reg r100:V, reg __9:cls, reg r101:V, reg p12:p(V +), reg do1:*, reg do2:V, reg p13:p(V +), reg r104:V, reg l22:*, reg c16:L, reg r106:V, reg l24:*, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg keep2:*, reg keep3:V, reg r109:V, reg ___4:cls, reg r110:V, reg paste:cls, reg xx38:*, reg xx39:V, reg p14:p(V +), reg r112:V |
    mkenv;
    st x = x;
    r = clos inner2501545716;
    st do1 = r;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L0(r2):
    c = `as.logical`(r2);
    if c then L22() else L1();
  L18():
    x1 = ld x;
    check L20() else D0();
  L19():
    r1 = dyn base(<sym x>);
    goto L0(r1);
  D0():
    deopt 5 [x1];
  L1():
    sym1 = ldf `.Call`;
    base1 = ldf `.Call` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  L20():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(x2);
    check L21() else D1();
  L22():
    popenv;
    return NA_STR;
  D1():
    deopt 8 [r3];
  L3(r7):
    st xx = r7;
    _in_ = ldf `%in%`;
    check L29() else D4();
  L21():
    goto L0(r3);
  L25():
    C_splitString = ld C_splitString;
    check L27() else D2();
  L26():
    r6 = dyn base1(<sym C_splitString>, <sym x>, " -/\"()\n\t");
    goto L3(r6);
  D2():
    deopt 15 [C_splitString];
  D4():
    deopt 22 [];
  L27():
    C_splitString1 = force? C_splitString;
    checkMissing(C_splitString1);
    x3 = ld x;
    check L28() else D3();
  L29():
    p = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p1 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r11):
      return r11;
    L1():
      alone = ld alone;
      alone1 = force? alone;
      checkMissing(alone1);
      either = ld either;
      either1 = force? either;
      checkMissing(either1);
      c1 = ldf c in base;
      r12 = dyn c1(alone1, either1);
      goto L0(r12);
    L2():
      r10 = dyn base2(<sym alone>, <sym either>);
      goto L0(r10);
    };
    r14 = dyn _in_(p, p1);
    check L30() else D5();
  D3():
    deopt 16 [C_splitString1, x3];
  D5():
    deopt 25 [r14];
  L28():
    x4 = force? x3;
    checkMissing(x4);
    vargs = dots[x4, " -/\"()\n\t"];
    r8 = `.Call`(C_splitString1, vargs, <missing>);
    goto L3(r8);
  L30():
    st alone = r14;
    alone2 = ld alone;
    check L31() else D6();
  D6():
    deopt 27 [alone2];
  L31():
    alone3 = force? alone2;
    checkMissing(alone3);
    grepl = ldf grepl;
    check L32() else D7();
  D7():
    deopt 29 [alone3];
  L32():
    p2 = prom<V +>{
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      return xx3;
    };
    r16 = dyn grepl("^'.*'$", p2);
    check L33() else D8();
  D8():
    deopt 32 [alone3, r16];
  L33():
    r17 = `||`(alone3, r16);
    st alone = r17;
    grepl1 = ldf grepl;
    check L34() else D9();
  D9():
    deopt 36 [];
  L34():
    p3 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      return xx5;
    };
    r19 = dyn grepl1("^[[:alpha:]].*[[:upper:]]+", p3);
    check L35() else D10();
  D10():
    deopt 39 [r19];
  L35():
    st havecaps = r19;
    grepl2 = ldf grepl;
    check L36() else D11();
  D11():
    deopt 42 [];
  L36():
    p4 = prom<V +>{
      lpat = ld lpat;
      lpat1 = force? lpat;
      checkMissing(lpat1);
      return lpat1;
    };
    p5 = prom<V +>{
      xx6 = ld xx;
      xx7 = force? xx6;
      checkMissing(xx7);
      return xx7;
    };
    r22 = dyn grepl2[, , `ignore.case`](p4, p5, TRUE);
    check L37() else D12();
  D12():
    deopt 47 [r22];
  L37():
    st l = r22;
    l = ld l;
    c2 = `is.object`(l);
    if c2 then L38() else L39(FALSE, l);
  L4(dx1):
    st l = dx1;
    grep = ldf grep;
    check L41() else D13();
  L38():
    dr = tryDispatchBuiltin.0("[<-", l, FALSE);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L40() else L39(FALSE, dr);
  L39(r24, l2):
    ___ = ldf `[<-` in base;
    r27 = dyn ___(l2, FALSE, 1);
    goto L4(r27);
  D13():
    deopt 57 [];
  L40():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L41():
    p6 = prom<V +>{
      xx8 = ld xx;
      xx9 = force? xx8;
      checkMissing(xx9);
      return xx9;
    };
    r29 = dyn grep("[-:]$", p6);
    check L42() else D14();
  D14():
    deopt 60 [r29];
  L42():
    st ind = r29;
    ind = ld ind;
    check L43() else D15();
  D15():
    deopt 62 [ind];
  L43():
    ind1 = force? ind;
    checkMissing(ind1);
    c3 = `is.object`(ind1);
    if c3 then L44() else L45(ind1);
  L5(dx3):
    st ind = dx3;
    ind9 = ld ind;
    check L52() else D19();
  L44():
    dr2 = tryDispatchBuiltin.1("[", ind1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L46() else L45(dr2);
  L45(ind3):
    ind4 = ld ind;
    check L47() else D16();
  D16():
    deopt 64 [ind3, ind4];
  D19():
    deopt 76 [ind9];
  L46():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L47():
    ind5 = force? ind4;
    checkMissing(ind5);
    r30 = `+`(ind5, 2);
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L48() else L49();
  L52():
    ind10 = force? ind9;
    checkMissing(ind10);
    c4 = `is.object`(ind10);
    if c4 then L53() else L54(ind10);
  L6(ind8, r34, r35):
    r37 = `<=`(r34, r35);
    __ = ldf `[` in base;
    r38 = dyn __(ind8, r37);
    goto L5(r38);
  L7(dx5):
    st ind = dx5;
    ind21 = ld ind;
    check L63() else D24();
  L48():
    l3 = ld l;
    check L50() else D17();
  L49():
    r33 = dyn base3(<sym l>);
    goto L6(ind3, r30, r33);
  L53():
    dr4 = tryDispatchBuiltin.1("[", ind10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L55() else L54(dr4);
  L54(ind12):
    xx10 = ld xx;
    check L56() else D20();
  D17():
    deopt 69 [ind3, r30, l3];
  D20():
    deopt 78 [ind12, xx10];
  D24():
    deopt 94 [ind21];
  L50():
    l4 = force? l3;
    checkMissing(l4);
    length = ldf length in base;
    r36 = dyn length(l4);
    check L51() else D18();
  L55():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L56():
    xx11 = force? xx10;
    checkMissing(xx11);
    c5 = `is.object`(xx11);
    if c5 then L57() else L58(ind12, xx11);
  L63():
    ind22 = force? ind21;
    checkMissing(ind22);
    c7 = `is.object`(ind22);
    if c7 then L64() else L65(ind22);
  D18():
    deopt 72 [ind3, r30, r36];
  L8(ind16, dx7):
    r41 = `==`(dx7, " ");
    grepl3 = ldf grepl;
    check L61() else D22();
  L9(dx11):
    st ind = dx11;
    l5 = ld l;
    c10 = `is.object`(l5);
    if c10 then L74() else L75(FALSE, l5);
  L51():
    goto L6(ind3, r30, r36);
  L57():
    dr6 = tryDispatchBuiltin.1("[", xx11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L59() else L58(ind12, dr6);
  L58(ind14, xx13):
    ind17 = ld ind;
    check L60() else D21();
  L64():
    dr10 = tryDispatchBuiltin.1("[", ind22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L66() else L65(dr10);
  L65(ind24):
    xx18 = ld xx;
    check L67() else D25();
  D21():
    deopt 80 [ind14, xx13, ind17];
  D22():
    deopt 87 [ind16, r41];
  D25():
    deopt 96 [ind24, xx18];
  L11(dx17):
    st l = dx17;
    which = ldf which;
    check L78() else D30();
  L59():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(ind12, dx6);
  L60():
    ind18 = force? ind17;
    checkMissing(ind18);
    r39 = `+`(ind18, 1);
    __1 = ldf `[` in base;
    r40 = dyn __1(xx13, r39);
    goto L8(ind14, r40);
  L61():
    p7 = prom<V +>{
      xx14 = ld xx;
      xx15 = force? xx14;
      checkMissing(xx15);
      c6 = `is.object`(xx15);
      if c6 then L1() else L2(xx15);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", xx15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(xx17):
      ind19 = ld ind;
      ind20 = force? ind19;
      checkMissing(ind20);
      r42 = `+`(ind20, 2);
      __2 = ldf `[` in base;
      r43 = dyn __2(xx17, r42);
      goto L0(r43);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r45 = dyn grepl3("^['[:alnum:]]", p7);
    check L62() else D23();
  L66():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L9(dx10);
  L67():
    xx19 = force? xx18;
    checkMissing(xx19);
    c8 = `is.object`(xx19);
    if c8 then L68() else L69(ind24, xx19);
  L74():
    dr16 = tryDispatchBuiltin.0("[<-", l5, FALSE);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L76() else L75(FALSE, dr16);
  L75(r59, l7):
    ind33 = ld ind;
    check L77() else D29();
  D23():
    deopt 90 [ind16, r41, r45];
  D29():
    deopt 114 [r59, l7, FALSE, ind33];
  D30():
    deopt 121 [];
  L10(ind28, dx13):
    r49 = `==`(dx13, "-");
    grepl4 = ldf grepl;
    check L72() else D27();
  L62():
    r46 = `&&`(r41, r45);
    __3 = ldf `[` in base;
    r47 = dyn __3(ind16, r46);
    goto L7(r47);
  L68():
    dr12 = tryDispatchBuiltin.1("[", xx19);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L70() else L69(ind24, dr12);
  L69(ind26, xx21):
    ind29 = ld ind;
    check L71() else D26();
  L76():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L11(dx16);
  L77():
    ind34 = force? ind33;
    checkMissing(ind34);
    r62 = `+`(ind34, 2);
    ___1 = ldf `[<-` in base;
    r63 = dyn ___1(l7, FALSE, r62);
    goto L11(r63);
  L78():
    p10 = prom<V +>{
      xx26 = ld xx;
      xx27 = force? xx26;
      checkMissing(xx27);
      r64 = `==`(xx27, "\"");
      return r64;
    };
    r66 = dyn which(p10);
    check L79() else D31();
  D26():
    deopt 98 [ind26, xx21, ind29];
  D27():
    deopt 103 [ind28, r49];
  D31():
    deopt 123 [r66];
  L70():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L10(ind24, dx12);
  L71():
    ind30 = force? ind29;
    __4 = ldf `[` in base;
    r48 = dyn __4(xx21, ind30);
    goto L10(ind26, r48);
  L72():
    p8 = prom<V +>{
      lpat2 = ld lpat;
      lpat3 = force? lpat2;
      checkMissing(lpat3);
      return lpat3;
    };
    p9 = prom<V +>{
      xx22 = ld xx;
      xx23 = force? xx22;
      checkMissing(xx23);
      c9 = `is.object`(xx23);
      if c9 then L1() else L2(xx23);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("[", xx23);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(xx25):
      ind31 = ld ind;
      ind32 = force? ind31;
      checkMissing(ind32);
      r51 = `+`(ind32, 2);
      __5 = ldf `[` in base;
      r52 = dyn __5(xx25, r51);
      goto L0(r52);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    r54 = dyn grepl4(p8, p9);
    check L73() else D28();
  L79():
    st ind = r66;
    ind35 = ld ind;
    check L80() else D32();
  D28():
    deopt 106 [ind28, r49, r54];
  D32():
    deopt 125 [ind35];
  L73():
    r55 = `&&`(r49, r54);
    r56 = `!`(r55);
    __6 = ldf `[` in base;
    r57 = dyn __6(ind28, r56);
    goto L9(r57);
  L80():
    ind36 = force? ind35;
    checkMissing(ind36);
    c11 = `is.object`(ind36);
    if c11 then L81() else L82(ind36);
  L12(dx19):
    st ind = dx19;
    l10 = ld l;
    c12 = `is.object`(l10);
    if c12 then L89() else L90(FALSE, l10);
  L81():
    dr18 = tryDispatchBuiltin.1("[", ind36);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L83() else L82(dr18);
  L82(ind38):
    ind39 = ld ind;
    check L84() else D33();
  D33():
    deopt 127 [ind38, ind39];
  L14(dx21):
    st l = dx21;
    tolower = ldf tolower;
    check L93() else D37();
  L83():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L12(dx18);
  L84():
    ind40 = force? ind39;
    checkMissing(ind40);
    r67 = `+`(ind40, 1);
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L85() else L86();
  L89():
    dr20 = tryDispatchBuiltin.0("[<-", l10, FALSE);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L91() else L90(FALSE, dr20);
  L90(r77, l12):
    ind44 = ld ind;
    check L92() else D36();
  D36():
    deopt 142 [r77, l12, FALSE, ind44];
  D37():
    deopt 149 [];
  L13(ind43, r71, r72):
    r74 = `<=`(r71, r72);
    __7 = ldf `[` in base;
    r75 = dyn __7(ind43, r74);
    goto L12(r75);
  L85():
    l8 = ld l;
    check L87() else D34();
  L86():
    r70 = dyn base4(<sym l>);
    goto L13(ind38, r67, r70);
  L91():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L14(dx20);
  L92():
    ind45 = force? ind44;
    checkMissing(ind45);
    r80 = `+`(ind45, 1);
    ___2 = ldf `[<-` in base;
    r81 = dyn ___2(l12, FALSE, r80);
    goto L14(r81);
  L93():
    p11 = prom<V +>{
      xx28 = ld xx;
      xx29 = force? xx28;
      checkMissing(xx29);
      c13 = `is.object`(xx29);
      if c13 then L1() else L2(xx29);
    L0(dx23):
      return dx23;
    L1():
      dr22 = tryDispatchBuiltin.1("[", xx29);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(xx31):
      l13 = ld l;
      l14 = force? l13;
      __8 = ldf `[` in base;
      r82 = dyn __8(xx31, l14);
      goto L0(r82);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx22);
    };
    r84 = dyn tolower(p11);
    check L94() else D38();
  D34():
    deopt 132 [ind38, r67, l8];
  D38():
    deopt 151 [r84];
  L87():
    l9 = force? l8;
    checkMissing(l9);
    length1 = ldf length in base;
    r73 = dyn length1(l9);
    check L88() else D35();
  L94():
    l15 = ld xx;
    c14 = `is.object`(l15);
    if c14 then L95() else L96(r84, l15);
  D35():
    deopt 135 [ind38, r67, r73];
  L15(dx25):
    st xx = dx25;
    havecaps = ld havecaps;
    check L99() else D40();
  L88():
    goto L13(ind38, r67, r73);
  L95():
    dr24 = tryDispatchBuiltin.0("[<-", l15, r84);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L97() else L96(r84, dr24);
  L96(r86, l17):
    l18 = ld l;
    check L98() else D39();
  D39():
    deopt 153 [r86, l17, r84, l18];
  D40():
    deopt 157 [havecaps];
  L97():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L15(dx24);
  L98():
    l19 = force? l18;
    ___3 = ldf `[<-` in base;
    r89 = dyn ___3(l17, r84, l19);
    goto L15(r89);
  L99():
    havecaps1 = force? havecaps;
    checkMissing(havecaps1);
    l20 = ld l;
    check L100() else D41();
  D41():
    deopt 158 [havecaps1, l20];
  L100():
    l21 = force? l20;
    checkMissing(l21);
    r90 = `||`(havecaps1, l21);
    sym5 = ldf nchar;
    base5 = ldf nchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L101() else L102();
  L16(r94, r95):
    r97 = `==`(r95, 1);
    r98 = `||`(r94, r97);
    alone4 = ld alone;
    check L105() else D44();
  L101():
    xx32 = ld xx;
    check L103() else D42();
  L102():
    r93 = dyn base5(<sym xx>);
    goto L16(r90, r93);
  D42():
    deopt 162 [r90, xx32];
  D44():
    deopt 171 [r98, alone4];
  L103():
    xx33 = force? xx32;
    checkMissing(xx33);
    nchar = ldf nchar in base;
    r96 = dyn nchar(xx33, "chars", FALSE, NA_LGL);
    check L104() else D43();
  L105():
    alone5 = force? alone4;
    checkMissing(alone5);
    r99 = `||`(r98, alone5);
    st keep = r99;
    vapply = ldf vapply;
    check L106() else D45();
  D43():
    deopt 168 [r90, r96];
  D45():
    deopt 176 [];
  L104():
    goto L16(r90, r96);
  L106():
    p12 = prom<V +>{
      xx34 = ld xx;
      xx35 = force? xx34;
      checkMissing(xx35);
      c15 = `is.object`(xx35);
      if c15 then L1() else L2(xx35);
    L0(dx27):
      return dx27;
    L1():
      dr26 = tryDispatchBuiltin.1("[", xx35);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(xx37):
      keep = ld keep;
      keep1 = force? keep;
      checkMissing(keep1);
      r100 = `!`(keep1);
      __9 = ldf `[` in base;
      r101 = dyn __9(xx37, r100);
      goto L0(r101);
    L3():
      dx26 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx26);
    };
    p13 = prom<V +>{
      do1 = ld do1;
      do2 = force? do1;
      checkMissing(do2);
      return do2;
    };
    r104 = dyn vapply(p12, p13, "<chr>");
    check L107() else D46();
  D46():
    deopt 180 [r104];
  L107():
    l22 = ld xx;
    c16 = `is.object`(l22);
    if c16 then L108() else L109(r104, l22);
  L17(dx29):
    st xx = dx29;
    paste = ldf paste;
    check L112() else D48();
  L108():
    dr28 = tryDispatchBuiltin.0("[<-", l22, r104);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L110() else L109(r104, dr28);
  L109(r106, l24):
    keep2 = ld keep;
    check L111() else D47();
  D47():
    deopt 182 [r106, l24, r104, keep2];
  D48():
    deopt 188 [];
  L110():
    dx28 = getTryDispatchBuiltinValue(dr28);
    goto L17(dx28);
  L111():
    keep3 = force? keep2;
    checkMissing(keep3);
    r109 = `!`(keep3);
    ___4 = ldf `[<-` in base;
    r110 = dyn ___4(l24, r104, r109);
    goto L17(r110);
  L112():
    p14 = prom<V +>{
      xx38 = ld xx;
      xx39 = force? xx38;
      checkMissing(xx39);
      return xx39;
    };
    r112 = dyn paste[, collapse](p14, "");
    check L113() else D49();
  D49():
    deopt 192 [r112];
  L113():
    popenv;
    return r112;
  }
}