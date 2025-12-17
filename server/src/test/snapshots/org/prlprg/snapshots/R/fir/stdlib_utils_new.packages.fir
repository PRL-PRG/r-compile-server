fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3824900454;
    st `new.packages` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3824900454(`lib.loc`, repos, contriburl, instPkgs, method, available, ask, `...`, type) {
  (reg lib_loc:*, reg repos:*, reg contriburl:*, reg instPkgs:*, reg method:*, reg available:*, reg ask:*, reg ddd:dots, reg type:*) -+> V { var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var repos:*, reg repos_isMissing:L, reg repos_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), var contriburl:*, reg contriburl_isMissing:L, reg contriburl_orDefault:*, reg contrib_url:cls, reg repos1:*, reg repos2:V, reg p1:p(V +), reg type1:*, reg type2:V, reg p2:p(V +), reg r4:V, reg p3:p(V +), var instPkgs:*, reg instPkgs_isMissing:L, reg instPkgs_orDefault:*, reg installed_packages:cls, reg lib_loc1:*, reg lib_loc2:V, reg p4:p(V +), reg ddd1:*, reg r7:V, reg p5:p(V +), var method:*, var available:*, reg available_isMissing:L, reg available_orDefault:*, var ask:*, reg ask_isMissing:L, reg ask_orDefault:*, var `...`:dots?, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg getOption1:cls, reg r9:V, reg p6:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r11:V, reg r12:V, reg type3:*, reg type4:V, reg c:L, reg r13:V, reg c1:L, reg stop:cls, reg r14:V, reg ask1:*, reg ask2:V, reg type5:*, reg type6:V, reg r16:V, reg c2:L, reg c4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r17:V, reg c7:L, reg r18:V, reg missing:cls, reg r19:V, reg r20:V, reg c8:L, reg c9:L, reg c10:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r21:V, reg c17:L, reg c18:L, reg r22:V, reg available1:*, reg available2:V, reg c19:V, reg r23:V, reg c20:L, reg c21:V, reg c24:L, reg c25:V, reg c27:L, reg stop1:cls, reg r24:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg lib_loc3:*, reg lib_loc4:V, reg c28:V, reg c29:L, reg _libPaths:cls, reg r28:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg instPkgs1:*, reg instPkgs2:V, reg is_matrix:cls, reg r32:V, reg r33:V, reg c30:L, reg stop2:cls, reg gettextf:cls, reg lib_loc5:*, reg lib_loc6:V, reg p7:p(V +), reg r35:V, reg p8:p(V +), reg r37:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r39:V, reg r40:V, reg available3:*, reg available4:V, reg c31:V, reg c32:L, reg available_packages:cls, reg contriburl1:*, reg contriburl2:V, reg p9:p(V +), reg method1:*, reg method2:V, reg p10:p(V +), reg ddd2:dots?, reg r43:V, reg unique:cls, reg instPkgs3:*, reg instPkgs4:V, reg c33:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r45:V, reg p11:p(V +), reg r47:V, reg sort:cls, reg unique1:cls, reg available5:*, reg available6:V, reg c34:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r48:V, reg p12:p(V +), reg r50:V, reg p13:p(V +), reg r52:V, reg setdiff:cls, reg poss:*, reg poss1:V, reg p14:p(V +), reg installed:*, reg installed1:V, reg p15:p(V +), reg r55:V, reg character:cls, reg r56:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r57:V, reg r58:V, reg ask3:*, reg ask4:V, reg c35:L, reg c36:L, reg c38:V, reg ask5:*, reg ask6:V, reg r59:V, reg c39:L, reg c40:V, reg c42:L, reg _Platform:*, reg _Platform1:V, reg c43:L, reg _Platform3:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r60:V, reg r61:V, reg c44:L, reg c45:V, reg _Platform4:*, reg _Platform5:V, reg c47:L, reg c49:L, reg _Platform7:V, reg dr6:V, reg dc3:L, reg dx6:V, reg c51:L, reg dx7:V, reg r62:V, reg r63:V, reg c52:L, reg c53:V, reg c55:L, reg c56:V, reg capabilities:cls, reg r64:V, reg c58:L, reg c61:L, reg c62:V, reg capabilities1:cls, reg r65:V, reg c63:L, reg c64:V, reg c67:L, reg c68:V, reg c70:L, reg r66:V, reg isTRUE:cls, reg ask7:*, reg ask8:V, reg p16:p(V +), reg r69:V, reg c71:L, reg sym7:cls, reg base7:cls, reg guard7:L, reg r70:V, reg r71:V, reg res:*, reg res1:V, reg length:cls, reg r72:V, reg c72:L, reg res2:*, reg res3:V, reg c73:L, reg res5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r73:V, reg res8:V, reg r74:V, reg select_list:cls, reg res9:*, reg res10:V, reg p17:p(V +), reg graphics:*, reg graphics1:V, reg p18:p(V +), reg r77:V, reg res11:*, reg res12:V, reg match:cls, reg r78:V, reg __2:cls, reg r79:V, reg dx10:V, reg message:cls, reg r80:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r81:V, reg r82:V, reg update:*, reg update1:V, reg length1:cls, reg r83:V, reg c74:L, reg type7:*, reg type8:V, reg r84:V, reg c75:L, reg install_packages:cls, reg update2:*, reg update3:V, reg p19:p(V +), reg lib_loc7:*, reg lib_loc8:V, reg c76:L, reg lib_loc10:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r86:V, reg p20:p(V +), reg method3:*, reg method4:V, reg p21:p(V +), reg type9:*, reg type10:V, reg p22:p(V +), reg ddd3:dots?, reg r90:V, reg install_packages1:cls, reg update4:*, reg update5:V, reg p23:p(V +), reg lib_loc11:*, reg lib_loc12:V, reg c77:L, reg lib_loc14:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r93:V, reg p24:p(V +), reg contriburl3:*, reg contriburl4:V, reg p25:p(V +), reg method5:*, reg method6:V, reg p26:p(V +), reg available9:*, reg available10:V, reg p27:p(V +), reg type11:*, reg type12:V, reg p28:p(V +), reg ddd4:dots?, reg r99:V, reg list_files:cls, reg lib_loc15:*, reg lib_loc16:V, reg c78:L, reg lib_loc18:V, reg dr14:V, reg dc7:L, reg dx16:V, reg dx17:V, reg __5:cls, reg r100:V, reg p29:p(V +), reg r102:V, reg update6:*, reg update7:V, reg c79:L, reg update9:V, reg dr16:V, reg dc8:L, reg dx18:V, reg dx19:V, reg _in_:cls, reg update10:*, reg update11:V, reg p30:p(V +), reg dirs:*, reg dirs1:V, reg p31:p(V +), reg r105:V, reg __6:cls, reg r106:V, reg res13:*, reg res14:V, reg c80:L, reg res16:V, reg dr18:V, reg dc9:L, reg dx20:V, reg dx21:V, reg _in_1:cls, reg res17:*, reg res18:V, reg p32:p(V +), reg updated:*, reg updated1:V, reg p33:p(V +), reg r109:V, reg r110:V, reg __7:cls, reg r111:V, reg res19:*, reg res20:V |
    mkenv;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L0(NULL) else L0(lib_loc);
  L0(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    repos_isMissing = missing.0(repos);
    if repos_isMissing then L1() else L2(repos);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("repos");
      return r;
    };
    goto L2(p);
  L2(repos_orDefault):
    st repos = repos_orDefault;
    contriburl_isMissing = missing.0(contriburl);
    if contriburl_isMissing then L3() else L4(contriburl);
  L3():
    p3 = prom<V +>{
      contrib_url = ldf `contrib.url`;
      p1 = prom<V +>{
        repos1 = ld repos;
        repos2 = force? repos1;
        checkMissing(repos2);
        return repos2;
      };
      p2 = prom<V +>{
        type1 = ld type;
        type2 = force? type1;
        checkMissing(type2);
        return type2;
      };
      r4 = dyn contrib_url(p1, p2);
      return r4;
    };
    goto L4(p3);
  L4(contriburl_orDefault):
    st contriburl = contriburl_orDefault;
    instPkgs_isMissing = missing.0(instPkgs);
    if instPkgs_isMissing then L5() else L6(instPkgs);
  L5():
    p5 = prom<V +>{
      installed_packages = ldf `installed.packages`;
      p4 = prom<V +>{
        lib_loc1 = ld `lib.loc`;
        lib_loc2 = force? lib_loc1;
        checkMissing(lib_loc2);
        return lib_loc2;
      };
      ddd1 = ld `...`;
      r7 = dyn installed_packages[`lib.loc`, `...`](p4, ddd1);
      return r7;
    };
    goto L6(p5);
  L6(instPkgs_orDefault):
    st instPkgs = instPkgs_orDefault;
    st method = method;
    available_isMissing = missing.0(available);
    if available_isMissing then L7(NULL) else L7(available);
  L7(available_orDefault):
    st available = available_orDefault;
    ask_isMissing = missing.0(ask);
    if ask_isMissing then L8(FALSE) else L8(ask);
  L8(ask_orDefault):
    st ask = ask_orDefault;
    st `...` = ddd;
    type_isMissing = missing.0(type);
    if type_isMissing then L9() else L10(type);
  L9():
    p6 = prom<V +>{
      getOption1 = ldf getOption;
      r9 = dyn getOption1("pkgType");
      return r9;
    };
    goto L10(p6);
  L10(type_orDefault):
    st type = type_orDefault;
    sym = ldf `is.character`;
    base = ldf `is.character` in base;
    guard = `==`.4(sym, base);
    if guard then L52() else L53();
  L11(r12):
    r13 = `!`(r12);
    c1 = `as.logical`(r13);
    if c1 then L55() else L12();
  L52():
    type3 = ld type;
    check L54() else D0();
  L53():
    r11 = dyn base(<sym type>);
    goto L11(r11);
  D0():
    deopt 1 [type3];
  L12():
    goto L13();
  L13():
    ask1 = ld ask;
    check L59() else D3();
  L54():
    type4 = force? type3;
    checkMissing(type4);
    c = `is.character`(type4);
    goto L11(c);
  L55():
    stop = ldf stop;
    check L56() else D1();
  D1():
    deopt 6 [];
  D3():
    deopt 11 [ask1];
  L56():
    r14 = dyn stop("invalid 'type'; must be a character string");
    check L57() else D2();
  L59():
    ask2 = force? ask1;
    checkMissing(ask2);
    type5 = ld type;
    check L60() else D4();
  D2():
    deopt 8 [r14];
  D4():
    deopt 13 [type5];
  L57():
    goto L13();
  L60():
    type6 = force? type5;
    checkMissing(type6);
    r16 = `==`(type6, "both");
    c2 = `as.logical`(r16);
    if c2 then L61() else L14(c2);
  L14(c4):
    c27 = `as.logical`(c4);
    if c27 then L70() else L18();
  L61():
    sym1 = ldf missing;
    base1 = ldf missing in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L62() else L63();
  L15(c7, r18):
    r20 = `!`(r18);
    c8 = `as.logical`(r20);
    if c8 then L16(c7, c8) else L64();
  L18():
    goto L19();
  L19():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L74() else L75();
  L62():
    missing = ldf missing in base;
    r19 = dyn missing(<sym contriburl>);
    goto L15(c2, r19);
  L63():
    r17 = dyn base1(<sym contriburl>);
    goto L15(c2, r17);
  L70():
    stop1 = ldf stop;
    check L71() else D6();
  D6():
    deopt 29 [];
  L16(c9, c10):
    c24 = `as.logical`(c10);
    c25 = `&&`(c9, c24);
    goto L14(c25);
  L20(r27):
    c29 = `as.logical`(r27);
    if c29 then L77() else L21();
  L64():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L65() else L66();
  L71():
    r24 = dyn stop1("specifying 'contriburl' or 'available' requires a single type, not type = \"both\"");
    check L72() else D7();
  L74():
    lib_loc3 = ld `lib.loc`;
    check L76() else D8();
  L75():
    r26 = dyn base3(<sym lib.loc>);
    goto L20(r26);
  D7():
    deopt 31 [r24];
  D8():
    deopt 35 [lib_loc3];
  L17(c17, c18, r22):
    r23 = `!`(r22);
    c20 = `as.logical`(r23);
    c21 = `||`(c18, c20);
    goto L16(c17, c21);
  L21():
    goto L22();
  L22():
    sym4 = ldf `is.matrix`;
    base4 = ldf `is.matrix` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L81() else L82();
  L65():
    available1 = ld available;
    check L67() else D5();
  L66():
    r21 = dyn base2(<sym available>);
    goto L17(c7, c8, r21);
  L72():
    goto L19();
  L76():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    c28 = `==`(lib_loc4, NULL);
    goto L20(c28);
  L77():
    _libPaths = ldf `.libPaths`;
    check L78() else D9();
  D5():
    deopt 22 [c7, c8, available1];
  D9():
    deopt 39 [];
  L23(r31):
    r33 = `!`(r31);
    c30 = `as.logical`(r33);
    if c30 then L85() else L24();
  L67():
    available2 = force? available1;
    checkMissing(available2);
    c19 = `==`(available2, NULL);
    goto L17(c7, c8, c19);
  L78():
    r28 = dyn _libPaths();
    check L79() else D10();
  L81():
    instPkgs1 = ld instPkgs;
    check L83() else D11();
  L82():
    r30 = dyn base4(<sym instPkgs>);
    goto L23(r30);
  D10():
    deopt 40 [r28];
  D11():
    deopt 46 [instPkgs1];
  L24():
    goto L25();
  L25():
    sym5 = ldf `is.null`;
    base5 = ldf `is.null` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L89() else L90();
  L79():
    st `lib.loc` = r28;
    goto L22();
  L83():
    instPkgs2 = force? instPkgs1;
    checkMissing(instPkgs2);
    is_matrix = ldf `is.matrix` in base;
    r32 = dyn is_matrix(instPkgs2);
    check L84() else D12();
  L85():
    stop2 = ldf stop;
    check L86() else D13();
  D12():
    deopt 49 [r32];
  D13():
    deopt 52 [];
  L26(r40):
    c32 = `as.logical`(r40);
    if c32 then L92() else L27();
  L84():
    goto L23(r32);
  L86():
    p8 = prom<V +>{
      gettextf = ldf gettextf;
      p7 = prom<V +>{
        lib_loc5 = ld `lib.loc`;
        lib_loc6 = force? lib_loc5;
        checkMissing(lib_loc6);
        return lib_loc6;
      };
      r35 = dyn gettextf("no installed packages for (invalid?) 'lib.loc=%s'", p7);
      return r35;
    };
    r37 = dyn stop2[, domain](p8, NA_LGL);
    check L87() else D14();
  L89():
    available3 = ld available;
    check L91() else D15();
  L90():
    r39 = dyn base5(<sym available>);
    goto L26(r39);
  D14():
    deopt 56 [r37];
  D15():
    deopt 60 [available3];
  L27():
    goto L28();
  L28():
    unique = ldf unique;
    check L96() else D18();
  L87():
    goto L25();
  L91():
    available4 = force? available3;
    checkMissing(available4);
    c31 = `==`(available4, NULL);
    goto L26(c31);
  L92():
    available_packages = ldf `available.packages`;
    check L93() else D16();
  D16():
    deopt 64 [];
  D18():
    deopt 75 [];
  L93():
    p9 = prom<V +>{
      contriburl1 = ld contriburl;
      contriburl2 = force? contriburl1;
      checkMissing(contriburl2);
      return contriburl2;
    };
    p10 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    ddd2 = ld `...`;
    r43 = dyn available_packages[contriburl, method, `...`](p9, p10, ddd2);
    check L94() else D17();
  L96():
    p11 = prom<V +>{
      instPkgs3 = ld instPkgs;
      instPkgs4 = force? instPkgs3;
      checkMissing(instPkgs4);
      c33 = `is.object`(instPkgs4);
      if c33 then L1() else L2();
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", instPkgs4);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2();
    L2():
      __ = ldf `[` in base;
      r45 = dyn __(instPkgs4, <missing>, "Package");
      goto L0(r45);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r47 = dyn unique(p11);
    check L97() else D19();
  D17():
    deopt 70 [r43];
  D19():
    deopt 77 [r47];
  L94():
    st available = r43;
    goto L28();
  L97():
    st installed = r47;
    sort = ldf sort;
    check L98() else D20();
  D20():
    deopt 80 [];
  L98():
    p13 = prom<V +>{
      unique1 = ldf unique;
      p12 = prom<V +>{
        available5 = ld available;
        available6 = force? available5;
        checkMissing(available6);
        c34 = `is.object`(available6);
        if c34 then L1() else L2();
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", available6);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2();
      L2():
        __1 = ldf `[` in base;
        r48 = dyn __1(available6, <missing>, "Package");
        goto L0(r48);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r50 = dyn unique1(p12);
      return r50;
    };
    r52 = dyn sort(p13);
    check L99() else D21();
  D21():
    deopt 82 [r52];
  L99():
    st poss = r52;
    setdiff = ldf setdiff;
    check L100() else D22();
  D22():
    deopt 85 [];
  L100():
    p14 = prom<V +>{
      poss = ld poss;
      poss1 = force? poss;
      checkMissing(poss1);
      return poss1;
    };
    p15 = prom<V +>{
      installed = ld installed;
      installed1 = force? installed;
      checkMissing(installed1);
      return installed1;
    };
    r55 = dyn setdiff(p14, p15);
    check L101() else D23();
  D23():
    deopt 88 [r55];
  L101():
    st res = r55;
    character = ldf character;
    check L102() else D24();
  D24():
    deopt 91 [];
  L102():
    r56 = dyn character();
    check L103() else D25();
  D25():
    deopt 92 [r56];
  L103():
    st update = r56;
    st graphics = FALSE;
    sym6 = ldf `is.character`;
    base6 = ldf `is.character` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L104() else L105();
  L29(r58):
    c36 = `as.logical`(r58);
    if c36 then L107() else L30(c36);
  L104():
    ask3 = ld ask;
    check L106() else D26();
  L105():
    r57 = dyn base6(<sym ask>);
    goto L29(r57);
  D26():
    deopt 98 [ask3];
  L30(c38):
    c42 = `as.logical`(c38);
    if c42 then L110() else L31();
  L106():
    ask4 = force? ask3;
    checkMissing(ask4);
    c35 = `is.character`(ask4);
    goto L29(c35);
  L107():
    ask5 = ld ask;
    check L108() else D27();
  D27():
    deopt 101 [c36, ask5];
  L31():
    goto L37();
  L37():
    isTRUE = ldf isTRUE;
    check L134() else D34();
  L108():
    ask6 = force? ask5;
    checkMissing(ask6);
    r59 = `==`(ask6, "graphics");
    c39 = `as.logical`(r59);
    c40 = `&&`(c36, c39);
    goto L30(c40);
  L110():
    st ask = TRUE;
    _Platform = ld `.Platform`;
    check L111() else D28();
  D28():
    deopt 109 [_Platform];
  D34():
    deopt 138 [];
  L111():
    _Platform1 = force? _Platform;
    checkMissing(_Platform1);
    c43 = `is.object`(_Platform1);
    if c43 then L113() else L114(_Platform1);
  L134():
    p16 = prom<V +>{
      ask7 = ld ask;
      ask8 = force? ask7;
      checkMissing(ask8);
      return ask8;
    };
    r69 = dyn isTRUE(p16);
    check L135() else D35();
  D35():
    deopt 140 [r69];
  L112(dx5):
    r61 = `==`(dx5, "windows");
    c44 = `as.logical`(r61);
    if c44 then L32(c44) else L116();
  L113():
    dr4 = tryDispatchBuiltin.1("$", _Platform1);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L115() else L114(dr4);
  L114(_Platform3):
    r60 = `$`(_Platform3, <sym OS.type>);
    goto L112(r60);
  L135():
    c71 = `as.logical`(r69);
    if c71 then L136() else L38();
  L32(c45):
    c55 = `as.logical`(c45);
    if c55 then L33(c55) else L123();
  L38():
    goto L44();
  L44():
    sym9 = ldf length;
    base9 = ldf length in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L156() else L157();
  L115():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L112(dx4);
  L116():
    _Platform4 = ld `.Platform`;
    check L117() else D29();
  L136():
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L137() else L138();
  D29():
    deopt 114 [c44, _Platform4];
  L33(c56):
    c70 = `as.logical`(c56);
    if c70 then L131() else L35();
  L39(r71):
    c72 = `as.logical`(r71);
    if c72 then L141() else L40();
  L45(r82):
    c74 = `as.logical`(r82);
    if c74 then L160() else L46();
  L117():
    _Platform5 = force? _Platform4;
    checkMissing(_Platform5);
    c47 = `is.object`(_Platform5);
    if c47 then L119() else L120(c44, _Platform5);
  L123():
    capabilities = ldf capabilities;
    check L124() else D30();
  L137():
    res = ld res;
    check L139() else D36();
  L138():
    r70 = dyn base7(<sym res>);
    goto L39(r70);
  L156():
    update = ld update;
    check L158() else D45();
  L157():
    r81 = dyn base9(<sym update>);
    goto L45(r81);
  D30():
    deopt 121 [c55];
  D36():
    deopt 143 [res];
  D45():
    deopt 177 [update];
  L35():
    goto L36(NULL);
  L36(r66):
    goto L37();
  L40():
    message = ldf message;
    check L153() else D43();
  L43(dx10):
    goto L44();
  L46():
    goto L51();
  L51():
    res19 = ld res;
    check L183() else D60();
  L118(c51, dx7):
    r63 = `==`(dx7, "AQUA");
    c52 = `as.logical`(r63);
    c53 = `||`(c51, c52);
    goto L32(c53);
  L119():
    dr6 = tryDispatchBuiltin.1("$", _Platform5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L121() else L120(c44, dr6);
  L120(c49, _Platform7):
    r62 = `$`(_Platform7, <sym GUI>);
    goto L118(c49, r62);
  L124():
    r64 = dyn capabilities("tcltk");
    check L125() else D31();
  L131():
    st graphics = TRUE;
    goto L36(TRUE);
  L139():
    res1 = force? res;
    checkMissing(res1);
    length = ldf length in base;
    r72 = dyn length(res1);
    check L140() else D37();
  L141():
    res2 = ld res;
    check L142() else D38();
  L158():
    update1 = force? update;
    checkMissing(update1);
    length1 = ldf length in base;
    r83 = dyn length1(update1);
    check L159() else D46();
  L160():
    type7 = ld type;
    check L161() else D47();
  D31():
    deopt 123 [c55, r64];
  D37():
    deopt 146 [r72];
  D38():
    deopt 147 [res2];
  D43():
    deopt 170 [];
  D46():
    deopt 180 [r83];
  D47():
    deopt 181 [type7];
  D60():
    deopt 237 [res19];
  L121():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L118(c44, dx6);
  L125():
    c58 = `as.logical`(r64);
    if c58 then L126() else L34(c55, c58);
  L140():
    goto L39(r72);
  L142():
    res3 = force? res2;
    checkMissing(res3);
    c73 = `is.object`(res3);
    if c73 then L143() else L144(res3);
  L153():
    r80 = dyn message("no new packages are available");
    check L154() else D44();
  L159():
    goto L45(r83);
  L161():
    type8 = force? type7;
    checkMissing(type8);
    r84 = `==`(type8, "both");
    c75 = `as.logical`(r84);
    if c75 then L162() else L47();
  L183():
    res20 = force? res19;
    checkMissing(res20);
    popenv;
    return res20;
  D44():
    deopt 172 [r80];
  L34(c61, c62):
    c67 = `as.logical`(c62);
    c68 = `||`(c61, c67);
    goto L33(c68);
  L41(dx9):
    st update = dx9;
    goto L43(dx9);
  L47():
    install_packages1 = ldf `install.packages`;
    check L166() else D50();
  L48():
    list_files = ldf `list.files`;
    check L168() else D52();
  L126():
    capabilities1 = ldf capabilities;
    check L127() else D32();
  L143():
    dr8 = tryDispatchBuiltin.1("[", res3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L145() else L144(dr8);
  L144(res5):
    sym8 = ldf match;
    base8 = ldf match in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L146() else L147();
  L154():
    goto L43(r80);
  L162():
    install_packages = ldf `install.packages`;
    check L163() else D48();
  D32():
    deopt 125 [c55, c58];
  D48():
    deopt 186 [];
  D50():
    deopt 197 [];
  D52():
    deopt 212 [];
  L42(res8, r74):
    __2 = ldf `[` in base;
    r79 = dyn __2(res8, r74);
    goto L41(r79);
  L127():
    r65 = dyn capabilities1("X11");
    check L128() else D33();
  L145():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L41(dx8);
  L146():
    select_list = ldf `select.list`;
    check L148() else D39();
  L147():
    r73 = dyn base8(<lang select.list(res, multiple=TRUE, title="New packages to be installed", graphics=graphics)>, <sym res>);
    goto L42(res5, r73);
  L163():
    p19 = prom<V +>{
      update2 = ld update;
      update3 = force? update2;
      checkMissing(update3);
      return update3;
    };
    p20 = prom<V +>{
      lib_loc7 = ld `lib.loc`;
      lib_loc8 = force? lib_loc7;
      checkMissing(lib_loc8);
      c76 = `is.object`(lib_loc8);
      if c76 then L1() else L2(lib_loc8);
    L0(dx13):
      return dx13;
    L1():
      dr10 = tryDispatchBuiltin.1("[", lib_loc8);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2(dr10);
    L2(lib_loc10):
      __3 = ldf `[` in base;
      r86 = dyn __3(lib_loc10, 1);
      goto L0(r86);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx12);
    };
    p21 = prom<V +>{
      method3 = ld method;
      method4 = force? method3;
      checkMissing(method4);
      return method4;
    };
    p22 = prom<V +>{
      type9 = ld type;
      type10 = force? type9;
      checkMissing(type10);
      return type10;
    };
    ddd3 = ld `...`;
    r90 = dyn install_packages[, lib, method, type, `...`](p19, p20, p21, p22, ddd3);
    check L164() else D49();
  L166():
    p23 = prom<V +>{
      update4 = ld update;
      update5 = force? update4;
      checkMissing(update5);
      return update5;
    };
    p24 = prom<V +>{
      lib_loc11 = ld `lib.loc`;
      lib_loc12 = force? lib_loc11;
      checkMissing(lib_loc12);
      c77 = `is.object`(lib_loc12);
      if c77 then L1() else L2(lib_loc12);
    L0(dx15):
      return dx15;
    L1():
      dr12 = tryDispatchBuiltin.1("[", lib_loc12);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(lib_loc14):
      __4 = ldf `[` in base;
      r93 = dyn __4(lib_loc14, 1);
      goto L0(r93);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx14);
    };
    p25 = prom<V +>{
      contriburl3 = ld contriburl;
      contriburl4 = force? contriburl3;
      checkMissing(contriburl4);
      return contriburl4;
    };
    p26 = prom<V +>{
      method5 = ld method;
      method6 = force? method5;
      checkMissing(method6);
      return method6;
    };
    p27 = prom<V +>{
      available9 = ld available;
      available10 = force? available9;
      checkMissing(available10);
      return available10;
    };
    p28 = prom<V +>{
      type11 = ld type;
      type12 = force? type11;
      checkMissing(type12);
      return type12;
    };
    ddd4 = ld `...`;
    r99 = dyn install_packages1[, lib, contriburl, method, available, type, `...`](p23, p24, p25, p26, p27, p28, ddd4);
    check L167() else D51();
  L168():
    p29 = prom<V +>{
      lib_loc15 = ld `lib.loc`;
      lib_loc16 = force? lib_loc15;
      checkMissing(lib_loc16);
      c78 = `is.object`(lib_loc16);
      if c78 then L1() else L2(lib_loc16);
    L0(dx17):
      return dx17;
    L1():
      dr14 = tryDispatchBuiltin.1("[", lib_loc16);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(lib_loc18):
      __5 = ldf `[` in base;
      r100 = dyn __5(lib_loc18, 1);
      goto L0(r100);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx16);
    };
    r102 = dyn list_files(p29);
    check L169() else D53();
  D33():
    deopt 127 [c55, c58, r65];
  D39():
    deopt 152 [res5];
  D49():
    deopt 195 [r90];
  D51():
    deopt 210 [r99];
  D53():
    deopt 214 [r102];
  L128():
    c63 = `as.logical`(r65);
    c64 = `&&`(c58, c63);
    goto L34(c55, c64);
  L148():
    p17 = prom<V +>{
      res9 = ld res;
      res10 = force? res9;
      checkMissing(res10);
      return res10;
    };
    p18 = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r77 = dyn select_list[, multiple, title, graphics](p17, TRUE, "New packages to be installed", p18);
    check L149() else D40();
  L164():
    goto L48();
  L167():
    goto L48();
  L169():
    st dirs = r102;
    update6 = ld update;
    check L170() else D54();
  D40():
    deopt 160 [res5, r77];
  D54():
    deopt 216 [update6];
  L149():
    res11 = ld res;
    check L150() else D41();
  L170():
    update7 = force? update6;
    checkMissing(update7);
    c79 = `is.object`(update7);
    if c79 then L171() else L172(update7);
  D41():
    deopt 161 [res5, res11];
  L49(dx19):
    st updated = dx19;
    res13 = ld res;
    check L176() else D57();
  L150():
    res12 = force? res11;
    checkMissing(res12);
    match = ldf match in base;
    r78 = dyn match(r77, res12, NA_INT, NULL);
    check L151() else D42();
  L171():
    dr16 = tryDispatchBuiltin.1("[", update7);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L173() else L172(dr16);
  L172(update9):
    _in_ = ldf `%in%`;
    check L174() else D55();
  D42():
    deopt 166 [res5, r78];
  D55():
    deopt 219 [update9];
  D57():
    deopt 225 [res13];
  L151():
    goto L42(res5, r78);
  L173():
    dx18 = getTryDispatchBuiltinValue(dr16);
    goto L49(dx18);
  L174():
    p30 = prom<V +>{
      update10 = ld update;
      update11 = force? update10;
      checkMissing(update11);
      return update11;
    };
    p31 = prom<V +>{
      dirs = ld dirs;
      dirs1 = force? dirs;
      checkMissing(dirs1);
      return dirs1;
    };
    r105 = dyn _in_(p30, p31);
    check L175() else D56();
  L176():
    res14 = force? res13;
    checkMissing(res14);
    c80 = `is.object`(res14);
    if c80 then L177() else L178(res14);
  D56():
    deopt 222 [update9, r105];
  L50(dx21):
    st res = dx21;
    goto L51();
  L175():
    __6 = ldf `[` in base;
    r106 = dyn __6(update9, r105);
    goto L49(r106);
  L177():
    dr18 = tryDispatchBuiltin.1("[", res14);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L179() else L178(dr18);
  L178(res16):
    _in_1 = ldf `%in%`;
    check L180() else D58();
  D58():
    deopt 228 [res16];
  L179():
    dx20 = getTryDispatchBuiltinValue(dr18);
    goto L50(dx20);
  L180():
    p32 = prom<V +>{
      res17 = ld res;
      res18 = force? res17;
      checkMissing(res18);
      return res18;
    };
    p33 = prom<V +>{
      updated = ld updated;
      updated1 = force? updated;
      checkMissing(updated1);
      return updated1;
    };
    r109 = dyn _in_1(p32, p33);
    check L181() else D59();
  D59():
    deopt 231 [res16, r109];
  L181():
    r110 = `!`(r109);
    __7 = ldf `[` in base;
    r111 = dyn __7(res16, r110);
    goto L50(r111);
  }
}