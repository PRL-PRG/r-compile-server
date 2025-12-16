fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-537896148`;
    st attachNamespace = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-537896148`(ns, pos, depends, exclude, `include.only`) {
  (reg ns:*, reg pos:*, reg depends:*, reg exclude:*, reg include_only:*) -+> V { var ns:*, var pos:*, reg pos_isMissing:L, reg pos_orDefault:*, var depends:*, reg depends_isMissing:L, reg depends_orDefault:*, var exclude:*, var `include.only`:*, reg r:cls, reg r1:cls, reg asNamespace:cls, reg ns1:*, reg ns2:V, reg p:p(V +), reg r3:V, reg getNamespaceName:cls, reg ns3:*, reg ns4:V, reg p1:p(V +), reg r5:V, reg _getNamespaceInfo:cls, reg ns5:*, reg ns6:V, reg p2:p(V +), reg r7:V, reg paste0:cls, reg nsname:*, reg nsname1:V, reg p3:p(V +), reg r9:V, reg _in_:cls, reg attname:*, reg attname1:V, reg p4:p(V +), reg search:cls, reg r11:V, reg p5:p(V +), reg r13:V, reg c:L, reg stop:cls, reg r14:V, reg attach:cls, reg pos1:*, reg pos2:V, reg p6:p(V +), reg attname2:*, reg attname3:V, reg p7:p(V +), reg r18:V, reg sym:cls, reg base:cls, reg guard:L, reg r19:V, reg on_exit:cls, reg r21:V, reg nspath:*, reg nspath1:V, reg l:*, reg attr__:cls, reg r22:V, reg getNamespaceExports:cls, reg ns7:*, reg ns8:V, reg p8:p(V +), reg r24:V, reg importIntoEnv:cls, reg env:*, reg env1:V, reg p9:p(V +), reg exports:*, reg exports1:V, reg p10:p(V +), reg ns9:*, reg ns10:V, reg p11:p(V +), reg exports2:*, reg exports3:V, reg p12:p(V +), reg r29:V, reg _getNamespaceInfo1:cls, reg ns11:*, reg ns12:V, reg p13:p(V +), reg r31:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r32:V, reg r33:V, reg dimpenv:*, reg dimpenv1:V, reg names:cls, reg r34:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r35:V, reg env2:*, reg env3:V, reg dnames:*, reg dnames1:V, reg dimpenv2:*, reg dimpenv3:V, reg dnames2:*, reg dnames3:V, reg importIntoEnv1:cls, reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg depends1:*, reg depends2:V, reg length:cls, reg r40:V, reg r41:V, reg c1:L, reg depends3:*, reg depends4:V, reg l1:*, reg c2:L, reg depends6:V, reg l3:*, reg dr:V, reg dc:L, reg dx:V, reg depends8:V, reg dx1:V, reg r42:V, reg Sys_setenv:cls, reg nsname2:*, reg nsname3:V, reg p14:p(V +), reg r44:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r45:V, reg on_exit1:cls, reg r47:V, reg runHook:cls, reg ns13:*, reg ns14:V, reg p15:p(V +), reg dirname:cls, reg nspath2:*, reg nspath3:V, reg p16:p(V +), reg r50:V, reg p17:p(V +), reg nsname4:*, reg nsname5:V, reg p18:p(V +), reg r53:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r54:V, reg r55:V, reg missing:cls, reg r56:V, reg r57:V, reg c3:L, reg c5:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r58:V, reg c8:L, reg r59:V, reg exclude1:*, reg exclude2:V, reg length1:cls, reg r60:V, reg r61:V, reg c9:L, reg c10:V, reg c12:L, reg rm:cls, reg exclude3:*, reg exclude4:V, reg p19:p(V +), reg env4:*, reg env5:V, reg p20:p(V +), reg r64:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r66:V, reg r67:V, reg missing1:cls, reg r68:V, reg r69:V, reg c13:L, reg ls:cls, reg env6:*, reg env7:V, reg p21:p(V +), reg r71:V, reg setdiff:cls, reg include_only1:*, reg include_only2:V, reg p22:p(V +), reg vars:*, reg vars1:V, reg p23:p(V +), reg r74:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r75:V, reg r76:V, reg nf:*, reg nf1:V, reg length2:cls, reg r77:V, reg r78:V, reg c14:L, reg strwrap:cls, reg paste1:cls, reg nf2:*, reg nf3:V, reg p24:p(V +), reg r80:V, reg p25:p(V +), reg r82:V, reg stop1:cls, reg gettextf:cls, reg sQuote:cls, reg nsname6:*, reg nsname7:V, reg p26:p(V +), reg r84:V, reg p27:p(V +), reg nf4:*, reg nf5:V, reg p28:p(V +), reg r87:V, reg p29:p(V +), reg r89:V, reg rm1:cls, reg setdiff1:cls, reg vars2:*, reg vars3:V, reg p30:p(V +), reg include_only3:*, reg include_only4:V, reg p31:p(V +), reg r93:V, reg p32:p(V +), reg env8:*, reg env9:V, reg p33:p(V +), reg r96:V, reg lockEnvironment:cls, reg env10:*, reg env11:V, reg p34:p(V +), reg r99:V, reg runUserHook:cls, reg nsname8:*, reg nsname9:V, reg p35:p(V +), reg nspath4:*, reg nspath5:V, reg p36:p(V +), reg r102:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r103:V, reg on_exit2:cls, reg r105:V, reg Sys_unsetenv:cls, reg r106:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r107:V, reg r108:V, reg env12:*, reg env13:V, reg invisible:cls, reg r109:V |
    mkenv;
    st ns = ns;
    pos_isMissing = missing.0(pos);
    if pos_isMissing then L0(2) else L0(pos);
  L0(pos_orDefault):
    st pos = pos_orDefault;
    depends_isMissing = missing.0(depends);
    if depends_isMissing then L1(NULL) else L1(depends);
  L1(depends_orDefault):
    st depends = depends_orDefault;
    st exclude = exclude;
    st `include.only` = include_only;
    r = clos inner1452683407;
    st runHook = r;
    r1 = clos inner717709863;
    st runUserHook = r1;
    asNamespace = ldf asNamespace;
    check L24() else D0();
  D0():
    deopt 7 [];
  L24():
    p = prom<V +>{
      ns1 = ld ns;
      ns2 = force? ns1;
      checkMissing(ns2);
      return ns2;
    };
    r3 = dyn asNamespace[, `base.OK`](p, FALSE);
    check L25() else D1();
  D1():
    deopt 11 [r3];
  L25():
    st ns = r3;
    getNamespaceName = ldf getNamespaceName;
    check L26() else D2();
  D2():
    deopt 14 [];
  L26():
    p1 = prom<V +>{
      ns3 = ld ns;
      ns4 = force? ns3;
      checkMissing(ns4);
      return ns4;
    };
    r5 = dyn getNamespaceName(p1);
    check L27() else D3();
  D3():
    deopt 16 [r5];
  L27():
    st nsname = r5;
    _getNamespaceInfo = ldf `.getNamespaceInfo`;
    check L28() else D4();
  D4():
    deopt 19 [];
  L28():
    p2 = prom<V +>{
      ns5 = ld ns;
      ns6 = force? ns5;
      checkMissing(ns6);
      return ns6;
    };
    r7 = dyn _getNamespaceInfo(p2, "path");
    check L29() else D5();
  D5():
    deopt 22 [r7];
  L29():
    st nspath = r7;
    paste0 = ldf paste0;
    check L30() else D6();
  D6():
    deopt 25 [];
  L30():
    p3 = prom<V +>{
      nsname = ld nsname;
      nsname1 = force? nsname;
      checkMissing(nsname1);
      return nsname1;
    };
    r9 = dyn paste0("package:", p3);
    check L31() else D7();
  D7():
    deopt 28 [r9];
  L31():
    st attname = r9;
    _in_ = ldf `%in%`;
    check L32() else D8();
  D8():
    deopt 31 [];
  L32():
    p4 = prom<V +>{
      attname = ld attname;
      attname1 = force? attname;
      checkMissing(attname1);
      return attname1;
    };
    p5 = prom<V +>{
      search = ldf search;
      r11 = dyn search();
      return r11;
    };
    r13 = dyn _in_(p4, p5);
    check L33() else D9();
  D9():
    deopt 34 [r13];
  L33():
    c = `as.logical`(r13);
    if c then L34() else L2();
  L2():
    goto L3();
  L3():
    attach = ldf attach;
    check L38() else D12();
  L34():
    stop = ldf stop;
    check L35() else D10();
  D10():
    deopt 36 [];
  D12():
    deopt 42 [];
  L35():
    r14 = dyn stop("namespace is already attached");
    check L36() else D11();
  L38():
    p6 = prom<V +>{
      pos1 = ld pos;
      pos2 = force? pos1;
      checkMissing(pos2);
      return pos2;
    };
    p7 = prom<V +>{
      attname2 = ld attname;
      attname3 = force? attname2;
      checkMissing(attname3);
      return attname3;
    };
    r18 = dyn attach[, pos, name](NULL, p6, p7);
    check L39() else D13();
  D11():
    deopt 38 [r14];
  D13():
    deopt 48 [r18];
  L36():
    goto L3();
  L39():
    st env = r18;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L40() else L41();
  L4():
    nspath = ld nspath;
    check L42() else D14();
  L40():
    on_exit = ldf `on.exit` in base;
    r21 = dyn on_exit(<lang .Internal(detach(pos))>);
    goto L4();
  L41():
    r19 = dyn base(<lang .Internal(detach(pos))>);
    goto L4();
  D14():
    deopt 53 [nspath];
  L42():
    nspath1 = force? nspath;
    checkMissing(nspath1);
    l = ld env;
    attr__ = ldf `attr<-`;
    check L43() else D15();
  D15():
    deopt 56 [nspath1, l, nspath1];
  L43():
    r22 = dyn attr__(l, NULL, "path", nspath1);
    check L44() else D16();
  D16():
    deopt 59 [nspath1, r22];
  L44():
    st env = r22;
    getNamespaceExports = ldf getNamespaceExports;
    check L45() else D17();
  D17():
    deopt 62 [];
  L45():
    p8 = prom<V +>{
      ns7 = ld ns;
      ns8 = force? ns7;
      checkMissing(ns8);
      return ns8;
    };
    r24 = dyn getNamespaceExports(p8);
    check L46() else D18();
  D18():
    deopt 64 [r24];
  L46():
    st exports = r24;
    importIntoEnv = ldf importIntoEnv;
    check L47() else D19();
  D19():
    deopt 67 [];
  L47():
    p9 = prom<V +>{
      env = ld env;
      env1 = force? env;
      checkMissing(env1);
      return env1;
    };
    p10 = prom<V +>{
      exports = ld exports;
      exports1 = force? exports;
      checkMissing(exports1);
      return exports1;
    };
    p11 = prom<V +>{
      ns9 = ld ns;
      ns10 = force? ns9;
      checkMissing(ns10);
      return ns10;
    };
    p12 = prom<V +>{
      exports2 = ld exports;
      exports3 = force? exports2;
      checkMissing(exports3);
      return exports3;
    };
    r29 = dyn importIntoEnv(p9, p10, p11, p12);
    check L48() else D20();
  D20():
    deopt 72 [r29];
  L48():
    _getNamespaceInfo1 = ldf `.getNamespaceInfo`;
    check L49() else D21();
  D21():
    deopt 74 [];
  L49():
    p13 = prom<V +>{
      ns11 = ld ns;
      ns12 = force? ns11;
      checkMissing(ns12);
      return ns12;
    };
    r31 = dyn _getNamespaceInfo1(p13, "lazydata");
    check L50() else D22();
  D22():
    deopt 77 [r31];
  L50():
    st dimpenv = r31;
    sym1 = ldf names;
    base1 = ldf names in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L51() else L52();
  L5(r33):
    st dnames = r33;
    sym2 = ldf `.Internal`;
    base2 = ldf `.Internal` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L55() else L56();
  L51():
    dimpenv = ld dimpenv;
    check L53() else D23();
  L52():
    r32 = dyn base1(<sym dimpenv>);
    goto L5(r32);
  D23():
    deopt 81 [dimpenv];
  L6():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L62() else L63();
  L53():
    dimpenv1 = force? dimpenv;
    checkMissing(dimpenv1);
    names = ldf names in base;
    r34 = dyn names(dimpenv1);
    check L54() else D24();
  L55():
    env2 = ld env;
    check L57() else D25();
  L56():
    r35 = dyn base2(<lang importIntoEnv(env, dnames, dimpenv, dnames)>);
    goto L6();
  D24():
    deopt 84 [r34];
  D25():
    deopt 88 [env2];
  L7(r39):
    r41 = `>`(r39, 0);
    c1 = `as.logical`(r41);
    if c1 then L66() else L8();
  L54():
    goto L5(r34);
  L57():
    env3 = force? env2;
    checkMissing(env3);
    dnames = ld dnames;
    check L58() else D26();
  L62():
    depends1 = ld depends;
    check L64() else D30();
  L63():
    r38 = dyn base3(<sym depends>);
    goto L7(r38);
  D26():
    deopt 90 [dnames];
  D30():
    deopt 100 [depends1];
  L8():
    goto L9();
  L9():
    Sys_setenv = ldf `Sys.setenv`;
    check L73() else D33();
  L58():
    dnames1 = force? dnames;
    checkMissing(dnames1);
    dimpenv2 = ld dimpenv;
    check L59() else D27();
  L64():
    depends2 = force? depends1;
    checkMissing(depends2);
    length = ldf length in base;
    r40 = dyn length(depends2);
    check L65() else D31();
  L66():
    depends3 = ld depends;
    check L67() else D32();
  D27():
    deopt 92 [dimpenv2];
  D31():
    deopt 103 [r40];
  D32():
    deopt 106 [depends3];
  D33():
    deopt 114 [];
  L59():
    dimpenv3 = force? dimpenv2;
    checkMissing(dimpenv3);
    dnames2 = ld dnames;
    check L60() else D28();
  L65():
    goto L7(r40);
  L67():
    depends4 = force? depends3;
    checkMissing(depends4);
    l1 = ld env;
    c2 = `is.object`(l1);
    if c2 then L69() else L70(depends4, l1);
  L73():
    p14 = prom<V +>{
      nsname2 = ld nsname;
      nsname3 = force? nsname2;
      checkMissing(nsname3);
      return nsname3;
    };
    r44 = dyn Sys_setenv[_R_NS_LOAD_](p14);
    check L74() else D34();
  D28():
    deopt 94 [dnames2];
  D34():
    deopt 117 [r44];
  L60():
    dnames3 = force? dnames2;
    checkMissing(dnames3);
    importIntoEnv1 = ldf importIntoEnv in base;
    r37 = dyn importIntoEnv1(env3, dnames1, dimpenv3, dnames3);
    check L61() else D29();
  L68(depends8, dx1):
    st env = dx1;
    goto L9();
  L69():
    dr = tryDispatchBuiltin.0("$<-", l1, depends4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L71() else L70(depends4, dr);
  L70(depends6, l3):
    r42 = `$<-`(l3, <sym .Depends>, depends4);
    goto L68(depends6, r42);
  L74():
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L75() else L76();
  D29():
    deopt 97 [r37];
  L10():
    runHook = ldf runHook;
    check L77() else D35();
  L61():
    goto L6();
  L71():
    dx = getTryDispatchBuiltinValue(dr);
    goto L68(depends4, dx);
  L75():
    on_exit1 = ldf `on.exit` in base;
    r47 = dyn on_exit1(<lang Sys.unsetenv("_R_NS_LOAD_")>, TRUE);
    goto L10();
  L76():
    r45 = dyn base4[, add](<lang Sys.unsetenv("_R_NS_LOAD_")>, TRUE);
    goto L10();
  D35():
    deopt 122 [];
  L77():
    p15 = prom<V +>{
      ns13 = ld ns;
      ns14 = force? ns13;
      checkMissing(ns14);
      return ns14;
    };
    p17 = prom<V +>{
      dirname = ldf dirname;
      p16 = prom<V +>{
        nspath2 = ld nspath;
        nspath3 = force? nspath2;
        checkMissing(nspath3);
        return nspath3;
      };
      r50 = dyn dirname(p16);
      return r50;
    };
    p18 = prom<V +>{
      nsname4 = ld nsname;
      nsname5 = force? nsname4;
      checkMissing(nsname5);
      return nsname5;
    };
    r53 = dyn runHook(".onAttach", p15, p17, p18);
    check L78() else D36();
  D36():
    deopt 127 [r53];
  L78():
    sym5 = ldf missing;
    base5 = ldf missing in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L79() else L80();
  L11(r55):
    r57 = `!`(r55);
    c3 = `as.logical`(r57);
    if c3 then L81() else L12(c3);
  L79():
    missing = ldf missing in base;
    r56 = dyn missing(<sym exclude>);
    goto L11(r56);
  L80():
    r54 = dyn base5(<sym exclude>);
    goto L11(r54);
  L12(c5):
    c12 = `as.logical`(c5);
    if c12 then L87() else L14();
  L81():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L82() else L83();
  L13(c8, r59):
    r61 = `>`(r59, 0.0);
    c9 = `as.logical`(r61);
    c10 = `&&`(c8, c9);
    goto L12(c10);
  L14():
    goto L15();
  L15():
    sym7 = ldf missing;
    base7 = ldf missing in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L91() else L92();
  L82():
    exclude1 = ld exclude;
    check L84() else D37();
  L83():
    r58 = dyn base6(<sym exclude>);
    goto L13(c3, r58);
  L87():
    rm = ldf rm;
    check L88() else D39();
  D37():
    deopt 134 [c3, exclude1];
  D39():
    deopt 142 [];
  L16(r67):
    r69 = `!`(r67);
    c13 = `as.logical`(r69);
    if c13 then L93() else L17();
  L84():
    exclude2 = force? exclude1;
    checkMissing(exclude2);
    length1 = ldf length in base;
    r60 = dyn length1(exclude2);
    check L85() else D38();
  L88():
    p19 = prom<V +>{
      exclude3 = ld exclude;
      exclude4 = force? exclude3;
      checkMissing(exclude4);
      return exclude4;
    };
    p20 = prom<V +>{
      env4 = ld env;
      env5 = force? env4;
      checkMissing(env5);
      return env5;
    };
    r64 = dyn rm[list, envir](p19, p20);
    check L89() else D40();
  L91():
    missing1 = ldf missing in base;
    r68 = dyn missing1(<sym include.only>);
    goto L16(r68);
  L92():
    r66 = dyn base7(<sym include.only>);
    goto L16(r66);
  D38():
    deopt 137 [c3, r60];
  D40():
    deopt 147 [r64];
  L17():
    goto L21();
  L21():
    lockEnvironment = ldf lockEnvironment;
    check L111() else D53();
  L85():
    goto L13(c3, r60);
  L89():
    goto L15();
  L93():
    ls = ldf ls;
    check L94() else D41();
  D41():
    deopt 155 [];
  D53():
    deopt 204 [];
  L94():
    p21 = prom<V +>{
      env6 = ld env;
      env7 = force? env6;
      checkMissing(env7);
      return env7;
    };
    r71 = dyn ls[, `all.names`](p21, TRUE);
    check L95() else D42();
  L111():
    p34 = prom<V +>{
      env10 = ld env;
      env11 = force? env10;
      checkMissing(env11);
      return env11;
    };
    r99 = dyn lockEnvironment(p34, TRUE);
    check L112() else D54();
  D42():
    deopt 159 [r71];
  D54():
    deopt 207 [r99];
  L95():
    st vars = r71;
    setdiff = ldf setdiff;
    check L96() else D43();
  L112():
    runUserHook = ldf runUserHook;
    check L113() else D55();
  D43():
    deopt 162 [];
  D55():
    deopt 209 [];
  L96():
    p22 = prom<V +>{
      include_only1 = ld `include.only`;
      include_only2 = force? include_only1;
      checkMissing(include_only2);
      return include_only2;
    };
    p23 = prom<V +>{
      vars = ld vars;
      vars1 = force? vars;
      checkMissing(vars1);
      return vars1;
    };
    r74 = dyn setdiff(p22, p23);
    check L97() else D44();
  L113():
    p35 = prom<V +>{
      nsname8 = ld nsname;
      nsname9 = force? nsname8;
      checkMissing(nsname9);
      return nsname9;
    };
    p36 = prom<V +>{
      nspath4 = ld nspath;
      nspath5 = force? nspath4;
      checkMissing(nspath5);
      return nspath5;
    };
    r102 = dyn runUserHook(p35, p36);
    check L114() else D56();
  D44():
    deopt 165 [r74];
  D56():
    deopt 212 [r102];
  L97():
    st nf = r74;
    sym8 = ldf length;
    base8 = ldf length in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L98() else L99();
  L114():
    sym9 = ldf `on.exit`;
    base9 = ldf `on.exit` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L115() else L116();
  L18(r76):
    r78 = `>`(r76, 0.0);
    c14 = `as.logical`(r78);
    if c14 then L102() else L19();
  L22():
    Sys_unsetenv = ldf `Sys.unsetenv`;
    check L117() else D57();
  L98():
    nf = ld nf;
    check L100() else D45();
  L99():
    r75 = dyn base8(<sym nf>);
    goto L18(r75);
  L115():
    on_exit2 = ldf `on.exit` in base;
    r105 = dyn on_exit2();
    goto L22();
  L116():
    r103 = dyn base9();
    goto L22();
  D45():
    deopt 169 [nf];
  D57():
    deopt 217 [];
  L19():
    goto L20();
  L20():
    rm1 = ldf rm;
    check L108() else D51();
  L100():
    nf1 = force? nf;
    checkMissing(nf1);
    length2 = ldf length in base;
    r77 = dyn length2(nf1);
    check L101() else D46();
  L102():
    strwrap = ldf strwrap;
    check L103() else D47();
  L117():
    r106 = dyn Sys_unsetenv("_R_NS_LOAD_");
    check L118() else D58();
  D46():
    deopt 172 [r77];
  D47():
    deopt 176 [];
  D51():
    deopt 195 [];
  D58():
    deopt 219 [r106];
  L101():
    goto L18(r77);
  L103():
    p25 = prom<V +>{
      paste1 = ldf paste;
      p24 = prom<V +>{
        nf2 = ld nf;
        nf3 = force? nf2;
        checkMissing(nf3);
        return nf3;
      };
      r80 = dyn paste1[, collapse](p24, ", ");
      return r80;
    };
    r82 = dyn strwrap[, indent, exdent](p25, 4, 4);
    check L104() else D48();
  L108():
    p32 = prom<V +>{
      setdiff1 = ldf setdiff;
      p30 = prom<V +>{
        vars2 = ld vars;
        vars3 = force? vars2;
        checkMissing(vars3);
        return vars3;
      };
      p31 = prom<V +>{
        include_only3 = ld `include.only`;
        include_only4 = force? include_only3;
        checkMissing(include_only4);
        return include_only4;
      };
      r93 = dyn setdiff1(p30, p31);
      return r93;
    };
    p33 = prom<V +>{
      env8 = ld env;
      env9 = force? env8;
      checkMissing(env9);
      return env9;
    };
    r96 = dyn rm1[list, envir](p32, p33);
    check L109() else D52();
  L118():
    sym10 = ldf invisible;
    base10 = ldf invisible in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L119() else L120();
  D48():
    deopt 182 [r82];
  D52():
    deopt 200 [r96];
  L23(r108):
    popenv;
    return r108;
  L104():
    st nf = r82;
    stop1 = ldf stop;
    check L105() else D49();
  L109():
    goto L21();
  L119():
    env12 = ld env;
    check L121() else D59();
  L120():
    r107 = dyn base10(<sym env>);
    goto L23(r107);
  D49():
    deopt 185 [];
  D59():
    deopt 222 [env12];
  L105():
    p29 = prom<V +>{
      gettextf = ldf gettextf;
      p27 = prom<V +>{
        sQuote = ldf sQuote;
        p26 = prom<V +>{
          nsname6 = ld nsname;
          nsname7 = force? nsname6;
          checkMissing(nsname7);
          return nsname7;
        };
        r84 = dyn sQuote(p26);
        return r84;
      };
      p28 = prom<V +>{
        nf4 = ld nf;
        nf5 = force? nf4;
        checkMissing(nf5);
        return nf5;
      };
      r87 = dyn gettextf("not found in namespace %s: \n\n%s\n", p27, p28);
      return r87;
    };
    r89 = dyn stop1[, `call.`, domain](p29, FALSE, NA_LGL);
    check L106() else D50();
  L121():
    env13 = force? env12;
    checkMissing(env13);
    invisible = ldf invisible in base;
    r109 = dyn invisible(env13);
    check L122() else D60();
  D50():
    deopt 191 [r89];
  D60():
    deopt 225 [r109];
  L106():
    goto L20();
  L122():
    goto L23(r109);
  }
}
fun inner1452683407(hookname, env, libname, pkgname) {
  (reg hookname:*, reg env:*, reg libname:*, reg pkgname:*) -+> V { var hookname:*, var env:*, var libname:*, var pkgname:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg env1:*, reg env2:V, reg c:L, reg env4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg hookname1:*, reg hookname2:V, reg __:cls, reg r2:V, reg c1:V, reg r3:V, reg c2:L, reg tryCatch:cls, reg fun:cls, reg libname1:*, reg libname2:V, reg p:p(V +), reg pkgname1:*, reg pkgname2:V, reg p1:p(V +), reg r6:V, reg p2:p(V +), reg identity:*, reg identity1:V, reg p3:p(V +), reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg res:*, reg res1:V, reg inherits:cls, reg r12:V, reg c3:L, reg stop:cls, reg gettextf:cls, reg hookname3:*, reg hookname4:V, reg p4:p(V +), reg nsname:*, reg nsname1:V, reg p5:p(V +), reg deparse:cls, reg conditionCall:cls, reg res2:*, reg res3:V, reg p6:p(V +), reg r16:V, reg p7:p(V +), reg r18:V, reg c4:L, reg r20:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r21:V, reg p8:p(V +), reg conditionMessage:cls, reg res4:*, reg res5:V, reg p9:p(V +), reg r24:V, reg p10:p(V +), reg r26:V, reg p11:p(V +), reg r28:V |
    mkenv;
    st hookname = hookname;
    st env = env;
    st libname = libname;
    st pkgname = pkgname;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    r3 = `!`(r1);
    c2 = `as.logical`(r3);
    if c2 then L12() else L2();
  L5():
    env1 = ld env;
    check L7() else D0();
  L6():
    r = dyn base(<lang `<-`(fun, `[[`(env, hookname))>);
    goto L0(r);
  D0():
    deopt 1 [env1];
  L2():
    invisible.0();
    popenv;
    return NULL;
  L7():
    env2 = force? env1;
    checkMissing(env2);
    c = `is.object`(env2);
    if c then L8() else L9(env2);
  L12():
    tryCatch = ldf tryCatch;
    check L13() else D2();
  D2():
    deopt 10 [];
  L1(dx1):
    st fun = dx1;
    c1 = `==`(dx1, NULL);
    goto L0(c1);
  L8():
    dr = tryDispatchBuiltin.1("[[", env2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L10() else L9(dr);
  L9(env4):
    hookname1 = ld hookname;
    check L11() else D1();
  L13():
    p2 = prom<V +>{
      fun = ldf fun;
      p = prom<V +>{
        libname1 = ld libname;
        libname2 = force? libname1;
        checkMissing(libname2);
        return libname2;
      };
      p1 = prom<V +>{
        pkgname1 = ld pkgname;
        pkgname2 = force? pkgname1;
        checkMissing(pkgname2);
        return pkgname2;
      };
      r6 = dyn fun(p, p1);
      return r6;
    };
    p3 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r9 = dyn tryCatch[, error](p2, p3);
    check L14() else D3();
  D1():
    deopt 3 [env4, hookname1];
  D3():
    deopt 14 [r9];
  L10():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L11():
    hookname2 = force? hookname1;
    __ = ldf `[[` in base;
    r2 = dyn __(env4, hookname2);
    goto L1(r2);
  L14():
    st res = r9;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L3(r11):
    c3 = `as.logical`(r11);
    if c3 then L19() else L4();
  L15():
    res = ld res;
    check L17() else D4();
  L16():
    r10 = dyn base1(<sym res>, "error");
    goto L3(r10);
  D4():
    deopt 18 [res];
  L4():
    invisible.0();
    popenv;
    return NULL;
  L17():
    res1 = force? res;
    checkMissing(res1);
    inherits = ldf inherits in base;
    r12 = dyn inherits(res1, "error", FALSE);
    check L18() else D5();
  L19():
    stop = ldf stop;
    check L20() else D6();
  D5():
    deopt 23 [r12];
  D6():
    deopt 25 [];
  L18():
    goto L3(r12);
  L20():
    p11 = prom<V +>{
      gettextf = ldf gettextf;
      p4 = prom<V +>{
        hookname3 = ld hookname;
        hookname4 = force? hookname3;
        checkMissing(hookname4);
        return hookname4;
      };
      p5 = prom<V +>{
        nsname = ld nsname;
        nsname1 = force? nsname;
        checkMissing(nsname1);
        return nsname1;
      };
      p8 = prom<V +>{
        deparse = ldf deparse;
        p7 = prom<V +>{
          conditionCall = ldf conditionCall;
          p6 = prom<V +>{
            res2 = ld res;
            res3 = force? res2;
            checkMissing(res3);
            return res3;
          };
          r16 = dyn conditionCall(p6);
          return r16;
        };
        r18 = dyn deparse(p7);
        c4 = `is.object`(r18);
        if c4 then L1() else L2(r18);
      L0(dx3):
        return dx3;
      L1():
        dr2 = tryDispatchBuiltin.1("[", r18);
        dc1 = getTryDispatchBuiltinDispatched(dr2);
        if dc1 then L3() else L2(dr2);
      L2(r20):
        __1 = ldf `[` in base;
        r21 = dyn __1(r20, 1);
        goto L0(r21);
      L3():
        dx2 = getTryDispatchBuiltinValue(dr2);
        goto L0(dx2);
      };
      p10 = prom<V +>{
        conditionMessage = ldf conditionMessage;
        p9 = prom<V +>{
          res4 = ld res;
          res5 = force? res4;
          checkMissing(res5);
          return res5;
        };
        r24 = dyn conditionMessage(p9);
        return r24;
      };
      r26 = dyn gettextf("%s failed in %s() for '%s', details:\n  call: %s\n  error: %s", p4, "attachNamespace", p5, p8, p10);
      return r26;
    };
    r28 = dyn stop[, `call.`, domain](p11, FALSE, NA_LGL);
    check L21() else D7();
  D7():
    deopt 31 [r28];
  L21():
    popenv;
    return r28;
  }
}
fun inner717709863(pkgname, pkgpath) {
  (reg pkgname:*, reg pkgpath:*) -+> V { var pkgname:*, var pkgpath:*, reg getHook:cls, reg packageEvent:cls, reg pkgname1:*, reg pkgname2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg hook:*, reg hook1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg try:cls, reg fun:cls, reg pkgname3:*, reg pkgname4:V, reg p2:p(V +), reg pkgpath1:*, reg pkgpath2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
    mkenv;
    st pkgname = pkgname;
    st pkgpath = pkgpath;
    getHook = ldf getHook;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p1 = prom<V +>{
      packageEvent = ldf packageEvent;
      p = prom<V +>{
        pkgname1 = ld pkgname;
        pkgname2 = force? pkgname1;
        checkMissing(pkgname2);
        return pkgname2;
      };
      r1 = dyn packageEvent(p, "attach");
      return r1;
    };
    r3 = dyn getHook(p1);
    check L3() else D1();
  D1():
    deopt 3 [r3];
  L3():
    st hook = r3;
    hook = ld hook;
    check L4() else D2();
  D2():
    deopt 5 [hook];
  L4():
    hook1 = force? hook;
    checkMissing(hook1);
    s = toForSeq(hook1);
    l = length(s);
    i = 0;
    goto L0(i);
  L0(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L5() else L1();
  L1():
    x = `[[`(s, i2, NULL, TRUE);
    st fun = x;
    try = ldf try;
    check L6() else D3();
  L5():
    invisible.0();
    popenv;
    return i2;
  D3():
    deopt 8 [i2];
  L6():
    p4 = prom<V +>{
      fun = ldf fun;
      p2 = prom<V +>{
        pkgname3 = ld pkgname;
        pkgname4 = force? pkgname3;
        checkMissing(pkgname4);
        return pkgname4;
      };
      p3 = prom<V +>{
        pkgpath1 = ld pkgpath;
        pkgpath2 = force? pkgpath1;
        checkMissing(pkgpath2);
        return pkgpath2;
      };
      r6 = dyn fun(p2, p3);
      return r6;
    };
    r8 = dyn try(p4);
    check L7() else D4();
  D4():
    deopt 10 [i2, r8];
  L7():
    goto L0(i2);
  }
}