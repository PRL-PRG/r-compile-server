fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3534892818;
    st CRAN_package_dependencies_with_dates = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3534892818(packages, which, recursive, db) {
  (reg packages:*, reg which:*, reg recursive:*, reg db:*) -+> V { var packages:*, var which:*, reg which_isMissing:L, reg which_orDefault:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var db:*, reg db_isMissing:L, reg db_orDefault:*, reg CRAN_package_db:cls, reg r:V, reg p:p(V +), reg _get_standard_repository_URLs:cls, reg r2:V, reg __:cls, reg r3:V, reg r4:cls, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg p1:p(V +), reg repos:*, reg repos1:V, reg p2:p(V +), reg r10:V, reg package_dependencies:cls, reg packages1:*, reg packages2:V, reg p3:p(V +), reg a:*, reg a1:V, reg p4:p(V +), reg which1:*, reg which2:V, reg p5:p(V +), reg recursive1:*, reg recursive2:V, reg p6:p(V +), reg r15:V, reg _get_standard_package_names:cls, reg r16:V, reg c:L, reg r18:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __1:cls, reg r19:V, reg lapply:cls, reg d:*, reg d1:V, reg p7:p(V +), reg r21:cls, reg p8:p(V +), reg r23:V |
    mkenv;
    st packages = packages;
    which_isMissing = missing.0(which);
    if which_isMissing then L0("most") else L0(which);
  L0(which_orDefault):
    st which = which_orDefault;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L1(FALSE) else L1(recursive);
  L1(recursive_orDefault):
    st recursive = recursive_orDefault;
    db_isMissing = missing.0(db);
    if db_isMissing then L2() else L3(db);
  L2():
    p = prom<V +>{
      CRAN_package_db = ldf CRAN_package_db;
      r = dyn CRAN_package_db();
      return r;
    };
    goto L3(p);
  L3(db_orDefault):
    st db = db_orDefault;
    _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    r2 = dyn _get_standard_repository_URLs();
    check L6() else D1();
  D1():
    deopt 2 [r2];
  L6():
    st repos = r2;
    __ = ldf `::`;
    check L7() else D2();
  D2():
    deopt 5 [];
  L7():
    r3 = dyn __("utils", "available.packages");
    check L8() else D3();
  D3():
    deopt 8 [r3];
  L8():
    checkFun.0(r3);
    r4 = r3 as cls;
    p1 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r6):
      return r6;
    L1():
      list = ldf list in base;
      r7 = dyn list();
      goto L0(r7);
    L2():
      r5 = dyn base();
      goto L0(r5);
    };
    p2 = prom<V +>{
      repos = ld repos;
      repos1 = force? repos;
      checkMissing(repos1);
      return repos1;
    };
    r10 = dyn r4[filters, repos](p1, p2);
    check L9() else D4();
  D4():
    deopt 14 [r10];
  L9():
    st a = r10;
    st pb = NULL;
    package_dependencies = ldf package_dependencies;
    check L10() else D5();
  D5():
    deopt 20 [];
  L10():
    p3 = prom<V +>{
      packages1 = ld packages;
      packages2 = force? packages1;
      checkMissing(packages2);
      return packages2;
    };
    p4 = prom<V +>{
      a = ld a;
      a1 = force? a;
      checkMissing(a1);
      return a1;
    };
    p5 = prom<V +>{
      which1 = ld which;
      which2 = force? which1;
      checkMissing(which2);
      return which2;
    };
    p6 = prom<V +>{
      recursive1 = ld recursive;
      recursive2 = force? recursive1;
      checkMissing(recursive2);
      return recursive2;
    };
    r15 = dyn package_dependencies[, , which, recursive](p3, p4, p5, p6);
    check L11() else D6();
  D6():
    deopt 27 [r15];
  L11():
    st d = r15;
    _get_standard_package_names = ldf `.get_standard_package_names`;
    check L12() else D7();
  D7():
    deopt 30 [];
  L12():
    r16 = dyn _get_standard_package_names();
    check L13() else D8();
  D8():
    deopt 31 [r16];
  L13():
    c = `is.object`(r16);
    if c then L14() else L15(r16);
  L4(dx1):
    st base_packages = dx1;
    lapply = ldf lapply;
    check L17() else D9();
  L14():
    dr = tryDispatchBuiltin.1("[[", r16);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15(dr);
  L15(r18):
    __1 = ldf `[[` in base;
    r19 = dyn __1(r18, "base");
    goto L4(r19);
  D9():
    deopt 37 [];
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L17():
    p7 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    p8 = prom<V +>{
      r21 = clos inner3708401697;
      return r21;
    };
    r23 = dyn lapply(p7, p8);
    check L18() else D10();
  D10():
    deopt 40 [r23];
  L18():
    popenv;
    return r23;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg setdiff:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg e1:*, reg e2:V, reg as_character:cls, reg r2:V, reg p:p(V +), reg base_packages:*, reg base_packages1:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg e3:*, reg e4:V, reg db:*, reg db1:V, reg c:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r8:V, reg match:cls, reg r9:V, reg db4:*, reg db5:V, reg c1:L, reg db7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i:*, reg i1:V, reg __1:cls, reg r10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r11:V, reg r12:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg i2:*, reg i3:V, reg is_na:cls, reg r15:V, reg any:cls, reg r16:V, reg c2:L, reg e5:*, reg e6:V, reg c3:L, reg e8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg j:*, reg j1:V, reg __2:cls, reg r17:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r18:V, reg r19:V, reg pb:*, reg pb1:V, reg c4:V, reg c5:L, reg BioC_package_db:cls, reg r20:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r22:V, reg r23:V, reg eb:*, reg eb1:V, reg pb2:*, reg pb3:V, reg c6:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r24:V, reg match1:cls, reg r25:V, reg pb6:*, reg pb7:V, reg c7:L, reg pb9:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg ib:*, reg ib1:V, reg __4:cls, reg r26:V, reg l:*, reg c8:L, reg dx11:V, reg l2:*, reg dr10:V, reg dc5:L, reg dx13:V, reg dx15:V, reg j2:*, reg j3:V, reg ___:cls, reg r27:V, reg paste0:cls, reg eb2:*, reg eb3:V, reg p2:p(V +), reg r29:V, reg l3:*, reg c9:L, reg r31:V, reg l5:*, reg dr12:V, reg dc6:L, reg dx16:V, reg r33:V, reg dx17:V, reg j4:*, reg j5:V, reg ___1:cls, reg r34:V, reg as_Date:cls, reg d:*, reg d1:V, reg p3:p(V +), reg r37:V, reg order:cls, reg d2:*, reg d3:V, reg p4:p(V +), reg r39:V, reg list2DF:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg e9:*, reg e10:V, reg c10:L, reg e12:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg o:*, reg o1:V, reg __5:cls, reg r42:V, reg d4:*, reg d5:V, reg c11:L, reg d7:V, reg dr16:V, reg dc8:L, reg dx20:V, reg dx21:V, reg o2:*, reg o3:V, reg __6:cls, reg r43:V, reg list:cls, reg r44:V, reg p5:p(V +), reg r46:V |
    mkenv;
    st e = e;
    setdiff = ldf setdiff;
    check L16() else D0();
  D0():
    deopt 1 [];
  L16():
    p = prom<V +>{
      sym = ldf `as.character`;
      base = ldf `as.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      as_character = ldf `as.character` in base;
      r2 = dyn as_character(e2);
      goto L0(r2);
    L2():
      r = dyn base(<sym e>);
      goto L0(r);
    };
    p1 = prom<V +>{
      base_packages = ld base_packages;
      base_packages1 = force? base_packages;
      checkMissing(base_packages1);
      return base_packages1;
    };
    r5 = dyn setdiff(p, p1);
    check L17() else D1();
  D1():
    deopt 4 [r5];
  L17():
    st e = r5;
    sym1 = ldf match;
    base1 = ldf match in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L18() else L19();
  L0(r7):
    st i = r7;
    db4 = ld db;
    check L26() else D5();
  L18():
    e3 = ld e;
    check L20() else D2();
  L19():
    r6 = dyn base1(<sym e>, <lang `[`(db, , "Package")>);
    goto L0(r6);
  D2():
    deopt 8 [e3];
  D5():
    deopt 21 [db4];
  L20():
    e4 = force? e3;
    checkMissing(e4);
    db = ld db;
    check L21() else D3();
  L26():
    db5 = force? db4;
    checkMissing(db5);
    c1 = `is.object`(db5);
    if c1 then L27() else L28(db5);
  D3():
    deopt 10 [db];
  L2(dx3):
    st d = dx3;
    sym2 = ldf any;
    base2 = ldf any in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L31() else L32();
  L21():
    db1 = force? db;
    checkMissing(db1);
    c = `is.object`(db1);
    if c then L22() else L23();
  L27():
    dr2 = tryDispatchBuiltin.1("[", db5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L29() else L28(dr2);
  L28(db7):
    i = ld i;
    check L30() else D6();
  D6():
    deopt 23 [db7, i];
  L1(dx1):
    match = ldf match in base;
    r9 = dyn match(e4, dx1, NA_INT, NULL);
    check L25() else D4();
  L3(r12):
    c2 = `as.logical`(r12);
    if c2 then L38() else L5();
  L22():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23();
  L23():
    __ = ldf `[` in base;
    r8 = dyn __(db1, <missing>, "Package");
    goto L1(r8);
  L29():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L2(dx2);
  L30():
    i1 = force? i;
    __1 = ldf `[` in base;
    r10 = dyn __1(db7, i1, "Published");
    goto L2(r10);
  L31():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L33() else L34();
  L32():
    r11 = dyn base2(<lang `<-`(j, is.na(i))>);
    goto L3(r11);
  D4():
    deopt 19 [r9];
  L4(r14):
    st j = r14;
    any = ldf any in base;
    r16 = dyn any(r14);
    check L37() else D9();
  L5():
    goto L15();
  L15():
    as_Date = ldf `as.Date`;
    check L75() else D24();
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L25():
    goto L0(r9);
  L33():
    i2 = ld i;
    check L35() else D7();
  L34():
    r13 = dyn base3(<sym i>);
    goto L4(r13);
  L38():
    e5 = ld e;
    check L39() else D10();
  D7():
    deopt 32 [i2];
  D9():
    deopt 38 [r16];
  D10():
    deopt 39 [e5];
  D24():
    deopt 94 [];
  L35():
    i3 = force? i2;
    checkMissing(i3);
    is_na = ldf `is.na` in base;
    r15 = dyn is_na(i3);
    check L36() else D8();
  L37():
    goto L3(r16);
  L39():
    e6 = force? e5;
    checkMissing(e6);
    c3 = `is.object`(e6);
    if c3 then L40() else L41(e6);
  L75():
    p3 = prom<V +>{
      d = ld d;
      d1 = force? d;
      checkMissing(d1);
      return d1;
    };
    r37 = dyn as_Date(p3);
    check L76() else D25();
  D8():
    deopt 35 [r15];
  D25():
    deopt 96 [r37];
  L6(dx5):
    st eb = dx5;
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L36():
    goto L4(r15);
  L40():
    dr4 = tryDispatchBuiltin.1("[", e6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L42() else L41(dr4);
  L41(e8):
    j = ld j;
    check L43() else D11();
  L76():
    st d = r37;
    order = ldf order;
    check L77() else D26();
  D11():
    deopt 41 [e8, j];
  D26():
    deopt 99 [];
  L7(r19):
    c5 = `as.logical`(r19);
    if c5 then L47() else L8();
  L42():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L43():
    j1 = force? j;
    __2 = ldf `[` in base;
    r17 = dyn __2(e8, j1);
    goto L6(r17);
  L44():
    pb = ld pb;
    check L46() else D12();
  L45():
    r18 = dyn base4(<sym pb>);
    goto L7(r18);
  L77():
    p4 = prom<V +>{
      d2 = ld d;
      d3 = force? d2;
      checkMissing(d3);
      return d3;
    };
    r39 = dyn order[, decreasing](p4, TRUE);
    check L78() else D27();
  D12():
    deopt 46 [pb];
  D27():
    deopt 103 [r39];
  L8():
    goto L9();
  L9():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L51() else L52();
  L46():
    pb1 = force? pb;
    checkMissing(pb1);
    c4 = `==`(pb1, NULL);
    goto L7(c4);
  L47():
    BioC_package_db = ldf BioC_package_db;
    check L48() else D13();
  L78():
    st o = r39;
    list2DF = ldf list2DF;
    check L79() else D28();
  D13():
    deopt 50 [];
  D28():
    deopt 106 [];
  L10(r23):
    st ib = r23;
    pb6 = ld pb;
    check L59() else D18();
  L48():
    r20 = dyn BioC_package_db();
    check L49() else D14();
  L51():
    eb = ld eb;
    check L53() else D15();
  L52():
    r22 = dyn base5(<sym eb>, <lang `[`(pb, , "Package")>);
    goto L10(r22);
  L79():
    p5 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L3() else L4();
    L0(r41):
      return r41;
    L3():
      e9 = ld e;
      e10 = force? e9;
      checkMissing(e10);
      c10 = `is.object`(e10);
      if c10 then L5() else L6(e10);
    L4():
      r40 = dyn base6[Package, Date](<lang `[`(e, o)>, <lang `[`(d, o)>);
      goto L0(r40);
    L1(dx19):
      d4 = ld d;
      d5 = force? d4;
      checkMissing(d5);
      c11 = `is.object`(d5);
      if c11 then L8() else L9(d5);
    L5():
      dr14 = tryDispatchBuiltin.1("[", e10);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(e12):
      o = ld o;
      o1 = force? o;
      __5 = ldf `[` in base;
      r42 = dyn __5(e12, o1);
      goto L1(r42);
    L2(dx21):
      list = ldf list in base;
      r44 = dyn list(dx19, dx21);
      goto L0(r44);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx18);
    L8():
      dr16 = tryDispatchBuiltin.1("[", d5);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L10() else L9(dr16);
    L9(d7):
      o2 = ld o;
      o3 = force? o2;
      __6 = ldf `[` in base;
      r43 = dyn __6(d7, o3);
      goto L2(r43);
    L10():
      dx20 = getTryDispatchBuiltinValue(dr16);
      goto L2(dx20);
    };
    r46 = dyn list2DF(p5);
    check L80() else D29();
  D14():
    deopt 51 [r20];
  D15():
    deopt 57 [eb];
  D18():
    deopt 70 [pb6];
  D29():
    deopt 108 [r46];
  L49():
    sst pb = r20;
    goto L9();
  L53():
    eb1 = force? eb;
    checkMissing(eb1);
    pb2 = ld pb;
    check L54() else D16();
  L59():
    pb7 = force? pb6;
    checkMissing(pb7);
    c7 = `is.object`(pb7);
    if c7 then L60() else L61(pb7);
  L80():
    popenv;
    return r46;
  D16():
    deopt 59 [pb2];
  L12(dx9):
    l = ld d;
    c8 = `is.object`(l);
    if c8 then L64() else L65(dx9, l);
  L54():
    pb3 = force? pb2;
    checkMissing(pb3);
    c6 = `is.object`(pb3);
    if c6 then L55() else L56();
  L60():
    dr8 = tryDispatchBuiltin.1("[", pb7);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L62() else L61(dr8);
  L61(pb9):
    ib = ld ib;
    check L63() else D19();
  D19():
    deopt 72 [pb9, ib];
  L11(dx7):
    match1 = ldf match in base;
    r25 = dyn match1(eb1, dx7, NA_INT, NULL);
    check L58() else D17();
  L13(dx15):
    st d = dx15;
    paste0 = ldf paste0;
    check L68() else D21();
  L55():
    dr6 = tryDispatchBuiltin.1("[", pb3);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L57() else L56();
  L56():
    __3 = ldf `[` in base;
    r24 = dyn __3(pb3, <missing>, "Package");
    goto L11(r24);
  L62():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L12(dx8);
  L63():
    ib1 = force? ib;
    __4 = ldf `[` in base;
    r26 = dyn __4(pb9, ib1, "Date/Publication");
    goto L12(r26);
  L64():
    dr10 = tryDispatchBuiltin.0("[<-", l, dx9);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L66() else L65(dx9, dr10);
  L65(dx11, l2):
    j2 = ld j;
    check L67() else D20();
  D17():
    deopt 68 [r25];
  D20():
    deopt 77 [dx11, l2, dx9, j2];
  D21():
    deopt 82 [];
  L57():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L11(dx6);
  L58():
    goto L10(r25);
  L66():
    dx13 = getTryDispatchBuiltinValue(dr10);
    goto L13(dx13);
  L67():
    j3 = force? j2;
    ___ = ldf `[<-` in base;
    r27 = dyn ___(l2, dx9, j3);
    goto L13(r27);
  L68():
    p2 = prom<V +>{
      eb2 = ld eb;
      eb3 = force? eb2;
      checkMissing(eb3);
      return eb3;
    };
    r29 = dyn paste0(p2, "*");
    check L69() else D22();
  D22():
    deopt 85 [r29];
  L69():
    l3 = ld e;
    c9 = `is.object`(l3);
    if c9 then L70() else L71(r29, l3);
  L14(r33, dx17):
    st e = dx17;
    goto L15();
  L70():
    dr12 = tryDispatchBuiltin.0("[<-", l3, r29);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L72() else L71(r29, dr12);
  L71(r31, l5):
    j4 = ld j;
    check L73() else D23();
  D23():
    deopt 87 [r31, l5, r29, j4];
  L72():
    dx16 = getTryDispatchBuiltinValue(dr12);
    goto L14(r29, dx16);
  L73():
    j5 = force? j4;
    ___1 = ldf `[<-` in base;
    r34 = dyn ___1(l5, r29, j5);
    goto L14(r31, r34);
  }
}