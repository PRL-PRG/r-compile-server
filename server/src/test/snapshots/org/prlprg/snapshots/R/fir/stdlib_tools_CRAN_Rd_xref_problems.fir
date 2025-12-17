fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st CRAN_Rd_xref_problems = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg list:cls, reg r2:V, reg CRAN_Rd_xref_db_with_expansions:cls, reg r3:V, reg db:*, reg db1:V, reg c:L, reg db3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg db7:*, reg db8:V, reg c1:L, reg db11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg db14:V, reg dx3:V, reg __:cls, reg r6:V, reg nzchar:cls, reg r7:V, reg __1:cls, reg r8:V, reg cbind:cls, reg db15:*, reg db16:V, reg p:p(V +), reg _Rd_object_id:cls, reg db17:*, reg db18:V, reg c2:L, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __2:cls, reg r10:V, reg p1:p(V +), reg db21:*, reg db22:V, reg c3:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __3:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg sub:cls, reg rownames:cls, reg CRAN_current_db:cls, reg r17:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg db25:*, reg db26:V, reg c4:L, reg db28:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r24:V, reg db34:V, reg r25:V, reg db35:*, reg db36:V, reg c5:L, reg db39:V, reg dr10:V, reg dc5:L, reg dx10:V, reg db42:V, reg dx11:V, reg __4:cls, reg r26:V, reg current:*, reg current1:V, reg match:cls, reg r27:V, reg is_na:cls, reg r28:V, reg r29:V, reg __5:cls, reg r30:V, reg db43:*, reg db44:V, reg c6:L, reg db46:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r31:V, reg r32:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r33:V, reg db52:V, reg r34:V, reg db53:*, reg db54:V, reg c7:L, reg db57:V, reg dr14:V, reg dc7:L, reg dx14:V, reg db60:V, reg dx15:V, reg __6:cls, reg r35:V, reg CRAN_Rd_xref_available_target_ids:cls, reg r36:V, reg match1:cls, reg r37:V, reg is_na1:cls, reg r38:V, reg __7:cls, reg r39:V, reg l:*, reg c8:L, reg dx17:V, reg l2:*, reg dr16:V, reg dc8:L, reg dx19:V, reg dx21:V, reg r40:V, reg _get_standard_repository_URLs:cls, reg r41:V, reg setdiff:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r42:V, reg r43:V, reg CRAN_archive_db:cls, reg r44:V, reg names:cls, reg r45:V, reg p6:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r47:V, reg r48:V, reg rownames1:cls, reg __8:cls, reg r49:V, reg r50:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r51:V, reg r52:V, reg list1:cls, reg r53:V, reg p7:p(V +), reg repos:*, reg repos1:V, reg p8:p(V +), reg r56:V, reg p9:p(V +), reg r58:V, reg unlist:cls, reg _get_standard_package_names:cls, reg r59:V, reg p10:p(V +), reg r61:V, reg c9:cls, reg r62:V, reg p11:p(V +), reg r64:V, reg db61:*, reg db62:V, reg c10:L, reg db64:V, reg dr18:V, reg dc9:L, reg dx22:V, reg dx23:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r65:V, reg r66:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r67:V, reg db70:V, reg r68:V, reg db71:*, reg db72:V, reg c11:L, reg db75:V, reg dr20:V, reg dc10:L, reg dx24:V, reg db78:V, reg dx25:V, reg __9:cls, reg r69:V, reg archived:*, reg archived1:V, reg match2:cls, reg r70:V, reg is_na2:cls, reg r71:V, reg r72:V, reg __10:cls, reg r73:V, reg l3:*, reg c12:L, reg dx27:V, reg l5:*, reg dr22:V, reg dc11:L, reg dx29:V, reg dx31:V, reg r74:V, reg y:*, reg y1:V |
    mkenv;
    sym = ldf list;
    base = ldf list in base;
    guard = `==`.4(sym, base);
    if guard then L16() else L17();
  L0(r1):
    st y = r1;
    CRAN_Rd_xref_db_with_expansions = ldf CRAN_Rd_xref_db_with_expansions;
    check L19() else D1();
  L16():
    list = ldf list in base;
    r2 = dyn list();
    check L18() else D0();
  L17():
    r = dyn base();
    goto L0(r);
  D0():
    deopt 3 [r2];
  D1():
    deopt 6 [];
  L18():
    goto L0(r2);
  L19():
    r3 = dyn CRAN_Rd_xref_db_with_expansions();
    check L20() else D2();
  D2():
    deopt 7 [r3];
  L20():
    st db = r3;
    db = ld db;
    check L21() else D3();
  D3():
    deopt 9 [db];
  L21():
    db1 = force? db;
    checkMissing(db1);
    c = `is.object`(db1);
    if c then L22() else L23(db1);
  L1(dx1):
    st db = dx1;
    cbind = ldf cbind;
    check L32() else D6();
  L22():
    dr = tryDispatchBuiltin.1("[", db1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L24() else L23(dr);
  L23(db3):
    sym1 = ldf nzchar;
    base1 = ldf nzchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L25() else L26();
  D6():
    deopt 28 [];
  L2(r5):
    __1 = ldf `[` in base;
    r8 = dyn __1(db1, r5, <missing>, FALSE);
    goto L1(r8);
  L24():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L25():
    db7 = ld db;
    check L27() else D4();
  L26():
    r4 = dyn base1(<lang `[`(db, , "T_Package")>);
    goto L2(r4);
  L32():
    p = prom<V +>{
      db15 = ld db;
      db16 = force? db15;
      checkMissing(db16);
      return db16;
    };
    p3 = prom<V +>{
      _Rd_object_id = ldf `.Rd_object_id`;
      p1 = prom<V +>{
        db17 = ld db;
        db18 = force? db17;
        checkMissing(db18);
        c2 = `is.object`(db18);
        if c2 then L1() else L2();
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", db18);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2();
      L2():
        __2 = ldf `[` in base;
        r10 = dyn __2(db18, <missing>, "T_Package");
        goto L0(r10);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      p2 = prom<V +>{
        db21 = ld db;
        db22 = force? db21;
        checkMissing(db22);
        c3 = `is.object`(db22);
        if c3 then L1() else L2();
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", db22);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2();
      L2():
        __3 = ldf `[` in base;
        r12 = dyn __3(db22, <missing>, "T_File");
        goto L0(r12);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r14 = dyn _Rd_object_id(p1, p2);
      return r14;
    };
    r16 = dyn cbind[, T_ID](p, p3);
    check L33() else D7();
  D4():
    deopt 13 [db3, db7];
  D7():
    deopt 32 [r16];
  L27():
    db8 = force? db7;
    checkMissing(db8);
    c1 = `is.object`(db8);
    if c1 then L28() else L29(db3);
  L33():
    st db = r16;
    sub = ldf sub;
    check L34() else D8();
  D8():
    deopt 35 [];
  L3(db14, dx3):
    nzchar = ldf nzchar in base;
    r7 = dyn nzchar(dx3);
    check L31() else D5();
  L28():
    dr2 = tryDispatchBuiltin.1("[", db8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L30() else L29(db3);
  L29(db11):
    __ = ldf `[` in base;
    r6 = dyn __(db8, <missing>, "T_Package");
    goto L3(db11, r6);
  L34():
    p5 = prom<V +>{
      rownames = ldf rownames;
      p4 = prom<V +>{
        CRAN_current_db = ldf CRAN_current_db;
        r17 = dyn CRAN_current_db();
        return r17;
      };
      r19 = dyn rownames(p4);
      return r19;
    };
    r21 = dyn sub("_.*", "", p5);
    check L35() else D9();
  D5():
    deopt 20 [db14, r7];
  D9():
    deopt 39 [r21];
  L30():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(db3, dx2);
  L31():
    goto L2(r7);
  L35():
    st current = r21;
    db25 = ld db;
    check L36() else D10();
  D10():
    deopt 41 [db25];
  L36():
    db26 = force? db25;
    checkMissing(db26);
    c4 = `is.object`(db26);
    if c4 then L37() else L38(db26);
  L4(dx9):
    st db1 = dx9;
    db43 = ld db1;
    check L51() else D15();
  L37():
    dr8 = tryDispatchBuiltin.1("[", db26);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L39() else L38(dr8);
  L38(db28):
    sym2 = ldf `is.na`;
    base2 = ldf `is.na` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L40() else L41();
  D15():
    deopt 68 [db43];
  L5(r23):
    r29 = `!`(r23);
    __5 = ldf `[` in base;
    r30 = dyn __5(db26, r29, <missing>, FALSE);
    goto L4(r30);
  L39():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L4(dx8);
  L40():
    sym3 = ldf match;
    base3 = ldf match in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L42() else L43();
  L41():
    r22 = dyn base2(<lang match(`[`(db, , "T_Package"), current)>);
    goto L5(r22);
  L51():
    db44 = force? db43;
    checkMissing(db44);
    c6 = `is.object`(db44);
    if c6 then L52() else L53(db44);
  L6(db34, r25):
    is_na = ldf `is.na` in base;
    r28 = dyn is_na(r25);
    check L50() else D14();
  L8(dx13):
    l = ld y;
    c8 = `is.object`(l);
    if c8 then L68() else L69(dx13, l);
  L42():
    db35 = ld db;
    check L44() else D11();
  L43():
    r24 = dyn base3(<lang `[`(db, , "T_Package")>, <sym current>);
    goto L6(db28, r24);
  L52():
    dr12 = tryDispatchBuiltin.1("[", db44);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L54() else L53(dr12);
  L53(db46):
    sym4 = ldf `is.na`;
    base4 = ldf `is.na` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  D11():
    deopt 47 [db28, db35];
  D14():
    deopt 60 [db34, r28];
  L9(r32):
    __7 = ldf `[` in base;
    r39 = dyn __7(db44, r32, <missing>, FALSE);
    goto L8(r39);
  L44():
    db36 = force? db35;
    checkMissing(db36);
    c5 = `is.object`(db36);
    if c5 then L45() else L46(db28);
  L50():
    goto L5(r28);
  L54():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L8(dx12);
  L55():
    sym5 = ldf match;
    base5 = ldf match in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L57() else L58();
  L56():
    r31 = dyn base4(<lang match(`[`(db1, , "T_ID"), CRAN_Rd_xref_available_target_ids())>);
    goto L9(r31);
  L67(dx21):
    st y = dx21;
    _get_standard_repository_URLs = ldf `.get_standard_repository_URLs`;
    check L71() else D21();
  L68():
    dr16 = tryDispatchBuiltin.0("$<-", l, dx13);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L70() else L69(dx13, dr16);
  L69(dx17, l2):
    r40 = `$<-`(l2, <sym broken_xrefs_to_current_CRAN_packages>, dx13);
    goto L67(r40);
  D21():
    deopt 98 [];
  L7(db42, dx11):
    current = ld current;
    check L48() else D12();
  L10(db52, r34):
    is_na1 = ldf `is.na` in base;
    r38 = dyn is_na1(r34);
    check L66() else D20();
  L45():
    dr10 = tryDispatchBuiltin.1("[", db36);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L47() else L46(db28);
  L46(db39):
    __4 = ldf `[` in base;
    r26 = dyn __4(db36, <missing>, "T_Package");
    goto L7(db39, r26);
  L57():
    db53 = ld db1;
    check L59() else D16();
  L58():
    r33 = dyn base5(<lang `[`(db1, , "T_ID")>, <lang CRAN_Rd_xref_available_target_ids()>);
    goto L10(db46, r33);
  L70():
    dx19 = getTryDispatchBuiltinValue(dr16);
    goto L67(dx19);
  L71():
    r41 = dyn _get_standard_repository_URLs();
    check L72() else D22();
  D12():
    deopt 53 [db42, current];
  D16():
    deopt 74 [db46, db53];
  D20():
    deopt 88 [db52, r38];
  D22():
    deopt 99 [r41];
  L47():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L7(db28, dx10);
  L48():
    current1 = force? current;
    checkMissing(current1);
    match = ldf match in base;
    r27 = dyn match(dx11, current1, NA_INT, NULL);
    check L49() else D13();
  L59():
    db54 = force? db53;
    checkMissing(db54);
    c7 = `is.object`(db54);
    if c7 then L60() else L61(db46);
  L66():
    goto L9(r38);
  L72():
    st repos = r41;
    setdiff = ldf setdiff;
    check L73() else D23();
  D13():
    deopt 58 [db42, r27];
  D23():
    deopt 102 [];
  L11(db60, dx15):
    CRAN_Rd_xref_available_target_ids = ldf CRAN_Rd_xref_available_target_ids;
    check L63() else D17();
  L49():
    goto L6(db42, r27);
  L60():
    dr14 = tryDispatchBuiltin.1("[", db54);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L62() else L61(db46);
  L61(db57):
    __6 = ldf `[` in base;
    r35 = dyn __6(db54, <missing>, "T_ID");
    goto L11(db57, r35);
  L73():
    p6 = prom<V +>{
      sym6 = ldf names;
      base6 = ldf names in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r43):
      return r43;
    L1():
      CRAN_archive_db = ldf CRAN_archive_db;
      r44 = dyn CRAN_archive_db();
      names = ldf names in base;
      r45 = dyn names(r44);
      goto L0(r45);
    L2():
      r42 = dyn base6(<lang CRAN_archive_db()>);
      goto L0(r42);
    };
    p11 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r48):
      return r48;
    L1():
      rownames1 = ldf rownames;
      p9 = prom<V +>{
        __8 = ldf `::`;
        r49 = dyn __8("utils", "available.packages");
        checkFun.0(r49);
        r50 = r49 as cls;
        p7 = prom<V +>{
          sym8 = ldf list;
          base8 = ldf list in base;
          guard8 = `==`.4(sym8, base8);
          if guard8 then L1() else L2();
        L0(r52):
          return r52;
        L1():
          list1 = ldf list in base;
          r53 = dyn list1();
          goto L0(r53);
        L2():
          r51 = dyn base8();
          goto L0(r51);
        };
        p8 = prom<V +>{
          repos = ld repos;
          repos1 = force? repos;
          checkMissing(repos1);
          return repos1;
        };
        r56 = dyn r50[filters, repos](p7, p8);
        return r56;
      };
      r58 = dyn rownames1(p9);
      unlist = ldf unlist;
      p10 = prom<V +>{
        _get_standard_package_names = ldf `.get_standard_package_names`;
        r59 = dyn _get_standard_package_names();
        return r59;
      };
      r61 = dyn unlist[, `use.names`](p10, FALSE);
      c9 = ldf c in base;
      r62 = dyn c9(r58, r61);
      goto L0(r62);
    L2():
      r47 = dyn base7(<lang rownames(`::`(utils, available.packages)(filters=list(), repos=repos))>, <lang unlist(.get_standard_package_names(), use.names=FALSE)>);
      goto L0(r47);
    };
    r64 = dyn setdiff(p6, p11);
    check L74() else D24();
  D17():
    deopt 81 [db60];
  D24():
    deopt 105 [r64];
  L62():
    dx14 = getTryDispatchBuiltinValue(dr14);
    goto L11(db46, dx14);
  L63():
    r36 = dyn CRAN_Rd_xref_available_target_ids();
    check L64() else D18();
  L74():
    st archived = r64;
    db61 = ld db;
    check L75() else D25();
  D18():
    deopt 82 [db60, r36];
  D25():
    deopt 107 [db61];
  L64():
    match1 = ldf match in base;
    r37 = dyn match1(dx15, r36, NA_INT, NULL);
    check L65() else D19();
  L75():
    db62 = force? db61;
    checkMissing(db62);
    c10 = `is.object`(db62);
    if c10 then L76() else L77(db62);
  D19():
    deopt 86 [db60, r37];
  L12(dx23):
    l3 = ld y;
    c12 = `is.object`(l3);
    if c12 then L91() else L92(dx23, l3);
  L65():
    goto L10(db60, r37);
  L76():
    dr18 = tryDispatchBuiltin.1("[", db62);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L78() else L77(dr18);
  L77(db64):
    sym9 = ldf `is.na`;
    base9 = ldf `is.na` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L79() else L80();
  L13(r66):
    r72 = `!`(r66);
    __10 = ldf `[` in base;
    r73 = dyn __10(db62, r72, <missing>, FALSE);
    goto L12(r73);
  L78():
    dx22 = getTryDispatchBuiltinValue(dr18);
    goto L12(dx22);
  L79():
    sym10 = ldf match;
    base10 = ldf match in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L81() else L82();
  L80():
    r65 = dyn base9(<lang match(`[`(db, , "T_Package"), archived)>);
    goto L13(r65);
  L90(dx31):
    st y = dx31;
    y = ld y;
    check L94() else D30();
  L91():
    dr22 = tryDispatchBuiltin.0("$<-", l3, dx23);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L93() else L92(dx23, dr22);
  L92(dx27, l5):
    r74 = `$<-`(l5, <sym xrefs_likely_to_archived_CRAN_packages>, dx23);
    goto L90(r74);
  D30():
    deopt 136 [y];
  L14(db70, r68):
    is_na2 = ldf `is.na` in base;
    r71 = dyn is_na2(r68);
    check L89() else D29();
  L81():
    db71 = ld db;
    check L83() else D26();
  L82():
    r67 = dyn base10(<lang `[`(db, , "T_Package")>, <sym archived>);
    goto L14(db64, r67);
  L93():
    dx29 = getTryDispatchBuiltinValue(dr22);
    goto L90(dx29);
  L94():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  D26():
    deopt 113 [db64, db71];
  D29():
    deopt 126 [db70, r71];
  L83():
    db72 = force? db71;
    checkMissing(db72);
    c11 = `is.object`(db72);
    if c11 then L84() else L85(db64);
  L89():
    goto L13(r71);
  L15(db78, dx25):
    archived = ld archived;
    check L87() else D27();
  L84():
    dr20 = tryDispatchBuiltin.1("[", db72);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L86() else L85(db64);
  L85(db75):
    __9 = ldf `[` in base;
    r69 = dyn __9(db72, <missing>, "T_Package");
    goto L15(db75, r69);
  D27():
    deopt 119 [db78, archived];
  L86():
    dx24 = getTryDispatchBuiltinValue(dr20);
    goto L15(db64, dx24);
  L87():
    archived1 = force? archived;
    checkMissing(archived1);
    match2 = ldf match in base;
    r70 = dyn match2(dx25, archived1, NA_INT, NULL);
    check L88() else D28();
  D28():
    deopt 124 [db78, r70];
  L88():
    goto L14(db78, r70);
  }
}