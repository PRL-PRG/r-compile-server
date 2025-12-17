fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1911462521;
    st blank_out_character_ranges = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1911462521(s, ranges) {
  (reg s:*, reg ranges:*) -+> V { var s:*, var ranges:*, reg ranges1:*, reg ranges2:V, reg s1:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg r:*, reg r1:V, reg c1:L, reg i6:I, reg r3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg __:cls, reg r4:V, reg r5:*, reg r6:V, reg c2:L, reg i10:I, reg r8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg i12:I, reg dx3:V, reg __1:cls, reg r9:V, reg r10:*, reg r11:V, reg c3:L, reg i14:I, reg r13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i16:I, reg dx5:V, reg __2:cls, reg r14:V, reg r15:*, reg r16:V, reg c4:L, reg i18:I, reg r18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i20:I, reg dx7:V, reg __3:cls, reg r19:V, reg l1:*, reg l2:V, reg l3:*, reg l4:V, reg r20:V, reg c5:L, reg strrep:cls, reg c6:*, reg c7:V, reg c8:*, reg c9:V, reg r21:V, reg r22:V, reg p:p(V +), reg r24:V, reg l5:*, reg c10:L, reg i24:I, reg r27:V, reg l8:*, reg r28:V, reg l9:*, reg dr8:V, reg dc4:L, reg dx8:V, reg i26:I, reg r31:V, reg l11:*, reg r32:V, reg dx9:V, reg l12:*, reg l13:V, reg __4:cls, reg r33:V, reg substring__:cls, reg c11:*, reg c12:V, reg p1:p(V +), reg c13:*, reg c14:V, reg p2:p(V +), reg r36:V, reg c15:L, reg i28:I, reg r38:V, reg l15:*, reg dr10:V, reg dc5:L, reg dx10:V, reg i30:I, reg r40:V, reg dx11:V, reg l16:*, reg l17:V, reg ___:cls, reg r41:V, reg i31:I, reg l18:*, reg c16:L, reg i33:I, reg r45:S, reg l21:*, reg r46:S, reg l22:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i35:I, reg r49:S, reg l24:*, reg r50:S, reg dx13:V, reg l25:*, reg l26:V, reg __5:cls, reg r51:V, reg substring__1:cls, reg c17:*, reg c18:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r53:V, reg r54:V, reg s2:*, reg s3:V, reg c19:L, reg s5:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg l27:*, reg l28:V, reg __6:cls, reg r55:V, reg nchar:cls, reg r56:V, reg p4:p(V +), reg r58:V, reg c20:L, reg i37:I, reg r60:S, reg l30:*, reg dr16:V, reg dc8:L, reg dx16:V, reg i39:I, reg dx17:V, reg l31:*, reg l32:V, reg ___1:cls, reg r63:V, reg seq:cls, reg l33:*, reg l34:V, reg r64:V, reg p5:p(V +), reg l35:*, reg l36:V, reg l37:*, reg l38:V, reg r66:V, reg r67:V, reg p6:p(V +), reg r69:V, reg s6:V, reg l39:I, reg i40:I, reg i41:I, reg i42:I, reg i43:I, reg c21:L, reg x1:V, reg l40:*, reg c22:L, reg i50:I, reg i51:I, reg r71:S, reg l42:*, reg dr18:V, reg dc9:L, reg dx18:V, reg i54:I, reg i55:I, reg dx19:V, reg i56:*, reg i57:V, reg ___2:cls, reg r74:V, reg strrep1:cls, reg c23:*, reg c24:V, reg p7:p(V +), reg r76:V, reg l43:*, reg c25:L, reg i59:I, reg r79:V, reg l46:*, reg r80:V, reg l47:*, reg dr20:V, reg dc10:L, reg dx20:V, reg i61:I, reg r83:V, reg l49:*, reg r84:V, reg dx21:V, reg l50:*, reg l51:V, reg __7:cls, reg r85:V, reg substring__2:cls, reg c26:*, reg c27:V, reg p8:p(V +), reg r87:V, reg c28:L, reg i63:I, reg r89:V, reg l53:*, reg dr22:V, reg dc11:L, reg dx22:V, reg i65:I, reg r91:V, reg dx23:V, reg l54:*, reg l55:V, reg ___3:cls, reg r92:V, reg s7:*, reg s8:V |
    mkenv;
    st s = s;
    st ranges = ranges;
    ranges1 = ld ranges;
    check L17() else D0();
  D0():
    deopt 0 [ranges1];
  L17():
    ranges2 = force? ranges1;
    checkMissing(ranges2);
    s1 = toForSeq(ranges2);
    l = length(s1);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L18() else L16();
  L16():
    x = `[[`(s1, i2, NULL, TRUE);
    st r = x;
    r = ld r;
    check L19() else D1();
  L18():
    s7 = ld s;
    check L80() else D26();
  D1():
    deopt 2 [i2, r];
  D26():
    deopt 106 [s7];
  L19():
    r1 = force? r;
    checkMissing(r1);
    c1 = `is.object`(r1);
    if c1 then L20() else L21(i2, r1);
  L80():
    s8 = force? s7;
    checkMissing(s8);
    popenv;
    return s8;
  L1(i8, dx1):
    st l1 = dx1;
    r5 = ld r;
    check L23() else D2();
  L20():
    dr = tryDispatchBuiltin.1("[", r1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L22() else L21(i2, dr);
  L21(i6, r3):
    __ = ldf `[` in base;
    r4 = dyn __(r3, 1);
    goto L1(i6, r4);
  D2():
    deopt 8 [i8, r5];
  L22():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(i2, dx);
  L23():
    r6 = force? r5;
    checkMissing(r6);
    c2 = `is.object`(r6);
    if c2 then L24() else L25(i8, r6);
  L2(i12, dx3):
    st c1 = dx3;
    r10 = ld r;
    check L27() else D3();
  L24():
    dr2 = tryDispatchBuiltin.1("[", r6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L26() else L25(i8, dr2);
  L25(i10, r8):
    __1 = ldf `[` in base;
    r9 = dyn __1(r8, 2);
    goto L2(i10, r9);
  D3():
    deopt 14 [i12, r10];
  L26():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(i8, dx2);
  L27():
    r11 = force? r10;
    checkMissing(r11);
    c3 = `is.object`(r11);
    if c3 then L28() else L29(i12, r11);
  L3(i16, dx5):
    st l2 = dx5;
    r15 = ld r;
    check L31() else D4();
  L28():
    dr4 = tryDispatchBuiltin.1("[", r11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L30() else L29(i12, dr4);
  L29(i14, r13):
    __2 = ldf `[` in base;
    r14 = dyn __2(r13, 3);
    goto L3(i14, r14);
  D4():
    deopt 20 [i16, r15];
  L30():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(i12, dx4);
  L31():
    r16 = force? r15;
    checkMissing(r16);
    c4 = `is.object`(r16);
    if c4 then L32() else L33(i16, r16);
  L4(i20, dx7):
    st c2 = dx7;
    l1 = ld l1;
    check L35() else D5();
  L32():
    dr6 = tryDispatchBuiltin.1("[", r16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(i16, dr6);
  L33(i18, r18):
    __3 = ldf `[` in base;
    r19 = dyn __3(r18, 4);
    goto L4(i18, r19);
  D5():
    deopt 26 [i20, l1];
  L34():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4(i16, dx6);
  L35():
    l2 = force? l1;
    checkMissing(l2);
    l3 = ld l2;
    check L36() else D6();
  D6():
    deopt 27 [i20, l2, l3];
  L36():
    l4 = force? l3;
    checkMissing(l4);
    r20 = `==`(l2, l4);
    c5 = `as.logical`(r20);
    if c5 then L37() else L5();
  L5():
    l18 = ld s;
    c16 = `is.object`(l18);
    if c16 then L51() else L52(i20, "", l18, "", l18);
  L8(i31):
    goto L0(i31);
  L37():
    strrep = ldf strrep;
    check L38() else D7();
  D7():
    deopt 31 [i20];
  L9(i35, r49, l24, r50, dx13):
    substring__1 = ldf `substring<-`;
    check L55() else D14();
  L38():
    p = prom<V +>{
      c6 = ld c2;
      c7 = force? c6;
      checkMissing(c7);
      c8 = ld c1;
      c9 = force? c8;
      checkMissing(c9);
      r21 = `-`(c7, c9);
      r22 = `+`(r21, 1);
      return r22;
    };
    r24 = dyn strrep(" ", p);
    check L39() else D8();
  L51():
    dr12 = tryDispatchBuiltin.1("[", l18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L53() else L52(i20, "", l18, "", dr12);
  L52(i33, r45, l21, r46, l22):
    l25 = ld l1;
    check L54() else D13();
  D8():
    deopt 34 [i20, r24];
  D13():
    deopt 54 [i33, r45, l21, r46, l22, l25];
  D14():
    deopt 58 [i35, r49, l24, dx13, r50];
  L39():
    l5 = ld s;
    c10 = `is.object`(l5);
    if c10 then L40() else L41(i20, r24, l5, r24, l5);
  L53():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L9(i20, "", l18, "", dx12);
  L54():
    l26 = force? l25;
    __5 = ldf `[` in base;
    r51 = dyn __5(l22, l26);
    goto L9(i33, r45, l21, r46, r51);
  L55():
    p3 = prom<V +>{
      c17 = ld c1;
      c18 = force? c17;
      checkMissing(c18);
      return c18;
    };
    p4 = prom<V +>{
      sym = ldf nchar;
      base = ldf nchar in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r54):
      return r54;
    L2():
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      c19 = `is.object`(s3);
      if c19 then L4() else L5(s3);
    L3():
      r53 = dyn base(<lang `[`(s, l1)>);
      goto L0(r53);
    L1(dx15):
      nchar = ldf nchar in base;
      r56 = dyn nchar(dx15, "chars", FALSE, NA_LGL);
      goto L0(r56);
    L4():
      dr14 = tryDispatchBuiltin.1("[", s3);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L6() else L5(dr14);
    L5(s5):
      l27 = ld l1;
      l28 = force? l27;
      __6 = ldf `[` in base;
      r55 = dyn __6(s5, l28);
      goto L1(r55);
    L6():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx14);
    };
    r58 = dyn substring__1(dx13, NULL, p3, p4, r50);
    check L56() else D15();
  D15():
    deopt 62 [i35, r49, l24, r58];
  L6(i26, r31, l11, r32, dx9):
    substring__ = ldf `substring<-`;
    check L44() else D10();
  L40():
    dr8 = tryDispatchBuiltin.1("[", l5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L42() else L41(i20, r24, l5, r24, dr8);
  L41(i24, r27, l8, r28, l9):
    l12 = ld l1;
    check L43() else D9();
  L56():
    c20 = `is.object`(l24);
    if c20 then L57() else L58(i35, r49, l24);
  D9():
    deopt 37 [i24, r27, l8, r28, l9, l12];
  D10():
    deopt 41 [i26, r31, l11, dx9, r32];
  L10(i39, dx17):
    st s = dx17;
    seq = ldf seq;
    check L61() else D17();
  L42():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L6(i20, r24, l5, r24, dx8);
  L43():
    l13 = force? l12;
    __4 = ldf `[` in base;
    r33 = dyn __4(l9, l13);
    goto L6(i24, r27, l8, r28, r33);
  L44():
    p1 = prom<V +>{
      c11 = ld c1;
      c12 = force? c11;
      checkMissing(c12);
      return c12;
    };
    p2 = prom<V +>{
      c13 = ld c2;
      c14 = force? c13;
      checkMissing(c14);
      return c14;
    };
    r36 = dyn substring__(dx9, NULL, p1, p2, r32);
    check L45() else D11();
  L57():
    dr16 = tryDispatchBuiltin.0("[<-", l24, r58);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L59() else L58(i35, r49, dr16);
  L58(i37, r60, l30):
    l31 = ld l1;
    check L60() else D16();
  D11():
    deopt 45 [i26, r31, l11, r36];
  D16():
    deopt 63 [i37, r60, l30, r58, l31];
  D17():
    deopt 68 [i39];
  L45():
    c15 = `is.object`(l11);
    if c15 then L46() else L47(i26, r31, l11);
  L59():
    dx16 = getTryDispatchBuiltinValue(dr16);
    goto L10(i35, dx16);
  L60():
    l32 = force? l31;
    ___1 = ldf `[<-` in base;
    r63 = dyn ___1(l30, r58, l32);
    goto L10(i37, r63);
  L61():
    p5 = prom<V +>{
      l33 = ld l1;
      l34 = force? l33;
      checkMissing(l34);
      r64 = `+`(l34, 1);
      return r64;
    };
    p6 = prom<V +>{
      l35 = ld l2;
      l36 = force? l35;
      checkMissing(l36);
      l37 = ld l1;
      l38 = force? l37;
      checkMissing(l38);
      r66 = `-`(l36, l38);
      r67 = `-`(r66, 1);
      return r67;
    };
    r69 = dyn seq[, `length.out`](p5, p6);
    check L62() else D18();
  D18():
    deopt 72 [i39, r69];
  L7(i30, r40, dx11):
    st s = dx11;
    goto L8(i30);
  L46():
    dr10 = tryDispatchBuiltin.0("[<-", l11, r36);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L48() else L47(i26, r31, dr10);
  L47(i28, r38, l15):
    l16 = ld l1;
    check L49() else D12();
  L62():
    s6 = toForSeq(r69);
    l39 = length(s6);
    i40 = 0;
    goto L11(i39, i40);
  D12():
    deopt 46 [i28, r38, l15, r36, l16];
  L11(i41, i42):
    i43 = `+`.1(i42, 1);
    c21 = `<`.1(l39, i43);
    if c21 then L63() else L13();
  L48():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L7(i26, r31, dx10);
  L49():
    l17 = force? l16;
    ___ = ldf `[<-` in base;
    r41 = dyn ___(l15, r36, l17);
    goto L7(i28, r38, r41);
  L13():
    x1 = `[[`(s6, i43, NULL, TRUE);
    st i = x1;
    l40 = ld s;
    c22 = `is.object`(l40);
    if c22 then L64() else L65(i41, i43, "", l40);
  L63():
    strrep1 = ldf strrep;
    check L68() else D20();
  D20():
    deopt 84 [i41];
  L12(i54, i55, dx19):
    st s = dx19;
    goto L11(i54, i55);
  L64():
    dr18 = tryDispatchBuiltin.0("[<-", l40, "");
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L66() else L65(i41, i43, "", dr18);
  L65(i50, i51, r71, l42):
    i56 = ld i;
    check L67() else D19();
  L68():
    p7 = prom<V +>{
      c23 = ld c2;
      c24 = force? c23;
      checkMissing(c24);
      return c24;
    };
    r76 = dyn strrep1(" ", p7);
    check L69() else D21();
  D19():
    deopt 76 [i50, i51, r71, l42, "", i56];
  D21():
    deopt 87 [i41, r76];
  L66():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L12(i41, i43, dx18);
  L67():
    i57 = force? i56;
    ___2 = ldf `[<-` in base;
    r74 = dyn ___2(l42, "", i57);
    goto L12(i50, i51, r74);
  L69():
    l43 = ld s;
    c25 = `is.object`(l43);
    if c25 then L70() else L71(i41, r76, l43, r76, l43);
  L14(i61, r83, l49, r84, dx21):
    substring__2 = ldf `substring<-`;
    check L74() else D23();
  L70():
    dr20 = tryDispatchBuiltin.1("[", l43);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L72() else L71(i41, r76, l43, r76, dr20);
  L71(i59, r79, l46, r80, l47):
    l50 = ld l2;
    check L73() else D22();
  D22():
    deopt 90 [i59, r79, l46, r80, l47, l50];
  D23():
    deopt 94 [i61, r83, l49, dx21, r84];
  L72():
    dx20 = getTryDispatchBuiltinValue(dr20);
    goto L14(i41, r76, l43, r76, dx20);
  L73():
    l51 = force? l50;
    __7 = ldf `[` in base;
    r85 = dyn __7(l47, l51);
    goto L14(i59, r79, l46, r80, r85);
  L74():
    p8 = prom<V +>{
      c26 = ld c2;
      c27 = force? c26;
      checkMissing(c27);
      return c27;
    };
    r87 = dyn substring__2(dx21, NULL, 1, p8, r84);
    check L75() else D24();
  D24():
    deopt 98 [i61, r83, l49, r87];
  L75():
    c28 = `is.object`(l49);
    if c28 then L76() else L77(i61, r83, l49);
  L15(i65, r91, dx23):
    st s = dx23;
    goto L8(i65);
  L76():
    dr22 = tryDispatchBuiltin.0("[<-", l49, r87);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L78() else L77(i61, r83, dr22);
  L77(i63, r89, l53):
    l54 = ld l2;
    check L79() else D25();
  D25():
    deopt 99 [i63, r89, l53, r87, l54];
  L78():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L15(i61, r83, dx22);
  L79():
    l55 = force? l54;
    ___3 = ldf `[<-` in base;
    r92 = dyn ___3(l53, r87, l55);
    goto L15(i63, r89, r92);
  }
}