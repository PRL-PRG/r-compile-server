fun main() {
  () -+> V { reg r:cls, reg system_file:cls, reg r1:V, reg vignetteInfo:cls, reg gridEx:*, reg gridEx1:V, reg p:p(V +), reg r3:V, reg str:cls, reg vi:*, reg vi1:V, reg p1:p(V +), reg r5:V |
    mkenv;
    r = clos inner270641308;
    st vignetteInfo = r;
    system_file = ldf `system.file`;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    r1 = dyn system_file[, , package]("doc", "grid.Rnw", "grid");
    check L1() else D1();
  D1():
    deopt 9 [r1];
  L1():
    st gridEx = r1;
    vignetteInfo = ldf vignetteInfo;
    check L2() else D2();
  D2():
    deopt 12 [];
  L2():
    p = prom<V +>{
      gridEx = ld gridEx;
      gridEx1 = force? gridEx;
      checkMissing(gridEx1);
      return gridEx1;
    };
    r3 = dyn vignetteInfo(p);
    check L3() else D3();
  D3():
    deopt 14 [r3];
  L3():
    st vi = r3;
    str = ldf str;
    check L4() else D4();
  D4():
    deopt 17 [];
  L4():
    p1 = prom<V +>{
      vi = ld vi;
      vi1 = force? vi;
      checkMissing(vi1);
      return vi1;
    };
    r5 = dyn str(p1);
    check L5() else D5();
  D5():
    deopt 19 [r5];
  L5():
    popenv;
    return r5;
  }
}
fun inner270641308(file) {
  (reg file:*) -+> V { var file:*, reg readLines:cls, reg file1:*, reg file2:V, reg p:p(V +), reg r1:V, reg l:*, reg c:L, reg r3:S, reg l2:*, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r10:V, reg r11:S, reg l5:*, reg r12:S, reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r18:V, reg r19:S, reg l8:*, reg r20:S, reg r21:V, reg lines:*, reg lines1:V, reg nchar:cls, reg r22:V, reg is_na:cls, reg r23:V, reg ___:cls, reg r24:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r25:V, reg r26:V, reg _get_vignette_metadata:cls, reg lines2:*, reg lines3:V, reg p1:p(V +), reg r28:V, reg c1:cls, reg r29:V, reg c2:L, reg r31:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __:cls, reg r32:V, reg _get_vignette_metadata1:cls, reg lines4:*, reg lines5:V, reg p2:p(V +), reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg depends:*, reg depends1:V, reg length:cls, reg r37:V, reg c3:L, reg unlist:cls, reg strsplit:cls, reg depends2:*, reg depends3:V, reg c4:L, reg depends5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r38:V, reg p3:p(V +), reg r40:V, reg p4:p(V +), reg r42:V, reg _get_vignette_metadata2:cls, reg lines6:*, reg lines7:V, reg p5:p(V +), reg r45:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r46:V, reg r47:V, reg keywords:*, reg keywords1:V, reg length1:cls, reg r48:V, reg r49:V, reg c5:L, reg _get_vignette_metadata3:cls, reg lines8:*, reg lines9:V, reg p6:p(V +), reg r51:V, reg r52:V, reg unlist1:cls, reg strsplit1:cls, reg keywords2:*, reg keywords3:V, reg c6:L, reg keywords5:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg __2:cls, reg r53:V, reg p7:p(V +), reg r55:V, reg p8:p(V +), reg r57:V, reg getVignetteEngine:cls, reg lines10:*, reg lines11:V, reg p9:p(V +), reg r59:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r60:V, reg r61:V, reg basename:cls, reg file3:*, reg file4:V, reg p10:p(V +), reg r63:V, reg title:*, reg title1:V, reg depends6:*, reg depends7:V, reg keywords6:*, reg keywords7:V, reg engine:*, reg engine1:V, reg list:cls, reg r64:V |
    mkenv;
    st file = file;
    readLines = ldf readLines;
    check L12() else D0();
  D0():
    deopt 1 [];
  L12():
    p = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r1 = dyn readLines[, warn](p, FALSE);
    check L13() else D1();
  D1():
    deopt 5 [r1];
  L13():
    st lines = r1;
    l = ld lines;
    c = `is.object`(l);
    if c then L14() else L15("", l);
  L0(dx1):
    st lines = dx1;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L24() else L25();
  L14():
    dr = tryDispatchBuiltin.0("[<-", l, "");
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L16() else L15("", dr);
  L15(r3, l2):
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L17() else L18();
  L1(r11, l5, r12, r13):
    ___ = ldf `[<-` in base;
    r24 = dyn ___(l5, r12, r13);
    goto L0(r24);
  L3(r26):
    c2 = `is.object`(r26);
    if c2 then L29() else L30(r26);
  L16():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L17():
    sym1 = ldf nchar;
    base1 = ldf nchar in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L18():
    r10 = dyn base(<lang nchar(lines, "c", TRUE)>);
    goto L1(r3, l2, "", r10);
  L24():
    _get_vignette_metadata = ldf `.get_vignette_metadata`;
    check L26() else D5();
  L25():
    r25 = dyn base2(<lang .get_vignette_metadata(lines, "IndexEntry")>, "");
    goto L3(r25);
  D5():
    deopt 28 [];
  L2(r19, l8, r20, r21):
    is_na = ldf `is.na` in base;
    r23 = dyn is_na(r21);
    check L23() else D4();
  L4(dx3):
    st title = dx3;
    _get_vignette_metadata1 = ldf `.get_vignette_metadata`;
    check L32() else D8();
  L19():
    lines = ld lines;
    check L21() else D2();
  L20():
    r18 = dyn base1(<sym lines>, "c", TRUE);
    goto L2(r3, l2, "", r18);
  L26():
    p1 = prom<V +>{
      lines2 = ld lines;
      lines3 = force? lines2;
      checkMissing(lines3);
      return lines3;
    };
    r28 = dyn _get_vignette_metadata(p1, "IndexEntry");
    check L27() else D6();
  L29():
    dr2 = tryDispatchBuiltin.1("[", r26);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L31() else L30(dr2);
  L30(r31):
    __ = ldf `[` in base;
    r32 = dyn __(r31, 1);
    goto L4(r32);
  D2():
    deopt 14 [r3, l2, "", lines];
  D4():
    deopt 22 [r19, l8, r20, r23];
  D6():
    deopt 31 [r28];
  D8():
    deopt 40 [];
  L21():
    lines1 = force? lines;
    checkMissing(lines1);
    nchar = ldf nchar in base;
    r22 = dyn nchar(lines1, "c", TRUE, NA_LGL);
    check L22() else D3();
  L23():
    goto L1(r19, l8, r20, r23);
  L27():
    c1 = ldf c in base;
    r29 = dyn c1(r28, "");
    check L28() else D7();
  L31():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L4(dx2);
  L32():
    p2 = prom<V +>{
      lines4 = ld lines;
      lines5 = force? lines4;
      checkMissing(lines5);
      return lines5;
    };
    r34 = dyn _get_vignette_metadata1(p2, "Depends");
    check L33() else D9();
  D3():
    deopt 20 [r3, l2, "", r22];
  D7():
    deopt 34 [r29];
  D9():
    deopt 43 [r34];
  L22():
    goto L2(r3, l2, "", r22);
  L28():
    goto L3(r29);
  L33():
    st depends = r34;
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L34() else L35();
  L5(r36):
    c3 = `as.logical`(r36);
    if c3 then L38() else L6();
  L34():
    depends = ld depends;
    check L36() else D10();
  L35():
    r35 = dyn base3(<sym depends>);
    goto L5(r35);
  D10():
    deopt 47 [depends];
  L6():
    goto L7();
  L7():
    _get_vignette_metadata2 = ldf `.get_vignette_metadata`;
    check L42() else D14();
  L36():
    depends1 = force? depends;
    checkMissing(depends1);
    length = ldf length in base;
    r37 = dyn length(depends1);
    check L37() else D11();
  L38():
    unlist = ldf unlist;
    check L39() else D12();
  D11():
    deopt 50 [r37];
  D12():
    deopt 52 [];
  D14():
    deopt 59 [];
  L37():
    goto L5(r37);
  L39():
    p4 = prom<V +>{
      strsplit = ldf strsplit;
      p3 = prom<V +>{
        depends2 = ld depends;
        depends3 = force? depends2;
        checkMissing(depends3);
        c4 = `is.object`(depends3);
        if c4 then L1() else L2(depends3);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("[", depends3);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(depends5):
        __1 = ldf `[` in base;
        r38 = dyn __1(depends5, 1);
        goto L0(r38);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r40 = dyn strsplit(p3, ", *");
      return r40;
    };
    r42 = dyn unlist(p4);
    check L40() else D13();
  L42():
    p5 = prom<V +>{
      lines6 = ld lines;
      lines7 = force? lines6;
      checkMissing(lines7);
      return lines7;
    };
    r45 = dyn _get_vignette_metadata2(p5, "Keywords");
    check L43() else D15();
  D13():
    deopt 54 [r42];
  D15():
    deopt 62 [r45];
  L40():
    st depends = r42;
    goto L7();
  L43():
    st keywords = r45;
    sym4 = ldf length;
    base4 = ldf length in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L8(r47):
    r49 = `!`(r47);
    c5 = `as.logical`(r49);
    if c5 then L48() else L9();
  L44():
    keywords = ld keywords;
    check L46() else D16();
  L45():
    r46 = dyn base4(<sym keywords>);
    goto L8(r46);
  D16():
    deopt 66 [keywords];
  L9():
    unlist1 = ldf unlist;
    check L52() else D20();
  L10(r52):
    st keywords = r52;
    getVignetteEngine = ldf getVignetteEngine;
    check L54() else D22();
  L46():
    keywords1 = force? keywords;
    checkMissing(keywords1);
    length1 = ldf length in base;
    r48 = dyn length1(keywords1);
    check L47() else D17();
  L48():
    _get_vignette_metadata3 = ldf `.get_vignette_metadata`;
    check L49() else D18();
  D17():
    deopt 69 [r48];
  D18():
    deopt 72 [];
  D20():
    deopt 77 [];
  D22():
    deopt 82 [];
  L47():
    goto L8(r48);
  L49():
    p6 = prom<V +>{
      lines8 = ld lines;
      lines9 = force? lines8;
      checkMissing(lines9);
      return lines9;
    };
    r51 = dyn _get_vignette_metadata3(p6, "Keyword");
    check L50() else D19();
  L52():
    p8 = prom<V +>{
      strsplit1 = ldf strsplit;
      p7 = prom<V +>{
        keywords2 = ld keywords;
        keywords3 = force? keywords2;
        checkMissing(keywords3);
        c6 = `is.object`(keywords3);
        if c6 then L1() else L2(keywords3);
      L0(dx7):
        return dx7;
      L1():
        dr6 = tryDispatchBuiltin.1("[", keywords3);
        dc3 = getTryDispatchBuiltinDispatched(dr6);
        if dc3 then L3() else L2(dr6);
      L2(keywords5):
        __2 = ldf `[` in base;
        r53 = dyn __2(keywords5, 1);
        goto L0(r53);
      L3():
        dx6 = getTryDispatchBuiltinValue(dr6);
        goto L0(dx6);
      };
      r55 = dyn strsplit1(p7, ", *");
      return r55;
    };
    r57 = dyn unlist1(p8);
    check L53() else D21();
  L54():
    p9 = prom<V +>{
      lines10 = ld lines;
      lines11 = force? lines10;
      checkMissing(lines11);
      return lines11;
    };
    r59 = dyn getVignetteEngine[lines](p9);
    check L55() else D23();
  D19():
    deopt 75 [r51];
  D21():
    deopt 79 [r57];
  D23():
    deopt 85 [r59];
  L50():
    goto L10(r51);
  L53():
    goto L10(r57);
  L55():
    st engine = r59;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L11(r61):
    popenv;
    return r61;
  L56():
    basename = ldf basename;
    check L58() else D24();
  L57():
    r60 = dyn base5[file, title, depends, keywords, engine](<lang basename(file)>, <sym title>, <sym depends>, <sym keywords>, <sym engine>);
    goto L11(r60);
  D24():
    deopt 90 [];
  L58():
    p10 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    r63 = dyn basename(p10);
    check L59() else D25();
  D25():
    deopt 92 [r63];
  L59():
    title = ld title;
    check L60() else D26();
  D26():
    deopt 94 [title];
  L60():
    title1 = force? title;
    checkMissing(title1);
    depends6 = ld depends;
    check L61() else D27();
  D27():
    deopt 97 [depends6];
  L61():
    depends7 = force? depends6;
    checkMissing(depends7);
    keywords6 = ld keywords;
    check L62() else D28();
  D28():
    deopt 100 [keywords6];
  L62():
    keywords7 = force? keywords6;
    checkMissing(keywords7);
    engine = ld engine;
    check L63() else D29();
  D29():
    deopt 103 [engine];
  L63():
    engine1 = force? engine;
    checkMissing(engine1);
    list = ldf list in base;
    r64 = dyn list(r63, title1, depends7, keywords7, engine1);
    check L64() else D30();
  D30():
    deopt 107 [r64];
  L64():
    goto L11(r64);
  }
}