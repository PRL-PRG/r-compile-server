fun main() {
  () -+> V { reg r:cls, reg bibentry:cls, reg person:cls, reg r1:V, reg p:p(V +), reg r3:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg bibentry1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg person1:cls, reg r8:V, reg person2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg c:cls, reg r11:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg c1:cls, reg r15:V, reg p2:p(V +), reg r17:V, reg c2:cls, reg r18:V, reg p3:p(V +), reg r20:V, reg bibentry2:cls, reg as_person:cls, reg r21:V, reg p4:p(V +), reg r23:V, reg c3:cls, reg r24:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg rref:*, reg rref1:V, reg bref:*, reg bref1:V, reg c4:cls, reg r27:V, reg cite:cls, reg refs:*, reg refs1:V, reg p5:p(V +), reg r29:V, reg __:cls, reg r30:V, reg r31:cls, reg r32:V, reg __1:cls, reg r33:V, reg r34:cls, reg r35:cls, reg p6:p(V +), reg r37:cls, reg p7:p(V +), reg r39:V, reg cite1:cls, reg refs2:*, reg refs3:V, reg p8:p(V +), reg r41:V, reg refs4:*, reg refs5:V, reg __2:cls, reg r42:V, reg r43:cls, reg savestyle:*, reg savestyle1:V, reg p9:p(V +), reg r45:V |
    mkenv;
    r = clos inner2771783719;
    st cite = r;
    bibentry = ldf bibentry;
    check L2() else D0();
  D0():
    deopt 4 [];
  L2():
    p = prom<V +>{
      person = ldf person;
      r1 = dyn person("R Core Team");
      return r1;
    };
    r3 = dyn bibentry[bibtype, title, author, organization, address, year, url, key]("Manual", "R: A Language and Environment for Statistical Computing", p, "R Foundation for Statistical Computing", "Vienna, Austria", 2013.0, "https://www.R-project.org/", "R");
    check L3() else D1();
  D1():
    deopt 21 [r3];
  L3():
    st rref = r3;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0(r5):
    st bref = r5;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L11() else L12();
  L4():
    bibentry1 = ldf bibentry;
    check L6() else D2();
  L5():
    r4 = dyn base(<lang bibentry(bibtype="Manual", title="boot: Bootstrap R (S-PLUS) Functions", author=c(person("Angelo", "Canty", role="aut", comment="S original"), person(c("Brian", "D."), "Ripley", role=c("aut", "trl", "cre"), comment="R port, author of parallel support", email="ripley@stats.ox.ac.uk")), year="2012", note="R package version 1.3-4", url="https://CRAN.R-project.org/package=boot", key="boot-package")>, <lang bibentry(bibtype="Book", title="Bootstrap Methods and Their Applications", author=as.person("Anthony C. Davison [aut], David V. Hinkley [aut]"), year="1997", publisher="Cambridge University Press", address="Cambridge", isbn="0-521-57391-2", url="http://statwww.epfl.ch/davison/BMA/", key="boot-book")>);
    goto L0(r4);
  D2():
    deopt 26 [];
  L1(r26):
    st refs = r26;
    cite = ldf cite;
    check L16() else D10();
  L6():
    p3 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r7):
      return r7;
    L1():
      person1 = ldf person;
      r8 = dyn person1[, , role, comment]("Angelo", "Canty", "aut", "S original");
      person2 = ldf person;
      p1 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r10):
        return r10;
      L1():
        c = ldf c in base;
        r11 = dyn c("Brian", "D.");
        goto L0(r11);
      L2():
        r9 = dyn base2("Brian", "D.");
        goto L0(r9);
      };
      p2 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        c1 = ldf c in base;
        r15 = dyn c1("aut", "trl", "cre");
        goto L0(r15);
      L2():
        r13 = dyn base3("aut", "trl", "cre");
        goto L0(r13);
      };
      r17 = dyn person2[, , role, comment, email](p1, "Ripley", p2, "R port, author of parallel support", "ripley@stats.ox.ac.uk");
      c2 = ldf c in base;
      r18 = dyn c2(r8, r17);
      goto L0(r18);
    L2():
      r6 = dyn base1(<lang person("Angelo", "Canty", role="aut", comment="S original")>, <lang person(c("Brian", "D."), "Ripley", role=c("aut", "trl", "cre"), comment="R port, author of parallel support", email="ripley@stats.ox.ac.uk")>);
      goto L0(r6);
    };
    r20 = dyn bibentry1[bibtype, title, author, year, note, url, key]("Manual", "boot: Bootstrap R (S-PLUS) Functions", p3, "2012", "R package version 1.3-4", "https://CRAN.R-project.org/package=boot", "boot-package");
    check L7() else D3();
  L11():
    rref = ld rref;
    check L13() else D7();
  L12():
    r25 = dyn base4(<sym rref>, <sym bref>);
    goto L1(r25);
  D3():
    deopt 41 [r20];
  D7():
    deopt 68 [rref];
  D10():
    deopt 76 [];
  L7():
    bibentry2 = ldf bibentry;
    check L8() else D4();
  L13():
    rref1 = force? rref;
    checkMissing(rref1);
    bref = ld bref;
    check L14() else D8();
  L16():
    p5 = prom<V +>{
      refs = ld refs;
      refs1 = force? refs;
      checkMissing(refs1);
      return refs1;
    };
    r29 = dyn cite("R, boot-package", p5);
    check L17() else D11();
  D4():
    deopt 43 [];
  D8():
    deopt 70 [bref];
  D11():
    deopt 79 [r29];
  L8():
    p4 = prom<V +>{
      as_person = ldf `as.person`;
      r21 = dyn as_person("Anthony C. Davison [aut], David V. Hinkley [aut]");
      return r21;
    };
    r23 = dyn bibentry2[bibtype, title, author, year, publisher, address, isbn, url, key]("Book", "Bootstrap Methods and Their Applications", p4, "1997", "Cambridge University Press", "Cambridge", "0-521-57391-2", "http://statwww.epfl.ch/davison/BMA/", "boot-book");
    check L9() else D5();
  L14():
    bref1 = force? bref;
    checkMissing(bref1);
    c4 = ldf c in base;
    r27 = dyn c4(rref1, bref1);
    check L15() else D9();
  L17():
    __ = ldf `::`;
    check L18() else D12();
  D5():
    deopt 62 [r23];
  D9():
    deopt 73 [r27];
  D12():
    deopt 81 [];
  L9():
    c3 = ldf c in base;
    r24 = dyn c3(r20, r23);
    check L10() else D6();
  L15():
    goto L1(r27);
  L18():
    r30 = dyn __("tools", "getBibstyle");
    check L19() else D13();
  D6():
    deopt 64 [r24];
  D13():
    deopt 84 [r30];
  L10():
    goto L0(r24);
  L19():
    checkFun.0(r30);
    r31 = r30 as cls;
    r32 = dyn r31();
    check L20() else D14();
  D14():
    deopt 86 [r32];
  L20():
    st savestyle = r32;
    __1 = ldf `::`;
    check L21() else D15();
  D15():
    deopt 89 [];
  L21():
    r33 = dyn __1("tools", "bibstyle");
    check L22() else D16();
  D16():
    deopt 92 [r33];
  L22():
    checkFun.0(r33);
    r34 = r33 as cls;
    p6 = prom<V +>{
      r35 = clos inner1346946568;
      return r35;
    };
    p7 = prom<V +>{
      r37 = clos inner966629742;
      return r37;
    };
    r39 = dyn r34[, `.init`, fmtPrefix, cite]("JSSnumbered", TRUE, p6, p7);
    check L23() else D17();
  D17():
    deopt 101 [r39];
  L23():
    cite1 = ldf cite;
    check L24() else D18();
  D18():
    deopt 103 [];
  L24():
    p8 = prom<V +>{
      refs2 = ld refs;
      refs3 = force? refs2;
      checkMissing(refs3);
      return refs3;
    };
    r41 = dyn cite1[, , textual]("R, boot-package", p8, TRUE);
    check L25() else D19();
  D19():
    deopt 108 [r41];
  L25():
    refs4 = ld refs;
    check L26() else D20();
  D20():
    deopt 109 [refs4];
  L26():
    refs5 = force? refs4;
    checkMissing(refs5);
    __2 = ldf `::`;
    check L27() else D21();
  D21():
    deopt 112 [];
  L27():
    r42 = dyn __2("tools", "bibstyle");
    check L28() else D22();
  D22():
    deopt 115 [r42];
  L28():
    checkFun.0(r42);
    r43 = r42 as cls;
    p9 = prom<V +>{
      savestyle = ld savestyle;
      savestyle1 = force? savestyle;
      checkMissing(savestyle1);
      return savestyle1;
    };
    r45 = dyn r43[, `.default`](p9, TRUE);
    check L29() else D23();
  D23():
    deopt 120 [r45];
  L29():
    popenv;
    return r45;
  }
}
fun inner2771783719(keys, bib, `...`) {
  (reg keys:*, reg bib:*, reg ddd:dots) -+> V { var keys:*, var bib:*, var `...`:dots?, reg __:cls, reg r:V, reg r1:cls, reg r2:V, reg c:L, reg r4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg fn:*, reg fn1:V, reg c1:V, reg c2:L, reg citeNatbib:*, reg citeNatbib1:V, reg fn2:cls, reg keys1:*, reg keys2:V, reg p:p(V +), reg bib1:*, reg bib2:V, reg p1:p(V +), reg ddd1:dots?, reg r10:V |
    mkenv;
    st keys = keys;
    st bib = bib;
    st `...` = ddd;
    __ = ldf `::`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn __("tools", "bibstyle");
    check L4() else D1();
  D1():
    deopt 4 [r];
  L4():
    checkFun.0(r);
    r1 = r as cls;
    r2 = dyn r1();
    check L5() else D2();
  D2():
    deopt 6 [r2];
  L5():
    c = `is.object`(r2);
    if c then L7() else L8(r2);
  L6(dx1):
    st fn = dx1;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L7():
    dr = tryDispatchBuiltin.1("$", r2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L9() else L8(dr);
  L8(r4):
    r5 = `$`(r4, <sym cite>);
    goto L6(r5);
  L0(r7):
    c2 = `as.logical`(r7);
    if c2 then L13() else L1();
  L9():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L10():
    fn = ld fn;
    check L12() else D3();
  L11():
    r6 = dyn base(<sym fn>);
    goto L0(r6);
  D3():
    deopt 10 [fn];
  L1():
    goto L2();
  L2():
    fn2 = ldf fn;
    check L16() else D5();
  L12():
    fn1 = force? fn;
    checkMissing(fn1);
    c1 = `==`(fn1, NULL);
    goto L0(c1);
  L13():
    citeNatbib = ld citeNatbib;
    check L14() else D4();
  D4():
    deopt 13 [citeNatbib];
  D5():
    deopt 19 [];
  L14():
    citeNatbib1 = force? citeNatbib;
    checkMissing(citeNatbib1);
    st fn = citeNatbib1;
    goto L2();
  L16():
    p = prom<V +>{
      keys1 = ld keys;
      keys2 = force? keys1;
      checkMissing(keys2);
      return keys2;
    };
    p1 = prom<V +>{
      bib1 = ld bib;
      bib2 = force? bib1;
      checkMissing(bib2);
      return bib2;
    };
    ddd1 = ld `...`;
    r10 = dyn fn2[, , `...`](p, p1, ddd1);
    check L17() else D6();
  D6():
    deopt 23 [r10];
  L17():
    popenv;
    return r10;
  }
}
fun inner1346946568(paper) {
  (reg paper:*) -+> V { var paper:*, reg paste0:cls, reg paper1:*, reg paper2:V, reg c:L, reg paper4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st paper = paper;
    paste0 = ldf paste0;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      paper1 = ld paper;
      paper2 = force? paper1;
      checkMissing(paper2);
      c = `is.object`(paper2);
      if c then L1() else L2(paper2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", paper2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(paper4):
      r = `$`(paper4, <sym .index>);
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn paste0("[", p, "]");
    check L1() else D1();
  D1():
    deopt 5 [r2];
  L1():
    popenv;
    return r2;
  }
}
fun inner966629742(key, bib, `...`) {
  (reg key:*, reg bib:*, reg ddd:dots) -+> V { var key:*, var bib:*, var `...`:dots?, reg citeNatbib:cls, reg key1:*, reg key2:V, reg p:p(V +), reg bib1:*, reg bib2:V, reg p1:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg c:cls, reg r4:V, reg p2:p(V +), reg ddd1:dots?, reg r6:V |
    mkenv;
    st key = key;
    st bib = bib;
    st `...` = ddd;
    citeNatbib = ldf citeNatbib;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      key1 = ld key;
      key2 = force? key1;
      checkMissing(key2);
      return key2;
    };
    p1 = prom<V +>{
      bib1 = ld bib;
      bib2 = force? bib1;
      checkMissing(bib2);
      return bib2;
    };
    p2 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      c = ldf c in base;
      r4 = dyn c("[", "]", ";", "n", "", ",");
      goto L0(r4);
    L2():
      r2 = dyn base("[", "]", ";", "n", "", ",");
      goto L0(r2);
    };
    ddd1 = ld `...`;
    r6 = dyn citeNatbib[, , mode, bibpunct, `...`](p, p1, "numbers", p2, ddd1);
    check L1() else D1();
  D1():
    deopt 9 [r6];
  L1():
    popenv;
    return r6;
  }
}