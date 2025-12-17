fun main() {
  () -+> V { reg r:cls, reg getPackageName:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg search:cls, reg r3:V, reg length:cls, reg r4:V, reg p:p(V +), reg r6:V, reg getPackageName1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg baseenv:cls, reg r9:V, reg p1:p(V +), reg r11:V, reg getPackageName2:cls, reg asNamespace:cls, reg r12:V, reg p2:p(V +), reg r14:V, reg getPackageName3:cls, reg r15:V |
    mkenv;
    r = clos inner1183189106;
    st getPackageName = r;
    getPackageName = ldf getPackageName;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf length;
      base = ldf length in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      search = ldf search;
      r3 = dyn search();
      length = ldf length in base;
      r4 = dyn length(r3);
      goto L0(r4);
    L2():
      r1 = dyn base(<lang search()>);
      goto L0(r1);
    };
    r6 = dyn getPackageName(p);
    check L1() else D1();
  D1():
    deopt 6 [r6];
  L1():
    getPackageName1 = ldf getPackageName;
    check L2() else D2();
  D2():
    deopt 8 [];
  L2():
    p1 = prom<V +>{
      sym1 = ldf baseenv;
      base1 = ldf baseenv in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r8):
      return r8;
    L1():
      baseenv = ldf baseenv in base;
      r9 = dyn baseenv();
      goto L0(r9);
    L2():
      r7 = dyn base1();
      goto L0(r7);
    };
    r11 = dyn getPackageName1(p1);
    check L3() else D3();
  D3():
    deopt 10 [r11];
  L3():
    getPackageName2 = ldf getPackageName;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p2 = prom<V +>{
      asNamespace = ldf asNamespace;
      r12 = dyn asNamespace("base");
      return r12;
    };
    r14 = dyn getPackageName2(p2);
    check L5() else D5();
  D5():
    deopt 14 [r14];
  L5():
    getPackageName3 = ldf getPackageName;
    check L6() else D6();
  D6():
    deopt 16 [];
  L6():
    r15 = dyn getPackageName3("package:base");
    check L7() else D7();
  D7():
    deopt 18 [r15];
  L7():
    popenv;
    return r15;
  }
}
fun inner1183189106(where, create) {
  (reg where:*, reg create:*) -+> V { var where:*, reg where_isMissing:L, reg where_orDefault:*, reg topenv:cls, reg parent_frame:cls, reg r:V, reg p:p(V +), reg r2:V, reg p1:p(V +), var create:*, reg create_isMissing:L, reg create_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg r5:V, reg where1:*, reg where2:V, reg as_environment:cls, reg r6:V, reg get0:cls, reg env:*, reg env1:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg r10:V, reg pkg:*, reg pkg1:V, reg c:V, reg r11:V, reg saved:*, reg saved1:V, reg c1:L, reg pkg2:*, reg pkg3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg where3:*, reg where4:V, reg identical:cls, reg r16:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r17:V, reg c7:L, reg r18:V, reg env2:*, reg env3:V, reg topenv1:cls, reg parent_frame1:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg identical1:cls, reg r22:V, reg c8:L, reg c9:V, reg c11:L, reg Sys_getenv:cls, reg r23:V, reg r24:V, reg environmentName:cls, reg env4:*, reg env5:V, reg p4:p(V +), reg r26:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r27:V, reg r28:V, reg envName:*, reg envName1:V, reg nzchar:cls, reg r29:V, reg c12:L, reg c14:V, reg regexpr:cls, reg envName2:*, reg envName3:V, reg p5:p(V +), reg r31:V, reg r32:V, reg c15:L, reg c16:V, reg c18:L, reg _rmpkg:cls, reg envName4:*, reg envName5:V, reg p6:p(V +), reg r34:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r36:V, reg r37:V, reg pkg4:*, reg pkg5:V, reg nzchar1:cls, reg r38:V, reg r39:V, reg c19:L, reg sym6:cls, reg base6:cls, reg guard6:L, reg r40:V, reg r41:V, reg env6:*, reg env7:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg identical2:cls, reg r42:V, reg c20:L, reg r43:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r44:V, reg r45:V, reg env8:*, reg env9:V, reg _BaseNamespaceEnv:*, reg _BaseNamespaceEnv1:V, reg identical3:cls, reg r46:V, reg c21:L, reg sym8:cls, reg base8:cls, reg guard8:L, reg r47:V, reg r48:V, reg where5:*, reg where6:V, reg is_numeric:cls, reg r49:V, reg c22:L, reg search:cls, reg r50:V, reg c23:L, reg r52:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg where7:*, reg where8:V, reg __:cls, reg r53:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r54:V, reg r55:V, reg where9:*, reg where10:V, reg is_environment:cls, reg r56:V, reg c24:L, reg search1:cls, reg r57:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c25:L, reg x:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r58:V, reg i7:I, reg r59:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg i10:I, reg r61:V, reg db:*, reg db1:V, reg as_environment1:cls, reg r62:V, reg where11:*, reg where12:V, reg identical4:cls, reg r63:V, reg c26:L, reg db2:*, reg db3:V, reg i13:I, reg sym12:cls, reg base12:cls, reg guard12:L, reg r65:V, reg r66:V, reg envName6:*, reg envName7:V, reg nzchar2:cls, reg r67:V, reg c27:L, reg envName8:*, reg envName9:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r68:V, reg r69:V, reg where13:*, reg where14:V, reg as_character:cls, reg r70:V, reg _rmpkg1:cls, reg pkg6:*, reg pkg7:V, reg p7:p(V +), reg r72:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r74:V, reg r75:V, reg pkg8:*, reg pkg9:V, reg nzchar3:cls, reg r76:V, reg r77:V, reg c28:L, reg topenv2:cls, reg env10:*, reg env11:V, reg p8:p(V +), reg r79:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r80:V, reg r81:V, reg top:*, reg top1:V, reg env12:*, reg env13:V, reg identical5:cls, reg r82:V, reg r83:V, reg c29:L, reg getPackageName:cls, reg top2:*, reg top3:V, reg p9:p(V +), reg create1:*, reg create2:V, reg p10:p(V +), reg r86:V, reg r87:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r89:V, reg r90:V, reg pkg10:*, reg pkg11:V, reg nzchar4:cls, reg r91:V, reg r92:V, reg c30:L, reg c32:V, reg create3:*, reg create4:V, reg c33:L, reg c34:V, reg c36:L, reg sym17:cls, reg base17:cls, reg guard17:L, reg r93:V, reg r94:V, reg Sys_time:cls, reg r95:V, reg as_character1:cls, reg r96:V, reg warning:cls, reg gettextf:cls, reg sQuote:cls, reg pkg12:*, reg pkg13:V, reg p11:p(V +), reg r98:V, reg p12:p(V +), reg r100:V, reg p13:p(V +), reg r102:V, reg saved2:*, reg saved3:V, reg r103:V, reg c37:L, reg c39:V, reg environmentIsLocked:cls, reg env14:*, reg env15:V, reg p14:p(V +), reg r105:V, reg r106:V, reg c40:L, reg c41:V, reg c43:L, reg setPackageName:cls, reg pkg14:*, reg pkg15:V, reg p15:p(V +), reg env16:*, reg env17:V, reg p16:p(V +), reg r109:V, reg r110:V, reg pkg16:*, reg pkg17:V |
    mkenv;
    where_isMissing = missing.0(where);
    if where_isMissing then L0() else L1(where);
  L0():
    p1 = prom<V +>{
      topenv = ldf topenv;
      p = prom<V +>{
        parent_frame = ldf `parent.frame`;
        r = dyn parent_frame();
        return r;
      };
      r2 = dyn topenv(p);
      return r2;
    };
    goto L1(p1);
  L1(where_orDefault):
    st where = where_orDefault;
    create_isMissing = missing.0(create);
    if create_isMissing then L2(TRUE) else L2(create);
  L2(create_orDefault):
    st create = create_orDefault;
    sym = ldf `as.environment`;
    base = ldf `as.environment` in base;
    guard = `==`.4(sym, base);
    if guard then L54() else L55();
  L3(r5):
    st env = r5;
    get0 = ldf get0;
    check L58() else D2();
  L54():
    where1 = ld where;
    check L56() else D0();
  L55():
    r4 = dyn base(<sym where>);
    goto L3(r4);
  D0():
    deopt 2 [where1];
  D2():
    deopt 8 [];
  L56():
    where2 = force? where1;
    checkMissing(where2);
    as_environment = ldf `as.environment` in base;
    r6 = dyn as_environment(where2);
    check L57() else D1();
  L58():
    p2 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    r8 = dyn get0[, , inherits](".packageName", p2, FALSE);
    check L59() else D3();
  D1():
    deopt 5 [r6];
  D3():
    deopt 13 [r8];
  L57():
    goto L3(r6);
  L59():
    st pkg = r8;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L60() else L61();
  L4(r10):
    r11 = `!`(r10);
    st saved = r11;
    saved = ld saved;
    check L63() else D5();
  L60():
    pkg = ld pkg;
    check L62() else D4();
  L61():
    r9 = dyn base1(<sym pkg>);
    goto L4(r9);
  D4():
    deopt 16 [pkg];
  D5():
    deopt 21 [saved];
  L62():
    pkg1 = force? pkg;
    checkMissing(pkg1);
    c = `==`(pkg1, NULL);
    goto L4(c);
  L63():
    saved1 = force? saved;
    checkMissing(saved1);
    c1 = `as.logical`(saved1);
    if c1 then L64() else L5();
  L5():
    sym2 = ldf identical;
    base2 = ldf identical in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L68() else L69();
  L64():
    pkg2 = ld pkg;
    check L65() else D6();
  D6():
    deopt 23 [pkg2];
  L7(r15):
    c2 = `as.logical`(r15);
    if c2 then L8(c2) else L72();
  L65():
    pkg3 = force? pkg2;
    checkMissing(pkg3);
    popenv;
    return pkg3;
  L68():
    where3 = ld where;
    check L70() else D7();
  L69():
    r14 = dyn base2(<sym where>, 1.0);
    goto L7(r14);
  D7():
    deopt 28 [where3];
  L8(c3):
    c11 = `as.logical`(c3);
    if c11 then L80() else L10();
  L70():
    where4 = force? where3;
    checkMissing(where4);
    identical = ldf identical in base;
    r16 = dyn identical(where4, 1.0, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L71() else D8();
  L72():
    sym3 = ldf identical;
    base3 = ldf identical in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L73() else L74();
  D8():
    deopt 39 [r16];
  L9(c7, r18):
    c8 = `as.logical`(r18);
    c9 = `||`(c7, c8);
    goto L8(c9);
  L10():
    goto L11("");
  L11(r24):
    st pkg = r24;
    environmentName = ldf environmentName;
    check L84() else D15();
  L71():
    goto L7(r16);
  L73():
    env2 = ld env;
    check L75() else D9();
  L74():
    r17 = dyn base3(<sym env>, <lang topenv(parent.frame())>);
    goto L9(c2, r17);
  L80():
    Sys_getenv = ldf `Sys.getenv`;
    check L81() else D13();
  D9():
    deopt 42 [c2, env2];
  D13():
    deopt 59 [];
  D15():
    deopt 66 [];
  L75():
    env3 = force? env2;
    checkMissing(env3);
    topenv1 = ldf topenv;
    check L76() else D10();
  L81():
    r23 = dyn Sys_getenv("R_PACKAGE_NAME");
    check L82() else D14();
  L84():
    p4 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r26 = dyn environmentName(p4);
    check L85() else D16();
  D10():
    deopt 45 [c2];
  D14():
    deopt 61 [r23];
  D16():
    deopt 68 [r26];
  L76():
    p3 = prom<V +>{
      parent_frame1 = ldf `parent.frame`;
      r19 = dyn parent_frame1();
      return r19;
    };
    r21 = dyn topenv1(p3);
    check L77() else D11();
  L82():
    goto L11(r23);
  L85():
    st envName = r26;
    sym4 = ldf nzchar;
    base4 = ldf nzchar in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L86() else L87();
  D11():
    deopt 47 [c2, r21];
  L12(r28):
    c12 = `as.logical`(r28);
    if c12 then L90() else L13(c12);
  L77():
    identical1 = ldf identical in base;
    r22 = dyn identical1(env3, r21, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L78() else D12();
  L86():
    envName = ld envName;
    check L88() else D17();
  L87():
    r27 = dyn base4(<sym envName>);
    goto L12(r27);
  D12():
    deopt 56 [c2, r22];
  D17():
    deopt 72 [envName];
  L13(c14):
    c18 = `as.logical`(c14);
    if c18 then L94() else L14();
  L78():
    goto L9(c2, r22);
  L88():
    envName1 = force? envName;
    checkMissing(envName1);
    nzchar = ldf nzchar in base;
    r29 = dyn nzchar(envName1);
    check L89() else D18();
  L90():
    regexpr = ldf regexpr;
    check L91() else D19();
  D18():
    deopt 75 [r29];
  D19():
    deopt 77 [c12];
  L14():
    goto L15();
  L15():
    sym5 = ldf nzchar;
    base5 = ldf nzchar in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L98() else L99();
  L89():
    goto L12(r29);
  L91():
    p5 = prom<V +>{
      envName2 = ld envName;
      envName3 = force? envName2;
      checkMissing(envName3);
      return envName3;
    };
    r31 = dyn regexpr[, , fixed]("package:", p5, TRUE);
    check L92() else D20();
  L94():
    _rmpkg = ldf `.rmpkg`;
    check L95() else D21();
  D20():
    deopt 82 [c12, r31];
  D21():
    deopt 87 [];
  L16(r37):
    r39 = `!`(r37);
    c19 = `as.logical`(r39);
    if c19 then L102() else L17();
  L92():
    r32 = `==`(r31, 1);
    c15 = `as.logical`(r32);
    c16 = `&&`(c12, c15);
    goto L13(c16);
  L95():
    p6 = prom<V +>{
      envName4 = ld envName;
      envName5 = force? envName4;
      checkMissing(envName5);
      return envName5;
    };
    r34 = dyn _rmpkg(p6);
    check L96() else D22();
  L98():
    pkg4 = ld pkg;
    check L100() else D23();
  L99():
    r36 = dyn base5(<sym pkg>);
    goto L16(r36);
  D22():
    deopt 89 [r34];
  D23():
    deopt 95 [pkg4];
  L17():
    goto L39();
  L39():
    sym14 = ldf nzchar;
    base14 = ldf nzchar in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L164() else L165();
  L96():
    st pkg = r34;
    goto L15();
  L100():
    pkg5 = force? pkg4;
    checkMissing(pkg5);
    nzchar1 = ldf nzchar in base;
    r38 = dyn nzchar1(pkg5);
    check L101() else D24();
  L102():
    sym6 = ldf identical;
    base6 = ldf identical in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L103() else L104();
  D24():
    deopt 98 [r38];
  L18(r41):
    c20 = `as.logical`(r41);
    if c20 then L108() else L19();
  L40(r75):
    r77 = `!`(r75);
    c28 = `as.logical`(r77);
    if c28 then L168() else L41();
  L101():
    goto L16(r38);
  L103():
    env6 = ld env;
    check L105() else D25();
  L104():
    r40 = dyn base6(<sym env>, <sym .GlobalEnv>);
    goto L18(r40);
  L164():
    pkg8 = ld pkg;
    check L166() else D52();
  L165():
    r74 = dyn base14(<sym pkg>);
    goto L40(r74);
  D25():
    deopt 102 [env6];
  D52():
    deopt 212 [pkg8];
  L19():
    sym7 = ldf identical;
    base7 = ldf identical in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L110() else L111();
  L20(r43):
    goto L39();
  L41():
    goto L45();
  L45():
    sym16 = ldf nzchar;
    base16 = ldf nzchar in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L181() else L182();
  L105():
    env7 = force? env6;
    checkMissing(env7);
    _GlobalEnv = ld `.GlobalEnv`;
    check L106() else D26();
  L108():
    st pkg = ".GlobalEnv";
    goto L20(".GlobalEnv");
  L166():
    pkg9 = force? pkg8;
    checkMissing(pkg9);
    nzchar3 = ldf nzchar in base;
    r76 = dyn nzchar3(pkg9);
    check L167() else D53();
  L168():
    topenv2 = ldf topenv;
    check L169() else D54();
  D26():
    deopt 104 [_GlobalEnv];
  D53():
    deopt 215 [r76];
  D54():
    deopt 218 [];
  L21(r45):
    c21 = `as.logical`(r45);
    if c21 then L115() else L22();
  L46(r90):
    r92 = `!`(r90);
    c30 = `as.logical`(r92);
    if c30 then L185() else L47(c30);
  L106():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    identical2 = ldf identical in base;
    r42 = dyn identical2(env7, _GlobalEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L107() else D27();
  L110():
    env8 = ld env;
    check L112() else D28();
  L111():
    r44 = dyn base7(<sym env>, <sym .BaseNamespaceEnv>);
    goto L21(r44);
  L167():
    goto L40(r76);
  L169():
    p8 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    r79 = dyn topenv2(p8);
    check L170() else D55();
  L181():
    pkg10 = ld pkg;
    check L183() else D61();
  L182():
    r89 = dyn base16(<sym pkg>);
    goto L46(r89);
  D27():
    deopt 114 [r42];
  D28():
    deopt 120 [env8];
  D55():
    deopt 220 [r79];
  D61():
    deopt 251 [pkg10];
  L22():
    sym8 = ldf `is.numeric`;
    base8 = ldf `is.numeric` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L117() else L118();
  L47(c32):
    c36 = `as.logical`(c32);
    if c36 then L188() else L48();
  L107():
    goto L18(r42);
  L112():
    env9 = force? env8;
    checkMissing(env9);
    _BaseNamespaceEnv = ld `.BaseNamespaceEnv`;
    check L113() else D29();
  L115():
    st pkg = "base";
    goto L20("base");
  L170():
    st top = r79;
    sym15 = ldf identical;
    base15 = ldf identical in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L171() else L172();
  L183():
    pkg11 = force? pkg10;
    checkMissing(pkg11);
    nzchar4 = ldf nzchar in base;
    r91 = dyn nzchar4(pkg11);
    check L184() else D62();
  L185():
    create3 = ld create;
    check L186() else D63();
  D29():
    deopt 122 [_BaseNamespaceEnv];
  D62():
    deopt 254 [r91];
  D63():
    deopt 256 [c30, create3];
  L23(r48):
    c22 = `as.logical`(r48);
    if c22 then L121() else L24();
  L42(r81):
    r83 = `!`(r81);
    c29 = `as.logical`(r83);
    if c29 then L176() else L43();
  L48():
    goto L53();
  L53():
    pkg16 = ld pkg;
    check L206() else D74();
  L113():
    _BaseNamespaceEnv1 = force? _BaseNamespaceEnv;
    checkMissing(_BaseNamespaceEnv1);
    identical3 = ldf identical in base;
    r46 = dyn identical3(env9, _BaseNamespaceEnv1, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L114() else D30();
  L117():
    where5 = ld where;
    check L119() else D31();
  L118():
    r47 = dyn base8(<sym where>);
    goto L23(r47);
  L171():
    top = ld top;
    check L173() else D56();
  L172():
    r80 = dyn base15(<sym top>, <sym env>);
    goto L42(r80);
  L184():
    goto L46(r91);
  L186():
    create4 = force? create3;
    checkMissing(create4);
    c33 = `as.logical`(create4);
    c34 = `&&`(c30, c33);
    goto L47(c34);
  L188():
    sym17 = ldf `as.character`;
    base17 = ldf `as.character` in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L189() else L190();
  D30():
    deopt 132 [r46];
  D31():
    deopt 138 [where5];
  D56():
    deopt 224 [top];
  D74():
    deopt 291 [pkg16];
  L24():
    sym9 = ldf `is.environment`;
    base9 = ldf `is.environment` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L129() else L130();
  L26():
    _rmpkg1 = ldf `.rmpkg`;
    check L161() else D50();
  L43():
    goto L44(NULL);
  L44(r87):
    goto L45();
  L49(r94):
    st pkg = r94;
    warning = ldf warning;
    check L194() else D67();
  L114():
    goto L21(r46);
  L119():
    where6 = force? where5;
    checkMissing(where6);
    is_numeric = ldf `is.numeric` in base;
    r49 = dyn is_numeric(where6);
    check L120() else D32();
  L121():
    search = ldf search;
    check L122() else D33();
  L173():
    top1 = force? top;
    checkMissing(top1);
    env12 = ld env;
    check L174() else D57();
  L176():
    getPackageName = ldf getPackageName;
    check L177() else D59();
  L189():
    Sys_time = ldf `Sys.time`;
    check L191() else D64();
  L190():
    r93 = dyn base17(<lang Sys.time()>);
    goto L49(r93);
  L206():
    pkg17 = force? pkg16;
    checkMissing(pkg17);
    popenv;
    return pkg17;
  D32():
    deopt 141 [r49];
  D33():
    deopt 143 [];
  D50():
    deopt 204 [];
  D57():
    deopt 226 [env12];
  D59():
    deopt 239 [];
  D64():
    deopt 262 [];
  D67():
    deopt 268 [];
  L27(r55):
    c24 = `as.logical`(r55);
    if c24 then L133() else L28();
  L120():
    goto L23(r49);
  L122():
    r50 = dyn search();
    check L123() else D34();
  L129():
    where9 = ld where;
    check L131() else D36();
  L130():
    r54 = dyn base9(<sym where>);
    goto L27(r54);
  L161():
    p7 = prom<V +>{
      pkg6 = ld pkg;
      pkg7 = force? pkg6;
      checkMissing(pkg7);
      return pkg7;
    };
    r72 = dyn _rmpkg1(p7);
    check L162() else D51();
  L174():
    env13 = force? env12;
    checkMissing(env13);
    identical5 = ldf identical in base;
    r82 = dyn identical5(top1, env13, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L175() else D58();
  L177():
    p9 = prom<V +>{
      top2 = ld top;
      top3 = force? top2;
      checkMissing(top3);
      return top3;
    };
    p10 = prom<V +>{
      create1 = ld create;
      create2 = force? create1;
      checkMissing(create2);
      return create2;
    };
    r86 = dyn getPackageName[, create](p9, p10);
    check L178() else D60();
  L191():
    r95 = dyn Sys_time();
    check L192() else D65();
  L194():
    p13 = prom<V +>{
      gettextf = ldf gettextf;
      p12 = prom<V +>{
        sQuote = ldf sQuote;
        p11 = prom<V +>{
          pkg12 = ld pkg;
          pkg13 = force? pkg12;
          checkMissing(pkg13);
          return pkg13;
        };
        r98 = dyn sQuote(p11);
        return r98;
      };
      r100 = dyn gettextf("Created a package name, %s, when none found", p12);
      return r100;
    };
    r102 = dyn warning[, domain](p13, NA_LGL);
    check L195() else D68();
  D34():
    deopt 144 [r50];
  D36():
    deopt 151 [where9];
  D51():
    deopt 206 [r72];
  D58():
    deopt 236 [r82];
  D60():
    deopt 243 [r86];
  D65():
    deopt 263 [r95];
  D68():
    deopt 272 [r102];
  L28():
    sym12 = ldf nzchar;
    base12 = ldf nzchar in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L150() else L151();
  L123():
    c23 = `is.object`(r50);
    if c23 then L124() else L125(r50);
  L131():
    where10 = force? where9;
    checkMissing(where10);
    is_environment = ldf `is.environment` in base;
    r56 = dyn is_environment(where10);
    check L132() else D37();
  L133():
    search1 = ldf search;
    check L134() else D38();
  L162():
    st pkg = r72;
    goto L20(r72);
  L175():
    goto L42(r82);
  L178():
    st pkg = r86;
    goto L44(r86);
  L192():
    as_character1 = ldf `as.character` in base;
    r96 = dyn as_character1(r95);
    check L193() else D66();
  L195():
    saved2 = ld saved;
    check L196() else D69();
  D37():
    deopt 154 [r56];
  D38():
    deopt 156 [];
  D66():
    deopt 265 [r96];
  D69():
    deopt 273 [saved2];
  L25(dx1):
    st pkg = dx1;
    goto L26();
  L36(r66):
    c27 = `as.logical`(r66);
    if c27 then L154() else L37();
  L124():
    dr = tryDispatchBuiltin.1("[[", r50);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L126() else L125(dr);
  L125(r52):
    where7 = ld where;
    check L127() else D35();
  L132():
    goto L27(r56);
  L134():
    r57 = dyn search1();
    check L135() else D39();
  L150():
    envName6 = ld envName;
    check L152() else D45();
  L151():
    r65 = dyn base12(<sym envName>);
    goto L36(r65);
  L193():
    goto L49(r96);
  L196():
    saved3 = force? saved2;
    checkMissing(saved3);
    r103 = `!`(saved3);
    c37 = `as.logical`(r103);
    if c37 then L197() else L50(c37);
  D35():
    deopt 145 [r52, where7];
  D39():
    deopt 157 [r57];
  D45():
    deopt 189 [envName6];
  L37():
    sym13 = ldf `as.character`;
    base13 = ldf `as.character` in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L157() else L158();
  L50(c39):
    c43 = `as.logical`(c39);
    if c43 then L201() else L51();
  L126():
    dx = getTryDispatchBuiltinValue(dr);
    goto L25(dx);
  L127():
    where8 = force? where7;
    __ = ldf `[[` in base;
    r53 = dyn __(r52, where8);
    goto L25(r53);
  L135():
    s = toForSeq(r57);
    l = length(s);
    i = 0;
    goto L29(i);
  L152():
    envName7 = force? envName6;
    checkMissing(envName7);
    nzchar2 = ldf nzchar in base;
    r67 = dyn nzchar2(envName7);
    check L153() else D46();
  L154():
    envName8 = ld envName;
    check L155() else D47();
  L197():
    environmentIsLocked = ldf environmentIsLocked;
    check L198() else D70();
  D46():
    deopt 192 [r67];
  D47():
    deopt 193 [envName8];
  D70():
    deopt 277 [c37];
  L29(i1):
    i2 = `+`.1(i1, 1);
    c25 = `<`.1(l, i2);
    if c25 then L136() else L35();
  L38(r69):
    st pkg = r69;
    goto L26();
  L51():
    goto L52(NULL);
  L52(r110):
    goto L53();
  L153():
    goto L36(r67);
  L155():
    envName9 = force? envName8;
    checkMissing(envName9);
    st pkg = envName9;
    goto L26();
  L157():
    where13 = ld where;
    check L159() else D48();
  L158():
    r68 = dyn base13(<sym where>);
    goto L38(r68);
  L198():
    p14 = prom<V +>{
      env14 = ld env;
      env15 = force? env14;
      checkMissing(env15);
      return env15;
    };
    r105 = dyn environmentIsLocked(p14);
    check L199() else D71();
  L201():
    setPackageName = ldf setPackageName;
    check L202() else D72();
  D48():
    deopt 198 [where13];
  D71():
    deopt 279 [c37, r105];
  D72():
    deopt 283 [];
  L33(i13):
    goto L26();
  L35():
    x = `[[`(s, i2, NULL, TRUE);
    st db = x;
    sym10 = ldf identical;
    base10 = ldf identical in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L137() else L138();
  L136():
    goto L33(i2);
  L159():
    where14 = force? where13;
    checkMissing(where14);
    as_character = ldf `as.character` in base;
    r70 = dyn as_character(where14);
    check L160() else D49();
  L199():
    r106 = `!`(r105);
    c40 = `as.logical`(r106);
    c41 = `&&`(c37, c40);
    goto L50(c41);
  L202():
    p15 = prom<V +>{
      pkg14 = ld pkg;
      pkg15 = force? pkg14;
      checkMissing(pkg15);
      return pkg15;
    };
    p16 = prom<V +>{
      env16 = ld env;
      env17 = force? env16;
      checkMissing(env17);
      return env17;
    };
    r109 = dyn setPackageName(p15, p16);
    check L203() else D73();
  D49():
    deopt 201 [r70];
  D73():
    deopt 286 [r109];
  L30(i7, r59):
    c26 = `as.logical`(r59);
    if c26 then L145() else L32();
  L137():
    sym11 = ldf `as.environment`;
    base11 = ldf `as.environment` in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L139() else L140();
  L138():
    r58 = dyn base10(<lang as.environment(db)>, <sym where>);
    goto L30(i2, r58);
  L160():
    goto L38(r70);
  L203():
    goto L52(r109);
  L31(i10, r61):
    where11 = ld where;
    check L143() else D42();
  L32():
    goto L29(i7);
  L139():
    db = ld db;
    check L141() else D40();
  L140():
    r60 = dyn base11(<sym db>);
    goto L31(i2, r60);
  L145():
    db2 = ld db;
    check L146() else D44();
  D40():
    deopt 162 [i2, db];
  D42():
    deopt 166 [i10, where11];
  D44():
    deopt 177 [i7, db2];
  L141():
    db1 = force? db;
    checkMissing(db1);
    as_environment1 = ldf `as.environment` in base;
    r62 = dyn as_environment1(db1);
    check L142() else D41();
  L143():
    where12 = force? where11;
    checkMissing(where12);
    identical4 = ldf identical in base;
    r63 = dyn identical4(r61, where12, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
    check L144() else D43();
  L146():
    db3 = force? db2;
    checkMissing(db3);
    st pkg = db3;
    goto L33(i7);
  D41():
    deopt 165 [i2, r62];
  D43():
    deopt 176 [i10, r63];
  L142():
    goto L31(i2, r62);
  L144():
    goto L30(i10, r63);
  }
}