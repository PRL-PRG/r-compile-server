fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st make_sysdata_rda = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg __:cls, reg r:V, reg r1:cls, reg r2:V, reg trimws:cls, reg __1:cls, reg r3:V, reg r4:cls, reg __2:cls, reg r5:V, reg r6:cls, reg doc:*, reg doc1:V, reg p:p(V +), reg r8:V, reg p1:p(V +), reg r10:V, reg p2:p(V +), reg r12:V, reg trimws1:cls, reg __3:cls, reg r13:V, reg r14:cls, reg __4:cls, reg r15:V, reg r16:cls, reg doc2:*, reg doc3:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg r22:V, reg grepl:cls, reg re:*, reg re1:V, reg p6:p(V +), reg dt:*, reg dt1:V, reg p7:p(V +), reg r25:V, reg as_data_frame:cls, reg cbind:cls, reg sub:cls, reg re2:*, reg re3:V, reg p8:p(V +), reg dt2:*, reg dt3:V, reg c:L, reg dt5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind:*, reg ind1:V, reg __5:cls, reg r27:V, reg p9:p(V +), reg r29:V, reg p10:p(V +), reg sub1:cls, reg re4:*, reg re5:V, reg p11:p(V +), reg dt6:*, reg dt7:V, reg c1:L, reg dt9:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind2:*, reg ind3:V, reg __6:cls, reg r32:V, reg p12:p(V +), reg r34:V, reg p13:p(V +), reg sub2:cls, reg dd:*, reg dd1:V, reg c2:L, reg dd3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg ind4:*, reg ind5:V, reg __7:cls, reg r36:V, reg p14:p(V +), reg r38:V, reg p15:p(V +), reg r40:V, reg p16:p(V +), reg r42:V, reg sym:cls, reg base:cls, reg guard:L, reg r43:V, reg r44:V, reg c3:cls, reg r45:V, reg data_frame:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r46:V, reg r47:V, reg MARC_R_usage:*, reg MARC_R_usage1:V, reg names:cls, reg r48:V, reg p17:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r50:V, reg r51:V, reg MARC_R_usage2:*, reg MARC_R_usage3:V, reg c4:cls, reg r52:V, reg p18:p(V +), reg r54:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r55:V, reg r56:V, reg MARC_relator_db:*, reg MARC_relator_db1:V, reg c5:L, reg MARC_relator_db3:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r57:V, reg MARC_R_usage4:*, reg MARC_R_usage5:V, reg c6:L, reg MARC_R_usage7:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r58:V, reg match:cls, reg r59:V, reg gsub:cls, reg MARC_R_usage8:*, reg MARC_R_usage9:V, reg c7:L, reg MARC_R_usage11:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r60:V, reg c8:L, reg dx13:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg pos:*, reg pos1:V, reg __8:cls, reg r61:V, reg p19:p(V +), reg r63:V, reg l:*, reg c9:L, reg r66:V, reg l3:*, reg r67:V, reg l4:*, reg dr14:V, reg dc7:L, reg dx16:V, reg r70:V, reg l6:*, reg r71:V, reg dx17:V, reg r72:V, reg c10:L, reg r74:V, reg l8:*, reg dx19:V, reg dr16:V, reg dc8:L, reg dx20:V, reg r76:V, reg l10:*, reg dx21:V, reg pos2:*, reg pos3:V, reg r77:V, reg ___:cls, reg r78:V, reg c11:L, reg r80:V, reg l12:*, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg r83:V, reg sort:cls, reg MARC_relator_db4:*, reg MARC_relator_db5:V, reg c12:L, reg MARC_relator_db7:V, reg dr20:V, reg dc10:L, reg dx24:V, reg dx25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r84:V, reg MARC_relator_db10:V, reg r85:V, reg MARC_relator_db11:*, reg MARC_relator_db12:V, reg c13:L, reg MARC_relator_db15:V, reg MARC_relator_db16:V, reg dr22:V, reg dc11:L, reg dx26:V, reg MARC_relator_db18:V, reg dx27:V, reg r86:V, reg nchar:cls, reg r87:V, reg r88:V, reg __9:cls, reg r89:V, reg p20:p(V +), reg r91:V, reg save:cls, reg MARC_relator_db19:*, reg MARC_relator_db20:V, reg p21:p(V +), reg MARC_relator_db_codes_used_with_R:*, reg MARC_relator_db_codes_used_with_R1:V, reg p22:p(V +), reg r94:V |
    mkenv;
    __ = ldf `::`;
    check L3() else D0();
  D0():
    deopt 1 [];
  L3():
    r = dyn __("xml2", "read_html");
    check L4() else D1();
  D1():
    deopt 4 [r];
  L4():
    checkFun.0(r);
    r1 = r as cls;
    r2 = dyn r1("https://www.loc.gov/marc/relators/relaterm.html");
    check L5() else D2();
  D2():
    deopt 7 [r2];
  L5():
    st doc = r2;
    trimws = ldf trimws;
    check L6() else D3();
  D3():
    deopt 10 [];
  L6():
    p2 = prom<V +>{
      __1 = ldf `::`;
      r3 = dyn __1("xml2", "xml_text");
      checkFun.0(r3);
      r4 = r3 as cls;
      p1 = prom<V +>{
        __2 = ldf `::`;
        r5 = dyn __2("xml2", "xml_find_all");
        checkFun.0(r5);
        r6 = r5 as cls;
        p = prom<V +>{
          doc = ld doc;
          doc1 = force? doc;
          checkMissing(doc1);
          return doc1;
        };
        r8 = dyn r6(p, "//dl[4]//dt");
        return r8;
      };
      r10 = dyn r4(p1);
      return r10;
    };
    r12 = dyn trimws(p2);
    check L7() else D4();
  D4():
    deopt 12 [r12];
  L7():
    st dt = r12;
    trimws1 = ldf trimws;
    check L8() else D5();
  D5():
    deopt 15 [];
  L8():
    p5 = prom<V +>{
      __3 = ldf `::`;
      r13 = dyn __3("xml2", "xml_text");
      checkFun.0(r13);
      r14 = r13 as cls;
      p4 = prom<V +>{
        __4 = ldf `::`;
        r15 = dyn __4("xml2", "xml_find_all");
        checkFun.0(r15);
        r16 = r15 as cls;
        p3 = prom<V +>{
          doc2 = ld doc;
          doc3 = force? doc2;
          checkMissing(doc3);
          return doc3;
        };
        r18 = dyn r16(p3, "//dl[4]//dd");
        return r18;
      };
      r20 = dyn r14(p4);
      return r20;
    };
    r22 = dyn trimws1(p5);
    check L9() else D6();
  D6():
    deopt 17 [r22];
  L9():
    st dd = r22;
    st re = "(.*) \\[(.*)\\]";
    grepl = ldf grepl;
    check L10() else D7();
  D7():
    deopt 23 [];
  L10():
    p6 = prom<V +>{
      re = ld re;
      re1 = force? re;
      checkMissing(re1);
      return re1;
    };
    p7 = prom<V +>{
      dt = ld dt;
      dt1 = force? dt;
      checkMissing(dt1);
      return dt1;
    };
    r25 = dyn grepl(p6, p7);
    check L11() else D8();
  D8():
    deopt 26 [r25];
  L11():
    st ind = r25;
    as_data_frame = ldf `as.data.frame`;
    check L12() else D9();
  D9():
    deopt 29 [];
  L12():
    p16 = prom<V +>{
      cbind = ldf cbind;
      p10 = prom<V +>{
        sub = ldf sub;
        p8 = prom<V +>{
          re2 = ld re;
          re3 = force? re2;
          checkMissing(re3);
          return re3;
        };
        p9 = prom<V +>{
          dt2 = ld dt;
          dt3 = force? dt2;
          checkMissing(dt3);
          c = `is.object`(dt3);
          if c then L1() else L2(dt3);
        L0(dx1):
          return dx1;
        L1():
          dr = tryDispatchBuiltin.1("[", dt3);
          dc = getTryDispatchBuiltinDispatched(dr);
          if dc then L3() else L2(dr);
        L2(dt5):
          ind = ld ind;
          ind1 = force? ind;
          __5 = ldf `[` in base;
          r27 = dyn __5(dt5, ind1);
          goto L0(r27);
        L3():
          dx = getTryDispatchBuiltinValue(dr);
          goto L0(dx);
        };
        r29 = dyn sub(p8, "\\1", p9);
        return r29;
      };
      p13 = prom<V +>{
        sub1 = ldf sub;
        p11 = prom<V +>{
          re4 = ld re;
          re5 = force? re4;
          checkMissing(re5);
          return re5;
        };
        p12 = prom<V +>{
          dt6 = ld dt;
          dt7 = force? dt6;
          checkMissing(dt7);
          c1 = `is.object`(dt7);
          if c1 then L1() else L2(dt7);
        L0(dx3):
          return dx3;
        L1():
          dr2 = tryDispatchBuiltin.1("[", dt7);
          dc1 = getTryDispatchBuiltinDispatched(dr2);
          if dc1 then L3() else L2(dr2);
        L2(dt9):
          ind2 = ld ind;
          ind3 = force? ind2;
          __6 = ldf `[` in base;
          r32 = dyn __6(dt9, ind3);
          goto L0(r32);
        L3():
          dx2 = getTryDispatchBuiltinValue(dr2);
          goto L0(dx2);
        };
        r34 = dyn sub1(p11, "\\2", p12);
        return r34;
      };
      p15 = prom<V +>{
        sub2 = ldf sub;
        p14 = prom<V +>{
          dd = ld dd;
          dd1 = force? dd;
          checkMissing(dd1);
          c2 = `is.object`(dd1);
          if c2 then L1() else L2(dd1);
        L0(dx5):
          return dx5;
        L1():
          dr4 = tryDispatchBuiltin.1("[", dd1);
          dc2 = getTryDispatchBuiltinDispatched(dr4);
          if dc2 then L3() else L2(dr4);
        L2(dd3):
          ind4 = ld ind;
          ind5 = force? ind4;
          __7 = ldf `[` in base;
          r36 = dyn __7(dd3, ind5);
          goto L0(r36);
        L3():
          dx4 = getTryDispatchBuiltinValue(dr4);
          goto L0(dx4);
        };
        r38 = dyn sub2("\n\t UF.*", "", p14);
        return r38;
      };
      r40 = dyn cbind[term, code, description, usage](p10, p13, p15, "");
      return r40;
    };
    r42 = dyn as_data_frame[, stringsAsFactors](p16, FALSE);
    check L13() else D10();
  D10():
    deopt 33 [r42];
  L13():
    st MARC_relator_db = r42;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r44):
    st MARC_R_usage = r44;
    data_frame = ldf `data.frame`;
    check L17() else D12();
  L14():
    c3 = ldf c in base;
    r45 = dyn c3("Use for full authors who have made substantial contributions to\nthe package and should show up in the package citation.", "Use for package maintainers that collected code (potentially in\nother languages) but did not make further substantial\ncontributions to the package.", "Use for all copyright holders.", "Use for the package maintainer.", "Use for authors who have made smaller contributions (such as\ncode patches etc.) but should not show up in the package\ncitation.", "Use for authors who have been contracted to write (parts of) the\npackage and hence do not own intellectual property.", "Use for persons who contributed data sets for the package.", "Use for persons or organizations that furnished financial support\nfor the development of the package", "Use for persons or organizations responsible for reviewing\n(parts of) the package.", "If the package is part of a thesis, use for the thesis advisor.", "If the R code is merely a translation from another language\n(typically S), use for the translator to R.");
    check L16() else D11();
  L15():
    r43 = dyn base[aut, com, cph, cre, ctb, ctr, dtc, fnd, rev, ths, trl]("Use for full authors who have made substantial contributions to\nthe package and should show up in the package citation.", "Use for package maintainers that collected code (potentially in\nother languages) but did not make further substantial\ncontributions to the package.", "Use for all copyright holders.", "Use for the package maintainer.", "Use for authors who have made smaller contributions (such as\ncode patches etc.) but should not show up in the package\ncitation.", "Use for authors who have been contracted to write (parts of) the\npackage and hence do not own intellectual property.", "Use for persons who contributed data sets for the package.", "Use for persons or organizations that furnished financial support\nfor the development of the package", "Use for persons or organizations responsible for reviewing\n(parts of) the package.", "If the package is part of a thesis, use for the thesis advisor.", "If the R code is merely a translation from another language\n(typically S), use for the translator to R.");
    goto L0(r43);
  D11():
    deopt 60 [r45];
  D12():
    deopt 63 [];
  L16():
    goto L0(r45);
  L17():
    p17 = prom<V +>{
      sym1 = ldf names;
      base1 = ldf names in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r47):
      return r47;
    L1():
      MARC_R_usage = ld MARC_R_usage;
      MARC_R_usage1 = force? MARC_R_usage;
      checkMissing(MARC_R_usage1);
      names = ldf names in base;
      r48 = dyn names(MARC_R_usage1);
      goto L0(r48);
    L2():
      r46 = dyn base1(<sym MARC_R_usage>);
      goto L0(r46);
    };
    p18 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r51):
      return r51;
    L1():
      MARC_R_usage2 = ld MARC_R_usage;
      MARC_R_usage3 = force? MARC_R_usage2;
      checkMissing(MARC_R_usage3);
      c4 = ldf c in base;
      r52 = dyn c4(MARC_R_usage3);
      goto L0(r52);
    L2():
      r50 = dyn base2(<sym MARC_R_usage>);
      goto L0(r50);
    };
    r54 = dyn data_frame[code, usage, stringsAsFactors, `row.names`](p17, p18, FALSE, NULL);
    check L18() else D13();
  D13():
    deopt 72 [r54];
  L18():
    st MARC_R_usage = r54;
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L19() else L20();
  L1(r56):
    st pos = r56;
    gsub = ldf gsub;
    check L32() else D17();
  L19():
    MARC_relator_db = ld MARC_relator_db;
    check L21() else D14();
  L20():
    r55 = dyn base3[, , nomatch](<lang `$`(MARC_relator_db, code)>, <lang `$`(MARC_R_usage, code)>, 0);
    goto L1(r55);
  D14():
    deopt 76 [MARC_relator_db];
  D17():
    deopt 88 [];
  L21():
    MARC_relator_db1 = force? MARC_relator_db;
    checkMissing(MARC_relator_db1);
    c5 = `is.object`(MARC_relator_db1);
    if c5 then L23() else L24(MARC_relator_db1);
  L32():
    p19 = prom<V +>{
      MARC_R_usage8 = ld MARC_R_usage;
      MARC_R_usage9 = force? MARC_R_usage8;
      checkMissing(MARC_R_usage9);
      c7 = `is.object`(MARC_R_usage9);
      if c7 then L2() else L3(MARC_R_usage9);
    L1(dx11):
      c8 = `is.object`(dx11);
      if c8 then L5() else L6(dx11);
    L2():
      dr10 = tryDispatchBuiltin.1("$", MARC_R_usage9);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(MARC_R_usage11):
      r60 = `$`(MARC_R_usage11, <sym usage>);
      goto L1(r60);
    L0(dx15):
      return dx15;
    L4():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx10);
    L5():
      dr12 = tryDispatchBuiltin.1("[", dx11);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx13):
      pos = ld pos;
      pos1 = force? pos;
      __8 = ldf `[` in base;
      r61 = dyn __8(dx13, pos1);
      goto L0(r61);
    L7():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    r63 = dyn gsub[, , , fixed]("\n", " ", p19, TRUE);
    check L33() else D18();
  D18():
    deopt 94 [r63];
  L22(dx7):
    MARC_R_usage4 = ld MARC_R_usage;
    check L26() else D15();
  L23():
    dr6 = tryDispatchBuiltin.1("$", MARC_relator_db1);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L25() else L24(dr6);
  L24(MARC_relator_db3):
    r57 = `$`(MARC_relator_db3, <sym code>);
    goto L22(r57);
  L33():
    l = ld MARC_relator_db;
    c9 = `is.object`(l);
    if c9 then L35() else L36(r63, l, r63, l);
  D15():
    deopt 79 [MARC_R_usage4];
  L25():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L22(dx6);
  L26():
    MARC_R_usage5 = force? MARC_R_usage4;
    checkMissing(MARC_R_usage5);
    c6 = `is.object`(MARC_R_usage5);
    if c6 then L28() else L29(MARC_R_usage5);
  L34(r70, l6, r71, dx17):
    c10 = `is.object`(dx17);
    if c10 then L38() else L39(r70, l6, dx17);
  L35():
    dr14 = tryDispatchBuiltin.1("$", l);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L37() else L36(r63, l, r63, dr14);
  L36(r66, l3, r67, l4):
    r72 = `$`(l4, <sym usage>);
    goto L34(r66, l3, r67, r72);
  L2(r76, l10, dx21):
    c11 = `is.object`(l10);
    if c11 then L43() else L44(r76, l10);
  L27(dx9):
    match = ldf match in base;
    r59 = dyn match(dx7, dx9, 0, NULL);
    check L31() else D16();
  L28():
    dr8 = tryDispatchBuiltin.1("$", MARC_R_usage5);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L30() else L29(dr8);
  L29(MARC_R_usage7):
    r58 = `$`(MARC_R_usage7, <sym code>);
    goto L27(r58);
  L37():
    dx16 = getTryDispatchBuiltinValue(dr14);
    goto L34(r63, l, r63, dx16);
  L38():
    dr16 = tryDispatchBuiltin.0("[<-", dx17, r71);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L40() else L39(r70, l6, dr16);
  L39(r74, l8, dx19):
    pos2 = ld pos;
    check L41() else D19();
  D16():
    deopt 85 [r59];
  D19():
    deopt 99 [r74, l8, dx19, r71, pos2];
  L30():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L27(dx8);
  L31():
    goto L1(r59);
  L40():
    dx20 = getTryDispatchBuiltinValue(dr16);
    goto L2(r70, l6, dx20);
  L41():
    pos3 = force? pos2;
    checkMissing(pos3);
    r77 = `>`(pos3, 0);
    ___ = ldf `[<-` in base;
    r78 = dyn ___(dx19, r71, r77);
    goto L2(r74, l8, r78);
  L42(dx23):
    st MARC_relator_db = dx23;
    sort = ldf sort;
    check L46() else D20();
  L43():
    dr18 = tryDispatchBuiltin.0("$<-", l10, dx21);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L45() else L44(r76, dr18);
  L44(r80, l12):
    r83 = `$<-`(l12, <sym usage>, dx21);
    goto L42(r83);
  D20():
    deopt 107 [];
  L45():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L42(dx22);
  L46():
    p20 = prom<V +>{
      MARC_relator_db4 = ld MARC_relator_db;
      MARC_relator_db5 = force? MARC_relator_db4;
      checkMissing(MARC_relator_db5);
      c12 = `is.object`(MARC_relator_db5);
      if c12 then L2() else L3(MARC_relator_db5);
    L0(dx25):
      return dx25;
    L2():
      dr20 = tryDispatchBuiltin.1("[", MARC_relator_db5);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L4() else L3(dr20);
    L3(MARC_relator_db7):
      sym4 = ldf nchar;
      base4 = ldf nchar in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(MARC_relator_db10, r85):
      r88 = `>`(r85, 0);
      __9 = ldf `[` in base;
      r89 = dyn __9(MARC_relator_db10, r88, "code");
      goto L0(r89);
    L4():
      dx24 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx24);
    L5():
      MARC_relator_db11 = ld MARC_relator_db;
      MARC_relator_db12 = force? MARC_relator_db11;
      checkMissing(MARC_relator_db12);
      c13 = `is.object`(MARC_relator_db12);
      if c13 then L8() else L9(MARC_relator_db7, MARC_relator_db12);
    L6():
      r84 = dyn base4(<lang `$`(MARC_relator_db, usage)>);
      goto L1(MARC_relator_db7, r84);
    L7(MARC_relator_db18, dx27):
      nchar = ldf nchar in base;
      r87 = dyn nchar(dx27, "chars", FALSE, NA_LGL);
      goto L1(MARC_relator_db18, r87);
    L8():
      dr22 = tryDispatchBuiltin.1("$", MARC_relator_db12);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L10() else L9(MARC_relator_db7, dr22);
    L9(MARC_relator_db15, MARC_relator_db16):
      r86 = `$`(MARC_relator_db16, <sym usage>);
      goto L7(MARC_relator_db15, r86);
    L10():
      dx26 = getTryDispatchBuiltinValue(dr22);
      goto L7(MARC_relator_db7, dx26);
    };
    r91 = dyn sort(p20);
    check L47() else D21();
  D21():
    deopt 109 [r91];
  L47():
    st MARC_relator_db_codes_used_with_R = r91;
    save = ldf save;
    check L48() else D22();
  D22():
    deopt 112 [];
  L48():
    p21 = prom<V +>{
      MARC_relator_db19 = ld MARC_relator_db;
      MARC_relator_db20 = force? MARC_relator_db19;
      checkMissing(MARC_relator_db20);
      return MARC_relator_db20;
    };
    p22 = prom<V +>{
      MARC_relator_db_codes_used_with_R = ld MARC_relator_db_codes_used_with_R;
      MARC_relator_db_codes_used_with_R1 = force? MARC_relator_db_codes_used_with_R;
      checkMissing(MARC_relator_db_codes_used_with_R1);
      return MARC_relator_db_codes_used_with_R1;
    };
    r94 = dyn save[, , file, compress](p21, p22, "sysdata.rda", TRUE);
    check L49() else D23();
  D23():
    deopt 119 [r94];
  L49():
    popenv;
    return r94;
  }
}