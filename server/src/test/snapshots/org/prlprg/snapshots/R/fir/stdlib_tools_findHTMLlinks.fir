fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2581366245;
    st findHTMLlinks = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2581366245(pkgDir, `lib.loc`, level) {
  (reg pkgDir:*, reg lib_loc:*, reg level:*) -+> V { var pkgDir:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var level:*, reg level_isMissing:L, reg level_orDefault:*, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg lib_loc1:*, reg lib_loc2:V, reg c:V, reg c1:L, reg _libPaths:cls, reg r3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg list:cls, reg r7:V, reg _in_:cls, reg level1:*, reg level2:V, reg p1:p(V +), reg r9:V, reg c2:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg Links:*, reg Links1:V, reg lapply:cls, reg lib_loc3:*, reg lib_loc4:V, reg p2:p(V +), reg _find_HTML_links_in_library:*, reg _find_HTML_links_in_library1:V, reg p3:p(V +), reg r14:V, reg c3:cls, reg r15:V, reg _in_1:cls, reg level3:*, reg level4:V, reg p4:p(V +), reg r18:V, reg c4:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg lapply1:cls, reg file_path:cls, reg _Library:*, reg _Library1:V, reg p5:p(V +), reg _get_standard_package_names:cls, reg r22:V, reg c5:L, reg r24:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r25:V, reg p6:p(V +), reg r27:V, reg p7:p(V +), reg _find_HTML_links_in_package:*, reg _find_HTML_links_in_package1:V, reg p8:p(V +), reg r30:V, reg Links2:*, reg Links3:V, reg c6:cls, reg r31:V, reg _in_2:cls, reg level5:*, reg level6:V, reg p9:p(V +), reg r34:V, reg c7:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r35:V, reg r36:V, reg lapply2:cls, reg file_path1:cls, reg _Library2:*, reg _Library3:V, reg p10:p(V +), reg _get_standard_package_names1:cls, reg r38:V, reg c8:L, reg r40:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r41:V, reg p11:p(V +), reg r43:V, reg p12:p(V +), reg _find_HTML_links_in_package2:*, reg _find_HTML_links_in_package3:V, reg p13:p(V +), reg r46:V, reg Links4:*, reg Links5:V, reg c9:cls, reg r47:V, reg _in_3:cls, reg level7:*, reg level8:V, reg p14:p(V +), reg r50:V, reg c10:L, reg c12:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r51:V, reg c15:L, reg r52:V, reg pkgDir1:*, reg pkgDir2:V, reg nzchar:cls, reg r53:V, reg c16:L, reg c17:V, reg c19:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r54:V, reg r55:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r56:V, reg r57:V, reg _find_HTML_links_in_package4:cls, reg pkgDir3:*, reg pkgDir4:V, reg p15:p(V +), reg r59:V, reg list1:cls, reg r60:V, reg Links6:*, reg Links7:V, reg c20:cls, reg r61:V, reg unlist:cls, reg Links8:*, reg Links9:V, reg p16:p(V +), reg r64:V, reg Links10:*, reg Links11:V, reg c21:L, reg Links13:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg duplicated:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r65:V, reg r66:V, reg Links14:*, reg Links15:V, reg names:cls, reg r67:V, reg p17:p(V +), reg r69:V, reg r70:V, reg __:cls, reg r71:V, reg gsub:cls, reg Links16:*, reg Links17:V, reg p18:p(V +), reg r73:V |
    mkenv;
    st pkgDir = pkgDir;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    level_isMissing = missing.0(level);
    if level_isMissing then L1() else L2(level);
  L1():
    p = prom<V +>{
      return <int 0, 1, 2, 3>;
    };
    goto L2(p);
  L2(level_orDefault):
    st level = level_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L23() else L24();
  L3(r2):
    c1 = `as.logical`(r2);
    if c1 then L26() else L4();
  L23():
    lib_loc1 = ld `lib.loc`;
    check L25() else D0();
  L24():
    r1 = dyn base(<sym lib.loc>);
    goto L3(r1);
  D0():
    deopt 1 [lib_loc1];
  L4():
    goto L5();
  L5():
    sym1 = ldf list;
    base1 = ldf list in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L30() else L31();
  L25():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c = `==`(lib_loc2, NULL);
    goto L3(c);
  L26():
    _libPaths = ldf `.libPaths`;
    check L27() else D1();
  D1():
    deopt 5 [];
  L6(r6):
    st Links = r6;
    _in_ = ldf `%in%`;
    check L33() else D4();
  L27():
    r3 = dyn _libPaths();
    check L28() else D2();
  L30():
    list = ldf list in base;
    r7 = dyn list();
    check L32() else D3();
  L31():
    r5 = dyn base1();
    goto L6(r5);
  D2():
    deopt 6 [r3];
  D3():
    deopt 13 [r7];
  D4():
    deopt 16 [];
  L28():
    st `lib.loc` = r3;
    goto L5();
  L32():
    goto L6(r7);
  L33():
    p1 = prom<V +>{
      level1 = ld level;
      level2 = force? level1;
      checkMissing(level2);
      return level2;
    };
    r9 = dyn _in_(3.0, p1);
    check L34() else D5();
  D5():
    deopt 19 [r9];
  L34():
    c2 = `as.logical`(r9);
    if c2 then L35() else L7();
  L7():
    goto L9();
  L9():
    _in_1 = ldf `%in%`;
    check L43() else D10();
  L35():
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  D10():
    deopt 35 [];
  L8(r11):
    st Links = r11;
    goto L9();
  L36():
    Links = ld Links;
    check L38() else D6();
  L37():
    r10 = dyn base2(<sym Links>, <lang lapply(lib.loc, .find_HTML_links_in_library)>);
    goto L8(r10);
  L43():
    p4 = prom<V +>{
      level3 = ld level;
      level4 = force? level3;
      checkMissing(level4);
      return level4;
    };
    r18 = dyn _in_1(2.0, p4);
    check L44() else D11();
  D6():
    deopt 22 [Links];
  D11():
    deopt 38 [r18];
  L38():
    Links1 = force? Links;
    checkMissing(Links1);
    lapply = ldf lapply;
    check L39() else D7();
  L44():
    c4 = `as.logical`(r18);
    if c4 then L45() else L10();
  D7():
    deopt 25 [];
  L10():
    goto L12();
  L12():
    _in_2 = ldf `%in%`;
    check L53() else D16();
  L39():
    p2 = prom<V +>{
      lib_loc3 = ld `lib.loc`;
      lib_loc4 = force? lib_loc3;
      checkMissing(lib_loc4);
      return lib_loc4;
    };
    p3 = prom<V +>{
      _find_HTML_links_in_library = ld `.find_HTML_links_in_library`;
      _find_HTML_links_in_library1 = force? _find_HTML_links_in_library;
      checkMissing(_find_HTML_links_in_library1);
      return _find_HTML_links_in_library1;
    };
    r14 = dyn lapply(p2, p3);
    check L40() else D8();
  L45():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L46() else L47();
  D8():
    deopt 28 [r14];
  D16():
    deopt 54 [];
  L11(r20):
    st Links = r20;
    goto L12();
  L40():
    c3 = ldf c in base;
    r15 = dyn c3(Links1, r14);
    check L41() else D9();
  L46():
    lapply1 = ldf lapply;
    check L48() else D12();
  L47():
    r19 = dyn base3(<lang lapply(file.path(.Library, `$`(.get_standard_package_names(), recommended)), .find_HTML_links_in_package)>, <sym Links>);
    goto L11(r19);
  L53():
    p9 = prom<V +>{
      level5 = ld level;
      level6 = force? level5;
      checkMissing(level6);
      return level6;
    };
    r34 = dyn _in_2(1.0, p9);
    check L54() else D17();
  D9():
    deopt 30 [r15];
  D12():
    deopt 42 [];
  D17():
    deopt 57 [r34];
  L41():
    goto L8(r15);
  L48():
    p7 = prom<V +>{
      file_path = ldf `file.path`;
      p5 = prom<V +>{
        _Library = ld `.Library`;
        _Library1 = force? _Library;
        checkMissing(_Library1);
        return _Library1;
      };
      p6 = prom<V +>{
        _get_standard_package_names = ldf `.get_standard_package_names`;
        r22 = dyn _get_standard_package_names();
        c5 = `is.object`(r22);
        if c5 then L1() else L2(r22);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", r22);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(r24):
        r25 = `$`(r24, <sym recommended>);
        goto L0(r25);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r27 = dyn file_path(p5, p6);
      return r27;
    };
    p8 = prom<V +>{
      _find_HTML_links_in_package = ld `.find_HTML_links_in_package`;
      _find_HTML_links_in_package1 = force? _find_HTML_links_in_package;
      checkMissing(_find_HTML_links_in_package1);
      return _find_HTML_links_in_package1;
    };
    r30 = dyn lapply1(p7, p8);
    check L49() else D13();
  L54():
    c7 = `as.logical`(r34);
    if c7 then L55() else L13();
  D13():
    deopt 45 [r30];
  L13():
    goto L15();
  L15():
    _in_3 = ldf `%in%`;
    check L63() else D22();
  L49():
    Links2 = ld Links;
    check L50() else D14();
  L55():
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L56() else L57();
  D14():
    deopt 46 [Links2];
  D22():
    deopt 73 [];
  L14(r36):
    st Links = r36;
    goto L15();
  L50():
    Links3 = force? Links2;
    checkMissing(Links3);
    c6 = ldf c in base;
    r31 = dyn c6(r30, Links3);
    check L51() else D15();
  L56():
    lapply2 = ldf lapply;
    check L58() else D18();
  L57():
    r35 = dyn base4(<lang lapply(file.path(.Library, `$`(.get_standard_package_names(), base)), .find_HTML_links_in_package)>, <sym Links>);
    goto L14(r35);
  L63():
    p14 = prom<V +>{
      level7 = ld level;
      level8 = force? level7;
      checkMissing(level8);
      return level8;
    };
    r50 = dyn _in_3(0.0, p14);
    check L64() else D23();
  D15():
    deopt 49 [r31];
  D18():
    deopt 61 [];
  D23():
    deopt 76 [r50];
  L51():
    goto L11(r31);
  L58():
    p12 = prom<V +>{
      file_path1 = ldf `file.path`;
      p10 = prom<V +>{
        _Library2 = ld `.Library`;
        _Library3 = force? _Library2;
        checkMissing(_Library3);
        return _Library3;
      };
      p11 = prom<V +>{
        _get_standard_package_names1 = ldf `.get_standard_package_names`;
        r38 = dyn _get_standard_package_names1();
        c8 = `is.object`(r38);
        if c8 then L1() else L2(r38);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("$", r38);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r40):
        r41 = `$`(r40, <sym base>);
        goto L0(r41);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r43 = dyn file_path1(p10, p11);
      return r43;
    };
    p13 = prom<V +>{
      _find_HTML_links_in_package2 = ld `.find_HTML_links_in_package`;
      _find_HTML_links_in_package3 = force? _find_HTML_links_in_package2;
      checkMissing(_find_HTML_links_in_package3);
      return _find_HTML_links_in_package3;
    };
    r46 = dyn lapply2(p12, p13);
    check L59() else D19();
  L64():
    c10 = `as.logical`(r50);
    if c10 then L65() else L16(c10);
  D19():
    deopt 64 [r46];
  L16(c12):
    c19 = `as.logical`(c12);
    if c19 then L71() else L18();
  L59():
    Links4 = ld Links;
    check L60() else D20();
  L65():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L66() else L67();
  D20():
    deopt 65 [Links4];
  L17(c15, r52):
    c16 = `as.logical`(r52);
    c17 = `&&`(c15, c16);
    goto L16(c17);
  L18():
    goto L21();
  L21():
    unlist = ldf unlist;
    check L82() else D31();
  L60():
    Links5 = force? Links4;
    checkMissing(Links5);
    c9 = ldf c in base;
    r47 = dyn c9(r46, Links5);
    check L61() else D21();
  L66():
    pkgDir1 = ld pkgDir;
    check L68() else D24();
  L67():
    r51 = dyn base5(<sym pkgDir>);
    goto L17(c10, r51);
  L71():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L72() else L73();
  D21():
    deopt 68 [r47];
  D24():
    deopt 79 [c10, pkgDir1];
  D31():
    deopt 102 [];
  L19(r55):
    st Links = r55;
    goto L21();
  L61():
    goto L14(r47);
  L68():
    pkgDir2 = force? pkgDir1;
    checkMissing(pkgDir2);
    nzchar = ldf nzchar in base;
    r53 = dyn nzchar(pkgDir2);
    check L69() else D25();
  L72():
    sym7 = ldf list;
    base7 = ldf list in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L74() else L75();
  L73():
    r54 = dyn base6(<lang list(.find_HTML_links_in_package(pkgDir))>, <sym Links>);
    goto L19(r54);
  L82():
    p16 = prom<V +>{
      Links8 = ld Links;
      Links9 = force? Links8;
      checkMissing(Links9);
      return Links9;
    };
    r64 = dyn unlist(p16);
    check L83() else D32();
  D25():
    deopt 82 [c10, r53];
  D32():
    deopt 104 [r64];
  L20(r57):
    Links6 = ld Links;
    check L79() else D29();
  L69():
    goto L17(c10, r53);
  L74():
    _find_HTML_links_in_package4 = ldf `.find_HTML_links_in_package`;
    check L76() else D26();
  L75():
    r56 = dyn base7(<lang .find_HTML_links_in_package(pkgDir)>);
    goto L20(r56);
  L83():
    st Links = r64;
    Links10 = ld Links;
    check L84() else D33();
  D26():
    deopt 89 [];
  D29():
    deopt 94 [Links6];
  D33():
    deopt 106 [Links10];
  L76():
    p15 = prom<V +>{
      pkgDir3 = ld pkgDir;
      pkgDir4 = force? pkgDir3;
      checkMissing(pkgDir4);
      return pkgDir4;
    };
    r59 = dyn _find_HTML_links_in_package4(p15);
    check L77() else D27();
  L79():
    Links7 = force? Links6;
    checkMissing(Links7);
    c20 = ldf c in base;
    r61 = dyn c20(r57, Links7);
    check L80() else D30();
  L84():
    Links11 = force? Links10;
    checkMissing(Links11);
    c21 = `is.object`(Links11);
    if c21 then L85() else L86(Links11);
  D27():
    deopt 91 [r59];
  D30():
    deopt 97 [r61];
  L22(dx5):
    st Links = dx5;
    gsub = ldf gsub;
    check L90() else D36();
  L77():
    list1 = ldf list in base;
    r60 = dyn list1(r59);
    check L78() else D28();
  L80():
    goto L19(r61);
  L85():
    dr4 = tryDispatchBuiltin.1("[", Links11);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L87() else L86(dr4);
  L86(Links13):
    duplicated = ldf duplicated;
    check L88() else D34();
  D28():
    deopt 93 [r60];
  D34():
    deopt 109 [Links13];
  D36():
    deopt 116 [];
  L78():
    goto L20(r60);
  L87():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L22(dx4);
  L88():
    p17 = prom<V +>{
      sym8 = ldf names;
      base8 = ldf names in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r66):
      return r66;
    L1():
      Links14 = ld Links;
      Links15 = force? Links14;
      checkMissing(Links15);
      names = ldf names in base;
      r67 = dyn names(Links15);
      goto L0(r67);
    L2():
      r65 = dyn base8(<sym Links>);
      goto L0(r65);
    };
    r69 = dyn duplicated(p17);
    check L89() else D35();
  L90():
    p18 = prom<V +>{
      Links16 = ld Links;
      Links17 = force? Links16;
      checkMissing(Links17);
      return Links17;
    };
    r73 = dyn gsub("[Rr]d$", "html", p18);
    check L91() else D37();
  D35():
    deopt 111 [Links13, r69];
  D37():
    deopt 120 [r73];
  L89():
    r70 = `!`(r69);
    __ = ldf `[` in base;
    r71 = dyn __(Links13, r70);
    goto L22(r71);
  L91():
    popenv;
    return r73;
  }
}