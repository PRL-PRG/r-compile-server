fun main() {
  () -+> V { reg r:cls, reg try:cls, reg find_package:cls, reg r1:V, reg p:p(V +), reg r3:V, reg find_package1:cls, reg r4:V, reg r5:cls, reg findPkgAll:cls, reg r6:V, reg findPkgAll1:cls, reg r7:V |
    mkenv;
    r = clos inner1913102710;
    st `find.package` = r;
    try = ldf try;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      find_package = ldf `find.package`;
      r1 = dyn find_package("knitr");
      return r1;
    };
    r3 = dyn try(p);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    find_package1 = ldf `find.package`;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    r4 = dyn find_package1[, quiet, verbose]("kitty", TRUE, TRUE);
    check L3() else D3();
  D3():
    deopt 14 [r4];
  L3():
    r5 = clos inner423301576;
    st findPkgAll = r5;
    findPkgAll = ldf findPkgAll;
    check L4() else D4();
  D4():
    deopt 19 [];
  L4():
    r6 = dyn findPkgAll("MASS");
    check L5() else D5();
  D5():
    deopt 21 [r6];
  L5():
    findPkgAll1 = ldf findPkgAll;
    check L6() else D6();
  D6():
    deopt 23 [];
  L6():
    r7 = dyn findPkgAll1("knitr");
    check L7() else D7();
  D7():
    deopt 25 [r7];
  L7():
    popenv;
    return r7;
  }
}
fun inner1913102710(package, `lib.loc`, quiet, verbose) {
  (reg package:*, reg lib_loc:*, reg quiet:*, reg verbose:*) -+> V { var package:*, reg package_isMissing:L, reg package_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, var quiet:*, reg quiet_isMissing:L, reg quiet_orDefault:*, var verbose:*, reg verbose_isMissing:L, reg verbose_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg package1:*, reg package2:V, reg c:V, reg c1:L, reg c3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c6:L, reg r5:V, reg lib_loc1:*, reg lib_loc2:V, reg c7:V, reg c8:L, reg c9:V, reg c11:L, reg c13:V, reg verbose1:*, reg verbose2:V, reg r6:V, reg c14:L, reg c15:V, reg c17:L, reg path_package:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg package3:*, reg package4:V, reg length:cls, reg r12:V, reg r13:V, reg c18:L, reg c20:V, reg _in_:cls, reg package5:*, reg package6:V, reg p1:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r15:V, reg r16:V, reg c21:cls, reg r17:V, reg p2:p(V +), reg r19:V, reg c22:L, reg c23:V, reg c25:L, reg file_path:cls, reg _Library:*, reg _Library1:V, reg p3:p(V +), reg package7:*, reg package8:V, reg p4:p(V +), reg r22:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg r26:V, reg package9:*, reg package10:V, reg c26:V, reg c27:L, reg _packages:cls, reg r27:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r29:V, reg r30:V, reg package11:*, reg package12:V, reg length1:cls, reg r31:V, reg r32:V, reg c28:L, reg character:cls, reg r33:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r36:V, reg r37:V, reg lib_loc3:*, reg lib_loc4:V, reg c29:V, reg c30:L, reg _libPaths:cls, reg r38:V, reg character1:cls, reg r40:V, reg character2:cls, reg r41:V, reg package13:*, reg package14:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c31:L, reg x:V, reg file_path1:cls, reg lib_loc5:*, reg lib_loc6:V, reg p5:p(V +), reg pkg:*, reg pkg1:V, reg p6:p(V +), reg r44:V, reg paths:*, reg paths1:V, reg c32:L, reg i6:I, reg paths3:V, reg dr:V, reg dc:L, reg dx:V, reg i8:I, reg dx1:V, reg file_exists:cls, reg file_path2:cls, reg paths4:*, reg paths5:V, reg p7:p(V +), reg r46:V, reg p8:p(V +), reg r48:V, reg __:cls, reg r49:V, reg use_loaded:*, reg use_loaded1:V, reg c33:L, reg i10:I, reg c35:V, reg isNamespaceLoaded:cls, reg pkg2:*, reg pkg3:V, reg p9:p(V +), reg r51:V, reg c36:L, reg c37:V, reg c39:L, reg pkg4:*, reg pkg5:V, reg r52:V, reg c40:L, reg system_file:cls, reg r53:V, reg i16:I, reg r54:V, reg _getNamespaceInfo:cls, reg asNamespace:cls, reg pkg6:*, reg pkg7:V, reg p10:p(V +), reg r56:V, reg p11:p(V +), reg r58:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r59:V, reg i19:I, reg r60:V, reg dir:*, reg dir1:V, reg paths6:*, reg paths7:V, reg c41:cls, reg r61:V, reg i20:I, reg sym8:cls, reg base8:cls, reg guard8:L, reg r63:V, reg i23:I, reg r64:V, reg paths8:*, reg paths9:V, reg length2:cls, reg r65:V, reg c42:L, reg i25:I, reg c44:V, reg file_exists1:cls, reg file_path3:cls, reg paths10:*, reg paths11:V, reg c45:L, reg paths13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r66:V, reg p12:p(V +), reg r68:V, reg p13:p(V +), reg r70:V, reg c46:L, reg c47:V, reg c49:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r71:V, reg i31:I, reg r72:V, reg bad:*, reg bad1:V, reg pkg8:*, reg pkg9:V, reg c50:cls, reg r73:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r75:V, reg i36:I, reg r76:V, reg paths14:*, reg paths15:V, reg length3:cls, reg r77:V, reg c51:L, reg unique:cls, reg paths16:*, reg paths17:V, reg p14:p(V +), reg r79:V, reg _standard_regexps:cls, reg r80:V, reg c52:L, reg i40:I, reg r82:V, reg dr4:V, reg dc2:L, reg dx4:V, reg i42:I, reg dx5:V, reg r83:V, reg lapply:cls, reg paths18:*, reg paths19:V, reg p15:p(V +), reg r85:cls, reg p16:p(V +), reg r87:V, reg do_call:cls, reg rbind:*, reg rbind1:V, reg p17:p(V +), reg db:*, reg db1:V, reg p18:p(V +), reg r90:V, reg apply:cls, reg sym11:cls, reg base11:cls, reg guard11:L, reg r91:V, reg r92:V, reg db2:*, reg db3:V, reg is_na:cls, reg r93:V, reg r94:V, reg p19:p(V +), reg all:*, reg all1:V, reg p20:p(V +), reg r97:V, reg db4:*, reg db5:V, reg c53:L, reg i44:I, reg r99:V, reg dr6:V, reg dc3:L, reg dx6:V, reg i46:I, reg r101:V, reg dx7:V, reg __2:cls, reg r102:V, reg pkg10:*, reg pkg11:V, reg r103:V, reg r104:V, reg grepl:cls, reg valid_package_version_regexp:*, reg valid_package_version_regexp1:V, reg p21:p(V +), reg db8:*, reg db9:V, reg c54:L, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg __3:cls, reg r106:V, reg p22:p(V +), reg r108:V, reg r109:V, reg paths20:*, reg paths21:V, reg c55:L, reg i48:I, reg paths23:V, reg dr10:V, reg dc5:L, reg dx10:V, reg i50:I, reg dx11:V, reg ok:*, reg ok1:V, reg __4:cls, reg r110:V, reg i51:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r111:V, reg i54:I, reg r112:V, reg paths24:*, reg paths25:V, reg length4:cls, reg r113:V, reg r114:V, reg c56:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r115:V, reg i59:I, reg r116:V, reg bad2:*, reg bad3:V, reg pkg12:*, reg pkg13:V, reg c57:cls, reg r117:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r119:V, reg i64:I, reg r120:V, reg paths26:*, reg paths27:V, reg length5:cls, reg r121:V, reg r122:V, reg c58:L, reg verbose3:*, reg verbose4:V, reg c59:L, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg pkg14:*, reg pkg15:V, reg p23:p(V +), reg r124:V, reg p24:p(V +), reg paste:cls, reg dQuote:cls, reg paths28:*, reg paths29:V, reg p25:p(V +), reg r127:V, reg p26:p(V +), reg r129:V, reg p27:p(V +), reg r131:V, reg p28:p(V +), reg r133:V, reg i69:I, reg paths30:*, reg paths31:V, reg c60:L, reg i71:I, reg paths33:V, reg dr12:V, reg dc6:L, reg dx13:V, reg i73:I, reg dx14:V, reg __5:cls, reg r135:V, reg i74:I, reg sym15:cls, reg base15:cls, reg guard15:L, reg r136:V, reg i77:I, reg r137:V, reg out:*, reg out1:V, reg paths34:*, reg paths35:V, reg c61:cls, reg r138:V, reg quiet1:*, reg quiet2:V, reg r139:V, reg c62:L, reg c64:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r140:V, reg c67:L, reg r141:V, reg bad4:*, reg bad5:V, reg length6:cls, reg r142:V, reg c68:L, reg c69:V, reg c71:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r143:V, reg r144:V, reg out2:*, reg out3:V, reg length7:cls, reg r145:V, reg r146:V, reg c72:L, reg stop:cls, reg packageNotFoundError:cls, reg bad6:*, reg bad7:V, reg p29:p(V +), reg lib_loc7:*, reg lib_loc8:V, reg p30:p(V +), reg sys_call:cls, reg r149:V, reg p31:p(V +), reg r151:V, reg p32:p(V +), reg r153:V, reg bad8:*, reg bad9:V, reg s1:V, reg l1:I, reg i78:I, reg i79:I, reg i80:I, reg c73:L, reg x1:V, reg warning1:cls, reg gettextf1:cls, reg sQuote1:cls, reg pkg16:*, reg pkg17:V, reg p33:p(V +), reg r156:V, reg p34:p(V +), reg r158:V, reg p35:p(V +), reg r160:V, reg out4:*, reg out5:V |
    mkenv;
    package_isMissing = missing.0(package);
    if package_isMissing then L0(NULL) else L0(package);
  L0(package_orDefault):
    st package = package_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L1(NULL) else L1(lib_loc);
  L1(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    quiet_isMissing = missing.0(quiet);
    if quiet_isMissing then L2(FALSE) else L2(quiet);
  L2(quiet_orDefault):
    st quiet = quiet_orDefault;
    verbose_isMissing = missing.0(verbose);
    if verbose_isMissing then L3() else L4(verbose);
  L3():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("verbose");
      return r;
    };
    goto L4(p);
  L4(verbose_orDefault):
    st verbose = verbose_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L63() else L64();
  L5(r3):
    c1 = `as.logical`(r3);
    if c1 then L66() else L6(c1);
  L63():
    package1 = ld package;
    check L65() else D0();
  L64():
    r2 = dyn base(<sym package>);
    goto L5(r2);
  D0():
    deopt 1 [package1];
  L6(c3):
    c11 = `as.logical`(c3);
    if c11 then L71() else L8(c11);
  L65():
    package2 = force? package1;
    checkMissing(package2);
    c = `==`(package2, NULL);
    goto L5(c);
  L66():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L67() else L68();
  L7(c6, r5):
    c8 = `as.logical`(r5);
    c9 = `&&`(c6, c8);
    goto L6(c9);
  L8(c13):
    c17 = `as.logical`(c13);
    if c17 then L74() else L9();
  L67():
    lib_loc1 = ld `lib.loc`;
    check L69() else D1();
  L68():
    r4 = dyn base1(<sym lib.loc>);
    goto L7(c1, r4);
  L71():
    verbose1 = ld verbose;
    check L72() else D2();
  D1():
    deopt 5 [c1, lib_loc1];
  D2():
    deopt 9 [c11, verbose1];
  L9():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L79() else L80();
  L69():
    lib_loc2 = force? lib_loc1;
    checkMissing(lib_loc2);
    c7 = `==`(lib_loc2, NULL);
    goto L7(c1, c7);
  L72():
    verbose2 = force? verbose1;
    checkMissing(verbose2);
    r6 = `!`(verbose2);
    c14 = `as.logical`(r6);
    c15 = `&&`(c11, c14);
    goto L8(c15);
  L74():
    path_package = ldf `path.package`;
    check L75() else D3();
  D3():
    deopt 14 [];
  L11(r11):
    r13 = `==`(r11, 1);
    c18 = `as.logical`(r13);
    if c18 then L83() else L12(c18);
  L75():
    r7 = dyn path_package();
    check L76() else D4();
  L79():
    package3 = ld package;
    check L81() else D5();
  L80():
    r10 = dyn base2(<sym package>);
    goto L11(r10);
  D4():
    deopt 15 [r7];
  D5():
    deopt 21 [package3];
  L12(c20):
    c25 = `as.logical`(c20);
    if c25 then L87() else L13();
  L76():
    popenv;
    return r7;
  L81():
    package4 = force? package3;
    checkMissing(package4);
    length = ldf length in base;
    r12 = dyn length(package4);
    check L82() else D6();
  L83():
    _in_ = ldf `%in%`;
    check L84() else D7();
  D6():
    deopt 24 [r12];
  D7():
    deopt 28 [c18];
  L13():
    sym4 = ldf `is.null`;
    base4 = ldf `is.null` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L92() else L93();
  L82():
    goto L11(r12);
  L84():
    p1 = prom<V +>{
      package5 = ld package;
      package6 = force? package5;
      checkMissing(package6);
      return package6;
    };
    p2 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      c21 = ldf c in base;
      r17 = dyn c21("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "parallel", "splines", "stats4", "tcltk", "compiler");
      goto L0(r17);
    L2():
      r15 = dyn base3("base", "tools", "utils", "grDevices", "graphics", "stats", "datasets", "methods", "grid", "parallel", "splines", "stats4", "tcltk", "compiler");
      goto L0(r15);
    };
    r19 = dyn _in_(p1, p2);
    check L85() else D8();
  L87():
    file_path = ldf `file.path`;
    check L88() else D9();
  D8():
    deopt 31 [c18, r19];
  D9():
    deopt 34 [];
  L15(r26):
    c27 = `as.logical`(r26);
    if c27 then L95() else L16();
  L85():
    c22 = `as.logical`(r19);
    c23 = `&&`(c18, c22);
    goto L12(c23);
  L88():
    p3 = prom<V +>{
      _Library = ld `.Library`;
      _Library1 = force? _Library;
      checkMissing(_Library1);
      return _Library1;
    };
    p4 = prom<V +>{
      package7 = ld package;
      package8 = force? package7;
      checkMissing(package8);
      return package8;
    };
    r22 = dyn file_path(p3, p4);
    check L89() else D10();
  L92():
    package9 = ld package;
    check L94() else D11();
  L93():
    r25 = dyn base4(<sym package>);
    goto L15(r25);
  D10():
    deopt 37 [r22];
  D11():
    deopt 42 [package9];
  L16():
    goto L17();
  L17():
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L99() else L100();
  L89():
    popenv;
    return r22;
  L94():
    package10 = force? package9;
    checkMissing(package10);
    c26 = `==`(package10, NULL);
    goto L15(c26);
  L95():
    _packages = ldf `.packages`;
    check L96() else D12();
  D12():
    deopt 46 [];
  L18(r30):
    r32 = `!`(r30);
    c28 = `as.logical`(r32);
    if c28 then L103() else L19();
  L96():
    r27 = dyn _packages();
    check L97() else D13();
  L99():
    package11 = ld package;
    check L101() else D14();
  L100():
    r29 = dyn base5(<sym package>);
    goto L18(r29);
  D13():
    deopt 47 [r27];
  D14():
    deopt 53 [package11];
  L19():
    sym6 = ldf `is.null`;
    base6 = ldf `is.null` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L108() else L109();
  L97():
    st package = r27;
    goto L17();
  L101():
    package12 = force? package11;
    checkMissing(package12);
    length1 = ldf length in base;
    r31 = dyn length1(package12);
    check L102() else D15();
  L103():
    character = ldf character;
    check L104() else D16();
  D15():
    deopt 56 [r31];
  D16():
    deopt 59 [];
  L21(r37):
    st use_loaded = r37;
    c30 = `as.logical`(r37);
    if c30 then L111() else L22();
  L102():
    goto L18(r31);
  L104():
    r33 = dyn character();
    check L105() else D17();
  L108():
    lib_loc3 = ld `lib.loc`;
    check L110() else D18();
  L109():
    r36 = dyn base6(<sym lib.loc>);
    goto L21(r36);
  D17():
    deopt 60 [r33];
  D18():
    deopt 65 [lib_loc3];
  L22():
    goto L23();
  L23():
    character1 = ldf character;
    check L115() else D21();
  L105():
    popenv;
    return r33;
  L110():
    lib_loc4 = force? lib_loc3;
    checkMissing(lib_loc4);
    c29 = `==`(lib_loc4, NULL);
    goto L21(c29);
  L111():
    _libPaths = ldf `.libPaths`;
    check L112() else D19();
  D19():
    deopt 70 [];
  D21():
    deopt 76 [];
  L112():
    r38 = dyn _libPaths();
    check L113() else D20();
  L115():
    r40 = dyn character1();
    check L116() else D22();
  D20():
    deopt 71 [r38];
  D22():
    deopt 77 [r40];
  L113():
    st `lib.loc` = r38;
    goto L23();
  L116():
    st bad = r40;
    character2 = ldf character;
    check L117() else D23();
  D23():
    deopt 80 [];
  L117():
    r41 = dyn character2();
    check L118() else D24();
  D24():
    deopt 81 [r41];
  L118():
    st out = r41;
    package13 = ld package;
    check L119() else D25();
  D25():
    deopt 83 [package13];
  L119():
    package14 = force? package13;
    checkMissing(package14);
    s = toForSeq(package14);
    l = length(s);
    i = 0;
    goto L24(i);
  L24(i1):
    i2 = `+`.1(i1, 1);
    c31 = `<`.1(l, i2);
    if c31 then L120() else L53();
  L53():
    x = `[[`(s, i2, NULL, TRUE);
    st pkg = x;
    file_path1 = ldf `file.path`;
    check L121() else D26();
  L120():
    quiet1 = ld quiet;
    check L228() else D81();
  D26():
    deopt 86 [i2];
  D81():
    deopt 269 [quiet1];
  L121():
    p5 = prom<V +>{
      lib_loc5 = ld `lib.loc`;
      lib_loc6 = force? lib_loc5;
      checkMissing(lib_loc6);
      return lib_loc6;
    };
    p6 = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    r44 = dyn file_path1(p5, p6);
    check L122() else D27();
  L228():
    quiet2 = force? quiet1;
    checkMissing(quiet2);
    r139 = `!`(quiet2);
    c62 = `as.logical`(r139);
    if c62 then L229() else L54(c62);
  D27():
    deopt 89 [i2, r44];
  L54(c64):
    c71 = `as.logical`(c64);
    if c71 then L235() else L56();
  L122():
    st paths = r44;
    paths = ld paths;
    check L123() else D28();
  L229():
    sym16 = ldf length;
    base16 = ldf length in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L230() else L231();
  D28():
    deopt 91 [i2, paths];
  L55(c67, r141):
    c68 = `as.logical`(r141);
    c69 = `&&`(c67, c68);
    goto L54(c69);
  L56():
    goto L62();
  L62():
    out4 = ld out;
    check L249() else D91();
  L123():
    paths1 = force? paths;
    checkMissing(paths1);
    c32 = `is.object`(paths1);
    if c32 then L124() else L125(i2, paths1);
  L230():
    bad4 = ld bad;
    check L232() else D82();
  L231():
    r140 = dyn base16(<sym bad>);
    goto L55(c62, r140);
  L235():
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L236() else L237();
  D82():
    deopt 274 [c62, bad4];
  D91():
    deopt 306 [out4];
  L25(i8, dx1):
    st paths = dx1;
    use_loaded = ld use_loaded;
    check L129() else D31();
  L57(r144):
    r146 = `==`(r144, 0);
    c72 = `as.logical`(r146);
    if c72 then L240() else L58();
  L124():
    dr = tryDispatchBuiltin.1("[", paths1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L126() else L125(i2, dr);
  L125(i6, paths3):
    file_exists = ldf `file.exists`;
    check L127() else D29();
  L232():
    bad5 = force? bad4;
    checkMissing(bad5);
    length6 = ldf length in base;
    r142 = dyn length6(bad5);
    check L233() else D83();
  L236():
    out2 = ld out;
    check L238() else D84();
  L237():
    r143 = dyn base17(<sym out>);
    goto L57(r143);
  L249():
    out5 = force? out4;
    checkMissing(out5);
    popenv;
    return out5;
  D29():
    deopt 94 [i6, paths3];
  D31():
    deopt 99 [i8, use_loaded];
  D83():
    deopt 277 [c62, r142];
  D84():
    deopt 281 [out2];
  L58():
    goto L59();
  L59():
    bad8 = ld bad;
    check L244() else D88();
  L126():
    dx = getTryDispatchBuiltinValue(dr);
    goto L25(i2, dx);
  L127():
    p8 = prom<V +>{
      file_path2 = ldf `file.path`;
      p7 = prom<V +>{
        paths4 = ld paths;
        paths5 = force? paths4;
        checkMissing(paths5);
        return paths5;
      };
      r46 = dyn file_path2(p7, "DESCRIPTION");
      return r46;
    };
    r48 = dyn file_exists(p8);
    check L128() else D30();
  L129():
    use_loaded1 = force? use_loaded;
    checkMissing(use_loaded1);
    c33 = `as.logical`(use_loaded1);
    if c33 then L130() else L26(i8, c33);
  L233():
    goto L55(c62, r142);
  L238():
    out3 = force? out2;
    checkMissing(out3);
    length7 = ldf length in base;
    r145 = dyn length7(out3);
    check L239() else D85();
  L240():
    stop = ldf stop;
    check L241() else D86();
  D30():
    deopt 96 [i6, paths3, r48];
  D85():
    deopt 284 [r145];
  D86():
    deopt 288 [];
  D88():
    deopt 293 [bad8];
  L26(i10, c35):
    c39 = `as.logical`(c35);
    if c39 then L134() else L27();
  L128():
    __ = ldf `[` in base;
    r49 = dyn __(paths3, r48);
    goto L25(i6, r49);
  L130():
    isNamespaceLoaded = ldf isNamespaceLoaded;
    check L131() else D32();
  L239():
    goto L57(r145);
  L241():
    p32 = prom<V +>{
      packageNotFoundError = ldf packageNotFoundError;
      p29 = prom<V +>{
        bad6 = ld bad;
        bad7 = force? bad6;
        checkMissing(bad7);
        return bad7;
      };
      p30 = prom<V +>{
        lib_loc7 = ld `lib.loc`;
        lib_loc8 = force? lib_loc7;
        checkMissing(lib_loc8);
        return lib_loc8;
      };
      p31 = prom<V +>{
        sys_call = ldf `sys.call`;
        r149 = dyn sys_call();
        return r149;
      };
      r151 = dyn packageNotFoundError(p29, p30, p31);
      return r151;
    };
    r153 = dyn stop(p32);
    check L242() else D87();
  L244():
    bad9 = force? bad8;
    checkMissing(bad9);
    s1 = toForSeq(bad9);
    l1 = length(s1);
    i78 = 0;
    goto L60(i78);
  D32():
    deopt 102 [i8, c33];
  D87():
    deopt 290 [r153];
  L27():
    goto L31(i10);
  L31(i20):
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L148() else L149();
  L60(i79):
    i80 = `+`.1(i79, 1);
    c73 = `<`.1(l1, i80);
    if c73 then L245() else L61();
  L131():
    p9 = prom<V +>{
      pkg2 = ld pkg;
      pkg3 = force? pkg2;
      checkMissing(pkg3);
      return pkg3;
    };
    r51 = dyn isNamespaceLoaded(p9);
    check L132() else D33();
  L134():
    pkg4 = ld pkg;
    check L135() else D34();
  L242():
    goto L59();
  D33():
    deopt 104 [i8, c33, r51];
  D34():
    deopt 106 [i10, pkg4];
  L32(i23, r64):
    c42 = `as.logical`(r64);
    if c42 then L152() else L33(i23, c42);
  L61():
    x1 = `[[`(s1, i80, NULL, TRUE);
    st pkg = x1;
    warning1 = ldf warning;
    check L246() else D89();
  L132():
    c36 = `as.logical`(r51);
    c37 = `&&`(c33, c36);
    goto L26(i8, c37);
  L135():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    r52 = `==`(pkg5, "base");
    c40 = `as.logical`(r52);
    if c40 then L136() else L28();
  L148():
    paths8 = ld paths;
    check L150() else D42();
  L149():
    r63 = dyn base8(<sym paths>);
    goto L32(i20, r63);
  L245():
    goto L62();
  D42():
    deopt 132 [i20, paths8];
  D89():
    deopt 296 [i80];
  L28():
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L140() else D37();
  L29(i16, r54):
    st dir = r54;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L142() else L143();
  L33(i25, c44):
    c49 = `as.logical`(c44);
    if c49 then L156() else L34();
  L136():
    system_file = ldf `system.file`;
    check L137() else D35();
  L150():
    paths9 = force? paths8;
    checkMissing(paths9);
    length2 = ldf length in base;
    r65 = dyn length2(paths9);
    check L151() else D43();
  L152():
    file_exists1 = ldf `file.exists`;
    check L153() else D44();
  L246():
    p35 = prom<V +>{
      gettextf1 = ldf gettextf;
      p34 = prom<V +>{
        sQuote1 = ldf sQuote;
        p33 = prom<V +>{
          pkg16 = ld pkg;
          pkg17 = force? pkg16;
          checkMissing(pkg17);
          return pkg17;
        };
        r156 = dyn sQuote1(p33);
        return r156;
      };
      r158 = dyn gettextf1("there is no package called %s", p34);
      return r158;
    };
    r160 = dyn warning1[, domain](p35, NA_LGL);
    check L247() else D90();
  D35():
    deopt 111 [i10];
  D37():
    deopt 114 [i10];
  D43():
    deopt 135 [i20, r65];
  D44():
    deopt 137 [i23, c42];
  D90():
    deopt 300 [i80, r160];
  L30(i19, r60):
    st paths = r60;
    goto L31(i19);
  L34():
    sym10 = ldf length;
    base10 = ldf length in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L164() else L165();
  L137():
    r53 = dyn system_file();
    check L138() else D36();
  L140():
    p11 = prom<V +>{
      asNamespace = ldf asNamespace;
      p10 = prom<V +>{
        pkg6 = ld pkg;
        pkg7 = force? pkg6;
        checkMissing(pkg7);
        return pkg7;
      };
      r56 = dyn asNamespace(p10);
      return r56;
    };
    r58 = dyn _getNamespaceInfo(p11, "path");
    check L141() else D38();
  L142():
    dir = ld dir;
    check L144() else D39();
  L143():
    r59 = dyn base7(<sym dir>, <sym paths>);
    goto L30(i16, r59);
  L151():
    goto L32(i20, r65);
  L153():
    p13 = prom<V +>{
      file_path3 = ldf `file.path`;
      p12 = prom<V +>{
        paths10 = ld paths;
        paths11 = force? paths10;
        checkMissing(paths11);
        c45 = `is.object`(paths11);
        if c45 then L1() else L2(paths11);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", paths11);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(paths13):
        __1 = ldf `[` in base;
        r66 = dyn __1(paths13, 1.0);
        goto L0(r66);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      r68 = dyn file_path3(p12, "dummy_for_check");
      return r68;
    };
    r70 = dyn file_exists1(p13);
    check L154() else D45();
  L156():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L157() else L158();
  L247():
    goto L60(i80);
  D36():
    deopt 112 [i10, r53];
  D38():
    deopt 117 [i10, r58];
  D39():
    deopt 121 [i16, dir];
  D45():
    deopt 139 [i23, c42, r70];
  L35(i31, r72):
    st bad = r72;
    goto L24(i31);
  L37(i36, r76):
    c51 = `as.logical`(r76);
    if c51 then L168() else L38();
  L138():
    goto L29(i10, r53);
  L141():
    goto L29(i10, r58);
  L144():
    dir1 = force? dir;
    checkMissing(dir1);
    paths6 = ld paths;
    check L145() else D40();
  L154():
    c46 = `as.logical`(r70);
    c47 = `&&`(c42, c46);
    goto L33(i23, c47);
  L157():
    bad = ld bad;
    check L159() else D46();
  L158():
    r71 = dyn base9(<sym bad>, <sym pkg>);
    goto L35(i25, r71);
  L164():
    paths14 = ld paths;
    check L166() else D49();
  L165():
    r75 = dyn base10(<sym paths>);
    goto L37(i25, r75);
  D40():
    deopt 123 [i16, paths6];
  D46():
    deopt 143 [i25, bad];
  D49():
    deopt 156 [i25, paths14];
  L38():
    goto L41(i36);
  L41(i51):
    sym12 = ldf length;
    base12 = ldf length in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L196() else L197();
  L145():
    paths7 = force? paths6;
    checkMissing(paths7);
    c41 = ldf c in base;
    r61 = dyn c41(dir1, paths7);
    check L146() else D41();
  L159():
    bad1 = force? bad;
    checkMissing(bad1);
    pkg8 = ld pkg;
    check L160() else D47();
  L166():
    paths15 = force? paths14;
    checkMissing(paths15);
    length3 = ldf length in base;
    r77 = dyn length3(paths15);
    check L167() else D50();
  L168():
    unique = ldf unique;
    check L169() else D51();
  D41():
    deopt 126 [i16, r61];
  D47():
    deopt 145 [i25, pkg8];
  D50():
    deopt 159 [i25, r77];
  D51():
    deopt 161 [i36];
  L42(i54, r112):
    r114 = `==`(r112, 0);
    c56 = `as.logical`(r114);
    if c56 then L200() else L43();
  L146():
    goto L30(i16, r61);
  L160():
    pkg9 = force? pkg8;
    checkMissing(pkg9);
    c50 = ldf c in base;
    r73 = dyn c50(bad1, pkg9);
    check L161() else D48();
  L167():
    goto L37(i25, r77);
  L169():
    p14 = prom<V +>{
      paths16 = ld paths;
      paths17 = force? paths16;
      checkMissing(paths17);
      return paths17;
    };
    r79 = dyn unique(p14);
    check L170() else D52();
  L196():
    paths24 = ld paths;
    check L198() else D67();
  L197():
    r111 = dyn base12(<sym paths>);
    goto L42(i51, r111);
  D48():
    deopt 148 [i25, r73];
  D52():
    deopt 163 [i36, r79];
  D67():
    deopt 212 [i51, paths24];
  L43():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L208() else L209();
  L161():
    goto L35(i25, r73);
  L170():
    st paths = r79;
    _standard_regexps = ldf `.standard_regexps`;
    check L171() else D53();
  L198():
    paths25 = force? paths24;
    checkMissing(paths25);
    length4 = ldf length in base;
    r113 = dyn length4(paths25);
    check L199() else D68();
  L200():
    sym13 = ldf c;
    base13 = ldf c in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L201() else L202();
  D53():
    deopt 166 [i36];
  D68():
    deopt 215 [i51, r113];
  L44(i59, r116):
    st bad = r116;
    goto L24(i59);
  L46(i64, r120):
    r122 = `>`(r120, 1);
    c58 = `as.logical`(r122);
    if c58 then L212() else L47();
  L171():
    r80 = dyn _standard_regexps();
    check L172() else D54();
  L199():
    goto L42(i51, r113);
  L201():
    bad2 = ld bad;
    check L203() else D69();
  L202():
    r115 = dyn base13(<sym bad>, <sym pkg>);
    goto L44(i54, r115);
  L208():
    paths26 = ld paths;
    check L210() else D72();
  L209():
    r119 = dyn base14(<sym paths>);
    goto L46(i54, r119);
  D54():
    deopt 167 [i36, r80];
  D69():
    deopt 220 [i54, bad2];
  D72():
    deopt 233 [i54, paths26];
  L47():
    goto L51(i64);
  L51(i74):
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L223() else L224();
  L172():
    c52 = `is.object`(r80);
    if c52 then L174() else L175(i36, r80);
  L203():
    bad3 = force? bad2;
    checkMissing(bad3);
    pkg12 = ld pkg;
    check L204() else D70();
  L210():
    paths27 = force? paths26;
    checkMissing(paths27);
    length5 = ldf length in base;
    r121 = dyn length5(paths27);
    check L211() else D73();
  L212():
    verbose3 = ld verbose;
    check L213() else D74();
  D70():
    deopt 222 [i54, pkg12];
  D73():
    deopt 236 [i54, r121];
  D74():
    deopt 239 [i64, verbose3];
  L52(i77, r137):
    st out = r137;
    goto L24(i77);
  L173(i42, dx5):
    st valid_package_version_regexp = dx5;
    lapply = ldf lapply;
    check L177() else D55();
  L174():
    dr4 = tryDispatchBuiltin.1("$", r80);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L176() else L175(i36, dr4);
  L175(i40, r82):
    r83 = `$`(r82, <sym valid_package_version>);
    goto L173(i40, r83);
  L204():
    pkg13 = force? pkg12;
    checkMissing(pkg13);
    c57 = ldf c in base;
    r117 = dyn c57(bad3, pkg13);
    check L205() else D71();
  L211():
    goto L46(i54, r121);
  L213():
    verbose4 = force? verbose3;
    checkMissing(verbose4);
    c59 = `as.logical`(verbose4);
    if c59 then L214() else L48();
  L223():
    out = ld out;
    check L225() else D78();
  L224():
    r136 = dyn base15(<sym out>, <sym paths>);
    goto L52(i74, r136);
  D55():
    deopt 171 [i42];
  D71():
    deopt 225 [i54, r117];
  D78():
    deopt 259 [i74, out];
  L48():
    goto L49(i64);
  L49(i69):
    paths30 = ld paths;
    check L218() else D77();
  L176():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L173(i36, dx4);
  L177():
    p15 = prom<V +>{
      paths18 = ld paths;
      paths19 = force? paths18;
      checkMissing(paths19);
      return paths19;
    };
    p16 = prom<V +>{
      r85 = clos inner3913899244;
      return r85;
    };
    r87 = dyn lapply(p15, p16);
    check L178() else D56();
  L205():
    goto L44(i54, r117);
  L214():
    warning = ldf warning;
    check L215() else D75();
  L225():
    out1 = force? out;
    checkMissing(out1);
    paths34 = ld paths;
    check L226() else D79();
  D56():
    deopt 174 [i42, r87];
  D75():
    deopt 242 [i64];
  D77():
    deopt 249 [i69, paths30];
  D79():
    deopt 261 [i74, paths34];
  L178():
    st db = r87;
    do_call = ldf `do.call`;
    check L179() else D57();
  L215():
    p28 = prom<V +>{
      gettextf = ldf gettextf;
      p24 = prom<V +>{
        sQuote = ldf sQuote;
        p23 = prom<V +>{
          pkg14 = ld pkg;
          pkg15 = force? pkg14;
          checkMissing(pkg15);
          return pkg15;
        };
        r124 = dyn sQuote(p23);
        return r124;
      };
      p27 = prom<V +>{
        paste = ldf paste;
        p26 = prom<V +>{
          dQuote = ldf dQuote;
          p25 = prom<V +>{
            paths28 = ld paths;
            paths29 = force? paths28;
            checkMissing(paths29);
            return paths29;
          };
          r127 = dyn dQuote(p25);
          return r127;
        };
        r129 = dyn paste[, collapse](p26, ",\n  ");
        return r129;
      };
      r131 = dyn gettextf("package %s found more than once, using the first from\n  %s", p24, p27);
      return r131;
    };
    r133 = dyn warning[, domain](p28, NA_LGL);
    check L216() else D76();
  L218():
    paths31 = force? paths30;
    checkMissing(paths31);
    c60 = `is.object`(paths31);
    if c60 then L219() else L220(i69, paths31);
  L226():
    paths35 = force? paths34;
    checkMissing(paths35);
    c61 = ldf c in base;
    r138 = dyn c61(out1, paths35);
    check L227() else D80();
  D57():
    deopt 177 [i42];
  D76():
    deopt 246 [i64, r133];
  D80():
    deopt 264 [i74, r138];
  L50(i73, dx14):
    st paths = dx14;
    goto L51(i73);
  L179():
    p17 = prom<V +>{
      rbind = ld rbind;
      rbind1 = force? rbind;
      checkMissing(rbind1);
      return rbind1;
    };
    p18 = prom<V +>{
      db = ld db;
      db1 = force? db;
      checkMissing(db1);
      return db1;
    };
    r90 = dyn do_call(p17, p18);
    check L180() else D58();
  L216():
    goto L49(i64);
  L219():
    dr12 = tryDispatchBuiltin.1("[", paths31);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L221() else L220(i69, dr12);
  L220(i71, paths33):
    __5 = ldf `[` in base;
    r135 = dyn __5(paths33, 1);
    goto L50(i71, r135);
  L227():
    goto L52(i74, r138);
  D58():
    deopt 180 [i42, r90];
  L180():
    st db = r90;
    apply = ldf apply;
    check L181() else D59();
  L221():
    dx13 = getTryDispatchBuiltinValue(dr12);
    goto L50(i69, dx13);
  D59():
    deopt 183 [i42];
  L181():
    p19 = prom<V +>{
      sym11 = ldf `is.na`;
      base11 = ldf `is.na` in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r92):
      r94 = `!`(r92);
      return r94;
    L1():
      db2 = ld db;
      db3 = force? db2;
      checkMissing(db3);
      is_na = ldf `is.na` in base;
      r93 = dyn is_na(db3);
      goto L0(r93);
    L2():
      r91 = dyn base11(<sym db>);
      goto L0(r91);
    };
    p20 = prom<V +>{
      all = ld all;
      all1 = force? all;
      checkMissing(all1);
      return all1;
    };
    r97 = dyn apply(p19, 1, p20);
    check L182() else D60();
  D60():
    deopt 187 [i42, r97];
  L182():
    db4 = ld db;
    check L183() else D61();
  D61():
    deopt 187 [i42, r97, db4];
  L183():
    db5 = force? db4;
    checkMissing(db5);
    c53 = `is.object`(db5);
    if c53 then L184() else L185(i42, r97);
  L39(i46, r101, dx7):
    pkg10 = ld pkg;
    check L187() else D62();
  L184():
    dr6 = tryDispatchBuiltin.1("[", db5);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L186() else L185(i42, r97);
  L185(i44, r99):
    __2 = ldf `[` in base;
    r102 = dyn __2(db5, <missing>, "Package");
    goto L39(i44, r99, r102);
  D62():
    deopt 192 [i46, r101, dx7, pkg10];
  L186():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L39(i42, r97, dx6);
  L187():
    pkg11 = force? pkg10;
    checkMissing(pkg11);
    r103 = `==`(dx7, pkg11);
    r104 = `&&`(r101, r103);
    grepl = ldf grepl;
    check L188() else D63();
  D63():
    deopt 196 [i46, r104];
  L188():
    p21 = prom<V +>{
      valid_package_version_regexp = ld valid_package_version_regexp;
      valid_package_version_regexp1 = force? valid_package_version_regexp;
      checkMissing(valid_package_version_regexp1);
      return valid_package_version_regexp1;
    };
    p22 = prom<V +>{
      db8 = ld db;
      db9 = force? db8;
      checkMissing(db9);
      c54 = `is.object`(db9);
      if c54 then L1() else L2();
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("[", db9);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r106 = dyn __3(db9, <missing>, "Version");
      goto L0(r106);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    r108 = dyn grepl(p21, p22);
    check L189() else D64();
  D64():
    deopt 199 [i46, r104, r108];
  L189():
    r109 = `&&`(r104, r108);
    st ok = r109;
    paths20 = ld paths;
    check L190() else D65();
  D65():
    deopt 202 [i46, paths20];
  L190():
    paths21 = force? paths20;
    checkMissing(paths21);
    c55 = `is.object`(paths21);
    if c55 then L191() else L192(i46, paths21);
  L40(i50, dx11):
    st paths = dx11;
    goto L41(i50);
  L191():
    dr10 = tryDispatchBuiltin.1("[", paths21);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L193() else L192(i46, dr10);
  L192(i48, paths23):
    ok = ld ok;
    check L194() else D66();
  D66():
    deopt 204 [i48, paths23, ok];
  L193():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L40(i46, dx10);
  L194():
    ok1 = force? ok;
    __4 = ldf `[` in base;
    r110 = dyn __4(paths23, ok1);
    goto L40(i48, r110);
  }
}
fun inner3913899244(p) {
  (reg p:*) -+> V { var p:*, reg file_path:cls, reg p1:*, reg p2:V, reg p3:p(V +), reg r1:V, reg file_exists:cls, reg pfile:*, reg pfile1:V, reg p4:p(V +), reg r3:V, reg c:L, reg tryCatch:cls, reg readRDS:cls, reg pfile2:*, reg pfile3:V, reg p5:p(V +), reg r5:V, reg c1:L, reg r7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r8:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg dx8:V, reg r10:V, reg c3:cls, reg r11:V, reg __:cls, reg r12:V, reg p6:p(V +), reg r14:cls, reg p7:p(V +), reg r16:V, reg r17:V, reg tryCatch1:cls, reg read_dcf:cls, reg file_path1:cls, reg p8:*, reg p9:V, reg p10:p(V +), reg r19:V, reg p11:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r21:V, reg r22:V, reg c4:cls, reg r23:V, reg p12:p(V +), reg r25:V, reg c5:L, reg dr4:V, reg dc2:L, reg dx9:V, reg dx10:V, reg __1:cls, reg r28:V, reg p13:p(V +), reg identity:*, reg identity1:V, reg p14:p(V +), reg r31:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r32:V, reg r33:V, reg info:*, reg info1:V, reg inherits:cls, reg r34:V, reg c6:L, reg c7:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg c11:L, reg r36:V, reg info2:*, reg info3:V, reg length:cls, reg r37:V, reg r38:V, reg c12:L, reg c13:V, reg c15:L, reg c16:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg c20:L, reg r40:V, reg info4:*, reg info5:V, reg anyNA:cls, reg r41:V, reg c21:L, reg c22:V, reg c24:L, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg c25:cls, reg r44:V, reg info6:*, reg info7:V |
    mkenv;
    st p = p;
    file_path = ldf `file.path`;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p3 = prom<V +>{
      p1 = ld p;
      p2 = force? p1;
      checkMissing(p2);
      return p2;
    };
    r1 = dyn file_path(p3, "Meta", "package.rds");
    check L10() else D1();
  D1():
    deopt 5 [r1];
  L10():
    st pfile = r1;
    file_exists = ldf `file.exists`;
    check L11() else D2();
  D2():
    deopt 8 [];
  L11():
    p4 = prom<V +>{
      pfile = ld pfile;
      pfile1 = force? pfile;
      checkMissing(pfile1);
      return pfile1;
    };
    r3 = dyn file_exists(p4);
    check L12() else D3();
  D3():
    deopt 10 [r3];
  L12():
    c = `as.logical`(r3);
    if c then L13() else L0();
  L0():
    tryCatch1 = ldf tryCatch;
    check L17() else D6();
  L1(r17):
    st info = r17;
    invisible.0();
    popenv;
    return r17;
  L13():
    tryCatch = ldf tryCatch;
    check L14() else D4();
  D4():
    deopt 12 [];
  D6():
    deopt 18 [];
  L14():
    p6 = prom<V +>{
      readRDS = ldf readRDS;
      p5 = prom<V +>{
        pfile2 = ld pfile;
        pfile3 = force? pfile2;
        checkMissing(pfile3);
        return pfile3;
      };
      r5 = dyn readRDS(p5);
      c1 = `is.object`(r5);
      if c1 then L3() else L4(r5);
    L2(dx1):
      c2 = `is.object`(dx1);
      if c2 then L6() else L7(dx1);
    L3():
      dr = tryDispatchBuiltin.1("$", r5);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L5() else L4(dr);
    L4(r7):
      r8 = `$`(r7, <sym DESCRIPTION>);
      goto L2(r8);
    L0(dx5):
      return dx5;
    L5():
      dx = getTryDispatchBuiltinValue(dr);
      goto L2(dx);
    L6():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L8() else L7(dr2);
    L7(dx3):
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L9() else L10();
    L1(dx8, r10):
      __ = ldf `[` in base;
      r12 = dyn __(dx8, r10);
      goto L0(r12);
    L8():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    L9():
      c3 = ldf c in base;
      r11 = dyn c3("Package", "Version");
      goto L1(dx3, r11);
    L10():
      r9 = dyn base("Package", "Version");
      goto L1(dx3, r9);
    };
    p7 = prom<V +>{
      r14 = clos inner3708401697;
      return r14;
    };
    r16 = dyn tryCatch[, error](p6, p7);
    check L15() else D5();
  L17():
    p13 = prom<V +>{
      read_dcf = ldf `read.dcf`;
      p11 = prom<V +>{
        file_path1 = ldf `file.path`;
        p10 = prom<V +>{
          p8 = ld p;
          p9 = force? p8;
          checkMissing(p9);
          return p9;
        };
        r19 = dyn file_path1(p10, "DESCRIPTION");
        return r19;
      };
      p12 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r22):
        return r22;
      L1():
        c4 = ldf c in base;
        r23 = dyn c4("Package", "Version");
        goto L0(r23);
      L2():
        r21 = dyn base1("Package", "Version");
        goto L0(r21);
      };
      r25 = dyn read_dcf(p11, p12);
      c5 = `is.object`(r25);
      if c5 then L1() else L2();
    L0(dx10):
      return dx10;
    L1():
      dr4 = tryDispatchBuiltin.1("[", r25);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L3() else L2();
    L2():
      __1 = ldf `[` in base;
      r28 = dyn __1(r25, 1.0, <missing>);
      goto L0(r28);
    L3():
      dx9 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx9);
    };
    p14 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r31 = dyn tryCatch1[, error](p13, p14);
    check L18() else D7();
  D5():
    deopt 16 [r16];
  D7():
    deopt 22 [r31];
  L15():
    goto L1(r16);
  L18():
    st info = r31;
    sym2 = ldf inherits;
    base2 = ldf inherits in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L19() else L20();
  L2(r33):
    c6 = `as.logical`(r33);
    if c6 then L3(c6) else L23();
  L19():
    info = ld info;
    check L21() else D8();
  L20():
    r32 = dyn base2(<sym info>, "error");
    goto L2(r32);
  D8():
    deopt 26 [info];
  L3(c7):
    c15 = `as.logical`(c7);
    if c15 then L5(c15) else L29();
  L21():
    info1 = force? info;
    checkMissing(info1);
    inherits = ldf inherits in base;
    r34 = dyn inherits(info1, "error", FALSE);
    check L22() else D9();
  L23():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  D9():
    deopt 31 [r34];
  L4(c11, r36):
    r38 = `!=`(r36, 2);
    c12 = `as.logical`(r38);
    c13 = `||`(c11, c12);
    goto L3(c13);
  L5(c16):
    c24 = `as.logical`(c16);
    if c24 then L35() else L7();
  L22():
    goto L2(r34);
  L24():
    info2 = ld info;
    check L26() else D10();
  L25():
    r35 = dyn base3(<sym info>);
    goto L4(c6, r35);
  L29():
    sym4 = ldf anyNA;
    base4 = ldf anyNA in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L30() else L31();
  D10():
    deopt 34 [c6, info2];
  L6(c20, r40):
    c21 = `as.logical`(r40);
    c22 = `||`(c20, c21);
    goto L5(c22);
  L7():
    info6 = ld info;
    check L40() else D15();
  L26():
    info3 = force? info2;
    checkMissing(info3);
    length = ldf length in base;
    r37 = dyn length(info3);
    check L27() else D11();
  L30():
    info4 = ld info;
    check L32() else D12();
  L31():
    r39 = dyn base4(<sym info>);
    goto L6(c15, r39);
  L35():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L36() else L37();
  D11():
    deopt 37 [c6, r37];
  D12():
    deopt 43 [c15, info4];
  D15():
    deopt 56 [info6];
  L8(r43):
    goto L1(r43);
  L27():
    goto L4(c6, r37);
  L32():
    info5 = force? info4;
    checkMissing(info5);
    anyNA = ldf anyNA in base;
    r41 = dyn anyNA(info5);
    check L33() else D13();
  L36():
    c25 = ldf c in base;
    r44 = dyn c25(NA_STR, NA_STR);
    check L38() else D14();
  L37():
    r42 = dyn base5[Package, Version](NA_STR, NA_STR);
    goto L8(r42);
  L40():
    info7 = force? info6;
    checkMissing(info7);
    goto L1(info7);
  D13():
    deopt 46 [c15, r41];
  D14():
    deopt 55 [r44];
  L33():
    goto L6(c15, r41);
  L38():
    goto L8(r44);
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V |
    mkenv;
    st e = e;
    sym = ldf c;
    base = ldf c in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    popenv;
    return r1;
  L1():
    c = ldf c in base;
    r2 = dyn c(NA_STR, NA_STR);
    check L3() else D0();
  L2():
    r = dyn base[Package, Version](NA_STR, NA_STR);
    goto L0(r);
  D0():
    deopt 7 [r2];
  L3():
    goto L0(r2);
  }
}
fun inner423301576(pkg) {
  (reg pkg:*) -+> V { var pkg:*, reg unlist:cls, reg lapply:cls, reg _libPaths:cls, reg r:V, reg p:p(V +), reg r2:cls, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V |
    mkenv;
    st pkg = pkg;
    unlist = ldf unlist;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p2 = prom<V +>{
      lapply = ldf lapply;
      p = prom<V +>{
        _libPaths = ldf `.libPaths`;
        r = dyn _libPaths();
        return r;
      };
      p1 = prom<V +>{
        r2 = clos inner1545381569;
        return r2;
      };
      r4 = dyn lapply(p, p1);
      return r4;
    };
    r6 = dyn unlist(p2);
    check L1() else D1();
  D1():
    deopt 3 [r6];
  L1():
    popenv;
    return r6;
  }
}
fun inner1545381569(lib) {
  (reg lib:*) -+> V { var lib:*, reg find_package:cls, reg pkg:*, reg pkg1:V, reg p:p(V +), reg lib1:*, reg lib2:V, reg p1:p(V +), reg r2:V |
    mkenv;
    st lib = lib;
    find_package = ldf `find.package`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      pkg = ld pkg;
      pkg1 = force? pkg;
      checkMissing(pkg1);
      return pkg1;
    };
    p1 = prom<V +>{
      lib1 = ld lib;
      lib2 = force? lib1;
      checkMissing(lib2);
      return lib2;
    };
    r2 = dyn find_package[, , quiet, verbose](p, p1, TRUE, FALSE);
    check L1() else D1();
  D1():
    deopt 8 [r2];
  L1():
    popenv;
    return r2;
  }
}