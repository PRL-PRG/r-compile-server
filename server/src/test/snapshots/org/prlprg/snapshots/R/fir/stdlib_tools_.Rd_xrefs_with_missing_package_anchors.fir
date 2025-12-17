fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3729631769;
    st `.Rd_xrefs_with_missing_package_anchors` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3729631769(dir, level) {
  (reg dir:*, reg level:*) -+> V { var dir:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, reg Rd_db:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg db:*, reg db1:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg lapply:cls, reg db2:*, reg db3:V, reg p1:p(V +), reg _Rd_get_metadata:*, reg _Rd_get_metadata1:V, reg p2:p(V +), reg r10:V, reg lapply1:cls, reg db4:*, reg db5:V, reg p3:p(V +), reg _Rd_get_xrefs:*, reg _Rd_get_xrefs1:V, reg p4:p(V +), reg r13:V, reg cbind:cls, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p5:p(V +), reg rdxrefs:*, reg rdxrefs1:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg rdxrefs2:*, reg rdxrefs3:V, reg names:cls, reg r22:V, reg vapply:cls, reg rdxrefs4:*, reg rdxrefs5:V, reg p8:p(V +), reg NROW:*, reg NROW1:V, reg p9:p(V +), reg r25:V, reg rep_int:cls, reg r26:V, reg p10:p(V +), reg r28:V, reg rdxrefs6:*, reg rdxrefs7:V, reg c1:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r29:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r30:V, reg r31:V, reg startsWith:cls, reg anchors:*, reg anchors1:V, reg p11:p(V +), reg r33:V, reg any:cls, reg r34:V, reg c2:L, reg cbind1:cls, reg sub:cls, reg anchors2:*, reg anchors3:V, reg c3:L, reg anchors5:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ind:*, reg ind1:V, reg __1:cls, reg r35:V, reg p12:p(V +), reg r37:V, reg p13:p(V +), reg r39:V, reg l:*, reg c4:L, reg r41:V, reg l2:*, reg dr4:V, reg dc2:L, reg dx4:V, reg r43:V, reg dx5:V, reg ind2:*, reg ind3:V, reg ___:cls, reg r44:V, reg rdxrefs10:*, reg rdxrefs11:V, reg c5:L, reg rdxrefs13:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg rdxrefs17:*, reg rdxrefs18:V, reg c6:L, reg rdxrefs21:V, reg dr8:V, reg dc4:L, reg dx8:V, reg rdxrefs24:V, reg dx9:V, reg __2:cls, reg r48:V, reg nzchar:cls, reg r49:V, reg r50:V, reg __3:cls, reg r51:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r52:V, reg r53:V, reg unlist:cls, reg aliases:*, reg aliases1:V, reg p14:p(V +), reg r55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg findHTMLlinks:cls, reg level1:*, reg level2:V, reg p15:p(V +), reg r59:V, reg names1:cls, reg r60:V, reg c7:cls, reg r61:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r62:V, reg r63:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r64:V, reg r65:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r66:V, reg r67:V, reg rdxrefs25:*, reg rdxrefs26:V, reg c8:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __4:cls, reg r68:V, reg aliases2:*, reg aliases3:V, reg match:cls, reg r69:V, reg is_na:cls, reg r70:V, reg any1:cls, reg r71:V, reg c9:L, reg unique:cls, reg rdxrefs29:*, reg rdxrefs30:V, reg c10:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg ind4:*, reg ind5:V, reg __5:cls, reg r72:V, reg p16:p(V +), reg r74:V |
    mkenv;
    st dir = dir;
    level_isMissing = missing.0(level);
    if level_isMissing then L0(1.0) else L0(level);
  L0(level_orDefault):
    st level = level_orDefault;
    Rd_db = ldf Rd_db;
    check L19() else D0();
  D0():
    deopt 1 [];
  L19():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    r1 = dyn Rd_db[dir](p);
    check L20() else D1();
  D1():
    deopt 4 [r1];
  L20():
    st db = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  L1(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L25() else L2();
  L21():
    db = ld db;
    check L23() else D2();
  L22():
    r2 = dyn base(<sym db>);
    goto L1(r2);
  D2():
    deopt 8 [db];
  L2():
    lapply = ldf lapply;
    check L28() else D4();
  L23():
    db1 = force? db;
    checkMissing(db1);
    length = ldf length in base;
    r4 = dyn length(db1);
    check L24() else D3();
  L25():
    popenv;
    return NULL;
  D3():
    deopt 11 [r4];
  D4():
    deopt 19 [];
  L24():
    goto L1(r4);
  L28():
    p1 = prom<V +>{
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      return db3;
    };
    p2 = prom<V +>{
      _Rd_get_metadata = ld `.Rd_get_metadata`;
      _Rd_get_metadata1 = force? _Rd_get_metadata;
      checkMissing(_Rd_get_metadata1);
      return _Rd_get_metadata1;
    };
    r10 = dyn lapply(p1, p2, "alias");
    check L29() else D5();
  D5():
    deopt 23 [r10];
  L29():
    st aliases = r10;
    lapply1 = ldf lapply;
    check L30() else D6();
  D6():
    deopt 26 [];
  L30():
    p3 = prom<V +>{
      db4 = ld db;
      db5 = force? db4;
      checkMissing(db5);
      return db5;
    };
    p4 = prom<V +>{
      _Rd_get_xrefs = ld `.Rd_get_xrefs`;
      _Rd_get_xrefs1 = force? _Rd_get_xrefs;
      checkMissing(_Rd_get_xrefs1);
      return _Rd_get_xrefs1;
    };
    r13 = dyn lapply1(p3, p4);
    check L31() else D7();
  D7():
    deopt 29 [r13];
  L31():
    st rdxrefs = r13;
    cbind = ldf cbind;
    check L32() else D8();
  D8():
    deopt 32 [];
  L32():
    p7 = prom<V +>{
      do_call = ldf `do.call`;
      p5 = prom<V +>{
        rbind = ld rbind;
        rbind1 = force? rbind;
        checkMissing(rbind1);
        return rbind1;
      };
      p6 = prom<V +>{
        rdxrefs = ld rdxrefs;
        rdxrefs1 = force? rdxrefs;
        checkMissing(rdxrefs1);
        return rdxrefs1;
      };
      r16 = dyn do_call(p5, p6);
      return r16;
    };
    p10 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r19):
      return r19;
    L2():
      sym2 = ldf names;
      base2 = ldf names in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r18 = dyn base1(<lang names(rdxrefs)>, <lang vapply(rdxrefs, NROW, 0)>);
      goto L0(r18);
    L1(r21):
      vapply = ldf vapply;
      p8 = prom<V +>{
        rdxrefs4 = ld rdxrefs;
        rdxrefs5 = force? rdxrefs4;
        checkMissing(rdxrefs5);
        return rdxrefs5;
      };
      p9 = prom<V +>{
        NROW = ld NROW;
        NROW1 = force? NROW;
        checkMissing(NROW1);
        return NROW1;
      };
      r25 = dyn vapply(p8, p9, 0);
      rep_int = ldf `rep.int` in base;
      r26 = dyn rep_int(r21, r25);
      goto L0(r26);
    L4():
      rdxrefs2 = ld rdxrefs;
      rdxrefs3 = force? rdxrefs2;
      checkMissing(rdxrefs3);
      names = ldf names in base;
      r22 = dyn names(rdxrefs3);
      goto L1(r22);
    L5():
      r20 = dyn base2(<sym rdxrefs>);
      goto L1(r20);
    };
    r28 = dyn cbind[, Source](p7, p10);
    check L33() else D9();
  D9():
    deopt 36 [r28];
  L33():
    st rdxrefs = r28;
    rdxrefs6 = ld rdxrefs;
    check L34() else D10();
  D10():
    deopt 38 [rdxrefs6];
  L34():
    rdxrefs7 = force? rdxrefs6;
    checkMissing(rdxrefs7);
    c1 = `is.object`(rdxrefs7);
    if c1 then L35() else L36();
  L4(dx1):
    st anchors = dx1;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L38() else L39();
  L35():
    dr = tryDispatchBuiltin.1("[", rdxrefs7);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L37() else L36();
  L36():
    __ = ldf `[` in base;
    r29 = dyn __(rdxrefs7, <missing>, "Anchor");
    goto L4(r29);
  L5(r31):
    c2 = `as.logical`(r31);
    if c2 then L43() else L6();
  L37():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L38():
    startsWith = ldf startsWith;
    check L40() else D11();
  L39():
    r30 = dyn base3(<lang `<-`(ind, startsWith(anchors, "="))>);
    goto L5(r30);
  D11():
    deopt 48 [];
  L6():
    goto L8();
  L8():
    rdxrefs10 = ld rdxrefs;
    check L51() else D17();
  L40():
    p11 = prom<V +>{
      anchors = ld anchors;
      anchors1 = force? anchors;
      checkMissing(anchors1);
      return anchors1;
    };
    r33 = dyn startsWith(p11, "=");
    check L41() else D12();
  L43():
    cbind1 = ldf cbind;
    check L44() else D14();
  D12():
    deopt 51 [r33];
  D14():
    deopt 56 [];
  D17():
    deopt 68 [rdxrefs10];
  L41():
    st ind = r33;
    any = ldf any in base;
    r34 = dyn any(r33);
    check L42() else D13();
  L44():
    p13 = prom<V +>{
      sub = ldf sub;
      p12 = prom<V +>{
        anchors2 = ld anchors;
        anchors3 = force? anchors2;
        checkMissing(anchors3);
        c3 = `is.object`(anchors3);
        if c3 then L1() else L2(anchors3);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", anchors3);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(anchors5):
        ind = ld ind;
        ind1 = force? ind;
        __1 = ldf `[` in base;
        r35 = dyn __1(anchors5, ind1);
        goto L0(r35);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r37 = dyn sub("^=", "", p12);
      return r37;
    };
    r39 = dyn cbind1(p13, "");
    check L45() else D15();
  L51():
    rdxrefs11 = force? rdxrefs10;
    checkMissing(rdxrefs11);
    c5 = `is.object`(rdxrefs11);
    if c5 then L52() else L53(rdxrefs11);
  D13():
    deopt 54 [r34];
  D15():
    deopt 59 [r39];
  L9(dx7):
    st rdxrefs = dx7;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L62() else L63();
  L42():
    goto L5(r34);
  L45():
    l = ld rdxrefs;
    c4 = `is.object`(l);
    if c4 then L46() else L47(r39, l);
  L52():
    dr6 = tryDispatchBuiltin.1("[", rdxrefs11);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L54() else L53(dr6);
  L53(rdxrefs13):
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L55() else L56();
  L7(r43, dx5):
    st rdxrefs = dx5;
    goto L8();
  L10(r47):
    r50 = `!`(r47);
    __3 = ldf `[` in base;
    r51 = dyn __3(rdxrefs11, r50, <missing>, FALSE);
    goto L9(r51);
  L12(r53):
    st aliases = r53;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L72() else L73();
  L46():
    dr4 = tryDispatchBuiltin.0("[<-", l, r39);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L48() else L47(r39, dr4);
  L47(r41, l2):
    ind2 = ld ind;
    check L49() else D16();
  L54():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L9(dx6);
  L55():
    rdxrefs17 = ld rdxrefs;
    check L57() else D18();
  L56():
    r46 = dyn base4(<lang `[`(rdxrefs, , "Anchor")>);
    goto L10(r46);
  L62():
    unlist = ldf unlist;
    check L64() else D20();
  L63():
    r52 = dyn base5(<lang unlist(aliases, use.names=FALSE)>, <lang names(findHTMLlinks(level=level))>);
    goto L12(r52);
  D16():
    deopt 61 [r41, l2, r39, ind2];
  D18():
    deopt 72 [rdxrefs13, rdxrefs17];
  D20():
    deopt 90 [];
  L14(r63):
    c9 = `as.logical`(r63);
    if c9 then L86() else L18();
  L48():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L7(r39, dx4);
  L49():
    ind3 = force? ind2;
    ___ = ldf `[<-` in base;
    r44 = dyn ___(l2, r39, ind3, <int 1, 2>);
    goto L7(r41, r44);
  L57():
    rdxrefs18 = force? rdxrefs17;
    checkMissing(rdxrefs18);
    c6 = `is.object`(rdxrefs18);
    if c6 then L58() else L59(rdxrefs13);
  L64():
    p14 = prom<V +>{
      aliases = ld aliases;
      aliases1 = force? aliases;
      checkMissing(aliases1);
      return aliases1;
    };
    r55 = dyn unlist[, `use.names`](p14, FALSE);
    check L65() else D21();
  L72():
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L74() else L75();
  L73():
    r62 = dyn base7(<lang `<-`(ind, is.na(match(`[`(rdxrefs, , "Target"), aliases)))>);
    goto L14(r62);
  D21():
    deopt 94 [r55];
  L11(rdxrefs24, dx9):
    nzchar = ldf nzchar in base;
    r49 = dyn nzchar(dx9);
    check L61() else D19();
  L15(r65):
    st ind = r65;
    any1 = ldf any in base;
    r71 = dyn any1(r65);
    check L85() else D30();
  L18():
    popenv;
    return NULL;
  L58():
    dr8 = tryDispatchBuiltin.1("[", rdxrefs18);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L60() else L59(rdxrefs13);
  L59(rdxrefs21):
    __2 = ldf `[` in base;
    r48 = dyn __2(rdxrefs18, <missing>, "Anchor");
    goto L11(rdxrefs21, r48);
  L65():
    sym6 = ldf names;
    base6 = ldf names in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L66() else L67();
  L74():
    sym9 = ldf match;
    base9 = ldf match in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L76() else L77();
  L75():
    r64 = dyn base8(<lang match(`[`(rdxrefs, , "Target"), aliases)>);
    goto L15(r64);
  L86():
    unique = ldf unique;
    check L87() else D31();
  D19():
    deopt 79 [rdxrefs24, r49];
  D30():
    deopt 129 [r71];
  D31():
    deopt 131 [];
  L13(r57):
    c7 = ldf c in base;
    r61 = dyn c7(r55, r57);
    check L71() else D25();
  L16(r67):
    is_na = ldf `is.na` in base;
    r70 = dyn is_na(r67);
    check L84() else D29();
  L60():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L11(rdxrefs13, dx8);
  L61():
    goto L10(r49);
  L66():
    findHTMLlinks = ldf findHTMLlinks;
    check L68() else D22();
  L67():
    r56 = dyn base6(<lang findHTMLlinks(level=level)>);
    goto L13(r56);
  L76():
    rdxrefs25 = ld rdxrefs;
    check L78() else D26();
  L77():
    r66 = dyn base9(<lang `[`(rdxrefs, , "Target")>, <sym aliases>);
    goto L16(r66);
  L85():
    goto L14(r71);
  L87():
    p16 = prom<V +>{
      rdxrefs29 = ld rdxrefs;
      rdxrefs30 = force? rdxrefs29;
      checkMissing(rdxrefs30);
      c10 = `is.object`(rdxrefs30);
      if c10 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", rdxrefs30);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      ind4 = ld ind;
      ind5 = force? ind4;
      __5 = ldf `[` in base;
      r72 = dyn __5(rdxrefs30, ind5, <missing>, FALSE);
      goto L0(r72);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r74 = dyn unique(p16);
    check L88() else D32();
  D22():
    deopt 98 [];
  D25():
    deopt 105 [r61];
  D26():
    deopt 113 [rdxrefs25];
  D29():
    deopt 126 [r70];
  D32():
    deopt 133 [r74];
  L68():
    p15 = prom<V +>{
      level1 = ld level;
      level2 = force? level1;
      checkMissing(level2);
      return level2;
    };
    r59 = dyn findHTMLlinks[level](p15);
    check L69() else D23();
  L71():
    goto L12(r61);
  L78():
    rdxrefs26 = force? rdxrefs25;
    checkMissing(rdxrefs26);
    c8 = `is.object`(rdxrefs26);
    if c8 then L79() else L80();
  L84():
    goto L15(r70);
  L88():
    popenv;
    return r74;
  D23():
    deopt 101 [r59];
  L17(dx11):
    aliases2 = ld aliases;
    check L82() else D27();
  L69():
    names1 = ldf names in base;
    r60 = dyn names1(r59);
    check L70() else D24();
  L79():
    dr10 = tryDispatchBuiltin.1("[", rdxrefs26);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L81() else L80();
  L80():
    __4 = ldf `[` in base;
    r68 = dyn __4(rdxrefs26, <missing>, "Target");
    goto L17(r68);
  D24():
    deopt 103 [r60];
  D27():
    deopt 119 [aliases2];
  L70():
    goto L13(r60);
  L81():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L17(dx10);
  L82():
    aliases3 = force? aliases2;
    checkMissing(aliases3);
    match = ldf match in base;
    r69 = dyn match(dx11, aliases3, NA_INT, NULL);
    check L83() else D28();
  D28():
    deopt 124 [r69];
  L83():
    goto L16(r69);
  }
}