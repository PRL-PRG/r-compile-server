fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner860079831;
    st `.resetTable` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner860079831(table, n, signames) {
  (reg table:*, reg n:*, reg signames:*) -+> V { var table:*, var n:*, var signames:*, reg _allowPrimitiveMethods:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg rep:cls, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg rep1:cls, reg r9:V, reg n1:*, reg n2:V, reg r10:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg r12:V, reg table1:*, reg table2:V, reg names:cls, reg r13:V, reg labels:*, reg labels1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg get:cls, reg what:*, reg what1:V, reg p:p(V +), reg table3:*, reg table4:V, reg p1:p(V +), reg r16:V, reg is_primitive:cls, reg method:*, reg method1:V, reg p2:p(V +), reg r18:V, reg c1:L, reg anyLabel:*, reg anyLabel1:V, reg i7:I, reg is:cls, reg method2:*, reg method3:V, reg p3:p(V +), reg r20:V, reg c2:L, reg __:cls, reg r21:V, reg is1:cls, reg method4:*, reg method5:V, reg p4:p(V +), reg r23:V, reg c3:L, reg strsplit:cls, reg what2:*, reg what3:V, reg p5:p(V +), reg r25:V, reg c4:L, reg i13:I, reg r27:V, reg dr:V, reg dc:L, reg dx:V, reg i15:I, reg dx1:V, reg __1:cls, reg r28:V, reg _resetTable:cls, reg method6:*, reg method7:V, reg p6:p(V +), reg n3:*, reg n4:V, reg p7:p(V +), reg signames1:*, reg signames2:V, reg p8:p(V +), reg r32:V, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg what4:*, reg what5:V, reg p9:p(V +), reg r34:V, reg p10:p(V +), reg dQuote:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg method8:*, reg method9:V, reg class:cls, reg r38:V, reg p11:p(V +), reg r40:V, reg p12:p(V +), reg r42:V, reg p13:p(V +), reg r44:V, reg is2:cls, reg method10:*, reg method11:V, reg p14:p(V +), reg r46:V, reg c5:L, reg packageSlot:cls, reg newSig:*, reg newSig1:V, reg p15:p(V +), reg r48:V, reg as:cls, reg ifelse:cls, reg seqN:*, reg seqN1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg seqN4:V, reg r50:V, reg newSig2:*, reg newSig3:V, reg length:cls, reg r51:V, reg r52:V, reg p16:p(V +), reg anyLabel3:*, reg anyLabel4:V, reg p17:p(V +), reg newSig4:*, reg newSig5:V, reg p18:p(V +), reg r56:V, reg p19:p(V +), reg r58:V, reg signames3:*, reg signames4:V, reg l1:*, reg ___:cls, reg r59:V, reg ifelse1:cls, reg seqN5:*, reg seqN6:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r60:V, reg seqN9:V, reg r61:V, reg pkgs:*, reg pkgs1:V, reg length1:cls, reg r62:V, reg r63:V, reg p20:p(V +), reg anyPkg:*, reg anyPkg1:V, reg p21:p(V +), reg pkgs2:*, reg pkgs3:V, reg p22:p(V +), reg r67:V, reg l2:*, reg ___1:cls, reg r68:V, reg newSig6:*, reg newSig7:V, reg l3:*, reg ___2:cls, reg r69:V, reg l4:*, reg ___3:cls, reg r70:V, reg _sigLabel:cls, reg newSig8:*, reg newSig9:V, reg p23:p(V +), reg r72:V, reg i18:I, reg _sigLabel1:cls, reg ifelse2:cls, reg seqN10:*, reg seqN11:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r74:V, reg seqN14:V, reg r75:V, reg newSig10:*, reg newSig11:V, reg length2:cls, reg r76:V, reg r77:V, reg p24:p(V +), reg anyLabel5:*, reg anyLabel6:V, reg p25:p(V +), reg newSig12:*, reg newSig13:V, reg p26:p(V +), reg r81:V, reg p27:p(V +), reg r83:V, reg remove:cls, reg what6:*, reg what7:V, reg p28:p(V +), reg table5:*, reg table6:V, reg p29:p(V +), reg r86:V, reg assign:cls, reg newLabel:*, reg newLabel1:V, reg p30:p(V +), reg method12:*, reg method13:V, reg p31:p(V +), reg table7:*, reg table8:V, reg p32:p(V +), reg r90:V |
    mkenv;
    st table = table;
    st n = n;
    st signames = signames;
    _allowPrimitiveMethods = ldf `.allowPrimitiveMethods`;
    check L13() else D0();
  D0():
    deopt 1 [];
  L13():
    r = dyn _allowPrimitiveMethods(FALSE);
    check L14() else D1();
  D1():
    deopt 3 [r];
  L14():
    st primMethods = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L15() else L16();
  L0():
    sym1 = ldf rep;
    base1 = ldf rep in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L17() else L18();
  L15():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang .allowPrimitiveMethods(primMethods)>);
    goto L0();
  L16():
    r1 = dyn base(<lang .allowPrimitiveMethods(primMethods)>);
    goto L0();
  L1(r5):
    st anyLabel = r5;
    sym2 = ldf rep;
    base2 = ldf rep in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L17():
    rep = ldf rep in base;
    r6 = dyn rep("ANY", <sym n>);
    goto L1(r6);
  L18():
    r4 = dyn base1("ANY", <sym n>);
    goto L1(r4);
  L2(r8):
    st anyPkg = r8;
    n1 = ld n;
    check L21() else D2();
  L19():
    rep1 = ldf rep in base;
    r9 = dyn rep1("methods", <sym n>);
    goto L2(r9);
  L20():
    r7 = dyn base2("methods", <sym n>);
    goto L2(r7);
  D2():
    deopt 17 [1, n1];
  L21():
    n2 = force? n1;
    checkMissing(n2);
    r10 = `:`(1, n2);
    st seqN = r10;
    sym3 = ldf names;
    base3 = ldf names in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L3(r12):
    st labels = r12;
    labels = ld labels;
    check L26() else D5();
  L22():
    table1 = ld table;
    check L24() else D3();
  L23():
    r11 = dyn base3(<sym table>);
    goto L3(r11);
  D3():
    deopt 23 [table1];
  D5():
    deopt 28 [labels];
  L24():
    table2 = force? table1;
    checkMissing(table2);
    names = ldf names in base;
    r13 = dyn names(table2);
    check L25() else D4();
  L26():
    labels1 = force? labels;
    checkMissing(labels1);
    s = toForSeq(labels1);
    l = length(s);
    i = 0;
    goto L4(i);
  D4():
    deopt 26 [r13];
  L4(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L27() else L12();
  L25():
    goto L3(r13);
  L12():
    x = `[[`(s, i2, NULL, TRUE);
    st what = x;
    get = ldf get;
    check L28() else D6();
  L27():
    popenv;
    return NULL;
  D6():
    deopt 31 [i2];
  L28():
    p = prom<V +>{
      what = ld what;
      what1 = force? what;
      checkMissing(what1);
      return what1;
    };
    p1 = prom<V +>{
      table3 = ld table;
      table4 = force? table3;
      checkMissing(table4);
      return table4;
    };
    r16 = dyn get[, envir](p, p1);
    check L29() else D7();
  D7():
    deopt 35 [i2, r16];
  L29():
    st method = r16;
    is_primitive = ldf `is.primitive`;
    check L30() else D8();
  D8():
    deopt 38 [i2];
  L30():
    p2 = prom<V +>{
      method = ld method;
      method1 = force? method;
      checkMissing(method1);
      return method1;
    };
    r18 = dyn is_primitive(p2);
    check L31() else D9();
  D9():
    deopt 40 [i2, r18];
  L31():
    c1 = `as.logical`(r18);
    if c1 then L32() else L5();
  L5():
    is = ldf is;
    check L35() else D11();
  L6(i7):
    is2 = ldf is;
    check L52() else D21();
  L32():
    anyLabel = ld anyLabel;
    check L33() else D10();
  D10():
    deopt 41 [i2, anyLabel];
  D11():
    deopt 45 [i2];
  D21():
    deopt 81 [i7];
  L33():
    anyLabel1 = force? anyLabel;
    checkMissing(anyLabel1);
    st newSig = anyLabel1;
    goto L6(i2);
  L35():
    p3 = prom<V +>{
      method2 = ld method;
      method3 = force? method2;
      checkMissing(method3);
      return method3;
    };
    r20 = dyn is(p3, "MethodDefinition");
    check L36() else D12();
  L52():
    p14 = prom<V +>{
      method10 = ld method;
      method11 = force? method10;
      checkMissing(method11);
      return method11;
    };
    r46 = dyn is2(p14, "MethodDefinition");
    check L53() else D22();
  D12():
    deopt 48 [i2, r20];
  D22():
    deopt 84 [i7, r46];
  L36():
    c2 = `as.logical`(r20);
    if c2 then L37() else L7();
  L53():
    c5 = `as.logical`(r46);
    if c5 then L54() else L10();
  L7():
    is1 = ldf is;
    check L39() else D13();
  L10():
    _sigLabel1 = ldf `.sigLabel`;
    check L74() else D41();
  L11(i18):
    remove = ldf remove;
    check L76() else D43();
  L37():
    __ = ldf `@` in base;
    r21 = dyn __(<sym method>, <sym defined>);
    st newSig = r21;
    goto L6(i2);
  L54():
    packageSlot = ldf packageSlot;
    check L55() else D23();
  D13():
    deopt 53 [i2];
  D23():
    deopt 86 [i7];
  D41():
    deopt 136 [i7];
  D43():
    deopt 141 [i18];
  L39():
    p4 = prom<V +>{
      method4 = ld method;
      method5 = force? method4;
      checkMissing(method5);
      return method5;
    };
    r23 = dyn is1(p4, "environment");
    check L40() else D14();
  L55():
    p15 = prom<V +>{
      newSig = ld newSig;
      newSig1 = force? newSig;
      checkMissing(newSig1);
      return newSig1;
    };
    r48 = dyn packageSlot(p15);
    check L56() else D24();
  L74():
    p27 = prom<V +>{
      ifelse2 = ldf ifelse;
      p24 = prom<V +>{
        seqN10 = ld seqN;
        seqN11 = force? seqN10;
        checkMissing(seqN11);
        sym7 = ldf length;
        base7 = ldf length in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(seqN14, r75):
        r77 = `>`(seqN14, r75);
        return r77;
      L1():
        newSig10 = ld newSig;
        newSig11 = force? newSig10;
        checkMissing(newSig11);
        length2 = ldf length in base;
        r76 = dyn length2(newSig11);
        goto L0(seqN11, r76);
      L2():
        r74 = dyn base7(<sym newSig>);
        goto L0(seqN11, r74);
      };
      p25 = prom<V +>{
        anyLabel5 = ld anyLabel;
        anyLabel6 = force? anyLabel5;
        checkMissing(anyLabel6);
        return anyLabel6;
      };
      p26 = prom<V +>{
        newSig12 = ld newSig;
        newSig13 = force? newSig12;
        checkMissing(newSig13);
        return newSig13;
      };
      r81 = dyn ifelse2(p24, p25, p26);
      return r81;
    };
    r83 = dyn _sigLabel1(p27);
    check L75() else D42();
  L76():
    p28 = prom<V +>{
      what6 = ld what;
      what7 = force? what6;
      checkMissing(what7);
      return what7;
    };
    p29 = prom<V +>{
      table5 = ld table;
      table6 = force? table5;
      checkMissing(table6);
      return table6;
    };
    r86 = dyn remove[list, envir](p28, p29);
    check L77() else D44();
  D14():
    deopt 56 [i2, r23];
  D24():
    deopt 88 [i7, r48];
  D42():
    deopt 138 [i7, r83];
  D44():
    deopt 146 [i18, r86];
  L40():
    c3 = `as.logical`(r23);
    if c3 then L41() else L8();
  L56():
    st pkgs = r48;
    as = ldf as;
    check L57() else D25();
  L75():
    st newLabel = r83;
    goto L11(i7);
  L77():
    assign = ldf assign;
    check L78() else D45();
  D25():
    deopt 91 [i7];
  D45():
    deopt 148 [i18];
  L8():
    stop = ldf stop;
    check L50() else D19();
  L41():
    strsplit = ldf strsplit;
    check L42() else D15();
  L57():
    p19 = prom<V +>{
      ifelse = ldf ifelse;
      p16 = prom<V +>{
        seqN = ld seqN;
        seqN1 = force? seqN;
        checkMissing(seqN1);
        sym5 = ldf length;
        base5 = ldf length in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(seqN4, r50):
        r52 = `>`(seqN4, r50);
        return r52;
      L1():
        newSig2 = ld newSig;
        newSig3 = force? newSig2;
        checkMissing(newSig3);
        length = ldf length in base;
        r51 = dyn length(newSig3);
        goto L0(seqN1, r51);
      L2():
        r49 = dyn base5(<sym newSig>);
        goto L0(seqN1, r49);
      };
      p17 = prom<V +>{
        anyLabel3 = ld anyLabel;
        anyLabel4 = force? anyLabel3;
        checkMissing(anyLabel4);
        return anyLabel4;
      };
      p18 = prom<V +>{
        newSig4 = ld newSig;
        newSig5 = force? newSig4;
        checkMissing(newSig5);
        return newSig5;
      };
      r56 = dyn ifelse(p16, p17, p18);
      return r56;
    };
    r58 = dyn as(p19, "signature");
    check L58() else D26();
  L78():
    p30 = prom<V +>{
      newLabel = ld newLabel;
      newLabel1 = force? newLabel;
      checkMissing(newLabel1);
      return newLabel1;
    };
    p31 = prom<V +>{
      method12 = ld method;
      method13 = force? method12;
      checkMissing(method13);
      return method13;
    };
    p32 = prom<V +>{
      table7 = ld table;
      table8 = force? table7;
      checkMissing(table8);
      return table8;
    };
    r90 = dyn assign[, , envir](p30, p31, p32);
    check L79() else D46();
  D15():
    deopt 58 [i2];
  D19():
    deopt 75 [i2];
  D26():
    deopt 94 [i7, r58];
  D46():
    deopt 153 [i18, r90];
  L42():
    p5 = prom<V +>{
      what2 = ld what;
      what3 = force? what2;
      checkMissing(what3);
      return what3;
    };
    r25 = dyn strsplit[, , fixed](p5, "#", TRUE);
    check L43() else D16();
  L50():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p10 = prom<V +>{
        sQuote = ldf sQuote;
        p9 = prom<V +>{
          what4 = ld what;
          what5 = force? what4;
          checkMissing(what5);
          return what5;
        };
        r34 = dyn sQuote(p9);
        return r34;
      };
      p12 = prom<V +>{
        dQuote = ldf dQuote;
        p11 = prom<V +>{
          sym4 = ldf class;
          base4 = ldf class in base;
          guard4 = `==`.4(sym4, base4);
          if guard4 then L1() else L2();
        L0(r37):
          return r37;
        L1():
          method8 = ld method;
          method9 = force? method8;
          checkMissing(method9);
          class = ldf class in base;
          r38 = dyn class(method9);
          goto L0(r38);
        L2():
          r36 = dyn base4(<sym method>);
          goto L0(r36);
        };
        r40 = dyn dQuote(p11);
        return r40;
      };
      r42 = dyn gettextf("invalid object in methods table (%s), expected a method, got an object of class %s", p10, p12);
      return r42;
    };
    r44 = dyn stop[, domain](p13, NA_LGL);
    check L51() else D20();
  L58():
    st newSig = r58;
    signames3 = ld signames;
    check L59() else D27();
  L79():
    goto L4(i18);
  D16():
    deopt 63 [i2, r25];
  D20():
    deopt 79 [i2, r44];
  D27():
    deopt 96 [i7, signames3];
  L43():
    c4 = `is.object`(r25);
    if c4 then L44() else L45(i2, r25);
  L51():
    goto L6(i2);
  L59():
    signames4 = force? signames3;
    checkMissing(signames4);
    l1 = ld newSig;
    ___ = ldf `@<-`;
    check L60() else D28();
  D28():
    deopt 99 [i7, signames4, l1, signames4];
  L9(i15, dx1):
    st newSig = dx1;
    _resetTable = ldf `.resetTable`;
    check L47() else D17();
  L44():
    dr = tryDispatchBuiltin.1("[[", r25);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L46() else L45(i2, dr);
  L45(i13, r27):
    __1 = ldf `[[` in base;
    r28 = dyn __1(r27, 1.0);
    goto L9(i13, r28);
  L60():
    r59 = dyn ___(l1, NULL, "names", signames4);
    check L61() else D29();
  D17():
    deopt 69 [i15];
  D29():
    deopt 102 [i7, signames4, r59];
  L46():
    dx = getTryDispatchBuiltinValue(dr);
    goto L9(i2, dx);
  L47():
    p6 = prom<V +>{
      method6 = ld method;
      method7 = force? method6;
      checkMissing(method7);
      return method7;
    };
    p7 = prom<V +>{
      n3 = ld n;
      n4 = force? n3;
      checkMissing(n4);
      return n4;
    };
    p8 = prom<V +>{
      signames1 = ld signames;
      signames2 = force? signames1;
      checkMissing(signames2);
      return signames2;
    };
    r32 = dyn _resetTable(p6, p7, p8);
    check L48() else D18();
  L61():
    st newSig = r59;
    ifelse1 = ldf ifelse;
    check L62() else D30();
  D18():
    deopt 73 [i15, r32];
  D30():
    deopt 105 [i7];
  L48():
    goto L6(i15);
  L62():
    p20 = prom<V +>{
      seqN5 = ld seqN;
      seqN6 = force? seqN5;
      checkMissing(seqN6);
      sym6 = ldf length;
      base6 = ldf length in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(seqN9, r61):
      r63 = `>`(seqN9, r61);
      return r63;
    L1():
      pkgs = ld pkgs;
      pkgs1 = force? pkgs;
      checkMissing(pkgs1);
      length1 = ldf length in base;
      r62 = dyn length1(pkgs1);
      goto L0(seqN6, r62);
    L2():
      r60 = dyn base6(<sym pkgs>);
      goto L0(seqN6, r60);
    };
    p21 = prom<V +>{
      anyPkg = ld anyPkg;
      anyPkg1 = force? anyPkg;
      checkMissing(anyPkg1);
      return anyPkg1;
    };
    p22 = prom<V +>{
      pkgs2 = ld pkgs;
      pkgs3 = force? pkgs2;
      checkMissing(pkgs3);
      return pkgs3;
    };
    r67 = dyn ifelse1(p20, p21, p22);
    check L63() else D31();
  D31():
    deopt 109 [i7, r67];
  L63():
    l2 = ld newSig;
    ___1 = ldf `@<-`;
    check L64() else D32();
  D32():
    deopt 111 [i7, r67, l2, r67];
  L64():
    r68 = dyn ___1(l2, NULL, "package", r67);
    check L65() else D33();
  D33():
    deopt 114 [i7, r67, r68];
  L65():
    st newSig = r68;
    newSig6 = ld newSig;
    check L66() else D34();
  D34():
    deopt 116 [i7, newSig6];
  L66():
    newSig7 = force? newSig6;
    checkMissing(newSig7);
    l3 = ld method;
    ___2 = ldf `@<-`;
    check L67() else D35();
  D35():
    deopt 119 [i7, newSig7, l3, newSig7];
  L67():
    r69 = dyn ___2(l3, NULL, "target", newSig7);
    check L68() else D36();
  D36():
    deopt 122 [i7, newSig7, r69];
  L68():
    st method = r69;
    l4 = ld method;
    ___3 = ldf `@<-`;
    check L69() else D37();
  D37():
    deopt 125 [i7, newSig7, l4, newSig7];
  L69():
    r70 = dyn ___3(l4, NULL, "defined", newSig7);
    check L70() else D38();
  D38():
    deopt 128 [i7, newSig7, r70];
  L70():
    st method = r70;
    _sigLabel = ldf `.sigLabel`;
    check L71() else D39();
  D39():
    deopt 131 [i7];
  L71():
    p23 = prom<V +>{
      newSig8 = ld newSig;
      newSig9 = force? newSig8;
      checkMissing(newSig9);
      return newSig9;
    };
    r72 = dyn _sigLabel(p23);
    check L72() else D40();
  D40():
    deopt 133 [i7, r72];
  L72():
    st newLabel = r72;
    goto L11(i7);
  }
}