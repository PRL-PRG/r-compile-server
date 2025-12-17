fun main() {
  () -+> V { reg r:cls, reg bibentry:cls, reg person:cls, reg r1:V, reg p:p(V +), reg r3:V, reg print:cls, reg rref:*, reg rref1:V, reg p1:p(V +), reg r5:V, reg print1:cls, reg rref2:*, reg rref3:V, reg p2:p(V +), reg r7:V, reg print2:cls, reg rref4:*, reg rref5:V, reg p3:p(V +), reg r9:V, reg print3:cls, reg rref6:*, reg rref7:V, reg p4:p(V +), reg r11:V, reg print4:cls, reg rref8:*, reg rref9:V, reg p5:p(V +), reg r13:V, reg print5:cls, reg rref10:*, reg rref11:V, reg p6:p(V +), reg r15:V, reg sym:cls, reg base:cls, reg guard:L, reg r16:V, reg r17:V, reg bibentry1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg person1:cls, reg r20:V, reg person2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg r22:V, reg c:cls, reg r23:V, reg p7:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r25:V, reg r26:V, reg c1:cls, reg r27:V, reg p8:p(V +), reg r29:V, reg c2:cls, reg r30:V, reg p9:p(V +), reg r32:V, reg bibentry2:cls, reg as_person:cls, reg r33:V, reg p10:p(V +), reg r35:V, reg c3:cls, reg r36:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r37:V, reg rref12:*, reg rref13:V, reg bref:*, reg bref1:V, reg c4:cls, reg r39:V, reg bref2:*, reg bref3:V, reg c5:L, reg bref5:V, reg dr:V, reg dc:L, reg dx:V, reg __:cls, reg r40:V, reg bref6:*, reg bref7:V, reg c6:L, reg bref9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg __1:cls, reg r41:V, reg bref10:*, reg bref11:V, reg c7:L, reg bref13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg r42:V, reg bref14:*, reg bref15:V, reg c8:L, reg bref17:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r43:V, reg c9:L, reg dx9:V, reg dr8:V, reg dc4:L, reg dx10:V, reg r44:V, reg bref18:*, reg bref19:V, reg c10:L, reg bref21:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r45:V, reg c11:L, reg dx15:V, reg dr12:V, reg dc6:L, reg dx16:V, reg dx17:V, reg r46:V, reg c12:L, reg dx19:V, reg dr14:V, reg dc7:L, reg dx20:V, reg dx21:V, reg __4:cls, reg r47:V, reg c13:L, reg dx23:V, reg dr16:V, reg dc8:L, reg dx24:V, reg r48:V, reg rref14:*, reg rref15:V, reg c14:L, reg rref17:V, reg dr18:V, reg dc9:L, reg dx26:V, reg r49:V, reg R_version:*, reg R_version1:V, reg c15:L, reg R_version3:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg r50:V, reg l:*, reg c16:L, reg dx31:V, reg l2:*, reg dr22:V, reg dc11:L, reg dx33:V, reg dx35:V, reg r51:V, reg stopifnot:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg rref18:*, reg rref19:V, reg c17:L, reg rref21:V, reg dr24:V, reg dc12:L, reg dx36:V, reg dx37:V, reg r54:V, reg R_version4:*, reg R_version5:V, reg c18:L, reg R_version7:V, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg r55:V, reg identical:cls, reg r56:V, reg p11:p(V +), reg r58:V, reg toBibtex:cls, reg bref22:*, reg bref23:V, reg p12:p(V +), reg r60:V, reg transform:cls, reg rref22:*, reg rref23:V, reg p13:p(V +), reg paste0:cls, reg address:*, reg address1:V, reg p14:p(V +), reg r63:V, reg p15:p(V +), reg r65:V, reg print6:cls, reg bref24:*, reg bref25:V, reg p16:p(V +), reg r67:V, reg writeLines:cls, reg paste1:cls, reg format:cls, reg bref26:*, reg bref27:V, reg p17:p(V +), reg r69:V, reg p18:p(V +), reg r71:V, reg p19:p(V +), reg r73:V, reg writeLines1:cls, reg format1:cls, reg bref28:*, reg bref29:V, reg p20:p(V +), reg r75:V, reg p21:p(V +), reg r77:V |
    mkenv;
    r = clos inner546822651;
    st bibentry = r;
    bibentry = ldf bibentry;
    check L7() else D0();
  D0():
    deopt 4 [];
  L7():
    p = prom<V +>{
      person = ldf person;
      r1 = dyn person("R Core Team");
      return r1;
    };
    r3 = dyn bibentry[bibtype, title, author, organization, address, year, url]("Manual", "R: A Language and Environment for Statistical Computing", p, "R Foundation for Statistical Computing", "Vienna, Austria", 2014.0, "https://www.R-project.org/");
    check L8() else D1();
  D1():
    deopt 19 [r3];
  L8():
    st rref = r3;
    print = ldf print;
    check L9() else D2();
  D2():
    deopt 22 [];
  L9():
    p1 = prom<V +>{
      rref = ld rref;
      rref1 = force? rref;
      checkMissing(rref1);
      return rref1;
    };
    r5 = dyn print(p1);
    check L10() else D3();
  D3():
    deopt 24 [r5];
  L10():
    print1 = ldf print;
    check L11() else D4();
  D4():
    deopt 26 [];
  L11():
    p2 = prom<V +>{
      rref2 = ld rref;
      rref3 = force? rref2;
      checkMissing(rref3);
      return rref3;
    };
    r7 = dyn print1[, style](p2, "bibtex");
    check L12() else D5();
  D5():
    deopt 30 [r7];
  L12():
    print2 = ldf print;
    check L13() else D6();
  D6():
    deopt 32 [];
  L13():
    p3 = prom<V +>{
      rref4 = ld rref;
      rref5 = force? rref4;
      checkMissing(rref5);
      return rref5;
    };
    r9 = dyn print2[, style](p3, "citation");
    check L14() else D7();
  D7():
    deopt 36 [r9];
  L14():
    print3 = ldf print;
    check L15() else D8();
  D8():
    deopt 38 [];
  L15():
    p4 = prom<V +>{
      rref6 = ld rref;
      rref7 = force? rref6;
      checkMissing(rref7);
      return rref7;
    };
    r11 = dyn print3[, style](p4, "html");
    check L16() else D9();
  D9():
    deopt 42 [r11];
  L16():
    print4 = ldf print;
    check L17() else D10();
  D10():
    deopt 44 [];
  L17():
    p5 = prom<V +>{
      rref8 = ld rref;
      rref9 = force? rref8;
      checkMissing(rref9);
      return rref9;
    };
    r13 = dyn print4[, style](p5, "latex");
    check L18() else D11();
  D11():
    deopt 48 [r13];
  L18():
    print5 = ldf print;
    check L19() else D12();
  D12():
    deopt 50 [];
  L19():
    p6 = prom<V +>{
      rref10 = ld rref;
      rref11 = force? rref10;
      checkMissing(rref11);
      return rref11;
    };
    r15 = dyn print5[, style](p6, "R");
    check L20() else D13();
  D13():
    deopt 54 [r15];
  L20():
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L0(r17):
    st bref = r17;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  L21():
    bibentry1 = ldf bibentry;
    check L23() else D14();
  L22():
    r16 = dyn base(<lang bibentry(bibtype="Manual", title="boot: Bootstrap R (S-PLUS) Functions", author=c(person("Angelo", "Canty", role="aut", comment="S original"), person(c("Brian", "D."), "Ripley", role=c("aut", "trl", "cre"), comment="R port, author of parallel support", email="ripley@stats.ox.ac.uk")), year="2012", note="R package version 1.3-4", url="https://CRAN.R-project.org/package=boot", key="boot-package")>, <lang bibentry(bibtype="Book", title="Bootstrap Methods and Their Applications", author=as.person("Anthony C. Davison [aut], David V. Hinkley [aut]"), year="1997", publisher="Cambridge University Press", address="Cambridge", isbn="0-521-57391-2", url="http://statwww.epfl.ch/davison/BMA/", key="boot-book")>);
    goto L0(r16);
  D14():
    deopt 58 [];
  L1():
    bref2 = ld bref;
    check L33() else D22();
  L23():
    p9 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      person1 = ldf person;
      r20 = dyn person1[, , role, comment]("Angelo", "Canty", "aut", "S original");
      person2 = ldf person;
      p7 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r22):
        return r22;
      L1():
        c = ldf c in base;
        r23 = dyn c("Brian", "D.");
        goto L0(r23);
      L2():
        r21 = dyn base2("Brian", "D.");
        goto L0(r21);
      };
      p8 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r26):
        return r26;
      L1():
        c1 = ldf c in base;
        r27 = dyn c1("aut", "trl", "cre");
        goto L0(r27);
      L2():
        r25 = dyn base3("aut", "trl", "cre");
        goto L0(r25);
      };
      r29 = dyn person2[, , role, comment, email](p7, "Ripley", p8, "R port, author of parallel support", "ripley@stats.ox.ac.uk");
      c2 = ldf c in base;
      r30 = dyn c2(r20, r29);
      goto L0(r30);
    L2():
      r18 = dyn base1(<lang person("Angelo", "Canty", role="aut", comment="S original")>, <lang person(c("Brian", "D."), "Ripley", role=c("aut", "trl", "cre"), comment="R port, author of parallel support", email="ripley@stats.ox.ac.uk")>);
      goto L0(r18);
    };
    r32 = dyn bibentry1[bibtype, title, author, year, note, url, key]("Manual", "boot: Bootstrap R (S-PLUS) Functions", p9, "2012", "R package version 1.3-4", "https://CRAN.R-project.org/package=boot", "boot-package");
    check L24() else D15();
  L28():
    rref12 = ld rref;
    check L30() else D19();
  L29():
    r37 = dyn base4(<sym rref>, <sym bref>);
    goto L1();
  D15():
    deopt 73 [r32];
  D19():
    deopt 100 [rref12];
  D22():
    deopt 106 [bref2];
  L24():
    bibentry2 = ldf bibentry;
    check L25() else D16();
  L30():
    rref13 = force? rref12;
    checkMissing(rref13);
    bref = ld bref;
    check L31() else D20();
  L33():
    bref3 = force? bref2;
    checkMissing(bref3);
    c5 = `is.object`(bref3);
    if c5 then L34() else L35(bref3);
  D16():
    deopt 75 [];
  D20():
    deopt 102 [bref];
  L2():
    bref6 = ld bref;
    check L37() else D23();
  L25():
    p10 = prom<V +>{
      as_person = ldf `as.person`;
      r33 = dyn as_person("Anthony C. Davison [aut], David V. Hinkley [aut]");
      return r33;
    };
    r35 = dyn bibentry2[bibtype, title, author, year, publisher, address, isbn, url, key]("Book", "Bootstrap Methods and Their Applications", p10, "1997", "Cambridge University Press", "Cambridge", "0-521-57391-2", "http://statwww.epfl.ch/davison/BMA/", "boot-book");
    check L26() else D17();
  L31():
    bref1 = force? bref;
    checkMissing(bref1);
    c4 = ldf c in base;
    r39 = dyn c4(rref13, bref1);
    check L32() else D21();
  L34():
    dr = tryDispatchBuiltin.1("[", bref3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L36() else L35(dr);
  L35(bref5):
    __ = ldf `[` in base;
    r40 = dyn __(bref5, 2.0);
    goto L2();
  D17():
    deopt 94 [r35];
  D21():
    deopt 105 [r39];
  D23():
    deopt 111 [bref6];
  L26():
    c3 = ldf c in base;
    r36 = dyn c3(r32, r35);
    check L27() else D18();
  L32():
    goto L1();
  L36():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2();
  L37():
    bref7 = force? bref6;
    checkMissing(bref7);
    c6 = `is.object`(bref7);
    if c6 then L38() else L39(bref7);
  D18():
    deopt 96 [r36];
  L3():
    bref10 = ld bref;
    check L41() else D24();
  L27():
    goto L0(r36);
  L38():
    dr2 = tryDispatchBuiltin.1("[", bref7);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L40() else L39(dr2);
  L39(bref9):
    __1 = ldf `[` in base;
    r41 = dyn __1(bref9, "boot-book");
    goto L3();
  D24():
    deopt 116 [bref10];
  L40():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3();
  L41():
    bref11 = force? bref10;
    checkMissing(bref11);
    c7 = `is.object`(bref11);
    if c7 then L43() else L44(bref11);
  L42():
    bref14 = ld bref;
    check L46() else D25();
  L43():
    dr4 = tryDispatchBuiltin.1("$", bref11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L45() else L44(dr4);
  L44(bref13):
    r42 = `$`(bref13, <sym author>);
    goto L42();
  D25():
    deopt 119 [bref14];
  L45():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L42();
  L46():
    bref15 = force? bref14;
    checkMissing(bref15);
    c8 = `is.object`(bref15);
    if c8 then L47() else L48(bref15);
  L4(dx7):
    c9 = `is.object`(dx7);
    if c9 then L51() else L52(dx7);
  L47():
    dr6 = tryDispatchBuiltin.1("[", bref15);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L49() else L48(dr6);
  L48(bref17):
    __2 = ldf `[` in base;
    r43 = dyn __2(bref17, 1.0);
    goto L4(r43);
  L49():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx6);
  L50():
    bref18 = ld bref;
    check L54() else D26();
  L51():
    dr8 = tryDispatchBuiltin.1("$", dx7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L53() else L52(dr8);
  L52(dx9):
    r44 = `$`(dx9, <sym author>);
    goto L50();
  D26():
    deopt 125 [bref18];
  L53():
    dx10 = getTryDispatchBuiltinValue(dr8);
    goto L50();
  L54():
    bref19 = force? bref18;
    checkMissing(bref19);
    c10 = `is.object`(bref19);
    if c10 then L55() else L56(bref19);
  L5(dx13):
    c11 = `is.object`(dx13);
    if c11 then L59() else L60(dx13);
  L55():
    dr10 = tryDispatchBuiltin.1("[", bref19);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L57() else L56(dr10);
  L56(bref21):
    __3 = ldf `[` in base;
    r45 = dyn __3(bref21, 1.0);
    goto L5(r45);
  L57():
    dx12 = getTryDispatchBuiltinValue(dr10);
    goto L5(dx12);
  L58(dx17):
    c12 = `is.object`(dx17);
    if c12 then L62() else L63(dx17);
  L59():
    dr12 = tryDispatchBuiltin.1("$", dx13);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L61() else L60(dr12);
  L60(dx15):
    r46 = `$`(dx15, <sym author>);
    goto L58(r46);
  L6(dx21):
    c13 = `is.object`(dx21);
    if c13 then L66() else L67(dx21);
  L61():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L58(dx16);
  L62():
    dr14 = tryDispatchBuiltin.1("[", dx17);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L64() else L63(dr14);
  L63(dx19):
    __4 = ldf `[` in base;
    r47 = dyn __4(dx19, 2.0);
    goto L6(r47);
  L64():
    dx20 = getTryDispatchBuiltinValue(dr14);
    goto L6(dx20);
  L65():
    rref14 = ld rref;
    check L69() else D27();
  L66():
    dr16 = tryDispatchBuiltin.1("$", dx21);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L68() else L67(dr16);
  L67(dx23):
    r48 = `$`(dx23, <sym email>);
    goto L65();
  D27():
    deopt 135 [rref14];
  L68():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L65();
  L69():
    rref15 = force? rref14;
    checkMissing(rref15);
    c14 = `is.object`(rref15);
    if c14 then L71() else L72(rref15);
  L70():
    R_version = ld `R.version`;
    check L74() else D28();
  L71():
    dr18 = tryDispatchBuiltin.1("$", rref15);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L73() else L72(dr18);
  L72(rref17):
    r49 = `$`(rref17, <sym Year>);
    goto L70();
  D28():
    deopt 138 [R_version];
  L73():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L70();
  L74():
    R_version1 = force? R_version;
    checkMissing(R_version1);
    c15 = `is.object`(R_version1);
    if c15 then L76() else L77(R_version1);
  L75(dx29):
    l = ld rref;
    c16 = `is.object`(l);
    if c16 then L80() else L81(dx29, l);
  L76():
    dr20 = tryDispatchBuiltin.1("$", R_version1);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L78() else L77(dr20);
  L77(R_version3):
    r50 = `$`(R_version3, <sym year>);
    goto L75(r50);
  L78():
    dx28 = getTryDispatchBuiltinValue(dr20);
    goto L75(dx28);
  L79(dx35):
    st rref = dx35;
    stopifnot = ldf stopifnot;
    check L83() else D29();
  L80():
    dr22 = tryDispatchBuiltin.0("$<-", l, dx29);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L82() else L81(dx29, dr22);
  L81(dx31, l2):
    r51 = `$<-`(l2, <sym Year>, dx29);
    goto L79(r51);
  D29():
    deopt 145 [];
  L82():
    dx33 = getTryDispatchBuiltinValue(dr22);
    goto L79(dx33);
  L83():
    p11 = prom<V +>{
      sym5 = ldf identical;
      base5 = ldf identical in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r53):
      return r53;
    L1():
      rref18 = ld rref;
      rref19 = force? rref18;
      checkMissing(rref19);
      c17 = `is.object`(rref19);
      if c17 then L4() else L5(rref19);
    L2():
      r52 = dyn base5(<lang `$`(rref, year)>, <lang `$`(R.version, year)>);
      goto L0(r52);
    L3(dx37):
      R_version4 = ld `R.version`;
      R_version5 = force? R_version4;
      checkMissing(R_version5);
      c18 = `is.object`(R_version5);
      if c18 then L8() else L9(R_version5);
    L4():
      dr24 = tryDispatchBuiltin.1("$", rref19);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L6() else L5(dr24);
    L5(rref21):
      r54 = `$`(rref21, <sym year>);
      goto L3(r54);
    L6():
      dx36 = getTryDispatchBuiltinValue(dr24);
      goto L3(dx36);
    L7(dx39):
      identical = ldf identical in base;
      r56 = dyn identical(dx37, dx39, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r56);
    L8():
      dr26 = tryDispatchBuiltin.1("$", R_version5);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L10() else L9(dr26);
    L9(R_version7):
      r55 = `$`(R_version7, <sym year>);
      goto L7(r55);
    L10():
      dx38 = getTryDispatchBuiltinValue(dr26);
      goto L7(dx38);
    };
    r58 = dyn stopifnot(p11);
    check L84() else D30();
  D30():
    deopt 147 [r58];
  L84():
    toBibtex = ldf toBibtex;
    check L85() else D31();
  D31():
    deopt 149 [];
  L85():
    p12 = prom<V +>{
      bref22 = ld bref;
      bref23 = force? bref22;
      checkMissing(bref23);
      return bref23;
    };
    r60 = dyn toBibtex(p12);
    check L86() else D32();
  D32():
    deopt 151 [r60];
  L86():
    transform = ldf transform;
    check L87() else D33();
  D33():
    deopt 153 [];
  L87():
    p13 = prom<V +>{
      rref22 = ld rref;
      rref23 = force? rref22;
      checkMissing(rref23);
      return rref23;
    };
    p15 = prom<V +>{
      paste0 = ldf paste0;
      p14 = prom<V +>{
        address = ld address;
        address1 = force? address;
        checkMissing(address1);
        return address1;
      };
      r63 = dyn paste0(p14, ", Europe");
      return r63;
    };
    r65 = dyn transform[, address](p13, p15);
    check L88() else D34();
  D34():
    deopt 157 [r65];
  L88():
    print6 = ldf print;
    check L89() else D35();
  D35():
    deopt 159 [];
  L89():
    p16 = prom<V +>{
      bref24 = ld bref;
      bref25 = force? bref24;
      checkMissing(bref25);
      return bref25;
    };
    r67 = dyn print6[, style](p16, "citation");
    check L90() else D36();
  D36():
    deopt 163 [r67];
  L90():
    writeLines = ldf writeLines;
    check L91() else D37();
  D37():
    deopt 165 [];
  L91():
    p19 = prom<V +>{
      paste1 = ldf paste;
      p18 = prom<V +>{
        format = ldf format;
        p17 = prom<V +>{
          bref26 = ld bref;
          bref27 = force? bref26;
          checkMissing(bref27);
          return bref27;
        };
        r69 = dyn format(p17, "R");
        return r69;
      };
      r71 = dyn paste1[, collapse](p18, "\n\n");
      return r71;
    };
    r73 = dyn writeLines(p19);
    check L92() else D38();
  D38():
    deopt 167 [r73];
  L92():
    writeLines1 = ldf writeLines;
    check L93() else D39();
  D39():
    deopt 169 [];
  L93():
    p21 = prom<V +>{
      format1 = ldf format;
      p20 = prom<V +>{
        bref28 = ld bref;
        bref29 = force? bref28;
        checkMissing(bref29);
        return bref29;
      };
      r75 = dyn format1[, , collapse](p20, "R", TRUE);
      return r75;
    };
    r77 = dyn writeLines1(p21);
    check L94() else D40();
  D40():
    deopt 171 [r77];
  L94():
    popenv;
    return r77;
  }
}
fun inner546822651(bibtype, textVersion, header, footer, key, `...`, other, mheader, mfooter) {
  (reg bibtype:*, reg textVersion:*, reg header:*, reg footer:*, reg key:*, reg ddd:dots, reg other:*, reg mheader:*, reg mfooter:*) -+> V { var bibtype:*, var textVersion:*, reg textVersion_isMissing:L, reg textVersion_orDefault:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var footer:*, reg footer_isMissing:L, reg footer_orDefault:*, var key:*, reg key_isMissing:L, reg key_orDefault:*, var `...`:dots?, var other:*, reg other_isMissing:L, reg other_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), var mheader:*, reg mheader_isMissing:L, reg mheader_orDefault:*, var mfooter:*, reg mfooter_isMissing:L, reg mfooter_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg ___:cls, reg r6:V, reg names:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg list1:cls, reg ddd1:dots?, reg r12:V, reg other1:*, reg other2:V, reg c:cls, reg r13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r14:V, reg r15:V, reg args:*, reg args1:V, reg length:cls, reg r16:V, reg r17:V, reg c1:L, reg _bibentry:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r18:V, reg r19:V, reg list2:cls, reg r20:V, reg p1:p(V +), reg mheader1:*, reg mheader2:V, reg p2:p(V +), reg mfooter1:*, reg mfooter2:V, reg p3:p(V +), reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r27:V, reg r28:V, reg vapply:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r29:V, reg r30:V, reg args2:*, reg args3:V, reg names1:cls, reg r31:V, reg p4:p(V +), reg _is_not_nonempty_text:*, reg _is_not_nonempty_text1:V, reg p5:p(V +), reg r34:V, reg any:cls, reg r35:V, reg c2:L, reg stop:cls, reg r36:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r38:V, reg r39:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r40:V, reg r41:V, reg bibtype1:*, reg bibtype2:V, reg textVersion1:*, reg textVersion2:V, reg header1:*, reg header2:V, reg footer1:*, reg footer2:V, reg key1:*, reg key2:V, reg list3:cls, reg r42:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r43:V, reg r44:V, reg list4:cls, reg ddd2:dots?, reg r45:V, reg c3:cls, reg r46:V, reg lapply:cls, reg args4:*, reg args5:V, reg p6:p(V +), reg _listify:*, reg _listify1:V, reg p7:p(V +), reg r49:V, reg lapply1:cls, reg other3:*, reg other4:V, reg p8:p(V +), reg _listify2:*, reg _listify3:V, reg p9:p(V +), reg r52:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r53:V, reg r54:V, reg lengths:cls, reg sym12:cls, reg base12:cls, reg guard12:L, reg r55:V, reg r56:V, reg args6:*, reg args7:V, reg other5:*, reg other6:V, reg c4:cls, reg r57:V, reg p10:p(V +), reg r59:V, reg max:cls, reg r60:V, reg lengths1:cls, reg args8:*, reg args9:V, reg p11:p(V +), reg r62:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r63:V, reg r64:V, reg _in_:cls, reg args_length:*, reg args_length1:V, reg p12:p(V +), reg sym14:cls, reg base14:cls, reg guard14:L, reg r66:V, reg r67:V, reg max_length:*, reg max_length1:V, reg c5:cls, reg r68:V, reg p13:p(V +), reg r70:V, reg all:cls, reg r71:V, reg r72:V, reg c6:L, reg warning:cls, reg gettextf:cls, reg paste:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r73:V, reg r74:V, reg args10:*, reg args11:V, reg names2:cls, reg r75:V, reg c7:L, reg r77:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg args_length_ok:*, reg args_length_ok1:V, reg r78:V, reg __:cls, reg r79:V, reg p14:p(V +), reg r81:V, reg p15:p(V +), reg r83:V, reg p16:p(V +), reg r85:V, reg lapply2:cls, reg args12:*, reg args13:V, reg p17:p(V +), reg rep_len:*, reg rep_len1:V, reg p18:p(V +), reg max_length2:*, reg max_length3:V, reg p19:p(V +), reg r90:V, reg lengths2:cls, reg other7:*, reg other8:V, reg p20:p(V +), reg r92:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r93:V, reg r94:V, reg _in_1:cls, reg other_length:*, reg other_length1:V, reg p21:p(V +), reg sym17:cls, reg base17:cls, reg guard17:L, reg r96:V, reg r97:V, reg max_length4:*, reg max_length5:V, reg c8:cls, reg r98:V, reg p22:p(V +), reg r100:V, reg all1:cls, reg r101:V, reg r102:V, reg c9:L, reg warning1:cls, reg gettextf1:cls, reg paste1:cls, reg sym18:cls, reg base18:cls, reg guard18:L, reg r103:V, reg r104:V, reg other9:*, reg other10:V, reg names3:cls, reg r105:V, reg c10:L, reg r107:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg other_length_ok:*, reg other_length_ok1:V, reg r108:V, reg __1:cls, reg r109:V, reg p23:p(V +), reg r111:V, reg p24:p(V +), reg r113:V, reg p25:p(V +), reg r115:V, reg lapply3:cls, reg other11:*, reg other12:V, reg p26:p(V +), reg rep_len2:*, reg rep_len3:V, reg p27:p(V +), reg max_length6:*, reg max_length7:V, reg p28:p(V +), reg r120:V, reg r121:cls, reg lapply4:cls, reg sym19:cls, reg base19:cls, reg guard19:L, reg r122:V, reg r123:V, reg args14:*, reg args15:V, reg c11:L, reg args17:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r124:V, reg r125:I, reg p29:p(V +), reg r127:cls, reg p30:p(V +), reg r129:V, reg _bibentry1:cls, reg rval:*, reg rval1:V, reg p31:p(V +), reg mheader3:*, reg mheader4:V, reg p32:p(V +), reg mfooter3:*, reg mfooter4:V, reg p33:p(V +), reg r133:V |
    mkenv;
    st bibtype = bibtype;
    textVersion_isMissing = missing.0(textVersion);
    if textVersion_isMissing then L0(NULL) else L0(textVersion);
  L0(textVersion_orDefault):
    st textVersion = textVersion_orDefault;
    header_isMissing = missing.0(header);
    if header_isMissing then L1(NULL) else L1(header);
  L1(header_orDefault):
    st header = header_orDefault;
    footer_isMissing = missing.0(footer);
    if footer_isMissing then L2(NULL) else L2(footer);
  L2(footer_orDefault):
    st footer = footer_orDefault;
    key_isMissing = missing.0(key);
    if key_isMissing then L3(NULL) else L3(key);
  L3(key_orDefault):
    st key = key_orDefault;
    st `...` = ddd;
    other_isMissing = missing.0(other);
    if other_isMissing then L4() else L5(other);
  L4():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L5(p);
  L5(other_orDefault):
    st other = other_orDefault;
    mheader_isMissing = missing.0(mheader);
    if mheader_isMissing then L6(NULL) else L6(mheader);
  L6(mheader_orDefault):
    st mheader = mheader_orDefault;
    mfooter_isMissing = missing.0(mfooter);
    if mfooter_isMissing then L7(NULL) else L7(mfooter);
  L7(mfooter_orDefault):
    st mfooter = mfooter_orDefault;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L8(r5):
    st BibTeX_names = r5;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L27():
    ___ = ldf `:::`;
    check L29() else D0();
  L28():
    r4 = dyn base1(<lang `:::`(tools, BibTeX_entry_field_db)>);
    goto L8(r4);
  D0():
    deopt 3 [];
  L9(r9):
    st args = r9;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L40() else L41();
  L29():
    r6 = dyn ___("tools", "BibTeX_entry_field_db");
    check L30() else D1();
  L32():
    sym3 = ldf list;
    base3 = ldf list in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L33():
    r8 = dyn base2(<lang list(...)>, <sym other>);
    goto L9(r8);
  D1():
    deopt 6 [r6];
  L10(r11):
    other1 = ld other;
    check L38() else D5();
  L11(r15):
    r17 = `!`(r15);
    c1 = `as.logical`(r17);
    if c1 then L44() else L12();
  L30():
    names = ldf names in base;
    r7 = dyn names(r6);
    check L31() else D2();
  L34():
    list1 = ldf list;
    check L36() else D3();
  L35():
    r10 = dyn base3(<sym ...>);
    goto L10(r10);
  L40():
    args = ld args;
    check L42() else D7();
  L41():
    r14 = dyn base4(<sym args>);
    goto L11(r14);
  D2():
    deopt 8 [r7];
  D3():
    deopt 14 [];
  D5():
    deopt 17 [other1];
  D7():
    deopt 24 [args];
  L12():
    sym6 = ldf any;
    base6 = ldf any in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L49() else L50();
  L31():
    goto L8(r7);
  L36():
    ddd1 = ld `...`;
    r12 = dyn list1[`...`](ddd1);
    check L37() else D4();
  L38():
    other2 = force? other1;
    checkMissing(other2);
    c = ldf c in base;
    r13 = dyn c(r11, other2);
    check L39() else D6();
  L42():
    args1 = force? args;
    checkMissing(args1);
    length = ldf length in base;
    r16 = dyn length(args1);
    check L43() else D8();
  L44():
    _bibentry = ldf `.bibentry`;
    check L45() else D9();
  D4():
    deopt 16 [r12];
  D6():
    deopt 20 [r13];
  D8():
    deopt 27 [r16];
  D9():
    deopt 30 [];
  L14(r28):
    c2 = `as.logical`(r28);
    if c2 then L54() else L15();
  L37():
    goto L10(r12);
  L39():
    goto L9(r13);
  L43():
    goto L11(r16);
  L45():
    p1 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r19):
      return r19;
    L1():
      list2 = ldf list in base;
      r20 = dyn list2();
      goto L0(r20);
    L2():
      r18 = dyn base5();
      goto L0(r18);
    };
    p2 = prom<V +>{
      mheader1 = ld mheader;
      mheader2 = force? mheader1;
      checkMissing(mheader2);
      return mheader2;
    };
    p3 = prom<V +>{
      mfooter1 = ld mfooter;
      mfooter2 = force? mfooter1;
      checkMissing(mfooter2);
      return mfooter2;
    };
    r24 = dyn _bibentry(p1, p2, p3);
    check L46() else D10();
  L49():
    vapply = ldf vapply;
    check L51() else D11();
  L50():
    r27 = dyn base6(<lang vapply(names(args), .is_not_nonempty_text, NA_LGL)>);
    goto L14(r27);
  D10():
    deopt 34 [r24];
  D11():
    deopt 41 [];
  L15():
    goto L16();
  L16():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L58() else L59();
  L46():
    popenv;
    return r24;
  L51():
    p4 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      names1 = ldf names in base;
      r31 = dyn names1(args3);
      goto L0(r31);
    L2():
      r29 = dyn base7(<sym args>);
      goto L0(r29);
    };
    p5 = prom<V +>{
      _is_not_nonempty_text = ld `.is_not_nonempty_text`;
      _is_not_nonempty_text1 = force? _is_not_nonempty_text;
      checkMissing(_is_not_nonempty_text1);
      return _is_not_nonempty_text1;
    };
    r34 = dyn vapply(p4, p5, NA_LGL);
    check L52() else D12();
  L54():
    stop = ldf stop;
    check L55() else D14();
  D12():
    deopt 45 [r34];
  D14():
    deopt 49 [];
  L17(r39):
    st args = r39;
    lapply = ldf lapply;
    check L73() else D25();
  L52():
    any = ldf any in base;
    r35 = dyn any(r34);
    check L53() else D13();
  L55():
    r36 = dyn stop("all fields have to be named");
    check L56() else D15();
  L58():
    sym9 = ldf list;
    base9 = ldf list in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L60() else L61();
  L59():
    r38 = dyn base8(<lang list(bibtype=bibtype, textVersion=textVersion, header=header, footer=footer, key=key)>, <lang list(...)>);
    goto L17(r38);
  D13():
    deopt 47 [r35];
  D15():
    deopt 51 [r36];
  D25():
    deopt 84 [];
  L18(r41):
    sym10 = ldf list;
    base10 = ldf list in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L68() else L69();
  L53():
    goto L14(r35);
  L56():
    goto L16();
  L60():
    bibtype1 = ld bibtype;
    check L62() else D16();
  L61():
    r40 = dyn base9[bibtype, textVersion, header, footer, key](<sym bibtype>, <sym textVersion>, <sym header>, <sym footer>, <sym key>);
    goto L18(r40);
  L73():
    p6 = prom<V +>{
      args4 = ld args;
      args5 = force? args4;
      checkMissing(args5);
      return args5;
    };
    p7 = prom<V +>{
      _listify = ld `.listify`;
      _listify1 = force? _listify;
      checkMissing(_listify1);
      return _listify1;
    };
    r49 = dyn lapply(p6, p7);
    check L74() else D26();
  D16():
    deopt 58 [bibtype1];
  D26():
    deopt 87 [r49];
  L19(r44):
    c3 = ldf c in base;
    r46 = dyn c3(r41, r44);
    check L72() else D24();
  L62():
    bibtype2 = force? bibtype1;
    checkMissing(bibtype2);
    textVersion1 = ld textVersion;
    check L63() else D17();
  L68():
    list4 = ldf list;
    check L70() else D22();
  L69():
    r43 = dyn base10(<sym ...>);
    goto L19(r43);
  L74():
    st args = r49;
    lapply1 = ldf lapply;
    check L75() else D27();
  D17():
    deopt 61 [textVersion1];
  D22():
    deopt 77 [];
  D24():
    deopt 81 [r46];
  D27():
    deopt 90 [];
  L63():
    textVersion2 = force? textVersion1;
    checkMissing(textVersion2);
    header1 = ld header;
    check L64() else D18();
  L70():
    ddd2 = ld `...`;
    r45 = dyn list4[`...`](ddd2);
    check L71() else D23();
  L72():
    goto L17(r46);
  L75():
    p8 = prom<V +>{
      other3 = ld other;
      other4 = force? other3;
      checkMissing(other4);
      return other4;
    };
    p9 = prom<V +>{
      _listify2 = ld `.listify`;
      _listify3 = force? _listify2;
      checkMissing(_listify3);
      return _listify3;
    };
    r52 = dyn lapply1(p8, p9);
    check L76() else D28();
  D18():
    deopt 64 [header1];
  D23():
    deopt 79 [r45];
  D28():
    deopt 93 [r52];
  L64():
    header2 = force? header1;
    checkMissing(header2);
    footer1 = ld footer;
    check L65() else D19();
  L71():
    goto L19(r45);
  L76():
    st other = r52;
    sym11 = ldf max;
    base11 = ldf max in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L77() else L78();
  D19():
    deopt 67 [footer1];
  L20(r54):
    st max_length = r54;
    lengths1 = ldf lengths;
    check L82() else D32();
  L65():
    footer2 = force? footer1;
    checkMissing(footer2);
    key1 = ld key;
    check L66() else D20();
  L77():
    lengths = ldf lengths;
    check L79() else D29();
  L78():
    r53 = dyn base11(<lang lengths(c(args, other))>);
    goto L20(r53);
  D20():
    deopt 70 [key1];
  D29():
    deopt 98 [];
  D32():
    deopt 105 [];
  L66():
    key2 = force? key1;
    checkMissing(key2);
    list3 = ldf list in base;
    r42 = dyn list3(bibtype2, textVersion2, header2, footer2, key2);
    check L67() else D21();
  L79():
    p10 = prom<V +>{
      sym12 = ldf c;
      base12 = ldf c in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L1() else L2();
    L0(r56):
      return r56;
    L1():
      args6 = ld args;
      args7 = force? args6;
      checkMissing(args7);
      other5 = ld other;
      other6 = force? other5;
      checkMissing(other6);
      c4 = ldf c in base;
      r57 = dyn c4(args7, other6);
      goto L0(r57);
    L2():
      r55 = dyn base12(<sym args>, <sym other>);
      goto L0(r55);
    };
    r59 = dyn lengths(p10);
    check L80() else D30();
  L82():
    p11 = prom<V +>{
      args8 = ld args;
      args9 = force? args8;
      checkMissing(args9);
      return args9;
    };
    r62 = dyn lengths1(p11);
    check L83() else D33();
  D21():
    deopt 74 [r42];
  D30():
    deopt 100 [r59];
  D33():
    deopt 107 [r62];
  L67():
    goto L18(r42);
  L80():
    max = ldf max in base;
    r60 = dyn max(r59);
    check L81() else D31();
  L83():
    st args_length = r62;
    sym13 = ldf all;
    base13 = ldf all in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L84() else L85();
  D31():
    deopt 102 [r60];
  L21(r64):
    r72 = `!`(r64);
    c6 = `as.logical`(r72);
    if c6 then L89() else L22();
  L81():
    goto L20(r60);
  L84():
    _in_ = ldf `%in%`;
    check L86() else D34();
  L85():
    r63 = dyn base13(<lang `<-`(args_length_ok, `%in%`(args_length, c(1, max_length)))>);
    goto L21(r63);
  D34():
    deopt 112 [];
  L22():
    goto L23();
  L23():
    lapply2 = ldf lapply;
    check L93() else D39();
  L86():
    p12 = prom<V +>{
      args_length = ld args_length;
      args_length1 = force? args_length;
      checkMissing(args_length1);
      return args_length1;
    };
    p13 = prom<V +>{
      sym14 = ldf c;
      base14 = ldf c in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L1() else L2();
    L0(r67):
      return r67;
    L1():
      max_length = ld max_length;
      max_length1 = force? max_length;
      checkMissing(max_length1);
      c5 = ldf c in base;
      r68 = dyn c5(1, max_length1);
      goto L0(r68);
    L2():
      r66 = dyn base14(1, <sym max_length>);
      goto L0(r66);
    };
    r70 = dyn _in_(p12, p13);
    check L87() else D35();
  L89():
    warning = ldf warning;
    check L90() else D37();
  D35():
    deopt 115 [r70];
  D37():
    deopt 121 [];
  D39():
    deopt 129 [];
  L87():
    st args_length_ok = r70;
    all = ldf all in base;
    r71 = dyn all(r70);
    check L88() else D36();
  L90():
    p16 = prom<V +>{
      gettextf = ldf gettextf;
      p15 = prom<V +>{
        paste = ldf paste;
        p14 = prom<V +>{
          sym15 = ldf names;
          base15 = ldf names in base;
          guard15 = `==`.4(sym15, base15);
          if guard15 then L2() else L3();
        L0(r74):
          c7 = `is.object`(r74);
          if c7 then L4() else L5(r74);
        L2():
          args10 = ld args;
          args11 = force? args10;
          checkMissing(args11);
          names2 = ldf names in base;
          r75 = dyn names2(args11);
          goto L0(r75);
        L3():
          r73 = dyn base15(<sym args>);
          goto L0(r73);
        L1(dx1):
          return dx1;
        L4():
          dr = tryDispatchBuiltin.1("[", r74);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L6() else L5(dr);
        L5(r77):
          args_length_ok = ld args_length_ok;
          args_length_ok1 = force? args_length_ok;
          checkMissing(args_length_ok1);
          r78 = `!`(args_length_ok1);
          __ = ldf `[` in base;
          r79 = dyn __(r77, r78);
          goto L1(r79);
        L6():
          dx = getTryDispatchBuiltinValue(dr);
          goto L1(dx);
        };
        r81 = dyn paste[, collapse](p14, ", ");
        return r81;
      };
      r83 = dyn gettextf("Not all arguments are of the same length, the following need to be recycled: %s", p15);
      return r83;
    };
    r85 = dyn warning[, domain](p16, NA_LGL);
    check L91() else D38();
  L93():
    p17 = prom<V +>{
      args12 = ld args;
      args13 = force? args12;
      checkMissing(args13);
      return args13;
    };
    p18 = prom<V +>{
      rep_len = ld rep_len;
      rep_len1 = force? rep_len;
      checkMissing(rep_len1);
      return rep_len1;
    };
    p19 = prom<V +>{
      max_length2 = ld max_length;
      max_length3 = force? max_length2;
      checkMissing(max_length3);
      return max_length3;
    };
    r90 = dyn lapply2(p17, p18, p19);
    check L94() else D40();
  D36():
    deopt 118 [r71];
  D38():
    deopt 125 [r85];
  D40():
    deopt 133 [r90];
  L88():
    goto L21(r71);
  L91():
    goto L23();
  L94():
    st args = r90;
    lengths2 = ldf lengths;
    check L95() else D41();
  D41():
    deopt 136 [];
  L95():
    p20 = prom<V +>{
      other7 = ld other;
      other8 = force? other7;
      checkMissing(other8);
      return other8;
    };
    r92 = dyn lengths2(p20);
    check L96() else D42();
  D42():
    deopt 138 [r92];
  L96():
    st other_length = r92;
    sym16 = ldf all;
    base16 = ldf all in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L97() else L98();
  L24(r94):
    r102 = `!`(r94);
    c9 = `as.logical`(r102);
    if c9 then L102() else L25();
  L97():
    _in_1 = ldf `%in%`;
    check L99() else D43();
  L98():
    r93 = dyn base16(<lang `<-`(other_length_ok, `%in%`(other_length, c(1, max_length)))>);
    goto L24(r93);
  D43():
    deopt 143 [];
  L25():
    goto L26();
  L26():
    lapply3 = ldf lapply;
    check L106() else D48();
  L99():
    p21 = prom<V +>{
      other_length = ld other_length;
      other_length1 = force? other_length;
      checkMissing(other_length1);
      return other_length1;
    };
    p22 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L1() else L2();
    L0(r97):
      return r97;
    L1():
      max_length4 = ld max_length;
      max_length5 = force? max_length4;
      checkMissing(max_length5);
      c8 = ldf c in base;
      r98 = dyn c8(1, max_length5);
      goto L0(r98);
    L2():
      r96 = dyn base17(1, <sym max_length>);
      goto L0(r96);
    };
    r100 = dyn _in_1(p21, p22);
    check L100() else D44();
  L102():
    warning1 = ldf warning;
    check L103() else D46();
  D44():
    deopt 146 [r100];
  D46():
    deopt 152 [];
  D48():
    deopt 160 [];
  L100():
    st other_length_ok = r100;
    all1 = ldf all in base;
    r101 = dyn all1(r100);
    check L101() else D45();
  L103():
    p25 = prom<V +>{
      gettextf1 = ldf gettextf;
      p24 = prom<V +>{
        paste1 = ldf paste;
        p23 = prom<V +>{
          sym18 = ldf names;
          base18 = ldf names in base;
          guard18 = `==`.4(sym18, base18);
          if guard18 then L2() else L3();
        L0(r104):
          c10 = `is.object`(r104);
          if c10 then L4() else L5(r104);
        L2():
          other9 = ld other;
          other10 = force? other9;
          checkMissing(other10);
          names3 = ldf names in base;
          r105 = dyn names3(other10);
          goto L0(r105);
        L3():
          r103 = dyn base18(<sym other>);
          goto L0(r103);
        L1(dx3):
          return dx3;
        L4():
          dr2 = tryDispatchBuiltin.1("[", r104);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L6() else L5(dr2);
        L5(r107):
          other_length_ok = ld other_length_ok;
          other_length_ok1 = force? other_length_ok;
          checkMissing(other_length_ok1);
          r108 = `!`(other_length_ok1);
          __1 = ldf `[` in base;
          r109 = dyn __1(r107, r108);
          goto L1(r109);
        L6():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L1(dx2);
        };
        r111 = dyn paste1[, collapse](p23, ", ");
        return r111;
      };
      r113 = dyn gettextf1("Not all arguments are of the same length, the following need to be recycled: %s", p24);
      return r113;
    };
    r115 = dyn warning1[, domain](p25, NA_LGL);
    check L104() else D47();
  L106():
    p26 = prom<V +>{
      other11 = ld other;
      other12 = force? other11;
      checkMissing(other12);
      return other12;
    };
    p27 = prom<V +>{
      rep_len2 = ld rep_len;
      rep_len3 = force? rep_len2;
      checkMissing(rep_len3);
      return rep_len3;
    };
    p28 = prom<V +>{
      max_length6 = ld max_length;
      max_length7 = force? max_length6;
      checkMissing(max_length7);
      return max_length7;
    };
    r120 = dyn lapply3(p26, p27, p28);
    check L107() else D49();
  D45():
    deopt 149 [r101];
  D47():
    deopt 156 [r115];
  D49():
    deopt 164 [r120];
  L101():
    goto L24(r101);
  L104():
    goto L26();
  L107():
    st other = r120;
    r121 = clos inner23784425;
    st bibentry1 = r121;
    lapply4 = ldf lapply;
    check L108() else D50();
  D50():
    deopt 170 [];
  L108():
    p29 = prom<V +>{
      sym19 = ldf seq_along;
      base19 = ldf seq_along in base;
      guard19 = `==`.4(sym19, base19);
      if guard19 then L1() else L2();
    L0(r123):
      return r123;
    L1():
      args14 = ld args;
      args15 = force? args14;
      checkMissing(args15);
      c11 = `is.object`(args15);
      if c11 then L4() else L5(args15);
    L2():
      r122 = dyn base19(<lang `$`(args, bibtype)>);
      goto L0(r122);
    L3(dx5):
      r125 = seq_along(dx5);
      goto L0(r125);
    L4():
      dr4 = tryDispatchBuiltin.1("$", args15);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(args17):
      r124 = `$`(args17, <sym bibtype>);
      goto L3(r124);
    L6():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L3(dx4);
    };
    p30 = prom<V +>{
      r127 = clos inner3002224933;
      return r127;
    };
    r129 = dyn lapply4(p29, p30);
    check L109() else D51();
  D51():
    deopt 173 [r129];
  L109():
    st rval = r129;
    _bibentry1 = ldf `.bibentry`;
    check L110() else D52();
  D52():
    deopt 176 [];
  L110():
    p31 = prom<V +>{
      rval = ld rval;
      rval1 = force? rval;
      checkMissing(rval1);
      return rval1;
    };
    p32 = prom<V +>{
      mheader3 = ld mheader;
      mheader4 = force? mheader3;
      checkMissing(mheader4);
      return mheader4;
    };
    p33 = prom<V +>{
      mfooter3 = ld mfooter;
      mfooter4 = force? mfooter3;
      checkMissing(mfooter4);
      return mfooter4;
    };
    r133 = dyn _bibentry1(p31, p32, p33);
    check L111() else D53();
  D53():
    deopt 180 [r133];
  L111():
    popenv;
    return r133;
  }
}
fun inner23784425(bibtype, textVersion, header, footer, key, `...`, other) {
  (reg bibtype:*, reg textVersion:*, reg header:*, reg footer:*, reg key:*, reg ddd:dots, reg other:*) -+> V { var bibtype:*, var textVersion:*, var header:*, reg header_isMissing:L, reg header_orDefault:*, var footer:*, reg footer_isMissing:L, reg footer_orDefault:*, var key:*, reg key_isMissing:L, reg key_orDefault:*, var `...`:dots?, var other:*, reg other_isMissing:L, reg other_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg bibtype1:*, reg bibtype2:V, reg as_character:cls, reg r6:V, reg stopifnot:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg bibtype3:*, reg bibtype4:V, reg length:cls, reg r9:V, reg r10:V, reg p1:p(V +), reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg tolower:cls, reg bibtype5:*, reg bibtype6:V, reg p2:p(V +), reg r16:V, reg tolower1:cls, reg BibTeX_names:*, reg BibTeX_names1:V, reg p3:p(V +), reg r18:V, reg match:cls, reg r19:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r20:V, reg r21:V, reg pos:*, reg pos1:V, reg is_na:cls, reg r22:V, reg c:L, reg stop:cls, reg gettextf:cls, reg sQuote:cls, reg r23:V, reg p4:p(V +), reg paste:cls, reg BibTeX_names2:*, reg BibTeX_names3:V, reg p5:p(V +), reg r26:V, reg p6:p(V +), reg r28:V, reg p7:p(V +), reg r30:V, reg BibTeX_names4:*, reg BibTeX_names5:V, reg c1:L, reg BibTeX_names7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg pos2:*, reg pos3:V, reg __:cls, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg r34:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg list1:cls, reg ddd1:dots?, reg r37:V, reg other1:*, reg other2:V, reg c2:cls, reg r38:V, reg rval:*, reg rval1:V, reg c3:L, reg rval3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg vapply:cls, reg rval4:*, reg rval5:V, reg p8:p(V +), reg _is_not_nonempty_text:*, reg _is_not_nonempty_text1:V, reg p9:p(V +), reg r41:V, reg r42:V, reg __1:cls, reg r43:V, reg tolower2:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg rval6:*, reg rval7:V, reg names:cls, reg r46:V, reg p10:p(V +), reg r48:V, reg fields:*, reg fields1:V, reg l:*, reg names__:cls, reg r49:V, reg bibtype7:*, reg bibtype8:V, reg l1:*, reg attr__:cls, reg r50:V, reg _bibentry_check_bibentry1:cls, reg rval8:*, reg rval9:V, reg p11:p(V +), reg r52:V, reg _in_:cls, reg fields2:*, reg fields3:V, reg p12:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r54:V, reg r55:V, reg c4:cls, reg r56:V, reg p13:p(V +), reg r58:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r59:V, reg r60:V, reg pos4:*, reg pos5:V, reg any:cls, reg r61:V, reg c5:L, reg which:cls, reg pos6:*, reg pos7:V, reg p14:p(V +), reg r63:V, reg s:V, reg l2:I, reg i:I, reg i1:I, reg i2:I, reg c6:L, reg x:V, reg as_person:cls, reg rval10:*, reg rval11:V, reg c7:L, reg rval13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg __2:cls, reg r64:V, reg p15:p(V +), reg r66:V, reg l3:*, reg c8:L, reg i8:I, reg r68:V, reg l5:*, reg dr6:V, reg dc3:L, reg dx6:V, reg i10:I, reg dx7:V, reg i11:*, reg i12:V, reg ____:cls, reg r71:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r72:V, reg r73:V, reg pos8:*, reg pos9:V, reg r74:V, reg any1:cls, reg r75:V, reg c9:L, reg which1:cls, reg pos10:*, reg pos11:V, reg r76:V, reg p16:p(V +), reg r78:V, reg s1:V, reg l6:I, reg i14:I, reg i15:I, reg i16:I, reg c10:L, reg x1:V, reg trimws:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r79:V, reg r80:V, reg rval14:*, reg rval15:V, reg c11:L, reg rval17:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg i19:*, reg i20:V, reg __3:cls, reg r81:V, reg as_character1:cls, reg r82:V, reg p17:p(V +), reg r84:V, reg paste1:cls, reg s2:*, reg s3:V, reg c12:L, reg s5:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg s8:V, reg r86:V, reg s9:*, reg s10:V, reg is_na1:cls, reg r87:V, reg r88:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r91:V, reg s13:V, reg r92:V, reg r93:V, reg s14:*, reg s15:V, reg nzchar:cls, reg r94:V, reg r95:V, reg __4:cls, reg r96:V, reg p18:p(V +), reg r98:V, reg l7:*, reg c13:L, reg i22:I, reg r100:V, reg l9:*, reg dr12:V, reg dc6:L, reg dx12:V, reg i24:I, reg dx13:V, reg i25:*, reg i26:V, reg ____1:cls, reg r103:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r104:V, reg r105:V, reg key1:*, reg key2:V, reg c14:V, reg c15:L, reg r106:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r107:V, reg key3:*, reg key4:V, reg as_character2:cls, reg r108:V, reg l10:*, reg attr__1:cls, reg r109:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r110:V, reg r111:V, reg textVersion1:*, reg textVersion2:V, reg c16:V, reg r112:V, reg c17:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r113:V, reg r114:V, reg textVersion3:*, reg textVersion4:V, reg as_character3:cls, reg r115:V, reg l11:*, reg attr__2:cls, reg r116:V, reg _is_not_nonempty_text2:cls, reg header1:*, reg header2:V, reg p19:p(V +), reg r119:V, reg r120:V, reg c18:L, reg paste2:cls, reg header3:*, reg header4:V, reg p20:p(V +), reg r122:V, reg l12:*, reg attr__3:cls, reg r123:V, reg _is_not_nonempty_text3:cls, reg footer1:*, reg footer2:V, reg p21:p(V +), reg r126:V, reg r127:V, reg c19:L, reg paste3:cls, reg footer3:*, reg footer4:V, reg p22:p(V +), reg r129:V, reg l13:*, reg attr__4:cls, reg r130:V, reg rval18:*, reg rval19:V |
    mkenv;
    st bibtype = bibtype;
    st textVersion = textVersion;
    header_isMissing = missing.0(header);
    if header_isMissing then L0(NULL) else L0(header);
  L0(header_orDefault):
    st header = header_orDefault;
    footer_isMissing = missing.0(footer);
    if footer_isMissing then L1(NULL) else L1(footer);
  L1(footer_orDefault):
    st footer = footer_orDefault;
    key_isMissing = missing.0(key);
    if key_isMissing then L2(NULL) else L2(key);
  L2(key_orDefault):
    st key = key_orDefault;
    st `...` = ddd;
    other_isMissing = missing.0(other);
    if other_isMissing then L3() else L4(other);
  L3():
    p = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      list = ldf list in base;
      r2 = dyn list();
      goto L0(r2);
    L2():
      r = dyn base();
      goto L0(r);
    };
    goto L4(p);
  L4(other_orDefault):
    st other = other_orDefault;
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L5(r5):
    st bibtype = r5;
    stopifnot = ldf stopifnot;
    check L41() else D2();
  L37():
    bibtype1 = ld bibtype;
    check L39() else D0();
  L38():
    r4 = dyn base1(<sym bibtype>);
    goto L5(r4);
  D0():
    deopt 2 [bibtype1];
  D2():
    deopt 8 [];
  L39():
    bibtype2 = force? bibtype1;
    checkMissing(bibtype2);
    as_character = ldf `as.character` in base;
    r6 = dyn as_character(bibtype2);
    check L40() else D1();
  L41():
    p1 = prom<V +>{
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r8):
      r10 = `==`(r8, 1);
      return r10;
    L1():
      bibtype3 = ld bibtype;
      bibtype4 = force? bibtype3;
      checkMissing(bibtype4);
      length = ldf length in base;
      r9 = dyn length(bibtype4);
      goto L0(r9);
    L2():
      r7 = dyn base2(<sym bibtype>);
      goto L0(r7);
    };
    r12 = dyn stopifnot(p1);
    check L42() else D3();
  D1():
    deopt 5 [r6];
  D3():
    deopt 10 [r12];
  L40():
    goto L5(r6);
  L42():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L43() else L44();
  L6(r14):
    st pos = r14;
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L43():
    tolower = ldf tolower;
    check L45() else D4();
  L44():
    r13 = dyn base3(<lang tolower(bibtype)>, <lang tolower(BibTeX_names)>);
    goto L6(r13);
  D4():
    deopt 14 [];
  L7(r21):
    c = `as.logical`(r21);
    if c then L54() else L8();
  L45():
    p2 = prom<V +>{
      bibtype5 = ld bibtype;
      bibtype6 = force? bibtype5;
      checkMissing(bibtype6);
      return bibtype6;
    };
    r16 = dyn tolower(p2);
    check L46() else D5();
  L50():
    pos = ld pos;
    check L52() else D9();
  L51():
    r20 = dyn base4(<sym pos>);
    goto L7(r20);
  D5():
    deopt 16 [r16];
  D9():
    deopt 28 [pos];
  L8():
    goto L9();
  L9():
    BibTeX_names4 = ld BibTeX_names;
    check L58() else D13();
  L46():
    tolower1 = ldf tolower;
    check L47() else D6();
  L52():
    pos1 = force? pos;
    checkMissing(pos1);
    is_na = ldf `is.na` in base;
    r22 = dyn is_na(pos1);
    check L53() else D10();
  L54():
    stop = ldf stop;
    check L55() else D11();
  D6():
    deopt 18 [];
  D10():
    deopt 31 [r22];
  D11():
    deopt 33 [];
  D13():
    deopt 40 [BibTeX_names4];
  L47():
    p3 = prom<V +>{
      BibTeX_names = ld BibTeX_names;
      BibTeX_names1 = force? BibTeX_names;
      checkMissing(BibTeX_names1);
      return BibTeX_names1;
    };
    r18 = dyn tolower1(p3);
    check L48() else D7();
  L53():
    goto L7(r22);
  L55():
    p7 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        sQuote = ldf sQuote;
        r23 = dyn sQuote("bibtype");
        return r23;
      };
      p6 = prom<V +>{
        paste = ldf paste;
        p5 = prom<V +>{
          BibTeX_names2 = ld BibTeX_names;
          BibTeX_names3 = force? BibTeX_names2;
          checkMissing(BibTeX_names3);
          return BibTeX_names3;
        };
        r26 = dyn paste[, collapse](p5, ", ");
        return r26;
      };
      r28 = dyn gettextf("%s has to be one of %s", p4, p6);
      return r28;
    };
    r30 = dyn stop[, domain](p7, NA_LGL);
    check L56() else D12();
  L58():
    BibTeX_names5 = force? BibTeX_names4;
    checkMissing(BibTeX_names5);
    c1 = `is.object`(BibTeX_names5);
    if c1 then L59() else L60(BibTeX_names5);
  D7():
    deopt 20 [r18];
  D12():
    deopt 37 [r30];
  L10(dx1):
    st bibtype = dx1;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L63() else L64();
  L48():
    match = ldf match in base;
    r19 = dyn match(r16, r18, NA_INT, NULL);
    check L49() else D8();
  L56():
    goto L9();
  L59():
    dr = tryDispatchBuiltin.1("[", BibTeX_names5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L61() else L60(dr);
  L60(BibTeX_names7):
    pos2 = ld pos;
    check L62() else D14();
  D8():
    deopt 24 [r19];
  D14():
    deopt 42 [BibTeX_names7, pos2];
  L11(r34):
    st rval = r34;
    rval = ld rval;
    check L71() else D19();
  L49():
    goto L6(r19);
  L61():
    dx = getTryDispatchBuiltinValue(dr);
    goto L10(dx);
  L62():
    pos3 = force? pos2;
    __ = ldf `[` in base;
    r32 = dyn __(BibTeX_names7, pos3);
    goto L10(r32);
  L63():
    sym6 = ldf list;
    base6 = ldf list in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L65() else L66();
  L64():
    r33 = dyn base5(<lang list(...)>, <sym other>);
    goto L11(r33);
  D19():
    deopt 58 [rval];
  L12(r36):
    other1 = ld other;
    check L69() else D17();
  L65():
    list1 = ldf list;
    check L67() else D15();
  L66():
    r35 = dyn base6(<sym ...>);
    goto L12(r35);
  L71():
    rval1 = force? rval;
    checkMissing(rval1);
    c3 = `is.object`(rval1);
    if c3 then L72() else L73(rval1);
  D15():
    deopt 50 [];
  D17():
    deopt 53 [other1];
  L13(dx3):
    st rval = dx3;
    tolower2 = ldf tolower;
    check L77() else D22();
  L67():
    ddd1 = ld `...`;
    r37 = dyn list1[`...`](ddd1);
    check L68() else D16();
  L69():
    other2 = force? other1;
    checkMissing(other2);
    c2 = ldf c in base;
    r38 = dyn c2(r36, other2);
    check L70() else D18();
  L72():
    dr2 = tryDispatchBuiltin.1("[", rval1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L74() else L73(dr2);
  L73(rval3):
    vapply = ldf vapply;
    check L75() else D20();
  D16():
    deopt 52 [r37];
  D18():
    deopt 56 [r38];
  D20():
    deopt 61 [rval3];
  D22():
    deopt 70 [];
  L68():
    goto L12(r37);
  L70():
    goto L11(r38);
  L74():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L13(dx2);
  L75():
    p8 = prom<V +>{
      rval4 = ld rval;
      rval5 = force? rval4;
      checkMissing(rval5);
      return rval5;
    };
    p9 = prom<V +>{
      _is_not_nonempty_text = ld `.is_not_nonempty_text`;
      _is_not_nonempty_text1 = force? _is_not_nonempty_text;
      checkMissing(_is_not_nonempty_text1);
      return _is_not_nonempty_text1;
    };
    r41 = dyn vapply(p8, p9, NA_LGL);
    check L76() else D21();
  L77():
    p10 = prom<V +>{
      sym7 = ldf names;
      base7 = ldf names in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r45):
      return r45;
    L1():
      rval6 = ld rval;
      rval7 = force? rval6;
      checkMissing(rval7);
      names = ldf names in base;
      r46 = dyn names(rval7);
      goto L0(r46);
    L2():
      r44 = dyn base7(<sym rval>);
      goto L0(r44);
    };
    r48 = dyn tolower2(p10);
    check L78() else D23();
  D21():
    deopt 65 [rval3, r41];
  D23():
    deopt 72 [r48];
  L76():
    r42 = `!`(r41);
    __1 = ldf `[` in base;
    r43 = dyn __1(rval3, r42);
    goto L13(r43);
  L78():
    st fields = r48;
    fields = ld fields;
    check L79() else D24();
  D24():
    deopt 74 [fields];
  L79():
    fields1 = force? fields;
    checkMissing(fields1);
    l = ld rval;
    names__ = ldf `names<-`;
    check L80() else D25();
  D25():
    deopt 77 [fields1, l, fields1];
  L80():
    r49 = dyn names__(l, NULL, fields1);
    check L81() else D26();
  D26():
    deopt 79 [fields1, r49];
  L81():
    st rval = r49;
    bibtype7 = ld bibtype;
    check L82() else D27();
  D27():
    deopt 81 [bibtype7];
  L82():
    bibtype8 = force? bibtype7;
    checkMissing(bibtype8);
    l1 = ld rval;
    attr__ = ldf `attr<-`;
    check L83() else D28();
  D28():
    deopt 84 [bibtype8, l1, bibtype8];
  L83():
    r50 = dyn attr__(l1, NULL, "bibtype", bibtype8);
    check L84() else D29();
  D29():
    deopt 87 [bibtype8, r50];
  L84():
    st rval = r50;
    _bibentry_check_bibentry1 = ldf `.bibentry_check_bibentry1`;
    check L85() else D30();
  D30():
    deopt 90 [];
  L85():
    p11 = prom<V +>{
      rval8 = ld rval;
      rval9 = force? rval8;
      checkMissing(rval9);
      return rval9;
    };
    r52 = dyn _bibentry_check_bibentry1(p11);
    check L86() else D31();
  D31():
    deopt 92 [r52];
  L86():
    _in_ = ldf `%in%`;
    check L87() else D32();
  D32():
    deopt 94 [];
  L87():
    p12 = prom<V +>{
      fields2 = ld fields;
      fields3 = force? fields2;
      checkMissing(fields3);
      return fields3;
    };
    p13 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r55):
      return r55;
    L1():
      c4 = ldf c in base;
      r56 = dyn c4("author", "editor");
      goto L0(r56);
    L2():
      r54 = dyn base8("author", "editor");
      goto L0(r54);
    };
    r58 = dyn _in_(p12, p13);
    check L88() else D33();
  D33():
    deopt 97 [r58];
  L88():
    st pos = r58;
    sym9 = ldf any;
    base9 = ldf any in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L89() else L90();
  L14(r60):
    c5 = `as.logical`(r60);
    if c5 then L93() else L15();
  L89():
    pos4 = ld pos;
    check L91() else D34();
  L90():
    r59 = dyn base9(<sym pos>);
    goto L14(r59);
  D34():
    deopt 101 [pos4];
  L15():
    goto L19();
  L19():
    sym10 = ldf any;
    base10 = ldf any in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L104() else L105();
  L91():
    pos5 = force? pos4;
    checkMissing(pos5);
    any = ldf any in base;
    r61 = dyn any(pos5);
    check L92() else D35();
  L93():
    which = ldf which;
    check L94() else D36();
  D35():
    deopt 104 [r61];
  D36():
    deopt 106 [];
  L20(r73):
    c9 = `as.logical`(r73);
    if c9 then L108() else L21();
  L92():
    goto L14(r61);
  L94():
    p14 = prom<V +>{
      pos6 = ld pos;
      pos7 = force? pos6;
      checkMissing(pos7);
      return pos7;
    };
    r63 = dyn which(p14);
    check L95() else D37();
  L104():
    pos8 = ld pos;
    check L106() else D41();
  L105():
    r72 = dyn base10(<lang `!`(pos)>);
    goto L20(r72);
  D37():
    deopt 108 [r63];
  D41():
    deopt 125 [pos8];
  L21():
    goto L25();
  L25():
    sym14 = ldf `is.null`;
    base14 = ldf `is.null` in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L121() else L122();
  L95():
    s = toForSeq(r63);
    l2 = length(s);
    i = 0;
    goto L16(i);
  L106():
    pos9 = force? pos8;
    checkMissing(pos9);
    r74 = `!`(pos9);
    any1 = ldf any in base;
    r75 = dyn any1(r74);
    check L107() else D42();
  L108():
    which1 = ldf which;
    check L109() else D43();
  D42():
    deopt 129 [r75];
  D43():
    deopt 131 [];
  L16(i1):
    i2 = `+`.1(i1, 1);
    c6 = `<`.1(l2, i2);
    if c6 then L96() else L18();
  L26(r105):
    c15 = `as.logical`(r105);
    if c15 then L124() else L27();
  L107():
    goto L20(r75);
  L109():
    p16 = prom<V +>{
      pos10 = ld pos;
      pos11 = force? pos10;
      checkMissing(pos11);
      r76 = `!`(pos11);
      return r76;
    };
    r78 = dyn which1(p16);
    check L110() else D44();
  L121():
    key1 = ld key;
    check L123() else D50();
  L122():
    r104 = dyn base14(<sym key>);
    goto L26(r104);
  D44():
    deopt 133 [r78];
  D50():
    deopt 156 [key1];
  L18():
    x = `[[`(s, i2, NULL, TRUE);
    st i = x;
    as_person = ldf `as.person`;
    check L97() else D38();
  L27():
    sym15 = ldf `as.character`;
    base15 = ldf `as.character` in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L126() else L127();
  L28(r106):
    l10 = ld rval;
    attr__1 = ldf `attr<-`;
    check L130() else D53();
  L96():
    goto L19();
  L110():
    s1 = toForSeq(r78);
    l6 = length(s1);
    i14 = 0;
    goto L22(i14);
  L123():
    key2 = force? key1;
    checkMissing(key2);
    c14 = `==`(key2, NULL);
    goto L26(c14);
  L124():
    goto L28(NULL);
  D38():
    deopt 110 [i2];
  D53():
    deopt 168 [r106, l10, r106];
  L22(i15):
    i16 = `+`.1(i15, 1);
    c10 = `<`.1(l6, i16);
    if c10 then L111() else L24();
  L97():
    p15 = prom<V +>{
      rval10 = ld rval;
      rval11 = force? rval10;
      checkMissing(rval11);
      c7 = `is.object`(rval11);
      if c7 then L1() else L2(rval11);
    L0(dx5):
      return dx5;
    L1():
      dr4 = tryDispatchBuiltin.1("[[", rval11);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(rval13):
      i5 = ld i;
      i6 = force? i5;
      __2 = ldf `[[` in base;
      r64 = dyn __2(rval13, i6);
      goto L0(r64);
    L3():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    };
    r66 = dyn as_person(p15);
    check L98() else D39();
  L126():
    key3 = ld key;
    check L128() else D51();
  L127():
    r107 = dyn base15(<sym key>);
    goto L28(r107);
  L130():
    r109 = dyn attr__1(l10, NULL, "key", r106);
    check L131() else D54();
  D39():
    deopt 112 [i2, r66];
  D51():
    deopt 163 [key3];
  D54():
    deopt 171 [r106, r109];
  L24():
    x1 = `[[`(s1, i16, NULL, TRUE);
    st i = x1;
    trimws = ldf trimws;
    check L112() else D45();
  L98():
    l3 = ld rval;
    c8 = `is.object`(l3);
    if c8 then L99() else L100(i2, r66, l3);
  L111():
    goto L25();
  L128():
    key4 = force? key3;
    checkMissing(key4);
    as_character2 = ldf `as.character` in base;
    r108 = dyn as_character2(key4);
    check L129() else D52();
  L131():
    st rval = r109;
    sym16 = ldf `is.null`;
    base16 = ldf `is.null` in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L132() else L133();
  D45():
    deopt 135 [i16];
  D52():
    deopt 166 [r108];
  L17(i10, dx7):
    st rval = dx7;
    goto L16(i10);
  L29(r111):
    r112 = `!`(r111);
    c17 = `as.logical`(r112);
    if c17 then L135() else L30();
  L99():
    dr6 = tryDispatchBuiltin.0("[[<-", l3, r66);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L101() else L100(i2, r66, dr6);
  L100(i8, r68, l5):
    i11 = ld i;
    check L102() else D40();
  L112():
    p17 = prom<V +>{
      sym11 = ldf `as.character`;
      base11 = ldf `as.character` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L2() else L3();
    L0(r80):
      return r80;
    L2():
      rval14 = ld rval;
      rval15 = force? rval14;
      checkMissing(rval15);
      c11 = `is.object`(rval15);
      if c11 then L4() else L5(rval15);
    L3():
      r79 = dyn base11(<lang `[[`(rval, i)>);
      goto L0(r79);
    L1(dx9):
      as_character1 = ldf `as.character` in base;
      r82 = dyn as_character1(dx9);
      goto L0(r82);
    L4():
      dr8 = tryDispatchBuiltin.1("[[", rval15);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L6() else L5(dr8);
    L5(rval17):
      i19 = ld i;
      i20 = force? i19;
      __3 = ldf `[[` in base;
      r81 = dyn __3(rval17, i20);
      goto L1(r81);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L1(dx8);
    };
    r84 = dyn trimws(p17);
    check L113() else D46();
  L129():
    goto L28(r108);
  L132():
    textVersion1 = ld textVersion;
    check L134() else D55();
  L133():
    r110 = dyn base16(<sym textVersion>);
    goto L29(r110);
  D40():
    deopt 114 [i8, r68, l5, r66, i11];
  D46():
    deopt 137 [i16, r84];
  D55():
    deopt 174 [textVersion1];
  L30():
    goto L32();
  L32():
    _is_not_nonempty_text2 = ldf `.is_not_nonempty_text`;
    check L143() else D60();
  L101():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L17(i2, dx6);
  L102():
    i12 = force? i11;
    ____ = ldf `[[<-` in base;
    r71 = dyn ____(l5, r66, i12);
    goto L17(i8, r71);
  L113():
    st s = r84;
    paste1 = ldf paste;
    check L114() else D47();
  L134():
    textVersion2 = force? textVersion1;
    checkMissing(textVersion2);
    c16 = `==`(textVersion2, NULL);
    goto L29(c16);
  L135():
    sym17 = ldf `as.character`;
    base17 = ldf `as.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L136() else L137();
  D47():
    deopt 140 [i16];
  D60():
    deopt 193 [];
  L31(r114):
    l11 = ld rval;
    attr__2 = ldf `attr<-`;
    check L140() else D58();
  L114():
    p18 = prom<V +>{
      s2 = ld s;
      s3 = force? s2;
      checkMissing(s3);
      c12 = `is.object`(s3);
      if c12 then L3() else L4(s3);
    L0(dx11):
      return dx11;
    L3():
      dr10 = tryDispatchBuiltin.1("[", s3);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L5() else L4(dr10);
    L4(s5):
      sym12 = ldf `is.na`;
      base12 = ldf `is.na` in base;
      guard12 = `==`.4(sym12, base12);
      if guard12 then L6() else L7();
    L1(s8, r86):
      r88 = `!`(r86);
      sym13 = ldf nzchar;
      base13 = ldf nzchar in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L8() else L9();
    L5():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    L6():
      s9 = ld s;
      s10 = force? s9;
      checkMissing(s10);
      is_na1 = ldf `is.na` in base;
      r87 = dyn is_na1(s10);
      goto L1(s5, r87);
    L7():
      r85 = dyn base12(<sym s>);
      goto L1(s5, r85);
    L2(s13, r92, r93):
      r95 = `&&`(r92, r93);
      __4 = ldf `[` in base;
      r96 = dyn __4(s13, r95);
      goto L0(r96);
    L8():
      s14 = ld s;
      s15 = force? s14;
      checkMissing(s15);
      nzchar = ldf nzchar in base;
      r94 = dyn nzchar(s15);
      goto L2(s8, r88, r94);
    L9():
      r91 = dyn base13(<sym s>);
      goto L2(s8, r88, r91);
    };
    r98 = dyn paste1[, collapse](p18, " ");
    check L115() else D48();
  L136():
    textVersion3 = ld textVersion;
    check L138() else D56();
  L137():
    r113 = dyn base17(<sym textVersion>);
    goto L31(r113);
  L143():
    p19 = prom<V +>{
      header1 = ld header;
      header2 = force? header1;
      checkMissing(header2);
      return header2;
    };
    r119 = dyn _is_not_nonempty_text2(p19);
    check L144() else D61();
  D48():
    deopt 144 [i16, r98];
  D56():
    deopt 180 [textVersion3];
  D58():
    deopt 185 [r114, l11, r114];
  D61():
    deopt 195 [r119];
  L115():
    l7 = ld rval;
    c13 = `is.object`(l7);
    if c13 then L116() else L117(i16, r98, l7);
  L138():
    textVersion4 = force? textVersion3;
    checkMissing(textVersion4);
    as_character3 = ldf `as.character` in base;
    r115 = dyn as_character3(textVersion4);
    check L139() else D57();
  L140():
    r116 = dyn attr__2(l11, NULL, "textVersion", r114);
    check L141() else D59();
  L144():
    r120 = `!`(r119);
    c18 = `as.logical`(r120);
    if c18 then L145() else L33();
  D57():
    deopt 183 [r115];
  D59():
    deopt 188 [r114, r116];
  L23(i24, dx13):
    st rval = dx13;
    goto L22(i24);
  L33():
    goto L34();
  L34():
    _is_not_nonempty_text3 = ldf `.is_not_nonempty_text`;
    check L151() else D66();
  L116():
    dr12 = tryDispatchBuiltin.0("[[<-", l7, r98);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L118() else L117(i16, r98, dr12);
  L117(i22, r100, l9):
    i25 = ld i;
    check L119() else D49();
  L139():
    goto L31(r115);
  L141():
    st rval = r116;
    goto L32();
  L145():
    paste2 = ldf paste;
    check L146() else D62();
  D49():
    deopt 146 [i22, r100, l9, r98, i25];
  D62():
    deopt 198 [];
  D66():
    deopt 212 [];
  L118():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L23(i16, dx12);
  L119():
    i26 = force? i25;
    ____1 = ldf `[[<-` in base;
    r103 = dyn ____1(l9, r98, i26);
    goto L23(i22, r103);
  L146():
    p20 = prom<V +>{
      header3 = ld header;
      header4 = force? header3;
      checkMissing(header4);
      return header4;
    };
    r122 = dyn paste2[, collapse](p20, "\n");
    check L147() else D63();
  L151():
    p21 = prom<V +>{
      footer1 = ld footer;
      footer2 = force? footer1;
      checkMissing(footer2);
      return footer2;
    };
    r126 = dyn _is_not_nonempty_text3(p21);
    check L152() else D67();
  D63():
    deopt 202 [r122];
  D67():
    deopt 214 [r126];
  L147():
    l12 = ld rval;
    attr__3 = ldf `attr<-`;
    check L148() else D64();
  L152():
    r127 = `!`(r126);
    c19 = `as.logical`(r127);
    if c19 then L153() else L35();
  D64():
    deopt 204 [r122, l12, r122];
  L35():
    goto L36();
  L36():
    rval18 = ld rval;
    check L159() else D72();
  L148():
    r123 = dyn attr__3(l12, NULL, "header", r122);
    check L149() else D65();
  L153():
    paste3 = ldf paste;
    check L154() else D68();
  D65():
    deopt 207 [r122, r123];
  D68():
    deopt 217 [];
  D72():
    deopt 230 [rval18];
  L149():
    st rval = r123;
    goto L34();
  L154():
    p22 = prom<V +>{
      footer3 = ld footer;
      footer4 = force? footer3;
      checkMissing(footer4);
      return footer4;
    };
    r129 = dyn paste3[, collapse](p22, "\n");
    check L155() else D69();
  L159():
    rval19 = force? rval18;
    checkMissing(rval19);
    popenv;
    return rval19;
  D69():
    deopt 221 [r129];
  L155():
    l13 = ld rval;
    attr__4 = ldf `attr<-`;
    check L156() else D70();
  D70():
    deopt 223 [r129, l13, r129];
  L156():
    r130 = dyn attr__4(l13, NULL, "footer", r129);
    check L157() else D71();
  D71():
    deopt 226 [r129, r130];
  L157():
    st rval = r130;
    goto L36();
  }
}
fun inner3002224933(i) {
  (reg i:*) -+> V { var i:*, reg do_call:cls, reg bibentry1:*, reg bibentry2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg lapply:cls, reg args:*, reg args1:V, reg p1:p(V +), reg __:*, reg __1:V, reg p2:p(V +), reg i1:*, reg i2:V, reg p3:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg lapply1:cls, reg other:*, reg other1:V, reg p4:p(V +), reg __2:*, reg __3:V, reg p5:p(V +), reg i3:*, reg i4:V, reg p6:p(V +), reg r12:V, reg list:cls, reg r13:V, reg c:cls, reg r14:V, reg p7:p(V +), reg r16:V |
    mkenv;
    st i = i;
    do_call = ldf `do.call`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      bibentry1 = ld bibentry1;
      bibentry2 = force? bibentry1;
      checkMissing(bibentry2);
      return bibentry2;
    };
    p7 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L2() else L3();
    L0(r2):
      return r2;
    L2():
      lapply = ldf lapply;
      p1 = prom<V +>{
        args = ld args;
        args1 = force? args;
        checkMissing(args1);
        return args1;
      };
      p2 = prom<V +>{
        __ = ld `[[`;
        __1 = force? __;
        checkMissing(__1);
        return __1;
      };
      p3 = prom<V +>{
        i1 = ld i;
        i2 = force? i1;
        checkMissing(i2);
        return i2;
      };
      r6 = dyn lapply(p1, p2, p3);
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L4() else L5();
    L3():
      r1 = dyn base(<lang lapply(args, `[[`, i)>, <lang list(other=lapply(other, `[[`, i))>);
      goto L0(r1);
    L1(r8):
      c = ldf c in base;
      r14 = dyn c(r6, r8);
      goto L0(r14);
    L4():
      lapply1 = ldf lapply;
      p4 = prom<V +>{
        other = ld other;
        other1 = force? other;
        checkMissing(other1);
        return other1;
      };
      p5 = prom<V +>{
        __2 = ld `[[`;
        __3 = force? __2;
        checkMissing(__3);
        return __3;
      };
      p6 = prom<V +>{
        i3 = ld i;
        i4 = force? i3;
        checkMissing(i4);
        return i4;
      };
      r12 = dyn lapply1(p4, p5, p6);
      list = ldf list in base;
      r13 = dyn list(r12);
      goto L1(r13);
    L5():
      r7 = dyn base1[other](<lang lapply(other, `[[`, i)>);
      goto L1(r7);
    };
    r16 = dyn do_call(p, p7);
    check L1() else D1();
  D1():
    deopt 4 [r16];
  L1():
    popenv;
    return r16;
  }
}