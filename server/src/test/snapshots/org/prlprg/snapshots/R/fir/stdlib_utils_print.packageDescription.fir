fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3656392851;
    st `print.packageDescription` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3656392851(x, abbrCollate, `...`) {
  (reg x:*, reg abbrCollate:*, reg ddd:dots) -+> V { var x:*, var abbrCollate:*, reg abbrCollate_isMissing:L, reg abbrCollate_orDefault:*, reg getOption:cls, reg r:V, reg r1:V, reg p:p(V +), var `...`:dots?, reg x1:*, reg x2:V, reg lapply:cls, reg xx:*, reg xx1:V, reg p1:p(V +), reg r4:cls, reg p2:p(V +), reg r6:V, reg l:*, reg c:L, reg r8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ___:cls, reg r11:V, reg abbrCollate1:*, reg abbrCollate2:V, reg r12:V, reg c1:L, reg c3:V, reg sym:cls, reg base:cls, reg guard:L, reg r13:V, reg c6:L, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg c9:L, reg r16:V, reg xx2:*, reg xx3:V, reg names:cls, reg r17:V, reg r18:V, reg any:cls, reg r19:V, reg c10:L, reg c11:V, reg c13:L, reg strsplit:cls, reg xx4:*, reg xx5:V, reg c14:L, reg xx7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r20:V, reg p3:p(V +), reg r22:V, reg c15:L, reg r24:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __:cls, reg r25:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:V, reg wrds:*, reg wrds1:V, reg length:cls, reg r28:V, reg c16:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg wrds2:*, reg wrds3:V, reg nchar:cls, reg r35:V, reg cumsum:cls, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r39:V, reg r40:V, reg r41:V, reg n:*, reg n1:V, reg r42:V, reg seq_int:cls, reg r43:V, reg r44:V, reg abbrCollate3:*, reg abbrCollate4:V, reg r45:V, reg sum:cls, reg r46:V, reg k:*, reg k1:V, reg n2:*, reg n3:V, reg r47:V, reg c17:L, reg paste:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r48:V, reg r49:V, reg wrds4:*, reg wrds5:V, reg c18:L, reg wrds7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r50:V, reg wrds10:V, reg r51:V, reg k2:*, reg k3:V, reg r52:I, reg __1:cls, reg r53:V, reg c19:cls, reg r54:V, reg p4:p(V +), reg r56:V, reg l3:*, reg c20:L, reg r58:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg r60:V, reg dx9:V, reg r61:V, reg r62:V, reg r63:V, reg write_dcf:cls, reg as_data_frame_list:cls, reg xx8:*, reg xx9:V, reg p5:p(V +), reg r66:V, reg p6:p(V +), reg r68:V, reg cat:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r69:V, reg r70:V, reg x3:*, reg x4:V, reg attr:cls, reg r71:V, reg p7:p(V +), reg r73:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r74:V, reg r75:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r76:V, reg r77:V, reg x5:*, reg x6:V, reg attr1:cls, reg r78:V, reg c21:V, reg r79:V, reg c22:L, reg cat1:cls, reg r80:V, reg cat2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r81:V, reg r82:V, reg x7:*, reg x8:V, reg attr2:cls, reg r83:V, reg p8:p(V +), reg r85:V, reg cat3:cls, reg r86:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r88:V, reg r89:V, reg x9:*, reg x10:V, reg invisible:cls, reg r90:V |
    mkenv;
    st x = x;
    abbrCollate_isMissing = missing.0(abbrCollate);
    if abbrCollate_isMissing then L0() else L1(abbrCollate);
  L0():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("width");
      r1 = `*`(0.8, r);
      return r1;
    };
    goto L1(p);
  L1(abbrCollate_orDefault):
    st abbrCollate = abbrCollate_orDefault;
    st `...` = ddd;
    x1 = ld x;
    check L23() else D0();
  D0():
    deopt 0 [x1];
  L23():
    x2 = force? x1;
    checkMissing(x2);
    st xx = x2;
    lapply = ldf lapply;
    check L24() else D1();
  D1():
    deopt 4 [];
  L24():
    p1 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p2 = prom<V +>{
      r4 = clos inner2501545716;
      return r4;
    };
    r6 = dyn lapply(p1, p2);
    check L25() else D2();
  D2():
    deopt 7 [r6];
  L25():
    l = ld xx;
    c = `is.object`(l);
    if c then L26() else L27(r6);
  L2(dx1):
    st xx = dx1;
    abbrCollate1 = ld abbrCollate;
    check L29() else D3();
  L26():
    dr = tryDispatchBuiltin.0("[<-", l, r6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L28() else L27(r6);
  L27(r8):
    ___ = ldf `[<-` in base;
    r11 = dyn ___(l, <missing>, r6);
    goto L2(r11);
  D3():
    deopt 13 [abbrCollate1];
  L28():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L29():
    abbrCollate2 = force? abbrCollate1;
    checkMissing(abbrCollate2);
    r12 = `>`(abbrCollate2, 0.0);
    c1 = `as.logical`(r12);
    if c1 then L30() else L3(c1);
  L3(c3):
    c13 = `as.logical`(c3);
    if c13 then L39() else L6();
  L30():
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L31() else L32();
  L4(c6, r14):
    c10 = `as.logical`(r14);
    c11 = `&&`(c6, c10);
    goto L3(c11);
  L6():
    goto L17();
  L17():
    write_dcf = ldf `write.dcf`;
    check L77() else D22();
  L31():
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L32():
    r13 = dyn base(<lang `==`(names(xx), "Collate")>);
    goto L4(c1, r13);
  L39():
    strsplit = ldf strsplit;
    check L40() else D7();
  D7():
    deopt 31 [];
  D22():
    deopt 95 [];
  L5(c9, r16):
    r18 = `==`(r16, "Collate");
    any = ldf any in base;
    r19 = dyn any(r18);
    check L37() else D6();
  L33():
    xx2 = ld xx;
    check L35() else D4();
  L34():
    r15 = dyn base1(<sym xx>);
    goto L5(c1, r15);
  L40():
    p3 = prom<V +>{
      xx4 = ld xx;
      xx5 = force? xx4;
      checkMissing(xx5);
      c14 = `is.object`(xx5);
      if c14 then L1() else L2(xx5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", xx5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(xx7):
      r20 = `$`(xx7, <sym Collate>);
      goto L0(r20);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r22 = dyn strsplit(p3, "[ \t\n]");
    check L41() else D8();
  L77():
    p6 = prom<V +>{
      as_data_frame_list = ldf `as.data.frame.list`;
      p5 = prom<V +>{
        xx8 = ld xx;
        xx9 = force? xx8;
        checkMissing(xx9);
        return xx9;
      };
      r66 = dyn as_data_frame_list[, optional](p5, TRUE);
      return r66;
    };
    r68 = dyn write_dcf(p6);
    check L78() else D23();
  D4():
    deopt 21 [c1, xx2];
  D6():
    deopt 28 [c9, r19];
  D8():
    deopt 34 [r22];
  D23():
    deopt 97 [r68];
  L35():
    xx3 = force? xx2;
    checkMissing(xx3);
    names = ldf names in base;
    r17 = dyn names(xx3);
    check L36() else D5();
  L37():
    goto L4(c9, r19);
  L41():
    c15 = `is.object`(r22);
    if c15 then L42() else L43(r22);
  L78():
    cat = ldf cat;
    check L79() else D24();
  D5():
    deopt 24 [c1, r17];
  D24():
    deopt 99 [];
  L7(dx5):
    st wrds = dx5;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L36():
    goto L5(c1, r17);
  L42():
    dr4 = tryDispatchBuiltin.1("[[", r22);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L44() else L43(dr4);
  L43(r24):
    __ = ldf `[[` in base;
    r25 = dyn __(r24, 1);
    goto L7(r25);
  L79():
    p7 = prom<V +>{
      sym9 = ldf attr;
      base9 = ldf attr in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r70):
      return r70;
    L1():
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      attr = ldf attr in base;
      r71 = dyn attr(x4, "file");
      goto L0(r71);
    L2():
      r69 = dyn base9(<sym x>, "file");
      goto L0(r69);
    };
    r73 = dyn cat("\n-- File:", p7, "\n");
    check L80() else D25();
  D25():
    deopt 103 [r73];
  L8(r27):
    st n = r27;
    c16 = `as.logical`(r27);
    if c16 then L49() else L9();
  L44():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(dx4);
  L45():
    wrds = ld wrds;
    check L47() else D9();
  L46():
    r26 = dyn base2(<sym wrds>);
    goto L8(r26);
  L80():
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L81() else L82();
  D9():
    deopt 41 [wrds];
  L9():
    goto L16(NULL);
  L16(r63):
    goto L17();
  L18(r75):
    r79 = `!`(r75);
    c22 = `as.logical`(r79);
    if c22 then L87() else L20();
  L47():
    wrds1 = force? wrds;
    checkMissing(wrds1);
    length = ldf length in base;
    r28 = dyn length(wrds1);
    check L48() else D10();
  L49():
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L50() else L51();
  L81():
    sym11 = ldf attr;
    base11 = ldf attr in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L83() else L84();
  L82():
    r74 = dyn base10(<lang attr(x, "fields")>);
    goto L18(r74);
  D10():
    deopt 44 [r28];
  L10(r30):
    st k = r30;
    k = ld k;
    check L65() else D18();
  L19(r77):
    c21 = `==`(r77, NULL);
    goto L18(c21);
  L20():
    goto L21();
  L21():
    sym13 = ldf invisible;
    base13 = ldf invisible in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L95() else L96();
  L48():
    goto L8(r28);
  L50():
    sym4 = ldf cumsum;
    base4 = ldf cumsum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L52() else L53();
  L51():
    r29 = dyn base3(<lang `<=`(`(`(`+`(cumsum(nchar(wrds, "w")), seq.int(0.0, `-`(n, 1.0)))), abbrCollate)>);
    goto L10(r29);
  L83():
    x5 = ld x;
    check L85() else D26();
  L84():
    r76 = dyn base11(<sym x>, "fields");
    goto L19(r76);
  L87():
    cat1 = ldf cat;
    check L88() else D28();
  D18():
    deopt 75 [k];
  D26():
    deopt 107 [x5];
  D28():
    deopt 115 [];
  L11(r32):
    sym6 = ldf `seq.int`;
    base6 = ldf `seq.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L59() else L60();
  L22(r89):
    popenv;
    return r89;
  L52():
    sym5 = ldf nchar;
    base5 = ldf nchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L54() else L55();
  L53():
    r31 = dyn base4(<lang nchar(wrds, "w")>);
    goto L11(r31);
  L65():
    k1 = force? k;
    checkMissing(k1);
    n2 = ld n;
    check L66() else D19();
  L85():
    x6 = force? x5;
    checkMissing(x6);
    attr1 = ldf attr in base;
    r78 = dyn attr1(x6, "fields");
    check L86() else D27();
  L88():
    r80 = dyn cat1("-- Fields read: ");
    check L89() else D29();
  L95():
    x9 = ld x;
    check L97() else D34();
  L96():
    r88 = dyn base13(<sym x>);
    goto L22(r88);
  D19():
    deopt 76 [k1, n2];
  D27():
    deopt 111 [r78];
  D29():
    deopt 117 [r80];
  D34():
    deopt 132 [x9];
  L12(r34):
    cumsum = ldf cumsum in base;
    r36 = dyn cumsum(r34);
    check L58() else D13();
  L13(r40, r41):
    r44 = `+`(r40, r41);
    abbrCollate3 = ld abbrCollate;
    check L63() else D16();
  L54():
    wrds2 = ld wrds;
    check L56() else D11();
  L55():
    r33 = dyn base5(<sym wrds>, "w");
    goto L12(r33);
  L59():
    n = ld n;
    check L61() else D14();
  L60():
    r39 = dyn base6(0.0, <lang `-`(n, 1.0)>);
    goto L13(r32, r39);
  L66():
    n3 = force? n2;
    checkMissing(n3);
    r47 = `<`(k1, n3);
    c17 = `as.logical`(r47);
    if c17 then L67() else L14();
  L86():
    goto L19(r78);
  L89():
    cat2 = ldf cat;
    check L90() else D30();
  L97():
    x10 = force? x9;
    checkMissing(x10);
    invisible = ldf invisible in base;
    r90 = dyn invisible(x10);
    check L98() else D35();
  D11():
    deopt 52 [wrds2];
  D13():
    deopt 60 [r36];
  D14():
    deopt 63 [r32, n];
  D16():
    deopt 69 [r44, abbrCollate3];
  D30():
    deopt 119 [];
  D35():
    deopt 135 [r90];
  L14():
    goto L15(NULL);
  L15(r62):
    goto L16(r62);
  L56():
    wrds3 = force? wrds2;
    checkMissing(wrds3);
    nchar = ldf nchar in base;
    r35 = dyn nchar(wrds3, "w", FALSE, NA_LGL);
    check L57() else D12();
  L58():
    goto L11(r36);
  L61():
    n1 = force? n;
    checkMissing(n1);
    r42 = `-`(n1, 1.0);
    seq_int = ldf `seq.int` in base;
    r43 = dyn seq_int(0.0, r42);
    check L62() else D15();
  L63():
    abbrCollate4 = force? abbrCollate3;
    checkMissing(abbrCollate4);
    r45 = `<=`(r44, abbrCollate4);
    sum = ldf sum in base;
    r46 = dyn sum(r45);
    check L64() else D17();
  L67():
    paste = ldf paste;
    check L68() else D20();
  L90():
    p8 = prom<V +>{
      sym12 = ldf attr;
      base12 = ldf attr in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      attr2 = ldf attr in base;
      r83 = dyn attr2(x8, "fields");
      goto L0(r83);
    L2():
      r81 = dyn base12(<sym x>, "fields");
      goto L0(r81);
    };
    r85 = dyn cat2[, sep](p8, ", ");
    check L91() else D31();
  L98():
    goto L22(r90);
  D12():
    deopt 58 [r35];
  D15():
    deopt 68 [r32, r43];
  D17():
    deopt 73 [r46];
  D20():
    deopt 80 [];
  D31():
    deopt 123 [r85];
  L57():
    goto L12(r35);
  L62():
    goto L13(r32, r43);
  L64():
    goto L10(r46);
  L68():
    p4 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L3() else L4();
    L0(r49):
      return r49;
    L3():
      wrds4 = ld wrds;
      wrds5 = force? wrds4;
      checkMissing(wrds5);
      c18 = `is.object`(wrds5);
      if c18 then L5() else L6(wrds5);
    L4():
      r48 = dyn base7(<lang `[`(wrds, seq_len(k))>, ".....");
      goto L0(r48);
    L1(dx7):
      c19 = ldf c in base;
      r54 = dyn c19(dx7, ".....");
      goto L0(r54);
    L5():
      dr6 = tryDispatchBuiltin.1("[", wrds5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(wrds7):
      sym8 = ldf seq_len;
      base8 = ldf seq_len in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L8() else L9();
    L2(wrds10, r51):
      __1 = ldf `[` in base;
      r53 = dyn __1(wrds10, r51);
      goto L1(r53);
    L7():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L1(dx6);
    L8():
      k2 = ld k;
      k3 = force? k2;
      checkMissing(k3);
      r52 = seq_len(k3);
      goto L2(wrds7, r52);
    L9():
      r50 = dyn base8(<sym k>);
      goto L2(wrds7, r50);
    };
    r56 = dyn paste[, collapse](p4, " ");
    check L69() else D21();
  L91():
    cat3 = ldf cat;
    check L92() else D32();
  D21():
    deopt 84 [r56];
  D32():
    deopt 125 [];
  L69():
    l3 = ld xx;
    c20 = `is.object`(l3);
    if c20 then L71() else L72(r56, l3);
  L92():
    r86 = dyn cat3("\n");
    check L93() else D33();
  D33():
    deopt 127 [r86];
  L70(r60, dx9):
    st xx = dx9;
    goto L15(r60);
  L71():
    dr8 = tryDispatchBuiltin.0("$<-", l3, r56);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L73() else L72(r56, dr8);
  L72(r58, l5):
    r61 = `$<-`(l5, <sym Collate>, r56);
    goto L70(r58, r61);
  L93():
    goto L21();
  L73():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L70(r56, dx8);
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_na:cls, reg r2:V, reg c:L, reg x3:*, reg x4:V |
    mkenv;
    st x = x;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    x1 = ld x;
    check L4() else D0();
  L3():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1():
    x3 = ld x;
    check L8() else D2();
  L4():
    x2 = force? x1;
    checkMissing(x2);
    is_na = ldf `is.na` in base;
    r2 = dyn is_na(x2);
    check L5() else D1();
  L6():
    popenv;
    return "NA";
  D1():
    deopt 5 [r2];
  D2():
    deopt 8 [x3];
  L5():
    goto L0(r2);
  L8():
    x4 = force? x3;
    checkMissing(x4);
    popenv;
    return x4;
  }
}