fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2569204489;
    st hsearch_db_keywords = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2569204489(db) {
  (reg db:*) -+> V { var db:*, reg db_isMissing:L, reg db_orDefault:*, reg hsearch_db:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r5:V, reg db5:*, reg db6:V, reg c2:L, reg db8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r6:V, reg c3:L, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r7:V, reg match:cls, reg r8:V, reg split:cls, reg as_data_frame:cls, reg db9:*, reg db10:V, reg c4:L, reg db12:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r9:V, reg c5:L, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg pos:*, reg pos1:V, reg __2:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg db13:*, reg db14:V, reg c6:L, reg db16:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r14:V, reg c7:L, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg __3:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg vapply:cls, reg entries:*, reg entries1:V, reg p4:p(V +), reg NROW:*, reg NROW1:V, reg p5:p(V +), reg r20:V, reg vapply1:cls, reg entries2:*, reg entries3:V, reg p6:p(V +), reg r22:cls, reg p7:p(V +), reg r24:V, reg _get_standard_Rd_keywords_with_descriptions:cls, reg r25:V, reg standard:*, reg standard1:V, reg c8:L, reg standard3:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg r26:V, reg c9:L, reg dx27:V, reg dr18:V, reg dc9:L, reg dx28:V, reg dx29:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r27:V, reg dx32:V, reg r28:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r29:V, reg dx35:V, reg r30:V, reg entries4:*, reg entries5:V, reg names:cls, reg r31:V, reg standard4:*, reg standard5:V, reg c10:L, reg dx37:V, reg standard7:V, reg dr20:V, reg dc10:L, reg dx39:V, reg dx40:V, reg dx41:V, reg r32:V, reg match1:cls, reg r33:V, reg __4:cls, reg r34:V, reg order:cls, reg enums:*, reg enums1:V, reg p8:p(V +), reg pnums:*, reg pnums1:V, reg p9:p(V +), reg r37:V, reg list2DF:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r40:V, reg r41:V, reg entries6:*, reg entries7:V, reg names1:cls, reg r42:V, reg c11:L, reg r44:V, reg dr22:V, reg dc11:L, reg dx42:V, reg dx43:V, reg pos2:*, reg pos3:V, reg __5:cls, reg r45:V, reg concepts:*, reg concepts1:V, reg c12:L, reg concepts3:V, reg dr24:V, reg dc12:L, reg dx44:V, reg dx45:V, reg pos4:*, reg pos5:V, reg __6:cls, reg r46:V, reg enums2:*, reg enums3:V, reg c13:L, reg enums5:V, reg dr26:V, reg dc13:L, reg dx46:V, reg dx47:V, reg pos6:*, reg pos7:V, reg __7:cls, reg r47:V, reg pnums2:*, reg pnums3:V, reg c14:L, reg pnums5:V, reg dr28:V, reg dc14:L, reg dx48:V, reg dx49:V, reg pos8:*, reg pos9:V, reg __8:cls, reg r48:V, reg list:cls, reg r49:V, reg p10:p(V +), reg r51:V |
    mkenv;
    db_isMissing = missing.0(db);
    if db_isMissing then L0() else L1(db);
  L0():
    p = prom<V +>{
      hsearch_db = ldf hsearch_db;
      r = dyn hsearch_db();
      return r;
    };
    goto L1(p);
  L1(db_orDefault):
    st db = db_orDefault;
    sym = ldf match;
    base = ldf match in base;
    guard = `==`.4(sym, base);
    if guard then L8() else L9();
  L2(r3):
    st pos = r3;
    split = ldf split;
    check L27() else D3();
  L8():
    db1 = ld db;
    check L10() else D0();
  L9():
    r2 = dyn base(<lang `[`(`$`(db, Keywords), , "ID")>, <lang `[`(`$`(db, Base), , "ID")>);
    goto L2(r2);
  D0():
    deopt 2 [db1];
  D3():
    deopt 22 [];
  L10():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L12() else L13(db2);
  L27():
    p2 = prom<V +>{
      as_data_frame = ldf `as.data.frame`;
      p1 = prom<V +>{
        db9 = ld db;
        db10 = force? db9;
        checkMissing(db10);
        c4 = `is.object`(db10);
        if c4 then L2() else L3(db10);
      L1(dx13):
        c5 = `is.object`(dx13);
        if c5 then L5() else L6();
      L2():
        dr8 = tryDispatchBuiltin.1("$", db10);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L4() else L3(dr8);
      L3(db12):
        r9 = `$`(db12, <sym Base>);
        goto L1(r9);
      L0(dx17):
        return dx17;
      L4():
        dx12 = getTryDispatchBuiltinValue(dr8);
        goto L1(dx12);
      L5():
        dr10 = tryDispatchBuiltin.1("[", dx13);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L7() else L6();
      L6():
        pos = ld pos;
        pos1 = force? pos;
        __2 = ldf `[` in base;
        r10 = dyn __2(dx13, pos1, <missing>);
        goto L0(r10);
      L7():
        dx16 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx16);
      };
      r12 = dyn as_data_frame[, stringsAsFactors](p1, FALSE);
      return r12;
    };
    p3 = prom<V +>{
      db13 = ld db;
      db14 = force? db13;
      checkMissing(db14);
      c6 = `is.object`(db14);
      if c6 then L2() else L3(db14);
    L1(dx19):
      c7 = `is.object`(dx19);
      if c7 then L5() else L6();
    L2():
      dr12 = tryDispatchBuiltin.1("$", db14);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(db16):
      r14 = `$`(db16, <sym Keywords>);
      goto L1(r14);
    L0(dx23):
      return dx23;
    L4():
      dx18 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx18);
    L5():
      dr14 = tryDispatchBuiltin.1("[", dx19);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6();
    L6():
      __3 = ldf `[` in base;
      r15 = dyn __3(dx19, <missing>, "Keyword");
      goto L0(r15);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx22);
    };
    r17 = dyn split(p2, p3);
    check L28() else D4();
  D4():
    deopt 25 [r17];
  L11(dx1):
    c1 = `is.object`(dx1);
    if c1 then L15() else L16();
  L12():
    dr = tryDispatchBuiltin.1("$", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L14() else L13(dr);
  L13(db4):
    r4 = `$`(db4, <sym Keywords>);
    goto L11(r4);
  L28():
    st entries = r17;
    vapply = ldf vapply;
    check L29() else D5();
  D5():
    deopt 28 [];
  L3(dx5):
    db5 = ld db;
    check L18() else D1();
  L14():
    dx = getTryDispatchBuiltinValue(dr);
    goto L11(dx);
  L15():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L17() else L16();
  L16():
    __ = ldf `[` in base;
    r5 = dyn __(dx1, <missing>, "ID");
    goto L3(r5);
  L29():
    p4 = prom<V +>{
      entries = ld entries;
      entries1 = force? entries;
      checkMissing(entries1);
      return entries1;
    };
    p5 = prom<V +>{
      NROW = ld NROW;
      NROW1 = force? NROW;
      checkMissing(NROW1);
      return NROW1;
    };
    r20 = dyn vapply(p4, p5, 0);
    check L30() else D6();
  D1():
    deopt 9 [db5];
  D6():
    deopt 32 [r20];
  L17():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L18():
    db6 = force? db5;
    checkMissing(db6);
    c2 = `is.object`(db6);
    if c2 then L20() else L21(db6);
  L30():
    st enums = r20;
    vapply1 = ldf vapply;
    check L31() else D7();
  D7():
    deopt 35 [];
  L19(dx7):
    c3 = `is.object`(dx7);
    if c3 then L23() else L24();
  L20():
    dr4 = tryDispatchBuiltin.1("$", db6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(dr4);
  L21(db8):
    r6 = `$`(db8, <sym Base>);
    goto L19(r6);
  L31():
    p6 = prom<V +>{
      entries2 = ld entries;
      entries3 = force? entries2;
      checkMissing(entries3);
      return entries3;
    };
    p7 = prom<V +>{
      r22 = clos inner3708401697;
      return r22;
    };
    r24 = dyn vapply1(p6, p7, 0);
    check L32() else D8();
  D8():
    deopt 39 [r24];
  L4(dx11):
    match = ldf match in base;
    r8 = dyn match(dx5, dx11, NA_INT, NULL);
    check L26() else D2();
  L22():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L19(dx6);
  L23():
    dr6 = tryDispatchBuiltin.1("[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L25() else L24();
  L24():
    __1 = ldf `[` in base;
    r7 = dyn __1(dx7, <missing>, "ID");
    goto L4(r7);
  L32():
    st pnums = r24;
    _get_standard_Rd_keywords_with_descriptions = ldf `.get_standard_Rd_keywords_with_descriptions`;
    check L33() else D9();
  D2():
    deopt 19 [r8];
  D9():
    deopt 42 [];
  L25():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx10);
  L26():
    goto L2(r8);
  L33():
    r25 = dyn _get_standard_Rd_keywords_with_descriptions();
    check L34() else D10();
  D10():
    deopt 43 [r25];
  L34():
    st standard = r25;
    standard = ld standard;
    check L35() else D11();
  D11():
    deopt 45 [standard];
  L35():
    standard1 = force? standard;
    checkMissing(standard1);
    c8 = `is.object`(standard1);
    if c8 then L37() else L38(standard1);
  L36(dx25):
    c9 = `is.object`(dx25);
    if c9 then L40() else L41(dx25);
  L37():
    dr16 = tryDispatchBuiltin.1("$", standard1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L39() else L38(dr16);
  L38(standard3):
    r26 = `$`(standard3, <sym Descriptions>);
    goto L36(r26);
  L5(dx29):
    st concepts = dx29;
    order = ldf order;
    check L55() else D16();
  L39():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L36(dx24);
  L40():
    dr18 = tryDispatchBuiltin.1("[", dx25);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L42() else L41(dr18);
  L41(dx27):
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L43() else L44();
  D16():
    deopt 66 [];
  L6(dx32, r28):
    __4 = ldf `[` in base;
    r34 = dyn __4(dx32, r28);
    goto L5(r34);
  L42():
    dx28 = getTryDispatchBuiltinValue(dr18);
    goto L5(dx28);
  L43():
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L45() else L46();
  L44():
    r27 = dyn base1(<lang names(entries)>, <lang `$`(standard, Keywords)>);
    goto L6(dx27, r27);
  L55():
    p8 = prom<V +>{
      enums = ld enums;
      enums1 = force? enums;
      checkMissing(enums1);
      return enums1;
    };
    p9 = prom<V +>{
      pnums = ld pnums;
      pnums1 = force? pnums;
      checkMissing(pnums1);
      return pnums1;
    };
    r37 = dyn order[, , decreasing](p8, p9, TRUE);
    check L56() else D17();
  D17():
    deopt 71 [r37];
  L7(dx35, r30):
    standard4 = ld standard;
    check L49() else D14();
  L45():
    entries4 = ld entries;
    check L47() else D12();
  L46():
    r29 = dyn base2(<sym entries>);
    goto L7(dx27, r29);
  L56():
    st pos = r37;
    list2DF = ldf list2DF;
    check L57() else D18();
  D12():
    deopt 52 [dx27, entries4];
  D14():
    deopt 56 [dx35, standard4];
  D18():
    deopt 74 [];
  L47():
    entries5 = force? entries4;
    checkMissing(entries5);
    names = ldf names in base;
    r31 = dyn names(entries5);
    check L48() else D13();
  L49():
    standard5 = force? standard4;
    checkMissing(standard5);
    c10 = `is.object`(standard5);
    if c10 then L51() else L52(dx35, standard5);
  L57():
    p10 = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L6() else L7();
    L0(r39):
      return r39;
    L6():
      sym4 = ldf names;
      base4 = ldf names in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L8() else L9();
    L7():
      r38 = dyn base3[Keyword, Concept, Frequency, Packages](<lang `[`(names(entries), pos)>, <lang `[`(concepts, pos)>, <lang `[`(enums, pos)>, <lang `[`(pnums, pos)>);
      goto L0(r38);
    L1(r41):
      c11 = `is.object`(r41);
      if c11 then L10() else L11(r41);
    L8():
      entries6 = ld entries;
      entries7 = force? entries6;
      checkMissing(entries7);
      names1 = ldf names in base;
      r42 = dyn names1(entries7);
      goto L1(r42);
    L9():
      r40 = dyn base4(<sym entries>);
      goto L1(r40);
    L2(dx43):
      concepts = ld concepts;
      concepts1 = force? concepts;
      checkMissing(concepts1);
      c12 = `is.object`(concepts1);
      if c12 then L13() else L14(concepts1);
    L10():
      dr22 = tryDispatchBuiltin.1("[", r41);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L12() else L11(dr22);
    L11(r44):
      pos2 = ld pos;
      pos3 = force? pos2;
      __5 = ldf `[` in base;
      r45 = dyn __5(r44, pos3);
      goto L2(r45);
    L3(dx45):
      enums2 = ld enums;
      enums3 = force? enums2;
      checkMissing(enums3);
      c13 = `is.object`(enums3);
      if c13 then L16() else L17(enums3);
    L12():
      dx42 = getTryDispatchBuiltinValue(dr22);
      goto L2(dx42);
    L13():
      dr24 = tryDispatchBuiltin.1("[", concepts1);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L15() else L14(dr24);
    L14(concepts3):
      pos4 = ld pos;
      pos5 = force? pos4;
      __6 = ldf `[` in base;
      r46 = dyn __6(concepts3, pos5);
      goto L3(r46);
    L4(dx47):
      pnums2 = ld pnums;
      pnums3 = force? pnums2;
      checkMissing(pnums3);
      c14 = `is.object`(pnums3);
      if c14 then L19() else L20(pnums3);
    L15():
      dx44 = getTryDispatchBuiltinValue(dr24);
      goto L3(dx44);
    L16():
      dr26 = tryDispatchBuiltin.1("[", enums3);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L18() else L17(dr26);
    L17(enums5):
      pos6 = ld pos;
      pos7 = force? pos6;
      __7 = ldf `[` in base;
      r47 = dyn __7(enums5, pos7);
      goto L4(r47);
    L5(dx49):
      list = ldf list in base;
      r49 = dyn list(dx43, dx45, dx47, dx49);
      goto L0(r49);
    L18():
      dx46 = getTryDispatchBuiltinValue(dr26);
      goto L4(dx46);
    L19():
      dr28 = tryDispatchBuiltin.1("[", pnums3);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L21() else L20(dr28);
    L20(pnums5):
      pos8 = ld pos;
      pos9 = force? pos8;
      __8 = ldf `[` in base;
      r48 = dyn __8(pnums5, pos9);
      goto L5(r48);
    L21():
      dx48 = getTryDispatchBuiltinValue(dr28);
      goto L5(dx48);
    };
    r51 = dyn list2DF(p10);
    check L58() else D19();
  D13():
    deopt 55 [dx27, r31];
  D19():
    deopt 76 [r51];
  L48():
    goto L7(dx27, r31);
  L50(dx40, dx41):
    match1 = ldf match in base;
    r33 = dyn match1(r30, dx41, NA_INT, NULL);
    check L54() else D15();
  L51():
    dr20 = tryDispatchBuiltin.1("$", standard5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L53() else L52(dx35, dr20);
  L52(dx37, standard7):
    r32 = `$`(standard7, <sym Keywords>);
    goto L50(dx37, r32);
  L58():
    popenv;
    return r51;
  D15():
    deopt 62 [dx40, r33];
  L53():
    dx39 = getTryDispatchBuiltinValue(dr20);
    goto L50(dx35, dx39);
  L54():
    goto L6(dx40, r33);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg unique:cls, reg e1:*, reg e2:V, reg c:L, reg e4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r2:V, reg p:p(V +), reg r4:V, reg length:cls, reg r5:V |
    mkenv;
    st e = e;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    unique = ldf unique;
    check L3() else D0();
  L2():
    r = dyn base(<lang unique(`$`(e, Package))>);
    goto L0(r);
  D0():
    deopt 3 [];
  L3():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      c = `is.object`(e2);
      if c then L1() else L2(e2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", e2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(e4):
      r2 = `$`(e4, <sym Package>);
      goto L0(r2);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r4 = dyn unique(p);
    check L4() else D1();
  D1():
    deopt 5 [r4];
  L4():
    length = ldf length in base;
    r5 = dyn length(r4);
    check L5() else D2();
  D2():
    deopt 7 [r5];
  L5():
    goto L0(r5);
  }
}