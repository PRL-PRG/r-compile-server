fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4229190280;
    st getParseText = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4229190280(parseData, id) {
  (reg parseData:*, reg id:*) -+> V { var parseData:*, var id:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg parseData1:*, reg parseData2:V, reg attr:cls, reg r2:V, reg parseData3:*, reg parseData4:V, reg c:L, reg parseData6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg id1:*, reg id2:V, reg as_character:cls, reg r5:V, reg __:cls, reg r6:V, reg d:*, reg d1:V, reg c1:L, reg d3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg text:*, reg text1:V, reg c2:V, reg c3:L, reg character:cls, reg nrow:cls, reg d4:*, reg d5:V, reg p:p(V +), reg r11:V, reg p1:p(V +), reg r13:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg text2:*, reg text3:V, reg r16:I, reg which:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg text4:*, reg text5:V, reg nzchar:cls, reg r20:V, reg r21:V, reg d6:*, reg d7:V, reg c4:L, reg r23:V, reg d9:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r25:V, reg dx5:V, reg r26:V, reg r27:V, reg startsWith:cls, reg text6:*, reg text7:V, reg p2:p(V +), reg r29:V, reg r30:V, reg r31:V, reg p3:p(V +), reg r33:V, reg blank:*, reg blank1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c5:L, reg x:V, reg getSrcLines:cls, reg srcfile:*, reg srcfile1:V, reg p4:p(V +), reg d10:*, reg d11:V, reg c6:L, reg d13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r35:V, reg c7:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg i5:*, reg i6:V, reg __1:cls, reg r36:V, reg p5:p(V +), reg d14:*, reg d15:V, reg c8:L, reg d17:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r38:V, reg c9:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg i7:*, reg i8:V, reg __2:cls, reg r39:V, reg p6:p(V +), reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg i11:I, reg r43:V, reg lines:*, reg lines1:V, reg length:cls, reg r44:V, reg substr_with_tabs:cls, reg lines2:*, reg lines3:V, reg c10:L, reg lines5:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg n:*, reg n1:V, reg __3:cls, reg r45:V, reg p7:p(V +), reg d18:*, reg d19:V, reg c11:L, reg d21:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg r47:V, reg c12:L, reg dx23:V, reg dr18:V, reg dc9:L, reg dx24:V, reg dx25:V, reg i12:*, reg i13:V, reg __4:cls, reg r48:V, reg p8:p(V +), reg r50:V, reg l1:*, reg c13:L, reg i15:I, reg r52:V, reg l3:*, reg dr20:V, reg dc10:L, reg dx26:V, reg i17:I, reg dx27:V, reg n2:*, reg n3:V, reg ___:cls, reg r55:V, reg substr_with_tabs1:cls, reg lines6:*, reg lines7:V, reg c14:L, reg lines9:V, reg dr22:V, reg dc11:L, reg dx28:V, reg dx29:V, reg __5:cls, reg r56:V, reg p9:p(V +), reg d22:*, reg d23:V, reg c15:L, reg d25:V, reg dr24:V, reg dc12:L, reg dx30:V, reg dx31:V, reg r58:V, reg c16:L, reg dx33:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg i18:*, reg i19:V, reg __6:cls, reg r59:V, reg p10:p(V +), reg r61:V, reg l4:*, reg c17:L, reg i21:I, reg r63:V, reg l6:*, reg dr28:V, reg dc14:L, reg dx36:V, reg i23:I, reg dx37:V, reg ___1:cls, reg r66:V, reg paste:cls, reg lines10:*, reg lines11:V, reg p11:p(V +), reg r68:V, reg l7:*, reg c18:L, reg i25:I, reg r70:V, reg l9:*, reg dr30:V, reg dc15:L, reg dx38:V, reg i27:I, reg dx39:V, reg i28:*, reg i29:V, reg ___2:cls, reg r73:V, reg text8:*, reg text9:V |
    mkenv;
    st parseData = parseData;
    st id = id;
    sym = ldf attr;
    base = ldf attr in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L0(r1):
    st srcfile = r1;
    parseData3 = ld parseData;
    check L17() else D2();
  L13():
    parseData1 = ld parseData;
    check L15() else D0();
  L14():
    r = dyn base(<sym parseData>, "srcfile");
    goto L0(r);
  D0():
    deopt 2 [parseData1];
  D2():
    deopt 8 [parseData3];
  L15():
    parseData2 = force? parseData1;
    checkMissing(parseData2);
    attr = ldf attr in base;
    r2 = dyn attr(parseData2, "srcfile");
    check L16() else D1();
  L17():
    parseData4 = force? parseData3;
    checkMissing(parseData4);
    c = `is.object`(parseData4);
    if c then L18() else L19(parseData4);
  D1():
    deopt 6 [r2];
  L1(dx1):
    st d = dx1;
    d = ld d;
    check L25() else D5();
  L16():
    goto L0(r2);
  L18():
    dr = tryDispatchBuiltin.1("[", parseData4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(parseData6):
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L21() else L22();
  D5():
    deopt 20 [d];
  L2(r4):
    __ = ldf `[` in base;
    r6 = dyn __(parseData4, r4, <missing>);
    goto L1(r6);
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L21():
    id1 = ld id;
    check L23() else D3();
  L22():
    r3 = dyn base1(<sym id>);
    goto L2(r3);
  L25():
    d1 = force? d;
    checkMissing(d1);
    c1 = `is.object`(d1);
    if c1 then L27() else L28(d1);
  D3():
    deopt 12 [parseData6, id1];
  L23():
    id2 = force? id1;
    checkMissing(id2);
    as_character = ldf `as.character` in base;
    r5 = dyn as_character(id2);
    check L24() else D4();
  L26(dx3):
    st text = dx3;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L30() else L31();
  L27():
    dr2 = tryDispatchBuiltin.1("$", d1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(d3):
    r7 = `$`(d3, <sym text>);
    goto L26(r7);
  D4():
    deopt 15 [parseData6, r5];
  L3(r9):
    c3 = `as.logical`(r9);
    if c3 then L33() else L4();
  L24():
    goto L2(r5);
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L26(dx2);
  L30():
    text = ld text;
    check L32() else D6();
  L31():
    r8 = dyn base2(<sym text>);
    goto L3(r8);
  D6():
    deopt 25 [text];
  L4():
    which = ldf which;
    check L40() else D10();
  L6():
    blank = ld blank;
    check L42() else D12();
  L32():
    text1 = force? text;
    checkMissing(text1);
    c2 = `==`(text1, NULL);
    goto L3(c2);
  L33():
    character = ldf character;
    check L34() else D7();
  D7():
    deopt 29 [];
  D10():
    deopt 39 [];
  D12():
    deopt 43 [blank];
  L34():
    p1 = prom<V +>{
      nrow = ldf nrow;
      p = prom<V +>{
        d4 = ld d;
        d5 = force? d4;
        checkMissing(d5);
        return d5;
      };
      r11 = dyn nrow(p);
      return r11;
    };
    r13 = dyn character(p1);
    check L35() else D8();
  L40():
    p3 = prom<V +>{
      sym4 = ldf nzchar;
      base4 = ldf nzchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r19):
      r21 = `!`(r19);
      d6 = ld d;
      d7 = force? d6;
      checkMissing(d7);
      c4 = `is.object`(d7);
      if c4 then L4() else L5(r21, d7);
    L1():
      text4 = ld text;
      text5 = force? text4;
      checkMissing(text5);
      nzchar = ldf nzchar in base;
      r20 = dyn nzchar(text5);
      goto L0(r20);
    L2():
      r18 = dyn base4(<sym text>);
      goto L0(r18);
    L3(r25, dx5):
      r27 = `==`(dx5, "STR_CONST");
      startsWith = ldf startsWith;
      p2 = prom<V +>{
        text6 = ld text;
        text7 = force? text6;
        checkMissing(text7);
        return text7;
      };
      r29 = dyn startsWith(p2, "[");
      r30 = `&&`(r27, r29);
      r31 = `||`(r25, r30);
      return r31;
    L4():
      dr4 = tryDispatchBuiltin.1("$", d7);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(r21, dr4);
    L5(r23, d9):
      r26 = `$`(d9, <sym token>);
      goto L3(r23, r26);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L3(r21, dx4);
    };
    r33 = dyn which(p3);
    check L41() else D11();
  L42():
    blank1 = force? blank;
    checkMissing(blank1);
    s = toForSeq(blank1);
    l = length(s);
    i = 0;
    goto L7(i);
  D8():
    deopt 31 [r13];
  D11():
    deopt 41 [r33];
  L7(i1):
    i2 = `+`.1(i1, 1);
    c5 = `<`.1(l, i2);
    if c5 then L43() else L12();
  L35():
    st text = r13;
    sym3 = ldf seq_along;
    base3 = ldf seq_along in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L41():
    st blank = r33;
    goto L6();
  L5(r15):
    st blank = r15;
    goto L6();
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    getSrcLines = ldf getSrcLines;
    check L44() else D13();
  L36():
    text2 = ld text;
    check L38() else D9();
  L37():
    r14 = dyn base3(<sym text>);
    goto L5(r14);
  L43():
    text8 = ld text;
    check L67() else D25();
  D9():
    deopt 34 [text2];
  D13():
    deopt 46 [i2];
  D25():
    deopt 95 [text8];
  L38():
    text3 = force? text2;
    checkMissing(text3);
    r16 = seq_along(text3);
    goto L5(r16);
  L44():
    p4 = prom<V +>{
      srcfile = ld srcfile;
      srcfile1 = force? srcfile;
      checkMissing(srcfile1);
      return srcfile1;
    };
    p5 = prom<V +>{
      d10 = ld d;
      d11 = force? d10;
      checkMissing(d11);
      c6 = `is.object`(d11);
      if c6 then L2() else L3(d11);
    L1(dx7):
      c7 = `is.object`(dx7);
      if c7 then L5() else L6(dx7);
    L2():
      dr6 = tryDispatchBuiltin.1("$", d11);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L4() else L3(dr6);
    L3(d13):
      r35 = `$`(d13, <sym line1>);
      goto L1(r35);
    L0(dx11):
      return dx11;
    L4():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    L5():
      dr8 = tryDispatchBuiltin.1("[", dx7);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L7() else L6(dr8);
    L6(dx9):
      i5 = ld i;
      i6 = force? i5;
      __1 = ldf `[` in base;
      r36 = dyn __1(dx9, i6);
      goto L0(r36);
    L7():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx10);
    };
    p6 = prom<V +>{
      d14 = ld d;
      d15 = force? d14;
      checkMissing(d15);
      c8 = `is.object`(d15);
      if c8 then L2() else L3(d15);
    L1(dx13):
      c9 = `is.object`(dx13);
      if c9 then L5() else L6(dx13);
    L2():
      dr10 = tryDispatchBuiltin.1("$", d15);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(d17):
      r38 = `$`(d17, <sym line2>);
      goto L1(r38);
    L0(dx17):
      return dx17;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx12);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx13);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx15):
      i7 = ld i;
      i8 = force? i7;
      __2 = ldf `[` in base;
      r39 = dyn __2(dx15, i8);
      goto L0(r39);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx16);
    };
    r41 = dyn getSrcLines(p4, p5, p6);
    check L45() else D14();
  L67():
    text9 = force? text8;
    checkMissing(text9);
    popenv;
    return text9;
  D14():
    deopt 50 [i2, r41];
  L45():
    st lines = r41;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L46() else L47();
  L8(i11, r43):
    st n = r43;
    substr_with_tabs = ldf substr_with_tabs;
    check L50() else D17();
  L46():
    lines = ld lines;
    check L48() else D15();
  L47():
    r42 = dyn base5(<sym lines>);
    goto L8(i2, r42);
  D15():
    deopt 54 [i2, lines];
  D17():
    deopt 60 [i11];
  L48():
    lines1 = force? lines;
    checkMissing(lines1);
    length = ldf length in base;
    r44 = dyn length(lines1);
    check L49() else D16();
  L50():
    p7 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      c10 = `is.object`(lines3);
      if c10 then L1() else L2(lines3);
    L0(dx19):
      return dx19;
    L1():
      dr14 = tryDispatchBuiltin.1("[", lines3);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(lines5):
      n = ld n;
      n1 = force? n;
      __3 = ldf `[` in base;
      r45 = dyn __3(lines5, n1);
      goto L0(r45);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    p8 = prom<V +>{
      d18 = ld d;
      d19 = force? d18;
      checkMissing(d19);
      c11 = `is.object`(d19);
      if c11 then L2() else L3(d19);
    L1(dx21):
      c12 = `is.object`(dx21);
      if c12 then L5() else L6(dx21);
    L2():
      dr16 = tryDispatchBuiltin.1("$", d19);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L4() else L3(dr16);
    L3(d21):
      r47 = `$`(d21, <sym col2>);
      goto L1(r47);
    L0(dx25):
      return dx25;
    L4():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L1(dx20);
    L5():
      dr18 = tryDispatchBuiltin.1("[", dx21);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L7() else L6(dr18);
    L6(dx23):
      i12 = ld i;
      i13 = force? i12;
      __4 = ldf `[` in base;
      r48 = dyn __4(dx23, i13);
      goto L0(r48);
    L7():
      dx24 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx24);
    };
    r50 = dyn substr_with_tabs(p7, 1.0, p8);
    check L51() else D18();
  D16():
    deopt 57 [i2, r44];
  D18():
    deopt 64 [i11, r50];
  L49():
    goto L8(i2, r44);
  L51():
    l1 = ld lines;
    c13 = `is.object`(l1);
    if c13 then L52() else L53(i11, r50, l1);
  L9(i17, dx27):
    st lines = dx27;
    substr_with_tabs1 = ldf substr_with_tabs;
    check L56() else D20();
  L52():
    dr20 = tryDispatchBuiltin.0("[<-", l1, r50);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L54() else L53(i11, r50, dr20);
  L53(i15, r52, l3):
    n2 = ld n;
    check L55() else D19();
  D19():
    deopt 66 [i15, r52, l3, r50, n2];
  D20():
    deopt 71 [i17];
  L54():
    dx26 = getTryDispatchBuiltinValue(dr20);
    goto L9(i11, dx26);
  L55():
    n3 = force? n2;
    ___ = ldf `[<-` in base;
    r55 = dyn ___(l3, r50, n3);
    goto L9(i15, r55);
  L56():
    p9 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      c14 = `is.object`(lines7);
      if c14 then L1() else L2(lines7);
    L0(dx29):
      return dx29;
    L1():
      dr22 = tryDispatchBuiltin.1("[", lines7);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(lines9):
      __5 = ldf `[` in base;
      r56 = dyn __5(lines9, 1.0);
      goto L0(r56);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx28);
    };
    p10 = prom<V +>{
      d22 = ld d;
      d23 = force? d22;
      checkMissing(d23);
      c15 = `is.object`(d23);
      if c15 then L2() else L3(d23);
    L1(dx31):
      c16 = `is.object`(dx31);
      if c16 then L5() else L6(dx31);
    L2():
      dr24 = tryDispatchBuiltin.1("$", d23);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L4() else L3(dr24);
    L3(d25):
      r58 = `$`(d25, <sym col1>);
      goto L1(r58);
    L0(dx35):
      return dx35;
    L4():
      dx30 = getTryDispatchBuiltinValue(dr24);
      goto L1(dx30);
    L5():
      dr26 = tryDispatchBuiltin.1("[", dx31);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L7() else L6(dr26);
    L6(dx33):
      i18 = ld i;
      i19 = force? i18;
      __6 = ldf `[` in base;
      r59 = dyn __6(dx33, i19);
      goto L0(r59);
    L7():
      dx34 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx34);
    };
    r61 = dyn substr_with_tabs1(p9, p10, +Infinity);
    check L57() else D21();
  D21():
    deopt 75 [i17, r61];
  L57():
    l4 = ld lines;
    c17 = `is.object`(l4);
    if c17 then L58() else L59(i17, r61, l4);
  L10(i23, dx37):
    st lines = dx37;
    paste = ldf paste;
    check L61() else D22();
  L58():
    dr28 = tryDispatchBuiltin.0("[<-", l4, r61);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L60() else L59(i17, r61, dr28);
  L59(i21, r63, l6):
    ___1 = ldf `[<-` in base;
    r66 = dyn ___1(l6, r61, 1.0);
    goto L10(i21, r66);
  D22():
    deopt 82 [i23];
  L60():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L10(i17, dx36);
  L61():
    p11 = prom<V +>{
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      return lines11;
    };
    r68 = dyn paste[, collapse](p11, "\n");
    check L62() else D23();
  D23():
    deopt 86 [i23, r68];
  L62():
    l7 = ld text;
    c18 = `is.object`(l7);
    if c18 then L63() else L64(i23, r68, l7);
  L11(i27, dx39):
    st text = dx39;
    goto L7(i27);
  L63():
    dr30 = tryDispatchBuiltin.0("[<-", l7, r68);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L65() else L64(i23, r68, dr30);
  L64(i25, r70, l9):
    i28 = ld i;
    check L66() else D24();
  D24():
    deopt 88 [i25, r70, l9, r68, i28];
  L65():
    dx38 = getTryDispatchBuiltinValue(dr30);
    goto L11(i23, dx38);
  L66():
    i29 = force? i28;
    ___2 = ldf `[<-` in base;
    r73 = dyn ___2(l9, r68, i29);
    goto L11(i25, r73);
  }
}