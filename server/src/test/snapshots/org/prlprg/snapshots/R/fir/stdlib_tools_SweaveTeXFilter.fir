fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1366361413;
    st SweaveTeXFilter = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1366361413(ifile, encoding) {
  (reg ifile:*, reg encoding:*) -+> V { var ifile:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ifile1:*, reg ifile2:V, reg inherits:cls, reg r2:V, reg c:L, reg ifile3:*, reg ifile4:V, reg c1:L, reg ifile6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg ___:cls, reg r4:V, reg r5:cls, reg ifile7:*, reg ifile8:V, reg p:p(V +), reg r7:V, reg readLines:cls, reg ifile9:*, reg ifile10:V, reg p1:p(V +), reg r9:V, reg encoding1:*, reg encoding2:V, reg r10:V, reg c2:L, reg encoding3:*, reg encoding4:V, reg r11:V, reg c3:L, reg l:*, reg Encoding__:cls, reg r12:V, reg r13:V, reg iconv:cls, reg lines:*, reg lines1:V, reg p2:p(V +), reg encoding5:*, reg encoding6:V, reg p3:p(V +), reg r16:V, reg grep:cls, reg syntax:*, reg syntax1:V, reg c4:L, reg syntax3:V, reg dr2:V, reg dc1:L, reg dx3:V, reg dx4:V, reg r18:V, reg p4:p(V +), reg lines2:*, reg lines3:V, reg p5:p(V +), reg r21:V, reg grep1:cls, reg syntax4:*, reg syntax5:V, reg c5:L, reg syntax7:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r22:V, reg p6:p(V +), reg lines4:*, reg lines5:V, reg p7:p(V +), reg r25:V, reg list2DF:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r26:V, reg r27:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r28:V, reg r29:V, reg dpos:*, reg dpos1:V, reg cpos:*, reg cpos1:V, reg c6:cls, reg r30:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg TEXT:*, reg TEXT1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r35:V, reg r36:V, reg dpos2:*, reg dpos3:V, reg length:cls, reg r37:V, reg rep_int:cls, reg r38:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg CODE:*, reg CODE1:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r41:V, reg r42:V, reg cpos2:*, reg cpos3:V, reg length1:cls, reg r43:V, reg rep_int1:cls, reg r44:V, reg c7:cls, reg r45:V, reg list:cls, reg r46:V, reg p8:p(V +), reg r48:V, reg recs:*, reg recs1:V, reg c8:L, reg recs3:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg order:cls, reg recs4:*, reg recs5:V, reg c9:L, reg recs7:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg r49:V, reg p9:p(V +), reg r51:V, reg __:cls, reg r52:V, reg TEXT2:*, reg TEXT3:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r53:V, reg r54:V, reg nrow:cls, reg recs8:*, reg recs9:V, reg p10:p(V +), reg r56:V, reg r57:I, reg s:V, reg l1:I, reg i:I, reg i1:I, reg i2:I, reg c10:L, reg x:V, reg recs10:*, reg recs11:V, reg c11:L, reg i6:I, reg recs13:V, reg dr10:V, reg dc5:L, reg dx11:V, reg i8:I, reg dx12:V, reg r58:V, reg c12:L, reg i10:I, reg dx14:V, reg dr12:V, reg dc6:L, reg dx15:V, reg i12:I, reg dx16:V, reg i13:*, reg i14:V, reg __1:cls, reg r59:V, reg state:*, reg state1:V, reg CODE2:*, reg CODE3:V, reg r60:V, reg c13:L, reg l2:*, reg c14:L, reg i18:I, reg r62:S, reg l4:*, reg dr14:V, reg dc7:L, reg dx17:V, reg i20:I, reg r64:S, reg dx18:V, reg last:*, reg last1:V, reg r65:V, reg line:*, reg line1:V, reg r66:V, reg ___1:cls, reg r67:V, reg i21:I, reg l5:*, reg c15:L, reg i23:I, reg r70:S, reg l7:*, reg dr16:V, reg dc8:L, reg dx19:V, reg i25:I, reg r72:S, reg dx20:V, reg line2:*, reg line3:V, reg ___2:cls, reg r73:V, reg recs14:*, reg recs15:V, reg c16:L, reg i27:I, reg recs17:V, reg dr18:V, reg dc9:L, reg dx21:V, reg i29:I, reg dx22:V, reg r74:V, reg c17:L, reg i31:I, reg dx24:V, reg dr20:V, reg dc10:L, reg dx25:V, reg i33:I, reg dx26:V, reg i34:*, reg i35:V, reg __2:cls, reg r75:V, reg line4:*, reg line5:V, reg lines6:*, reg lines7:V |
    mkenv;
    st ifile = ifile;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0("unknown") else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L18() else L19();
  L1(r1):
    c = `as.logical`(r1);
    if c then L22() else L2();
  L18():
    ifile1 = ld ifile;
    check L20() else D0();
  L19():
    r = dyn base(<sym ifile>, "srcfile");
    goto L1(r);
  D0():
    deopt 2 [ifile1];
  L2():
    goto L3();
  L3():
    ___ = ldf `:::`;
    check L29() else D3();
  L20():
    ifile2 = force? ifile1;
    checkMissing(ifile2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(ifile2, "srcfile", FALSE);
    check L21() else D1();
  L22():
    ifile3 = ld ifile;
    check L23() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 8 [ifile3];
  D3():
    deopt 15 [];
  L21():
    goto L1(r2);
  L23():
    ifile4 = force? ifile3;
    checkMissing(ifile4);
    c1 = `is.object`(ifile4);
    if c1 then L25() else L26(ifile4);
  L29():
    r4 = dyn ___("utils", "SweaveGetSyntax");
    check L30() else D4();
  D4():
    deopt 18 [r4];
  L24(dx1):
    st ifile = dx1;
    goto L3();
  L25():
    dr = tryDispatchBuiltin.1("$", ifile4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L27() else L26(dr);
  L26(ifile6):
    r3 = `$`(ifile6, <sym filename>);
    goto L24(r3);
  L30():
    checkFun.0(r4);
    r5 = r4 as cls;
    p = prom<V +>{
      ifile7 = ld ifile;
      ifile8 = force? ifile7;
      checkMissing(ifile8);
      return ifile8;
    };
    r7 = dyn r5(p);
    check L31() else D5();
  D5():
    deopt 21 [r7];
  L27():
    dx = getTryDispatchBuiltinValue(dr);
    goto L24(dx);
  L31():
    st syntax = r7;
    readLines = ldf readLines;
    check L32() else D6();
  D6():
    deopt 24 [];
  L32():
    p1 = prom<V +>{
      ifile9 = ld ifile;
      ifile10 = force? ifile9;
      checkMissing(ifile10);
      return ifile10;
    };
    r9 = dyn readLines[, warn](p1, FALSE);
    check L33() else D7();
  D7():
    deopt 28 [r9];
  L33():
    st lines = r9;
    encoding1 = ld encoding;
    check L34() else D8();
  D8():
    deopt 30 [encoding1];
  L34():
    encoding2 = force? encoding1;
    checkMissing(encoding2);
    r10 = `!=`(encoding2, "unknown");
    c2 = `as.logical`(r10);
    if c2 then L35() else L4();
  L4():
    goto L7();
  L7():
    st TEXT = 1;
    st CODE = 0;
    grep = ldf grep;
    check L44() else D14();
  L35():
    encoding3 = ld encoding;
    check L36() else D9();
  D9():
    deopt 34 [encoding3];
  D14():
    deopt 63 [];
  L36():
    encoding4 = force? encoding3;
    checkMissing(encoding4);
    r11 = `==`(encoding4, "UTF-8");
    c3 = `as.logical`(r11);
    if c3 then L37() else L5();
  L44():
    p4 = prom<V +>{
      syntax = ld syntax;
      syntax1 = force? syntax;
      checkMissing(syntax1);
      c4 = `is.object`(syntax1);
      if c4 then L1() else L2(syntax1);
    L0(dx4):
      return dx4;
    L1():
      dr2 = tryDispatchBuiltin.1("$", syntax1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(syntax3):
      r18 = `$`(syntax3, <sym doc>);
      goto L0(r18);
    L3():
      dx3 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx3);
    };
    p5 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r21 = dyn grep(p4, p5);
    check L45() else D15();
  D15():
    deopt 66 [r21];
  L5():
    iconv = ldf iconv;
    check L41() else D12();
  L6(r13):
    goto L7();
  L37():
    l = ld lines;
    Encoding__ = ldf `Encoding<-`;
    check L38() else D10();
  L45():
    st dpos = r21;
    grep1 = ldf grep;
    check L46() else D16();
  D10():
    deopt 41 ["UTF-8", l, "UTF-8"];
  D12():
    deopt 46 [];
  D16():
    deopt 69 [];
  L38():
    r12 = dyn Encoding__(l, NULL, "UTF-8");
    check L39() else D11();
  L41():
    p2 = prom<V +>{
      lines = ld lines;
      lines1 = force? lines;
      checkMissing(lines1);
      return lines1;
    };
    p3 = prom<V +>{
      encoding5 = ld encoding;
      encoding6 = force? encoding5;
      checkMissing(encoding6);
      return encoding6;
    };
    r16 = dyn iconv[, , , sub](p2, p3, "", "byte");
    check L42() else D13();
  L46():
    p6 = prom<V +>{
      syntax4 = ld syntax;
      syntax5 = force? syntax4;
      checkMissing(syntax5);
      c5 = `is.object`(syntax5);
      if c5 then L1() else L2(syntax5);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("$", syntax5);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(syntax7):
      r22 = `$`(syntax7, <sym code>);
      goto L0(r22);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p7 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r25 = dyn grep1(p6, p7);
    check L47() else D17();
  D11():
    deopt 43 ["UTF-8", r12];
  D13():
    deopt 52 [r16];
  D17():
    deopt 72 [r25];
  L39():
    st lines = r12;
    goto L6("UTF-8");
  L42():
    st lines = r16;
    goto L6(r16);
  L47():
    st cpos = r25;
    list2DF = ldf list2DF;
    check L48() else D18();
  D18():
    deopt 75 [];
  L48():
    p8 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L7() else L8();
    L0(r27):
      return r27;
    L7():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L9() else L10();
    L8():
      r26 = dyn base1[line, type](<lang c(dpos, cpos)>, <lang c(rep.int(TEXT, length(dpos)), rep.int(CODE, length(cpos)))>);
      goto L0(r26);
    L1(r29):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L11() else L12();
    L9():
      dpos = ld dpos;
      dpos1 = force? dpos;
      checkMissing(dpos1);
      cpos = ld cpos;
      cpos1 = force? cpos;
      checkMissing(cpos1);
      c6 = ldf c in base;
      r30 = dyn c6(dpos1, cpos1);
      goto L1(r30);
    L10():
      r28 = dyn base2(<sym dpos>, <sym cpos>);
      goto L1(r28);
    L2(r32):
      list = ldf list in base;
      r46 = dyn list(r29, r32);
      goto L0(r46);
    L11():
      sym4 = ldf `rep.int`;
      base4 = ldf `rep.int` in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L13() else L14();
    L12():
      r31 = dyn base3(<lang rep.int(TEXT, length(dpos))>, <lang rep.int(CODE, length(cpos))>);
      goto L2(r31);
    L3(r34):
      sym6 = ldf `rep.int`;
      base6 = ldf `rep.int` in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L17() else L18();
    L13():
      TEXT = ld TEXT;
      TEXT1 = force? TEXT;
      checkMissing(TEXT1);
      sym5 = ldf length;
      base5 = ldf length in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L15() else L16();
    L14():
      r33 = dyn base4(<sym TEXT>, <lang length(dpos)>);
      goto L3(r33);
    L4(r36):
      rep_int = ldf `rep.int` in base;
      r38 = dyn rep_int(TEXT1, r36);
      goto L3(r38);
    L5(r40):
      c7 = ldf c in base;
      r45 = dyn c7(r34, r40);
      goto L2(r45);
    L15():
      dpos2 = ld dpos;
      dpos3 = force? dpos2;
      checkMissing(dpos3);
      length = ldf length in base;
      r37 = dyn length(dpos3);
      goto L4(r37);
    L16():
      r35 = dyn base5(<sym dpos>);
      goto L4(r35);
    L17():
      CODE = ld CODE;
      CODE1 = force? CODE;
      checkMissing(CODE1);
      sym7 = ldf length;
      base7 = ldf length in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L19() else L20();
    L18():
      r39 = dyn base6(<sym CODE>, <lang length(cpos)>);
      goto L5(r39);
    L6(r42):
      rep_int1 = ldf `rep.int` in base;
      r44 = dyn rep_int1(CODE1, r42);
      goto L5(r44);
    L19():
      cpos2 = ld cpos;
      cpos3 = force? cpos2;
      checkMissing(cpos3);
      length1 = ldf length in base;
      r43 = dyn length1(cpos3);
      goto L6(r43);
    L20():
      r41 = dyn base7(<sym cpos>);
      goto L6(r41);
    };
    r48 = dyn list2DF(p8);
    check L49() else D19();
  D19():
    deopt 77 [r48];
  L49():
    st recs = r48;
    recs = ld recs;
    check L50() else D20();
  D20():
    deopt 79 [recs];
  L50():
    recs1 = force? recs;
    checkMissing(recs1);
    c8 = `is.object`(recs1);
    if c8 then L51() else L52(recs1);
  L8(dx8):
    st recs = dx8;
    st last = 0;
    TEXT2 = ld TEXT;
    check L56() else D23();
  L51():
    dr6 = tryDispatchBuiltin.1("[", recs1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L53() else L52(dr6);
  L52(recs3):
    order = ldf order;
    check L54() else D21();
  D21():
    deopt 82 [recs3];
  D23():
    deopt 92 [TEXT2];
  L53():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx7);
  L54():
    p9 = prom<V +>{
      recs4 = ld recs;
      recs5 = force? recs4;
      checkMissing(recs5);
      c9 = `is.object`(recs5);
      if c9 then L1() else L2(recs5);
    L0(dx10):
      return dx10;
    L1():
      dr8 = tryDispatchBuiltin.1("$", recs5);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(recs7):
      r49 = `$`(recs7, <sym line>);
      goto L0(r49);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx9);
    };
    r51 = dyn order(p9);
    check L55() else D22();
  L56():
    TEXT3 = force? TEXT2;
    checkMissing(TEXT3);
    st state = TEXT3;
    sym8 = ldf seq_len;
    base8 = ldf seq_len in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L57() else L58();
  D22():
    deopt 84 [recs3, r51];
  L9(r54):
    s = toForSeq(r54);
    l1 = length(s);
    i = 0;
    goto L10(i);
  L55():
    __ = ldf `[` in base;
    r52 = dyn __(recs1, r51, <missing>);
    goto L8(r52);
  L57():
    nrow = ldf nrow;
    check L59() else D24();
  L58():
    r53 = dyn base8(<lang nrow(recs)>);
    goto L9(r53);
  D24():
    deopt 97 [];
  L10(i1):
    i2 = `+`.1(i1, 1);
    c10 = `<`.1(l1, i2);
    if c10 then L61() else L17();
  L59():
    p10 = prom<V +>{
      recs8 = ld recs;
      recs9 = force? recs8;
      checkMissing(recs9);
      return recs9;
    };
    r56 = dyn nrow(p10);
    check L60() else D25();
  D25():
    deopt 99 [r56];
  L17():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    recs10 = ld recs;
    check L62() else D26();
  L60():
    r57 = seq_len(r56);
    goto L9(r57);
  L61():
    lines6 = ld lines;
    check L94() else D36();
  D26():
    deopt 101 [i2, recs10];
  D36():
    deopt 143 [lines6];
  L62():
    recs11 = force? recs10;
    checkMissing(recs11);
    c11 = `is.object`(recs11);
    if c11 then L64() else L65(i2, recs11);
  L94():
    lines7 = force? lines6;
    checkMissing(lines7);
    popenv;
    return lines7;
  L63(i8, dx12):
    c12 = `is.object`(dx12);
    if c12 then L67() else L68(i8, dx12);
  L64():
    dr10 = tryDispatchBuiltin.1("$", recs11);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L66() else L65(i2, dr10);
  L65(i6, recs13):
    r58 = `$`(recs13, <sym line>);
    goto L63(i6, r58);
  L11(i12, dx16):
    st line = dx16;
    state = ld state;
    check L71() else D28();
  L66():
    dx11 = getTryDispatchBuiltinValue(dr10);
    goto L63(i2, dx11);
  L67():
    dr12 = tryDispatchBuiltin.1("[", dx12);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L69() else L68(i8, dr12);
  L68(i10, dx14):
    i13 = ld i;
    check L70() else D27();
  D27():
    deopt 104 [i10, dx14, i13];
  D28():
    deopt 108 [i12, state];
  L69():
    dx15 = getTryDispatchBuiltinValue(dr12);
    goto L11(i8, dx15);
  L70():
    i14 = force? i13;
    __1 = ldf `[` in base;
    r59 = dyn __1(dx14, i14);
    goto L11(i10, r59);
  L71():
    state1 = force? state;
    checkMissing(state1);
    CODE2 = ld CODE;
    check L72() else D29();
  D29():
    deopt 109 [i12, state1, CODE2];
  L72():
    CODE3 = force? CODE2;
    checkMissing(CODE3);
    r60 = `==`(state1, CODE3);
    c13 = `as.logical`(r60);
    if c13 then L73() else L12();
  L12():
    l5 = ld lines;
    c15 = `is.object`(l5);
    if c15 then L80() else L81(i12, "", l5);
  L14(i21):
    recs14 = ld recs;
    check L84() else D33();
  L73():
    l2 = ld lines;
    c14 = `is.object`(l2);
    if c14 then L74() else L75(i12, "", l2);
  D33():
    deopt 130 [i21, recs14];
  L13(i20, r64, dx18):
    st lines = dx18;
    goto L14(i20);
  L15(i25, r72, dx20):
    st lines = dx20;
    goto L14(i25);
  L74():
    dr14 = tryDispatchBuiltin.0("[<-", l2, "");
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L76() else L75(i12, "", dr14);
  L75(i18, r62, l4):
    last = ld last;
    check L77() else D30();
  L80():
    dr16 = tryDispatchBuiltin.0("[<-", l5, "");
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L82() else L81(i12, "", dr16);
  L81(i23, r70, l7):
    line2 = ld line;
    check L83() else D32();
  L84():
    recs15 = force? recs14;
    checkMissing(recs15);
    c16 = `is.object`(recs15);
    if c16 then L86() else L87(i21, recs15);
  D30():
    deopt 115 [i18, r62, l4, "", last];
  D32():
    deopt 126 [i23, r70, l7, "", line2];
  L76():
    dx17 = getTryDispatchBuiltinValue(dr14);
    goto L13(i12, "", dx17);
  L77():
    last1 = force? last;
    checkMissing(last1);
    r65 = `+`(last1, 1);
    line = ld line;
    check L78() else D31();
  L82():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L15(i12, "", dx19);
  L83():
    line3 = force? line2;
    ___2 = ldf `[<-` in base;
    r73 = dyn ___2(l7, "", line3);
    goto L15(i23, r70, r73);
  L85(i29, dx22):
    c17 = `is.object`(dx22);
    if c17 then L89() else L90(i29, dx22);
  L86():
    dr18 = tryDispatchBuiltin.1("$", recs15);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L88() else L87(i21, dr18);
  L87(i27, recs17):
    r74 = `$`(recs17, <sym type>);
    goto L85(i27, r74);
  D31():
    deopt 118 [i18, r62, l4, "", r65, line];
  L16(i33, dx26):
    st state = dx26;
    line4 = ld line;
    check L93() else D35();
  L78():
    line1 = force? line;
    checkMissing(line1);
    r66 = `:`(r65, line1);
    ___1 = ldf `[<-` in base;
    r67 = dyn ___1(l4, "", r66);
    goto L13(i18, r62, r67);
  L88():
    dx21 = getTryDispatchBuiltinValue(dr18);
    goto L85(i21, dx21);
  L89():
    dr20 = tryDispatchBuiltin.1("[", dx22);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L91() else L90(i29, dr20);
  L90(i31, dx24):
    i34 = ld i;
    check L92() else D34();
  D34():
    deopt 133 [i31, dx24, i34];
  D35():
    deopt 137 [i33, line4];
  L91():
    dx25 = getTryDispatchBuiltinValue(dr20);
    goto L16(i29, dx25);
  L92():
    i35 = force? i34;
    __2 = ldf `[` in base;
    r75 = dyn __2(dx24, i35);
    goto L16(i31, r75);
  L93():
    line5 = force? line4;
    checkMissing(line5);
    st last = line5;
    goto L10(i33);
  }
}