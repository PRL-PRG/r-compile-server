fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st `format.check_package_description2` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r2:V, reg r3:V, reg x1:*, reg x2:V, reg c:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg length:cls, reg r5:V, reg c1:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg xx:*, reg xx1:V, reg length1:cls, reg r10:V, reg r11:V, reg c2:L, reg r12:S, reg paste:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r13:V, reg r14:V, reg sQuote:cls, reg xx2:*, reg xx3:V, reg p:p(V +), reg r16:V, reg c3:cls, reg r17:V, reg p1:p(V +), reg r19:V, reg c4:cls, reg r20:V, reg r21:V, reg x5:*, reg x6:V, reg c5:L, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r22:V, reg r23:V, reg c6:L, reg r24:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r25:V, reg r26:V, reg x9:*, reg x10:V, reg c7:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r27:V, reg length2:cls, reg r28:V, reg c8:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r29:V, reg r30:V, reg xx4:*, reg xx5:V, reg length3:cls, reg r31:V, reg r32:V, reg c9:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r33:V, reg r34:V, reg paste1:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r35:V, reg r36:V, reg sQuote1:cls, reg xx6:*, reg xx7:V, reg p2:p(V +), reg r38:V, reg c10:cls, reg r39:V, reg p3:p(V +), reg r41:V, reg c11:cls, reg r42:V, reg r43:V, reg sprintf:cls, reg sQuote2:cls, reg xx8:*, reg xx9:V, reg p4:p(V +), reg r45:V, reg p5:p(V +), reg r47:V, reg r48:V, reg x13:*, reg x14:V, reg c12:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r49:V, reg c13:L, reg c15:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r50:V, reg c18:L, reg r51:V, reg x17:*, reg x18:V, reg c19:L, reg c21:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg c23:L, reg dx9:V, reg r52:V, reg length4:cls, reg r53:V, reg c24:L, reg c25:V, reg c27:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r54:V, reg r55:V, reg xx10:*, reg xx11:V, reg length5:cls, reg r56:V, reg r57:V, reg c28:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r58:V, reg r59:V, reg paste2:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r60:V, reg r61:V, reg sQuote3:cls, reg xx12:*, reg xx13:V, reg p6:p(V +), reg r63:V, reg c29:cls, reg r64:V, reg p7:p(V +), reg r66:V, reg c30:cls, reg r67:V, reg r68:V, reg sprintf1:cls, reg sQuote4:cls, reg xx14:*, reg xx15:V, reg p8:p(V +), reg r70:V, reg p9:p(V +), reg r72:V, reg r73:V, reg c31:cls, reg r74:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L25() else L26();
  L0(r1):
    popenv;
    return r1;
  L25():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L26():
    r = dyn base(<lang if(length(`<-`(xx, `$`(x, duplicates))), {
        c(if(`>`(length(xx), 1), "Packages listed in more than one of Depends, Imports, Suggests, Enhances:", "Package listed in more than one of Depends, Imports, Suggests, Enhances:"), paste(c(" ", sQuote(xx)), collapse=" "), "A package should be listed in only one of these fields.")
      })>, <lang if(`!`(`$`(x, have_src)), "'LinkingTo' field is unused: package has no 'src' directory")>, <lang if(length(`<-`(xx, `$`(x, bad_links))), {
        if(`>`(length(xx), 1), c("Versioned 'LinkingTo' values for", paste(c(" ", sQuote(xx)), collapse=" "), "are only usable in R >= 3.0.2"), sprintf("Versioned 'LinkingTo' value for %s is only usable in R >= 3.0.2", sQuote(xx)))
      })>, <lang if(`&&`(`$`(x, have_src), length(`<-`(xx, `$`(x, missing_incs)))), {
        if(`>`(length(xx), 1), c("'LinkingTo' for", paste(c(" ", sQuote(xx)), collapse=" "), "are unused as they have no 'include' directory"), sprintf("'LinkingTo' for %s is unused as it has no 'include' directory", sQuote(xx)))
      })>);
    goto L0(r);
  L1(r3):
    c1 = `as.logical`(r3);
    if c1 then L35() else L2();
  L27():
    x1 = ld x;
    check L29() else D0();
  L28():
    r2 = dyn base1(<lang `<-`(xx, `$`(x, duplicates))>);
    goto L1(r2);
  D0():
    deopt 4 [x1];
  L2():
    goto L7(NULL);
  L7(r21):
    x5 = ld x;
    check L48() else D7();
  L29():
    x2 = force? x1;
    checkMissing(x2);
    c = `is.object`(x2);
    if c then L31() else L32(x2);
  L35():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  D7():
    deopt 35 [x5];
  L3(r7):
    goto L7(r7);
  L30(dx1):
    st xx = dx1;
    length = ldf length in base;
    r5 = dyn length(dx1);
    check L34() else D1();
  L31():
    dr = tryDispatchBuiltin.1("$", x2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L33() else L32(dr);
  L32(x4):
    r4 = `$`(x4, <sym duplicates>);
    goto L30(r4);
  L36():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L37():
    r6 = dyn base2(<lang if(`>`(length(xx), 1), "Packages listed in more than one of Depends, Imports, Suggests, Enhances:", "Package listed in more than one of Depends, Imports, Suggests, Enhances:")>, <lang paste(c(" ", sQuote(xx)), collapse=" ")>, "A package should be listed in only one of these fields.");
    goto L3(r6);
  L48():
    x6 = force? x5;
    checkMissing(x6);
    c5 = `is.object`(x6);
    if c5 then L50() else L51(x6);
  D1():
    deopt 9 [r5];
  L4(r9):
    r11 = `>`(r9, 1);
    c2 = `as.logical`(r11);
    if c2 then L42() else L5();
  L33():
    dx = getTryDispatchBuiltinValue(dr);
    goto L30(dx);
  L34():
    goto L1(r5);
  L38():
    xx = ld xx;
    check L40() else D2();
  L39():
    r8 = dyn base3(<sym xx>);
    goto L4(r8);
  L49(dx3):
    r23 = `!`(dx3);
    c6 = `as.logical`(r23);
    if c6 then L53() else L8();
  L50():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L52() else L51(dr2);
  L51(x8):
    r22 = `$`(x8, <sym have_src>);
    goto L49(r22);
  D2():
    deopt 14 [xx];
  L5():
    goto L6("Package listed in more than one of Depends, Imports, Suggests, Enhances:");
  L6(r12):
    paste = ldf paste;
    check L44() else D4();
  L8():
    goto L9(NULL);
  L9(r24):
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L55() else L56();
  L40():
    xx1 = force? xx;
    checkMissing(xx1);
    length1 = ldf length in base;
    r10 = dyn length1(xx1);
    check L41() else D3();
  L42():
    goto L6("Packages listed in more than one of Depends, Imports, Suggests, Enhances:");
  L52():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L49(dx2);
  L53():
    goto L9("'LinkingTo' field is unused: package has no 'src' directory");
  D3():
    deopt 17 [r10];
  D4():
    deopt 25 [];
  L10(r26):
    c8 = `as.logical`(r26);
    if c8 then L63() else L11();
  L41():
    goto L4(r10);
  L44():
    p1 = prom<V +>{
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      sQuote = ldf sQuote;
      p = prom<V +>{
        xx2 = ld xx;
        xx3 = force? xx2;
        checkMissing(xx3);
        return xx3;
      };
      r16 = dyn sQuote(p);
      c3 = ldf c in base;
      r17 = dyn c3(" ", r16);
      goto L0(r17);
    L2():
      r13 = dyn base4(" ", <lang sQuote(xx)>);
      goto L0(r13);
    };
    r19 = dyn paste[, collapse](p1, " ");
    check L45() else D5();
  L55():
    x9 = ld x;
    check L57() else D8();
  L56():
    r25 = dyn base5(<lang `<-`(xx, `$`(x, bad_links))>);
    goto L10(r25);
  D5():
    deopt 29 [r19];
  D8():
    deopt 45 [x9];
  L11():
    goto L16(NULL);
  L16(r48):
    x13 = ld x;
    check L78() else D17();
  L45():
    c4 = ldf c in base;
    r20 = dyn c4(r12, r19, "A package should be listed in only one of these fields.");
    check L46() else D6();
  L57():
    x10 = force? x9;
    checkMissing(x10);
    c7 = `is.object`(x10);
    if c7 then L59() else L60(x10);
  L63():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L64() else L65();
  D6():
    deopt 32 [r20];
  D17():
    deopt 78 [x13];
  L12(r30):
    r32 = `>`(r30, 1);
    c9 = `as.logical`(r32);
    if c9 then L68() else L13();
  L46():
    goto L3(r20);
  L58(dx5):
    st xx = dx5;
    length2 = ldf length in base;
    r28 = dyn length2(dx5);
    check L62() else D9();
  L59():
    dr4 = tryDispatchBuiltin.1("$", x10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L61() else L60(dr4);
  L60(x12):
    r27 = `$`(x12, <sym bad_links>);
    goto L58(r27);
  L64():
    xx4 = ld xx;
    check L66() else D10();
  L65():
    r29 = dyn base6(<sym xx>);
    goto L12(r29);
  L78():
    x14 = force? x13;
    checkMissing(x14);
    c12 = `is.object`(x14);
    if c12 then L80() else L81(x14);
  D9():
    deopt 50 [r28];
  D10():
    deopt 53 [xx4];
  L13():
    sprintf = ldf sprintf;
    check L75() else D15();
  L15(r43):
    goto L16(r43);
  L61():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L58(dx4);
  L62():
    goto L10(r28);
  L66():
    xx5 = force? xx4;
    checkMissing(xx5);
    length3 = ldf length in base;
    r31 = dyn length3(xx5);
    check L67() else D11();
  L68():
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L69() else L70();
  L79(dx7):
    c13 = `as.logical`(dx7);
    if c13 then L83() else L17(c13);
  L80():
    dr6 = tryDispatchBuiltin.1("$", x14);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L82() else L81(dr6);
  L81(x16):
    r49 = `$`(x16, <sym have_src>);
    goto L79(r49);
  D11():
    deopt 56 [r31];
  D15():
    deopt 72 [];
  L14(r34):
    goto L15(r34);
  L17(c15):
    c27 = `as.logical`(c15);
    if c27 then L93() else L19();
  L67():
    goto L12(r31);
  L69():
    paste1 = ldf paste;
    check L71() else D12();
  L70():
    r33 = dyn base7("Versioned 'LinkingTo' values for", <lang paste(c(" ", sQuote(xx)), collapse=" ")>, "are only usable in R >= 3.0.2");
    goto L14(r33);
  L75():
    p5 = prom<V +>{
      sQuote2 = ldf sQuote;
      p4 = prom<V +>{
        xx8 = ld xx;
        xx9 = force? xx8;
        checkMissing(xx9);
        return xx9;
      };
      r45 = dyn sQuote2(p4);
      return r45;
    };
    r47 = dyn sprintf("Versioned 'LinkingTo' value for %s is only usable in R >= 3.0.2", p5);
    check L76() else D16();
  L82():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L79(dx6);
  L83():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L84() else L85();
  D12():
    deopt 63 [];
  D16():
    deopt 75 [r47];
  L18(c18, r51):
    c24 = `as.logical`(r51);
    c25 = `&&`(c18, c24);
    goto L17(c25);
  L19():
    goto L24(NULL);
  L24(r73):
    c31 = ldf c in base;
    r74 = dyn c31(r21, r24, r48, r73);
    check L108() else D27();
  L71():
    p3 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r36):
      return r36;
    L1():
      sQuote1 = ldf sQuote;
      p2 = prom<V +>{
        xx6 = ld xx;
        xx7 = force? xx6;
        checkMissing(xx7);
        return xx7;
      };
      r38 = dyn sQuote1(p2);
      c10 = ldf c in base;
      r39 = dyn c10(" ", r38);
      goto L0(r39);
    L2():
      r35 = dyn base8(" ", <lang sQuote(xx)>);
      goto L0(r35);
    };
    r41 = dyn paste1[, collapse](p3, " ");
    check L72() else D13();
  L76():
    goto L15(r47);
  L84():
    x17 = ld x;
    check L86() else D18();
  L85():
    r50 = dyn base9(<lang `<-`(xx, `$`(x, missing_incs))>);
    goto L18(c13, r50);
  L93():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L94() else L95();
  D13():
    deopt 67 [r41];
  D18():
    deopt 83 [c13, x17];
  D27():
    deopt 118 [r74];
  L20(r55):
    r57 = `>`(r55, 1);
    c28 = `as.logical`(r57);
    if c28 then L98() else L21();
  L72():
    c11 = ldf c in base;
    r42 = dyn c11("Versioned 'LinkingTo' values for", r41, "are only usable in R >= 3.0.2");
    check L73() else D14();
  L86():
    x18 = force? x17;
    checkMissing(x18);
    c19 = `is.object`(x18);
    if c19 then L88() else L89(c13, x18);
  L94():
    xx10 = ld xx;
    check L96() else D20();
  L95():
    r54 = dyn base10(<sym xx>);
    goto L20(r54);
  L108():
    goto L0(r74);
  D14():
    deopt 70 [r42];
  D20():
    deopt 92 [xx10];
  L21():
    sprintf1 = ldf sprintf;
    check L105() else D25();
  L23(r68):
    goto L24(r68);
  L73():
    goto L14(r42);
  L87(c23, dx9):
    st xx = dx9;
    length4 = ldf length in base;
    r53 = dyn length4(dx9);
    check L91() else D19();
  L88():
    dr8 = tryDispatchBuiltin.1("$", x18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L90() else L89(c13, dr8);
  L89(c21, x20):
    r52 = `$`(x20, <sym missing_incs>);
    goto L87(c21, r52);
  L96():
    xx11 = force? xx10;
    checkMissing(xx11);
    length5 = ldf length in base;
    r56 = dyn length5(xx11);
    check L97() else D21();
  L98():
    sym11 = ldf c;
    base11 = ldf c in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L99() else L100();
  D19():
    deopt 88 [c23, r53];
  D21():
    deopt 95 [r56];
  D25():
    deopt 111 [];
  L22(r59):
    goto L23(r59);
  L90():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L87(c13, dx8);
  L91():
    goto L18(c23, r53);
  L97():
    goto L20(r56);
  L99():
    paste2 = ldf paste;
    check L101() else D22();
  L100():
    r58 = dyn base11("'LinkingTo' for", <lang paste(c(" ", sQuote(xx)), collapse=" ")>, "are unused as they have no 'include' directory");
    goto L22(r58);
  L105():
    p9 = prom<V +>{
      sQuote4 = ldf sQuote;
      p8 = prom<V +>{
        xx14 = ld xx;
        xx15 = force? xx14;
        checkMissing(xx15);
        return xx15;
      };
      r70 = dyn sQuote4(p8);
      return r70;
    };
    r72 = dyn sprintf1("'LinkingTo' for %s is unused as it has no 'include' directory", p9);
    check L106() else D26();
  D22():
    deopt 102 [];
  D26():
    deopt 114 [r72];
  L101():
    p7 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r61):
      return r61;
    L1():
      sQuote3 = ldf sQuote;
      p6 = prom<V +>{
        xx12 = ld xx;
        xx13 = force? xx12;
        checkMissing(xx13);
        return xx13;
      };
      r63 = dyn sQuote3(p6);
      c29 = ldf c in base;
      r64 = dyn c29(" ", r63);
      goto L0(r64);
    L2():
      r60 = dyn base12(" ", <lang sQuote(xx)>);
      goto L0(r60);
    };
    r66 = dyn paste2[, collapse](p7, " ");
    check L102() else D23();
  L106():
    goto L23(r72);
  D23():
    deopt 106 [r66];
  L102():
    c30 = ldf c in base;
    r67 = dyn c30("'LinkingTo' for", r66, "are unused as they have no 'include' directory");
    check L103() else D24();
  D24():
    deopt 109 [r67];
  L103():
    goto L22(r67);
  }
}