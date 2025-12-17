fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1736206857;
    st matchConcordance = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1736206857(linenum, concordance) {
  (reg linenum:*, reg concordance:*) -+> V { var linenum:*, var concordance:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg _in_:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg concordance1:*, reg concordance2:V, reg names:cls, reg r8:V, reg p1:p(V +), reg r10:V, reg all:cls, reg r11:V, reg r12:V, reg c1:L, reg stop:cls, reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg linenum1:*, reg linenum2:V, reg as_numeric:cls, reg r17:V, reg concordance3:*, reg concordance4:V, reg c2:L, reg concordance6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r19:V, reg r20:V, reg concordance7:*, reg concordance8:V, reg c3:L, reg concordance10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg srcLines:*, reg srcLines1:V, reg length:cls, reg r24:V, reg rep_len:cls, reg r25:V, reg concordance11:*, reg concordance12:V, reg c4:L, reg concordance14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r26:V, reg matrix:cls, reg character:cls, reg r27:V, reg p2:p(V +), reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg linenum3:*, reg linenum4:V, reg length1:cls, reg r31:V, reg p3:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg c5:cls, reg r37:V, reg list:cls, reg r38:V, reg p4:p(V +), reg r40:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r41:V, reg r42:V, reg linenum5:*, reg linenum6:V, reg r43:I, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg linenum7:*, reg linenum8:V, reg c7:L, reg i6:I, reg linenum10:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i8:I, reg dx7:V, reg i9:*, reg i10:V, reg __:cls, reg r44:V, reg concordance15:*, reg concordance16:V, reg c8:L, reg i12:I, reg dx9:V, reg concordance18:V, reg dr8:V, reg dc4:L, reg dx11:V, reg i14:I, reg dx12:V, reg dx13:V, reg r45:V, reg r46:V, reg c9:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r47:V, reg i19:I, reg r48:V, reg c10:cls, reg r49:V, reg l1:*, reg c11:L, reg i21:I, reg r51:V, reg l3:*, reg dr10:V, reg dc5:L, reg dx14:V, reg i23:I, reg r53:V, reg dx15:V, reg i24:*, reg i25:V, reg ___:cls, reg r54:V, reg i26:I, reg sym11:cls, reg base11:cls, reg guard11:L, reg r56:V, reg i29:I, reg r57:V, reg srcFile:*, reg srcFile1:V, reg c12:L, reg i31:I, reg srcFile3:V, reg dr12:V, reg dc6:L, reg dx16:V, reg i33:I, reg dx17:V, reg linenum11:*, reg linenum12:V, reg c13:L, reg i35:I, reg srcFile5:V, reg linenum14:V, reg dr14:V, reg dc7:L, reg dx18:V, reg i37:I, reg srcFile7:V, reg dx19:V, reg i38:*, reg i39:V, reg __1:cls, reg r58:V, reg offset:*, reg offset1:V, reg r59:V, reg __2:cls, reg r60:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r61:V, reg i42:I, reg r62:V, reg with:cls, reg concordance19:*, reg concordance20:V, reg p5:p(V +), reg srcLine:*, reg srcLine1:V, reg c14:L, reg srcLine3:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg linenum15:*, reg linenum16:V, reg c15:L, reg srcLine5:V, reg linenum18:V, reg dr18:V, reg dc9:L, reg dx22:V, reg srcLine7:V, reg dx23:V, reg i43:*, reg i44:V, reg __3:cls, reg r64:V, reg offset2:*, reg offset3:V, reg r65:V, reg __4:cls, reg r66:V, reg p6:p(V +), reg r68:V, reg c16:cls, reg r69:V, reg l4:*, reg c17:L, reg i46:I, reg r71:V, reg l6:*, reg dr20:V, reg dc10:L, reg dx24:V, reg i48:I, reg r73:V, reg dx25:V, reg i49:*, reg i50:V, reg ___1:cls, reg r74:V, reg result:*, reg result1:V |
    mkenv;
    st linenum = linenum;
    st concordance = concordance;
    sym = ldf all;
    base = ldf all in base;
    guard = `==`.4(sym, base);
    if guard then L19() else L20();
  L0(r1):
    r12 = `!`(r1);
    c1 = `as.logical`(r12);
    if c1 then L24() else L1();
  L19():
    _in_ = ldf `%in%`;
    check L21() else D0();
  L20():
    r = dyn base(<lang `%in%`(c("offset", "srcLine", "srcFile"), names(concordance))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L1():
    goto L2();
  L2():
    sym3 = ldf `as.numeric`;
    base3 = ldf `as.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L28() else L29();
  L21():
    p = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("offset", "srcLine", "srcFile");
      goto L0(r4);
    L2():
      r2 = dyn base1("offset", "srcLine", "srcFile");
      goto L0(r2);
    };
    p1 = prom<V +>{
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      concordance1 = ld concordance;
      concordance2 = force? concordance1;
      checkMissing(concordance2);
      names = ldf names in base;
      r8 = dyn names(concordance2);
      goto L0(r8);
    L2():
      r6 = dyn base2(<sym concordance>);
      goto L0(r6);
    };
    r10 = dyn _in_(p, p1);
    check L22() else D1();
  L24():
    stop = ldf stop;
    check L25() else D3();
  D1():
    deopt 6 [r10];
  D3():
    deopt 11 [];
  L3(r16):
    st linenum = r16;
    concordance3 = ld concordance;
    check L32() else D7();
  L22():
    all = ldf all in base;
    r11 = dyn all(r10);
    check L23() else D2();
  L25():
    r13 = dyn stop("concordance is not valid");
    check L26() else D4();
  L28():
    linenum1 = ld linenum;
    check L30() else D5();
  L29():
    r15 = dyn base3(<sym linenum>);
    goto L3(r15);
  D2():
    deopt 8 [r11];
  D4():
    deopt 13 [r13];
  D5():
    deopt 18 [linenum1];
  D7():
    deopt 23 [concordance3];
  L23():
    goto L0(r11);
  L26():
    goto L2();
  L30():
    linenum2 = force? linenum1;
    checkMissing(linenum2);
    as_numeric = ldf `as.numeric` in base;
    r17 = dyn as_numeric(linenum2);
    check L31() else D6();
  L32():
    concordance4 = force? concordance3;
    checkMissing(concordance4);
    c2 = `is.object`(concordance4);
    if c2 then L34() else L35(concordance4);
  D6():
    deopt 21 [r17];
  L31():
    goto L3(r17);
  L33(dx1):
    st srcLines = dx1;
    sym4 = ldf rep_len;
    base4 = ldf rep_len in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L37() else L38();
  L34():
    dr = tryDispatchBuiltin.1("$", concordance4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(concordance6):
    r18 = `$`(concordance6, <sym srcLine>);
    goto L33(r18);
  L4(r20):
    st srcFile = r20;
    concordance11 = ld concordance;
    check L49() else D12();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L33(dx);
  L37():
    concordance7 = ld concordance;
    check L39() else D8();
  L38():
    r19 = dyn base4(<lang `$`(concordance, srcFile)>, <lang length(srcLines)>);
    goto L4(r19);
  D8():
    deopt 29 [concordance7];
  D12():
    deopt 41 [concordance11];
  L39():
    concordance8 = force? concordance7;
    checkMissing(concordance8);
    c3 = `is.object`(concordance8);
    if c3 then L41() else L42(concordance8);
  L49():
    concordance12 = force? concordance11;
    checkMissing(concordance12);
    c4 = `is.object`(concordance12);
    if c4 then L51() else L52(concordance12);
  L40(dx3):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L44() else L45();
  L41():
    dr2 = tryDispatchBuiltin.1("$", concordance8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L43() else L42(dr2);
  L42(concordance10):
    r21 = `$`(concordance10, <sym srcFile>);
    goto L40(r21);
  L50(dx5):
    st offset = dx5;
    matrix = ldf matrix;
    check L54() else D13();
  L51():
    dr4 = tryDispatchBuiltin.1("$", concordance12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L53() else L52(dr4);
  L52(concordance14):
    r26 = `$`(concordance14, <sym offset>);
    goto L50(r26);
  D13():
    deopt 46 [];
  L5(r23):
    rep_len = ldf rep_len in base;
    r25 = dyn rep_len(dx3, r23);
    check L48() else D11();
  L43():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L40(dx2);
  L44():
    srcLines = ld srcLines;
    check L46() else D9();
  L45():
    r22 = dyn base5(<sym srcLines>);
    goto L5(r22);
  L53():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L50(dx4);
  L54():
    p2 = prom<V +>{
      character = ldf character;
      r27 = dyn character();
      return r27;
    };
    p3 = prom<V +>{
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      linenum3 = ld linenum;
      linenum4 = force? linenum3;
      checkMissing(linenum4);
      length1 = ldf length in base;
      r31 = dyn length1(linenum4);
      goto L0(r31);
    L2():
      r29 = dyn base6(<sym linenum>);
      goto L0(r29);
    };
    p4 = prom<V +>{
      sym7 = ldf list;
      base7 = ldf list in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L2() else L3();
    L0(r34):
      return r34;
    L2():
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L4() else L5();
    L3():
      r33 = dyn base7(NULL, <lang c("srcFile", "srcLine")>);
      goto L0(r33);
    L1(r36):
      list = ldf list in base;
      r38 = dyn list(NULL, r36);
      goto L0(r38);
    L4():
      c5 = ldf c in base;
      r37 = dyn c5("srcFile", "srcLine");
      goto L1(r37);
    L5():
      r35 = dyn base8("srcFile", "srcLine");
      goto L1(r35);
    };
    r40 = dyn matrix[, , , dimnames](p2, p3, 2.0, p4);
    check L55() else D14();
  D9():
    deopt 34 [srcLines];
  D11():
    deopt 39 [r25];
  D14():
    deopt 52 [r40];
  L46():
    srcLines1 = force? srcLines;
    checkMissing(srcLines1);
    length = ldf length in base;
    r24 = dyn length(srcLines1);
    check L47() else D10();
  L48():
    goto L4(r25);
  L55():
    st result = r40;
    sym9 = ldf seq_along;
    base9 = ldf seq_along in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L56() else L57();
  D10():
    deopt 37 [r24];
  L6(r42):
    s = toForSeq(r42);
    l = length(s);
    i = 0;
    goto L7(i);
  L47():
    goto L5(r24);
  L56():
    linenum5 = ld linenum;
    check L58() else D15();
  L57():
    r41 = dyn base9(<sym linenum>);
    goto L6(r41);
  D15():
    deopt 55 [linenum5];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l, i2);
    if c6 then L59() else L18();
  L58():
    linenum6 = force? linenum5;
    checkMissing(linenum6);
    r43 = seq_along(linenum6);
    goto L6(r43);
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    linenum7 = ld linenum;
    check L60() else D16();
  L59():
    result = ld result;
    check L100() else D29();
  D16():
    deopt 58 [i2, linenum7];
  D29():
    deopt 109 [result];
  L60():
    linenum8 = force? linenum7;
    checkMissing(linenum8);
    c7 = `is.object`(linenum8);
    if c7 then L61() else L62(i2, linenum8);
  L100():
    result1 = force? result;
    checkMissing(result1);
    popenv;
    return result1;
  L8(i8, dx7):
    concordance15 = ld concordance;
    check L65() else D18();
  L61():
    dr6 = tryDispatchBuiltin.1("[", linenum8);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L63() else L62(i2, dr6);
  L62(i6, linenum10):
    i9 = ld i;
    check L64() else D17();
  D17():
    deopt 60 [i6, linenum10, i9];
  D18():
    deopt 62 [i8, dx7, concordance15];
  L63():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L8(i2, dx6);
  L64():
    i10 = force? i9;
    __ = ldf `[` in base;
    r44 = dyn __(linenum10, i10);
    goto L8(i6, r44);
  L65():
    concordance16 = force? concordance15;
    checkMissing(concordance16);
    c8 = `is.object`(concordance16);
    if c8 then L67() else L68(i8, dx7, concordance16);
  L66(i14, dx12, dx13):
    r46 = `<=`(dx12, dx13);
    c9 = `as.logical`(r46);
    if c9 then L70() else L9();
  L67():
    dr8 = tryDispatchBuiltin.1("$", concordance16);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L69() else L68(i8, dx7, dr8);
  L68(i12, dx9, concordance18):
    r45 = `$`(concordance18, <sym offset>);
    goto L66(i12, dx9, r45);
  L9():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L79() else L80();
  L12(i26):
    goto L7(i26);
  L69():
    dx11 = getTryDispatchBuiltinValue(dr8);
    goto L66(i8, dx7, dx11);
  L70():
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L71() else L72();
  L10(i19, r48):
    l1 = ld result;
    c11 = `is.object`(l1);
    if c11 then L74() else L75(i19, r48, l1);
  L13(i29, r57):
    l4 = ld result;
    c17 = `is.object`(l4);
    if c17 then L96() else L97(i29, r57, l4);
  L71():
    c10 = ldf c in base;
    r49 = dyn c10("", "");
    check L73() else D19();
  L72():
    r47 = dyn base10("", "");
    goto L10(i14, r47);
  L79():
    srcFile = ld srcFile;
    check L81() else D21();
  L80():
    r56 = dyn base11(<lang `[`(srcFile, `-`(`[`(linenum, i), offset))>, <lang with(concordance, `[`(srcLine, `-`(`[`(linenum, i), offset)))>);
    goto L13(i14, r56);
  D19():
    deopt 71 [i14, r49];
  D21():
    deopt 81 [i14, srcFile];
  L11(i23, r53, dx15):
    st result = dx15;
    goto L12(i23);
  L17(i48, r73, dx25):
    st result = dx25;
    goto L12(i48);
  L73():
    goto L10(i14, r49);
  L74():
    dr10 = tryDispatchBuiltin.0("[<-", l1, r48);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L76() else L75(i19, r48, dr10);
  L75(i21, r51, l3):
    i24 = ld i;
    check L77() else D20();
  L81():
    srcFile1 = force? srcFile;
    checkMissing(srcFile1);
    c12 = `is.object`(srcFile1);
    if c12 then L82() else L83(i14, srcFile1);
  L96():
    dr20 = tryDispatchBuiltin.0("[<-", l4, r57);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L98() else L97(i29, r57, dr20);
  L97(i46, r71, l6):
    i49 = ld i;
    check L99() else D28();
  D20():
    deopt 73 [i21, r51, l3, r48, i24];
  D28():
    deopt 100 [i46, r71, l6, r57, i49];
  L14(i33, dx17):
    sym12 = ldf with;
    base12 = ldf with in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L91() else L92();
  L76():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L11(i19, r48, dx14);
  L77():
    i25 = force? i24;
    ___ = ldf `[<-` in base;
    r54 = dyn ___(l1, i25, <missing>, r48);
    goto L11(i21, r51, r54);
  L82():
    dr12 = tryDispatchBuiltin.1("[", srcFile1);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L84() else L83(i14, dr12);
  L83(i31, srcFile3):
    linenum11 = ld linenum;
    check L85() else D22();
  L98():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L17(i29, r57, dx24);
  L99():
    i50 = force? i49;
    ___1 = ldf `[<-` in base;
    r74 = dyn ___1(l4, i50, <missing>, r57);
    goto L17(i46, r71, r74);
  D22():
    deopt 83 [i31, srcFile3, linenum11];
  L16(i42, r62):
    c16 = ldf c in base;
    r69 = dyn c16(dx17, r62);
    check L95() else D27();
  L84():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L14(i14, dx16);
  L85():
    linenum12 = force? linenum11;
    checkMissing(linenum12);
    c13 = `is.object`(linenum12);
    if c13 then L86() else L87(i31, srcFile3, linenum12);
  L91():
    with = ldf with;
    check L93() else D25();
  L92():
    r61 = dyn base12(<sym concordance>, <lang `[`(srcLine, `-`(`[`(linenum, i), offset))>);
    goto L16(i33, r61);
  D25():
    deopt 93 [i33];
  D27():
    deopt 98 [i42, r69];
  L15(i37, srcFile7, dx19):
    offset = ld offset;
    check L90() else D24();
  L86():
    dr14 = tryDispatchBuiltin.1("[", linenum12);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L88() else L87(i31, srcFile3, dr14);
  L87(i35, srcFile5, linenum14):
    i38 = ld i;
    check L89() else D23();
  L93():
    p5 = prom<V +>{
      concordance19 = ld concordance;
      concordance20 = force? concordance19;
      checkMissing(concordance20);
      return concordance20;
    };
    p6 = prom<V +>{
      srcLine = ld srcLine;
      srcLine1 = force? srcLine;
      checkMissing(srcLine1);
      c14 = `is.object`(srcLine1);
      if c14 then L2() else L3(srcLine1);
    L0(dx21):
      return dx21;
    L2():
      dr16 = tryDispatchBuiltin.1("[", srcLine1);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(srcLine3):
      linenum15 = ld linenum;
      linenum16 = force? linenum15;
      checkMissing(linenum16);
      c15 = `is.object`(linenum16);
      if c15 then L5() else L6(srcLine3, linenum16);
    L1(srcLine7, dx23):
      offset2 = ld offset;
      offset3 = force? offset2;
      checkMissing(offset3);
      r65 = `-`(dx23, offset3);
      __4 = ldf `[` in base;
      r66 = dyn __4(srcLine7, r65);
      goto L0(r66);
    L4():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx20);
    L5():
      dr18 = tryDispatchBuiltin.1("[", linenum16);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(srcLine3, dr18);
    L6(srcLine5, linenum18):
      i43 = ld i;
      i44 = force? i43;
      __3 = ldf `[` in base;
      r64 = dyn __3(linenum18, i44);
      goto L1(srcLine5, r64);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr18);
      goto L1(srcLine3, dx22);
    };
    r68 = dyn with(p5, p6);
    check L94() else D26();
  L95():
    goto L13(i42, r69);
  D23():
    deopt 85 [i35, srcFile5, linenum14, i38];
  D24():
    deopt 87 [i37, srcFile7, dx19, offset];
  D26():
    deopt 96 [i33, r68];
  L88():
    dx18 = getTryDispatchBuiltinValue(dr14);
    goto L15(i31, srcFile3, dx18);
  L89():
    i39 = force? i38;
    __1 = ldf `[` in base;
    r58 = dyn __1(linenum14, i39);
    goto L15(i35, srcFile5, r58);
  L90():
    offset1 = force? offset;
    checkMissing(offset1);
    r59 = `-`(dx19, offset1);
    __2 = ldf `[` in base;
    r60 = dyn __2(srcFile7, r59);
    goto L14(i37, r60);
  L94():
    goto L16(i33, r68);
  }
}