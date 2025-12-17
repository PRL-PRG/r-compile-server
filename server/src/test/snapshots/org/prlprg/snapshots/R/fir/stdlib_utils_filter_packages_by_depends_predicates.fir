fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3622163022;
    st filter_packages_by_depends_predicates = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3622163022(db, predicate, recursive) {
  (reg db:*, reg predicate:*, reg recursive:*) -+> V { var db:*, var predicate:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, reg data_frame:cls, reg db1:*, reg db2:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r:V, reg p:p(V +), reg r2:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg c1:cls, reg r5:V, reg fields:*, reg fields1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c2:L, reg x:V, reg lapply:cls, reg db5:*, reg db6:V, reg c3:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg f:*, reg f1:V, reg __1:cls, reg r6:V, reg p1:p(V +), reg ___:cls, reg r8:V, reg p2:p(V +), reg r10:V, reg l1:*, reg c4:L, reg i6:I, reg r12:V, reg l3:*, reg dr4:V, reg dc2:L, reg dx4:V, reg i8:I, reg dx5:V, reg f2:*, reg f3:V, reg ____:cls, reg r15:V, reg unique:cls, reg unlist:cls, reg db9:*, reg db10:V, reg c5:L, reg db12:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg fields2:*, reg fields3:V, reg __2:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg p4:p(V +), reg r20:V, reg all_packages:*, reg all_packages1:V, reg c6:L, reg all_packages3:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg all_packages6:V, reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg all_packages9:V, reg r24:V, reg all_packages10:*, reg all_packages11:V, reg db13:*, reg db14:V, reg c7:L, reg all_packages13:V, reg db16:V, reg dr10:V, reg dc5:L, reg dx10:V, reg all_packages15:V, reg dx11:V, reg r25:V, reg match:cls, reg r26:V, reg is_na:cls, reg r27:V, reg __3:cls, reg r28:V, reg setdiff:cls, reg bad_packages:*, reg bad_packages1:V, reg p5:p(V +), reg unlist1:cls, reg ___1:cls, reg r30:V, reg r31:cls, reg r32:V, reg p6:p(V +), reg r34:V, reg p7:p(V +), reg r36:V, reg predicate1:cls, reg db17:*, reg db18:V, reg p8:p(V +), reg r38:V, reg r39:V, reg __4:cls, reg r40:V, reg r41:cls, reg db19:*, reg db20:V, reg c8:L, reg db22:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r42:V, reg c9:L, reg dx15:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg ind:*, reg ind1:V, reg __5:cls, reg r43:V, reg p9:p(V +), reg db23:*, reg db24:V, reg p10:p(V +), reg recursive1:*, reg recursive2:V, reg p11:p(V +), reg r47:V, reg unique1:cls, reg unlist2:cls, reg rdepends:*, reg rdepends1:V, reg p12:p(V +), reg r49:V, reg p13:p(V +), reg r51:V, reg l4:*, reg c10:L, reg r53:L, reg l6:*, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r60:V, reg r61:L, reg l9:*, reg r62:L, reg r63:V, reg rdepends2:*, reg rdepends3:V, reg db25:*, reg db26:V, reg c11:L, reg r66:L, reg l11:*, reg r67:L, reg db28:V, reg dr18:V, reg dc9:L, reg dx20:V, reg r70:L, reg l13:*, reg r71:L, reg dx21:V, reg r72:V, reg match1:cls, reg r73:V, reg ___2:cls, reg r74:V, reg db29:*, reg db30:V, reg c12:L, reg db32:V, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg ind2:*, reg ind3:V, reg r75:V, reg __6:cls, reg r76:V |
    mkenv;
    st db = db;
    st predicate = predicate;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(TRUE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    data_frame = ldf `data.frame`;
    check L11() else D0();
  D0():
    deopt 1 [];
  L11():
    p = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      c = `is.object`(db2);
      if c then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", db2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r = dyn __(db2, <missing>, "Package");
      goto L0(r);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r2 = dyn data_frame[Package, stringsAsFactors](p, FALSE);
    check L12() else D1();
  D1():
    deopt 6 [r2];
  L12():
    st db1 = r2;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L13() else L14();
  L1(r4):
    st fields = r4;
    fields = ld fields;
    check L16() else D3();
  L13():
    c1 = ldf c in base;
    r5 = dyn c1("Depends", "Imports", "LinkingTo");
    check L15() else D2();
  L14():
    r3 = dyn base("Depends", "Imports", "LinkingTo");
    goto L1(r3);
  D2():
    deopt 14 [r5];
  D3():
    deopt 16 [fields];
  L15():
    goto L1(r5);
  L16():
    fields1 = force? fields;
    checkMissing(fields1);
    s = toForSeq(fields1);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c2 = `<`.1(l, i2);
    if c2 then L17() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    lapply = ldf lapply;
    check L18() else D4();
  L17():
    unique = ldf unique;
    check L24() else D7();
  D4():
    deopt 19 [i2];
  D7():
    deopt 32 [];
  L18():
    p1 = prom<V +>{
      db5 = ld db;
      db6 = force? db5;
      checkMissing(db6);
      c3 = `is.object`(db6);
      if c3 then L1() else L2();
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", db6);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2();
    L2():
      f = ld f;
      f1 = force? f;
      __1 = ldf `[` in base;
      r6 = dyn __1(db6, <missing>, f1);
      goto L0(r6);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p2 = prom<V +>{
      ___ = ldf `:::`;
      r8 = dyn ___("tools", ".extract_dependency_package_names");
      return r8;
    };
    r10 = dyn lapply(p1, p2);
    check L19() else D5();
  L24():
    p4 = prom<V +>{
      unlist = ldf unlist;
      p3 = prom<V +>{
        db9 = ld db1;
        db10 = force? db9;
        checkMissing(db10);
        c5 = `is.object`(db10);
        if c5 then L1() else L2(db10);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", db10);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(db12):
        fields2 = ld fields;
        fields3 = force? fields2;
        __2 = ldf `[` in base;
        r16 = dyn __2(db12, fields3);
        goto L0(r16);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r18 = dyn unlist[, `use.names`](p3, FALSE);
      return r18;
    };
    r20 = dyn unique(p4);
    check L25() else D8();
  D5():
    deopt 22 [i2, r10];
  D8():
    deopt 34 [r20];
  L19():
    l1 = ld db1;
    c4 = `is.object`(l1);
    if c4 then L20() else L21(i2, r10, l1);
  L25():
    st all_packages = r20;
    all_packages = ld all_packages;
    check L26() else D9();
  D9():
    deopt 36 [all_packages];
  L3(i8, dx5):
    st db1 = dx5;
    goto L2(i8);
  L20():
    dr4 = tryDispatchBuiltin.0("[[<-", l1, r10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L22() else L21(i2, r10, dr4);
  L21(i6, r12, l3):
    f2 = ld f;
    check L23() else D6();
  L26():
    all_packages1 = force? all_packages;
    checkMissing(all_packages1);
    c6 = `is.object`(all_packages1);
    if c6 then L27() else L28(all_packages1);
  D6():
    deopt 24 [i6, r12, l3, r10, f2];
  L5(dx9):
    st bad_packages = dx9;
    setdiff = ldf setdiff;
    check L42() else D14();
  L22():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L3(i2, dx4);
  L23():
    f3 = force? f2;
    ____ = ldf `[[<-` in base;
    r15 = dyn ____(l3, r10, f3);
    goto L3(i6, r15);
  L27():
    dr8 = tryDispatchBuiltin.1("[", all_packages1);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L29() else L28(dr8);
  L28(all_packages3):
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  D14():
    deopt 56 [];
  L6(all_packages6, r22):
    __3 = ldf `[` in base;
    r28 = dyn __3(all_packages6, r22);
    goto L5(r28);
  L29():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L5(dx8);
  L30():
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L31():
    r21 = dyn base1(<lang match(all_packages, `$`(db1, Package))>);
    goto L6(all_packages3, r21);
  L42():
    p5 = prom<V +>{
      bad_packages = ld bad_packages;
      bad_packages1 = force? bad_packages;
      checkMissing(bad_packages1);
      return bad_packages1;
    };
    p7 = prom<V +>{
      unlist1 = ldf unlist;
      p6 = prom<V +>{
        ___1 = ldf `:::`;
        r30 = dyn ___1("tools", ".get_standard_package_names");
        checkFun.0(r30);
        r31 = r30 as cls;
        r32 = dyn r31();
        return r32;
      };
      r34 = dyn unlist1(p6);
      return r34;
    };
    r36 = dyn setdiff(p5, p7);
    check L43() else D15();
  D15():
    deopt 59 [r36];
  L7(all_packages9, r24):
    is_na = ldf `is.na` in base;
    r27 = dyn is_na(r24);
    check L41() else D13();
  L32():
    all_packages10 = ld all_packages;
    check L34() else D10();
  L33():
    r23 = dyn base2(<sym all_packages>, <lang `$`(db1, Package)>);
    goto L7(all_packages3, r23);
  L43():
    st bad_packages = r36;
    predicate1 = ldf predicate;
    check L44() else D16();
  D10():
    deopt 42 [all_packages3, all_packages10];
  D13():
    deopt 52 [all_packages9, r27];
  D16():
    deopt 62 [];
  L34():
    all_packages11 = force? all_packages10;
    checkMissing(all_packages11);
    db13 = ld db1;
    check L35() else D11();
  L41():
    goto L6(all_packages9, r27);
  L44():
    p8 = prom<V +>{
      db17 = ld db;
      db18 = force? db17;
      checkMissing(db18);
      return db18;
    };
    r38 = dyn predicate1(p8);
    check L45() else D17();
  D11():
    deopt 44 [all_packages3, db13];
  D17():
    deopt 64 [r38];
  L35():
    db14 = force? db13;
    checkMissing(db14);
    c7 = `is.object`(db14);
    if c7 then L37() else L38(all_packages3, db14);
  L45():
    r39 = `!`(r38);
    st ind = r39;
    __4 = ldf `::`;
    check L46() else D18();
  D18():
    deopt 68 [];
  L36(all_packages15, dx11):
    match = ldf match in base;
    r26 = dyn match(all_packages11, dx11, NA_INT, NULL);
    check L40() else D12();
  L37():
    dr10 = tryDispatchBuiltin.1("$", db14);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L39() else L38(all_packages3, dr10);
  L38(all_packages13, db16):
    r25 = `$`(db16, <sym Package>);
    goto L36(all_packages13, r25);
  L46():
    r40 = dyn __4("tools", "package_dependencies");
    check L47() else D19();
  D12():
    deopt 50 [all_packages15, r26];
  D19():
    deopt 71 [r40];
  L39():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L36(all_packages3, dx10);
  L40():
    goto L7(all_packages15, r26);
  L47():
    checkFun.0(r40);
    r41 = r40 as cls;
    p9 = prom<V +>{
      db19 = ld db1;
      db20 = force? db19;
      checkMissing(db20);
      c8 = `is.object`(db20);
      if c8 then L2() else L3(db20);
    L1(dx13):
      c9 = `is.object`(dx13);
      if c9 then L5() else L6(dx13);
    L2():
      dr12 = tryDispatchBuiltin.1("$", db20);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(db22):
      r42 = `$`(db22, <sym Package>);
      goto L1(r42);
    L0(dx17):
      return dx17;
    L4():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx12);
    L5():
      dr14 = tryDispatchBuiltin.1("[", dx13);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(dx15):
      ind = ld ind;
      ind1 = force? ind;
      __5 = ldf `[` in base;
      r43 = dyn __5(dx15, ind1);
      goto L0(r43);
    L7():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    p10 = prom<V +>{
      db23 = ld db1;
      db24 = force? db23;
      checkMissing(db24);
      return db24;
    };
    p11 = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    r47 = dyn r41[, db, reverse, recursive](p9, p10, TRUE, p11);
    check L48() else D20();
  D20():
    deopt 80 [r47];
  L48():
    st rdepends = r47;
    unique1 = ldf unique;
    check L49() else D21();
  D21():
    deopt 83 [];
  L49():
    p13 = prom<V +>{
      unlist2 = ldf unlist;
      p12 = prom<V +>{
        rdepends = ld rdepends;
        rdepends1 = force? rdepends;
        checkMissing(rdepends1);
        return rdepends1;
      };
      r49 = dyn unlist2(p12);
      return r49;
    };
    r51 = dyn unique1(p13);
    check L50() else D22();
  D22():
    deopt 85 [r51];
  L50():
    st rdepends = r51;
    l4 = ld ind;
    c10 = `is.object`(l4);
    if c10 then L51() else L52(TRUE, l4);
  L8(dx19):
    st ind = dx19;
    db29 = ld db;
    check L63() else D26();
  L51():
    dr16 = tryDispatchBuiltin.0("[<-", l4, TRUE);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L53() else L52(TRUE, dr16);
  L52(r53, l6):
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L54() else L55();
  D26():
    deopt 103 [db29];
  L9(r61, l9, r62, r63):
    ___2 = ldf `[<-` in base;
    r74 = dyn ___2(l9, r62, r63);
    goto L8(r74);
  L53():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L8(dx18);
  L54():
    rdepends2 = ld rdepends;
    check L56() else D23();
  L55():
    r60 = dyn base3[, , nomatch](<sym rdepends>, <lang `$`(db1, Package)>, 0);
    goto L9(r53, l6, TRUE, r60);
  L63():
    db30 = force? db29;
    checkMissing(db30);
    c12 = `is.object`(db30);
    if c12 then L64() else L65(db30);
  D23():
    deopt 92 [r53, l6, TRUE, rdepends2];
  L10(dx23):
    popenv;
    return dx23;
  L56():
    rdepends3 = force? rdepends2;
    checkMissing(rdepends3);
    db25 = ld db1;
    check L57() else D24();
  L64():
    dr20 = tryDispatchBuiltin.1("[", db30);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L66() else L65(dr20);
  L65(db32):
    ind2 = ld ind;
    check L67() else D27();
  D24():
    deopt 94 [r53, l6, TRUE, db25];
  D27():
    deopt 105 [db32, ind2];
  L57():
    db26 = force? db25;
    checkMissing(db26);
    c11 = `is.object`(db26);
    if c11 then L59() else L60(r53, l6, TRUE, db26);
  L66():
    dx22 = getTryDispatchBuiltinValue(dr20);
    goto L10(dx22);
  L67():
    ind3 = force? ind2;
    checkMissing(ind3);
    r75 = `!`(ind3);
    __6 = ldf `[` in base;
    r76 = dyn __6(db30, r75, <missing>, FALSE);
    goto L10(r76);
  L58(r70, l13, r71, dx21):
    match1 = ldf match in base;
    r73 = dyn match1(rdepends3, dx21, 0, NULL);
    check L62() else D25();
  L59():
    dr18 = tryDispatchBuiltin.1("$", db26);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L61() else L60(r53, l6, TRUE, dr18);
  L60(r66, l11, r67, db28):
    r72 = `$`(db28, <sym Package>);
    goto L58(r66, l11, r67, r72);
  D25():
    deopt 100 [r70, l13, r71, r73];
  L61():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L58(r53, l6, TRUE, dx20);
  L62():
    goto L9(r70, l13, r71, r73);
  }
}