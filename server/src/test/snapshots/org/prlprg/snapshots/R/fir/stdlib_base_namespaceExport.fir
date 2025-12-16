fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-556533242`;
    st namespaceExport = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-556533242`(ns, vars) {
  (reg ns:*, reg vars:*) -+> V { var ns:*, var vars:*, reg r:cls, reg namespaceIsSealed:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r2:V, reg c:L, reg stop:cls, reg r3:V, reg asNamespace:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r6:V, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg vars1:*, reg vars2:V, reg length:cls, reg r9:V, reg c1:L, reg r10:cls, reg r11:cls, reg makeImportExportNames:cls, reg unique:cls, reg vars3:*, reg vars4:V, reg p2:p(V +), reg r13:V, reg p3:p(V +), reg r15:V, reg new:*, reg new1:V, reg c2:L, reg new3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg _in_:cls, reg new4:*, reg new5:V, reg p4:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg ns5:*, reg ns6:V, reg names:cls, reg r19:V, reg p5:p(V +), reg r21:V, reg r22:V, reg __:cls, reg r23:V, reg undef:*, reg undef1:V, reg c3:L, reg undef3:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg vapply:cls, reg undef4:*, reg undef5:V, reg p6:p(V +), reg exists:*, reg exists1:V, reg p7:p(V +), reg ns7:*, reg ns8:V, reg p8:p(V +), reg r27:V, reg r28:V, reg __1:cls, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg undef6:*, reg undef7:V, reg length1:cls, reg r32:V, reg c4:L, reg do_call:cls, reg as_list:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg undef8:*, reg undef9:V, reg c5:cls, reg r35:V, reg p9:p(V +), reg r37:V, reg p10:p(V +), reg r39:V, reg gsub:cls, reg undef10:*, reg undef11:V, reg p11:p(V +), reg r41:V, reg stop1:cls, reg gettextf:cls, reg undef12:*, reg undef13:V, reg p12:p(V +), reg r43:V, reg p13:p(V +), reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r47:V, reg r48:V, reg _isMethodsDispatchOn:cls, reg r49:V, reg c6:L, reg _mergeExportMethods:cls, reg new6:*, reg new7:V, reg p14:p(V +), reg ns9:*, reg ns10:V, reg p15:p(V +), reg r52:V, reg addExports:cls, reg ns11:*, reg ns12:V, reg p16:p(V +), reg new8:*, reg new9:V, reg p17:p(V +), reg r56:V |
    mkenv;
    st ns = ns;
    st vars = vars;
    r = clos inner162799014;
    st namespaceIsSealed = r;
    namespaceIsSealed = ldf namespaceIsSealed;
    check L12() else D0();
  D0():
    deopt 4 [];
  L12():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r2 = dyn namespaceIsSealed(p);
    check L13() else D1();
  D1():
    deopt 6 [r2];
  L13():
    c = `as.logical`(r2);
    if c then L14() else L0();
  L0():
    goto L1();
  L1():
    asNamespace = ldf asNamespace;
    check L18() else D4();
  L14():
    stop = ldf stop;
    check L15() else D2();
  D2():
    deopt 8 [];
  D4():
    deopt 14 [];
  L15():
    r3 = dyn stop("cannot add to exports of a sealed namespace");
    check L16() else D3();
  L18():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r6 = dyn asNamespace[, `base.OK`](p1, FALSE);
    check L19() else D5();
  D3():
    deopt 10 [r3];
  D5():
    deopt 18 [r6];
  L16():
    goto L1();
  L19():
    st ns = r6;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L2(r8):
    c1 = `as.logical`(r8);
    if c1 then L24() else L3();
  L20():
    vars1 = ld vars;
    check L22() else D6();
  L21():
    r7 = dyn base(<sym vars>);
    goto L2(r7);
  D6():
    deopt 22 [vars1];
  L3():
    invisible.0();
    popenv;
    return NULL;
  L22():
    vars2 = force? vars1;
    checkMissing(vars2);
    length = ldf length in base;
    r9 = dyn length(vars2);
    check L23() else D7();
  L24():
    r10 = clos inner1205378756;
    st addExports = r10;
    r11 = clos inner1392743580;
    st makeImportExportNames = r11;
    makeImportExportNames = ldf makeImportExportNames;
    check L25() else D8();
  D7():
    deopt 25 [r9];
  D8():
    deopt 33 [];
  L23():
    goto L2(r9);
  L25():
    p3 = prom<V +>{
      unique = ldf unique;
      p2 = prom<V +>{
        vars3 = ld vars;
        vars4 = force? vars3;
        checkMissing(vars4);
        return vars4;
      };
      r13 = dyn unique(p2);
      return r13;
    };
    r15 = dyn makeImportExportNames(p3);
    check L26() else D9();
  D9():
    deopt 35 [r15];
  L26():
    st new = r15;
    new = ld new;
    check L27() else D10();
  D10():
    deopt 37 [new];
  L27():
    new1 = force? new;
    checkMissing(new1);
    c2 = `is.object`(new1);
    if c2 then L28() else L29(new1);
  L4(dx1):
    st undef = dx1;
    undef = ld undef;
    check L33() else D13();
  L28():
    dr = tryDispatchBuiltin.1("[", new1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L30() else L29(dr);
  L29(new3):
    _in_ = ldf `%in%`;
    check L31() else D11();
  D11():
    deopt 40 [new3];
  D13():
    deopt 47 [undef];
  L30():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L31():
    p4 = prom<V +>{
      new4 = ld new;
      new5 = force? new4;
      checkMissing(new5);
      return new5;
    };
    p5 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r18):
      return r18;
    L1():
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      names = ldf names in base;
      r19 = dyn names(ns6);
      goto L0(r19);
    L2():
      r17 = dyn base1(<sym ns>);
      goto L0(r17);
    };
    r21 = dyn _in_(p4, p5);
    check L32() else D12();
  L33():
    undef1 = force? undef;
    checkMissing(undef1);
    c3 = `is.object`(undef1);
    if c3 then L34() else L35(undef1);
  D12():
    deopt 43 [new3, r21];
  L5(dx3):
    st undef = dx3;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L39() else L40();
  L32():
    r22 = `!`(r21);
    __ = ldf `[` in base;
    r23 = dyn __(new3, r22);
    goto L4(r23);
  L34():
    dr2 = tryDispatchBuiltin.1("[", undef1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(dr2);
  L35(undef3):
    vapply = ldf vapply;
    check L37() else D14();
  D14():
    deopt 50 [undef3];
  L6(r31):
    c4 = `as.logical`(r31);
    if c4 then L43() else L7();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L5(dx2);
  L37():
    p6 = prom<V +>{
      undef4 = ld undef;
      undef5 = force? undef4;
      checkMissing(undef5);
      return undef5;
    };
    p7 = prom<V +>{
      exists = ld exists;
      exists1 = force? exists;
      checkMissing(exists1);
      return exists1;
    };
    p8 = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    r27 = dyn vapply[, , , envir](p6, p7, NA_LGL, p8);
    check L38() else D15();
  L39():
    undef6 = ld undef;
    check L41() else D16();
  L40():
    r30 = dyn base2(<sym undef>);
    goto L6(r30);
  D15():
    deopt 56 [undef3, r27];
  D16():
    deopt 62 [undef6];
  L7():
    goto L8();
  L8():
    sym4 = ldf `.isMethodsDispatchOn`;
    base4 = ldf `.isMethodsDispatchOn` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L51() else L52();
  L38():
    r28 = `!`(r27);
    __1 = ldf `[` in base;
    r29 = dyn __1(undef3, r28);
    goto L5(r29);
  L41():
    undef7 = force? undef6;
    checkMissing(undef7);
    length1 = ldf length in base;
    r32 = dyn length1(undef7);
    check L42() else D17();
  L43():
    do_call = ldf `do.call`;
    check L44() else D18();
  D17():
    deopt 65 [r32];
  D18():
    deopt 67 [];
  L9(r48):
    c6 = `as.logical`(r48);
    if c6 then L54() else L10();
  L42():
    goto L6(r32);
  L44():
    p10 = prom<V +>{
      as_list = ldf `as.list`;
      p9 = prom<V +>{
        sym3 = ldf c;
        base3 = ldf c in base;
        guard3 = `==`.4(sym3, base3);
        if guard3 then L1() else L2();
      L0(r34):
        return r34;
      L1():
        undef8 = ld undef;
        undef9 = force? undef8;
        checkMissing(undef9);
        c5 = ldf c in base;
        r35 = dyn c5(undef9, ", ");
        goto L0(r35);
      L2():
        r33 = dyn base3[, sep](<sym undef>, ", ");
        goto L0(r33);
      };
      r37 = dyn as_list(p9);
      return r37;
    };
    r39 = dyn do_call("paste", p10);
    check L45() else D19();
  L51():
    _isMethodsDispatchOn = ldf `.isMethodsDispatchOn` in base;
    r49 = dyn _isMethodsDispatchOn();
    check L53() else D24();
  L52():
    r47 = dyn base4();
    goto L9(r47);
  D19():
    deopt 70 [r39];
  D24():
    deopt 90 [r49];
  L10():
    goto L11();
  L11():
    addExports = ldf addExports;
    check L58() else D27();
  L45():
    st undef = r39;
    gsub = ldf gsub;
    check L46() else D20();
  L53():
    goto L9(r49);
  L54():
    _mergeExportMethods = ldf `.mergeExportMethods`;
    check L55() else D25();
  D20():
    deopt 73 [];
  D25():
    deopt 92 [];
  D27():
    deopt 99 [];
  L46():
    p11 = prom<V +>{
      undef10 = ld undef;
      undef11 = force? undef10;
      checkMissing(undef11);
      return undef11;
    };
    r41 = dyn gsub("^\\.__C__", "class ", p11);
    check L47() else D21();
  L55():
    p14 = prom<V +>{
      new6 = ld new;
      new7 = force? new6;
      checkMissing(new7);
      return new7;
    };
    p15 = prom<V +>{
      ns9 = ld ns;
      ns10 = force? ns9;
      checkMissing(ns10);
      return ns10;
    };
    r52 = dyn _mergeExportMethods(p14, p15);
    check L56() else D26();
  L58():
    p16 = prom<V +>{
      ns11 = ld ns;
      ns12 = force? ns11;
      checkMissing(ns12);
      return ns12;
    };
    p17 = prom<V +>{
      new8 = ld new;
      new9 = force? new8;
      checkMissing(new9);
      return new9;
    };
    r56 = dyn addExports(p16, p17);
    check L59() else D28();
  D21():
    deopt 77 [r41];
  D26():
    deopt 95 [r52];
  D28():
    deopt 102 [r56];
  L47():
    st undef = r41;
    stop1 = ldf stop;
    check L48() else D22();
  L56():
    goto L11();
  L59():
    popenv;
    return r56;
  D22():
    deopt 80 [];
  L48():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        undef12 = ld undef;
        undef13 = force? undef12;
        checkMissing(undef13);
        return undef13;
      };
      r43 = dyn gettextf("undefined exports: %s", p12);
      return r43;
    };
    r45 = dyn stop1[, domain](p13, NA_LGL);
    check L49() else D23();
  D23():
    deopt 84 [r45];
  L49():
    goto L8();
  }
}
fun inner162799014(ns) {
  (reg ns:*) -+> V { var ns:*, reg environmentIsLocked:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V |
    mkenv;
    st ns = ns;
    environmentIsLocked = ldf environmentIsLocked;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn environmentIsLocked(p);
    check L1() else D1();
  D1():
    deopt 3 [r1];
  L1():
    popenv;
    return r1;
  }
}
fun inner1205378756(ns, new) {
  (reg ns:*, reg new:*) -+> V { var ns:*, var new:*, reg _getNamespaceInfo:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg new1:*, reg new2:V, reg names:cls, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg exports:*, reg exports1:V, reg names1:cls, reg r7:V, reg _in_:cls, reg expnames:*, reg expnames1:V, reg p1:p(V +), reg objs:*, reg objs1:V, reg p2:p(V +), reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg ex:*, reg ex1:V, reg any:cls, reg r13:V, reg c:L, reg warning:cls, reg sprintf:cls, reg ngettext:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg ex2:*, reg ex3:V, reg sum:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg paste:cls, reg sQuote:cls, reg expnames2:*, reg expnames3:V, reg c1:L, reg expnames5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ex4:*, reg ex5:V, reg __:cls, reg r20:V, reg p5:p(V +), reg r22:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg p8:p(V +), reg r28:V, reg list2env:cls, reg as_list:cls, reg new3:*, reg new4:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg exports2:*, reg exports3:V, reg p11:p(V +), reg r34:V |
    mkenv;
    st ns = ns;
    st new = new;
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r1 = dyn _getNamespaceInfo(p, "exports");
    check L6() else D1();
  D1():
    deopt 4 [r1];
  L6():
    st exports = r1;
    sym = ldf names;
    base = ldf names in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r3):
    st expnames = r3;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L11() else L12();
  L7():
    new1 = ld new;
    check L9() else D2();
  L8():
    r2 = dyn base(<sym new>);
    goto L0(r2);
  D2():
    deopt 8 [new1];
  L1(r6):
    st objs = r6;
    _in_ = ldf `%in%`;
    check L15() else D6();
  L9():
    new2 = force? new1;
    checkMissing(new2);
    names = ldf names in base;
    r4 = dyn names(new2);
    check L10() else D3();
  L11():
    exports = ld exports;
    check L13() else D4();
  L12():
    r5 = dyn base1(<sym exports>);
    goto L1(r5);
  D3():
    deopt 11 [r4];
  D4():
    deopt 15 [exports];
  D6():
    deopt 21 [];
  L10():
    goto L0(r4);
  L13():
    exports1 = force? exports;
    checkMissing(exports1);
    names1 = ldf names in base;
    r7 = dyn names1(exports1);
    check L14() else D5();
  L15():
    p1 = prom<V +>{
      expnames = ld expnames;
      expnames1 = force? expnames;
      checkMissing(expnames1);
      return expnames1;
    };
    p2 = prom<V +>{
      objs = ld objs;
      objs1 = force? objs;
      checkMissing(objs1);
      return objs1;
    };
    r10 = dyn _in_(p1, p2);
    check L16() else D7();
  D5():
    deopt 18 [r7];
  D7():
    deopt 24 [r10];
  L14():
    goto L1(r7);
  L16():
    st ex = r10;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L2(r12):
    c = `as.logical`(r12);
    if c then L21() else L3();
  L17():
    ex = ld ex;
    check L19() else D8();
  L18():
    r11 = dyn base2(<sym ex>);
    goto L2(r11);
  D8():
    deopt 28 [ex];
  L3():
    goto L4();
  L4():
    list2env = ldf list2env;
    check L25() else D12();
  L19():
    ex1 = force? ex;
    checkMissing(ex1);
    any = ldf any in base;
    r13 = dyn any(ex1);
    check L20() else D9();
  L21():
    warning = ldf warning;
    check L22() else D10();
  D9():
    deopt 31 [r13];
  D10():
    deopt 33 [];
  D12():
    deopt 43 [];
  L20():
    goto L2(r13);
  L22():
    p8 = prom<V +>{
      sprintf = ldf sprintf;
      p4 = prom<V +>{
        ngettext = ldf ngettext;
        p3 = prom<V +>{
          sym3 = ldf sum;
          base3 = ldf sum in base;
          guard3 = `==`.4(sym3, base3);
          if guard3 then L1() else L2();
        L0(r15):
          return r15;
        L1():
          ex2 = ld ex;
          ex3 = force? ex2;
          checkMissing(ex3);
          sum = ldf sum in base;
          r16 = dyn sum(ex3);
          goto L0(r16);
        L2():
          r14 = dyn base3(<sym ex>);
          goto L0(r14);
        };
        r18 = dyn ngettext(p3, "previous export '%s' is being replaced", "previous exports '%s' are being replaced");
        return r18;
      };
      p7 = prom<V +>{
        paste = ldf paste;
        p6 = prom<V +>{
          sQuote = ldf sQuote;
          p5 = prom<V +>{
            expnames2 = ld expnames;
            expnames3 = force? expnames2;
            checkMissing(expnames3);
            c1 = `is.object`(expnames3);
            if c1 then L1() else L2(expnames3);
          L0(dx1):
            return dx1;
          L1():
            dr = tryDispatchBuiltin.1("[", expnames3);
            dc = getTryDispatchBuiltinDispatched(dr);
            if dc then L3() else L2(dr);
          L2(expnames5):
            ex4 = ld ex;
            ex5 = force? ex4;
            __ = ldf `[` in base;
            r20 = dyn __(expnames5, ex5);
            goto L0(r20);
          L3():
            dx = getTryDispatchBuiltinValue(dr);
            goto L0(dx);
          };
          r22 = dyn sQuote(p5);
          return r22;
        };
        r24 = dyn paste[, collapse](p6, ", ");
        return r24;
      };
      r26 = dyn sprintf(p4, p7);
      return r26;
    };
    r28 = dyn warning[, `call.`, domain](p8, FALSE, NA_LGL);
    check L23() else D11();
  L25():
    p10 = prom<V +>{
      as_list = ldf `as.list`;
      p9 = prom<V +>{
        new3 = ld new;
        new4 = force? new3;
        checkMissing(new4);
        return new4;
      };
      r31 = dyn as_list(p9);
      return r31;
    };
    p11 = prom<V +>{
      exports2 = ld exports;
      exports3 = force? exports2;
      checkMissing(exports3);
      return exports3;
    };
    r34 = dyn list2env(p10, p11);
    check L26() else D13();
  D11():
    deopt 39 [r28];
  D13():
    deopt 46 [r34];
  L23():
    goto L4();
  L26():
    popenv;
    return r34;
  }
}
fun inner1392743580(spec) {
  (reg spec:*) -+> V { var spec:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg spec1:*, reg spec2:V, reg as_character:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg spec3:*, reg spec4:V, reg names:cls, reg r5:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r6:V, reg r7:V, reg new:*, reg new1:V, reg c:V, reg c1:L, reg old:*, reg old1:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r8:V, reg r9:V, reg new2:*, reg new3:V, reg nzchar:cls, reg r10:V, reg r11:V, reg old3:*, reg old4:V, reg c2:L, reg old6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg change:*, reg change1:V, reg __:cls, reg r12:V, reg l:*, reg c3:L, reg dx3:V, reg l2:*, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg change2:*, reg change3:V, reg ___:cls, reg r13:V, reg new4:*, reg new5:V, reg l3:*, reg names__:cls, reg r14:V, reg old7:*, reg old8:V |
    mkenv;
    st spec = spec;
    sym = ldf `as.character`;
    base = ldf `as.character` in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L0(r1):
    st old = r1;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L8():
    spec1 = ld spec;
    check L10() else D0();
  L9():
    r = dyn base(<sym spec>);
    goto L0(r);
  D0():
    deopt 2 [spec1];
  L1(r4):
    st new = r4;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L16() else L17();
  L10():
    spec2 = force? spec1;
    checkMissing(spec2);
    as_character = ldf `as.character` in base;
    r2 = dyn as_character(spec2);
    check L11() else D1();
  L12():
    spec3 = ld spec;
    check L14() else D2();
  L13():
    r3 = dyn base1(<sym spec>);
    goto L1(r3);
  D1():
    deopt 5 [r2];
  D2():
    deopt 9 [spec3];
  L2(r7):
    c1 = `as.logical`(r7);
    if c1 then L19() else L3();
  L11():
    goto L0(r2);
  L14():
    spec4 = force? spec3;
    checkMissing(spec4);
    names = ldf names in base;
    r5 = dyn names(spec4);
    check L15() else D3();
  L16():
    new = ld new;
    check L18() else D4();
  L17():
    r6 = dyn base2(<sym new>);
    goto L2(r6);
  D3():
    deopt 12 [r5];
  D4():
    deopt 15 [new];
  L3():
    sym3 = ldf nzchar;
    base3 = ldf nzchar in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L4():
    new4 = ld new;
    check L35() else D11();
  L15():
    goto L1(r5);
  L18():
    new1 = force? new;
    checkMissing(new1);
    c = `==`(new1, NULL);
    goto L2(c);
  L19():
    old = ld old;
    check L20() else D5();
  D5():
    deopt 18 [old];
  D11():
    deopt 39 [new4];
  L5(r9):
    r11 = `!`(r9);
    st change = r11;
    old3 = ld old;
    check L26() else D8();
  L20():
    old1 = force? old;
    checkMissing(old1);
    st new = old1;
    goto L4();
  L22():
    new2 = ld new;
    check L24() else D6();
  L23():
    r8 = dyn base3(<sym new>);
    goto L5(r8);
  L35():
    new5 = force? new4;
    checkMissing(new5);
    l3 = ld old;
    names__ = ldf `names<-`;
    check L36() else D12();
  D6():
    deopt 23 [new2];
  D8():
    deopt 29 [old3];
  D12():
    deopt 42 [new5, l3, new5];
  L24():
    new3 = force? new2;
    checkMissing(new3);
    nzchar = ldf nzchar in base;
    r10 = dyn nzchar(new3);
    check L25() else D7();
  L26():
    old4 = force? old3;
    checkMissing(old4);
    c2 = `is.object`(old4);
    if c2 then L27() else L28(old4);
  L36():
    r14 = dyn names__(l3, NULL, new5);
    check L37() else D13();
  D7():
    deopt 26 [r10];
  D13():
    deopt 44 [new5, r14];
  L6(dx1):
    l = ld new;
    c3 = `is.object`(l);
    if c3 then L31() else L32(dx1, l);
  L25():
    goto L5(r10);
  L27():
    dr = tryDispatchBuiltin.1("[", old4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L29() else L28(dr);
  L28(old6):
    change = ld change;
    check L30() else D9();
  L37():
    st old = r14;
    old7 = ld old;
    check L38() else D14();
  D9():
    deopt 31 [old6, change];
  D14():
    deopt 46 [old7];
  L7(dx6, dx7):
    st new = dx7;
    goto L4();
  L29():
    dx = getTryDispatchBuiltinValue(dr);
    goto L6(dx);
  L30():
    change1 = force? change;
    __ = ldf `[` in base;
    r12 = dyn __(old6, change1);
    goto L6(r12);
  L31():
    dr2 = tryDispatchBuiltin.0("[<-", l, dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L33() else L32(dx1, dr2);
  L32(dx3, l2):
    change2 = ld change;
    check L34() else D10();
  L38():
    old8 = force? old7;
    checkMissing(old8);
    popenv;
    return old8;
  D10():
    deopt 35 [dx3, l2, dx1, change2];
  L33():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L7(dx1, dx5);
  L34():
    change3 = force? change2;
    ___ = ldf `[<-` in base;
    r13 = dyn ___(l2, dx1, change3);
    goto L7(dx3, r13);
  }
}