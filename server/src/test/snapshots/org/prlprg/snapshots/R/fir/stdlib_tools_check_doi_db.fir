fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner828430557;
    st check_doi_db = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner828430557(db, verbose, parallel, pool) {
  (reg db:*, reg verbose:*, reg parallel:*, reg pool:*) -+> V { var db:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, var parallel:*, reg parallel_isMissing:L, reg parallel_orDefault:*, var pool:*, reg pool_isMissing:L, reg pool_orDefault:*, reg parallel1:*, reg parallel2:V, reg c:L, reg c2:V, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg c5:L, reg r1:V, reg pool1:*, reg pool2:V, reg c6:V, reg c7:L, reg c8:V, reg c10:L, reg __:cls, reg r2:V, reg r3:cls, reg r4:V, reg r6:cls, reg parallel3:*, reg parallel4:V, reg c11:L, reg r7:cls, reg r8:cls, reg r9:cls, reg r10:cls, reg _gather:cls, reg r11:V, reg NROW:cls, reg db1:*, reg db2:V, reg p:p(V +), reg r13:V, reg r14:V, reg c12:L, reg bad:*, reg bad1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg r18:V, reg db3:*, reg db4:V, reg inherits:cls, reg r19:V, reg c13:L, reg db5:*, reg db6:V, reg c14:L, reg db8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r20:V, reg db9:*, reg db10:V, reg c15:L, reg db12:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r21:V, reg split:cls, reg db13:*, reg db14:V, reg c16:L, reg db16:V, reg dr4:V, reg dc2:L, reg dx5:V, reg dx6:V, reg r22:V, reg p1:p(V +), reg db17:*, reg db18:V, reg c17:L, reg db20:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg r24:V, reg p2:p(V +), reg r26:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r27:V, reg r28:V, reg parents:*, reg parents1:V, reg names:cls, reg r29:V, reg grepl:cls, reg dois:*, reg dois1:V, reg p3:p(V +), reg r31:V, reg r32:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r33:V, reg r34:V, reg ind:*, reg ind1:V, reg any:cls, reg r35:V, reg c18:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r36:V, reg r37:V, reg ind2:*, reg ind3:V, reg sum:cls, reg r38:V, reg rbind:cls, reg bad2:*, reg bad3:V, reg p4:p(V +), reg _gather1:cls, reg dois2:*, reg dois3:V, reg c19:L, reg dois5:V, reg dr8:V, reg dc4:L, reg dx9:V, reg dx10:V, reg ind4:*, reg ind5:V, reg __1:cls, reg r40:V, reg p5:p(V +), reg parents2:*, reg parents3:V, reg c20:L, reg parents5:V, reg dr10:V, reg dc5:L, reg dx11:V, reg dx12:V, reg ind6:*, reg ind7:V, reg __2:cls, reg r42:V, reg p6:p(V +), reg sym5:cls, reg base5:cls, reg guard5:L, reg r44:V, reg r45:V, reg len:*, reg len1:V, reg rep_int:cls, reg r46:V, reg p7:p(V +), reg r48:V, reg p8:p(V +), reg r50:V, reg which:cls, reg ind8:*, reg ind9:V, reg r52:V, reg p9:p(V +), reg r54:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r55:V, reg r56:V, reg pos:*, reg pos1:V, reg length:cls, reg r57:V, reg c21:L, reg dois6:*, reg dois7:V, reg c22:L, reg dois9:V, reg dr12:V, reg dc6:L, reg dx13:V, reg dx14:V, reg pos2:*, reg pos3:V, reg __3:cls, reg r58:V, reg paste0:cls, reg vapply:cls, reg doispos:*, reg doispos1:V, reg p10:p(V +), reg urlify_doi:*, reg urlify_doi1:V, reg p11:p(V +), reg r61:V, reg p12:p(V +), reg r63:V, reg _fetch_headers:cls, reg urlspos:*, reg urlspos1:V, reg p13:p(V +), reg doispos2:*, reg doispos3:V, reg p14:p(V +), reg r66:V, reg do_call:cls, reg rbind1:*, reg rbind2:V, reg p15:p(V +), reg lapply:cls, reg headers:*, reg headers1:V, reg p16:p(V +), reg _check:*, reg _check1:V, reg p17:p(V +), reg r70:V, reg p18:p(V +), reg r72:V, reg results:*, reg results1:V, reg c23:L, reg dr14:V, reg dc7:L, reg dx15:V, reg dx16:V, reg __4:cls, reg r73:V, reg status:*, reg status1:V, reg r74:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r75:V, reg r76:V, reg ind10:*, reg ind11:V, reg any1:cls, reg r77:V, reg c24:L, reg pos4:*, reg pos5:V, reg c25:L, reg pos7:V, reg dr16:V, reg dc8:L, reg dx17:V, reg dx18:V, reg ind12:*, reg ind13:V, reg __5:cls, reg r78:V, reg status2:*, reg status3:V, reg c26:L, reg status5:V, reg dr18:V, reg dc9:L, reg dx19:V, reg dx20:V, reg ind14:*, reg ind15:V, reg __6:cls, reg r79:V, reg results4:*, reg results5:V, reg c27:L, reg results7:V, reg dr20:V, reg dc10:L, reg dx21:V, reg dx22:V, reg ind16:*, reg ind17:V, reg __7:cls, reg r80:V, reg l:*, reg c28:L, reg r82:S, reg l2:*, reg dr22:V, reg dc11:L, reg dx23:V, reg dx24:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r89:V, reg r90:S, reg l5:*, reg r91:S, reg r92:V, reg m:*, reg m1:V, reg is_na:cls, reg r93:V, reg ___:cls, reg r94:V, reg rbind3:cls, reg bad4:*, reg bad5:V, reg p19:p(V +), reg _gather2:cls, reg dois10:*, reg dois11:V, reg c29:L, reg dois13:V, reg dr24:V, reg dc12:L, reg dx25:V, reg dx26:V, reg pos8:*, reg pos9:V, reg __8:cls, reg r96:V, reg p20:p(V +), reg parents6:*, reg parents7:V, reg c30:L, reg parents9:V, reg dr26:V, reg dc13:L, reg dx27:V, reg dx28:V, reg pos10:*, reg pos11:V, reg __9:cls, reg r98:V, reg p21:p(V +), reg s:*, reg s1:V, reg p22:p(V +), reg m2:*, reg m3:V, reg p23:p(V +), reg r102:V, reg p24:p(V +), reg r104:V, reg r105:V, reg bad6:*, reg bad7:V |
    mkenv;
    st db = db;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L0(FALSE) else L0(verbose);
  L0(verbose_orDefault):
    st verbose = verbose_orDefault;
    parallel_isMissing = missing.0(parallel);
    if parallel_isMissing then L1(FALSE) else L1(parallel);
  L1(parallel_orDefault):
    st parallel = parallel_orDefault;
    pool_isMissing = missing.0(pool);
    if pool_isMissing then L2(NULL) else L2(pool);
  L2(pool_orDefault):
    st pool = pool_orDefault;
    parallel1 = ld parallel;
    check L32() else D0();
  D0():
    deopt 0 [parallel1];
  L32():
    parallel2 = force? parallel1;
    checkMissing(parallel2);
    c = `as.logical`(parallel2);
    if c then L33() else L3(c);
  L3(c2):
    c10 = `as.logical`(c2);
    if c10 then L38() else L5();
  L33():
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L34() else L35();
  L4(c5, r1):
    c7 = `as.logical`(r1);
    c8 = `&&`(c5, c7);
    goto L3(c8);
  L5():
    goto L6();
  L6():
    r6 = clos inner2594826079;
    st `.gather` = r6;
    parallel3 = ld parallel;
    check L43() else D5();
  L34():
    pool1 = ld pool;
    check L36() else D1();
  L35():
    r = dyn base(<sym pool>);
    goto L4(c, r);
  L38():
    __ = ldf `::`;
    check L39() else D2();
  D1():
    deopt 3 [c, pool1];
  D2():
    deopt 8 [];
  D5():
    deopt 20 [parallel3];
  L36():
    pool2 = force? pool1;
    checkMissing(pool2);
    c6 = `==`(pool2, NULL);
    goto L4(c, c6);
  L39():
    r2 = dyn __("curl", "new_pool");
    check L40() else D3();
  L43():
    parallel4 = force? parallel3;
    checkMissing(parallel4);
    c11 = `as.logical`(parallel4);
    if c11 then L44() else L7();
  D3():
    deopt 11 [r2];
  L7():
    r9 = clos inner4167683117;
    goto L8(r9);
  L8(r8):
    st `.fetch_headers` = r8;
    r10 = clos inner1031285476;
    st `.check` = r10;
    _gather = ldf `.gather`;
    check L46() else D6();
  L40():
    checkFun.0(r2);
    r3 = r2 as cls;
    r4 = dyn r3();
    check L41() else D4();
  L44():
    r7 = clos inner4167683117;
    goto L8(r7);
  D4():
    deopt 13 [r4];
  D6():
    deopt 31 [];
  L41():
    st pool = r4;
    goto L6();
  L46():
    r11 = dyn _gather();
    check L47() else D7();
  D7():
    deopt 32 [r11];
  L47():
    st bad = r11;
    NROW = ldf NROW;
    check L48() else D8();
  D8():
    deopt 35 [];
  L48():
    p = prom<V +>{
      db1 = ld db;
      db2 = force? db1;
      checkMissing(db2);
      return db2;
    };
    r13 = dyn NROW(p);
    check L49() else D9();
  D9():
    deopt 37 [r13];
  L49():
    r14 = `!`(r13);
    c12 = `as.logical`(r14);
    if c12 then L50() else L9();
  L9():
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L54() else L55();
  L50():
    bad = ld bad;
    check L51() else D10();
  D10():
    deopt 39 [bad];
  L11(r18):
    c13 = `as.logical`(r18);
    if c13 then L58() else L12();
  L51():
    bad1 = force? bad;
    checkMissing(bad1);
    popenv;
    return bad1;
  L54():
    db3 = ld db;
    check L56() else D11();
  L55():
    r17 = dyn base1(<sym db>, "check_doi_db");
    goto L11(r17);
  D11():
    deopt 46 [db3];
  L12():
    split = ldf split;
    check L70() else D15();
  L13():
    grepl = ldf grepl;
    check L76() else D19();
  L56():
    db4 = force? db3;
    checkMissing(db4);
    inherits = ldf inherits in base;
    r19 = dyn inherits(db4, "check_doi_db", FALSE);
    check L57() else D12();
  L58():
    db5 = ld db;
    check L59() else D13();
  D12():
    deopt 51 [r19];
  D13():
    deopt 52 [db5];
  D15():
    deopt 61 [];
  D19():
    deopt 74 [];
  L57():
    goto L11(r19);
  L59():
    db6 = force? db5;
    checkMissing(db6);
    c14 = `is.object`(db6);
    if c14 then L61() else L62(db6);
  L70():
    p1 = prom<V +>{
      db13 = ld db;
      db14 = force? db13;
      checkMissing(db14);
      c16 = `is.object`(db14);
      if c16 then L1() else L2(db14);
    L0(dx6):
      return dx6;
    L1():
      dr4 = tryDispatchBuiltin.1("$", db14);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2(dr4);
    L2(db16):
      r22 = `$`(db16, <sym Parent>);
      goto L0(r22);
    L3():
      dx5 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx5);
    };
    p2 = prom<V +>{
      db17 = ld db;
      db18 = force? db17;
      checkMissing(db18);
      c17 = `is.object`(db18);
      if c17 then L1() else L2(db18);
    L0(dx8):
      return dx8;
    L1():
      dr6 = tryDispatchBuiltin.1("$", db18);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(db20):
      r24 = `$`(db20, <sym DOI>);
      goto L0(r24);
    L3():
      dx7 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx7);
    };
    r26 = dyn split(p1, p2);
    check L71() else D16();
  L76():
    p3 = prom<V +>{
      dois = ld dois;
      dois1 = force? dois;
      checkMissing(dois1);
      return dois1;
    };
    r31 = dyn grepl[, , fixed]("/", p3, TRUE);
    check L77() else D20();
  D16():
    deopt 64 [r26];
  D20():
    deopt 79 [r31];
  L60(dx1):
    st parents = dx1;
    db9 = ld db;
    check L64() else D14();
  L61():
    dr = tryDispatchBuiltin.1("$", db6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L63() else L62(dr);
  L62(db8):
    r20 = `$`(db8, <sym From>);
    goto L60(r20);
  L71():
    st parents = r26;
    sym2 = ldf names;
    base2 = ldf names in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L72() else L73();
  L77():
    r32 = `!`(r31);
    st ind = r32;
    sym3 = ldf any;
    base3 = ldf any in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L78() else L79();
  D14():
    deopt 56 [db9];
  L14(r28):
    st dois = r28;
    goto L13();
  L15(r34):
    c18 = `as.logical`(r34);
    if c18 then L82() else L16();
  L63():
    dx = getTryDispatchBuiltinValue(dr);
    goto L60(dx);
  L64():
    db10 = force? db9;
    checkMissing(db10);
    c15 = `is.object`(db10);
    if c15 then L66() else L67(db10);
  L72():
    parents = ld parents;
    check L74() else D17();
  L73():
    r27 = dyn base2(<sym parents>);
    goto L14(r27);
  L78():
    ind = ld ind;
    check L80() else D21();
  L79():
    r33 = dyn base3(<sym ind>);
    goto L15(r33);
  D17():
    deopt 68 [parents];
  D21():
    deopt 84 [ind];
  L16():
    goto L18();
  L18():
    which = ldf which;
    check L90() else D27();
  L65(dx3):
    st dois = dx3;
    goto L13();
  L66():
    dr2 = tryDispatchBuiltin.1("$", db10);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L68() else L67(dr2);
  L67(db12):
    r21 = `$`(db12, <sym DOI>);
    goto L65(r21);
  L74():
    parents1 = force? parents;
    checkMissing(parents1);
    names = ldf names in base;
    r29 = dyn names(parents1);
    check L75() else D18();
  L80():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r35 = dyn any(ind1);
    check L81() else D22();
  L82():
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L83() else L84();
  D18():
    deopt 71 [r29];
  D22():
    deopt 87 [r35];
  D27():
    deopt 104 [];
  L17(r37):
    st len = r37;
    rbind = ldf rbind;
    check L87() else D25();
  L68():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L65(dx2);
  L75():
    goto L14(r29);
  L81():
    goto L15(r35);
  L83():
    ind2 = ld ind;
    check L85() else D23();
  L84():
    r36 = dyn base4(<sym ind>);
    goto L17(r36);
  L90():
    p9 = prom<V +>{
      ind8 = ld ind;
      ind9 = force? ind8;
      checkMissing(ind9);
      r52 = `!`(ind9);
      return r52;
    };
    r54 = dyn which(p9);
    check L91() else D28();
  D23():
    deopt 90 [ind2];
  D25():
    deopt 96 [];
  D28():
    deopt 106 [r54];
  L85():
    ind3 = force? ind2;
    checkMissing(ind3);
    sum = ldf sum in base;
    r38 = dyn sum(ind3);
    check L86() else D24();
  L87():
    p4 = prom<V +>{
      bad2 = ld bad;
      bad3 = force? bad2;
      checkMissing(bad3);
      return bad3;
    };
    p8 = prom<V +>{
      _gather1 = ldf `.gather`;
      p5 = prom<V +>{
        dois2 = ld dois;
        dois3 = force? dois2;
        checkMissing(dois3);
        c19 = `is.object`(dois3);
        if c19 then L1() else L2(dois3);
      L0(dx10):
        return dx10;
      L1():
        dr8 = tryDispatchBuiltin.1("[", dois3);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(dois5):
        ind4 = ld ind;
        ind5 = force? ind4;
        __1 = ldf `[` in base;
        r40 = dyn __1(dois5, ind5);
        goto L0(r40);
      L3():
        dx9 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx9);
      };
      p6 = prom<V +>{
        parents2 = ld parents;
        parents3 = force? parents2;
        checkMissing(parents3);
        c20 = `is.object`(parents3);
        if c20 then L1() else L2(parents3);
      L0(dx12):
        return dx12;
      L1():
        dr10 = tryDispatchBuiltin.1("[", parents3);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(parents5):
        ind6 = ld ind;
        ind7 = force? ind6;
        __2 = ldf `[` in base;
        r42 = dyn __2(parents5, ind7);
        goto L0(r42);
      L3():
        dx11 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx11);
      };
      p7 = prom<V +>{
        sym5 = ldf `rep.int`;
        base5 = ldf `rep.int` in base;
        guard5 = `==`.4(sym5, base5);
        if guard5 then L1() else L2();
      L0(r45):
        return r45;
      L1():
        len = ld len;
        len1 = force? len;
        checkMissing(len1);
        rep_int = ldf `rep.int` in base;
        r46 = dyn rep_int("Invalid DOI", len1);
        goto L0(r46);
      L2():
        r44 = dyn base5("Invalid DOI", <sym len>);
        goto L0(r44);
      };
      r48 = dyn _gather1[, , m](p5, p6, p7);
      return r48;
    };
    r50 = dyn rbind(p4, p8);
    check L88() else D26();
  L91():
    st pos = r54;
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L92() else L93();
  D24():
    deopt 93 [r38];
  D26():
    deopt 99 [r50];
  L19(r56):
    c21 = `as.logical`(r56);
    if c21 then L96() else L20();
  L86():
    goto L17(r38);
  L88():
    st bad = r50;
    goto L18();
  L92():
    pos = ld pos;
    check L94() else D29();
  L93():
    r55 = dyn base6(<sym pos>);
    goto L19(r55);
  D29():
    deopt 110 [pos];
  L20():
    goto L31();
  L31():
    bad6 = ld bad;
    check L144() else D53();
  L94():
    pos1 = force? pos;
    checkMissing(pos1);
    length = ldf length in base;
    r57 = dyn length(pos1);
    check L95() else D30();
  L96():
    dois6 = ld dois;
    check L97() else D31();
  D30():
    deopt 113 [r57];
  D31():
    deopt 114 [dois6];
  D53():
    deopt 196 [bad6];
  L95():
    goto L19(r57);
  L97():
    dois7 = force? dois6;
    checkMissing(dois7);
    c22 = `is.object`(dois7);
    if c22 then L98() else L99(dois7);
  L144():
    bad7 = force? bad6;
    checkMissing(bad7);
    popenv;
    return bad7;
  L21(dx14):
    st doispos = dx14;
    paste0 = ldf paste0;
    check L102() else D33();
  L98():
    dr12 = tryDispatchBuiltin.1("[", dois7);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L100() else L99(dr12);
  L99(dois9):
    pos2 = ld pos;
    check L101() else D32();
  D32():
    deopt 116 [dois9, pos2];
  D33():
    deopt 121 [];
  L100():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L21(dx13);
  L101():
    pos3 = force? pos2;
    __3 = ldf `[` in base;
    r58 = dyn __3(dois9, pos3);
    goto L21(r58);
  L102():
    p12 = prom<V +>{
      vapply = ldf vapply;
      p10 = prom<V +>{
        doispos = ld doispos;
        doispos1 = force? doispos;
        checkMissing(doispos1);
        return doispos1;
      };
      p11 = prom<V +>{
        urlify_doi = ld urlify_doi;
        urlify_doi1 = force? urlify_doi;
        checkMissing(urlify_doi1);
        return urlify_doi1;
      };
      r61 = dyn vapply(p10, p11, "");
      return r61;
    };
    r63 = dyn paste0("https://doi.org/api/handles/", p12);
    check L103() else D34();
  D34():
    deopt 124 [r63];
  L103():
    st urlspos = r63;
    _fetch_headers = ldf `.fetch_headers`;
    check L104() else D35();
  D35():
    deopt 127 [];
  L104():
    p13 = prom<V +>{
      urlspos = ld urlspos;
      urlspos1 = force? urlspos;
      checkMissing(urlspos1);
      return urlspos1;
    };
    p14 = prom<V +>{
      doispos2 = ld doispos;
      doispos3 = force? doispos2;
      checkMissing(doispos3);
      return doispos3;
    };
    r66 = dyn _fetch_headers(p13, p14);
    check L105() else D36();
  D36():
    deopt 130 [r66];
  L105():
    st headers = r66;
    do_call = ldf `do.call`;
    check L106() else D37();
  D37():
    deopt 133 [];
  L106():
    p15 = prom<V +>{
      rbind1 = ld rbind;
      rbind2 = force? rbind1;
      checkMissing(rbind2);
      return rbind2;
    };
    p18 = prom<V +>{
      lapply = ldf lapply;
      p16 = prom<V +>{
        headers = ld headers;
        headers1 = force? headers;
        checkMissing(headers1);
        return headers1;
      };
      p17 = prom<V +>{
        _check = ld `.check`;
        _check1 = force? _check;
        checkMissing(_check1);
        return _check1;
      };
      r70 = dyn lapply(p16, p17);
      return r70;
    };
    r72 = dyn do_call(p15, p18);
    check L107() else D38();
  D38():
    deopt 136 [r72];
  L107():
    st results = r72;
    results = ld results;
    check L108() else D39();
  D39():
    deopt 138 [results];
  L108():
    results1 = force? results;
    checkMissing(results1);
    c23 = `is.object`(results1);
    if c23 then L109() else L110();
  L22(dx16):
    st status = dx16;
    status = ld status;
    check L112() else D40();
  L109():
    dr14 = tryDispatchBuiltin.1("[", results1);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L111() else L110();
  L110():
    __4 = ldf `[` in base;
    r73 = dyn __4(results1, <missing>, 1);
    goto L22(r73);
  D40():
    deopt 145 [status];
  L111():
    dx15 = getTryDispatchBuiltinValue(dr14);
    goto L22(dx15);
  L112():
    status1 = force? status;
    checkMissing(status1);
    r74 = `!=`(status1, "200");
    st ind = r74;
    sym7 = ldf any;
    base7 = ldf any in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L113() else L114();
  L23(r76):
    c24 = `as.logical`(r76);
    if c24 then L117() else L24();
  L113():
    ind10 = ld ind;
    check L115() else D41();
  L114():
    r75 = dyn base7(<sym ind>);
    goto L23(r75);
  D41():
    deopt 152 [ind10];
  L24():
    goto L30(NULL);
  L30(r105):
    goto L31();
  L115():
    ind11 = force? ind10;
    checkMissing(ind11);
    any1 = ldf any in base;
    r77 = dyn any1(ind11);
    check L116() else D42();
  L117():
    pos4 = ld pos;
    check L118() else D43();
  D42():
    deopt 155 [r77];
  D43():
    deopt 156 [pos4];
  L116():
    goto L23(r77);
  L118():
    pos5 = force? pos4;
    checkMissing(pos5);
    c25 = `is.object`(pos5);
    if c25 then L119() else L120(pos5);
  L25(dx18):
    st pos = dx18;
    status2 = ld status;
    check L123() else D45();
  L119():
    dr16 = tryDispatchBuiltin.1("[", pos5);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L121() else L120(dr16);
  L120(pos7):
    ind12 = ld ind;
    check L122() else D44();
  D44():
    deopt 158 [pos7, ind12];
  D45():
    deopt 162 [status2];
  L121():
    dx17 = getTryDispatchBuiltinValue(dr16);
    goto L25(dx17);
  L122():
    ind13 = force? ind12;
    __5 = ldf `[` in base;
    r78 = dyn __5(pos7, ind13);
    goto L25(r78);
  L123():
    status3 = force? status2;
    checkMissing(status3);
    c26 = `is.object`(status3);
    if c26 then L124() else L125(status3);
  L26(dx20):
    st s = dx20;
    results4 = ld results;
    check L128() else D47();
  L124():
    dr18 = tryDispatchBuiltin.1("[", status3);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L126() else L125(dr18);
  L125(status5):
    ind14 = ld ind;
    check L127() else D46();
  D46():
    deopt 164 [status5, ind14];
  D47():
    deopt 168 [results4];
  L126():
    dx19 = getTryDispatchBuiltinValue(dr18);
    goto L26(dx19);
  L127():
    ind15 = force? ind14;
    __6 = ldf `[` in base;
    r79 = dyn __6(status5, ind15);
    goto L26(r79);
  L128():
    results5 = force? results4;
    checkMissing(results5);
    c27 = `is.object`(results5);
    if c27 then L129() else L130(results5);
  L27(dx22):
    st m = dx22;
    l = ld m;
    c28 = `is.object`(l);
    if c28 then L133() else L134("", l);
  L129():
    dr20 = tryDispatchBuiltin.1("[", results5);
    dc10 = getTryDispatchBuiltinDispatched(dr20);
    if dc10 then L131() else L130(dr20);
  L130(results7):
    ind16 = ld ind;
    check L132() else D48();
  D48():
    deopt 170 [results7, ind16];
  L28(dx24):
    st m = dx24;
    rbind3 = ldf rbind;
    check L140() else D51();
  L131():
    dx21 = getTryDispatchBuiltinValue(dr20);
    goto L27(dx21);
  L132():
    ind17 = force? ind16;
    __7 = ldf `[` in base;
    r80 = dyn __7(results7, ind17, 2);
    goto L27(r80);
  L133():
    dr22 = tryDispatchBuiltin.0("[<-", l, "");
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L135() else L134("", dr22);
  L134(r82, l2):
    sym8 = ldf `is.na`;
    base8 = ldf `is.na` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L136() else L137();
  D51():
    deopt 187 [];
  L29(r90, l5, r91, r92):
    ___ = ldf `[<-` in base;
    r94 = dyn ___(l5, r91, r92);
    goto L28(r94);
  L135():
    dx23 = getTryDispatchBuiltinValue(dr22);
    goto L28(dx23);
  L136():
    m = ld m;
    check L138() else D49();
  L137():
    r89 = dyn base8(<sym m>);
    goto L29(r82, l2, "", r89);
  L140():
    p19 = prom<V +>{
      bad4 = ld bad;
      bad5 = force? bad4;
      checkMissing(bad5);
      return bad5;
    };
    p24 = prom<V +>{
      _gather2 = ldf `.gather`;
      p20 = prom<V +>{
        dois10 = ld dois;
        dois11 = force? dois10;
        checkMissing(dois11);
        c29 = `is.object`(dois11);
        if c29 then L1() else L2(dois11);
      L0(dx26):
        return dx26;
      L1():
        dr24 = tryDispatchBuiltin.1("[", dois11);
        dc12 = getTryDispatchBuiltinDispatched(dr24);
        if dc12 then L3() else L2(dr24);
      L2(dois13):
        pos8 = ld pos;
        pos9 = force? pos8;
        __8 = ldf `[` in base;
        r96 = dyn __8(dois13, pos9);
        goto L0(r96);
      L3():
        dx25 = getTryDispatchBuiltinValue(dr24);
        goto L0(dx25);
      };
      p21 = prom<V +>{
        parents6 = ld parents;
        parents7 = force? parents6;
        checkMissing(parents7);
        c30 = `is.object`(parents7);
        if c30 then L1() else L2(parents7);
      L0(dx28):
        return dx28;
      L1():
        dr26 = tryDispatchBuiltin.1("[", parents7);
        dc13 = getTryDispatchBuiltinDispatched(dr26);
        if dc13 then L3() else L2(dr26);
      L2(parents9):
        pos10 = ld pos;
        pos11 = force? pos10;
        __9 = ldf `[` in base;
        r98 = dyn __9(parents9, pos11);
        goto L0(r98);
      L3():
        dx27 = getTryDispatchBuiltinValue(dr26);
        goto L0(dx27);
      };
      p22 = prom<V +>{
        s = ld s;
        s1 = force? s;
        checkMissing(s1);
        return s1;
      };
      p23 = prom<V +>{
        m2 = ld m;
        m3 = force? m2;
        checkMissing(m3);
        return m3;
      };
      r102 = dyn _gather2(p20, p21, p22, p23);
      return r102;
    };
    r104 = dyn rbind3(p19, p24);
    check L141() else D52();
  D49():
    deopt 180 [r82, l2, "", m];
  D52():
    deopt 190 [r104];
  L138():
    m1 = force? m;
    checkMissing(m1);
    is_na = ldf `is.na` in base;
    r93 = dyn is_na(m1);
    check L139() else D50();
  L141():
    st bad = r104;
    goto L30(r104);
  D50():
    deopt 183 [r82, l2, "", r93];
  L139():
    goto L29(r82, l2, "", r93);
  }
}
fun inner2594826079(d, p, s, m) {
  (reg d:*, reg p:*, reg s:*, reg m:*) -+> V { var d:*, reg d_isMissing:L, reg d_orDefault:*, reg character:cls, reg r:V, reg p1:p(V +), var p:*, reg p_isMissing:L, reg p_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg list:cls, reg r4:V, reg p2:p(V +), var s:*, reg s_isMissing:L, reg s_orDefault:*, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg d1:*, reg d2:V, reg length:cls, reg r10:V, reg rep_int:cls, reg r11:V, reg p3:p(V +), var m:*, reg m_isMissing:L, reg m_orDefault:*, reg sym3:cls, reg base3:cls, reg guard3:L, reg r13:V, reg r14:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg d3:*, reg d4:V, reg length1:cls, reg r17:V, reg rep_int1:cls, reg r18:V, reg p4:p(V +), reg list2DF:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg d5:*, reg d6:V, reg p5:*, reg p6:V, reg s1:*, reg s2:V, reg m1:*, reg m2:V, reg list1:cls, reg r22:V, reg p7:p(V +), reg r24:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r25:V, reg r26:V, reg c:cls, reg r27:V, reg l:*, reg class__:cls, reg r28:V, reg y:*, reg y1:V |
    mkenv;
    d_isMissing = missing.0(d);
    if d_isMissing then L0() else L1(d);
  L0():
    p1 = prom<V +>{
      character = ldf character;
      r = dyn character();
      return r;
    };
    goto L1(p1);
  L1(d_orDefault):
    st d = d_orDefault;
    p_isMissing = missing.0(p);
    if p_isMissing then L2() else L3(p);
  L2():
    p2 = prom<V +>{
      sym = ldf list;
      base = ldf list in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      list = ldf list in base;
      r4 = dyn list();
      goto L0(r4);
    L2():
      r2 = dyn base();
      goto L0(r2);
    };
    goto L3(p2);
  L3(p_orDefault):
    st p = p_orDefault;
    s_isMissing = missing.0(s);
    if s_isMissing then L4() else L5(s);
  L4():
    p3 = prom<V +>{
      sym1 = ldf `rep.int`;
      base1 = ldf `rep.int` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L2() else L3();
    L0(r7):
      return r7;
    L2():
      sym2 = ldf length;
      base2 = ldf length in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L4() else L5();
    L3():
      r6 = dyn base1("", <lang length(d)>);
      goto L0(r6);
    L1(r9):
      rep_int = ldf `rep.int` in base;
      r11 = dyn rep_int("", r9);
      goto L0(r11);
    L4():
      d1 = ld d;
      d2 = force? d1;
      checkMissing(d2);
      length = ldf length in base;
      r10 = dyn length(d2);
      goto L1(r10);
    L5():
      r8 = dyn base2(<sym d>);
      goto L1(r8);
    };
    goto L5(p3);
  L5(s_orDefault):
    st s = s_orDefault;
    m_isMissing = missing.0(m);
    if m_isMissing then L6() else L7(m);
  L6():
    p4 = prom<V +>{
      sym3 = ldf `rep.int`;
      base3 = ldf `rep.int` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L2() else L3();
    L0(r14):
      return r14;
    L2():
      sym4 = ldf length;
      base4 = ldf length in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L4() else L5();
    L3():
      r13 = dyn base3("", <lang length(d)>);
      goto L0(r13);
    L1(r16):
      rep_int1 = ldf `rep.int` in base;
      r18 = dyn rep_int1("", r16);
      goto L0(r18);
    L4():
      d3 = ld d;
      d4 = force? d3;
      checkMissing(d4);
      length1 = ldf length in base;
      r17 = dyn length1(d4);
      goto L1(r17);
    L5():
      r15 = dyn base4(<sym d>);
      goto L1(r15);
    };
    goto L7(p4);
  L7(m_orDefault):
    st m = m_orDefault;
    list2DF = ldf list2DF;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p7 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      d5 = ld d;
      d6 = force? d5;
      checkMissing(d6);
      p5 = ld p;
      p6 = force? p5;
      checkMissing(p6);
      s1 = ld s;
      s2 = force? s1;
      checkMissing(s2);
      m1 = ld m;
      m2 = force? m1;
      checkMissing(m2);
      list1 = ldf list in base;
      r22 = dyn list1(d6, p6, s2, m2);
      goto L0(r22);
    L2():
      r20 = dyn base5[DOI, From, Status, Message](<sym d>, <sym p>, <sym s>, <sym m>);
      goto L0(r20);
    };
    r24 = dyn list2DF(p7);
    check L10() else D1();
  D1():
    deopt 3 [r24];
  L10():
    st y = r24;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L11() else L12();
  L8(r26):
    l = ld y;
    class__ = ldf `class<-`;
    check L14() else D3();
  L11():
    c = ldf c in base;
    r27 = dyn c("check_doi_db", "data.frame");
    check L13() else D2();
  L12():
    r25 = dyn base6("check_doi_db", "data.frame");
    goto L8(r25);
  D2():
    deopt 10 [r27];
  D3():
    deopt 12 [r26, l, r26];
  L13():
    goto L8(r27);
  L14():
    r28 = dyn class__(l, NULL, r26);
    check L15() else D4();
  D4():
    deopt 14 [r26, r28];
  L15():
    st y = r28;
    y = ld y;
    check L16() else D5();
  D5():
    deopt 16 [y];
  L16():
    y1 = force? y;
    checkMissing(y1);
    popenv;
    return y1;
  }
}
fun inner4167683117(urls, dois) {
  (reg urls:*, reg dois:*) -+> V { var urls:*, var dois:*, reg _fetch_headers_via_curl:cls, reg urls1:*, reg urls2:V, reg p:p(V +), reg verbose:*, reg verbose1:V, reg p1:p(V +), reg pool:*, reg pool1:V, reg p2:p(V +), reg r3:V |
    mkenv;
    st urls = urls;
    st dois = dois;
    _fetch_headers_via_curl = ldf `.fetch_headers_via_curl`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      urls1 = ld urls;
      urls2 = force? urls1;
      checkMissing(urls2);
      return urls2;
    };
    p1 = prom<V +>{
      verbose = ld verbose;
      verbose1 = force? verbose;
      checkMissing(verbose1);
      return verbose1;
    };
    p2 = prom<V +>{
      pool = ld pool;
      pool1 = force? pool;
      checkMissing(pool1);
      return pool1;
    };
    r3 = dyn _fetch_headers_via_curl(p, p1, p2);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner1031285476(h) {
  (reg h:*) -+> V { var h:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg h1:*, reg h2:V, reg inherits:cls, reg r2:V, reg c:L, reg sub:cls, reg conditionMessage:cls, reg h3:*, reg h4:V, reg p:p(V +), reg r4:V, reg p1:p(V +), reg r6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg h5:*, reg h6:V, reg attr:cls, reg r12:V, reg as_character:cls, reg r13:V, reg table_of_HTTP_status_codes:*, reg table_of_HTTP_status_codes1:V, reg c1:L, reg table_of_HTTP_status_codes3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg s:*, reg s1:V, reg __:cls, reg r14:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg s2:*, reg s3:V, reg m:*, reg m1:V, reg c2:cls, reg r17:V |
    mkenv;
    st h = h;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L7() else L8();
  L0(r1):
    c = `as.logical`(r1);
    if c then L11() else L1();
  L7():
    h1 = ld h;
    check L9() else D0();
  L8():
    r = dyn base(<sym h>, "error");
    goto L0(r);
  D0():
    deopt 2 [h1];
  L1():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L2():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L27() else L28();
  L9():
    h2 = force? h1;
    checkMissing(h2);
    inherits = ldf inherits in base;
    r2 = dyn inherits(h2, "error", FALSE);
    check L10() else D1();
  L11():
    st s = "Error";
    sub = ldf sub;
    check L12() else D2();
  D1():
    deopt 7 [r2];
  D2():
    deopt 12 [];
  L3(r9):
    st s = r9;
    table_of_HTTP_status_codes = ld table_of_HTTP_status_codes;
    check L22() else D7();
  L6(r16):
    popenv;
    return r16;
  L10():
    goto L0(r2);
  L12():
    p1 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p = prom<V +>{
        h3 = ld h;
        h4 = force? h3;
        checkMissing(h4);
        return h4;
      };
      r4 = dyn conditionMessage(p);
      return r4;
    };
    r6 = dyn sub("[[:space:]]*$", "", p1);
    check L13() else D3();
  L15():
    sym2 = ldf attr;
    base2 = ldf attr in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L16():
    r8 = dyn base1(<lang attr(h, "status")>);
    goto L3(r8);
  L27():
    s2 = ld s;
    check L29() else D9();
  L28():
    r15 = dyn base3(<sym s>, <sym m>);
    goto L6(r15);
  D3():
    deopt 16 [r6];
  D7():
    deopt 30 [table_of_HTTP_status_codes];
  D9():
    deopt 38 [s2];
  L4(r11):
    as_character = ldf `as.character` in base;
    r13 = dyn as_character(r11);
    check L21() else D6();
  L13():
    st m = r6;
    goto L2();
  L17():
    h5 = ld h;
    check L19() else D4();
  L18():
    r10 = dyn base2(<sym h>, "status");
    goto L4(r10);
  L22():
    table_of_HTTP_status_codes1 = force? table_of_HTTP_status_codes;
    checkMissing(table_of_HTTP_status_codes1);
    c1 = `is.object`(table_of_HTTP_status_codes1);
    if c1 then L23() else L24(table_of_HTTP_status_codes1);
  L29():
    s3 = force? s2;
    checkMissing(s3);
    m = ld m;
    check L30() else D10();
  D4():
    deopt 22 [h5];
  D6():
    deopt 28 [r13];
  D10():
    deopt 40 [m];
  L5(dx1):
    st m = dx1;
    goto L2();
  L19():
    h6 = force? h5;
    checkMissing(h6);
    attr = ldf attr in base;
    r12 = dyn attr(h6, "status");
    check L20() else D5();
  L21():
    goto L3(r13);
  L23():
    dr = tryDispatchBuiltin.1("[", table_of_HTTP_status_codes1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L25() else L24(dr);
  L24(table_of_HTTP_status_codes3):
    s = ld s;
    check L26() else D8();
  L30():
    m1 = force? m;
    checkMissing(m1);
    c2 = ldf c in base;
    r17 = dyn c2(s3, m1);
    check L31() else D11();
  D5():
    deopt 26 [r12];
  D8():
    deopt 32 [table_of_HTTP_status_codes3, s];
  D11():
    deopt 43 [r17];
  L20():
    goto L4(r12);
  L25():
    dx = getTryDispatchBuiltinValue(dr);
    goto L5(dx);
  L26():
    s1 = force? s;
    __ = ldf `[` in base;
    r14 = dyn __(table_of_HTTP_status_codes3, s1);
    goto L5(r14);
  L31():
    goto L6(r17);
  }
}