fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2569204489;
    st hsearch_db_concepts = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2569204489(db) {
  (reg db:*) -+> V { var db:*, reg db_isMissing:L, reg db_orDefault:*, reg hsearch_db:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg db1:*, reg db2:V, reg c:L, reg db4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg c1:L, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __:cls, reg r5:V, reg db5:*, reg db6:V, reg c2:L, reg db8:V, reg dr4:V, reg dc2:L, reg dx6:V, reg dx7:V, reg r6:V, reg c3:L, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg __1:cls, reg r7:V, reg match:cls, reg r8:V, reg split:cls, reg as_data_frame:cls, reg db9:*, reg db10:V, reg c4:L, reg db12:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg r9:V, reg c5:L, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg pos:*, reg pos1:V, reg __2:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg p2:p(V +), reg db13:*, reg db14:V, reg c6:L, reg db16:V, reg dr12:V, reg dc6:L, reg dx18:V, reg dx19:V, reg r14:V, reg c7:L, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg __3:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg vapply:cls, reg entries:*, reg entries1:V, reg p4:p(V +), reg NROW:*, reg NROW1:V, reg p5:p(V +), reg r20:V, reg vapply1:cls, reg entries2:*, reg entries3:V, reg p6:p(V +), reg r22:cls, reg p7:p(V +), reg r24:V, reg order:cls, reg enums:*, reg enums1:V, reg p8:p(V +), reg pnums:*, reg pnums1:V, reg p9:p(V +), reg r27:V, reg list2DF:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r28:V, reg r29:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r30:V, reg r31:V, reg entries4:*, reg entries5:V, reg names:cls, reg r32:V, reg c8:L, reg r34:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg pos2:*, reg pos3:V, reg __4:cls, reg r35:V, reg enums2:*, reg enums3:V, reg c9:L, reg enums5:V, reg dr18:V, reg dc9:L, reg dx26:V, reg dx27:V, reg pos4:*, reg pos5:V, reg __5:cls, reg r36:V, reg pnums2:*, reg pnums3:V, reg c10:L, reg pnums5:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg pos6:*, reg pos7:V, reg __6:cls, reg r37:V, reg list:cls, reg r38:V, reg p10:p(V +), reg r40:V |
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
    if guard then L5() else L6();
  L2(r3):
    st pos = r3;
    split = ldf split;
    check L24() else D3();
  L5():
    db1 = ld db;
    check L7() else D0();
  L6():
    r2 = dyn base(<lang `[`(`$`(db, Concepts), , "ID")>, <lang `[`(`$`(db, Base), , "ID")>);
    goto L2(r2);
  D0():
    deopt 2 [db1];
  D3():
    deopt 22 [];
  L7():
    db2 = force? db1;
    checkMissing(db2);
    c = `is.object`(db2);
    if c then L9() else L10(db2);
  L24():
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
      r14 = `$`(db16, <sym Concepts>);
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
      r15 = dyn __3(dx19, <missing>, "Concept");
      goto L0(r15);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx22);
    };
    r17 = dyn split(p2, p3);
    check L25() else D4();
  D4():
    deopt 25 [r17];
  L8(dx1):
    c1 = `is.object`(dx1);
    if c1 then L12() else L13();
  L9():
    dr = tryDispatchBuiltin.1("$", db2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(db4):
    r4 = `$`(db4, <sym Concepts>);
    goto L8(r4);
  L25():
    st entries = r17;
    vapply = ldf vapply;
    check L26() else D5();
  D5():
    deopt 28 [];
  L3(dx5):
    db5 = ld db;
    check L15() else D1();
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L12():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L14() else L13();
  L13():
    __ = ldf `[` in base;
    r5 = dyn __(dx1, <missing>, "ID");
    goto L3(r5);
  L26():
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
    check L27() else D6();
  D1():
    deopt 9 [db5];
  D6():
    deopt 32 [r20];
  L14():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L15():
    db6 = force? db5;
    checkMissing(db6);
    c2 = `is.object`(db6);
    if c2 then L17() else L18(db6);
  L27():
    st enums = r20;
    vapply1 = ldf vapply;
    check L28() else D7();
  D7():
    deopt 35 [];
  L16(dx7):
    c3 = `is.object`(dx7);
    if c3 then L20() else L21();
  L17():
    dr4 = tryDispatchBuiltin.1("$", db6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L19() else L18(dr4);
  L18(db8):
    r6 = `$`(db8, <sym Base>);
    goto L16(r6);
  L28():
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
    check L29() else D8();
  D8():
    deopt 39 [r24];
  L4(dx11):
    match = ldf match in base;
    r8 = dyn match(dx5, dx11, NA_INT, NULL);
    check L23() else D2();
  L19():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L16(dx6);
  L20():
    dr6 = tryDispatchBuiltin.1("[", dx7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L22() else L21();
  L21():
    __1 = ldf `[` in base;
    r7 = dyn __1(dx7, <missing>, "ID");
    goto L4(r7);
  L29():
    st pnums = r24;
    order = ldf order;
    check L30() else D9();
  D2():
    deopt 19 [r8];
  D9():
    deopt 42 [];
  L22():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L4(dx10);
  L23():
    goto L2(r8);
  L30():
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
    r27 = dyn order[, , decreasing](p8, p9, TRUE);
    check L31() else D10();
  D10():
    deopt 47 [r27];
  L31():
    st pos = r27;
    list2DF = ldf list2DF;
    check L32() else D11();
  D11():
    deopt 50 [];
  L32():
    p10 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L5() else L6();
    L0(r29):
      return r29;
    L5():
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L7() else L8();
    L6():
      r28 = dyn base1[Concept, Frequency, Packages](<lang `[`(names(entries), pos)>, <lang `[`(enums, pos)>, <lang `[`(pnums, pos)>);
      goto L0(r28);
    L1(r31):
      c8 = `is.object`(r31);
      if c8 then L9() else L10(r31);
    L7():
      entries4 = ld entries;
      entries5 = force? entries4;
      checkMissing(entries5);
      names = ldf names in base;
      r32 = dyn names(entries5);
      goto L1(r32);
    L8():
      r30 = dyn base2(<sym entries>);
      goto L1(r30);
    L2(dx25):
      enums2 = ld enums;
      enums3 = force? enums2;
      checkMissing(enums3);
      c9 = `is.object`(enums3);
      if c9 then L12() else L13(enums3);
    L9():
      dr16 = tryDispatchBuiltin.1("[", r31);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L11() else L10(dr16);
    L10(r34):
      pos2 = ld pos;
      pos3 = force? pos2;
      __4 = ldf `[` in base;
      r35 = dyn __4(r34, pos3);
      goto L2(r35);
    L3(dx27):
      pnums2 = ld pnums;
      pnums3 = force? pnums2;
      checkMissing(pnums3);
      c10 = `is.object`(pnums3);
      if c10 then L15() else L16(pnums3);
    L11():
      dx24 = getTryDispatchBuiltinValue(dr16);
      goto L2(dx24);
    L12():
      dr18 = tryDispatchBuiltin.1("[", enums3);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L14() else L13(dr18);
    L13(enums5):
      pos4 = ld pos;
      pos5 = force? pos4;
      __5 = ldf `[` in base;
      r36 = dyn __5(enums5, pos5);
      goto L3(r36);
    L4(dx29):
      list = ldf list in base;
      r38 = dyn list(dx25, dx27, dx29);
      goto L0(r38);
    L14():
      dx26 = getTryDispatchBuiltinValue(dr18);
      goto L3(dx26);
    L15():
      dr20 = tryDispatchBuiltin.1("[", pnums3);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L17() else L16(dr20);
    L16(pnums5):
      pos6 = ld pos;
      pos7 = force? pos6;
      __6 = ldf `[` in base;
      r37 = dyn __6(pnums5, pos7);
      goto L4(r37);
    L17():
      dx28 = getTryDispatchBuiltinValue(dr20);
      goto L4(dx28);
    };
    r40 = dyn list2DF(p10);
    check L33() else D12();
  D12():
    deopt 52 [r40];
  L33():
    popenv;
    return r40;
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