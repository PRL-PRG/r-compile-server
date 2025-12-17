fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `print.check_package_compact_datasets` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg r:cls, reg nrow:cls, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r1:V, reg p:p(V +), reg r3:V, reg c1:L, reg ngettext:cls, reg nr:*, reg nr1:V, reg p1:p(V +), reg r5:V, reg writeLines:cls, reg msg:*, reg msg1:V, reg p2:p(V +), reg r7:V, reg x5:*, reg x6:V, reg c2:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r8:V, reg reformat:cls, reg rdas:*, reg rdas1:V, reg c3:L, reg rdas3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r9:V, reg p3:p(V +), reg r11:V, reg l:*, reg c4:L, reg r13:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r16:V, reg print:cls, reg rdas4:*, reg rdas5:V, reg p4:p(V +), reg r18:V, reg sym:cls, reg base:cls, reg guard:L, reg r20:V, reg r21:V, reg x9:*, reg x10:V, reg c5:L, reg x12:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r22:V, reg c6:V, reg r23:V, reg c7:L, reg writeLines1:cls, reg x13:*, reg x14:V, reg c8:L, reg x16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r24:V, reg p5:p(V +), reg r26:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg x17:*, reg x18:V, reg c9:L, reg x20:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r30:V, reg c10:V, reg r31:V, reg c11:L, reg c13:V, reg s:*, reg s1:V, reg c14:L, reg c16:L, reg s3:V, reg dr14:V, reg dc7:L, reg dx14:V, reg c18:L, reg dx15:V, reg __:cls, reg r32:V, reg s4:*, reg s5:V, reg c19:L, reg c21:L, reg dx17:V, reg s7:V, reg dr16:V, reg dc8:L, reg dx19:V, reg c23:L, reg dx20:V, reg dx21:V, reg __1:cls, reg r33:V, reg r34:V, reg r35:V, reg c24:L, reg c25:V, reg c27:L, reg c29:V, reg s8:*, reg s9:V, reg c30:L, reg c32:L, reg s11:V, reg dr18:V, reg dc9:L, reg dx22:V, reg c34:L, reg dx23:V, reg __2:cls, reg r36:V, reg s12:*, reg s13:V, reg c35:L, reg c37:L, reg dx25:V, reg s15:V, reg dr20:V, reg dc10:L, reg dx27:V, reg c39:L, reg dx28:V, reg dx29:V, reg __3:cls, reg r37:V, reg r38:V, reg r39:V, reg c40:L, reg c41:V, reg c43:L, reg writeLines2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r40:V, reg r41:V, reg c44:cls, reg r42:V, reg p6:p(V +), reg r44:V, reg nrow1:cls, reg x21:*, reg x22:V, reg c45:L, reg x24:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg r45:V, reg p7:p(V +), reg r47:V, reg c46:L, reg x25:*, reg x26:V, reg c47:L, reg x28:V, reg dr24:V, reg dc12:L, reg dx32:V, reg dx33:V, reg r48:V, reg reformat1:cls, reg improve:*, reg improve1:V, reg c48:L, reg improve3:V, reg dr26:V, reg dc13:L, reg dx34:V, reg dx35:V, reg r49:V, reg p8:p(V +), reg r51:V, reg l3:*, reg c49:L, reg r53:V, reg l5:*, reg dr28:V, reg dc14:L, reg dx36:V, reg dx37:V, reg r56:V, reg reformat2:cls, reg improve4:*, reg improve5:V, reg c50:L, reg improve7:V, reg dr30:V, reg dc15:L, reg dx38:V, reg dx39:V, reg r57:V, reg p9:p(V +), reg r59:V, reg l6:*, reg c51:L, reg r61:V, reg l8:*, reg dr32:V, reg dc16:L, reg dx40:V, reg dx41:V, reg r64:V, reg print1:cls, reg improve8:*, reg improve9:V, reg p10:p(V +), reg r66:V, reg r67:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r69:V, reg r70:V, reg x29:*, reg x30:V, reg invisible:cls, reg r71:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    r = clos inner2501545716;
    st reformat = r;
    nrow = ldf nrow;
    check L17() else D0();
  D0():
    deopt 4 [];
  L17():
    p = prom<V +>{
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
      r1 = `$`(x4, <sym rdas>);
      goto L0(r1);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r3 = dyn nrow(p);
    check L18() else D1();
  D1():
    deopt 6 [r3];
  L18():
    st nr = r3;
    c1 = `as.logical`(r3);
    if c1 then L19() else L0();
  L0():
    goto L1();
  L1():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L38() else L39();
  L19():
    ngettext = ldf ngettext;
    check L20() else D2();
  D2():
    deopt 9 [];
  L2(r21):
    r23 = `!`(r21);
    c7 = `as.logical`(r23);
    if c7 then L45() else L3();
  L20():
    p1 = prom<V +>{
      nr = ld nr;
      nr1 = force? nr;
      checkMissing(nr1);
      return nr1;
    };
    r5 = dyn ngettext[, , , domain](p1, "Warning: large data file saved inefficiently:", "Warning: large data files saved inefficiently:", NA_LGL);
    check L21() else D3();
  L38():
    x9 = ld x;
    check L40() else D11();
  L39():
    r20 = dyn base(<lang `$`(x, msg)>);
    goto L2(r20);
  D3():
    deopt 15 [r5];
  D11():
    deopt 39 [x9];
  L3():
    goto L4();
  L4():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L49() else L50();
  L21():
    st msg = r5;
    writeLines = ldf writeLines;
    check L22() else D4();
  L40():
    x10 = force? x9;
    checkMissing(x10);
    c5 = `is.object`(x10);
    if c5 then L42() else L43(x10);
  L45():
    writeLines1 = ldf writeLines;
    check L46() else D12();
  D4():
    deopt 18 [];
  D12():
    deopt 45 [];
  L5(r29):
    r31 = `!`(r29);
    c11 = `as.logical`(r31);
    if c11 then L56() else L6(c11);
  L22():
    p2 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r7 = dyn writeLines(p2);
    check L23() else D5();
  L41(dx9):
    c6 = `==`(dx9, NULL);
    goto L2(c6);
  L42():
    dr8 = tryDispatchBuiltin.1("$", x10);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L44() else L43(dr8);
  L43(x12):
    r22 = `$`(x12, <sym msg>);
    goto L41(r22);
  L46():
    p5 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c8 = `is.object`(x14);
      if c8 then L1() else L2(x14);
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("$", x14);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(x16):
      r24 = `$`(x16, <sym msg>);
      goto L0(r24);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    r26 = dyn writeLines1(p5);
    check L47() else D13();
  L49():
    x17 = ld x;
    check L51() else D14();
  L50():
    r28 = dyn base1(<lang `<-`(s, `$`(x, sizes))>);
    goto L5(r28);
  D5():
    deopt 20 [r7];
  D13():
    deopt 47 [r26];
  D14():
    deopt 51 [x17];
  L6(c13):
    c27 = `as.logical`(c13);
    if c27 then L66() else L9(c27);
  L23():
    x5 = ld x;
    check L24() else D6();
  L44():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L41(dx8);
  L47():
    goto L4();
  L51():
    x18 = force? x17;
    checkMissing(x18);
    c9 = `is.object`(x18);
    if c9 then L53() else L54(x18);
  L56():
    s = ld s;
    check L57() else D15();
  D6():
    deopt 21 [x5];
  D15():
    deopt 57 [c11, s];
  L9(c29):
    c43 = `as.logical`(c29);
    if c43 then L76() else L12();
  L24():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L26() else L27(x6);
  L52(dx13):
    st s = dx13;
    c10 = `==`(dx13, NULL);
    goto L5(c10);
  L53():
    dr12 = tryDispatchBuiltin.1("$", x18);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L55() else L54(dr12);
  L54(x20):
    r30 = `$`(x20, <sym sizes>);
    goto L52(r30);
  L57():
    s1 = force? s;
    checkMissing(s1);
    c14 = `is.object`(s1);
    if c14 then L58() else L59(c11, s1);
  L66():
    s8 = ld s;
    check L67() else D17();
  D17():
    deopt 70 [c27, s8];
  L7(c18, dx15):
    s4 = ld s;
    check L61() else D16();
  L12():
    goto L15();
  L15():
    sym3 = ldf invisible;
    base3 = ldf invisible in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L103() else L104();
  L25(dx3):
    st rdas = dx3;
    reformat = ldf reformat;
    check L29() else D7();
  L26():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(x8):
    r8 = `$`(x8, <sym rdas>);
    goto L25(r8);
  L55():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L52(dx12);
  L58():
    dr14 = tryDispatchBuiltin.1("[", s1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L60() else L59(c11, dr14);
  L59(c16, s3):
    __ = ldf `[` in base;
    r32 = dyn __(s3, 1);
    goto L7(c16, r32);
  L67():
    s9 = force? s8;
    checkMissing(s9);
    c30 = `is.object`(s9);
    if c30 then L68() else L69(c27, s9);
  L76():
    writeLines2 = ldf writeLines;
    check L77() else D19();
  D7():
    deopt 26 [];
  D16():
    deopt 61 [c18, dx15, s4];
  D19():
    deopt 84 [];
  L10(c34, dx23):
    s12 = ld s;
    check L71() else D18();
  L16(r70):
    popenv;
    return r70;
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L29():
    p3 = prom<V +>{
      rdas = ld rdas;
      rdas1 = force? rdas;
      checkMissing(rdas1);
      c3 = `is.object`(rdas1);
      if c3 then L1() else L2(rdas1);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("$", rdas1);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(rdas3):
      r9 = `$`(rdas3, <sym size>);
      goto L0(r9);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r11 = dyn reformat(p3);
    check L30() else D8();
  L60():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L7(c11, dx14);
  L61():
    s5 = force? s4;
    checkMissing(s5);
    c19 = `is.object`(s5);
    if c19 then L62() else L63(c18, dx15, s5);
  L68():
    dr18 = tryDispatchBuiltin.1("[", s9);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L70() else L69(c27, dr18);
  L69(c32, s11):
    __2 = ldf `[` in base;
    r36 = dyn __2(s11, 2);
    goto L10(c32, r36);
  L77():
    p6 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      c44 = ldf c in base;
      r42 = dyn c44("", "Note: significantly better compression could be obtained", "      by using R CMD build --resave-data");
      goto L0(r42);
    L2():
      r40 = dyn base2("", "Note: significantly better compression could be obtained", "      by using R CMD build --resave-data");
      goto L0(r40);
    };
    r44 = dyn writeLines2(p6);
    check L78() else D20();
  L103():
    x29 = ld x;
    check L105() else D30();
  L104():
    r69 = dyn base3(<sym x>);
    goto L16(r69);
  D8():
    deopt 28 [r11];
  D18():
    deopt 74 [c34, dx23, s12];
  D20():
    deopt 86 [r44];
  D30():
    deopt 119 [x29];
  L8(c23, dx20, dx21):
    r34 = `-`(dx20, dx21);
    r35 = `>`(r34, 100000.0);
    c24 = `as.logical`(r35);
    c25 = `&&`(c23, c24);
    goto L6(c25);
  L30():
    l = ld rdas;
    c4 = `is.object`(l);
    if c4 then L32() else L33(r11, l);
  L62():
    dr16 = tryDispatchBuiltin.1("[", s5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L64() else L63(c18, dx15, dr16);
  L63(c21, dx17, s7):
    __1 = ldf `[` in base;
    r33 = dyn __1(s7, 2);
    goto L8(c21, dx17, r33);
  L70():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L10(c27, dx22);
  L71():
    s13 = force? s12;
    checkMissing(s13);
    c35 = `is.object`(s13);
    if c35 then L72() else L73(c34, dx23, s13);
  L78():
    nrow1 = ldf nrow;
    check L79() else D21();
  L105():
    x30 = force? x29;
    checkMissing(x30);
    invisible = ldf invisible in base;
    r71 = dyn invisible(x30);
    check L106() else D31();
  D21():
    deopt 88 [];
  D31():
    deopt 122 [r71];
  L11(c39, dx28, dx29):
    r38 = `/`(dx28, dx29);
    r39 = `<`(r38, 0.9);
    c40 = `as.logical`(r39);
    c41 = `&&`(c39, c40);
    goto L9(c41);
  L31(dx7):
    st rdas = dx7;
    print = ldf print;
    check L35() else D9();
  L32():
    dr6 = tryDispatchBuiltin.0("$<-", l, r11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L34() else L33(r11, dr6);
  L33(r13, l2):
    r16 = `$<-`(l2, <sym size>, r11);
    goto L31(r16);
  L64():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L8(c18, dx15, dx19);
  L72():
    dr20 = tryDispatchBuiltin.1("[", s13);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L74() else L73(c34, dx23, dr20);
  L73(c37, dx25, s15):
    __3 = ldf `[` in base;
    r37 = dyn __3(s15, 1);
    goto L11(c37, dx25, r37);
  L79():
    p7 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c45 = `is.object`(x22);
      if c45 then L1() else L2(x22);
    L0(dx31):
      return dx31;
    L1():
      dr22 = tryDispatchBuiltin.1("$", x22);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L3() else L2(dr22);
    L2(x24):
      r45 = `$`(x24, <sym improve>);
      goto L0(r45);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr22);
      goto L0(dx30);
    };
    r47 = dyn nrow1(p7);
    check L80() else D22();
  L106():
    goto L16(r71);
  D9():
    deopt 33 [];
  D22():
    deopt 90 [r47];
  L34():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L31(dx6);
  L35():
    p4 = prom<V +>{
      rdas4 = ld rdas;
      rdas5 = force? rdas4;
      checkMissing(rdas5);
      return rdas5;
    };
    r18 = dyn print(p4);
    check L36() else D10();
  L74():
    dx27 = getTryDispatchBuiltinValue(dr20);
    goto L11(c34, dx23, dx27);
  L80():
    c46 = `as.logical`(r47);
    if c46 then L81() else L13();
  D10():
    deopt 35 [r18];
  L13():
    goto L14(NULL);
  L14(r67):
    goto L15();
  L36():
    goto L1();
  L81():
    x25 = ld x;
    check L82() else D23();
  D23():
    deopt 91 [x25];
  L82():
    x26 = force? x25;
    checkMissing(x26);
    c47 = `is.object`(x26);
    if c47 then L84() else L85(x26);
  L83(dx33):
    st improve = dx33;
    reformat1 = ldf reformat;
    check L87() else D24();
  L84():
    dr24 = tryDispatchBuiltin.1("$", x26);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L86() else L85(dr24);
  L85(x28):
    r48 = `$`(x28, <sym improve>);
    goto L83(r48);
  D24():
    deopt 96 [];
  L86():
    dx32 = getTryDispatchBuiltinValue(dr24);
    goto L83(dx32);
  L87():
    p8 = prom<V +>{
      improve = ld improve;
      improve1 = force? improve;
      checkMissing(improve1);
      c48 = `is.object`(improve1);
      if c48 then L1() else L2(improve1);
    L0(dx35):
      return dx35;
    L1():
      dr26 = tryDispatchBuiltin.1("$", improve1);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(improve3):
      r49 = `$`(improve3, <sym old_size>);
      goto L0(r49);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx34);
    };
    r51 = dyn reformat1(p8);
    check L88() else D25();
  D25():
    deopt 98 [r51];
  L88():
    l3 = ld improve;
    c49 = `is.object`(l3);
    if c49 then L90() else L91(r51, l3);
  L89(dx37):
    st improve = dx37;
    reformat2 = ldf reformat;
    check L93() else D26();
  L90():
    dr28 = tryDispatchBuiltin.0("$<-", l3, r51);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L92() else L91(r51, dr28);
  L91(r53, l5):
    r56 = `$<-`(l5, <sym old_size>, r51);
    goto L89(r56);
  D26():
    deopt 103 [];
  L92():
    dx36 = getTryDispatchBuiltinValue(dr28);
    goto L89(dx36);
  L93():
    p9 = prom<V +>{
      improve4 = ld improve;
      improve5 = force? improve4;
      checkMissing(improve5);
      c50 = `is.object`(improve5);
      if c50 then L1() else L2(improve5);
    L0(dx39):
      return dx39;
    L1():
      dr30 = tryDispatchBuiltin.1("$", improve5);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(improve7):
      r57 = `$`(improve7, <sym new_size>);
      goto L0(r57);
    L3():
      dx38 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx38);
    };
    r59 = dyn reformat2(p9);
    check L94() else D27();
  D27():
    deopt 105 [r59];
  L94():
    l6 = ld improve;
    c51 = `is.object`(l6);
    if c51 then L96() else L97(r59, l6);
  L95(dx41):
    st improve = dx41;
    print1 = ldf print;
    check L99() else D28();
  L96():
    dr32 = tryDispatchBuiltin.0("$<-", l6, r59);
    dc16 = getTryDispatchBuiltinDispatched(dr32);
    if dc16 then L98() else L97(r59, dr32);
  L97(r61, l8):
    r64 = `$<-`(l8, <sym new_size>, r59);
    goto L95(r64);
  D28():
    deopt 110 [];
  L98():
    dx40 = getTryDispatchBuiltinValue(dr32);
    goto L95(dx40);
  L99():
    p10 = prom<V +>{
      improve8 = ld improve;
      improve9 = force? improve8;
      checkMissing(improve9);
      return improve9;
    };
    r66 = dyn print1(p10);
    check L100() else D29();
  D29():
    deopt 112 [r66];
  L100():
    goto L14(r66);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg paste0:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg x3:*, reg x4:V, reg r2:V, reg sprintf:cls, reg x5:*, reg x6:V, reg c:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind1:*, reg ind2:V, reg __:cls, reg r3:V, reg r4:V, reg p1:p(V +), reg r6:V, reg l:*, reg c1:L, reg r8:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind3:*, reg ind4:V, reg ___:cls, reg r11:V, reg x9:*, reg x10:V, reg r12:V, reg sprintf1:cls, reg x11:*, reg x12:V, reg c2:L, reg x14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind5:*, reg ind6:V, reg __1:cls, reg r13:V, reg r14:V, reg p2:p(V +), reg r16:V, reg l3:*, reg c3:L, reg r18:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg ind7:*, reg ind8:V, reg ___1:cls, reg r21:V, reg x15:*, reg x16:V, reg r22:V, reg sprintf2:cls, reg x17:*, reg x18:V, reg c4:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ind9:*, reg ind10:V, reg __2:cls, reg r23:V, reg r24:V, reg p3:p(V +), reg r26:V, reg l6:*, reg c5:L, reg r28:V, reg l8:*, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg ind11:*, reg ind12:V, reg ___2:cls, reg r31:V, reg xx:*, reg xx1:V |
    mkenv;
    st x = x;
    paste0 = ldf paste0;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn paste0(p, "b");
    check L4() else D1();
  D1():
    deopt 4 [r1];
  L4():
    st xx = r1;
    x3 = ld x;
    check L5() else D2();
  D2():
    deopt 6 [x3];
  L5():
    x4 = force? x3;
    checkMissing(x4);
    r2 = `>=`(x4, 1024.0);
    st ind1 = r2;
    sprintf = ldf sprintf;
    check L6() else D3();
  D3():
    deopt 12 [];
  L6():
    p1 = prom<V +>{
      x5 = ld x;
      x6 = force? x5;
      checkMissing(x6);
      c = `is.object`(x6);
      if c then L1() else L2(x6);
    L0(dx1):
      r4 = `/`(dx1, 1024.0);
      return r4;
    L1():
      dr = tryDispatchBuiltin.1("[", x6);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x8):
      ind1 = ld ind1;
      ind2 = force? ind1;
      __ = ldf `[` in base;
      r3 = dyn __(x8, ind2);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn sprintf("%.0fKb", p1);
    check L7() else D4();
  D4():
    deopt 15 [r6];
  L7():
    l = ld xx;
    c1 = `is.object`(l);
    if c1 then L8() else L9(r6, l);
  L0(dx3):
    st xx = dx3;
    x9 = ld x;
    check L12() else D6();
  L8():
    dr2 = tryDispatchBuiltin.0("[<-", l, r6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L10() else L9(r6, dr2);
  L9(r8, l2):
    ind3 = ld ind1;
    check L11() else D5();
  D5():
    deopt 17 [r8, l2, r6, ind3];
  D6():
    deopt 21 [x9];
  L10():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L0(dx2);
  L11():
    ind4 = force? ind3;
    ___ = ldf `[<-` in base;
    r11 = dyn ___(l2, r6, ind4);
    goto L0(r11);
  L12():
    x10 = force? x9;
    checkMissing(x10);
    r12 = `>=`(x10, 1048576.0);
    st ind2 = r12;
    sprintf1 = ldf sprintf;
    check L13() else D7();
  D7():
    deopt 27 [];
  L13():
    p2 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      c2 = `is.object`(x12);
      if c2 then L1() else L2(x12);
    L0(dx5):
      r14 = `/`(dx5, 1048576.0);
      return r14;
    L1():
      dr4 = tryDispatchBuiltin.1("[", x12);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(x14):
      ind5 = ld ind2;
      ind6 = force? ind5;
      __1 = ldf `[` in base;
      r13 = dyn __1(x14, ind6);
      goto L0(r13);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r16 = dyn sprintf1("%.1fMb", p2);
    check L14() else D8();
  D8():
    deopt 30 [r16];
  L14():
    l3 = ld xx;
    c3 = `is.object`(l3);
    if c3 then L15() else L16(r16, l3);
  L1(dx7):
    st xx = dx7;
    x15 = ld x;
    check L19() else D10();
  L15():
    dr6 = tryDispatchBuiltin.0("[<-", l3, r16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L17() else L16(r16, dr6);
  L16(r18, l5):
    ind7 = ld ind2;
    check L18() else D9();
  D9():
    deopt 32 [r18, l5, r16, ind7];
  D10():
    deopt 36 [x15];
  L17():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L1(dx6);
  L18():
    ind8 = force? ind7;
    ___1 = ldf `[<-` in base;
    r21 = dyn ___1(l5, r16, ind8);
    goto L1(r21);
  L19():
    x16 = force? x15;
    checkMissing(x16);
    r22 = `>=`(x16, 1.073741824E9);
    st ind3 = r22;
    sprintf2 = ldf sprintf;
    check L20() else D11();
  D11():
    deopt 42 [];
  L20():
    p3 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c4 = `is.object`(x18);
      if c4 then L1() else L2(x18);
    L0(dx9):
      r24 = `/`(dx9, 1.073741824E9);
      return r24;
    L1():
      dr8 = tryDispatchBuiltin.1("[", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x20):
      ind9 = ld ind3;
      ind10 = force? ind9;
      __2 = ldf `[` in base;
      r23 = dyn __2(x20, ind10);
      goto L0(r23);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r26 = dyn sprintf2("%.1fGb", p3);
    check L21() else D12();
  D12():
    deopt 45 [r26];
  L21():
    l6 = ld xx;
    c5 = `is.object`(l6);
    if c5 then L22() else L23(r26, l6);
  L2(dx11):
    st xx = dx11;
    xx = ld xx;
    check L26() else D14();
  L22():
    dr10 = tryDispatchBuiltin.0("[<-", l6, r26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L24() else L23(r26, dr10);
  L23(r28, l8):
    ind11 = ld ind3;
    check L25() else D13();
  D13():
    deopt 47 [r28, l8, r26, ind11];
  D14():
    deopt 51 [xx];
  L24():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L2(dx10);
  L25():
    ind12 = force? ind11;
    ___2 = ldf `[<-` in base;
    r31 = dyn ___2(l8, r26, ind12);
    goto L2(r31);
  L26():
    xx1 = force? xx;
    checkMissing(xx1);
    popenv;
    return xx1;
  }
}